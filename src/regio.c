// SPDX-License-Identifier: GPL-2.0-only

// Include the prototypes of inb, outb and so on.
#include <linux/io.h>
// Include the prototypes of the functions defined here
#include <regio.h>

uint8_t do_in8(uint8_t reg_id)
{
  return inb(reg_id);
}

uint8_t do_in8_p(uint8_t reg_id)
{
  return inb_p(reg_id);
}

void do_out8(uint8_t reg_val, uint8_t reg_id)
{
  outb(reg_val, reg_id);
}

void do_out8_p(uint8_t reg_val, uint8_t reg_id)
{
  outb_p(reg_val, reg_id);
}