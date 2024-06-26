// SPDX-License-Identifier: GPL-2.0-only
/*
 * This file contains the primitive operation to check whether
 * the frequency value is in the allowed interval.
 */

// Include the prototypes of the functions defined here
#include <z_ffi.h>
// Needed for int64_from_Z
#include <int6x_z.h>
// Needed for uint64_to_nat
#include <int6x_nat.h>
// Include the tracing functionality.
#include <certicoq_stdio.h>
// Include primitive operations on int63 from CertiCoq
#include <prim_int63.h>
// Include the call to pit_tick_rate.
#include <pit.h>

// Z -> bool
value z_val_in_freq_interval(value x)
{
  // Transform Z to int64 and then to value
  int64_t v = int64_from_Z(x);
  value val = Val_long(v);
  // Set min an max
  value min = Val_long(21);
  value max = Val_long(32766);

  value res = prim_int63_in_interval(val, min, max);

  if(res == 1) // true is 1, false is 3
  {
    trace("[certcspkr]: Value %llu is in interval [21,32766]", v);
  }
  else
  {
    trace("[certcspkr]: Value %llu is NOT in interval [21,32766]", v);
  }
  return res;
}

value compute_duration(struct thread_info *tinfo, value x)
{
  uint64_t ret_val = pit_tick_rate() / int64_from_Z(x);

  return int64_to_Z(tinfo, ret_val);
}

value compute_duration_nat(struct thread_info *tinfo, value x)
{
  uint64_t ret_val = pit_tick_rate() / int64_from_Z(x);

  return int64_to_nat(tinfo, ret_val);
}
