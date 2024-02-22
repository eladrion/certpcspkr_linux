// SPDX-License-Identifier: GPL-2.0-only
/* This file contains the declarations of the primitives being called by the
 * synthesised code.
 */

#ifndef PCSPKR_EXTERNALS_H
#define PCSPKR_EXTERNALS_H

#include "values.h"

// Forward declare the thread info.
extern struct thread_info *tinfo;

// Check if x is in [21,32766], i.e. 20 < x < 32767
value z_val_in_freq_interval(value x);

value compute_duration(struct thread_info *tinfo, value x);

#endif // PCSPKR_EXTERNALS_H
