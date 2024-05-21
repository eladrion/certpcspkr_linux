// SPDX-License-Identifier: GPL-2.0-only

// Include the prototypes of the functions defined here
#include <regio_ffi.h>
// Include the function prototypes of those that do the work.
#include <regio.h>
// Include the tracing functionality.
#include <certicoq_stdio.h>
// Include tha type transformations from and to N.
#include <int6x_n.h>
// Include tha type transformations from and to Z.
#include <int6x_z.h>

// N -> N
value in8(struct thread_info *tinfo, value coq_reg_id)
{
  // Decode the Coq value
  uint8_t reg_id = (uint8_t)uint64_from_N(coq_reg_id);
  trace("[certcspkr]: in8: Reading from 0x%x\n", reg_id);
  // Call in8 and transform the return val to value type, i.e. N
  return uint64_to_N(tinfo, (uint64_t)do_in8(reg_id));
}

// N -> N
value in8_p(struct thread_info *tinfo, value coq_reg_id)
{
  // Decode the Coq value
  uint8_t reg_id = (uint8_t)uint64_from_N(coq_reg_id);
  trace("[certcspkr]: in8_p: Reading from 0x%x\n", reg_id);
  // Call in8 and transform the return val to value type, i.e. N
  return uint64_to_N(tinfo, (uint64_t)do_in8_p(reg_id));
}

// TODO: Remove the tinfo in the formalisation and synthesis
// N -> N -> Z
value out8(struct thread_info *tinfo, value coq_reg_val, value coq_reg_id)
{
  // Decode the Coq value for register id and the value to write
  uint8_t reg_val = (uint8_t)uint64_from_N(coq_reg_val);
  uint8_t reg_id  = (uint8_t)uint64_from_N(coq_reg_id);
  trace("[certcspkr]: out8: Writing 0x%x to 0x%x\n", reg_val, reg_id);

  // Call out8 and return 0%Z
  do_out8(reg_val, reg_id);
  return int64_to_Z(tinfo, 0);
}

// TODO: Remove the tinfo in the formalisation and synthesis
// N -> N -> Z
value out8_p(struct thread_info *tinfo, value coq_reg_val, value coq_reg_id)
{
  // Decode the Coq value for register id and the value to write
  uint8_t reg_val = (uint8_t)uint64_from_N(coq_reg_val);
  uint8_t reg_id = (uint8_t)uint64_from_N(coq_reg_id);
  trace("[certcspkr]: out8_p: Writing 0x%x to 0x%x\n", reg_val, reg_id);

  // Call out8_p and return 0%Z
  do_out8_p(reg_val, reg_id);
  return int64_to_Z(tinfo, 0);
}