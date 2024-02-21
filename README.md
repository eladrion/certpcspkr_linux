# The (experimental and partially) Certified Linux PC Speaker Driver

This repository contains C and Clight files that can be combined and
compiled into a working but experimental Linux Kernel Module.

The driver is in principle based on the [implementation](https://github.com/torvalds/linux/blob/master/drivers/input/misc/pcspkr.c)
in the Linux Kernel. The functionality of `pcspkr_event` was formalised in Coq and then
synthesised as Clight code using [CertiCoq](https://github.com/CertiCoq/certicoq).
The only functions which are not synthesised, are

- raw_spin_lock_irqsave and raw_spin_unlock_irqrestore
- outb, outb_p, inb and inb_p

Those functions are called by the synthesised code using tooling from [VeriFFI](https://github.com/CertiCoq/VeriFFI).
The synthesised code itself can be found in the folder `synthesised` together with a README.md that
describes how the code was synthesised.
The formalisation is not yet published but will be as soon as possible.

# Aims and Limitations

The aim of this project is to show that it is in principle possible to compile working Linux
Device Drivers from code synthesised by CertiCoq.
However, this project is still quite experimental. For example emitting a tone with a frequency
above 511 Hz makes the system freeze. We are currently inspecting the cause of that freeze.

The driver is not signed. Thus, when SecureBoot is activated, it will not be possible to load the driver.
This is also a reason for recommending testing in a virtual machine under QEMU.

# Requirements

In order to compile the driver, a Linux machine is needed, e.g. with Ubuntu 22.04 x86_64.
The compilation was not tested with other architectures. Also, testing in a virtual machine,
especially under QEMU is recommended.

Also, a the forks of [CertiCoq](https://github.com/eladrion/certicoq/tree/fphd) and [VeriFFI](https://github.com/eladrion/VeriFFI/tree/bugfixes) should be downloaded.
See Building for details.

# Building

After cloning this repository locally with

> git clone https://gitup.uni-potsdam.de/mafrank_public/certpcspkr_linux.git ./certpcspkr

additionally the CertiCoq fork has to be cloned with

> git clone https://github.com/eladrion/certicoq.git ./CertiCoq_kmod

and the branch fphd should be checked out with

```
cd CertiCoq_kmod
git checkout fphd
```

Also, the VeriFFI fork should be cloned with

> git clone https://github.com/eladrion/VeriFFI.git ./VeriFFI_contrib

and then the branch bugfixes should be checked out with

```
cd VeriFFI_contrib
git checkout bugfixes
```

Then, the driver can be compiled with the following steps:

```
cd certpcspkr/src
make CERTICOQ_PATH=../../CertiCoq_kmod VERIFFI_PATH=../../VeriFFI_contrib/
```

which produces the `certpcspkr.ko` in the folder `certpcspkr/src`.
The variable `CERTICOQ_PATH` is important here since the compilation includes copying the CertiCoq garbage collection
and other C files.

# Testing in QEMU:

If no native PC speaker is available on the machine, the driver can also be tested in QEMU.
To accomplish this, a virtual machine has to be created. When having a VM `test_vm.qcow2` with Ubuntu 22.04, for example,
the virtual machine should be started with the command

> qemu-system-x86_64 -enable-kvm -m 8096 -drive file=test_vm.qcow2,if=virtio -audiodev pa,id=snd0 -machine pcspk-audiodev=snd0

This starts the VM with 8 GB of RAM with KVM support and additionally defines that the guest PC Speaker shall be
redirected to snd0 which is the PulseAudio subsystem of the host.

After starting the machine, the driver and CertiCoq should then be downloaded and built as described above.
Testing inside the virtual machine

There is a prepared virtual machine (to be linked ASAP) for QEMU which includes the cloned repositories in the directory `~/KernelModuleSynthesis`.
To test it, it has to be downloaded and run with QEMU using

> qemu-system-x86_64 -enable-kvm -m 8096 -drive file=CertPCSpkrVM.qcow,if=virtio -audiodev pa,id=snd0 -machine pcspk-audiodev=snd0

In a shell, type:

```
cd KernelModuleSynthesis
cd certpcspkr_linux/src
make CERTICOQ_PATH=../../CertiCoq_kmod VERIFFI_PATH=../../VeriFFI_contrib/
```

Then, the driver can be tested as follows.

# Testing on Native Hardware

If the machine has a native PC speaker (which is quite seldom nowadays), the module can be just loaded with

> sudo insmod certpcspkr.ko

Then, wenn executing

> sudo dmesg

The log messages should include the ones from the driver stating that it was loaded.
Executing `beep` or `beep -f 500` should then make the system beep.
Remember the limitation of the beep frequency value.
