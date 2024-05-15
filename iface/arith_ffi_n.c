// SPDX-License-Identifier: GPL-2.0-only
/*
 * This file contains primitive arithmetic on N.
 *
 * The functions merely transform from N to uint64, call the functionality
 * of prim_int63 and transform the result to N again.
 *
 * All functions here are defined as inline functions to be able to leverage
 * possible optimisations.
 */

// Include the prototypes of the functions defined here
#include <arith_ffi.h>
// Include the transformations between N and uint63.
#include <int6x_n.h>
// Include primitive operations on int63 from CertiCoq
#include <prim_int63.h>

inline value div(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_N(x);
  value val_y = uint63_from_N(y);

  return uint63_to_N(tinfo, prim_int63_div(val_x, val_y));
}

inline value div2(struct thread_info *tinfo, value x)
{
  value val_x = uint63_from_N(x);

  return uint63_to_N(tinfo, prim_int63_div2(val_x));
}


// Checking if x is in interval [min, max]
inline value is_in_interval(struct thread_info *tinfo, value x, value min, value max)
{
  value val_x   = uint63_from_N(x);
  value val_min = uint63_from_N(min);
  value val_max = uint63_from_N(max);

  // Call the primitive interval check, 1 is true, 3 is false
  return prim_int63_in_interval(val_x, val_min, val_max);
}
