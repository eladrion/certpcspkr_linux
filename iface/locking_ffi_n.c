// SPDX-License-Identifier: GPL-2.0-only

// Include the prototypes of the functions defined here
#include <locking_ffi.h>
// Include the tracing functionality.
#include <certicoq_stdio.h>
// Include standard integers since we use int64_t.
#include <certicoq_stdint.h>
// Include the transformations between N/Z and int64
#include <int6x_n.h>
#include <int6x_z.h>
// Include the concrete calls to lock and unlock
#include <locking.h>


// TODO: Remove the tinfo in the formalisation and synthesis if possible
// TODO: Make this function boolean in formalisation if possible
// N -> Z
value spinlock (struct thread_info *tinfo, value coq_tgt_state)
{
  trace("[certcspkr]: Spinlock entered\n");
  int tgt_state = (uint8_t)uint64_from_N(coq_tgt_state);
  if (tgt_state == 1)
  {
    do_lock();
  }
  else
  {
    do_unlock();
  }
  trace("[certcspkr]: Spinlock left\n");

  // Return 0%Z
  return int64_to_Z(tinfo, 0);
}