// SPDX-License-Identifier: GPL-2.0-only
/* This file contains the declarations of the regio primitives (FFI)
 * being called by the synthesised code.
 */

#ifndef PCSPKR_REGIO_FFI_H
#define PCSPKR_REGIO_FFI_H

#include "values.h"

extern struct thread_info *tinfo;

value in8(struct thread_info *tinfo, value reg_id);

value in8_p(struct thread_info *tinfo, value reg_id);

value out8(struct thread_info *tinfo, value reg_val, value reg_id);

value out8_p(struct thread_info *tinfo, value reg_val, value reg_id);

#endif // PCSPKR_REGIO_FFI_H