// SPDX-License-Identifier: GPL-2.0-only
#ifndef PCSPKR_BITWISE_FFI_H
#define PCSPKR_BITWISE_FFI_H

// Include the value type
#include <values.h>

// Forward declare the thread info.
extern struct thread_info *tinfo;

value land(struct thread_info *tinfo, value x, value y);

value lor(struct thread_info *tinfo, value x, value y);

value shiftr(struct thread_info *tinfo, value x, value y);

value shiftl(struct thread_info *tinfo, value x, value y);

#endif // PCSPKR_BITWISE_FFI_H