// SPDX-License-Identifier: GPL-2.0-only
#ifndef PCSPKR_NAT_FFI_H
#define PCSPKR_NAT_FFI_H

// Include the value type
#include <values.h>

// Forward declare the thread info.
extern struct thread_info *tinfo;

value nat_div(struct thread_info *tinfo, value x, value y);

value nat_div2(struct thread_info *tinfo, value x);

value nat_land(struct thread_info *tinfo, value x, value y);

value nat_lor(struct thread_info *tinfo, value x, value y);

value nat_shiftr(struct thread_info *tinfo, value x, value y);

value nat_shiftl(struct thread_info *tinfo, value x, value y);

// Checking if x is in interval [min, max]
value nat_in_interval(struct thread_info *tinfo, value x, value min, value max);

#endif // PCSPKR_NAT_FFI_H