// SPDX-License-Identifier: GPL-2.0-only
/*
 * This file contains primitive bitwise operations on N.
 *
 * The functions merely transform from N to uint64, call the functionality
 * of prim_int63 and transform the result to N again.
 *
 * All functions here are defined as inline functions to be able to leverage
 * possible optimisations.
 */

// Include the prototypes of the functions defined here
#include <bitwise_ffi.h>
// Include the transformations between N and uint63.
#include <int6x_n.h>
// Include primitive operations on int63 from CertiCoq
#include <prim_int63.h>

inline value land(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_N(x);
  value val_y = uint63_from_N(y);

  return uint63_to_N(tinfo, prim_int63_land(val_x, val_y));
}

inline value lor(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_N(x);
  value val_y = uint63_from_N(y);

  return uint63_to_N(tinfo, prim_int63_lor(val_x, val_y));
}

inline value shiftr(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_N(x);
  value val_y = uint63_from_N(y);

  return uint63_to_N(tinfo, prim_int63_lsr(val_x, val_y));
}

inline value shiftl(struct thread_info *tinfo, value x, value y)
{
  value val_x = uint63_from_N(x);
  value val_y = uint63_from_N(y);

  return uint63_to_N(tinfo, prim_int63_lsl(val_x, val_y));
}
