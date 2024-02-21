// SPDX-License-Identifier: GPL-2.0-only
/* This file contains the declarations of the regio functions
 * that call the concrete OS functionality.
 */

#ifndef PCSPKR_REGIO_H
#define PCSPKR_REGIO_H

// Include standard integers since we use uint8_t.
#include <certicoq_stdint.h>

uint8_t do_in8(uint8_t reg_id);

uint8_t do_in8_p(uint8_t reg_id);

void do_out8(uint8_t reg_val, uint8_t reg_id);

void do_out8_p(uint8_t reg_val, uint8_t reg_id);

#endif // PCSPKR_REGIO_H