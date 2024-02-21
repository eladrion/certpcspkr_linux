// SPDX-License-Identifier: GPL-2.0-only

// Include the prototypes of the functions defined here
#include <pit.h>
// Include the header including the PIT_TICK_RATE
#include <linux/timex.h>

inline unsigned long pit_tick_rate(void)
{
  return PIT_TICK_RATE;
}