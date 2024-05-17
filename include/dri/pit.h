// SPDX-License-Identifier: GPL-2.0-only
/*
 * This file exposes one function which merely returns the
 * PIT_TICK_RATE. But this way, the include to timex is wrapped
 * in a separate compilation unit.
 */

#ifndef PCSPKR_PIT_H
#define PCSPKR_PIT_H

unsigned long pit_tick_rate(void);

#endif // PCSPKR_PIT_H