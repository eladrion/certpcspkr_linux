// SPDX-License-Identifier: GPL-2.0-only
/*
 * This file contains the primitives for locking being directly called
 * by the synthesised code.
 */

#ifndef PCSPKR_LOCKING_FFI_H
#define PCSPKR_LOCKING_FFI_H

// Include the value type
#include <values.h>

// Forward declare the thread info.
extern struct thread_info *tinfo;

// Acquiring a spinlock, tgt_state 1 means lock and 0 unlock
value spinlock(struct thread_info *tinfo, value tgt_state);

#endif // PCSPKR_LOCKING_FFI_H