// SPDX-License-Identifier: GPL-2.0-only
#ifndef PCSPKR_ARITH_FFI_H
#define PCSPKR_ARITH_FFI_H

// Include the value type
#include <values.h>

// Forward declare the thread info.
extern struct thread_info *tinfo;

value div(struct thread_info *tinfo, value x, value y);

value div2(struct thread_info *tinfo, value x);

// Checking if x is in interval [min, max]
value is_in_interval(struct thread_info *tinfo, value x, value min, value max);

#endif // PCSPKR_ARITH_FFI_H