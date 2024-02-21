// SPDX-License-Identifier: GPL-2.0-only

// Include the prototypes of the functions defined here
#include <locking.h>
// Include the i8253 (PIT) which includes linux/spinlock.h and linux/timex.h
#include <linux/i8253.h>
// Include kernel printing
#include <linux/printk.h>

// The lock flag
static unsigned long linuxcertdd_pscpkr_lock_flags;

void do_lock(void)
{
  printk(KERN_INFO "[certcspkr]: Spinlock: do_lock called\n");
  raw_spin_lock_irqsave(&i8253_lock, linuxcertdd_pscpkr_lock_flags);
}

void do_unlock(void)
{
  printk(KERN_INFO "[certcspkr]: Spinlock: do_unlock called\n");
  raw_spin_unlock_irqrestore(&i8253_lock, linuxcertdd_pscpkr_lock_flags);
}