#!/bin/bash

# $1 - Kernel module name
# $2 - the beep tool to use
# $3 - The mode
# $4 - The implementation
do_test () {
  sudo insmod "$1".ko
  echo -n "$3 1000 $4 " >> benchmark_${3}.out
  sleep 1
  $2 -e /dev/input/by-path/platform-pcspkr-event-spkr -d 100 -r 1000
  sleep 1
  sudo dmesg | grep "TIMER-${3}: 1000" | tail -n 1 | cut -d":" -f4 | cut -d" " -f1,2,3,4 >> benchmark_${3}.out
  sleep 1
  sudo rmmod "$1"

}

# $1 - The unsigned int type in Coq to use
# $2 - Additional flags (e.g. with_compcert)
build () {
  cd ../src
  make clean
  make COMP_MODE\=$1 BENCHMARK\=1 $2
  cp certpcspkr.ko ../benchmarks/certpcspkr_${1}_${2}.ko
  cd ../benchmarks
}

build_with_ccomp () {
  build $1 with_compcert
}

build nat
build n
build n_minprims
build_with_ccomp n_minprims

echo "Testing the driver with nat inputs and GCC compilation"
do_test certpcspkr_nat_ beep_bell Bell nat
do_test certpcspkr_nat_ beep Tone nat

echo "Testing the driver with N inputs and GCC compilation"
do_test certpcspkr_n_ beep_bell Bell n
do_test certpcspkr_n beep Tone n

echo "Testing the driver with N inputs, minimal primitives and GCC compilation"
do_test certpcspkr_n_minprims_ beep_bell Bell n_minprims
do_test certpcspkr_n_minprims_ beep Tone n_minprims

echo "Testing the driver with N inputs, minimal primitives and CompCert compilation"
do_test certpcspkr_n_minprims_with_compcert beep_bell Bell n_minprims_ccomp
do_test certpcspkr_n_minprims_with_compcert beep Tone n_minprims_ccomp

