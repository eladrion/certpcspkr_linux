// SPDX-License-Identifier: GPL-2.0-only
/*
 *  The event handler for the partially certified
 *  and synthesised PC Speaker driver for Linux.
 *
 *  Copyright (c) 2023-2024 Mario Frank
 */

// Used for call
#include "glue.h"

#ifdef SYN_USE_NAT_FOR_UINT
// Used for int64_to_nat/int64_from_nat
#include "int6x_nat.h"
#else
// Used for int64_to_n/int64_from_n
#include "int6x_n.h"
#endif
// Used for int64_to_z/int64_from_z
#include "int6x_z.h"
// Obviously for printing
#include <linux/printk.h>

/* The following forward declarations have to be done this way:
 * The definitions are originally located in gc_stack.h and the header
 * of the synthesised code. But these headers also expose the definition
 * of thread_info which collides with the thread_info exposed transitively
 * by linux/kernel.h
 */
// Defining the call to the synthesised code. TODO: Remove?
//extern int ml_pcspkr_event(unsigned int type, unsigned int code, int value);
// Defining the call to the synthesised function that initialises the closure
extern value body(struct thread_info *);
// Defining calls to functionality of the garbage collection.
extern struct thread_info *make_tinfo(void);
extern void print_heapsize(struct thread_info *);
extern _Bool garbage_collect(struct thread_info *);

// Needed in switch (get_Coq_Numbers_BinNums_Z_tag(tmp))
typedef enum { Z0, ZPOS, ZNEG } tag_Z;

#ifdef DO_BENCHMARK
#include <linux/ktime.h>
#include <linux/sort.h>

// Bell count, durations and durations sum
static u64 bell_cnt = 0;
static u64 bell_durations[1000];
static u64 bell_duration_sum = 0;
// Tone count, durations and durations sum
static u64 tone_cnt = 0;
static u64 tone_durations[1000];
static u64 tone_duration_sum = 0;

static int compare(const void *lhs, const void *rhs)
{
    u64 lhs_val = *(const u64 *)(lhs);
    u64 rhs_val = *(const u64 *)(rhs);

    if (lhs_val < rhs_val) return -1;
    if (lhs_val < rhs_val) return  1;
    return 0;
}

void print_stats (char* mode, u64 cnt, u64 sum, u64 values[])
{
    if (cnt == 1000)
    {
        sort(values, cnt, sizeof(u64), &compare, NULL);
        u64 min = values[0];
        u64 max = values[999];
        u64 med = (u64)((values[499]+values[500])/2);
        printk(KERN_INFO "[certpcspkr]: TIMER-%s: %llu signals took min/med/max/all ns :%llu %llu %llu %llu\n", mode, cnt, min, max, med, sum);
    }
}
#endif

/*
 * This function handles the event triggered by the kernel.
 * Apart from many log messages, the function transforms the given
 * parameters to Coq types (nat/N and Z), initialises the closure
 * and calls it by feeding the transformed parameters to it.
 */
int handle_evt(struct thread_info* ti, unsigned int type, unsigned int code, int val)
{

/*
  printk(KERN_INFO "[certpcspkr]: sizeof int                 : %lu\n", sizeof(int));
  printk(KERN_INFO "[certpcspkr]: sizeof long                : %lu\n", sizeof(long));
  printk(KERN_INFO "[certpcspkr]: sizeof long long           : %lu\n", sizeof(long long));
  printk(KERN_INFO "[certpcspkr]: sizeof unsigned long long  : %lu\n", sizeof(unsigned long long));
  printk(KERN_INFO "[certpcspkr]: sizeof unsigned long long* : %lu\n", sizeof(unsigned long long*));
  printk(KERN_INFO "[certpcspkr]: sizeof value               : %lu\n", sizeof(value*));
*/

  //print_heapsize(ti);

  #ifdef DO_BENCHMARK
  u64 start_time_ns;
  if ((18==type) && ((0x01==code) || (0x02==code)) && (val!=0))
  {
    start_time_ns = ktime_get_real_ns();
    if (0x01==code)
    {
      bell_cnt += 1;
    }
    else
    {
      tone_cnt += 1;
    }
  }
  #endif

  // Transform C values into Coq values
  #ifdef SYN_USE_NAT_FOR_UINT
  value type_coq = int64_to_nat(ti, type);
  value code_coq = int64_to_nat(ti, code);
  #else
  value type_coq = uint64_to_N(ti, type);
  value code_coq = uint64_to_N(ti, code);
  #endif
  value val_coq  = int64_to_Z(ti, val);

/*
  // Check whether transforming the Coq types back to C types yields the original values
  #ifdef SYN_USE_NAT_FOR_UINT
  printk(KERN_INFO "[certpcspkr]: int64_from_nat(int64_to_nat(type)) = %llu, expected %d\n", (unsigned long long)int64_from_nat(type_coq), type);
  printk(KERN_INFO "[certpcspkr]: int64_from_nat(int64_to_nat(code)) = %llu, expected %d\n", (unsigned long long)int64_from_nat(code_coq), code);
  #else
  printk(KERN_INFO "[certpcspkr]: uint64_from_N(uint64_to_N(type)) = %llu, expected %d\n", (unsigned long long)uint64_from_N(type_coq), type);
  printk(KERN_INFO "[certpcspkr]: uint64_from_N(uint64_to_N(code)) = %llu, expected %d\n", (unsigned long long)uint64_from_N(code_coq), code);
  #endif
  printk(KERN_INFO "[certpcspkr]: int64_from_Z(int64_to_Z(val))      = %lld, expected %d\n", (long long)int64_from_Z(val_coq), val);
*/

  // Initialise the closure and feed the parameters.
  value tmp = body(ti);
  printk(KERN_INFO "[certpcspkr]: Initialised closure\n");

//  printk(KERN_INFO "[certpcspkr]: Feeding event type to closure\n");
  tmp = call(ti, tmp, type_coq);
//  printk(KERN_INFO "[certpcspkr]: Feeding event code to closure\n");
  tmp = call(ti, tmp, code_coq);
//  printk(KERN_INFO "[certpcspkr]: Feeding event value to closure\n");
  tmp = call(ti, tmp, val_coq);
//  printk(KERN_INFO "[certpcspkr]: Event handler finished\n");

  //print_heapsize(ti);

  int return_code = int64_from_Z(tmp);
  printk(KERN_INFO "[certpcspkr]: Closure returned %d\n", return_code);

  #ifdef DO_BENCHMARK
  // Benchmark only if we have valid input values and the val is non-zero
  if ((18==type) && ((0x01==code) || (0x02==code)) && (val!=0))
  {
    u64 end_time_ns = ktime_get_real_ns();
    u64 time_diff   = end_time_ns - start_time_ns;
    //printk(KERN_INFO "[certpcspkr]: TIMER: event handler took %llu ns\n", time_diff);
    if (0x01==code)
    {
      bell_duration_sum += time_diff;
      if (bell_cnt <= 1000)
      {
        bell_durations[bell_cnt-1] = time_diff;
      }
      print_stats ("Bell" , bell_cnt, bell_duration_sum, bell_durations);
    }
    else
    {
      tone_duration_sum += time_diff;
      if (tone_cnt <= 1000)
      {
        tone_durations[tone_cnt-1] = time_diff;
      }
      print_stats ("Tone" , tone_cnt, tone_duration_sum, tone_durations);
    }
  }
 #endif

  // If the function returns 0, everything was fine.
  // Else, it can only return negative values (einval_type or einval_code) or 1 (OS-Communication failed)
  switch (get_Coq_Numbers_BinNums_Z_tag(tmp)) {
    case ZNEG: // negative value -> inval_type or einval_code, return einval
      printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event called, Returned EINVAL\n");
      return -22;
    case ZPOS: // positive value -> 1, return einval
      printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event called, Returned OS Comm error\n");
      return -22;
    default:   // Everything should be fine.
      printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event called, Returned SUCCESS\n");
      return 0;
  }
}

/**
 * This function exposes the synthesised code to the PC Speaker driver
 */
extern
int ml_pcspkr_event(unsigned int type, unsigned int code, int val)
{
  printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event called\n");

  // Create a thread_info and return EINVAL on error.
  struct thread_info *ti;
  ti = make_tinfo();
  if (ti == 0)
    return -22;

  printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event - type: %d", type);
  printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event - code: %d", code);
  printk(KERN_INFO "[certpcspkr]: ml_pcspkr_event - val:  %d", val);

  int result = handle_evt(ti, type, code, val);

  /*
  _Bool gc_success = garbage_collect(ti);
  if (!gc_success)
    printk(KERN_ERR "GC failed\n");
  */

  // clean up
  free_tinfo(ti);

  return result;

}
