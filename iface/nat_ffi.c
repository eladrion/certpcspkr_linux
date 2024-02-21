// SPDX-License-Identifier: GPL-2.0-only
/*
 * This file contains primitive arithmetic and bitwise operations on nat.
 *
 * The functions merely transform from nat to uint64, call the functionality
 * of prim_int63 and transform the result to nat again.
 *
 * All functions here are defined as inline functions to be able to leverage
 * possible optimisations.
 */

// Include the prototypes of the functions defined here
#include <nat_ffi.h>
// Include the transformations between nat and uint63.
#include <int6x_nat.h>
// Include primitive operations on int63 from CertiCoq
#include <prim_int63.h>
// Include the call to pit_tick_rate.
#include <pit.h>

inline value nat_div(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_nat(x);
  value val_y = uint63_from_nat(y);

  return uint63_to_nat(tinfo, prim_int63_div(val_x, val_y));
}

inline value nat_div2(struct thread_info *tinfo, value x)
{
  value val_x = uint63_from_nat(x);

  return uint63_to_nat(tinfo, prim_int63_div2(val_x));
}

inline value nat_land(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_nat(x);
  value val_y = uint63_from_nat(y);

  return uint63_to_nat(tinfo, prim_int63_land(val_x, val_y));
}

inline value nat_lor(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_nat(x);
  value val_y = uint63_from_nat(y);

  return uint63_to_nat(tinfo, prim_int63_lor(val_x, val_y));
}

inline value nat_shiftr(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_nat(x);
  value val_y = uint63_from_nat(y);

  return uint63_to_nat(tinfo, prim_int63_lsr(val_x, val_y));
}

inline value nat_shiftl(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_nat(x);
  value val_y = uint63_from_nat(y);

  return uint63_to_nat(tinfo, prim_int63_lsl(val_x, val_y));
}

// Checking if x is in interval [min, max]
inline value nat_in_interval(struct thread_info *tinfo, value x, value min, value max)
{
  value val_x   = uint63_from_nat(x);
  value val_min = uint63_from_nat(min);
  value val_max = uint63_from_nat(max);

  // Call the primitive interval check, 1 is true, 3 is false
  return prim_int63_in_interval(val_x, val_min, val_max);
}

value compute_duration(struct thread_info *tinfo, value x)
{
  uint64_t ret_val = pit_tick_rate() / int64_from_nat(x);

  return int64_to_nat(tinfo, ret_val);
}

