#ifndef PCSPKR_EVT_LINUX_NAT_C
#define PCSPKR_EVT_LINUX_NAT_C
#include <gc_stack.h>
#include "bitwise_ffi.h"
#include "arith_ffi.h"
#include "locking_ffi.h"
#include "regio_ffi.h"
#include "pcspkr_evt_linux.h"
extern struct thread_info *make_tinfo(void);
extern value f_case_153(struct thread_info *, value, value);
extern value f_case_known_152(struct thread_info *, value);
extern value of_succ_nat_known_151(struct thread_info *, value);
extern value f_case_known_150(struct thread_info *, value);
extern value f_case_known_149(struct thread_info *, value, value);
extern value f_case_known_148(struct thread_info *, value);
extern value f_case_known_147(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_146(struct thread_info *, value, value, value, value);
extern value y_wrapper_145(struct thread_info *, value, value);
extern value y_wrapper_144(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_143(struct thread_info *, value, value);
extern value iter_uncurried_known_142(struct thread_info *, value, value);
extern value CoqdZArithdBinIntDefdZdto_nat_known_141(struct thread_info *, value);
extern value of_hex_uint_acc_uncurried_known_140(struct thread_info *, value, value);
extern value of_uint_acc_uncurried_known_139(struct thread_info *, value, value);
extern value f_case_known_138(struct thread_info *, value);
extern value tail_add_uncurried_known_137(struct thread_info *, value, value);
extern value tail_addmul_uncurried_uncurried_known_136(struct thread_info *, value, value, value);
extern value f_case_known_135(struct thread_info *, value);
extern value pos_div_eucl_uncurried_known_134(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdopp_known_133(struct thread_info *, value);
extern value CoqdZArithdBinIntDefdZdmul_uncurried_known_132(struct thread_info *, value, value);
extern value mul_uncurried_known_131(struct thread_info *, value, value);
extern value CoqdZArithdBinIntDefdZdadd_uncurried_known_130(struct thread_info *, value, value);
extern value pos_sub_uncurried_known_129(struct thread_info *, value, value);
extern value pred_double_known_128(struct thread_info *, value);
extern value CoqdZArithdBinIntDefdZddouble_known_127(struct thread_info *, value);
extern value add_carry_uncurried_known_126(struct thread_info *, value, value);
extern value add_uncurried_known_125(struct thread_info *, value, value);
extern value succ_known_124(struct thread_info *, value);
extern value CoqdZArithdBinIntDefdZdltb_uncurried_known_123(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdcompare_uncurried_known_122(struct thread_info *, value, value, value);
extern value compare_cont_uncurried_uncurried_known_121(struct thread_info *, value, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_120(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_known_119(struct thread_info *, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_Z_uncurried_known_118(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_117(struct thread_info *, value, value, value);
extern value y_wrapper_116(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_115(struct thread_info *, value, value);
extern value add_uncurried_known_114(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_nat_Z_uncurried_uncurried_known_113(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdeqb_uncurried_known_112(struct thread_info *, value, value);
extern value eqb_uncurried_known_111(struct thread_info *, value, value);
extern value eqb_uncurried_known_110(struct thread_info *, value, value);
extern value body(struct thread_info *);
value f_case_153(struct thread_info *, value, value);
value f_case_known_152(struct thread_info *, value);
value of_succ_nat_known_151(struct thread_info *, value);
value f_case_known_150(struct thread_info *, value);
value f_case_known_149(struct thread_info *, value, value);
value f_case_known_148(struct thread_info *, value);
value f_case_known_147(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_146(struct thread_info *, value, value, value, value);
value y_wrapper_145(struct thread_info *, value, value);
value y_wrapper_144(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_143(struct thread_info *, value, value);
value iter_uncurried_known_142(struct thread_info *, value, value);
value CoqdZArithdBinIntDefdZdto_nat_known_141(struct thread_info *, value);
value of_hex_uint_acc_uncurried_known_140(struct thread_info *, value, value);
value of_uint_acc_uncurried_known_139(struct thread_info *, value, value);
value f_case_known_138(struct thread_info *, value);
value tail_add_uncurried_known_137(struct thread_info *, value, value);
value tail_addmul_uncurried_uncurried_known_136(struct thread_info *, value, value, value);
value f_case_known_135(struct thread_info *, value);
value pos_div_eucl_uncurried_known_134(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdopp_known_133(struct thread_info *, value);
value CoqdZArithdBinIntDefdZdmul_uncurried_known_132(struct thread_info *, value, value);
value mul_uncurried_known_131(struct thread_info *, value, value);
value CoqdZArithdBinIntDefdZdadd_uncurried_known_130(struct thread_info *, value, value);
value pos_sub_uncurried_known_129(struct thread_info *, value, value);
value pred_double_known_128(struct thread_info *, value);
value CoqdZArithdBinIntDefdZddouble_known_127(struct thread_info *, value);
value add_carry_uncurried_known_126(struct thread_info *, value, value);
value add_uncurried_known_125(struct thread_info *, value, value);
value succ_known_124(struct thread_info *, value);
value CoqdZArithdBinIntDefdZdltb_uncurried_known_123(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdcompare_uncurried_known_122(struct thread_info *, value, value, value);
value compare_cont_uncurried_uncurried_known_121(struct thread_info *, value, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_120(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_known_119(struct thread_info *, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_Z_uncurried_known_118(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_117(struct thread_info *, value, value, value);
value y_wrapper_116(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_115(struct thread_info *, value, value);
value add_uncurried_known_114(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_nat_Z_uncurried_uncurried_known_113(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdeqb_uncurried_known_112(struct thread_info *, value, value);
value eqb_uncurried_known_111(struct thread_info *, value, value);
value eqb_uncurried_known_110(struct thread_info *, value, value);
value body(struct thread_info *);
unsigned long long const body_info_3201[2] = { 845LL, 0LL, };

unsigned long long const eqb_uncurried_known_info_3200[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const eqb_uncurried_known_info_3199[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdeqb_uncurried_known_info_3198[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_nat_Z_uncurried_uncurried_known_info_3197[5] = {
  2LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const add_uncurried_known_info_3196[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_info_3195[4] = {
  9LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_3194[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_info_3193[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_Z_uncurried_known_info_3192[4] = {
  2LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_known_info_3191[3] = {
  504LL, 1LL, 0LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_info_3190[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const compare_cont_uncurried_uncurried_known_info_3189[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CoqdZArithdBinIntDefdZdcompare_uncurried_known_info_3188[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CoqdZArithdBinIntDefdZdltb_uncurried_known_info_3187[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const succ_known_info_3186[3] = { 2LL, 1LL, 0LL, };

unsigned long long const add_uncurried_known_info_3185[4] = { 2LL, 2LL, 0LL,
  1LL, };

unsigned long long const add_carry_uncurried_known_info_3184[4] = { 2LL, 2LL,
  0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZddouble_known_info_3183[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const pred_double_known_info_3182[3] = { 4LL, 1LL, 0LL, };

unsigned long long const pos_sub_uncurried_known_info_3181[4] = { 4LL, 2LL,
  0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdadd_uncurried_known_info_3180[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const mul_uncurried_known_info_3179[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdmul_uncurried_known_info_3178[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdopp_known_info_3177[3] = {
  2LL, 1LL, 0LL, };

unsigned long long const pos_div_eucl_uncurried_known_info_3176[5] = { 4LL,
  3LL, 0LL, 1LL, 2LL, };

unsigned long long const f_case_known_info_3175[3] = { 0LL, 1LL, 0LL, };

unsigned long long const tail_addmul_uncurried_uncurried_known_info_3174[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const tail_add_uncurried_known_info_3173[4] = { 2LL, 2LL,
  0LL, 1LL, };

unsigned long long const f_case_known_info_3172[3] = { 0LL, 1LL, 0LL, };

unsigned long long const of_uint_acc_uncurried_known_info_3171[4] = { 20LL,
  2LL, 0LL, 1LL, };

unsigned long long const of_hex_uint_acc_uncurried_known_info_3170[4] = {
  32LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdto_nat_known_info_3169[3] = {
  2LL, 1LL, 0LL, };

unsigned long long const iter_uncurried_known_info_3168[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_info_3167[4] = {
  9LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_3166[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_3165[4] = { 7LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_info_3164[6] = {
  36LL, 4LL, 0LL, 1LL, 2LL, 3LL, };

unsigned long long const f_case_known_info_3163[4] = { 4LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_3162[3] = { 0LL, 1LL, 0LL, };

unsigned long long const f_case_known_info_3161[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_3160[3] = { 0LL, 1LL, 0LL, };

unsigned long long const of_succ_nat_known_info_3159[3] = { 0LL, 1LL, 0LL, };

unsigned long long const f_case_known_info_3158[3] = { 0LL, 1LL, 0LL, };

unsigned long long const f_case_info_3157[4] = { 3LL, 2LL, 0LL, 1LL, };

value f_case_153(struct thread_info *$tinfo, value $env_2624, value $s_2625)
{
  struct stack_frame frame;
  value root[2];
  register value $y_2626;
  register value $y_2627;
  register value $y_2628;
  register value $ap_2629;
  register value $val_proj_2630;
  register value $y_2631;
  register value $y_proj_2632;
  register value $y_2633;
  register value $y_proj_2634;
  register value $val_proj_2635;
  register value $val_proj_2637;
  register value $bp_2638;
  register value $y_proj_2639;
  register value $y_2640;
  register value $y_2642;
  register value $q_2643;
  register value $r_2644;
  register value $y_2646;
  register value $y_2647;
  register value $y_2648;
  register value $y_2649;
  register value $y_2650;
  register value $y_2652;
  register value $y_2654;
  register value $val_proj_2656;
  register value $y_2657;
  register value $y_2658;
  register value $y_2659;
  register value $y_2660;
  register value $y_2662;
  register value $y_2664;
  register value $val_proj_2666;
  register value $y_2667;
  register value $y_2668;
  register value $ap_2669;
  register value $val_proj_2670;
  register value $y_2671;
  register value $y_proj_2672;
  register value $y_2673;
  register value $y_proj_2674;
  register value $val_proj_2675;
  register value $y_2677;
  register value $q_2678;
  register value $r_2679;
  register value $y_2681;
  register value $y_2682;
  register value $y_2683;
  register value $y_2684;
  register value $y_2685;
  register value $y_2687;
  register value $y_2689;
  register value $y_2691;
  register value $val_proj_2693;
  register value $y_2694;
  register value $y_2695;
  register value $y_2696;
  register value $y_2697;
  register value $y_2699;
  register value $y_2701;
  register value $y_2703;
  register value $val_proj_2705;
  register value $y_2706;
  register value $y_2707;
  register value $val_proj_2708;
  register value $bp_2709;
  register value $y_proj_2710;
  register value $y_2711;
  register value $y_2713;
  register value $q_2714;
  register value $r_2715;
  register value $y_2717;
  register value $y_2718;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(3LL <= $limit - $alloc)) {
    *(root + 1LL) = $s_2625;
    *(root + 0LL) = $env_2624;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 3LL;
    garbage_collect($tinfo);
    $s_2625 = *(root + 1LL);
    $env_2624 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_2625 & 1) == 0) {
    switch (*((value *) $s_2625 + -1LL) & 255LL) {
      case 0:
        $ap_2629 = *((value *) $s_2625 + 0LL);
        $val_proj_2630 = *((value *) $env_2624 + 1LL);
        if (($val_proj_2630 & 1) == 0) {
          switch (*((value *) $val_proj_2630 + -1LL) & 255LL) {
            case 0:
              $y_proj_2634 = *((value *) $env_2624 + 0LL);
              $val_proj_2635 = *((value *) $env_2624 + 1LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  pos_div_eucl_uncurried_known_134)
                ($tinfo, $val_proj_2635, $ap_2629, $y_proj_2634);
              return $result;
              break;
            default:
              $val_proj_2637 = *((value *) $env_2624 + 1LL);
              $bp_2638 = *((value *) $val_proj_2637 + 0LL);
              $y_proj_2639 = *((value *) $env_2624 + 0LL);
              $y_2640 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_2640 + -1LL) = 1024LL;
              *((value *) $y_2640 + 0LL) = $bp_2638;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_2624;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_2642 =
                ((value (*)(struct thread_info *, value, value, value))
                  pos_div_eucl_uncurried_known_134)
                ($tinfo, $y_2640, $ap_2629, $y_proj_2639);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_2642;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_2642 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $env_2624 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_2642 & 1) == 0) {
                switch (*((value *) $y_2642 + -1LL) & 255LL) {
                  default:
                    $q_2643 = *((value *) $y_2642 + 0LL);
                    $r_2644 = *((value *) $y_2642 + 1LL);
                    if (($r_2644 & 1) == 0) {
                      switch (*((value *) $r_2644 + -1LL) & 255LL) {
                        case 0:
                          $y_2649 = 1LL;
                          $y_2650 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2650 + -1LL) = 1024LL;
                          *((value *) $y_2650 + 0LL) = $y_2649;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2644;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2652 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $y_2650, $q_2643);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2644 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2644;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2654 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $y_2652);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2644 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $val_proj_2656 = *((value *) $env_2624 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $y_2654;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_2657 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $r_2644, $val_proj_2656);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(3LL <= $limit - $alloc)) {
                            *(root + 1LL) = $y_2657;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 3LL;
                            garbage_collect($tinfo);
                            $y_2657 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $y_2654 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_2658 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $y_2658 + -1LL) = 2048LL;
                          *((value *) $y_2658 + 0LL) = $y_2654;
                          *((value *) $y_2658 + 1LL) = $y_2657;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          return $y_2658;
                          break;
                        default:
                          $y_2659 = 1LL;
                          $y_2660 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2660 + -1LL) = 1024LL;
                          *((value *) $y_2660 + 0LL) = $y_2659;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2644;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2662 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $y_2660, $q_2643);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2644 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2644;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2664 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $y_2662);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2644 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $val_proj_2666 = *((value *) $env_2624 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $y_2664;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_2667 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $r_2644, $val_proj_2666);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(3LL <= $limit - $alloc)) {
                            *(root + 1LL) = $y_2667;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 3LL;
                            garbage_collect($tinfo);
                            $y_2667 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $y_2664 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_2668 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $y_2668 + -1LL) = 2048LL;
                          *((value *) $y_2668 + 0LL) = $y_2664;
                          *((value *) $y_2668 + 1LL) = $y_2667;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          return $y_2668;
                          break;

                      }
                    } else {
                      switch ($r_2644 >> 1LL) {
                        default:
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          /*skip*/;
                          $y_2646 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $q_2643);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(3LL <= $limit - $alloc)) {
                            *(root + 0LL) = $y_2646;
                            frame.next = root + 1LL;
                            (*$tinfo).fp = &frame;
                            (*$tinfo).nalloc = 3LL;
                            garbage_collect($tinfo);
                            $y_2646 = *(root + 0LL);
                            (*$tinfo).fp = frame.prev;
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          /*skip*/;
                          $y_2647 = 1LL;
                          $y_2648 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $y_2648 + -1LL) = 2048LL;
                          *((value *) $y_2648 + 0LL) = $y_2646;
                          *((value *) $y_2648 + 1LL) = $y_2647;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          return $y_2648;
                          break;

                      }
                    }
                    break;

                }
              } else {
                switch ($y_2642 >> 1LL) {

                }
              }
              break;

          }
        } else {
          switch ($val_proj_2630 >> 1LL) {
            default:
              $y_2631 = 1LL;
              $y_proj_2632 = *((value *) $env_2624 + 2LL);
              $y_2633 = (value) ($alloc + 1LL);
              $alloc = $alloc + 3LL;
              *((value *) $y_2633 + -1LL) = 2048LL;
              *((value *) $y_2633 + 0LL) = $y_2631;
              *((value *) $y_2633 + 1LL) = $y_proj_2632;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_2633;
              break;

          }
        }
        break;
      default:
        $ap_2669 = *((value *) $s_2625 + 0LL);
        $val_proj_2670 = *((value *) $env_2624 + 1LL);
        if (($val_proj_2670 & 1) == 0) {
          switch (*((value *) $val_proj_2670 + -1LL) & 255LL) {
            case 0:
              $y_proj_2674 = *((value *) $env_2624 + 0LL);
              $val_proj_2675 = *((value *) $env_2624 + 1LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_2624;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_2677 =
                ((value (*)(struct thread_info *, value, value, value))
                  pos_div_eucl_uncurried_known_134)
                ($tinfo, $val_proj_2675, $ap_2669, $y_proj_2674);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_2677;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_2677 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $env_2624 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_2677 & 1) == 0) {
                switch (*((value *) $y_2677 + -1LL) & 255LL) {
                  default:
                    $q_2678 = *((value *) $y_2677 + 0LL);
                    $r_2679 = *((value *) $y_2677 + 1LL);
                    if (($r_2679 & 1) == 0) {
                      switch (*((value *) $r_2679 + -1LL) & 255LL) {
                        case 0:
                          $y_2684 = 1LL;
                          $y_2685 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2685 + -1LL) = 1024LL;
                          *((value *) $y_2685 + 0LL) = $y_2684;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2679;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2687 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $y_2685, $q_2678);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2679 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2679;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2689 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $y_2687);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2679 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $y_2689;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2691 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $r_2679);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $y_2689 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $val_proj_2693 = *((value *) $env_2624 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $y_2689;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_2694 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $y_2691, $val_proj_2693);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(3LL <= $limit - $alloc)) {
                            *(root + 1LL) = $y_2694;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 3LL;
                            garbage_collect($tinfo);
                            $y_2694 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $y_2689 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_2695 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $y_2695 + -1LL) = 2048LL;
                          *((value *) $y_2695 + 0LL) = $y_2689;
                          *((value *) $y_2695 + 1LL) = $y_2694;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          return $y_2695;
                          break;
                        default:
                          $y_2696 = 1LL;
                          $y_2697 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2697 + -1LL) = 1024LL;
                          *((value *) $y_2697 + 0LL) = $y_2696;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2679;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2699 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $y_2697, $q_2678);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2679 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $r_2679;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2701 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $y_2699);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $r_2679 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $y_2701;
                          *(root + 0LL) = $env_2624;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2703 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $r_2679);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $y_2701 = *(root + 1LL);
                          $env_2624 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $val_proj_2705 = *((value *) $env_2624 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $y_2701;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_2706 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                            ($tinfo, $y_2703, $val_proj_2705);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(3LL <= $limit - $alloc)) {
                            *(root + 1LL) = $y_2706;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 3LL;
                            garbage_collect($tinfo);
                            $y_2706 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $y_2701 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_2707 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $y_2707 + -1LL) = 2048LL;
                          *((value *) $y_2707 + 0LL) = $y_2701;
                          *((value *) $y_2707 + 1LL) = $y_2706;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          return $y_2707;
                          break;

                      }
                    } else {
                      switch ($r_2679 >> 1LL) {
                        default:
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          /*skip*/;
                          $y_2681 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdopp_known_133)
                            ($tinfo, $q_2678);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(3LL <= $limit - $alloc)) {
                            *(root + 0LL) = $y_2681;
                            frame.next = root + 1LL;
                            (*$tinfo).fp = &frame;
                            (*$tinfo).nalloc = 3LL;
                            garbage_collect($tinfo);
                            $y_2681 = *(root + 0LL);
                            (*$tinfo).fp = frame.prev;
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          /*skip*/;
                          $y_2682 = 1LL;
                          $y_2683 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $y_2683 + -1LL) = 2048LL;
                          *((value *) $y_2683 + 0LL) = $y_2681;
                          *((value *) $y_2683 + 1LL) = $y_2682;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          return $y_2683;
                          break;

                      }
                    }
                    break;

                }
              } else {
                switch ($y_2677 >> 1LL) {

                }
              }
              break;
            default:
              $val_proj_2708 = *((value *) $env_2624 + 1LL);
              $bp_2709 = *((value *) $val_proj_2708 + 0LL);
              $y_proj_2710 = *((value *) $env_2624 + 0LL);
              $y_2711 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_2711 + -1LL) = 1024LL;
              *((value *) $y_2711 + 0LL) = $bp_2709;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_2713 =
                ((value (*)(struct thread_info *, value, value, value))
                  pos_div_eucl_uncurried_known_134)
                ($tinfo, $y_2711, $ap_2669, $y_proj_2710);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              if (($y_2713 & 1) == 0) {
                switch (*((value *) $y_2713 + -1LL) & 255LL) {
                  default:
                    $q_2714 = *((value *) $y_2713 + 0LL);
                    $r_2715 = *((value *) $y_2713 + 1LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $q_2714;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_2717 =
                      ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZdopp_known_133)
                      ($tinfo, $r_2715);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_2717;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_2717 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $q_2714 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_2718 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_2718 + -1LL) = 2048LL;
                    *((value *) $y_2718 + 0LL) = $q_2714;
                    *((value *) $y_2718 + 1LL) = $y_2717;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_2718;
                    break;

                }
              } else {
                switch ($y_2713 >> 1LL) {

                }
              }
              break;

          }
        } else {
          switch ($val_proj_2670 >> 1LL) {
            default:
              $y_2671 = 1LL;
              $y_proj_2672 = *((value *) $env_2624 + 2LL);
              $y_2673 = (value) ($alloc + 1LL);
              $alloc = $alloc + 3LL;
              *((value *) $y_2673 + -1LL) = 2048LL;
              *((value *) $y_2673 + 0LL) = $y_2671;
              *((value *) $y_2673 + 1LL) = $y_proj_2672;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_2673;
              break;

          }
        }
        break;

    }
  } else {
    switch ($s_2625 >> 1LL) {
      default:
        $y_2626 = 1LL;
        $y_2627 = 1LL;
        $y_2628 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_2628 + -1LL) = 2048LL;
        *((value *) $y_2628 + 0LL) = $y_2626;
        *((value *) $y_2628 + 1LL) = $y_2627;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2628;
        break;

    }
  }
}

value f_case_known_152(struct thread_info *$tinfo, value $s_2622)
{
  struct stack_frame frame;
  value root[1];
  register value $q_2623;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_2622 & 1) == 0) {
    switch (*((value *) $s_2622 + -1LL) & 255LL) {
      default:
        $q_2623 = *((value *) $s_2622 + 0LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $q_2623;
        break;

    }
  } else {
    switch ($s_2622 >> 1LL) {

    }
  }
}

value of_succ_nat_known_151(struct thread_info *$tinfo, value $n_2616)
{
  struct stack_frame frame;
  value root[1];
  register value $y_2617;
  register value $x_2618;
  register value $y_2619;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_2616 & 1) == 0) {
    switch (*((value *) $n_2616 + -1LL) & 255LL) {
      default:
        $x_2618 = *((value *) $n_2616 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_2619 =
          ((value (*)(struct thread_info *, value)) of_succ_nat_known_151)
          ($tinfo, $x_2618);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value)) succ_known_124)
          ($tinfo, $y_2619);
        return $result;
        break;

    }
  } else {
    switch ($n_2616 >> 1LL) {
      default:
        $y_2617 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2617;
        break;

    }
  }
}

value f_case_known_150(struct thread_info *$tinfo, value $s_2609)
{
  struct stack_frame frame;
  value root[1];
  register value $y_2610;
  register value $n_2611;
  register value $y_2613;
  register value $y_2614;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_2609 & 1) == 0) {
    switch (*((value *) $s_2609 + -1LL) & 255LL) {
      default:
        $n_2611 = *((value *) $s_2609 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_2613 =
          ((value (*)(struct thread_info *, value)) of_succ_nat_known_151)
          ($tinfo, $n_2611);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_2613;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_2613 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_2614 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_2614 + -1LL) = 1024LL;
        *((value *) $y_2614 + 0LL) = $y_2613;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2614;
        break;

    }
  } else {
    switch ($s_2609 >> 1LL) {
      default:
        $y_2610 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2610;
        break;

    }
  }
}

value f_case_known_149(struct thread_info *$tinfo, value $s_2605, value $y_2606)
{
  struct stack_frame frame;
  value root[2];
  register value $y_2607;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_2605 & 1) == 0) {
    switch (*((value *) $s_2605 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_2605 >> 1LL) {
      case 0:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2606;
        break;
      default:
        $y_2607 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2607;
        break;

    }
  }
}

value f_case_known_148(struct thread_info *$tinfo, value $s_2600)
{
  struct stack_frame frame;
  value root[1];
  register value $y_2601;
  register value $y_2602;
  register value $y_2603;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_2600 & 1) == 0) {
    switch (*((value *) $s_2600 + -1LL) & 255LL) {
      case 0:
        $y_2602 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2602;
        break;
      default:
        $y_2603 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2603;
        break;

    }
  } else {
    switch ($s_2600 >> 1LL) {
      default:
        $y_2601 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2601;
        break;

    }
  }
}

value f_case_known_147(struct thread_info *$tinfo, value $s_2587, value $code_2588)
{
  struct stack_frame frame;
  value root[2];
  register value $y_2589;
  register value $y_2590;
  register value $y_2591;
  register value $y_2592;
  register value $y_2593;
  register value $y_2595;
  register value $y_2596;
  register value $y_2597;
  register value $y_2598;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 1LL) = $code_2588;
    *(root + 0LL) = $s_2587;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $code_2588 = *(root + 1LL);
    $s_2587 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_2587 & 1) == 0) {
    switch (*((value *) $s_2587 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_2587 >> 1LL) {
      case 0:
        $y_2589 = 1LL;
        $y_2590 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_2590 + -1LL) = 1024LL;
        *((value *) $y_2590 + 0LL) = $y_2589;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_2590;
        break;
      default:
        $y_2591 = 1LL;
        $y_2592 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_2592 + -1LL) = 1024LL;
        *((value *) $y_2592 + 0LL) = $y_2591;
        $y_2593 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_2593 + -1LL) = 1024LL;
        *((value *) $y_2593 + 0LL) = $y_2592;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_2595 =
          ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_110)
          ($tinfo, $y_2593, $code_2588);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_2595;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_2595 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        if (($y_2595 & 1) == 0) {
          switch (*((value *) $y_2595 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_2595 >> 1LL) {
            case 0:
              $y_2596 = 3LL;
              $y_2597 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_2597 + -1LL) = 1024LL;
              *((value *) $y_2597 + 0LL) = $y_2596;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_2597;
              break;
            default:
              $y_2598 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_2598;
              break;

          }
        }
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_146(struct thread_info *$tinfo, value $env_1603, value $val_1604, value $code_1605, value $type_1606)
{
  struct stack_frame frame;
  value root[4];
  register value $y_1607;
  register value $y_1608;
  register value $y_1609;
  register value $y_1610;
  register value $y_1611;
  register value $y_1612;
  register value $y_1613;
  register value $y_1614;
  register value $y_1615;
  register value $y_1616;
  register value $y_1617;
  register value $y_1618;
  register value $y_1619;
  register value $y_1620;
  register value $y_1621;
  register value $y_1622;
  register value $y_1623;
  register value $y_1624;
  register value $y_1625;
  register value $y_1627;
  register value $y_1629;
  register value $y_1630;
  register value $y_1632;
  register value $snd_type_1633;
  register value $s_1634;
  register value $y_1636;
  register value $y_1637;
  register value $y_1638;
  register value $y_1639;
  register value $y_1640;
  register value $y_1641;
  register value $y_1642;
  register value $y_1643;
  register value $y_1644;
  register value $y_1645;
  register value $y_1646;
  register value $y_1647;
  register value $y_1648;
  register value $y_1649;
  register value $y_1650;
  register value $y_1651;
  register value $y_1652;
  register value $y_1653;
  register value $y_1654;
  register value $y_1655;
  register value $y_1656;
  register value $y_1657;
  register value $y_1658;
  register value $y_1659;
  register value $y_1660;
  register value $y_1661;
  register value $y_1662;
  register value $y_1663;
  register value $y_1664;
  register value $y_1665;
  register value $y_1666;
  register value $y_1667;
  register value $y_1668;
  register value $y_1669;
  register value $y_1670;
  register value $y_1671;
  register value $y_1672;
  register value $y_1673;
  register value $y_1674;
  register value $y_1675;
  register value $y_1676;
  register value $y_1677;
  register value $y_1678;
  register value $y_1679;
  register value $y_1680;
  register value $y_1681;
  register value $y_1682;
  register value $y_1683;
  register value $y_1684;
  register value $y_1685;
  register value $y_1686;
  register value $y_1687;
  register value $y_1688;
  register value $y_1689;
  register value $y_1690;
  register value $y_1691;
  register value $y_1692;
  register value $y_1693;
  register value $y_1694;
  register value $y_1695;
  register value $y_1696;
  register value $y_1697;
  register value $y_1698;
  register value $y_1699;
  register value $y_1700;
  register value $y_1701;
  register value $y_1702;
  register value $y_1703;
  register value $y_1704;
  register value $y_1705;
  register value $y_1706;
  register value $y_1707;
  register value $y_1708;
  register value $y_1709;
  register value $y_1710;
  register value $y_1711;
  register value $y_1712;
  register value $y_1713;
  register value $y_1714;
  register value $y_1715;
  register value $y_1716;
  register value $y_1717;
  register value $y_1718;
  register value $y_1719;
  register value $y_1720;
  register value $y_1721;
  register value $y_1722;
  register value $y_1723;
  register value $y_1724;
  register value $y_1725;
  register value $y_1726;
  register value $y_1727;
  register value $y_1728;
  register value $y_1729;
  register value $y_1730;
  register value $y_1731;
  register value $y_1732;
  register value $y_1733;
  register value $y_1734;
  register value $y_1735;
  register value $y_1736;
  register value $y_1737;
  register value $y_1738;
  register value $y_1739;
  register value $y_1740;
  register value $y_1741;
  register value $y_1742;
  register value $y_1743;
  register value $y_1744;
  register value $y_1745;
  register value $y_1746;
  register value $y_1747;
  register value $y_1748;
  register value $y_1749;
  register value $y_1750;
  register value $y_1751;
  register value $y_1752;
  register value $y_1753;
  register value $y_1754;
  register value $y_1755;
  register value $y_1756;
  register value $y_1757;
  register value $y_1758;
  register value $y_1759;
  register value $y_1760;
  register value $y_1761;
  register value $y_1762;
  register value $y_1763;
  register value $y_1764;
  register value $y_1765;
  register value $y_1766;
  register value $y_1767;
  register value $y_1768;
  register value $y_1769;
  register value $y_1770;
  register value $y_1771;
  register value $y_1772;
  register value $y_1773;
  register value $y_1774;
  register value $y_1775;
  register value $y_1776;
  register value $y_1777;
  register value $y_1778;
  register value $y_1779;
  register value $y_1780;
  register value $y_1781;
  register value $y_1782;
  register value $y_1783;
  register value $y_1784;
  register value $y_1785;
  register value $y_1786;
  register value $y_1787;
  register value $y_1788;
  register value $y_1789;
  register value $y_1790;
  register value $y_1791;
  register value $y_1792;
  register value $y_1793;
  register value $y_1794;
  register value $y_1795;
  register value $y_1796;
  register value $y_1797;
  register value $y_1798;
  register value $y_1799;
  register value $y_1800;
  register value $y_1801;
  register value $y_1802;
  register value $y_1803;
  register value $y_1804;
  register value $y_1805;
  register value $y_1806;
  register value $y_1807;
  register value $y_1808;
  register value $y_1809;
  register value $y_1810;
  register value $y_1811;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_proj_1813;
  register value $y_1814;
  register value $y_1815;
  register value $y_1816;
  register value $y_1817;
  register value $y_1818;
  register value $y_1819;
  register value $y_1820;
  register value $y_1821;
  register value $y_1822;
  register value $y_1823;
  register value $y_1824;
  register value $y_1825;
  register value $y_1826;
  register value $y_1827;
  register value $y_1828;
  register value $y_1829;
  register value $y_1830;
  register value $y_1831;
  register value $y_1832;
  register value $y_1833;
  register value $y_1834;
  register value $y_1835;
  register value $y_1836;
  register value $y_1837;
  register value $y_1838;
  register value $y_1839;
  register value $y_1840;
  register value $y_1841;
  register value $y_1842;
  register value $y_1843;
  register value $y_1844;
  register value $y_1845;
  register value $y_1846;
  register value $y_1847;
  register value $y_1848;
  register value $y_1849;
  register value $y_1850;
  register value $y_1851;
  register value $y_1852;
  register value $y_1853;
  register value $y_1854;
  register value $y_1855;
  register value $y_1856;
  register value $y_1857;
  register value $y_1858;
  register value $y_1859;
  register value $y_1860;
  register value $y_1861;
  register value $y_1862;
  register value $y_1863;
  register value $y_1864;
  register value $y_1865;
  register value $y_1866;
  register value $y_1867;
  register value $y_1868;
  register value $y_1869;
  register value $y_1870;
  register value $y_1871;
  register value $y_1872;
  register value $y_1873;
  register value $y_1874;
  register value $y_1875;
  register value $y_1876;
  register value $y_1877;
  register value $y_1878;
  register value $y_1879;
  register value $y_1880;
  register value $y_1881;
  register value $y_1882;
  register value $y_1883;
  register value $y_1884;
  register value $y_1885;
  register value $y_1886;
  register value $y_1887;
  register value $y_1888;
  register value $y_1889;
  register value $y_1890;
  register value $y_1891;
  register value $y_1892;
  register value $y_1893;
  register value $y_1894;
  register value $y_1895;
  register value $y_1896;
  register value $y_1897;
  register value $y_1898;
  register value $y_1899;
  register value $y_1900;
  register value $y_1901;
  register value $y_1902;
  register value $y_1903;
  register value $y_1904;
  register value $y_1905;
  register value $y_1906;
  register value $y_1907;
  register value $y_1908;
  register value $y_1909;
  register value $y_1910;
  register value $y_1911;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapperbogus_env_1913;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_1914;
  register value $y_1915;
  register value $y_1916;
  register value $y_1917;
  register value $y_1918;
  register value $y_1919;
  register value $y_1920;
  register value $y_proj_1922;
  register value $y_1923;
  register value $y_1924;
  register value $y_1925;
  register value $y_1926;
  register value $y_1927;
  register value $y_1928;
  register value $y_1929;
  register value $y_1930;
  register value $y_1931;
  register value $y_1932;
  register value $y_1933;
  register value $y_1934;
  register value $y_1935;
  register value $y_1936;
  register value $y_1937;
  register value $y_1938;
  register value $y_1939;
  register value $y_proj_1941;
  register value $y_1942;
  register value $y_1944;
  register value $CertiDDdOSdPit_infodLinuxdNatdTick_rate_proj_1946;
  register value $y_1947;
  register value $y_proj_1949;
  register value $env_1950;
  register value $y_1951;
  register value $count_1952;
  register value $y_1954;
  register value $y_1955;
  register value $y_1956;
  register value $y_1957;
  register value $y_1958;
  register value $y_1959;
  register value $y_1960;
  register value $y_1961;
  register value $y_1962;
  register value $y_1963;
  register value $y_1964;
  register value $y_1965;
  register value $y_1966;
  register value $y_1967;
  register value $y_1968;
  register value $y_1969;
  register value $y_1970;
  register value $y_1971;
  register value $y_1972;
  register value $y_1973;
  register value $y_1974;
  register value $y_1975;
  register value $y_1976;
  register value $y_1977;
  register value $y_1978;
  register value $y_1979;
  register value $y_1980;
  register value $y_1981;
  register value $y_1982;
  register value $y_1983;
  register value $y_1984;
  register value $y_1985;
  register value $y_1986;
  register value $y_1987;
  register value $y_1988;
  register value $y_1989;
  register value $y_1990;
  register value $y_1991;
  register value $y_1992;
  register value $y_1993;
  register value $y_1994;
  register value $y_1995;
  register value $y_1996;
  register value $y_1997;
  register value $y_1998;
  register value $y_1999;
  register value $y_2000;
  register value $y_2001;
  register value $y_2002;
  register value $y_2003;
  register value $y_2004;
  register value $y_2005;
  register value $y_2006;
  register value $y_2007;
  register value $y_2008;
  register value $y_2009;
  register value $y_2010;
  register value $y_2011;
  register value $y_2012;
  register value $y_2013;
  register value $y_2014;
  register value $y_2015;
  register value $y_2016;
  register value $y_2017;
  register value $y_2018;
  register value $y_2019;
  register value $y_2020;
  register value $y_2021;
  register value $y_2022;
  register value $y_2023;
  register value $y_2024;
  register value $y_2025;
  register value $y_2026;
  register value $y_2027;
  register value $y_2028;
  register value $y_2029;
  register value $y_2030;
  register value $y_2031;
  register value $y_2032;
  register value $y_2033;
  register value $y_2034;
  register value $y_2035;
  register value $y_2036;
  register value $y_2037;
  register value $y_2038;
  register value $y_2039;
  register value $y_2040;
  register value $y_2041;
  register value $y_2042;
  register value $y_2043;
  register value $y_2044;
  register value $y_2045;
  register value $y_2046;
  register value $y_2047;
  register value $y_2048;
  register value $y_2049;
  register value $y_2050;
  register value $y_2051;
  register value $y_2052;
  register value $y_2053;
  register value $y_2054;
  register value $y_2055;
  register value $y_2056;
  register value $y_2057;
  register value $y_2058;
  register value $y_2059;
  register value $y_2060;
  register value $y_2061;
  register value $y_2062;
  register value $y_2063;
  register value $y_2064;
  register value $y_2065;
  register value $y_2066;
  register value $y_2067;
  register value $y_2068;
  register value $y_2069;
  register value $y_2070;
  register value $y_2071;
  register value $y_2072;
  register value $y_2073;
  register value $y_2074;
  register value $y_2075;
  register value $y_2076;
  register value $y_2077;
  register value $y_2078;
  register value $y_2079;
  register value $y_2080;
  register value $y_2081;
  register value $y_2082;
  register value $y_2083;
  register value $y_2084;
  register value $y_2085;
  register value $y_2086;
  register value $y_2087;
  register value $y_2088;
  register value $y_2089;
  register value $y_2090;
  register value $y_2091;
  register value $y_2092;
  register value $y_2093;
  register value $y_2094;
  register value $y_2095;
  register value $y_2096;
  register value $y_2097;
  register value $y_2098;
  register value $y_2099;
  register value $y_2100;
  register value $y_2101;
  register value $y_2102;
  register value $y_2103;
  register value $y_2104;
  register value $y_2105;
  register value $y_2106;
  register value $y_2107;
  register value $y_2108;
  register value $y_2109;
  register value $y_2110;
  register value $y_2111;
  register value $y_2112;
  register value $y_2113;
  register value $y_2114;
  register value $y_2115;
  register value $y_2116;
  register value $y_2117;
  register value $y_2118;
  register value $y_2119;
  register value $y_2120;
  register value $y_2121;
  register value $y_2122;
  register value $y_2123;
  register value $y_2124;
  register value $y_2125;
  register value $y_2126;
  register value $y_2127;
  register value $y_2128;
  register value $y_2129;
  register value $y_2130;
  register value $y_2131;
  register value $y_2132;
  register value $y_2133;
  register value $y_2134;
  register value $y_2135;
  register value $y_2136;
  register value $y_2137;
  register value $y_2138;
  register value $y_2139;
  register value $y_2140;
  register value $y_2141;
  register value $y_2142;
  register value $y_2143;
  register value $y_2144;
  register value $y_2145;
  register value $y_2146;
  register value $y_2147;
  register value $y_2148;
  register value $y_2149;
  register value $y_2150;
  register value $y_2151;
  register value $y_2152;
  register value $y_2153;
  register value $y_2154;
  register value $y_2155;
  register value $y_2156;
  register value $y_2157;
  register value $y_2158;
  register value $y_2159;
  register value $y_2160;
  register value $y_2161;
  register value $y_2162;
  register value $y_2163;
  register value $y_2164;
  register value $y_2165;
  register value $y_2166;
  register value $y_2167;
  register value $y_2168;
  register value $y_2169;
  register value $y_2170;
  register value $y_2171;
  register value $y_2172;
  register value $y_2173;
  register value $y_2174;
  register value $y_2175;
  register value $y_2176;
  register value $y_2177;
  register value $y_2178;
  register value $y_2179;
  register value $y_2180;
  register value $y_2181;
  register value $y_2182;
  register value $y_2183;
  register value $y_2184;
  register value $y_2185;
  register value $y_2186;
  register value $y_2187;
  register value $y_2188;
  register value $y_2189;
  register value $y_2190;
  register value $y_2191;
  register value $y_2192;
  register value $y_2193;
  register value $y_2194;
  register value $y_2195;
  register value $y_2196;
  register value $y_2197;
  register value $y_2198;
  register value $y_2199;
  register value $y_2200;
  register value $y_2201;
  register value $y_2202;
  register value $y_2203;
  register value $y_2204;
  register value $y_2205;
  register value $y_2206;
  register value $y_2207;
  register value $y_2208;
  register value $y_2209;
  register value $y_2210;
  register value $prim_2211;
  register value $y_2213;
  register value $y_2214;
  register value $y_2215;
  register value $y_2216;
  register value $y_2217;
  register value $y_2218;
  register value $y_2219;
  register value $y_2220;
  register value $y_2221;
  register value $y_2222;
  register value $prim_2223;
  register value $y_2224;
  register value $y_2225;
  register value $y_2226;
  register value $y_2227;
  register value $y_2228;
  register value $y_2229;
  register value $y_2230;
  register value $y_2231;
  register value $y_2232;
  register value $y_2233;
  register value $y_2234;
  register value $y_2235;
  register value $y_2236;
  register value $y_2237;
  register value $y_2238;
  register value $y_2239;
  register value $y_2240;
  register value $y_2241;
  register value $y_2242;
  register value $y_2243;
  register value $y_2244;
  register value $y_2245;
  register value $y_2246;
  register value $y_2247;
  register value $y_2248;
  register value $y_2249;
  register value $y_2250;
  register value $y_2251;
  register value $y_2252;
  register value $y_2253;
  register value $y_2254;
  register value $y_2255;
  register value $y_2256;
  register value $y_2257;
  register value $y_2258;
  register value $y_2259;
  register value $y_2260;
  register value $y_2261;
  register value $y_2262;
  register value $y_2263;
  register value $y_2264;
  register value $y_2265;
  register value $y_2266;
  register value $y_2267;
  register value $y_2268;
  register value $y_2269;
  register value $y_2270;
  register value $y_2271;
  register value $y_2272;
  register value $y_2273;
  register value $y_2274;
  register value $y_2275;
  register value $y_2276;
  register value $y_2277;
  register value $y_2278;
  register value $y_2279;
  register value $y_2280;
  register value $y_2281;
  register value $y_2282;
  register value $y_2283;
  register value $y_2284;
  register value $y_2285;
  register value $y_2286;
  register value $y_2287;
  register value $y_2288;
  register value $y_2289;
  register value $y_2290;
  register value $y_2291;
  register value $y_2292;
  register value $y_2293;
  register value $y_2294;
  register value $y_2295;
  register value $y_2296;
  register value $y_2297;
  register value $y_2298;
  register value $y_2299;
  register value $y_2300;
  register value $y_2301;
  register value $y_2302;
  register value $y_2303;
  register value $y_2304;
  register value $y_2305;
  register value $y_2306;
  register value $y_2307;
  register value $y_2308;
  register value $y_2309;
  register value $y_2310;
  register value $y_2311;
  register value $y_2312;
  register value $y_2313;
  register value $y_2314;
  register value $y_2315;
  register value $y_2316;
  register value $y_2317;
  register value $y_2318;
  register value $y_2319;
  register value $y_2320;
  register value $y_2321;
  register value $y_2322;
  register value $y_2323;
  register value $y_2324;
  register value $y_2325;
  register value $y_2326;
  register value $y_2327;
  register value $y_2328;
  register value $y_2329;
  register value $y_2330;
  register value $y_2331;
  register value $y_2332;
  register value $y_2333;
  register value $y_2334;
  register value $y_2335;
  register value $y_2336;
  register value $y_2337;
  register value $y_2338;
  register value $y_2339;
  register value $y_2340;
  register value $y_2341;
  register value $y_2342;
  register value $y_2343;
  register value $y_2344;
  register value $y_2345;
  register value $y_2346;
  register value $y_2347;
  register value $y_2348;
  register value $y_2349;
  register value $y_2350;
  register value $y_2351;
  register value $y_2352;
  register value $y_2353;
  register value $y_2354;
  register value $y_2355;
  register value $y_2356;
  register value $y_2357;
  register value $y_2358;
  register value $y_2359;
  register value $y_2360;
  register value $y_2361;
  register value $y_2362;
  register value $y_2363;
  register value $y_2364;
  register value $y_2365;
  register value $y_2366;
  register value $y_2367;
  register value $y_2368;
  register value $y_2369;
  register value $y_2370;
  register value $y_2371;
  register value $y_2372;
  register value $y_2373;
  register value $y_2374;
  register value $y_2375;
  register value $y_2376;
  register value $y_2377;
  register value $y_2378;
  register value $y_2379;
  register value $y_2380;
  register value $y_2381;
  register value $y_2382;
  register value $y_2383;
  register value $y_2384;
  register value $y_2385;
  register value $y_2386;
  register value $y_2387;
  register value $y_2388;
  register value $y_2389;
  register value $y_2390;
  register value $y_2391;
  register value $y_2392;
  register value $y_2393;
  register value $y_2394;
  register value $y_2395;
  register value $y_2396;
  register value $y_2397;
  register value $y_2398;
  register value $y_2399;
  register value $y_2400;
  register value $y_2401;
  register value $y_2402;
  register value $y_2403;
  register value $y_2404;
  register value $y_2405;
  register value $y_2406;
  register value $y_2407;
  register value $y_2408;
  register value $y_2409;
  register value $y_2410;
  register value $y_2411;
  register value $y_2412;
  register value $y_2413;
  register value $y_2414;
  register value $y_2415;
  register value $y_2416;
  register value $y_2417;
  register value $y_2418;
  register value $y_2419;
  register value $y_2420;
  register value $y_2421;
  register value $y_2422;
  register value $y_2423;
  register value $y_2424;
  register value $y_2425;
  register value $y_2426;
  register value $y_2427;
  register value $y_2428;
  register value $y_2429;
  register value $y_2430;
  register value $y_2431;
  register value $y_2432;
  register value $y_2433;
  register value $y_2434;
  register value $y_2435;
  register value $y_2436;
  register value $y_2437;
  register value $y_2438;
  register value $y_2439;
  register value $y_2440;
  register value $y_2441;
  register value $y_2442;
  register value $y_2443;
  register value $y_2444;
  register value $y_2445;
  register value $y_2446;
  register value $y_2447;
  register value $y_2448;
  register value $y_2449;
  register value $y_2450;
  register value $y_2451;
  register value $y_2452;
  register value $y_2453;
  register value $y_2454;
  register value $y_2455;
  register value $y_2456;
  register value $y_2457;
  register value $y_2458;
  register value $y_2459;
  register value $y_2460;
  register value $y_2461;
  register value $y_2462;
  register value $y_2463;
  register value $y_2464;
  register value $y_2465;
  register value $y_2466;
  register value $y_2467;
  register value $y_2468;
  register value $y_2469;
  register value $y_2470;
  register value $y_2471;
  register value $y_2472;
  register value $y_2473;
  register value $y_2474;
  register value $y_2475;
  register value $y_2476;
  register value $y_2477;
  register value $y_2478;
  register value $y_2479;
  register value $prim_2480;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_proj_2482;
  register value $y_2483;
  register value $y_2484;
  register value $y_2485;
  register value $y_2486;
  register value $y_2487;
  register value $y_2488;
  register value $y_2489;
  register value $y_2490;
  register value $y_2491;
  register value $y_2492;
  register value $y_2493;
  register value $y_2494;
  register value $y_2495;
  register value $y_2496;
  register value $y_2497;
  register value $y_2498;
  register value $y_2499;
  register value $y_2500;
  register value $y_2501;
  register value $y_2502;
  register value $y_2503;
  register value $y_2504;
  register value $y_2505;
  register value $y_2506;
  register value $y_2507;
  register value $y_2508;
  register value $y_2509;
  register value $y_2510;
  register value $y_2511;
  register value $y_2512;
  register value $y_2513;
  register value $y_2514;
  register value $y_2515;
  register value $y_2516;
  register value $y_2517;
  register value $y_2518;
  register value $y_2519;
  register value $y_2520;
  register value $y_2521;
  register value $y_2522;
  register value $y_2523;
  register value $y_2524;
  register value $y_2525;
  register value $y_2526;
  register value $y_2527;
  register value $y_2528;
  register value $y_2529;
  register value $y_2530;
  register value $y_2531;
  register value $y_2532;
  register value $y_2533;
  register value $y_2534;
  register value $y_2535;
  register value $y_2536;
  register value $y_2537;
  register value $y_2538;
  register value $y_2539;
  register value $y_2540;
  register value $y_2541;
  register value $y_2542;
  register value $y_2543;
  register value $y_2544;
  register value $y_2545;
  register value $y_2546;
  register value $y_2547;
  register value $y_2548;
  register value $y_2549;
  register value $y_2550;
  register value $y_2551;
  register value $y_2552;
  register value $y_2553;
  register value $y_2554;
  register value $y_2555;
  register value $y_2556;
  register value $y_2557;
  register value $y_2558;
  register value $y_2559;
  register value $y_2560;
  register value $y_2561;
  register value $y_2562;
  register value $y_2563;
  register value $y_2564;
  register value $y_2565;
  register value $y_2566;
  register value $y_2567;
  register value $y_2568;
  register value $y_2569;
  register value $y_2570;
  register value $y_2571;
  register value $y_2572;
  register value $y_2573;
  register value $y_2574;
  register value $y_2575;
  register value $y_2576;
  register value $y_2577;
  register value $y_2578;
  register value $y_2579;
  register value $y_2580;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapperbogus_env_2582;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_2583;
  register value $CertiDDdOSdErrvaldeinval_proj_2584;
  register value $CertiDDdOSdErrvaldeinval_proj_2585;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(36LL <= $limit - $alloc)) {
    *(root + 3LL) = $type_1606;
    *(root + 2LL) = $code_1605;
    *(root + 1LL) = $val_1604;
    *(root + 0LL) = $env_1603;
    frame.next = root + 4LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 36LL;
    garbage_collect($tinfo);
    $type_1606 = *(root + 3LL);
    $code_1605 = *(root + 2LL);
    $val_1604 = *(root + 1LL);
    $env_1603 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_1607 = 1LL;
  $y_1608 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1608 + -1LL) = 1024LL;
  *((value *) $y_1608 + 0LL) = $y_1607;
  $y_1609 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1609 + -1LL) = 1024LL;
  *((value *) $y_1609 + 0LL) = $y_1608;
  $y_1610 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1610 + -1LL) = 1024LL;
  *((value *) $y_1610 + 0LL) = $y_1609;
  $y_1611 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1611 + -1LL) = 1024LL;
  *((value *) $y_1611 + 0LL) = $y_1610;
  $y_1612 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1612 + -1LL) = 1024LL;
  *((value *) $y_1612 + 0LL) = $y_1611;
  $y_1613 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1613 + -1LL) = 1024LL;
  *((value *) $y_1613 + 0LL) = $y_1612;
  $y_1614 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1614 + -1LL) = 1024LL;
  *((value *) $y_1614 + 0LL) = $y_1613;
  $y_1615 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1615 + -1LL) = 1024LL;
  *((value *) $y_1615 + 0LL) = $y_1614;
  $y_1616 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1616 + -1LL) = 1024LL;
  *((value *) $y_1616 + 0LL) = $y_1615;
  $y_1617 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1617 + -1LL) = 1024LL;
  *((value *) $y_1617 + 0LL) = $y_1616;
  $y_1618 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1618 + -1LL) = 1024LL;
  *((value *) $y_1618 + 0LL) = $y_1617;
  $y_1619 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1619 + -1LL) = 1024LL;
  *((value *) $y_1619 + 0LL) = $y_1618;
  $y_1620 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1620 + -1LL) = 1024LL;
  *((value *) $y_1620 + 0LL) = $y_1619;
  $y_1621 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1621 + -1LL) = 1024LL;
  *((value *) $y_1621 + 0LL) = $y_1620;
  $y_1622 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1622 + -1LL) = 1024LL;
  *((value *) $y_1622 + 0LL) = $y_1621;
  $y_1623 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1623 + -1LL) = 1024LL;
  *((value *) $y_1623 + 0LL) = $y_1622;
  $y_1624 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1624 + -1LL) = 1024LL;
  *((value *) $y_1624 + 0LL) = $y_1623;
  $y_1625 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_1625 + -1LL) = 1024LL;
  *((value *) $y_1625 + 0LL) = $y_1624;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $code_1605;
  *(root + 1LL) = $val_1604;
  *(root + 0LL) = $env_1603;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_1627 =
    ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_110)
    ($tinfo, $y_1625, $type_1606);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_1627;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_1627 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $code_1605 = *(root + 2LL);
  $val_1604 = *(root + 1LL);
  $env_1603 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_1627 & 1) == 0) {
    switch (*((value *) $y_1627 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_1627 >> 1LL) {
      case 0:
        $y_1629 = 1LL;
        $y_1630 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1630 + -1LL) = 1024LL;
        *((value *) $y_1630 + 0LL) = $y_1629;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 2LL) = $code_1605;
        *(root + 1LL) = $val_1604;
        *(root + 0LL) = $env_1603;
        frame.next = root + 3LL;
        (*$tinfo).fp = &frame;
        $y_1632 =
          ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_110)
          ($tinfo, $y_1630, $code_1605);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $code_1605 = *(root + 2LL);
        $val_1604 = *(root + 1LL);
        $env_1603 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $val_1604;
        *(root + 0LL) = $env_1603;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $snd_type_1633 =
          ((value (*)(struct thread_info *, value, value)) f_case_known_147)
          ($tinfo, $y_1632, $code_1605);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(10LL <= $limit - $alloc)) {
          *(root + 2LL) = $snd_type_1633;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 10LL;
          garbage_collect($tinfo);
          $snd_type_1633 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $val_1604 = *(root + 1LL);
        $env_1603 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($snd_type_1633 & 1) == 0) {
          switch (*((value *) $snd_type_1633 + -1LL) & 255LL) {
            default:
              $s_1634 = *((value *) $snd_type_1633 + 0LL);
              if (($s_1634 & 1) == 0) {
                switch (*((value *) $s_1634 + -1LL) & 255LL) {

                }
              } else {
                switch ($s_1634 >> 1LL) {
                  case 0:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_1603;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_1636 =
                      ((value (*)(struct thread_info *, value)) f_case_known_148)
                      ($tinfo, $val_1604);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(346LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_1636;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 346LL;
                      garbage_collect($tinfo);
                      $y_1636 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $env_1603 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    if (($y_1636 & 1) == 0) {
                      switch (*((value *) $y_1636 + -1LL) & 255LL) {

                      }
                    } else {
                      switch ($y_1636 >> 1LL) {
                        case 0:
                          $y_1637 = 1LL;
                          $y_1638 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1638 + -1LL) = 1024LL;
                          *((value *) $y_1638 + 0LL) = $y_1637;
                          $y_1639 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1639 + -1LL) = 1024LL;
                          *((value *) $y_1639 + 0LL) = $y_1638;
                          $y_1640 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1640 + -1LL) = 1024LL;
                          *((value *) $y_1640 + 0LL) = $y_1639;
                          $y_1641 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1641 + -1LL) = 1024LL;
                          *((value *) $y_1641 + 0LL) = $y_1640;
                          $y_1642 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1642 + -1LL) = 1024LL;
                          *((value *) $y_1642 + 0LL) = $y_1641;
                          $y_1643 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1643 + -1LL) = 1024LL;
                          *((value *) $y_1643 + 0LL) = $y_1642;
                          $y_1644 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1644 + -1LL) = 1024LL;
                          *((value *) $y_1644 + 0LL) = $y_1643;
                          $y_1645 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1645 + -1LL) = 1024LL;
                          *((value *) $y_1645 + 0LL) = $y_1644;
                          $y_1646 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1646 + -1LL) = 1024LL;
                          *((value *) $y_1646 + 0LL) = $y_1645;
                          $y_1647 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1647 + -1LL) = 1024LL;
                          *((value *) $y_1647 + 0LL) = $y_1646;
                          $y_1648 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1648 + -1LL) = 1024LL;
                          *((value *) $y_1648 + 0LL) = $y_1647;
                          $y_1649 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1649 + -1LL) = 1024LL;
                          *((value *) $y_1649 + 0LL) = $y_1648;
                          $y_1650 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1650 + -1LL) = 1024LL;
                          *((value *) $y_1650 + 0LL) = $y_1649;
                          $y_1651 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1651 + -1LL) = 1024LL;
                          *((value *) $y_1651 + 0LL) = $y_1650;
                          $y_1652 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1652 + -1LL) = 1024LL;
                          *((value *) $y_1652 + 0LL) = $y_1651;
                          $y_1653 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1653 + -1LL) = 1024LL;
                          *((value *) $y_1653 + 0LL) = $y_1652;
                          $y_1654 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1654 + -1LL) = 1024LL;
                          *((value *) $y_1654 + 0LL) = $y_1653;
                          $y_1655 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1655 + -1LL) = 1024LL;
                          *((value *) $y_1655 + 0LL) = $y_1654;
                          $y_1656 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1656 + -1LL) = 1024LL;
                          *((value *) $y_1656 + 0LL) = $y_1655;
                          $y_1657 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1657 + -1LL) = 1024LL;
                          *((value *) $y_1657 + 0LL) = $y_1656;
                          $y_1658 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1658 + -1LL) = 1024LL;
                          *((value *) $y_1658 + 0LL) = $y_1657;
                          $y_1659 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1659 + -1LL) = 1024LL;
                          *((value *) $y_1659 + 0LL) = $y_1658;
                          $y_1660 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1660 + -1LL) = 1024LL;
                          *((value *) $y_1660 + 0LL) = $y_1659;
                          $y_1661 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1661 + -1LL) = 1024LL;
                          *((value *) $y_1661 + 0LL) = $y_1660;
                          $y_1662 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1662 + -1LL) = 1024LL;
                          *((value *) $y_1662 + 0LL) = $y_1661;
                          $y_1663 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1663 + -1LL) = 1024LL;
                          *((value *) $y_1663 + 0LL) = $y_1662;
                          $y_1664 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1664 + -1LL) = 1024LL;
                          *((value *) $y_1664 + 0LL) = $y_1663;
                          $y_1665 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1665 + -1LL) = 1024LL;
                          *((value *) $y_1665 + 0LL) = $y_1664;
                          $y_1666 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1666 + -1LL) = 1024LL;
                          *((value *) $y_1666 + 0LL) = $y_1665;
                          $y_1667 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1667 + -1LL) = 1024LL;
                          *((value *) $y_1667 + 0LL) = $y_1666;
                          $y_1668 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1668 + -1LL) = 1024LL;
                          *((value *) $y_1668 + 0LL) = $y_1667;
                          $y_1669 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1669 + -1LL) = 1024LL;
                          *((value *) $y_1669 + 0LL) = $y_1668;
                          $y_1670 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1670 + -1LL) = 1024LL;
                          *((value *) $y_1670 + 0LL) = $y_1669;
                          $y_1671 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1671 + -1LL) = 1024LL;
                          *((value *) $y_1671 + 0LL) = $y_1670;
                          $y_1672 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1672 + -1LL) = 1024LL;
                          *((value *) $y_1672 + 0LL) = $y_1671;
                          $y_1673 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1673 + -1LL) = 1024LL;
                          *((value *) $y_1673 + 0LL) = $y_1672;
                          $y_1674 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1674 + -1LL) = 1024LL;
                          *((value *) $y_1674 + 0LL) = $y_1673;
                          $y_1675 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1675 + -1LL) = 1024LL;
                          *((value *) $y_1675 + 0LL) = $y_1674;
                          $y_1676 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1676 + -1LL) = 1024LL;
                          *((value *) $y_1676 + 0LL) = $y_1675;
                          $y_1677 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1677 + -1LL) = 1024LL;
                          *((value *) $y_1677 + 0LL) = $y_1676;
                          $y_1678 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1678 + -1LL) = 1024LL;
                          *((value *) $y_1678 + 0LL) = $y_1677;
                          $y_1679 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1679 + -1LL) = 1024LL;
                          *((value *) $y_1679 + 0LL) = $y_1678;
                          $y_1680 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1680 + -1LL) = 1024LL;
                          *((value *) $y_1680 + 0LL) = $y_1679;
                          $y_1681 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1681 + -1LL) = 1024LL;
                          *((value *) $y_1681 + 0LL) = $y_1680;
                          $y_1682 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1682 + -1LL) = 1024LL;
                          *((value *) $y_1682 + 0LL) = $y_1681;
                          $y_1683 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1683 + -1LL) = 1024LL;
                          *((value *) $y_1683 + 0LL) = $y_1682;
                          $y_1684 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1684 + -1LL) = 1024LL;
                          *((value *) $y_1684 + 0LL) = $y_1683;
                          $y_1685 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1685 + -1LL) = 1024LL;
                          *((value *) $y_1685 + 0LL) = $y_1684;
                          $y_1686 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1686 + -1LL) = 1024LL;
                          *((value *) $y_1686 + 0LL) = $y_1685;
                          $y_1687 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1687 + -1LL) = 1024LL;
                          *((value *) $y_1687 + 0LL) = $y_1686;
                          $y_1688 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1688 + -1LL) = 1024LL;
                          *((value *) $y_1688 + 0LL) = $y_1687;
                          $y_1689 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1689 + -1LL) = 1024LL;
                          *((value *) $y_1689 + 0LL) = $y_1688;
                          $y_1690 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1690 + -1LL) = 1024LL;
                          *((value *) $y_1690 + 0LL) = $y_1689;
                          $y_1691 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1691 + -1LL) = 1024LL;
                          *((value *) $y_1691 + 0LL) = $y_1690;
                          $y_1692 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1692 + -1LL) = 1024LL;
                          *((value *) $y_1692 + 0LL) = $y_1691;
                          $y_1693 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1693 + -1LL) = 1024LL;
                          *((value *) $y_1693 + 0LL) = $y_1692;
                          $y_1694 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1694 + -1LL) = 1024LL;
                          *((value *) $y_1694 + 0LL) = $y_1693;
                          $y_1695 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1695 + -1LL) = 1024LL;
                          *((value *) $y_1695 + 0LL) = $y_1694;
                          $y_1696 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1696 + -1LL) = 1024LL;
                          *((value *) $y_1696 + 0LL) = $y_1695;
                          $y_1697 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1697 + -1LL) = 1024LL;
                          *((value *) $y_1697 + 0LL) = $y_1696;
                          $y_1698 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1698 + -1LL) = 1024LL;
                          *((value *) $y_1698 + 0LL) = $y_1697;
                          $y_1699 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1699 + -1LL) = 1024LL;
                          *((value *) $y_1699 + 0LL) = $y_1698;
                          $y_1700 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1700 + -1LL) = 1024LL;
                          *((value *) $y_1700 + 0LL) = $y_1699;
                          $y_1701 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1701 + -1LL) = 1024LL;
                          *((value *) $y_1701 + 0LL) = $y_1700;
                          $y_1702 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1702 + -1LL) = 1024LL;
                          *((value *) $y_1702 + 0LL) = $y_1701;
                          $y_1703 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1703 + -1LL) = 1024LL;
                          *((value *) $y_1703 + 0LL) = $y_1702;
                          $y_1704 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1704 + -1LL) = 1024LL;
                          *((value *) $y_1704 + 0LL) = $y_1703;
                          $y_1705 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1705 + -1LL) = 1024LL;
                          *((value *) $y_1705 + 0LL) = $y_1704;
                          $y_1706 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1706 + -1LL) = 1024LL;
                          *((value *) $y_1706 + 0LL) = $y_1705;
                          $y_1707 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1707 + -1LL) = 1024LL;
                          *((value *) $y_1707 + 0LL) = $y_1706;
                          $y_1708 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1708 + -1LL) = 1024LL;
                          *((value *) $y_1708 + 0LL) = $y_1707;
                          $y_1709 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1709 + -1LL) = 1024LL;
                          *((value *) $y_1709 + 0LL) = $y_1708;
                          $y_1710 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1710 + -1LL) = 1024LL;
                          *((value *) $y_1710 + 0LL) = $y_1709;
                          $y_1711 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1711 + -1LL) = 1024LL;
                          *((value *) $y_1711 + 0LL) = $y_1710;
                          $y_1712 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1712 + -1LL) = 1024LL;
                          *((value *) $y_1712 + 0LL) = $y_1711;
                          $y_1713 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1713 + -1LL) = 1024LL;
                          *((value *) $y_1713 + 0LL) = $y_1712;
                          $y_1714 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1714 + -1LL) = 1024LL;
                          *((value *) $y_1714 + 0LL) = $y_1713;
                          $y_1715 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1715 + -1LL) = 1024LL;
                          *((value *) $y_1715 + 0LL) = $y_1714;
                          $y_1716 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1716 + -1LL) = 1024LL;
                          *((value *) $y_1716 + 0LL) = $y_1715;
                          $y_1717 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1717 + -1LL) = 1024LL;
                          *((value *) $y_1717 + 0LL) = $y_1716;
                          $y_1718 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1718 + -1LL) = 1024LL;
                          *((value *) $y_1718 + 0LL) = $y_1717;
                          $y_1719 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1719 + -1LL) = 1024LL;
                          *((value *) $y_1719 + 0LL) = $y_1718;
                          $y_1720 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1720 + -1LL) = 1024LL;
                          *((value *) $y_1720 + 0LL) = $y_1719;
                          $y_1721 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1721 + -1LL) = 1024LL;
                          *((value *) $y_1721 + 0LL) = $y_1720;
                          $y_1722 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1722 + -1LL) = 1024LL;
                          *((value *) $y_1722 + 0LL) = $y_1721;
                          $y_1723 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1723 + -1LL) = 1024LL;
                          *((value *) $y_1723 + 0LL) = $y_1722;
                          $y_1724 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1724 + -1LL) = 1024LL;
                          *((value *) $y_1724 + 0LL) = $y_1723;
                          $y_1725 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1725 + -1LL) = 1024LL;
                          *((value *) $y_1725 + 0LL) = $y_1724;
                          $y_1726 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1726 + -1LL) = 1024LL;
                          *((value *) $y_1726 + 0LL) = $y_1725;
                          $y_1727 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1727 + -1LL) = 1024LL;
                          *((value *) $y_1727 + 0LL) = $y_1726;
                          $y_1728 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1728 + -1LL) = 1024LL;
                          *((value *) $y_1728 + 0LL) = $y_1727;
                          $y_1729 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1729 + -1LL) = 1024LL;
                          *((value *) $y_1729 + 0LL) = $y_1728;
                          $y_1730 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1730 + -1LL) = 1024LL;
                          *((value *) $y_1730 + 0LL) = $y_1729;
                          $y_1731 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1731 + -1LL) = 1024LL;
                          *((value *) $y_1731 + 0LL) = $y_1730;
                          $y_1732 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1732 + -1LL) = 1024LL;
                          *((value *) $y_1732 + 0LL) = $y_1731;
                          $y_1733 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1733 + -1LL) = 1024LL;
                          *((value *) $y_1733 + 0LL) = $y_1732;
                          $y_1734 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1734 + -1LL) = 1024LL;
                          *((value *) $y_1734 + 0LL) = $y_1733;
                          $y_1735 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1735 + -1LL) = 1024LL;
                          *((value *) $y_1735 + 0LL) = $y_1734;
                          $y_1736 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1736 + -1LL) = 1024LL;
                          *((value *) $y_1736 + 0LL) = $y_1735;
                          $y_1737 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1737 + -1LL) = 1024LL;
                          *((value *) $y_1737 + 0LL) = $y_1736;
                          $y_1738 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1738 + -1LL) = 1024LL;
                          *((value *) $y_1738 + 0LL) = $y_1737;
                          $y_1739 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1739 + -1LL) = 1024LL;
                          *((value *) $y_1739 + 0LL) = $y_1738;
                          $y_1740 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1740 + -1LL) = 1024LL;
                          *((value *) $y_1740 + 0LL) = $y_1739;
                          $y_1741 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1741 + -1LL) = 1024LL;
                          *((value *) $y_1741 + 0LL) = $y_1740;
                          $y_1742 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1742 + -1LL) = 1024LL;
                          *((value *) $y_1742 + 0LL) = $y_1741;
                          $y_1743 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1743 + -1LL) = 1024LL;
                          *((value *) $y_1743 + 0LL) = $y_1742;
                          $y_1744 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1744 + -1LL) = 1024LL;
                          *((value *) $y_1744 + 0LL) = $y_1743;
                          $y_1745 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1745 + -1LL) = 1024LL;
                          *((value *) $y_1745 + 0LL) = $y_1744;
                          $y_1746 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1746 + -1LL) = 1024LL;
                          *((value *) $y_1746 + 0LL) = $y_1745;
                          $y_1747 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1747 + -1LL) = 1024LL;
                          *((value *) $y_1747 + 0LL) = $y_1746;
                          $y_1748 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1748 + -1LL) = 1024LL;
                          *((value *) $y_1748 + 0LL) = $y_1747;
                          $y_1749 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1749 + -1LL) = 1024LL;
                          *((value *) $y_1749 + 0LL) = $y_1748;
                          $y_1750 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1750 + -1LL) = 1024LL;
                          *((value *) $y_1750 + 0LL) = $y_1749;
                          $y_1751 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1751 + -1LL) = 1024LL;
                          *((value *) $y_1751 + 0LL) = $y_1750;
                          $y_1752 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1752 + -1LL) = 1024LL;
                          *((value *) $y_1752 + 0LL) = $y_1751;
                          $y_1753 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1753 + -1LL) = 1024LL;
                          *((value *) $y_1753 + 0LL) = $y_1752;
                          $y_1754 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1754 + -1LL) = 1024LL;
                          *((value *) $y_1754 + 0LL) = $y_1753;
                          $y_1755 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1755 + -1LL) = 1024LL;
                          *((value *) $y_1755 + 0LL) = $y_1754;
                          $y_1756 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1756 + -1LL) = 1024LL;
                          *((value *) $y_1756 + 0LL) = $y_1755;
                          $y_1757 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1757 + -1LL) = 1024LL;
                          *((value *) $y_1757 + 0LL) = $y_1756;
                          $y_1758 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1758 + -1LL) = 1024LL;
                          *((value *) $y_1758 + 0LL) = $y_1757;
                          $y_1759 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1759 + -1LL) = 1024LL;
                          *((value *) $y_1759 + 0LL) = $y_1758;
                          $y_1760 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1760 + -1LL) = 1024LL;
                          *((value *) $y_1760 + 0LL) = $y_1759;
                          $y_1761 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1761 + -1LL) = 1024LL;
                          *((value *) $y_1761 + 0LL) = $y_1760;
                          $y_1762 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1762 + -1LL) = 1024LL;
                          *((value *) $y_1762 + 0LL) = $y_1761;
                          $y_1763 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1763 + -1LL) = 1024LL;
                          *((value *) $y_1763 + 0LL) = $y_1762;
                          $y_1764 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1764 + -1LL) = 1024LL;
                          *((value *) $y_1764 + 0LL) = $y_1763;
                          $y_1765 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1765 + -1LL) = 1024LL;
                          *((value *) $y_1765 + 0LL) = $y_1764;
                          $y_1766 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1766 + -1LL) = 1024LL;
                          *((value *) $y_1766 + 0LL) = $y_1765;
                          $y_1767 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1767 + -1LL) = 1024LL;
                          *((value *) $y_1767 + 0LL) = $y_1766;
                          $y_1768 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1768 + -1LL) = 1024LL;
                          *((value *) $y_1768 + 0LL) = $y_1767;
                          $y_1769 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1769 + -1LL) = 1024LL;
                          *((value *) $y_1769 + 0LL) = $y_1768;
                          $y_1770 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1770 + -1LL) = 1024LL;
                          *((value *) $y_1770 + 0LL) = $y_1769;
                          $y_1771 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1771 + -1LL) = 1024LL;
                          *((value *) $y_1771 + 0LL) = $y_1770;
                          $y_1772 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1772 + -1LL) = 1024LL;
                          *((value *) $y_1772 + 0LL) = $y_1771;
                          $y_1773 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1773 + -1LL) = 1024LL;
                          *((value *) $y_1773 + 0LL) = $y_1772;
                          $y_1774 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1774 + -1LL) = 1024LL;
                          *((value *) $y_1774 + 0LL) = $y_1773;
                          $y_1775 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1775 + -1LL) = 1024LL;
                          *((value *) $y_1775 + 0LL) = $y_1774;
                          $y_1776 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1776 + -1LL) = 1024LL;
                          *((value *) $y_1776 + 0LL) = $y_1775;
                          $y_1777 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1777 + -1LL) = 1024LL;
                          *((value *) $y_1777 + 0LL) = $y_1776;
                          $y_1778 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1778 + -1LL) = 1024LL;
                          *((value *) $y_1778 + 0LL) = $y_1777;
                          $y_1779 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1779 + -1LL) = 1024LL;
                          *((value *) $y_1779 + 0LL) = $y_1778;
                          $y_1780 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1780 + -1LL) = 1024LL;
                          *((value *) $y_1780 + 0LL) = $y_1779;
                          $y_1781 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1781 + -1LL) = 1024LL;
                          *((value *) $y_1781 + 0LL) = $y_1780;
                          $y_1782 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1782 + -1LL) = 1024LL;
                          *((value *) $y_1782 + 0LL) = $y_1781;
                          $y_1783 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1783 + -1LL) = 1024LL;
                          *((value *) $y_1783 + 0LL) = $y_1782;
                          $y_1784 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1784 + -1LL) = 1024LL;
                          *((value *) $y_1784 + 0LL) = $y_1783;
                          $y_1785 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1785 + -1LL) = 1024LL;
                          *((value *) $y_1785 + 0LL) = $y_1784;
                          $y_1786 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1786 + -1LL) = 1024LL;
                          *((value *) $y_1786 + 0LL) = $y_1785;
                          $y_1787 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1787 + -1LL) = 1024LL;
                          *((value *) $y_1787 + 0LL) = $y_1786;
                          $y_1788 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1788 + -1LL) = 1024LL;
                          *((value *) $y_1788 + 0LL) = $y_1787;
                          $y_1789 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1789 + -1LL) = 1024LL;
                          *((value *) $y_1789 + 0LL) = $y_1788;
                          $y_1790 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1790 + -1LL) = 1024LL;
                          *((value *) $y_1790 + 0LL) = $y_1789;
                          $y_1791 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1791 + -1LL) = 1024LL;
                          *((value *) $y_1791 + 0LL) = $y_1790;
                          $y_1792 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1792 + -1LL) = 1024LL;
                          *((value *) $y_1792 + 0LL) = $y_1791;
                          $y_1793 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1793 + -1LL) = 1024LL;
                          *((value *) $y_1793 + 0LL) = $y_1792;
                          $y_1794 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1794 + -1LL) = 1024LL;
                          *((value *) $y_1794 + 0LL) = $y_1793;
                          $y_1795 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1795 + -1LL) = 1024LL;
                          *((value *) $y_1795 + 0LL) = $y_1794;
                          $y_1796 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1796 + -1LL) = 1024LL;
                          *((value *) $y_1796 + 0LL) = $y_1795;
                          $y_1797 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1797 + -1LL) = 1024LL;
                          *((value *) $y_1797 + 0LL) = $y_1796;
                          $y_1798 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1798 + -1LL) = 1024LL;
                          *((value *) $y_1798 + 0LL) = $y_1797;
                          $y_1799 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1799 + -1LL) = 1024LL;
                          *((value *) $y_1799 + 0LL) = $y_1798;
                          $y_1800 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1800 + -1LL) = 1024LL;
                          *((value *) $y_1800 + 0LL) = $y_1799;
                          $y_1801 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1801 + -1LL) = 1024LL;
                          *((value *) $y_1801 + 0LL) = $y_1800;
                          $y_1802 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1802 + -1LL) = 1024LL;
                          *((value *) $y_1802 + 0LL) = $y_1801;
                          $y_1803 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1803 + -1LL) = 1024LL;
                          *((value *) $y_1803 + 0LL) = $y_1802;
                          $y_1804 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1804 + -1LL) = 1024LL;
                          *((value *) $y_1804 + 0LL) = $y_1803;
                          $y_1805 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1805 + -1LL) = 1024LL;
                          *((value *) $y_1805 + 0LL) = $y_1804;
                          $y_1806 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1806 + -1LL) = 1024LL;
                          *((value *) $y_1806 + 0LL) = $y_1805;
                          $y_1807 = 1LL;
                          $y_1808 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1808 + -1LL) = 1024LL;
                          *((value *) $y_1808 + 0LL) = $y_1807;
                          $y_1809 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1809 + -1LL) = 1024LL;
                          *((value *) $y_1809 + 0LL) = $y_1808;
                          $y_1810 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1810 + -1LL) = 1024LL;
                          *((value *) $y_1810 + 0LL) = $y_1809;
                          $y_1811 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1811 + -1LL) = 1024LL;
                          *((value *) $y_1811 + 0LL) = $y_1810;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_proj_1813 =
                            *((value *) $env_1603 + 0LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_nat_Z_uncurried_uncurried_known_113)
                            ($tinfo, $y_1811, $y_1806,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_proj_1813);
                          return $result;
                          break;
                        default:
                          $y_1814 = 1LL;
                          $y_1815 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1815 + -1LL) = 1024LL;
                          *((value *) $y_1815 + 0LL) = $y_1814;
                          $y_1816 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1816 + -1LL) = 1024LL;
                          *((value *) $y_1816 + 0LL) = $y_1815;
                          $y_1817 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1817 + -1LL) = 1024LL;
                          *((value *) $y_1817 + 0LL) = $y_1816;
                          $y_1818 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1818 + -1LL) = 1024LL;
                          *((value *) $y_1818 + 0LL) = $y_1817;
                          $y_1819 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1819 + -1LL) = 1024LL;
                          *((value *) $y_1819 + 0LL) = $y_1818;
                          $y_1820 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1820 + -1LL) = 1024LL;
                          *((value *) $y_1820 + 0LL) = $y_1819;
                          $y_1821 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1821 + -1LL) = 1024LL;
                          *((value *) $y_1821 + 0LL) = $y_1820;
                          $y_1822 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1822 + -1LL) = 1024LL;
                          *((value *) $y_1822 + 0LL) = $y_1821;
                          $y_1823 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1823 + -1LL) = 1024LL;
                          *((value *) $y_1823 + 0LL) = $y_1822;
                          $y_1824 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1824 + -1LL) = 1024LL;
                          *((value *) $y_1824 + 0LL) = $y_1823;
                          $y_1825 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1825 + -1LL) = 1024LL;
                          *((value *) $y_1825 + 0LL) = $y_1824;
                          $y_1826 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1826 + -1LL) = 1024LL;
                          *((value *) $y_1826 + 0LL) = $y_1825;
                          $y_1827 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1827 + -1LL) = 1024LL;
                          *((value *) $y_1827 + 0LL) = $y_1826;
                          $y_1828 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1828 + -1LL) = 1024LL;
                          *((value *) $y_1828 + 0LL) = $y_1827;
                          $y_1829 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1829 + -1LL) = 1024LL;
                          *((value *) $y_1829 + 0LL) = $y_1828;
                          $y_1830 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1830 + -1LL) = 1024LL;
                          *((value *) $y_1830 + 0LL) = $y_1829;
                          $y_1831 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1831 + -1LL) = 1024LL;
                          *((value *) $y_1831 + 0LL) = $y_1830;
                          $y_1832 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1832 + -1LL) = 1024LL;
                          *((value *) $y_1832 + 0LL) = $y_1831;
                          $y_1833 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1833 + -1LL) = 1024LL;
                          *((value *) $y_1833 + 0LL) = $y_1832;
                          $y_1834 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1834 + -1LL) = 1024LL;
                          *((value *) $y_1834 + 0LL) = $y_1833;
                          $y_1835 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1835 + -1LL) = 1024LL;
                          *((value *) $y_1835 + 0LL) = $y_1834;
                          $y_1836 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1836 + -1LL) = 1024LL;
                          *((value *) $y_1836 + 0LL) = $y_1835;
                          $y_1837 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1837 + -1LL) = 1024LL;
                          *((value *) $y_1837 + 0LL) = $y_1836;
                          $y_1838 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1838 + -1LL) = 1024LL;
                          *((value *) $y_1838 + 0LL) = $y_1837;
                          $y_1839 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1839 + -1LL) = 1024LL;
                          *((value *) $y_1839 + 0LL) = $y_1838;
                          $y_1840 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1840 + -1LL) = 1024LL;
                          *((value *) $y_1840 + 0LL) = $y_1839;
                          $y_1841 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1841 + -1LL) = 1024LL;
                          *((value *) $y_1841 + 0LL) = $y_1840;
                          $y_1842 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1842 + -1LL) = 1024LL;
                          *((value *) $y_1842 + 0LL) = $y_1841;
                          $y_1843 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1843 + -1LL) = 1024LL;
                          *((value *) $y_1843 + 0LL) = $y_1842;
                          $y_1844 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1844 + -1LL) = 1024LL;
                          *((value *) $y_1844 + 0LL) = $y_1843;
                          $y_1845 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1845 + -1LL) = 1024LL;
                          *((value *) $y_1845 + 0LL) = $y_1844;
                          $y_1846 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1846 + -1LL) = 1024LL;
                          *((value *) $y_1846 + 0LL) = $y_1845;
                          $y_1847 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1847 + -1LL) = 1024LL;
                          *((value *) $y_1847 + 0LL) = $y_1846;
                          $y_1848 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1848 + -1LL) = 1024LL;
                          *((value *) $y_1848 + 0LL) = $y_1847;
                          $y_1849 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1849 + -1LL) = 1024LL;
                          *((value *) $y_1849 + 0LL) = $y_1848;
                          $y_1850 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1850 + -1LL) = 1024LL;
                          *((value *) $y_1850 + 0LL) = $y_1849;
                          $y_1851 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1851 + -1LL) = 1024LL;
                          *((value *) $y_1851 + 0LL) = $y_1850;
                          $y_1852 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1852 + -1LL) = 1024LL;
                          *((value *) $y_1852 + 0LL) = $y_1851;
                          $y_1853 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1853 + -1LL) = 1024LL;
                          *((value *) $y_1853 + 0LL) = $y_1852;
                          $y_1854 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1854 + -1LL) = 1024LL;
                          *((value *) $y_1854 + 0LL) = $y_1853;
                          $y_1855 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1855 + -1LL) = 1024LL;
                          *((value *) $y_1855 + 0LL) = $y_1854;
                          $y_1856 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1856 + -1LL) = 1024LL;
                          *((value *) $y_1856 + 0LL) = $y_1855;
                          $y_1857 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1857 + -1LL) = 1024LL;
                          *((value *) $y_1857 + 0LL) = $y_1856;
                          $y_1858 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1858 + -1LL) = 1024LL;
                          *((value *) $y_1858 + 0LL) = $y_1857;
                          $y_1859 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1859 + -1LL) = 1024LL;
                          *((value *) $y_1859 + 0LL) = $y_1858;
                          $y_1860 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1860 + -1LL) = 1024LL;
                          *((value *) $y_1860 + 0LL) = $y_1859;
                          $y_1861 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1861 + -1LL) = 1024LL;
                          *((value *) $y_1861 + 0LL) = $y_1860;
                          $y_1862 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1862 + -1LL) = 1024LL;
                          *((value *) $y_1862 + 0LL) = $y_1861;
                          $y_1863 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1863 + -1LL) = 1024LL;
                          *((value *) $y_1863 + 0LL) = $y_1862;
                          $y_1864 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1864 + -1LL) = 1024LL;
                          *((value *) $y_1864 + 0LL) = $y_1863;
                          $y_1865 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1865 + -1LL) = 1024LL;
                          *((value *) $y_1865 + 0LL) = $y_1864;
                          $y_1866 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1866 + -1LL) = 1024LL;
                          *((value *) $y_1866 + 0LL) = $y_1865;
                          $y_1867 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1867 + -1LL) = 1024LL;
                          *((value *) $y_1867 + 0LL) = $y_1866;
                          $y_1868 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1868 + -1LL) = 1024LL;
                          *((value *) $y_1868 + 0LL) = $y_1867;
                          $y_1869 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1869 + -1LL) = 1024LL;
                          *((value *) $y_1869 + 0LL) = $y_1868;
                          $y_1870 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1870 + -1LL) = 1024LL;
                          *((value *) $y_1870 + 0LL) = $y_1869;
                          $y_1871 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1871 + -1LL) = 1024LL;
                          *((value *) $y_1871 + 0LL) = $y_1870;
                          $y_1872 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1872 + -1LL) = 1024LL;
                          *((value *) $y_1872 + 0LL) = $y_1871;
                          $y_1873 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1873 + -1LL) = 1024LL;
                          *((value *) $y_1873 + 0LL) = $y_1872;
                          $y_1874 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1874 + -1LL) = 1024LL;
                          *((value *) $y_1874 + 0LL) = $y_1873;
                          $y_1875 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1875 + -1LL) = 1024LL;
                          *((value *) $y_1875 + 0LL) = $y_1874;
                          $y_1876 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1876 + -1LL) = 1024LL;
                          *((value *) $y_1876 + 0LL) = $y_1875;
                          $y_1877 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1877 + -1LL) = 1024LL;
                          *((value *) $y_1877 + 0LL) = $y_1876;
                          $y_1878 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1878 + -1LL) = 1024LL;
                          *((value *) $y_1878 + 0LL) = $y_1877;
                          $y_1879 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1879 + -1LL) = 1024LL;
                          *((value *) $y_1879 + 0LL) = $y_1878;
                          $y_1880 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1880 + -1LL) = 1024LL;
                          *((value *) $y_1880 + 0LL) = $y_1879;
                          $y_1881 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1881 + -1LL) = 1024LL;
                          *((value *) $y_1881 + 0LL) = $y_1880;
                          $y_1882 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1882 + -1LL) = 1024LL;
                          *((value *) $y_1882 + 0LL) = $y_1881;
                          $y_1883 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1883 + -1LL) = 1024LL;
                          *((value *) $y_1883 + 0LL) = $y_1882;
                          $y_1884 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1884 + -1LL) = 1024LL;
                          *((value *) $y_1884 + 0LL) = $y_1883;
                          $y_1885 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1885 + -1LL) = 1024LL;
                          *((value *) $y_1885 + 0LL) = $y_1884;
                          $y_1886 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1886 + -1LL) = 1024LL;
                          *((value *) $y_1886 + 0LL) = $y_1885;
                          $y_1887 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1887 + -1LL) = 1024LL;
                          *((value *) $y_1887 + 0LL) = $y_1886;
                          $y_1888 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1888 + -1LL) = 1024LL;
                          *((value *) $y_1888 + 0LL) = $y_1887;
                          $y_1889 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1889 + -1LL) = 1024LL;
                          *((value *) $y_1889 + 0LL) = $y_1888;
                          $y_1890 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1890 + -1LL) = 1024LL;
                          *((value *) $y_1890 + 0LL) = $y_1889;
                          $y_1891 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1891 + -1LL) = 1024LL;
                          *((value *) $y_1891 + 0LL) = $y_1890;
                          $y_1892 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1892 + -1LL) = 1024LL;
                          *((value *) $y_1892 + 0LL) = $y_1891;
                          $y_1893 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1893 + -1LL) = 1024LL;
                          *((value *) $y_1893 + 0LL) = $y_1892;
                          $y_1894 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1894 + -1LL) = 1024LL;
                          *((value *) $y_1894 + 0LL) = $y_1893;
                          $y_1895 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1895 + -1LL) = 1024LL;
                          *((value *) $y_1895 + 0LL) = $y_1894;
                          $y_1896 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1896 + -1LL) = 1024LL;
                          *((value *) $y_1896 + 0LL) = $y_1895;
                          $y_1897 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1897 + -1LL) = 1024LL;
                          *((value *) $y_1897 + 0LL) = $y_1896;
                          $y_1898 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1898 + -1LL) = 1024LL;
                          *((value *) $y_1898 + 0LL) = $y_1897;
                          $y_1899 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1899 + -1LL) = 1024LL;
                          *((value *) $y_1899 + 0LL) = $y_1898;
                          $y_1900 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1900 + -1LL) = 1024LL;
                          *((value *) $y_1900 + 0LL) = $y_1899;
                          $y_1901 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1901 + -1LL) = 1024LL;
                          *((value *) $y_1901 + 0LL) = $y_1900;
                          $y_1902 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1902 + -1LL) = 1024LL;
                          *((value *) $y_1902 + 0LL) = $y_1901;
                          $y_1903 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1903 + -1LL) = 1024LL;
                          *((value *) $y_1903 + 0LL) = $y_1902;
                          $y_1904 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1904 + -1LL) = 1024LL;
                          *((value *) $y_1904 + 0LL) = $y_1903;
                          $y_1905 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1905 + -1LL) = 1024LL;
                          *((value *) $y_1905 + 0LL) = $y_1904;
                          $y_1906 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1906 + -1LL) = 1024LL;
                          *((value *) $y_1906 + 0LL) = $y_1905;
                          $y_1907 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1907 + -1LL) = 1024LL;
                          *((value *) $y_1907 + 0LL) = $y_1906;
                          $y_1908 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1908 + -1LL) = 1024LL;
                          *((value *) $y_1908 + 0LL) = $y_1907;
                          $y_1909 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1909 + -1LL) = 1024LL;
                          *((value *) $y_1909 + 0LL) = $y_1908;
                          $y_1910 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1910 + -1LL) = 1024LL;
                          *((value *) $y_1910 + 0LL) = $y_1909;
                          $y_1911 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1911 + -1LL) = 1024LL;
                          *((value *) $y_1911 + 0LL) = $y_1910;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapperbogus_env_1913 =
                            1LL;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_1914 =
                            (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_1914
                             + -1LL) =
                            2048LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_1914
                             + 0LL) =
                            CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_120;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_1914
                             + 1LL) =
                            $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapperbogus_env_1913;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_Z_uncurried_known_118)
                            ($tinfo, $y_1911,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_1914);
                          return $result;
                          break;

                      }
                    }
                    break;
                  default:
                    $y_1915 = 1LL;
                    $y_1916 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1916 + -1LL) = 1025LL;
                    *((value *) $y_1916 + 0LL) = $y_1915;
                    $y_1917 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1917 + -1LL) = 1024LL;
                    *((value *) $y_1917 + 0LL) = $y_1916;
                    $y_1918 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1918 + -1LL) = 1025LL;
                    *((value *) $y_1918 + 0LL) = $y_1917;
                    $y_1919 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1919 + -1LL) = 1025LL;
                    *((value *) $y_1919 + 0LL) = $y_1918;
                    $y_1920 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1920 + -1LL) = 1024LL;
                    *((value *) $y_1920 + 0LL) = $y_1919;
                    $y_proj_1922 = *((value *) $env_1603 + 1LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $val_1604;
                    *(root + 0LL) = $env_1603;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_1923 =
                      ((value (*)(struct thread_info *, value, value, value))
                        CoqdZArithdBinIntDefdZdltb_uncurried_known_123)
                      ($tinfo, $val_1604, $y_1920, $y_proj_1922);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(30LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_1923;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 30LL;
                      garbage_collect($tinfo);
                      $y_1923 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $val_1604 = *(root + 1LL);
                    $env_1603 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_1924 = 1LL;
                    $y_1925 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1925 + -1LL) = 1024LL;
                    *((value *) $y_1925 + 0LL) = $y_1924;
                    $y_1926 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1926 + -1LL) = 1024LL;
                    *((value *) $y_1926 + 0LL) = $y_1925;
                    $y_1927 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1927 + -1LL) = 1024LL;
                    *((value *) $y_1927 + 0LL) = $y_1926;
                    $y_1928 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1928 + -1LL) = 1024LL;
                    *((value *) $y_1928 + 0LL) = $y_1927;
                    $y_1929 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1929 + -1LL) = 1024LL;
                    *((value *) $y_1929 + 0LL) = $y_1928;
                    $y_1930 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1930 + -1LL) = 1024LL;
                    *((value *) $y_1930 + 0LL) = $y_1929;
                    $y_1931 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1931 + -1LL) = 1024LL;
                    *((value *) $y_1931 + 0LL) = $y_1930;
                    $y_1932 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1932 + -1LL) = 1024LL;
                    *((value *) $y_1932 + 0LL) = $y_1931;
                    $y_1933 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1933 + -1LL) = 1024LL;
                    *((value *) $y_1933 + 0LL) = $y_1932;
                    $y_1934 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1934 + -1LL) = 1024LL;
                    *((value *) $y_1934 + 0LL) = $y_1933;
                    $y_1935 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1935 + -1LL) = 1024LL;
                    *((value *) $y_1935 + 0LL) = $y_1934;
                    $y_1936 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1936 + -1LL) = 1024LL;
                    *((value *) $y_1936 + 0LL) = $y_1935;
                    $y_1937 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1937 + -1LL) = 1024LL;
                    *((value *) $y_1937 + 0LL) = $y_1936;
                    $y_1938 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1938 + -1LL) = 1024LL;
                    *((value *) $y_1938 + 0LL) = $y_1937;
                    $y_1939 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_1939 + -1LL) = 1024LL;
                    *((value *) $y_1939 + 0LL) = $y_1938;
                    $y_proj_1941 = *((value *) $env_1603 + 1LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 2LL) = $y_1923;
                    *(root + 1LL) = $val_1604;
                    *(root + 0LL) = $env_1603;
                    frame.next = root + 3LL;
                    (*$tinfo).fp = &frame;
                    $y_1942 =
                      ((value (*)(struct thread_info *, value, value, value))
                        CoqdZArithdBinIntDefdZdltb_uncurried_known_123)
                      ($tinfo, $y_1939, $val_1604, $y_proj_1941);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $y_1923 = *(root + 2LL);
                    $val_1604 = *(root + 1LL);
                    $env_1603 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $val_1604;
                    *(root + 0LL) = $env_1603;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_1944 =
                      ((value (*)(struct thread_info *, value, value))
                        f_case_known_149)
                      ($tinfo, $y_1923, $y_1942);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(197LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_1944;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 197LL;
                      garbage_collect($tinfo);
                      $y_1944 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $val_1604 = *(root + 1LL);
                    $env_1603 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    if (($y_1944 & 1) == 0) {
                      switch (*((value *) $y_1944 + -1LL) & 255LL) {

                      }
                    } else {
                      switch ($y_1944 >> 1LL) {
                        case 0:
                          $CertiDDdOSdPit_infodLinuxdNatdTick_rate_proj_1946 =
                            *((value *) $env_1603 + 2LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $val_1604;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_1947 =
                            ((value (*)(struct thread_info *, value))
                              f_case_known_150)
                            ($tinfo,
                             $CertiDDdOSdPit_infodLinuxdNatdTick_rate_proj_1946);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(4LL <= $limit - $alloc)) {
                            *(root + 2LL) = $y_1947;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 4LL;
                            garbage_collect($tinfo);
                            $y_1947 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $val_1604 = *(root + 1LL);
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_proj_1949 = *((value *) $env_1603 + 1LL);
                          $env_1950 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 4LL;
                          *((value *) $env_1950 + -1LL) = 3072LL;
                          *((value *) $env_1950 + 0LL) = $y_proj_1949;
                          *((value *) $env_1950 + 1LL) = $val_1604;
                          *((value *) $env_1950 + 2LL) = $y_1947;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_1951 =
                            ((value (*)(struct thread_info *, value, value))
                              f_case_153)
                            ($tinfo, $env_1950, $y_1947);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $count_1952 =
                            ((value (*)(struct thread_info *, value))
                              f_case_known_152)
                            ($tinfo, $y_1951);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $count_1952;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_1954 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdto_nat_known_141)
                            ($tinfo, $count_1952);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(510LL <= $limit - $alloc)) {
                            *(root + 2LL) = $y_1954;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 510LL;
                            garbage_collect($tinfo);
                            $y_1954 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $count_1952 = *(root + 1LL);
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_1955 = 1LL;
                          $y_1956 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1956 + -1LL) = 1024LL;
                          *((value *) $y_1956 + 0LL) = $y_1955;
                          $y_1957 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1957 + -1LL) = 1024LL;
                          *((value *) $y_1957 + 0LL) = $y_1956;
                          $y_1958 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1958 + -1LL) = 1024LL;
                          *((value *) $y_1958 + 0LL) = $y_1957;
                          $y_1959 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1959 + -1LL) = 1024LL;
                          *((value *) $y_1959 + 0LL) = $y_1958;
                          $y_1960 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1960 + -1LL) = 1024LL;
                          *((value *) $y_1960 + 0LL) = $y_1959;
                          $y_1961 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1961 + -1LL) = 1024LL;
                          *((value *) $y_1961 + 0LL) = $y_1960;
                          $y_1962 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1962 + -1LL) = 1024LL;
                          *((value *) $y_1962 + 0LL) = $y_1961;
                          $y_1963 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1963 + -1LL) = 1024LL;
                          *((value *) $y_1963 + 0LL) = $y_1962;
                          $y_1964 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1964 + -1LL) = 1024LL;
                          *((value *) $y_1964 + 0LL) = $y_1963;
                          $y_1965 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1965 + -1LL) = 1024LL;
                          *((value *) $y_1965 + 0LL) = $y_1964;
                          $y_1966 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1966 + -1LL) = 1024LL;
                          *((value *) $y_1966 + 0LL) = $y_1965;
                          $y_1967 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1967 + -1LL) = 1024LL;
                          *((value *) $y_1967 + 0LL) = $y_1966;
                          $y_1968 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1968 + -1LL) = 1024LL;
                          *((value *) $y_1968 + 0LL) = $y_1967;
                          $y_1969 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1969 + -1LL) = 1024LL;
                          *((value *) $y_1969 + 0LL) = $y_1968;
                          $y_1970 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1970 + -1LL) = 1024LL;
                          *((value *) $y_1970 + 0LL) = $y_1969;
                          $y_1971 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1971 + -1LL) = 1024LL;
                          *((value *) $y_1971 + 0LL) = $y_1970;
                          $y_1972 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1972 + -1LL) = 1024LL;
                          *((value *) $y_1972 + 0LL) = $y_1971;
                          $y_1973 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1973 + -1LL) = 1024LL;
                          *((value *) $y_1973 + 0LL) = $y_1972;
                          $y_1974 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1974 + -1LL) = 1024LL;
                          *((value *) $y_1974 + 0LL) = $y_1973;
                          $y_1975 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1975 + -1LL) = 1024LL;
                          *((value *) $y_1975 + 0LL) = $y_1974;
                          $y_1976 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1976 + -1LL) = 1024LL;
                          *((value *) $y_1976 + 0LL) = $y_1975;
                          $y_1977 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1977 + -1LL) = 1024LL;
                          *((value *) $y_1977 + 0LL) = $y_1976;
                          $y_1978 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1978 + -1LL) = 1024LL;
                          *((value *) $y_1978 + 0LL) = $y_1977;
                          $y_1979 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1979 + -1LL) = 1024LL;
                          *((value *) $y_1979 + 0LL) = $y_1978;
                          $y_1980 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1980 + -1LL) = 1024LL;
                          *((value *) $y_1980 + 0LL) = $y_1979;
                          $y_1981 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1981 + -1LL) = 1024LL;
                          *((value *) $y_1981 + 0LL) = $y_1980;
                          $y_1982 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1982 + -1LL) = 1024LL;
                          *((value *) $y_1982 + 0LL) = $y_1981;
                          $y_1983 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1983 + -1LL) = 1024LL;
                          *((value *) $y_1983 + 0LL) = $y_1982;
                          $y_1984 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1984 + -1LL) = 1024LL;
                          *((value *) $y_1984 + 0LL) = $y_1983;
                          $y_1985 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1985 + -1LL) = 1024LL;
                          *((value *) $y_1985 + 0LL) = $y_1984;
                          $y_1986 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1986 + -1LL) = 1024LL;
                          *((value *) $y_1986 + 0LL) = $y_1985;
                          $y_1987 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1987 + -1LL) = 1024LL;
                          *((value *) $y_1987 + 0LL) = $y_1986;
                          $y_1988 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1988 + -1LL) = 1024LL;
                          *((value *) $y_1988 + 0LL) = $y_1987;
                          $y_1989 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1989 + -1LL) = 1024LL;
                          *((value *) $y_1989 + 0LL) = $y_1988;
                          $y_1990 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1990 + -1LL) = 1024LL;
                          *((value *) $y_1990 + 0LL) = $y_1989;
                          $y_1991 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1991 + -1LL) = 1024LL;
                          *((value *) $y_1991 + 0LL) = $y_1990;
                          $y_1992 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1992 + -1LL) = 1024LL;
                          *((value *) $y_1992 + 0LL) = $y_1991;
                          $y_1993 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1993 + -1LL) = 1024LL;
                          *((value *) $y_1993 + 0LL) = $y_1992;
                          $y_1994 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1994 + -1LL) = 1024LL;
                          *((value *) $y_1994 + 0LL) = $y_1993;
                          $y_1995 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1995 + -1LL) = 1024LL;
                          *((value *) $y_1995 + 0LL) = $y_1994;
                          $y_1996 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1996 + -1LL) = 1024LL;
                          *((value *) $y_1996 + 0LL) = $y_1995;
                          $y_1997 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1997 + -1LL) = 1024LL;
                          *((value *) $y_1997 + 0LL) = $y_1996;
                          $y_1998 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1998 + -1LL) = 1024LL;
                          *((value *) $y_1998 + 0LL) = $y_1997;
                          $y_1999 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_1999 + -1LL) = 1024LL;
                          *((value *) $y_1999 + 0LL) = $y_1998;
                          $y_2000 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2000 + -1LL) = 1024LL;
                          *((value *) $y_2000 + 0LL) = $y_1999;
                          $y_2001 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2001 + -1LL) = 1024LL;
                          *((value *) $y_2001 + 0LL) = $y_2000;
                          $y_2002 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2002 + -1LL) = 1024LL;
                          *((value *) $y_2002 + 0LL) = $y_2001;
                          $y_2003 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2003 + -1LL) = 1024LL;
                          *((value *) $y_2003 + 0LL) = $y_2002;
                          $y_2004 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2004 + -1LL) = 1024LL;
                          *((value *) $y_2004 + 0LL) = $y_2003;
                          $y_2005 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2005 + -1LL) = 1024LL;
                          *((value *) $y_2005 + 0LL) = $y_2004;
                          $y_2006 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2006 + -1LL) = 1024LL;
                          *((value *) $y_2006 + 0LL) = $y_2005;
                          $y_2007 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2007 + -1LL) = 1024LL;
                          *((value *) $y_2007 + 0LL) = $y_2006;
                          $y_2008 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2008 + -1LL) = 1024LL;
                          *((value *) $y_2008 + 0LL) = $y_2007;
                          $y_2009 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2009 + -1LL) = 1024LL;
                          *((value *) $y_2009 + 0LL) = $y_2008;
                          $y_2010 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2010 + -1LL) = 1024LL;
                          *((value *) $y_2010 + 0LL) = $y_2009;
                          $y_2011 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2011 + -1LL) = 1024LL;
                          *((value *) $y_2011 + 0LL) = $y_2010;
                          $y_2012 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2012 + -1LL) = 1024LL;
                          *((value *) $y_2012 + 0LL) = $y_2011;
                          $y_2013 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2013 + -1LL) = 1024LL;
                          *((value *) $y_2013 + 0LL) = $y_2012;
                          $y_2014 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2014 + -1LL) = 1024LL;
                          *((value *) $y_2014 + 0LL) = $y_2013;
                          $y_2015 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2015 + -1LL) = 1024LL;
                          *((value *) $y_2015 + 0LL) = $y_2014;
                          $y_2016 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2016 + -1LL) = 1024LL;
                          *((value *) $y_2016 + 0LL) = $y_2015;
                          $y_2017 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2017 + -1LL) = 1024LL;
                          *((value *) $y_2017 + 0LL) = $y_2016;
                          $y_2018 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2018 + -1LL) = 1024LL;
                          *((value *) $y_2018 + 0LL) = $y_2017;
                          $y_2019 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2019 + -1LL) = 1024LL;
                          *((value *) $y_2019 + 0LL) = $y_2018;
                          $y_2020 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2020 + -1LL) = 1024LL;
                          *((value *) $y_2020 + 0LL) = $y_2019;
                          $y_2021 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2021 + -1LL) = 1024LL;
                          *((value *) $y_2021 + 0LL) = $y_2020;
                          $y_2022 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2022 + -1LL) = 1024LL;
                          *((value *) $y_2022 + 0LL) = $y_2021;
                          $y_2023 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2023 + -1LL) = 1024LL;
                          *((value *) $y_2023 + 0LL) = $y_2022;
                          $y_2024 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2024 + -1LL) = 1024LL;
                          *((value *) $y_2024 + 0LL) = $y_2023;
                          $y_2025 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2025 + -1LL) = 1024LL;
                          *((value *) $y_2025 + 0LL) = $y_2024;
                          $y_2026 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2026 + -1LL) = 1024LL;
                          *((value *) $y_2026 + 0LL) = $y_2025;
                          $y_2027 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2027 + -1LL) = 1024LL;
                          *((value *) $y_2027 + 0LL) = $y_2026;
                          $y_2028 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2028 + -1LL) = 1024LL;
                          *((value *) $y_2028 + 0LL) = $y_2027;
                          $y_2029 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2029 + -1LL) = 1024LL;
                          *((value *) $y_2029 + 0LL) = $y_2028;
                          $y_2030 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2030 + -1LL) = 1024LL;
                          *((value *) $y_2030 + 0LL) = $y_2029;
                          $y_2031 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2031 + -1LL) = 1024LL;
                          *((value *) $y_2031 + 0LL) = $y_2030;
                          $y_2032 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2032 + -1LL) = 1024LL;
                          *((value *) $y_2032 + 0LL) = $y_2031;
                          $y_2033 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2033 + -1LL) = 1024LL;
                          *((value *) $y_2033 + 0LL) = $y_2032;
                          $y_2034 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2034 + -1LL) = 1024LL;
                          *((value *) $y_2034 + 0LL) = $y_2033;
                          $y_2035 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2035 + -1LL) = 1024LL;
                          *((value *) $y_2035 + 0LL) = $y_2034;
                          $y_2036 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2036 + -1LL) = 1024LL;
                          *((value *) $y_2036 + 0LL) = $y_2035;
                          $y_2037 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2037 + -1LL) = 1024LL;
                          *((value *) $y_2037 + 0LL) = $y_2036;
                          $y_2038 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2038 + -1LL) = 1024LL;
                          *((value *) $y_2038 + 0LL) = $y_2037;
                          $y_2039 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2039 + -1LL) = 1024LL;
                          *((value *) $y_2039 + 0LL) = $y_2038;
                          $y_2040 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2040 + -1LL) = 1024LL;
                          *((value *) $y_2040 + 0LL) = $y_2039;
                          $y_2041 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2041 + -1LL) = 1024LL;
                          *((value *) $y_2041 + 0LL) = $y_2040;
                          $y_2042 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2042 + -1LL) = 1024LL;
                          *((value *) $y_2042 + 0LL) = $y_2041;
                          $y_2043 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2043 + -1LL) = 1024LL;
                          *((value *) $y_2043 + 0LL) = $y_2042;
                          $y_2044 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2044 + -1LL) = 1024LL;
                          *((value *) $y_2044 + 0LL) = $y_2043;
                          $y_2045 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2045 + -1LL) = 1024LL;
                          *((value *) $y_2045 + 0LL) = $y_2044;
                          $y_2046 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2046 + -1LL) = 1024LL;
                          *((value *) $y_2046 + 0LL) = $y_2045;
                          $y_2047 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2047 + -1LL) = 1024LL;
                          *((value *) $y_2047 + 0LL) = $y_2046;
                          $y_2048 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2048 + -1LL) = 1024LL;
                          *((value *) $y_2048 + 0LL) = $y_2047;
                          $y_2049 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2049 + -1LL) = 1024LL;
                          *((value *) $y_2049 + 0LL) = $y_2048;
                          $y_2050 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2050 + -1LL) = 1024LL;
                          *((value *) $y_2050 + 0LL) = $y_2049;
                          $y_2051 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2051 + -1LL) = 1024LL;
                          *((value *) $y_2051 + 0LL) = $y_2050;
                          $y_2052 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2052 + -1LL) = 1024LL;
                          *((value *) $y_2052 + 0LL) = $y_2051;
                          $y_2053 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2053 + -1LL) = 1024LL;
                          *((value *) $y_2053 + 0LL) = $y_2052;
                          $y_2054 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2054 + -1LL) = 1024LL;
                          *((value *) $y_2054 + 0LL) = $y_2053;
                          $y_2055 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2055 + -1LL) = 1024LL;
                          *((value *) $y_2055 + 0LL) = $y_2054;
                          $y_2056 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2056 + -1LL) = 1024LL;
                          *((value *) $y_2056 + 0LL) = $y_2055;
                          $y_2057 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2057 + -1LL) = 1024LL;
                          *((value *) $y_2057 + 0LL) = $y_2056;
                          $y_2058 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2058 + -1LL) = 1024LL;
                          *((value *) $y_2058 + 0LL) = $y_2057;
                          $y_2059 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2059 + -1LL) = 1024LL;
                          *((value *) $y_2059 + 0LL) = $y_2058;
                          $y_2060 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2060 + -1LL) = 1024LL;
                          *((value *) $y_2060 + 0LL) = $y_2059;
                          $y_2061 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2061 + -1LL) = 1024LL;
                          *((value *) $y_2061 + 0LL) = $y_2060;
                          $y_2062 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2062 + -1LL) = 1024LL;
                          *((value *) $y_2062 + 0LL) = $y_2061;
                          $y_2063 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2063 + -1LL) = 1024LL;
                          *((value *) $y_2063 + 0LL) = $y_2062;
                          $y_2064 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2064 + -1LL) = 1024LL;
                          *((value *) $y_2064 + 0LL) = $y_2063;
                          $y_2065 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2065 + -1LL) = 1024LL;
                          *((value *) $y_2065 + 0LL) = $y_2064;
                          $y_2066 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2066 + -1LL) = 1024LL;
                          *((value *) $y_2066 + 0LL) = $y_2065;
                          $y_2067 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2067 + -1LL) = 1024LL;
                          *((value *) $y_2067 + 0LL) = $y_2066;
                          $y_2068 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2068 + -1LL) = 1024LL;
                          *((value *) $y_2068 + 0LL) = $y_2067;
                          $y_2069 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2069 + -1LL) = 1024LL;
                          *((value *) $y_2069 + 0LL) = $y_2068;
                          $y_2070 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2070 + -1LL) = 1024LL;
                          *((value *) $y_2070 + 0LL) = $y_2069;
                          $y_2071 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2071 + -1LL) = 1024LL;
                          *((value *) $y_2071 + 0LL) = $y_2070;
                          $y_2072 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2072 + -1LL) = 1024LL;
                          *((value *) $y_2072 + 0LL) = $y_2071;
                          $y_2073 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2073 + -1LL) = 1024LL;
                          *((value *) $y_2073 + 0LL) = $y_2072;
                          $y_2074 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2074 + -1LL) = 1024LL;
                          *((value *) $y_2074 + 0LL) = $y_2073;
                          $y_2075 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2075 + -1LL) = 1024LL;
                          *((value *) $y_2075 + 0LL) = $y_2074;
                          $y_2076 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2076 + -1LL) = 1024LL;
                          *((value *) $y_2076 + 0LL) = $y_2075;
                          $y_2077 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2077 + -1LL) = 1024LL;
                          *((value *) $y_2077 + 0LL) = $y_2076;
                          $y_2078 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2078 + -1LL) = 1024LL;
                          *((value *) $y_2078 + 0LL) = $y_2077;
                          $y_2079 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2079 + -1LL) = 1024LL;
                          *((value *) $y_2079 + 0LL) = $y_2078;
                          $y_2080 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2080 + -1LL) = 1024LL;
                          *((value *) $y_2080 + 0LL) = $y_2079;
                          $y_2081 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2081 + -1LL) = 1024LL;
                          *((value *) $y_2081 + 0LL) = $y_2080;
                          $y_2082 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2082 + -1LL) = 1024LL;
                          *((value *) $y_2082 + 0LL) = $y_2081;
                          $y_2083 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2083 + -1LL) = 1024LL;
                          *((value *) $y_2083 + 0LL) = $y_2082;
                          $y_2084 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2084 + -1LL) = 1024LL;
                          *((value *) $y_2084 + 0LL) = $y_2083;
                          $y_2085 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2085 + -1LL) = 1024LL;
                          *((value *) $y_2085 + 0LL) = $y_2084;
                          $y_2086 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2086 + -1LL) = 1024LL;
                          *((value *) $y_2086 + 0LL) = $y_2085;
                          $y_2087 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2087 + -1LL) = 1024LL;
                          *((value *) $y_2087 + 0LL) = $y_2086;
                          $y_2088 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2088 + -1LL) = 1024LL;
                          *((value *) $y_2088 + 0LL) = $y_2087;
                          $y_2089 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2089 + -1LL) = 1024LL;
                          *((value *) $y_2089 + 0LL) = $y_2088;
                          $y_2090 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2090 + -1LL) = 1024LL;
                          *((value *) $y_2090 + 0LL) = $y_2089;
                          $y_2091 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2091 + -1LL) = 1024LL;
                          *((value *) $y_2091 + 0LL) = $y_2090;
                          $y_2092 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2092 + -1LL) = 1024LL;
                          *((value *) $y_2092 + 0LL) = $y_2091;
                          $y_2093 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2093 + -1LL) = 1024LL;
                          *((value *) $y_2093 + 0LL) = $y_2092;
                          $y_2094 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2094 + -1LL) = 1024LL;
                          *((value *) $y_2094 + 0LL) = $y_2093;
                          $y_2095 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2095 + -1LL) = 1024LL;
                          *((value *) $y_2095 + 0LL) = $y_2094;
                          $y_2096 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2096 + -1LL) = 1024LL;
                          *((value *) $y_2096 + 0LL) = $y_2095;
                          $y_2097 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2097 + -1LL) = 1024LL;
                          *((value *) $y_2097 + 0LL) = $y_2096;
                          $y_2098 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2098 + -1LL) = 1024LL;
                          *((value *) $y_2098 + 0LL) = $y_2097;
                          $y_2099 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2099 + -1LL) = 1024LL;
                          *((value *) $y_2099 + 0LL) = $y_2098;
                          $y_2100 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2100 + -1LL) = 1024LL;
                          *((value *) $y_2100 + 0LL) = $y_2099;
                          $y_2101 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2101 + -1LL) = 1024LL;
                          *((value *) $y_2101 + 0LL) = $y_2100;
                          $y_2102 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2102 + -1LL) = 1024LL;
                          *((value *) $y_2102 + 0LL) = $y_2101;
                          $y_2103 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2103 + -1LL) = 1024LL;
                          *((value *) $y_2103 + 0LL) = $y_2102;
                          $y_2104 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2104 + -1LL) = 1024LL;
                          *((value *) $y_2104 + 0LL) = $y_2103;
                          $y_2105 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2105 + -1LL) = 1024LL;
                          *((value *) $y_2105 + 0LL) = $y_2104;
                          $y_2106 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2106 + -1LL) = 1024LL;
                          *((value *) $y_2106 + 0LL) = $y_2105;
                          $y_2107 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2107 + -1LL) = 1024LL;
                          *((value *) $y_2107 + 0LL) = $y_2106;
                          $y_2108 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2108 + -1LL) = 1024LL;
                          *((value *) $y_2108 + 0LL) = $y_2107;
                          $y_2109 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2109 + -1LL) = 1024LL;
                          *((value *) $y_2109 + 0LL) = $y_2108;
                          $y_2110 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2110 + -1LL) = 1024LL;
                          *((value *) $y_2110 + 0LL) = $y_2109;
                          $y_2111 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2111 + -1LL) = 1024LL;
                          *((value *) $y_2111 + 0LL) = $y_2110;
                          $y_2112 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2112 + -1LL) = 1024LL;
                          *((value *) $y_2112 + 0LL) = $y_2111;
                          $y_2113 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2113 + -1LL) = 1024LL;
                          *((value *) $y_2113 + 0LL) = $y_2112;
                          $y_2114 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2114 + -1LL) = 1024LL;
                          *((value *) $y_2114 + 0LL) = $y_2113;
                          $y_2115 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2115 + -1LL) = 1024LL;
                          *((value *) $y_2115 + 0LL) = $y_2114;
                          $y_2116 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2116 + -1LL) = 1024LL;
                          *((value *) $y_2116 + 0LL) = $y_2115;
                          $y_2117 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2117 + -1LL) = 1024LL;
                          *((value *) $y_2117 + 0LL) = $y_2116;
                          $y_2118 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2118 + -1LL) = 1024LL;
                          *((value *) $y_2118 + 0LL) = $y_2117;
                          $y_2119 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2119 + -1LL) = 1024LL;
                          *((value *) $y_2119 + 0LL) = $y_2118;
                          $y_2120 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2120 + -1LL) = 1024LL;
                          *((value *) $y_2120 + 0LL) = $y_2119;
                          $y_2121 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2121 + -1LL) = 1024LL;
                          *((value *) $y_2121 + 0LL) = $y_2120;
                          $y_2122 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2122 + -1LL) = 1024LL;
                          *((value *) $y_2122 + 0LL) = $y_2121;
                          $y_2123 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2123 + -1LL) = 1024LL;
                          *((value *) $y_2123 + 0LL) = $y_2122;
                          $y_2124 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2124 + -1LL) = 1024LL;
                          *((value *) $y_2124 + 0LL) = $y_2123;
                          $y_2125 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2125 + -1LL) = 1024LL;
                          *((value *) $y_2125 + 0LL) = $y_2124;
                          $y_2126 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2126 + -1LL) = 1024LL;
                          *((value *) $y_2126 + 0LL) = $y_2125;
                          $y_2127 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2127 + -1LL) = 1024LL;
                          *((value *) $y_2127 + 0LL) = $y_2126;
                          $y_2128 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2128 + -1LL) = 1024LL;
                          *((value *) $y_2128 + 0LL) = $y_2127;
                          $y_2129 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2129 + -1LL) = 1024LL;
                          *((value *) $y_2129 + 0LL) = $y_2128;
                          $y_2130 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2130 + -1LL) = 1024LL;
                          *((value *) $y_2130 + 0LL) = $y_2129;
                          $y_2131 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2131 + -1LL) = 1024LL;
                          *((value *) $y_2131 + 0LL) = $y_2130;
                          $y_2132 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2132 + -1LL) = 1024LL;
                          *((value *) $y_2132 + 0LL) = $y_2131;
                          $y_2133 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2133 + -1LL) = 1024LL;
                          *((value *) $y_2133 + 0LL) = $y_2132;
                          $y_2134 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2134 + -1LL) = 1024LL;
                          *((value *) $y_2134 + 0LL) = $y_2133;
                          $y_2135 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2135 + -1LL) = 1024LL;
                          *((value *) $y_2135 + 0LL) = $y_2134;
                          $y_2136 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2136 + -1LL) = 1024LL;
                          *((value *) $y_2136 + 0LL) = $y_2135;
                          $y_2137 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2137 + -1LL) = 1024LL;
                          *((value *) $y_2137 + 0LL) = $y_2136;
                          $y_2138 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2138 + -1LL) = 1024LL;
                          *((value *) $y_2138 + 0LL) = $y_2137;
                          $y_2139 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2139 + -1LL) = 1024LL;
                          *((value *) $y_2139 + 0LL) = $y_2138;
                          $y_2140 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2140 + -1LL) = 1024LL;
                          *((value *) $y_2140 + 0LL) = $y_2139;
                          $y_2141 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2141 + -1LL) = 1024LL;
                          *((value *) $y_2141 + 0LL) = $y_2140;
                          $y_2142 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2142 + -1LL) = 1024LL;
                          *((value *) $y_2142 + 0LL) = $y_2141;
                          $y_2143 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2143 + -1LL) = 1024LL;
                          *((value *) $y_2143 + 0LL) = $y_2142;
                          $y_2144 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2144 + -1LL) = 1024LL;
                          *((value *) $y_2144 + 0LL) = $y_2143;
                          $y_2145 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2145 + -1LL) = 1024LL;
                          *((value *) $y_2145 + 0LL) = $y_2144;
                          $y_2146 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2146 + -1LL) = 1024LL;
                          *((value *) $y_2146 + 0LL) = $y_2145;
                          $y_2147 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2147 + -1LL) = 1024LL;
                          *((value *) $y_2147 + 0LL) = $y_2146;
                          $y_2148 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2148 + -1LL) = 1024LL;
                          *((value *) $y_2148 + 0LL) = $y_2147;
                          $y_2149 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2149 + -1LL) = 1024LL;
                          *((value *) $y_2149 + 0LL) = $y_2148;
                          $y_2150 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2150 + -1LL) = 1024LL;
                          *((value *) $y_2150 + 0LL) = $y_2149;
                          $y_2151 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2151 + -1LL) = 1024LL;
                          *((value *) $y_2151 + 0LL) = $y_2150;
                          $y_2152 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2152 + -1LL) = 1024LL;
                          *((value *) $y_2152 + 0LL) = $y_2151;
                          $y_2153 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2153 + -1LL) = 1024LL;
                          *((value *) $y_2153 + 0LL) = $y_2152;
                          $y_2154 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2154 + -1LL) = 1024LL;
                          *((value *) $y_2154 + 0LL) = $y_2153;
                          $y_2155 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2155 + -1LL) = 1024LL;
                          *((value *) $y_2155 + 0LL) = $y_2154;
                          $y_2156 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2156 + -1LL) = 1024LL;
                          *((value *) $y_2156 + 0LL) = $y_2155;
                          $y_2157 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2157 + -1LL) = 1024LL;
                          *((value *) $y_2157 + 0LL) = $y_2156;
                          $y_2158 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2158 + -1LL) = 1024LL;
                          *((value *) $y_2158 + 0LL) = $y_2157;
                          $y_2159 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2159 + -1LL) = 1024LL;
                          *((value *) $y_2159 + 0LL) = $y_2158;
                          $y_2160 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2160 + -1LL) = 1024LL;
                          *((value *) $y_2160 + 0LL) = $y_2159;
                          $y_2161 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2161 + -1LL) = 1024LL;
                          *((value *) $y_2161 + 0LL) = $y_2160;
                          $y_2162 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2162 + -1LL) = 1024LL;
                          *((value *) $y_2162 + 0LL) = $y_2161;
                          $y_2163 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2163 + -1LL) = 1024LL;
                          *((value *) $y_2163 + 0LL) = $y_2162;
                          $y_2164 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2164 + -1LL) = 1024LL;
                          *((value *) $y_2164 + 0LL) = $y_2163;
                          $y_2165 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2165 + -1LL) = 1024LL;
                          *((value *) $y_2165 + 0LL) = $y_2164;
                          $y_2166 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2166 + -1LL) = 1024LL;
                          *((value *) $y_2166 + 0LL) = $y_2165;
                          $y_2167 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2167 + -1LL) = 1024LL;
                          *((value *) $y_2167 + 0LL) = $y_2166;
                          $y_2168 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2168 + -1LL) = 1024LL;
                          *((value *) $y_2168 + 0LL) = $y_2167;
                          $y_2169 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2169 + -1LL) = 1024LL;
                          *((value *) $y_2169 + 0LL) = $y_2168;
                          $y_2170 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2170 + -1LL) = 1024LL;
                          *((value *) $y_2170 + 0LL) = $y_2169;
                          $y_2171 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2171 + -1LL) = 1024LL;
                          *((value *) $y_2171 + 0LL) = $y_2170;
                          $y_2172 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2172 + -1LL) = 1024LL;
                          *((value *) $y_2172 + 0LL) = $y_2171;
                          $y_2173 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2173 + -1LL) = 1024LL;
                          *((value *) $y_2173 + 0LL) = $y_2172;
                          $y_2174 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2174 + -1LL) = 1024LL;
                          *((value *) $y_2174 + 0LL) = $y_2173;
                          $y_2175 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2175 + -1LL) = 1024LL;
                          *((value *) $y_2175 + 0LL) = $y_2174;
                          $y_2176 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2176 + -1LL) = 1024LL;
                          *((value *) $y_2176 + 0LL) = $y_2175;
                          $y_2177 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2177 + -1LL) = 1024LL;
                          *((value *) $y_2177 + 0LL) = $y_2176;
                          $y_2178 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2178 + -1LL) = 1024LL;
                          *((value *) $y_2178 + 0LL) = $y_2177;
                          $y_2179 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2179 + -1LL) = 1024LL;
                          *((value *) $y_2179 + 0LL) = $y_2178;
                          $y_2180 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2180 + -1LL) = 1024LL;
                          *((value *) $y_2180 + 0LL) = $y_2179;
                          $y_2181 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2181 + -1LL) = 1024LL;
                          *((value *) $y_2181 + 0LL) = $y_2180;
                          $y_2182 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2182 + -1LL) = 1024LL;
                          *((value *) $y_2182 + 0LL) = $y_2181;
                          $y_2183 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2183 + -1LL) = 1024LL;
                          *((value *) $y_2183 + 0LL) = $y_2182;
                          $y_2184 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2184 + -1LL) = 1024LL;
                          *((value *) $y_2184 + 0LL) = $y_2183;
                          $y_2185 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2185 + -1LL) = 1024LL;
                          *((value *) $y_2185 + 0LL) = $y_2184;
                          $y_2186 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2186 + -1LL) = 1024LL;
                          *((value *) $y_2186 + 0LL) = $y_2185;
                          $y_2187 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2187 + -1LL) = 1024LL;
                          *((value *) $y_2187 + 0LL) = $y_2186;
                          $y_2188 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2188 + -1LL) = 1024LL;
                          *((value *) $y_2188 + 0LL) = $y_2187;
                          $y_2189 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2189 + -1LL) = 1024LL;
                          *((value *) $y_2189 + 0LL) = $y_2188;
                          $y_2190 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2190 + -1LL) = 1024LL;
                          *((value *) $y_2190 + 0LL) = $y_2189;
                          $y_2191 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2191 + -1LL) = 1024LL;
                          *((value *) $y_2191 + 0LL) = $y_2190;
                          $y_2192 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2192 + -1LL) = 1024LL;
                          *((value *) $y_2192 + 0LL) = $y_2191;
                          $y_2193 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2193 + -1LL) = 1024LL;
                          *((value *) $y_2193 + 0LL) = $y_2192;
                          $y_2194 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2194 + -1LL) = 1024LL;
                          *((value *) $y_2194 + 0LL) = $y_2193;
                          $y_2195 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2195 + -1LL) = 1024LL;
                          *((value *) $y_2195 + 0LL) = $y_2194;
                          $y_2196 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2196 + -1LL) = 1024LL;
                          *((value *) $y_2196 + 0LL) = $y_2195;
                          $y_2197 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2197 + -1LL) = 1024LL;
                          *((value *) $y_2197 + 0LL) = $y_2196;
                          $y_2198 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2198 + -1LL) = 1024LL;
                          *((value *) $y_2198 + 0LL) = $y_2197;
                          $y_2199 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2199 + -1LL) = 1024LL;
                          *((value *) $y_2199 + 0LL) = $y_2198;
                          $y_2200 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2200 + -1LL) = 1024LL;
                          *((value *) $y_2200 + 0LL) = $y_2199;
                          $y_2201 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2201 + -1LL) = 1024LL;
                          *((value *) $y_2201 + 0LL) = $y_2200;
                          $y_2202 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2202 + -1LL) = 1024LL;
                          *((value *) $y_2202 + 0LL) = $y_2201;
                          $y_2203 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2203 + -1LL) = 1024LL;
                          *((value *) $y_2203 + 0LL) = $y_2202;
                          $y_2204 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2204 + -1LL) = 1024LL;
                          *((value *) $y_2204 + 0LL) = $y_2203;
                          $y_2205 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2205 + -1LL) = 1024LL;
                          *((value *) $y_2205 + 0LL) = $y_2204;
                          $y_2206 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2206 + -1LL) = 1024LL;
                          *((value *) $y_2206 + 0LL) = $y_2205;
                          $y_2207 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2207 + -1LL) = 1024LL;
                          *((value *) $y_2207 + 0LL) = $y_2206;
                          $y_2208 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2208 + -1LL) = 1024LL;
                          *((value *) $y_2208 + 0LL) = $y_2207;
                          $y_2209 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2209 + -1LL) = 1024LL;
                          *((value *) $y_2209 + 0LL) = $y_2208;
                          $y_2210 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2210 + -1LL) = 1024LL;
                          *((value *) $y_2210 + 0LL) = $y_2209;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $count_1952;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $prim_2211 =
                            ((value (*)(struct thread_info *, value, value))
                              land)
                            ($tinfo, $y_1954, $y_2210);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $count_1952 = *(root + 1LL);
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $prim_2211;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_2213 =
                            ((value (*)(struct thread_info *, value))
                              CoqdZArithdBinIntDefdZdto_nat_known_141)
                            ($tinfo, $count_1952);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(526LL <= $limit - $alloc)) {
                            *(root + 2LL) = $y_2213;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 526LL;
                            garbage_collect($tinfo);
                            $y_2213 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $prim_2211 = *(root + 1LL);
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_2214 = 1LL;
                          $y_2215 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2215 + -1LL) = 1024LL;
                          *((value *) $y_2215 + 0LL) = $y_2214;
                          $y_2216 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2216 + -1LL) = 1024LL;
                          *((value *) $y_2216 + 0LL) = $y_2215;
                          $y_2217 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2217 + -1LL) = 1024LL;
                          *((value *) $y_2217 + 0LL) = $y_2216;
                          $y_2218 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2218 + -1LL) = 1024LL;
                          *((value *) $y_2218 + 0LL) = $y_2217;
                          $y_2219 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2219 + -1LL) = 1024LL;
                          *((value *) $y_2219 + 0LL) = $y_2218;
                          $y_2220 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2220 + -1LL) = 1024LL;
                          *((value *) $y_2220 + 0LL) = $y_2219;
                          $y_2221 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2221 + -1LL) = 1024LL;
                          *((value *) $y_2221 + 0LL) = $y_2220;
                          $y_2222 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2222 + -1LL) = 1024LL;
                          *((value *) $y_2222 + 0LL) = $y_2221;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $prim_2211;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $prim_2223 =
                            ((value (*)(struct thread_info *, value, value))
                              shiftr)
                            ($tinfo, $y_2213, $y_2222);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(510LL <= $limit - $alloc)) {
                            *(root + 2LL) = $prim_2223;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 510LL;
                            garbage_collect($tinfo);
                            $prim_2223 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $prim_2211 = *(root + 1LL);
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_2224 = 1LL;
                          $y_2225 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2225 + -1LL) = 1024LL;
                          *((value *) $y_2225 + 0LL) = $y_2224;
                          $y_2226 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2226 + -1LL) = 1024LL;
                          *((value *) $y_2226 + 0LL) = $y_2225;
                          $y_2227 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2227 + -1LL) = 1024LL;
                          *((value *) $y_2227 + 0LL) = $y_2226;
                          $y_2228 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2228 + -1LL) = 1024LL;
                          *((value *) $y_2228 + 0LL) = $y_2227;
                          $y_2229 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2229 + -1LL) = 1024LL;
                          *((value *) $y_2229 + 0LL) = $y_2228;
                          $y_2230 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2230 + -1LL) = 1024LL;
                          *((value *) $y_2230 + 0LL) = $y_2229;
                          $y_2231 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2231 + -1LL) = 1024LL;
                          *((value *) $y_2231 + 0LL) = $y_2230;
                          $y_2232 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2232 + -1LL) = 1024LL;
                          *((value *) $y_2232 + 0LL) = $y_2231;
                          $y_2233 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2233 + -1LL) = 1024LL;
                          *((value *) $y_2233 + 0LL) = $y_2232;
                          $y_2234 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2234 + -1LL) = 1024LL;
                          *((value *) $y_2234 + 0LL) = $y_2233;
                          $y_2235 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2235 + -1LL) = 1024LL;
                          *((value *) $y_2235 + 0LL) = $y_2234;
                          $y_2236 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2236 + -1LL) = 1024LL;
                          *((value *) $y_2236 + 0LL) = $y_2235;
                          $y_2237 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2237 + -1LL) = 1024LL;
                          *((value *) $y_2237 + 0LL) = $y_2236;
                          $y_2238 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2238 + -1LL) = 1024LL;
                          *((value *) $y_2238 + 0LL) = $y_2237;
                          $y_2239 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2239 + -1LL) = 1024LL;
                          *((value *) $y_2239 + 0LL) = $y_2238;
                          $y_2240 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2240 + -1LL) = 1024LL;
                          *((value *) $y_2240 + 0LL) = $y_2239;
                          $y_2241 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2241 + -1LL) = 1024LL;
                          *((value *) $y_2241 + 0LL) = $y_2240;
                          $y_2242 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2242 + -1LL) = 1024LL;
                          *((value *) $y_2242 + 0LL) = $y_2241;
                          $y_2243 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2243 + -1LL) = 1024LL;
                          *((value *) $y_2243 + 0LL) = $y_2242;
                          $y_2244 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2244 + -1LL) = 1024LL;
                          *((value *) $y_2244 + 0LL) = $y_2243;
                          $y_2245 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2245 + -1LL) = 1024LL;
                          *((value *) $y_2245 + 0LL) = $y_2244;
                          $y_2246 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2246 + -1LL) = 1024LL;
                          *((value *) $y_2246 + 0LL) = $y_2245;
                          $y_2247 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2247 + -1LL) = 1024LL;
                          *((value *) $y_2247 + 0LL) = $y_2246;
                          $y_2248 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2248 + -1LL) = 1024LL;
                          *((value *) $y_2248 + 0LL) = $y_2247;
                          $y_2249 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2249 + -1LL) = 1024LL;
                          *((value *) $y_2249 + 0LL) = $y_2248;
                          $y_2250 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2250 + -1LL) = 1024LL;
                          *((value *) $y_2250 + 0LL) = $y_2249;
                          $y_2251 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2251 + -1LL) = 1024LL;
                          *((value *) $y_2251 + 0LL) = $y_2250;
                          $y_2252 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2252 + -1LL) = 1024LL;
                          *((value *) $y_2252 + 0LL) = $y_2251;
                          $y_2253 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2253 + -1LL) = 1024LL;
                          *((value *) $y_2253 + 0LL) = $y_2252;
                          $y_2254 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2254 + -1LL) = 1024LL;
                          *((value *) $y_2254 + 0LL) = $y_2253;
                          $y_2255 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2255 + -1LL) = 1024LL;
                          *((value *) $y_2255 + 0LL) = $y_2254;
                          $y_2256 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2256 + -1LL) = 1024LL;
                          *((value *) $y_2256 + 0LL) = $y_2255;
                          $y_2257 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2257 + -1LL) = 1024LL;
                          *((value *) $y_2257 + 0LL) = $y_2256;
                          $y_2258 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2258 + -1LL) = 1024LL;
                          *((value *) $y_2258 + 0LL) = $y_2257;
                          $y_2259 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2259 + -1LL) = 1024LL;
                          *((value *) $y_2259 + 0LL) = $y_2258;
                          $y_2260 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2260 + -1LL) = 1024LL;
                          *((value *) $y_2260 + 0LL) = $y_2259;
                          $y_2261 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2261 + -1LL) = 1024LL;
                          *((value *) $y_2261 + 0LL) = $y_2260;
                          $y_2262 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2262 + -1LL) = 1024LL;
                          *((value *) $y_2262 + 0LL) = $y_2261;
                          $y_2263 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2263 + -1LL) = 1024LL;
                          *((value *) $y_2263 + 0LL) = $y_2262;
                          $y_2264 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2264 + -1LL) = 1024LL;
                          *((value *) $y_2264 + 0LL) = $y_2263;
                          $y_2265 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2265 + -1LL) = 1024LL;
                          *((value *) $y_2265 + 0LL) = $y_2264;
                          $y_2266 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2266 + -1LL) = 1024LL;
                          *((value *) $y_2266 + 0LL) = $y_2265;
                          $y_2267 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2267 + -1LL) = 1024LL;
                          *((value *) $y_2267 + 0LL) = $y_2266;
                          $y_2268 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2268 + -1LL) = 1024LL;
                          *((value *) $y_2268 + 0LL) = $y_2267;
                          $y_2269 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2269 + -1LL) = 1024LL;
                          *((value *) $y_2269 + 0LL) = $y_2268;
                          $y_2270 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2270 + -1LL) = 1024LL;
                          *((value *) $y_2270 + 0LL) = $y_2269;
                          $y_2271 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2271 + -1LL) = 1024LL;
                          *((value *) $y_2271 + 0LL) = $y_2270;
                          $y_2272 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2272 + -1LL) = 1024LL;
                          *((value *) $y_2272 + 0LL) = $y_2271;
                          $y_2273 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2273 + -1LL) = 1024LL;
                          *((value *) $y_2273 + 0LL) = $y_2272;
                          $y_2274 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2274 + -1LL) = 1024LL;
                          *((value *) $y_2274 + 0LL) = $y_2273;
                          $y_2275 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2275 + -1LL) = 1024LL;
                          *((value *) $y_2275 + 0LL) = $y_2274;
                          $y_2276 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2276 + -1LL) = 1024LL;
                          *((value *) $y_2276 + 0LL) = $y_2275;
                          $y_2277 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2277 + -1LL) = 1024LL;
                          *((value *) $y_2277 + 0LL) = $y_2276;
                          $y_2278 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2278 + -1LL) = 1024LL;
                          *((value *) $y_2278 + 0LL) = $y_2277;
                          $y_2279 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2279 + -1LL) = 1024LL;
                          *((value *) $y_2279 + 0LL) = $y_2278;
                          $y_2280 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2280 + -1LL) = 1024LL;
                          *((value *) $y_2280 + 0LL) = $y_2279;
                          $y_2281 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2281 + -1LL) = 1024LL;
                          *((value *) $y_2281 + 0LL) = $y_2280;
                          $y_2282 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2282 + -1LL) = 1024LL;
                          *((value *) $y_2282 + 0LL) = $y_2281;
                          $y_2283 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2283 + -1LL) = 1024LL;
                          *((value *) $y_2283 + 0LL) = $y_2282;
                          $y_2284 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2284 + -1LL) = 1024LL;
                          *((value *) $y_2284 + 0LL) = $y_2283;
                          $y_2285 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2285 + -1LL) = 1024LL;
                          *((value *) $y_2285 + 0LL) = $y_2284;
                          $y_2286 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2286 + -1LL) = 1024LL;
                          *((value *) $y_2286 + 0LL) = $y_2285;
                          $y_2287 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2287 + -1LL) = 1024LL;
                          *((value *) $y_2287 + 0LL) = $y_2286;
                          $y_2288 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2288 + -1LL) = 1024LL;
                          *((value *) $y_2288 + 0LL) = $y_2287;
                          $y_2289 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2289 + -1LL) = 1024LL;
                          *((value *) $y_2289 + 0LL) = $y_2288;
                          $y_2290 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2290 + -1LL) = 1024LL;
                          *((value *) $y_2290 + 0LL) = $y_2289;
                          $y_2291 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2291 + -1LL) = 1024LL;
                          *((value *) $y_2291 + 0LL) = $y_2290;
                          $y_2292 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2292 + -1LL) = 1024LL;
                          *((value *) $y_2292 + 0LL) = $y_2291;
                          $y_2293 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2293 + -1LL) = 1024LL;
                          *((value *) $y_2293 + 0LL) = $y_2292;
                          $y_2294 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2294 + -1LL) = 1024LL;
                          *((value *) $y_2294 + 0LL) = $y_2293;
                          $y_2295 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2295 + -1LL) = 1024LL;
                          *((value *) $y_2295 + 0LL) = $y_2294;
                          $y_2296 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2296 + -1LL) = 1024LL;
                          *((value *) $y_2296 + 0LL) = $y_2295;
                          $y_2297 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2297 + -1LL) = 1024LL;
                          *((value *) $y_2297 + 0LL) = $y_2296;
                          $y_2298 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2298 + -1LL) = 1024LL;
                          *((value *) $y_2298 + 0LL) = $y_2297;
                          $y_2299 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2299 + -1LL) = 1024LL;
                          *((value *) $y_2299 + 0LL) = $y_2298;
                          $y_2300 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2300 + -1LL) = 1024LL;
                          *((value *) $y_2300 + 0LL) = $y_2299;
                          $y_2301 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2301 + -1LL) = 1024LL;
                          *((value *) $y_2301 + 0LL) = $y_2300;
                          $y_2302 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2302 + -1LL) = 1024LL;
                          *((value *) $y_2302 + 0LL) = $y_2301;
                          $y_2303 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2303 + -1LL) = 1024LL;
                          *((value *) $y_2303 + 0LL) = $y_2302;
                          $y_2304 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2304 + -1LL) = 1024LL;
                          *((value *) $y_2304 + 0LL) = $y_2303;
                          $y_2305 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2305 + -1LL) = 1024LL;
                          *((value *) $y_2305 + 0LL) = $y_2304;
                          $y_2306 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2306 + -1LL) = 1024LL;
                          *((value *) $y_2306 + 0LL) = $y_2305;
                          $y_2307 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2307 + -1LL) = 1024LL;
                          *((value *) $y_2307 + 0LL) = $y_2306;
                          $y_2308 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2308 + -1LL) = 1024LL;
                          *((value *) $y_2308 + 0LL) = $y_2307;
                          $y_2309 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2309 + -1LL) = 1024LL;
                          *((value *) $y_2309 + 0LL) = $y_2308;
                          $y_2310 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2310 + -1LL) = 1024LL;
                          *((value *) $y_2310 + 0LL) = $y_2309;
                          $y_2311 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2311 + -1LL) = 1024LL;
                          *((value *) $y_2311 + 0LL) = $y_2310;
                          $y_2312 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2312 + -1LL) = 1024LL;
                          *((value *) $y_2312 + 0LL) = $y_2311;
                          $y_2313 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2313 + -1LL) = 1024LL;
                          *((value *) $y_2313 + 0LL) = $y_2312;
                          $y_2314 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2314 + -1LL) = 1024LL;
                          *((value *) $y_2314 + 0LL) = $y_2313;
                          $y_2315 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2315 + -1LL) = 1024LL;
                          *((value *) $y_2315 + 0LL) = $y_2314;
                          $y_2316 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2316 + -1LL) = 1024LL;
                          *((value *) $y_2316 + 0LL) = $y_2315;
                          $y_2317 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2317 + -1LL) = 1024LL;
                          *((value *) $y_2317 + 0LL) = $y_2316;
                          $y_2318 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2318 + -1LL) = 1024LL;
                          *((value *) $y_2318 + 0LL) = $y_2317;
                          $y_2319 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2319 + -1LL) = 1024LL;
                          *((value *) $y_2319 + 0LL) = $y_2318;
                          $y_2320 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2320 + -1LL) = 1024LL;
                          *((value *) $y_2320 + 0LL) = $y_2319;
                          $y_2321 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2321 + -1LL) = 1024LL;
                          *((value *) $y_2321 + 0LL) = $y_2320;
                          $y_2322 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2322 + -1LL) = 1024LL;
                          *((value *) $y_2322 + 0LL) = $y_2321;
                          $y_2323 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2323 + -1LL) = 1024LL;
                          *((value *) $y_2323 + 0LL) = $y_2322;
                          $y_2324 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2324 + -1LL) = 1024LL;
                          *((value *) $y_2324 + 0LL) = $y_2323;
                          $y_2325 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2325 + -1LL) = 1024LL;
                          *((value *) $y_2325 + 0LL) = $y_2324;
                          $y_2326 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2326 + -1LL) = 1024LL;
                          *((value *) $y_2326 + 0LL) = $y_2325;
                          $y_2327 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2327 + -1LL) = 1024LL;
                          *((value *) $y_2327 + 0LL) = $y_2326;
                          $y_2328 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2328 + -1LL) = 1024LL;
                          *((value *) $y_2328 + 0LL) = $y_2327;
                          $y_2329 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2329 + -1LL) = 1024LL;
                          *((value *) $y_2329 + 0LL) = $y_2328;
                          $y_2330 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2330 + -1LL) = 1024LL;
                          *((value *) $y_2330 + 0LL) = $y_2329;
                          $y_2331 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2331 + -1LL) = 1024LL;
                          *((value *) $y_2331 + 0LL) = $y_2330;
                          $y_2332 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2332 + -1LL) = 1024LL;
                          *((value *) $y_2332 + 0LL) = $y_2331;
                          $y_2333 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2333 + -1LL) = 1024LL;
                          *((value *) $y_2333 + 0LL) = $y_2332;
                          $y_2334 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2334 + -1LL) = 1024LL;
                          *((value *) $y_2334 + 0LL) = $y_2333;
                          $y_2335 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2335 + -1LL) = 1024LL;
                          *((value *) $y_2335 + 0LL) = $y_2334;
                          $y_2336 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2336 + -1LL) = 1024LL;
                          *((value *) $y_2336 + 0LL) = $y_2335;
                          $y_2337 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2337 + -1LL) = 1024LL;
                          *((value *) $y_2337 + 0LL) = $y_2336;
                          $y_2338 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2338 + -1LL) = 1024LL;
                          *((value *) $y_2338 + 0LL) = $y_2337;
                          $y_2339 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2339 + -1LL) = 1024LL;
                          *((value *) $y_2339 + 0LL) = $y_2338;
                          $y_2340 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2340 + -1LL) = 1024LL;
                          *((value *) $y_2340 + 0LL) = $y_2339;
                          $y_2341 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2341 + -1LL) = 1024LL;
                          *((value *) $y_2341 + 0LL) = $y_2340;
                          $y_2342 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2342 + -1LL) = 1024LL;
                          *((value *) $y_2342 + 0LL) = $y_2341;
                          $y_2343 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2343 + -1LL) = 1024LL;
                          *((value *) $y_2343 + 0LL) = $y_2342;
                          $y_2344 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2344 + -1LL) = 1024LL;
                          *((value *) $y_2344 + 0LL) = $y_2343;
                          $y_2345 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2345 + -1LL) = 1024LL;
                          *((value *) $y_2345 + 0LL) = $y_2344;
                          $y_2346 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2346 + -1LL) = 1024LL;
                          *((value *) $y_2346 + 0LL) = $y_2345;
                          $y_2347 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2347 + -1LL) = 1024LL;
                          *((value *) $y_2347 + 0LL) = $y_2346;
                          $y_2348 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2348 + -1LL) = 1024LL;
                          *((value *) $y_2348 + 0LL) = $y_2347;
                          $y_2349 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2349 + -1LL) = 1024LL;
                          *((value *) $y_2349 + 0LL) = $y_2348;
                          $y_2350 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2350 + -1LL) = 1024LL;
                          *((value *) $y_2350 + 0LL) = $y_2349;
                          $y_2351 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2351 + -1LL) = 1024LL;
                          *((value *) $y_2351 + 0LL) = $y_2350;
                          $y_2352 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2352 + -1LL) = 1024LL;
                          *((value *) $y_2352 + 0LL) = $y_2351;
                          $y_2353 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2353 + -1LL) = 1024LL;
                          *((value *) $y_2353 + 0LL) = $y_2352;
                          $y_2354 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2354 + -1LL) = 1024LL;
                          *((value *) $y_2354 + 0LL) = $y_2353;
                          $y_2355 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2355 + -1LL) = 1024LL;
                          *((value *) $y_2355 + 0LL) = $y_2354;
                          $y_2356 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2356 + -1LL) = 1024LL;
                          *((value *) $y_2356 + 0LL) = $y_2355;
                          $y_2357 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2357 + -1LL) = 1024LL;
                          *((value *) $y_2357 + 0LL) = $y_2356;
                          $y_2358 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2358 + -1LL) = 1024LL;
                          *((value *) $y_2358 + 0LL) = $y_2357;
                          $y_2359 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2359 + -1LL) = 1024LL;
                          *((value *) $y_2359 + 0LL) = $y_2358;
                          $y_2360 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2360 + -1LL) = 1024LL;
                          *((value *) $y_2360 + 0LL) = $y_2359;
                          $y_2361 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2361 + -1LL) = 1024LL;
                          *((value *) $y_2361 + 0LL) = $y_2360;
                          $y_2362 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2362 + -1LL) = 1024LL;
                          *((value *) $y_2362 + 0LL) = $y_2361;
                          $y_2363 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2363 + -1LL) = 1024LL;
                          *((value *) $y_2363 + 0LL) = $y_2362;
                          $y_2364 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2364 + -1LL) = 1024LL;
                          *((value *) $y_2364 + 0LL) = $y_2363;
                          $y_2365 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2365 + -1LL) = 1024LL;
                          *((value *) $y_2365 + 0LL) = $y_2364;
                          $y_2366 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2366 + -1LL) = 1024LL;
                          *((value *) $y_2366 + 0LL) = $y_2365;
                          $y_2367 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2367 + -1LL) = 1024LL;
                          *((value *) $y_2367 + 0LL) = $y_2366;
                          $y_2368 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2368 + -1LL) = 1024LL;
                          *((value *) $y_2368 + 0LL) = $y_2367;
                          $y_2369 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2369 + -1LL) = 1024LL;
                          *((value *) $y_2369 + 0LL) = $y_2368;
                          $y_2370 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2370 + -1LL) = 1024LL;
                          *((value *) $y_2370 + 0LL) = $y_2369;
                          $y_2371 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2371 + -1LL) = 1024LL;
                          *((value *) $y_2371 + 0LL) = $y_2370;
                          $y_2372 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2372 + -1LL) = 1024LL;
                          *((value *) $y_2372 + 0LL) = $y_2371;
                          $y_2373 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2373 + -1LL) = 1024LL;
                          *((value *) $y_2373 + 0LL) = $y_2372;
                          $y_2374 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2374 + -1LL) = 1024LL;
                          *((value *) $y_2374 + 0LL) = $y_2373;
                          $y_2375 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2375 + -1LL) = 1024LL;
                          *((value *) $y_2375 + 0LL) = $y_2374;
                          $y_2376 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2376 + -1LL) = 1024LL;
                          *((value *) $y_2376 + 0LL) = $y_2375;
                          $y_2377 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2377 + -1LL) = 1024LL;
                          *((value *) $y_2377 + 0LL) = $y_2376;
                          $y_2378 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2378 + -1LL) = 1024LL;
                          *((value *) $y_2378 + 0LL) = $y_2377;
                          $y_2379 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2379 + -1LL) = 1024LL;
                          *((value *) $y_2379 + 0LL) = $y_2378;
                          $y_2380 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2380 + -1LL) = 1024LL;
                          *((value *) $y_2380 + 0LL) = $y_2379;
                          $y_2381 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2381 + -1LL) = 1024LL;
                          *((value *) $y_2381 + 0LL) = $y_2380;
                          $y_2382 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2382 + -1LL) = 1024LL;
                          *((value *) $y_2382 + 0LL) = $y_2381;
                          $y_2383 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2383 + -1LL) = 1024LL;
                          *((value *) $y_2383 + 0LL) = $y_2382;
                          $y_2384 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2384 + -1LL) = 1024LL;
                          *((value *) $y_2384 + 0LL) = $y_2383;
                          $y_2385 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2385 + -1LL) = 1024LL;
                          *((value *) $y_2385 + 0LL) = $y_2384;
                          $y_2386 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2386 + -1LL) = 1024LL;
                          *((value *) $y_2386 + 0LL) = $y_2385;
                          $y_2387 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2387 + -1LL) = 1024LL;
                          *((value *) $y_2387 + 0LL) = $y_2386;
                          $y_2388 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2388 + -1LL) = 1024LL;
                          *((value *) $y_2388 + 0LL) = $y_2387;
                          $y_2389 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2389 + -1LL) = 1024LL;
                          *((value *) $y_2389 + 0LL) = $y_2388;
                          $y_2390 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2390 + -1LL) = 1024LL;
                          *((value *) $y_2390 + 0LL) = $y_2389;
                          $y_2391 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2391 + -1LL) = 1024LL;
                          *((value *) $y_2391 + 0LL) = $y_2390;
                          $y_2392 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2392 + -1LL) = 1024LL;
                          *((value *) $y_2392 + 0LL) = $y_2391;
                          $y_2393 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2393 + -1LL) = 1024LL;
                          *((value *) $y_2393 + 0LL) = $y_2392;
                          $y_2394 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2394 + -1LL) = 1024LL;
                          *((value *) $y_2394 + 0LL) = $y_2393;
                          $y_2395 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2395 + -1LL) = 1024LL;
                          *((value *) $y_2395 + 0LL) = $y_2394;
                          $y_2396 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2396 + -1LL) = 1024LL;
                          *((value *) $y_2396 + 0LL) = $y_2395;
                          $y_2397 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2397 + -1LL) = 1024LL;
                          *((value *) $y_2397 + 0LL) = $y_2396;
                          $y_2398 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2398 + -1LL) = 1024LL;
                          *((value *) $y_2398 + 0LL) = $y_2397;
                          $y_2399 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2399 + -1LL) = 1024LL;
                          *((value *) $y_2399 + 0LL) = $y_2398;
                          $y_2400 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2400 + -1LL) = 1024LL;
                          *((value *) $y_2400 + 0LL) = $y_2399;
                          $y_2401 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2401 + -1LL) = 1024LL;
                          *((value *) $y_2401 + 0LL) = $y_2400;
                          $y_2402 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2402 + -1LL) = 1024LL;
                          *((value *) $y_2402 + 0LL) = $y_2401;
                          $y_2403 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2403 + -1LL) = 1024LL;
                          *((value *) $y_2403 + 0LL) = $y_2402;
                          $y_2404 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2404 + -1LL) = 1024LL;
                          *((value *) $y_2404 + 0LL) = $y_2403;
                          $y_2405 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2405 + -1LL) = 1024LL;
                          *((value *) $y_2405 + 0LL) = $y_2404;
                          $y_2406 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2406 + -1LL) = 1024LL;
                          *((value *) $y_2406 + 0LL) = $y_2405;
                          $y_2407 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2407 + -1LL) = 1024LL;
                          *((value *) $y_2407 + 0LL) = $y_2406;
                          $y_2408 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2408 + -1LL) = 1024LL;
                          *((value *) $y_2408 + 0LL) = $y_2407;
                          $y_2409 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2409 + -1LL) = 1024LL;
                          *((value *) $y_2409 + 0LL) = $y_2408;
                          $y_2410 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2410 + -1LL) = 1024LL;
                          *((value *) $y_2410 + 0LL) = $y_2409;
                          $y_2411 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2411 + -1LL) = 1024LL;
                          *((value *) $y_2411 + 0LL) = $y_2410;
                          $y_2412 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2412 + -1LL) = 1024LL;
                          *((value *) $y_2412 + 0LL) = $y_2411;
                          $y_2413 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2413 + -1LL) = 1024LL;
                          *((value *) $y_2413 + 0LL) = $y_2412;
                          $y_2414 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2414 + -1LL) = 1024LL;
                          *((value *) $y_2414 + 0LL) = $y_2413;
                          $y_2415 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2415 + -1LL) = 1024LL;
                          *((value *) $y_2415 + 0LL) = $y_2414;
                          $y_2416 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2416 + -1LL) = 1024LL;
                          *((value *) $y_2416 + 0LL) = $y_2415;
                          $y_2417 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2417 + -1LL) = 1024LL;
                          *((value *) $y_2417 + 0LL) = $y_2416;
                          $y_2418 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2418 + -1LL) = 1024LL;
                          *((value *) $y_2418 + 0LL) = $y_2417;
                          $y_2419 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2419 + -1LL) = 1024LL;
                          *((value *) $y_2419 + 0LL) = $y_2418;
                          $y_2420 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2420 + -1LL) = 1024LL;
                          *((value *) $y_2420 + 0LL) = $y_2419;
                          $y_2421 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2421 + -1LL) = 1024LL;
                          *((value *) $y_2421 + 0LL) = $y_2420;
                          $y_2422 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2422 + -1LL) = 1024LL;
                          *((value *) $y_2422 + 0LL) = $y_2421;
                          $y_2423 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2423 + -1LL) = 1024LL;
                          *((value *) $y_2423 + 0LL) = $y_2422;
                          $y_2424 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2424 + -1LL) = 1024LL;
                          *((value *) $y_2424 + 0LL) = $y_2423;
                          $y_2425 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2425 + -1LL) = 1024LL;
                          *((value *) $y_2425 + 0LL) = $y_2424;
                          $y_2426 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2426 + -1LL) = 1024LL;
                          *((value *) $y_2426 + 0LL) = $y_2425;
                          $y_2427 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2427 + -1LL) = 1024LL;
                          *((value *) $y_2427 + 0LL) = $y_2426;
                          $y_2428 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2428 + -1LL) = 1024LL;
                          *((value *) $y_2428 + 0LL) = $y_2427;
                          $y_2429 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2429 + -1LL) = 1024LL;
                          *((value *) $y_2429 + 0LL) = $y_2428;
                          $y_2430 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2430 + -1LL) = 1024LL;
                          *((value *) $y_2430 + 0LL) = $y_2429;
                          $y_2431 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2431 + -1LL) = 1024LL;
                          *((value *) $y_2431 + 0LL) = $y_2430;
                          $y_2432 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2432 + -1LL) = 1024LL;
                          *((value *) $y_2432 + 0LL) = $y_2431;
                          $y_2433 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2433 + -1LL) = 1024LL;
                          *((value *) $y_2433 + 0LL) = $y_2432;
                          $y_2434 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2434 + -1LL) = 1024LL;
                          *((value *) $y_2434 + 0LL) = $y_2433;
                          $y_2435 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2435 + -1LL) = 1024LL;
                          *((value *) $y_2435 + 0LL) = $y_2434;
                          $y_2436 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2436 + -1LL) = 1024LL;
                          *((value *) $y_2436 + 0LL) = $y_2435;
                          $y_2437 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2437 + -1LL) = 1024LL;
                          *((value *) $y_2437 + 0LL) = $y_2436;
                          $y_2438 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2438 + -1LL) = 1024LL;
                          *((value *) $y_2438 + 0LL) = $y_2437;
                          $y_2439 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2439 + -1LL) = 1024LL;
                          *((value *) $y_2439 + 0LL) = $y_2438;
                          $y_2440 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2440 + -1LL) = 1024LL;
                          *((value *) $y_2440 + 0LL) = $y_2439;
                          $y_2441 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2441 + -1LL) = 1024LL;
                          *((value *) $y_2441 + 0LL) = $y_2440;
                          $y_2442 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2442 + -1LL) = 1024LL;
                          *((value *) $y_2442 + 0LL) = $y_2441;
                          $y_2443 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2443 + -1LL) = 1024LL;
                          *((value *) $y_2443 + 0LL) = $y_2442;
                          $y_2444 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2444 + -1LL) = 1024LL;
                          *((value *) $y_2444 + 0LL) = $y_2443;
                          $y_2445 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2445 + -1LL) = 1024LL;
                          *((value *) $y_2445 + 0LL) = $y_2444;
                          $y_2446 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2446 + -1LL) = 1024LL;
                          *((value *) $y_2446 + 0LL) = $y_2445;
                          $y_2447 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2447 + -1LL) = 1024LL;
                          *((value *) $y_2447 + 0LL) = $y_2446;
                          $y_2448 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2448 + -1LL) = 1024LL;
                          *((value *) $y_2448 + 0LL) = $y_2447;
                          $y_2449 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2449 + -1LL) = 1024LL;
                          *((value *) $y_2449 + 0LL) = $y_2448;
                          $y_2450 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2450 + -1LL) = 1024LL;
                          *((value *) $y_2450 + 0LL) = $y_2449;
                          $y_2451 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2451 + -1LL) = 1024LL;
                          *((value *) $y_2451 + 0LL) = $y_2450;
                          $y_2452 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2452 + -1LL) = 1024LL;
                          *((value *) $y_2452 + 0LL) = $y_2451;
                          $y_2453 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2453 + -1LL) = 1024LL;
                          *((value *) $y_2453 + 0LL) = $y_2452;
                          $y_2454 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2454 + -1LL) = 1024LL;
                          *((value *) $y_2454 + 0LL) = $y_2453;
                          $y_2455 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2455 + -1LL) = 1024LL;
                          *((value *) $y_2455 + 0LL) = $y_2454;
                          $y_2456 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2456 + -1LL) = 1024LL;
                          *((value *) $y_2456 + 0LL) = $y_2455;
                          $y_2457 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2457 + -1LL) = 1024LL;
                          *((value *) $y_2457 + 0LL) = $y_2456;
                          $y_2458 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2458 + -1LL) = 1024LL;
                          *((value *) $y_2458 + 0LL) = $y_2457;
                          $y_2459 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2459 + -1LL) = 1024LL;
                          *((value *) $y_2459 + 0LL) = $y_2458;
                          $y_2460 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2460 + -1LL) = 1024LL;
                          *((value *) $y_2460 + 0LL) = $y_2459;
                          $y_2461 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2461 + -1LL) = 1024LL;
                          *((value *) $y_2461 + 0LL) = $y_2460;
                          $y_2462 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2462 + -1LL) = 1024LL;
                          *((value *) $y_2462 + 0LL) = $y_2461;
                          $y_2463 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2463 + -1LL) = 1024LL;
                          *((value *) $y_2463 + 0LL) = $y_2462;
                          $y_2464 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2464 + -1LL) = 1024LL;
                          *((value *) $y_2464 + 0LL) = $y_2463;
                          $y_2465 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2465 + -1LL) = 1024LL;
                          *((value *) $y_2465 + 0LL) = $y_2464;
                          $y_2466 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2466 + -1LL) = 1024LL;
                          *((value *) $y_2466 + 0LL) = $y_2465;
                          $y_2467 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2467 + -1LL) = 1024LL;
                          *((value *) $y_2467 + 0LL) = $y_2466;
                          $y_2468 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2468 + -1LL) = 1024LL;
                          *((value *) $y_2468 + 0LL) = $y_2467;
                          $y_2469 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2469 + -1LL) = 1024LL;
                          *((value *) $y_2469 + 0LL) = $y_2468;
                          $y_2470 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2470 + -1LL) = 1024LL;
                          *((value *) $y_2470 + 0LL) = $y_2469;
                          $y_2471 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2471 + -1LL) = 1024LL;
                          *((value *) $y_2471 + 0LL) = $y_2470;
                          $y_2472 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2472 + -1LL) = 1024LL;
                          *((value *) $y_2472 + 0LL) = $y_2471;
                          $y_2473 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2473 + -1LL) = 1024LL;
                          *((value *) $y_2473 + 0LL) = $y_2472;
                          $y_2474 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2474 + -1LL) = 1024LL;
                          *((value *) $y_2474 + 0LL) = $y_2473;
                          $y_2475 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2475 + -1LL) = 1024LL;
                          *((value *) $y_2475 + 0LL) = $y_2474;
                          $y_2476 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2476 + -1LL) = 1024LL;
                          *((value *) $y_2476 + 0LL) = $y_2475;
                          $y_2477 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2477 + -1LL) = 1024LL;
                          *((value *) $y_2477 + 0LL) = $y_2476;
                          $y_2478 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2478 + -1LL) = 1024LL;
                          *((value *) $y_2478 + 0LL) = $y_2477;
                          $y_2479 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2479 + -1LL) = 1024LL;
                          *((value *) $y_2479 + 0LL) = $y_2478;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $prim_2211;
                          *(root + 0LL) = $env_1603;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $prim_2480 =
                            ((value (*)(struct thread_info *, value, value))
                              land)
                            ($tinfo, $prim_2223, $y_2479);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $prim_2211 = *(root + 1LL);
                          $env_1603 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_proj_2482 =
                            *((value *) $env_1603 + 0LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_nat_Z_uncurried_uncurried_known_113)
                            ($tinfo, $prim_2480, $prim_2211,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_proj_2482);
                          return $result;
                          break;
                        default:
                          $y_2483 = 1LL;
                          $y_2484 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2484 + -1LL) = 1024LL;
                          *((value *) $y_2484 + 0LL) = $y_2483;
                          $y_2485 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2485 + -1LL) = 1024LL;
                          *((value *) $y_2485 + 0LL) = $y_2484;
                          $y_2486 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2486 + -1LL) = 1024LL;
                          *((value *) $y_2486 + 0LL) = $y_2485;
                          $y_2487 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2487 + -1LL) = 1024LL;
                          *((value *) $y_2487 + 0LL) = $y_2486;
                          $y_2488 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2488 + -1LL) = 1024LL;
                          *((value *) $y_2488 + 0LL) = $y_2487;
                          $y_2489 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2489 + -1LL) = 1024LL;
                          *((value *) $y_2489 + 0LL) = $y_2488;
                          $y_2490 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2490 + -1LL) = 1024LL;
                          *((value *) $y_2490 + 0LL) = $y_2489;
                          $y_2491 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2491 + -1LL) = 1024LL;
                          *((value *) $y_2491 + 0LL) = $y_2490;
                          $y_2492 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2492 + -1LL) = 1024LL;
                          *((value *) $y_2492 + 0LL) = $y_2491;
                          $y_2493 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2493 + -1LL) = 1024LL;
                          *((value *) $y_2493 + 0LL) = $y_2492;
                          $y_2494 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2494 + -1LL) = 1024LL;
                          *((value *) $y_2494 + 0LL) = $y_2493;
                          $y_2495 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2495 + -1LL) = 1024LL;
                          *((value *) $y_2495 + 0LL) = $y_2494;
                          $y_2496 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2496 + -1LL) = 1024LL;
                          *((value *) $y_2496 + 0LL) = $y_2495;
                          $y_2497 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2497 + -1LL) = 1024LL;
                          *((value *) $y_2497 + 0LL) = $y_2496;
                          $y_2498 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2498 + -1LL) = 1024LL;
                          *((value *) $y_2498 + 0LL) = $y_2497;
                          $y_2499 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2499 + -1LL) = 1024LL;
                          *((value *) $y_2499 + 0LL) = $y_2498;
                          $y_2500 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2500 + -1LL) = 1024LL;
                          *((value *) $y_2500 + 0LL) = $y_2499;
                          $y_2501 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2501 + -1LL) = 1024LL;
                          *((value *) $y_2501 + 0LL) = $y_2500;
                          $y_2502 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2502 + -1LL) = 1024LL;
                          *((value *) $y_2502 + 0LL) = $y_2501;
                          $y_2503 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2503 + -1LL) = 1024LL;
                          *((value *) $y_2503 + 0LL) = $y_2502;
                          $y_2504 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2504 + -1LL) = 1024LL;
                          *((value *) $y_2504 + 0LL) = $y_2503;
                          $y_2505 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2505 + -1LL) = 1024LL;
                          *((value *) $y_2505 + 0LL) = $y_2504;
                          $y_2506 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2506 + -1LL) = 1024LL;
                          *((value *) $y_2506 + 0LL) = $y_2505;
                          $y_2507 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2507 + -1LL) = 1024LL;
                          *((value *) $y_2507 + 0LL) = $y_2506;
                          $y_2508 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2508 + -1LL) = 1024LL;
                          *((value *) $y_2508 + 0LL) = $y_2507;
                          $y_2509 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2509 + -1LL) = 1024LL;
                          *((value *) $y_2509 + 0LL) = $y_2508;
                          $y_2510 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2510 + -1LL) = 1024LL;
                          *((value *) $y_2510 + 0LL) = $y_2509;
                          $y_2511 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2511 + -1LL) = 1024LL;
                          *((value *) $y_2511 + 0LL) = $y_2510;
                          $y_2512 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2512 + -1LL) = 1024LL;
                          *((value *) $y_2512 + 0LL) = $y_2511;
                          $y_2513 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2513 + -1LL) = 1024LL;
                          *((value *) $y_2513 + 0LL) = $y_2512;
                          $y_2514 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2514 + -1LL) = 1024LL;
                          *((value *) $y_2514 + 0LL) = $y_2513;
                          $y_2515 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2515 + -1LL) = 1024LL;
                          *((value *) $y_2515 + 0LL) = $y_2514;
                          $y_2516 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2516 + -1LL) = 1024LL;
                          *((value *) $y_2516 + 0LL) = $y_2515;
                          $y_2517 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2517 + -1LL) = 1024LL;
                          *((value *) $y_2517 + 0LL) = $y_2516;
                          $y_2518 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2518 + -1LL) = 1024LL;
                          *((value *) $y_2518 + 0LL) = $y_2517;
                          $y_2519 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2519 + -1LL) = 1024LL;
                          *((value *) $y_2519 + 0LL) = $y_2518;
                          $y_2520 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2520 + -1LL) = 1024LL;
                          *((value *) $y_2520 + 0LL) = $y_2519;
                          $y_2521 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2521 + -1LL) = 1024LL;
                          *((value *) $y_2521 + 0LL) = $y_2520;
                          $y_2522 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2522 + -1LL) = 1024LL;
                          *((value *) $y_2522 + 0LL) = $y_2521;
                          $y_2523 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2523 + -1LL) = 1024LL;
                          *((value *) $y_2523 + 0LL) = $y_2522;
                          $y_2524 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2524 + -1LL) = 1024LL;
                          *((value *) $y_2524 + 0LL) = $y_2523;
                          $y_2525 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2525 + -1LL) = 1024LL;
                          *((value *) $y_2525 + 0LL) = $y_2524;
                          $y_2526 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2526 + -1LL) = 1024LL;
                          *((value *) $y_2526 + 0LL) = $y_2525;
                          $y_2527 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2527 + -1LL) = 1024LL;
                          *((value *) $y_2527 + 0LL) = $y_2526;
                          $y_2528 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2528 + -1LL) = 1024LL;
                          *((value *) $y_2528 + 0LL) = $y_2527;
                          $y_2529 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2529 + -1LL) = 1024LL;
                          *((value *) $y_2529 + 0LL) = $y_2528;
                          $y_2530 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2530 + -1LL) = 1024LL;
                          *((value *) $y_2530 + 0LL) = $y_2529;
                          $y_2531 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2531 + -1LL) = 1024LL;
                          *((value *) $y_2531 + 0LL) = $y_2530;
                          $y_2532 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2532 + -1LL) = 1024LL;
                          *((value *) $y_2532 + 0LL) = $y_2531;
                          $y_2533 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2533 + -1LL) = 1024LL;
                          *((value *) $y_2533 + 0LL) = $y_2532;
                          $y_2534 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2534 + -1LL) = 1024LL;
                          *((value *) $y_2534 + 0LL) = $y_2533;
                          $y_2535 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2535 + -1LL) = 1024LL;
                          *((value *) $y_2535 + 0LL) = $y_2534;
                          $y_2536 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2536 + -1LL) = 1024LL;
                          *((value *) $y_2536 + 0LL) = $y_2535;
                          $y_2537 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2537 + -1LL) = 1024LL;
                          *((value *) $y_2537 + 0LL) = $y_2536;
                          $y_2538 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2538 + -1LL) = 1024LL;
                          *((value *) $y_2538 + 0LL) = $y_2537;
                          $y_2539 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2539 + -1LL) = 1024LL;
                          *((value *) $y_2539 + 0LL) = $y_2538;
                          $y_2540 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2540 + -1LL) = 1024LL;
                          *((value *) $y_2540 + 0LL) = $y_2539;
                          $y_2541 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2541 + -1LL) = 1024LL;
                          *((value *) $y_2541 + 0LL) = $y_2540;
                          $y_2542 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2542 + -1LL) = 1024LL;
                          *((value *) $y_2542 + 0LL) = $y_2541;
                          $y_2543 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2543 + -1LL) = 1024LL;
                          *((value *) $y_2543 + 0LL) = $y_2542;
                          $y_2544 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2544 + -1LL) = 1024LL;
                          *((value *) $y_2544 + 0LL) = $y_2543;
                          $y_2545 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2545 + -1LL) = 1024LL;
                          *((value *) $y_2545 + 0LL) = $y_2544;
                          $y_2546 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2546 + -1LL) = 1024LL;
                          *((value *) $y_2546 + 0LL) = $y_2545;
                          $y_2547 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2547 + -1LL) = 1024LL;
                          *((value *) $y_2547 + 0LL) = $y_2546;
                          $y_2548 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2548 + -1LL) = 1024LL;
                          *((value *) $y_2548 + 0LL) = $y_2547;
                          $y_2549 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2549 + -1LL) = 1024LL;
                          *((value *) $y_2549 + 0LL) = $y_2548;
                          $y_2550 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2550 + -1LL) = 1024LL;
                          *((value *) $y_2550 + 0LL) = $y_2549;
                          $y_2551 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2551 + -1LL) = 1024LL;
                          *((value *) $y_2551 + 0LL) = $y_2550;
                          $y_2552 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2552 + -1LL) = 1024LL;
                          *((value *) $y_2552 + 0LL) = $y_2551;
                          $y_2553 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2553 + -1LL) = 1024LL;
                          *((value *) $y_2553 + 0LL) = $y_2552;
                          $y_2554 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2554 + -1LL) = 1024LL;
                          *((value *) $y_2554 + 0LL) = $y_2553;
                          $y_2555 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2555 + -1LL) = 1024LL;
                          *((value *) $y_2555 + 0LL) = $y_2554;
                          $y_2556 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2556 + -1LL) = 1024LL;
                          *((value *) $y_2556 + 0LL) = $y_2555;
                          $y_2557 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2557 + -1LL) = 1024LL;
                          *((value *) $y_2557 + 0LL) = $y_2556;
                          $y_2558 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2558 + -1LL) = 1024LL;
                          *((value *) $y_2558 + 0LL) = $y_2557;
                          $y_2559 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2559 + -1LL) = 1024LL;
                          *((value *) $y_2559 + 0LL) = $y_2558;
                          $y_2560 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2560 + -1LL) = 1024LL;
                          *((value *) $y_2560 + 0LL) = $y_2559;
                          $y_2561 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2561 + -1LL) = 1024LL;
                          *((value *) $y_2561 + 0LL) = $y_2560;
                          $y_2562 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2562 + -1LL) = 1024LL;
                          *((value *) $y_2562 + 0LL) = $y_2561;
                          $y_2563 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2563 + -1LL) = 1024LL;
                          *((value *) $y_2563 + 0LL) = $y_2562;
                          $y_2564 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2564 + -1LL) = 1024LL;
                          *((value *) $y_2564 + 0LL) = $y_2563;
                          $y_2565 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2565 + -1LL) = 1024LL;
                          *((value *) $y_2565 + 0LL) = $y_2564;
                          $y_2566 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2566 + -1LL) = 1024LL;
                          *((value *) $y_2566 + 0LL) = $y_2565;
                          $y_2567 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2567 + -1LL) = 1024LL;
                          *((value *) $y_2567 + 0LL) = $y_2566;
                          $y_2568 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2568 + -1LL) = 1024LL;
                          *((value *) $y_2568 + 0LL) = $y_2567;
                          $y_2569 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2569 + -1LL) = 1024LL;
                          *((value *) $y_2569 + 0LL) = $y_2568;
                          $y_2570 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2570 + -1LL) = 1024LL;
                          *((value *) $y_2570 + 0LL) = $y_2569;
                          $y_2571 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2571 + -1LL) = 1024LL;
                          *((value *) $y_2571 + 0LL) = $y_2570;
                          $y_2572 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2572 + -1LL) = 1024LL;
                          *((value *) $y_2572 + 0LL) = $y_2571;
                          $y_2573 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2573 + -1LL) = 1024LL;
                          *((value *) $y_2573 + 0LL) = $y_2572;
                          $y_2574 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2574 + -1LL) = 1024LL;
                          *((value *) $y_2574 + 0LL) = $y_2573;
                          $y_2575 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2575 + -1LL) = 1024LL;
                          *((value *) $y_2575 + 0LL) = $y_2574;
                          $y_2576 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2576 + -1LL) = 1024LL;
                          *((value *) $y_2576 + 0LL) = $y_2575;
                          $y_2577 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2577 + -1LL) = 1024LL;
                          *((value *) $y_2577 + 0LL) = $y_2576;
                          $y_2578 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2578 + -1LL) = 1024LL;
                          *((value *) $y_2578 + 0LL) = $y_2577;
                          $y_2579 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2579 + -1LL) = 1024LL;
                          *((value *) $y_2579 + 0LL) = $y_2578;
                          $y_2580 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_2580 + -1LL) = 1024LL;
                          *((value *) $y_2580 + 0LL) = $y_2579;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapperbogus_env_2582 =
                            1LL;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_2583 =
                            (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_2583
                             + -1LL) =
                            2048LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_2583
                             + 0LL) =
                            CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_120;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_2583
                             + 1LL) =
                            $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapperbogus_env_2582;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_Z_uncurried_known_118)
                            ($tinfo, $y_2580,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_clo_2583);
                          return $result;
                          break;

                      }
                    }
                    break;

                }
              }
              break;

          }
        } else {
          switch ($snd_type_1633 >> 1LL) {
            default:
              $CertiDDdOSdErrvaldeinval_proj_2584 =
                *((value *) $env_1603 + 3LL);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $CertiDDdOSdErrvaldeinval_proj_2584;
              break;

          }
        }
        break;
      default:
        $CertiDDdOSdErrvaldeinval_proj_2585 = *((value *) $env_1603 + 3LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $CertiDDdOSdErrvaldeinval_proj_2585;
        break;

    }
  }
}

value y_wrapper_145(struct thread_info *$tinfo, value $env_1597, value $code_1598)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1599;
  register value $type_proj_1600;
  register value $env_1601;
  register value $y_wrapper_clo_1602;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(7LL <= $limit - $alloc)) {
    *(root + 1LL) = $code_1598;
    *(root + 0LL) = $env_1597;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 7LL;
    garbage_collect($tinfo);
    $code_1598 = *(root + 1LL);
    $env_1597 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1599 =
    *((value *) $env_1597 + 0LL);
  $type_proj_1600 = *((value *) $env_1597 + 1LL);
  $env_1601 = (value) ($alloc + 1LL);
  $alloc = $alloc + 4LL;
  *((value *) $env_1601 + -1LL) = 3072LL;
  *((value *) $env_1601 + 0LL) = $code_1598;
  *((value *) $env_1601 + 1LL) = $type_proj_1600;
  *((value *) $env_1601 + 2LL) =
    $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1599;
  $y_wrapper_clo_1602 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_1602 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_1602 + 0LL) = y_wrapper_144;
  *((value *) $y_wrapper_clo_1602 + 1LL) = $env_1601;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_1602;
}

value y_wrapper_144(struct thread_info *$tinfo, value $env_1590, value $val_1591)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1592;
  register value $type_proj_1593;
  register value $code_proj_1594;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_code_1595;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_env_1596;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1592 =
    *((value *) $env_1590 + 2LL);
  $type_proj_1593 = *((value *) $env_1590 + 1LL);
  $code_proj_1594 = *((value *) $env_1590 + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_code_1595 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1592
       + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_env_1596 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_proj_1592
       + 1LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value, value, value)) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_code_1595)
    ($tinfo,
     $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_env_1596,
     $val_1591, $code_proj_1594, $type_proj_1593);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_143(struct thread_info *$tinfo, value $env_1585, value $type_1586)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_clo_1587;
  register value $env_1588;
  register value $y_wrapper_clo_1589;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(9LL <= $limit - $alloc)) {
    *(root + 1LL) = $type_1586;
    *(root + 0LL) = $env_1585;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 9LL;
    garbage_collect($tinfo);
    $type_1586 = *(root + 1LL);
    $env_1585 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_clo_1587 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_clo_1587
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_clo_1587
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_146;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_clo_1587
     + 1LL) =
    $env_1585;
  $env_1588 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $env_1588 + -1LL) = 2048LL;
  *((value *) $env_1588 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_uncurried_uncurried_clo_1587;
  *((value *) $env_1588 + 1LL) = $type_1586;
  $y_wrapper_clo_1589 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_1589 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_1589 + 0LL) = y_wrapper_145;
  *((value *) $y_wrapper_clo_1589 + 1LL) = $env_1588;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_1589;
}

value iter_uncurried_known_142(struct thread_info *$tinfo, value $a_1575, value $p_1576)
{
  struct stack_frame frame;
  value root[2];
  register value $p_1577;
  register value $y_1579;
  register value $y_1580;
  register value $p_1582;
  register value $y_1584;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($p_1576 & 1) == 0) {
    switch (*((value *) $p_1576 + -1LL) & 255LL) {
      case 0:
        $p_1577 = *((value *) $p_1576 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $p_1577;
        *(root + 0LL) = $a_1575;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_1579 =
          ((value (*)(struct thread_info *, value, value)) add_uncurried_known_114)
          ($tinfo, $a_1575, $a_1575);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $p_1577 = *(root + 1LL);
        $a_1575 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $a_1575;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1580 =
          ((value (*)(struct thread_info *, value, value)) iter_uncurried_known_142)
          ($tinfo, $y_1579, $p_1577);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $a_1575 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) add_uncurried_known_114)
          ($tinfo, $y_1580, $a_1575);
        return $result;
        break;
      default:
        $p_1582 = *((value *) $p_1576 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $p_1582;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1584 =
          ((value (*)(struct thread_info *, value, value)) add_uncurried_known_114)
          ($tinfo, $a_1575, $a_1575);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $p_1582 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) iter_uncurried_known_142)
          ($tinfo, $y_1584, $p_1582);
        return $result;
        break;

    }
  } else {
    switch ($p_1576 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $a_1575;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdto_nat_known_141(struct thread_info *$tinfo, value $z_1567)
{
  struct stack_frame frame;
  value root[1];
  register value $y_1568;
  register value $p_1569;
  register value $y_1571;
  register value $y_1572;
  register value $y_1573;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $z_1567;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $z_1567 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($z_1567 & 1) == 0) {
    switch (*((value *) $z_1567 + -1LL) & 255LL) {
      case 0:
        $p_1569 = *((value *) $z_1567 + 0LL);
        $y_1571 = 1LL;
        $y_1572 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1572 + -1LL) = 1024LL;
        *((value *) $y_1572 + 0LL) = $y_1571;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) iter_uncurried_known_142)
          ($tinfo, $y_1572, $p_1569);
        return $result;
        break;
      default:
        $y_1573 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_1573;
        break;

    }
  } else {
    switch ($z_1567 >> 1LL) {
      default:
        $y_1568 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_1568;
        break;

    }
  }
}

value of_hex_uint_acc_uncurried_known_140(struct thread_info *$tinfo, value $acc_1108, value $d_1109)
{
  struct stack_frame frame;
  value root[2];
  register value $d_1110;
  register value $y_1111;
  register value $y_1112;
  register value $y_1113;
  register value $y_1114;
  register value $y_1115;
  register value $y_1116;
  register value $y_1117;
  register value $y_1118;
  register value $y_1119;
  register value $y_1120;
  register value $y_1121;
  register value $y_1122;
  register value $y_1123;
  register value $y_1124;
  register value $y_1125;
  register value $y_1126;
  register value $y_1127;
  register value $y_1128;
  register value $y_1130;
  register value $d_1131;
  register value $y_1132;
  register value $y_1133;
  register value $y_1134;
  register value $y_1135;
  register value $y_1136;
  register value $y_1137;
  register value $y_1138;
  register value $y_1139;
  register value $y_1140;
  register value $y_1141;
  register value $y_1142;
  register value $y_1143;
  register value $y_1144;
  register value $y_1145;
  register value $y_1146;
  register value $y_1147;
  register value $y_1148;
  register value $y_1149;
  register value $y_1151;
  register value $y_1152;
  register value $d_1153;
  register value $y_1154;
  register value $y_1155;
  register value $y_1156;
  register value $y_1157;
  register value $y_1158;
  register value $y_1159;
  register value $y_1160;
  register value $y_1161;
  register value $y_1162;
  register value $y_1163;
  register value $y_1164;
  register value $y_1165;
  register value $y_1166;
  register value $y_1167;
  register value $y_1168;
  register value $y_1169;
  register value $y_1170;
  register value $y_1171;
  register value $y_1173;
  register value $y_1174;
  register value $y_1175;
  register value $d_1176;
  register value $y_1177;
  register value $y_1178;
  register value $y_1179;
  register value $y_1180;
  register value $y_1181;
  register value $y_1182;
  register value $y_1183;
  register value $y_1184;
  register value $y_1185;
  register value $y_1186;
  register value $y_1187;
  register value $y_1188;
  register value $y_1189;
  register value $y_1190;
  register value $y_1191;
  register value $y_1192;
  register value $y_1193;
  register value $y_1194;
  register value $y_1196;
  register value $y_1197;
  register value $y_1198;
  register value $y_1199;
  register value $d_1200;
  register value $y_1201;
  register value $y_1202;
  register value $y_1203;
  register value $y_1204;
  register value $y_1205;
  register value $y_1206;
  register value $y_1207;
  register value $y_1208;
  register value $y_1209;
  register value $y_1210;
  register value $y_1211;
  register value $y_1212;
  register value $y_1213;
  register value $y_1214;
  register value $y_1215;
  register value $y_1216;
  register value $y_1217;
  register value $y_1218;
  register value $y_1220;
  register value $y_1221;
  register value $y_1222;
  register value $y_1223;
  register value $y_1224;
  register value $d_1225;
  register value $y_1226;
  register value $y_1227;
  register value $y_1228;
  register value $y_1229;
  register value $y_1230;
  register value $y_1231;
  register value $y_1232;
  register value $y_1233;
  register value $y_1234;
  register value $y_1235;
  register value $y_1236;
  register value $y_1237;
  register value $y_1238;
  register value $y_1239;
  register value $y_1240;
  register value $y_1241;
  register value $y_1242;
  register value $y_1243;
  register value $y_1245;
  register value $y_1246;
  register value $y_1247;
  register value $y_1248;
  register value $y_1249;
  register value $y_1250;
  register value $d_1251;
  register value $y_1252;
  register value $y_1253;
  register value $y_1254;
  register value $y_1255;
  register value $y_1256;
  register value $y_1257;
  register value $y_1258;
  register value $y_1259;
  register value $y_1260;
  register value $y_1261;
  register value $y_1262;
  register value $y_1263;
  register value $y_1264;
  register value $y_1265;
  register value $y_1266;
  register value $y_1267;
  register value $y_1268;
  register value $y_1269;
  register value $y_1271;
  register value $y_1272;
  register value $y_1273;
  register value $y_1274;
  register value $y_1275;
  register value $y_1276;
  register value $y_1277;
  register value $d_1278;
  register value $y_1279;
  register value $y_1280;
  register value $y_1281;
  register value $y_1282;
  register value $y_1283;
  register value $y_1284;
  register value $y_1285;
  register value $y_1286;
  register value $y_1287;
  register value $y_1288;
  register value $y_1289;
  register value $y_1290;
  register value $y_1291;
  register value $y_1292;
  register value $y_1293;
  register value $y_1294;
  register value $y_1295;
  register value $y_1296;
  register value $y_1298;
  register value $y_1299;
  register value $y_1300;
  register value $y_1301;
  register value $y_1302;
  register value $y_1303;
  register value $y_1304;
  register value $y_1305;
  register value $d_1306;
  register value $y_1307;
  register value $y_1308;
  register value $y_1309;
  register value $y_1310;
  register value $y_1311;
  register value $y_1312;
  register value $y_1313;
  register value $y_1314;
  register value $y_1315;
  register value $y_1316;
  register value $y_1317;
  register value $y_1318;
  register value $y_1319;
  register value $y_1320;
  register value $y_1321;
  register value $y_1322;
  register value $y_1323;
  register value $y_1324;
  register value $y_1326;
  register value $y_1327;
  register value $y_1328;
  register value $y_1329;
  register value $y_1330;
  register value $y_1331;
  register value $y_1332;
  register value $y_1333;
  register value $y_1334;
  register value $d_1335;
  register value $y_1336;
  register value $y_1337;
  register value $y_1338;
  register value $y_1339;
  register value $y_1340;
  register value $y_1341;
  register value $y_1342;
  register value $y_1343;
  register value $y_1344;
  register value $y_1345;
  register value $y_1346;
  register value $y_1347;
  register value $y_1348;
  register value $y_1349;
  register value $y_1350;
  register value $y_1351;
  register value $y_1352;
  register value $y_1353;
  register value $y_1355;
  register value $y_1356;
  register value $y_1357;
  register value $y_1358;
  register value $y_1359;
  register value $y_1360;
  register value $y_1361;
  register value $y_1362;
  register value $y_1363;
  register value $y_1364;
  register value $d_1365;
  register value $y_1366;
  register value $y_1367;
  register value $y_1368;
  register value $y_1369;
  register value $y_1370;
  register value $y_1371;
  register value $y_1372;
  register value $y_1373;
  register value $y_1374;
  register value $y_1375;
  register value $y_1376;
  register value $y_1377;
  register value $y_1378;
  register value $y_1379;
  register value $y_1380;
  register value $y_1381;
  register value $y_1382;
  register value $y_1383;
  register value $y_1385;
  register value $y_1386;
  register value $y_1387;
  register value $y_1388;
  register value $y_1389;
  register value $y_1390;
  register value $y_1391;
  register value $y_1392;
  register value $y_1393;
  register value $y_1394;
  register value $y_1395;
  register value $d_1396;
  register value $y_1397;
  register value $y_1398;
  register value $y_1399;
  register value $y_1400;
  register value $y_1401;
  register value $y_1402;
  register value $y_1403;
  register value $y_1404;
  register value $y_1405;
  register value $y_1406;
  register value $y_1407;
  register value $y_1408;
  register value $y_1409;
  register value $y_1410;
  register value $y_1411;
  register value $y_1412;
  register value $y_1413;
  register value $y_1414;
  register value $y_1416;
  register value $y_1417;
  register value $y_1418;
  register value $y_1419;
  register value $y_1420;
  register value $y_1421;
  register value $y_1422;
  register value $y_1423;
  register value $y_1424;
  register value $y_1425;
  register value $y_1426;
  register value $y_1427;
  register value $d_1428;
  register value $y_1429;
  register value $y_1430;
  register value $y_1431;
  register value $y_1432;
  register value $y_1433;
  register value $y_1434;
  register value $y_1435;
  register value $y_1436;
  register value $y_1437;
  register value $y_1438;
  register value $y_1439;
  register value $y_1440;
  register value $y_1441;
  register value $y_1442;
  register value $y_1443;
  register value $y_1444;
  register value $y_1445;
  register value $y_1446;
  register value $y_1448;
  register value $y_1449;
  register value $y_1450;
  register value $y_1451;
  register value $y_1452;
  register value $y_1453;
  register value $y_1454;
  register value $y_1455;
  register value $y_1456;
  register value $y_1457;
  register value $y_1458;
  register value $y_1459;
  register value $y_1460;
  register value $d_1461;
  register value $y_1462;
  register value $y_1463;
  register value $y_1464;
  register value $y_1465;
  register value $y_1466;
  register value $y_1467;
  register value $y_1468;
  register value $y_1469;
  register value $y_1470;
  register value $y_1471;
  register value $y_1472;
  register value $y_1473;
  register value $y_1474;
  register value $y_1475;
  register value $y_1476;
  register value $y_1477;
  register value $y_1478;
  register value $y_1479;
  register value $y_1481;
  register value $y_1482;
  register value $y_1483;
  register value $y_1484;
  register value $y_1485;
  register value $y_1486;
  register value $y_1487;
  register value $y_1488;
  register value $y_1489;
  register value $y_1490;
  register value $y_1491;
  register value $y_1492;
  register value $y_1493;
  register value $y_1494;
  register value $d_1495;
  register value $y_1496;
  register value $y_1497;
  register value $y_1498;
  register value $y_1499;
  register value $y_1500;
  register value $y_1501;
  register value $y_1502;
  register value $y_1503;
  register value $y_1504;
  register value $y_1505;
  register value $y_1506;
  register value $y_1507;
  register value $y_1508;
  register value $y_1509;
  register value $y_1510;
  register value $y_1511;
  register value $y_1512;
  register value $y_1513;
  register value $y_1515;
  register value $y_1516;
  register value $y_1517;
  register value $y_1518;
  register value $y_1519;
  register value $y_1520;
  register value $y_1521;
  register value $y_1522;
  register value $y_1523;
  register value $y_1524;
  register value $y_1525;
  register value $y_1526;
  register value $y_1527;
  register value $y_1528;
  register value $y_1529;
  register value $d_1530;
  register value $y_1531;
  register value $y_1532;
  register value $y_1533;
  register value $y_1534;
  register value $y_1535;
  register value $y_1536;
  register value $y_1537;
  register value $y_1538;
  register value $y_1539;
  register value $y_1540;
  register value $y_1541;
  register value $y_1542;
  register value $y_1543;
  register value $y_1544;
  register value $y_1545;
  register value $y_1546;
  register value $y_1547;
  register value $y_1548;
  register value $y_1550;
  register value $y_1551;
  register value $y_1552;
  register value $y_1553;
  register value $y_1554;
  register value $y_1555;
  register value $y_1556;
  register value $y_1557;
  register value $y_1558;
  register value $y_1559;
  register value $y_1560;
  register value $y_1561;
  register value $y_1562;
  register value $y_1563;
  register value $y_1564;
  register value $y_1565;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(32LL <= $limit - $alloc)) {
    *(root + 1LL) = $d_1109;
    *(root + 0LL) = $acc_1108;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 32LL;
    garbage_collect($tinfo);
    $d_1109 = *(root + 1LL);
    $acc_1108 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($d_1109 & 1) == 0) {
    switch (*((value *) $d_1109 + -1LL) & 255LL) {
      case 0:
        $d_1110 = *((value *) $d_1109 + 0LL);
        $y_1111 = 1LL;
        $y_1112 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1112 + -1LL) = 1024LL;
        *((value *) $y_1112 + 0LL) = $y_1111;
        $y_1113 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1113 + -1LL) = 1024LL;
        *((value *) $y_1113 + 0LL) = $y_1112;
        $y_1114 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1114 + -1LL) = 1024LL;
        *((value *) $y_1114 + 0LL) = $y_1113;
        $y_1115 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1115 + -1LL) = 1024LL;
        *((value *) $y_1115 + 0LL) = $y_1114;
        $y_1116 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1116 + -1LL) = 1024LL;
        *((value *) $y_1116 + 0LL) = $y_1115;
        $y_1117 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1117 + -1LL) = 1024LL;
        *((value *) $y_1117 + 0LL) = $y_1116;
        $y_1118 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1118 + -1LL) = 1024LL;
        *((value *) $y_1118 + 0LL) = $y_1117;
        $y_1119 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1119 + -1LL) = 1024LL;
        *((value *) $y_1119 + 0LL) = $y_1118;
        $y_1120 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1120 + -1LL) = 1024LL;
        *((value *) $y_1120 + 0LL) = $y_1119;
        $y_1121 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1121 + -1LL) = 1024LL;
        *((value *) $y_1121 + 0LL) = $y_1120;
        $y_1122 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1122 + -1LL) = 1024LL;
        *((value *) $y_1122 + 0LL) = $y_1121;
        $y_1123 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1123 + -1LL) = 1024LL;
        *((value *) $y_1123 + 0LL) = $y_1122;
        $y_1124 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1124 + -1LL) = 1024LL;
        *((value *) $y_1124 + 0LL) = $y_1123;
        $y_1125 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1125 + -1LL) = 1024LL;
        *((value *) $y_1125 + 0LL) = $y_1124;
        $y_1126 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1126 + -1LL) = 1024LL;
        *((value *) $y_1126 + 0LL) = $y_1125;
        $y_1127 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1127 + -1LL) = 1024LL;
        *((value *) $y_1127 + 0LL) = $y_1126;
        $y_1128 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1110;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1130 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1127, $y_1128);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $d_1110 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1130, $d_1110);
        return $result;
        break;
      case 1:
        $d_1131 = *((value *) $d_1109 + 0LL);
        $y_1132 = 1LL;
        $y_1133 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1133 + -1LL) = 1024LL;
        *((value *) $y_1133 + 0LL) = $y_1132;
        $y_1134 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1134 + -1LL) = 1024LL;
        *((value *) $y_1134 + 0LL) = $y_1133;
        $y_1135 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1135 + -1LL) = 1024LL;
        *((value *) $y_1135 + 0LL) = $y_1134;
        $y_1136 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1136 + -1LL) = 1024LL;
        *((value *) $y_1136 + 0LL) = $y_1135;
        $y_1137 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1137 + -1LL) = 1024LL;
        *((value *) $y_1137 + 0LL) = $y_1136;
        $y_1138 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1138 + -1LL) = 1024LL;
        *((value *) $y_1138 + 0LL) = $y_1137;
        $y_1139 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1139 + -1LL) = 1024LL;
        *((value *) $y_1139 + 0LL) = $y_1138;
        $y_1140 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1140 + -1LL) = 1024LL;
        *((value *) $y_1140 + 0LL) = $y_1139;
        $y_1141 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1141 + -1LL) = 1024LL;
        *((value *) $y_1141 + 0LL) = $y_1140;
        $y_1142 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1142 + -1LL) = 1024LL;
        *((value *) $y_1142 + 0LL) = $y_1141;
        $y_1143 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1143 + -1LL) = 1024LL;
        *((value *) $y_1143 + 0LL) = $y_1142;
        $y_1144 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1144 + -1LL) = 1024LL;
        *((value *) $y_1144 + 0LL) = $y_1143;
        $y_1145 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1145 + -1LL) = 1024LL;
        *((value *) $y_1145 + 0LL) = $y_1144;
        $y_1146 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1146 + -1LL) = 1024LL;
        *((value *) $y_1146 + 0LL) = $y_1145;
        $y_1147 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1147 + -1LL) = 1024LL;
        *((value *) $y_1147 + 0LL) = $y_1146;
        $y_1148 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1148 + -1LL) = 1024LL;
        *((value *) $y_1148 + 0LL) = $y_1147;
        $y_1149 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1131;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1151 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1148, $y_1149);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1151;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_1151 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1131 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1152 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1152 + -1LL) = 1024LL;
        *((value *) $y_1152 + 0LL) = $y_1151;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1152, $d_1131);
        return $result;
        break;
      case 2:
        $d_1153 = *((value *) $d_1109 + 0LL);
        $y_1154 = 1LL;
        $y_1155 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1155 + -1LL) = 1024LL;
        *((value *) $y_1155 + 0LL) = $y_1154;
        $y_1156 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1156 + -1LL) = 1024LL;
        *((value *) $y_1156 + 0LL) = $y_1155;
        $y_1157 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1157 + -1LL) = 1024LL;
        *((value *) $y_1157 + 0LL) = $y_1156;
        $y_1158 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1158 + -1LL) = 1024LL;
        *((value *) $y_1158 + 0LL) = $y_1157;
        $y_1159 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1159 + -1LL) = 1024LL;
        *((value *) $y_1159 + 0LL) = $y_1158;
        $y_1160 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1160 + -1LL) = 1024LL;
        *((value *) $y_1160 + 0LL) = $y_1159;
        $y_1161 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1161 + -1LL) = 1024LL;
        *((value *) $y_1161 + 0LL) = $y_1160;
        $y_1162 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1162 + -1LL) = 1024LL;
        *((value *) $y_1162 + 0LL) = $y_1161;
        $y_1163 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1163 + -1LL) = 1024LL;
        *((value *) $y_1163 + 0LL) = $y_1162;
        $y_1164 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1164 + -1LL) = 1024LL;
        *((value *) $y_1164 + 0LL) = $y_1163;
        $y_1165 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1165 + -1LL) = 1024LL;
        *((value *) $y_1165 + 0LL) = $y_1164;
        $y_1166 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1166 + -1LL) = 1024LL;
        *((value *) $y_1166 + 0LL) = $y_1165;
        $y_1167 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1167 + -1LL) = 1024LL;
        *((value *) $y_1167 + 0LL) = $y_1166;
        $y_1168 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1168 + -1LL) = 1024LL;
        *((value *) $y_1168 + 0LL) = $y_1167;
        $y_1169 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1169 + -1LL) = 1024LL;
        *((value *) $y_1169 + 0LL) = $y_1168;
        $y_1170 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1170 + -1LL) = 1024LL;
        *((value *) $y_1170 + 0LL) = $y_1169;
        $y_1171 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1153;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1173 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1170, $y_1171);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(4LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1173;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 4LL;
          garbage_collect($tinfo);
          $y_1173 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1153 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1174 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1174 + -1LL) = 1024LL;
        *((value *) $y_1174 + 0LL) = $y_1173;
        $y_1175 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1175 + -1LL) = 1024LL;
        *((value *) $y_1175 + 0LL) = $y_1174;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1175, $d_1153);
        return $result;
        break;
      case 3:
        $d_1176 = *((value *) $d_1109 + 0LL);
        $y_1177 = 1LL;
        $y_1178 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1178 + -1LL) = 1024LL;
        *((value *) $y_1178 + 0LL) = $y_1177;
        $y_1179 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1179 + -1LL) = 1024LL;
        *((value *) $y_1179 + 0LL) = $y_1178;
        $y_1180 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1180 + -1LL) = 1024LL;
        *((value *) $y_1180 + 0LL) = $y_1179;
        $y_1181 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1181 + -1LL) = 1024LL;
        *((value *) $y_1181 + 0LL) = $y_1180;
        $y_1182 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1182 + -1LL) = 1024LL;
        *((value *) $y_1182 + 0LL) = $y_1181;
        $y_1183 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1183 + -1LL) = 1024LL;
        *((value *) $y_1183 + 0LL) = $y_1182;
        $y_1184 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1184 + -1LL) = 1024LL;
        *((value *) $y_1184 + 0LL) = $y_1183;
        $y_1185 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1185 + -1LL) = 1024LL;
        *((value *) $y_1185 + 0LL) = $y_1184;
        $y_1186 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1186 + -1LL) = 1024LL;
        *((value *) $y_1186 + 0LL) = $y_1185;
        $y_1187 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1187 + -1LL) = 1024LL;
        *((value *) $y_1187 + 0LL) = $y_1186;
        $y_1188 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1188 + -1LL) = 1024LL;
        *((value *) $y_1188 + 0LL) = $y_1187;
        $y_1189 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1189 + -1LL) = 1024LL;
        *((value *) $y_1189 + 0LL) = $y_1188;
        $y_1190 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1190 + -1LL) = 1024LL;
        *((value *) $y_1190 + 0LL) = $y_1189;
        $y_1191 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1191 + -1LL) = 1024LL;
        *((value *) $y_1191 + 0LL) = $y_1190;
        $y_1192 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1192 + -1LL) = 1024LL;
        *((value *) $y_1192 + 0LL) = $y_1191;
        $y_1193 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1193 + -1LL) = 1024LL;
        *((value *) $y_1193 + 0LL) = $y_1192;
        $y_1194 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1176;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1196 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1193, $y_1194);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(6LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1196;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 6LL;
          garbage_collect($tinfo);
          $y_1196 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1176 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1197 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1197 + -1LL) = 1024LL;
        *((value *) $y_1197 + 0LL) = $y_1196;
        $y_1198 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1198 + -1LL) = 1024LL;
        *((value *) $y_1198 + 0LL) = $y_1197;
        $y_1199 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1199 + -1LL) = 1024LL;
        *((value *) $y_1199 + 0LL) = $y_1198;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1199, $d_1176);
        return $result;
        break;
      case 4:
        $d_1200 = *((value *) $d_1109 + 0LL);
        $y_1201 = 1LL;
        $y_1202 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1202 + -1LL) = 1024LL;
        *((value *) $y_1202 + 0LL) = $y_1201;
        $y_1203 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1203 + -1LL) = 1024LL;
        *((value *) $y_1203 + 0LL) = $y_1202;
        $y_1204 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1204 + -1LL) = 1024LL;
        *((value *) $y_1204 + 0LL) = $y_1203;
        $y_1205 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1205 + -1LL) = 1024LL;
        *((value *) $y_1205 + 0LL) = $y_1204;
        $y_1206 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1206 + -1LL) = 1024LL;
        *((value *) $y_1206 + 0LL) = $y_1205;
        $y_1207 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1207 + -1LL) = 1024LL;
        *((value *) $y_1207 + 0LL) = $y_1206;
        $y_1208 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1208 + -1LL) = 1024LL;
        *((value *) $y_1208 + 0LL) = $y_1207;
        $y_1209 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1209 + -1LL) = 1024LL;
        *((value *) $y_1209 + 0LL) = $y_1208;
        $y_1210 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1210 + -1LL) = 1024LL;
        *((value *) $y_1210 + 0LL) = $y_1209;
        $y_1211 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1211 + -1LL) = 1024LL;
        *((value *) $y_1211 + 0LL) = $y_1210;
        $y_1212 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1212 + -1LL) = 1024LL;
        *((value *) $y_1212 + 0LL) = $y_1211;
        $y_1213 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1213 + -1LL) = 1024LL;
        *((value *) $y_1213 + 0LL) = $y_1212;
        $y_1214 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1214 + -1LL) = 1024LL;
        *((value *) $y_1214 + 0LL) = $y_1213;
        $y_1215 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1215 + -1LL) = 1024LL;
        *((value *) $y_1215 + 0LL) = $y_1214;
        $y_1216 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1216 + -1LL) = 1024LL;
        *((value *) $y_1216 + 0LL) = $y_1215;
        $y_1217 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1217 + -1LL) = 1024LL;
        *((value *) $y_1217 + 0LL) = $y_1216;
        $y_1218 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1200;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1220 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1217, $y_1218);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(8LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1220;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 8LL;
          garbage_collect($tinfo);
          $y_1220 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1200 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1221 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1221 + -1LL) = 1024LL;
        *((value *) $y_1221 + 0LL) = $y_1220;
        $y_1222 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1222 + -1LL) = 1024LL;
        *((value *) $y_1222 + 0LL) = $y_1221;
        $y_1223 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1223 + -1LL) = 1024LL;
        *((value *) $y_1223 + 0LL) = $y_1222;
        $y_1224 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1224 + -1LL) = 1024LL;
        *((value *) $y_1224 + 0LL) = $y_1223;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1224, $d_1200);
        return $result;
        break;
      case 5:
        $d_1225 = *((value *) $d_1109 + 0LL);
        $y_1226 = 1LL;
        $y_1227 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1227 + -1LL) = 1024LL;
        *((value *) $y_1227 + 0LL) = $y_1226;
        $y_1228 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1228 + -1LL) = 1024LL;
        *((value *) $y_1228 + 0LL) = $y_1227;
        $y_1229 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1229 + -1LL) = 1024LL;
        *((value *) $y_1229 + 0LL) = $y_1228;
        $y_1230 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1230 + -1LL) = 1024LL;
        *((value *) $y_1230 + 0LL) = $y_1229;
        $y_1231 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1231 + -1LL) = 1024LL;
        *((value *) $y_1231 + 0LL) = $y_1230;
        $y_1232 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1232 + -1LL) = 1024LL;
        *((value *) $y_1232 + 0LL) = $y_1231;
        $y_1233 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1233 + -1LL) = 1024LL;
        *((value *) $y_1233 + 0LL) = $y_1232;
        $y_1234 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1234 + -1LL) = 1024LL;
        *((value *) $y_1234 + 0LL) = $y_1233;
        $y_1235 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1235 + -1LL) = 1024LL;
        *((value *) $y_1235 + 0LL) = $y_1234;
        $y_1236 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1236 + -1LL) = 1024LL;
        *((value *) $y_1236 + 0LL) = $y_1235;
        $y_1237 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1237 + -1LL) = 1024LL;
        *((value *) $y_1237 + 0LL) = $y_1236;
        $y_1238 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1238 + -1LL) = 1024LL;
        *((value *) $y_1238 + 0LL) = $y_1237;
        $y_1239 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1239 + -1LL) = 1024LL;
        *((value *) $y_1239 + 0LL) = $y_1238;
        $y_1240 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1240 + -1LL) = 1024LL;
        *((value *) $y_1240 + 0LL) = $y_1239;
        $y_1241 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1241 + -1LL) = 1024LL;
        *((value *) $y_1241 + 0LL) = $y_1240;
        $y_1242 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1242 + -1LL) = 1024LL;
        *((value *) $y_1242 + 0LL) = $y_1241;
        $y_1243 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1225;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1245 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1242, $y_1243);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(10LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1245;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 10LL;
          garbage_collect($tinfo);
          $y_1245 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1225 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1246 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1246 + -1LL) = 1024LL;
        *((value *) $y_1246 + 0LL) = $y_1245;
        $y_1247 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1247 + -1LL) = 1024LL;
        *((value *) $y_1247 + 0LL) = $y_1246;
        $y_1248 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1248 + -1LL) = 1024LL;
        *((value *) $y_1248 + 0LL) = $y_1247;
        $y_1249 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1249 + -1LL) = 1024LL;
        *((value *) $y_1249 + 0LL) = $y_1248;
        $y_1250 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1250 + -1LL) = 1024LL;
        *((value *) $y_1250 + 0LL) = $y_1249;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1250, $d_1225);
        return $result;
        break;
      case 6:
        $d_1251 = *((value *) $d_1109 + 0LL);
        $y_1252 = 1LL;
        $y_1253 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1253 + -1LL) = 1024LL;
        *((value *) $y_1253 + 0LL) = $y_1252;
        $y_1254 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1254 + -1LL) = 1024LL;
        *((value *) $y_1254 + 0LL) = $y_1253;
        $y_1255 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1255 + -1LL) = 1024LL;
        *((value *) $y_1255 + 0LL) = $y_1254;
        $y_1256 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1256 + -1LL) = 1024LL;
        *((value *) $y_1256 + 0LL) = $y_1255;
        $y_1257 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1257 + -1LL) = 1024LL;
        *((value *) $y_1257 + 0LL) = $y_1256;
        $y_1258 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1258 + -1LL) = 1024LL;
        *((value *) $y_1258 + 0LL) = $y_1257;
        $y_1259 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1259 + -1LL) = 1024LL;
        *((value *) $y_1259 + 0LL) = $y_1258;
        $y_1260 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1260 + -1LL) = 1024LL;
        *((value *) $y_1260 + 0LL) = $y_1259;
        $y_1261 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1261 + -1LL) = 1024LL;
        *((value *) $y_1261 + 0LL) = $y_1260;
        $y_1262 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1262 + -1LL) = 1024LL;
        *((value *) $y_1262 + 0LL) = $y_1261;
        $y_1263 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1263 + -1LL) = 1024LL;
        *((value *) $y_1263 + 0LL) = $y_1262;
        $y_1264 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1264 + -1LL) = 1024LL;
        *((value *) $y_1264 + 0LL) = $y_1263;
        $y_1265 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1265 + -1LL) = 1024LL;
        *((value *) $y_1265 + 0LL) = $y_1264;
        $y_1266 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1266 + -1LL) = 1024LL;
        *((value *) $y_1266 + 0LL) = $y_1265;
        $y_1267 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1267 + -1LL) = 1024LL;
        *((value *) $y_1267 + 0LL) = $y_1266;
        $y_1268 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1268 + -1LL) = 1024LL;
        *((value *) $y_1268 + 0LL) = $y_1267;
        $y_1269 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1251;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1271 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1268, $y_1269);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(12LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1271;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 12LL;
          garbage_collect($tinfo);
          $y_1271 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1251 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1272 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1272 + -1LL) = 1024LL;
        *((value *) $y_1272 + 0LL) = $y_1271;
        $y_1273 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1273 + -1LL) = 1024LL;
        *((value *) $y_1273 + 0LL) = $y_1272;
        $y_1274 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1274 + -1LL) = 1024LL;
        *((value *) $y_1274 + 0LL) = $y_1273;
        $y_1275 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1275 + -1LL) = 1024LL;
        *((value *) $y_1275 + 0LL) = $y_1274;
        $y_1276 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1276 + -1LL) = 1024LL;
        *((value *) $y_1276 + 0LL) = $y_1275;
        $y_1277 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1277 + -1LL) = 1024LL;
        *((value *) $y_1277 + 0LL) = $y_1276;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1277, $d_1251);
        return $result;
        break;
      case 7:
        $d_1278 = *((value *) $d_1109 + 0LL);
        $y_1279 = 1LL;
        $y_1280 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1280 + -1LL) = 1024LL;
        *((value *) $y_1280 + 0LL) = $y_1279;
        $y_1281 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1281 + -1LL) = 1024LL;
        *((value *) $y_1281 + 0LL) = $y_1280;
        $y_1282 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1282 + -1LL) = 1024LL;
        *((value *) $y_1282 + 0LL) = $y_1281;
        $y_1283 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1283 + -1LL) = 1024LL;
        *((value *) $y_1283 + 0LL) = $y_1282;
        $y_1284 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1284 + -1LL) = 1024LL;
        *((value *) $y_1284 + 0LL) = $y_1283;
        $y_1285 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1285 + -1LL) = 1024LL;
        *((value *) $y_1285 + 0LL) = $y_1284;
        $y_1286 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1286 + -1LL) = 1024LL;
        *((value *) $y_1286 + 0LL) = $y_1285;
        $y_1287 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1287 + -1LL) = 1024LL;
        *((value *) $y_1287 + 0LL) = $y_1286;
        $y_1288 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1288 + -1LL) = 1024LL;
        *((value *) $y_1288 + 0LL) = $y_1287;
        $y_1289 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1289 + -1LL) = 1024LL;
        *((value *) $y_1289 + 0LL) = $y_1288;
        $y_1290 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1290 + -1LL) = 1024LL;
        *((value *) $y_1290 + 0LL) = $y_1289;
        $y_1291 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1291 + -1LL) = 1024LL;
        *((value *) $y_1291 + 0LL) = $y_1290;
        $y_1292 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1292 + -1LL) = 1024LL;
        *((value *) $y_1292 + 0LL) = $y_1291;
        $y_1293 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1293 + -1LL) = 1024LL;
        *((value *) $y_1293 + 0LL) = $y_1292;
        $y_1294 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1294 + -1LL) = 1024LL;
        *((value *) $y_1294 + 0LL) = $y_1293;
        $y_1295 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1295 + -1LL) = 1024LL;
        *((value *) $y_1295 + 0LL) = $y_1294;
        $y_1296 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1278;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1298 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1295, $y_1296);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(14LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1298;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 14LL;
          garbage_collect($tinfo);
          $y_1298 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1278 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1299 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1299 + -1LL) = 1024LL;
        *((value *) $y_1299 + 0LL) = $y_1298;
        $y_1300 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1300 + -1LL) = 1024LL;
        *((value *) $y_1300 + 0LL) = $y_1299;
        $y_1301 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1301 + -1LL) = 1024LL;
        *((value *) $y_1301 + 0LL) = $y_1300;
        $y_1302 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1302 + -1LL) = 1024LL;
        *((value *) $y_1302 + 0LL) = $y_1301;
        $y_1303 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1303 + -1LL) = 1024LL;
        *((value *) $y_1303 + 0LL) = $y_1302;
        $y_1304 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1304 + -1LL) = 1024LL;
        *((value *) $y_1304 + 0LL) = $y_1303;
        $y_1305 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1305 + -1LL) = 1024LL;
        *((value *) $y_1305 + 0LL) = $y_1304;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1305, $d_1278);
        return $result;
        break;
      case 8:
        $d_1306 = *((value *) $d_1109 + 0LL);
        $y_1307 = 1LL;
        $y_1308 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1308 + -1LL) = 1024LL;
        *((value *) $y_1308 + 0LL) = $y_1307;
        $y_1309 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1309 + -1LL) = 1024LL;
        *((value *) $y_1309 + 0LL) = $y_1308;
        $y_1310 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1310 + -1LL) = 1024LL;
        *((value *) $y_1310 + 0LL) = $y_1309;
        $y_1311 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1311 + -1LL) = 1024LL;
        *((value *) $y_1311 + 0LL) = $y_1310;
        $y_1312 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1312 + -1LL) = 1024LL;
        *((value *) $y_1312 + 0LL) = $y_1311;
        $y_1313 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1313 + -1LL) = 1024LL;
        *((value *) $y_1313 + 0LL) = $y_1312;
        $y_1314 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1314 + -1LL) = 1024LL;
        *((value *) $y_1314 + 0LL) = $y_1313;
        $y_1315 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1315 + -1LL) = 1024LL;
        *((value *) $y_1315 + 0LL) = $y_1314;
        $y_1316 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1316 + -1LL) = 1024LL;
        *((value *) $y_1316 + 0LL) = $y_1315;
        $y_1317 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1317 + -1LL) = 1024LL;
        *((value *) $y_1317 + 0LL) = $y_1316;
        $y_1318 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1318 + -1LL) = 1024LL;
        *((value *) $y_1318 + 0LL) = $y_1317;
        $y_1319 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1319 + -1LL) = 1024LL;
        *((value *) $y_1319 + 0LL) = $y_1318;
        $y_1320 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1320 + -1LL) = 1024LL;
        *((value *) $y_1320 + 0LL) = $y_1319;
        $y_1321 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1321 + -1LL) = 1024LL;
        *((value *) $y_1321 + 0LL) = $y_1320;
        $y_1322 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1322 + -1LL) = 1024LL;
        *((value *) $y_1322 + 0LL) = $y_1321;
        $y_1323 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1323 + -1LL) = 1024LL;
        *((value *) $y_1323 + 0LL) = $y_1322;
        $y_1324 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1306;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1326 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1323, $y_1324);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(16LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1326;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 16LL;
          garbage_collect($tinfo);
          $y_1326 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1306 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1327 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1327 + -1LL) = 1024LL;
        *((value *) $y_1327 + 0LL) = $y_1326;
        $y_1328 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1328 + -1LL) = 1024LL;
        *((value *) $y_1328 + 0LL) = $y_1327;
        $y_1329 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1329 + -1LL) = 1024LL;
        *((value *) $y_1329 + 0LL) = $y_1328;
        $y_1330 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1330 + -1LL) = 1024LL;
        *((value *) $y_1330 + 0LL) = $y_1329;
        $y_1331 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1331 + -1LL) = 1024LL;
        *((value *) $y_1331 + 0LL) = $y_1330;
        $y_1332 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1332 + -1LL) = 1024LL;
        *((value *) $y_1332 + 0LL) = $y_1331;
        $y_1333 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1333 + -1LL) = 1024LL;
        *((value *) $y_1333 + 0LL) = $y_1332;
        $y_1334 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1334 + -1LL) = 1024LL;
        *((value *) $y_1334 + 0LL) = $y_1333;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1334, $d_1306);
        return $result;
        break;
      case 9:
        $d_1335 = *((value *) $d_1109 + 0LL);
        $y_1336 = 1LL;
        $y_1337 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1337 + -1LL) = 1024LL;
        *((value *) $y_1337 + 0LL) = $y_1336;
        $y_1338 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1338 + -1LL) = 1024LL;
        *((value *) $y_1338 + 0LL) = $y_1337;
        $y_1339 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1339 + -1LL) = 1024LL;
        *((value *) $y_1339 + 0LL) = $y_1338;
        $y_1340 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1340 + -1LL) = 1024LL;
        *((value *) $y_1340 + 0LL) = $y_1339;
        $y_1341 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1341 + -1LL) = 1024LL;
        *((value *) $y_1341 + 0LL) = $y_1340;
        $y_1342 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1342 + -1LL) = 1024LL;
        *((value *) $y_1342 + 0LL) = $y_1341;
        $y_1343 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1343 + -1LL) = 1024LL;
        *((value *) $y_1343 + 0LL) = $y_1342;
        $y_1344 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1344 + -1LL) = 1024LL;
        *((value *) $y_1344 + 0LL) = $y_1343;
        $y_1345 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1345 + -1LL) = 1024LL;
        *((value *) $y_1345 + 0LL) = $y_1344;
        $y_1346 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1346 + -1LL) = 1024LL;
        *((value *) $y_1346 + 0LL) = $y_1345;
        $y_1347 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1347 + -1LL) = 1024LL;
        *((value *) $y_1347 + 0LL) = $y_1346;
        $y_1348 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1348 + -1LL) = 1024LL;
        *((value *) $y_1348 + 0LL) = $y_1347;
        $y_1349 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1349 + -1LL) = 1024LL;
        *((value *) $y_1349 + 0LL) = $y_1348;
        $y_1350 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1350 + -1LL) = 1024LL;
        *((value *) $y_1350 + 0LL) = $y_1349;
        $y_1351 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1351 + -1LL) = 1024LL;
        *((value *) $y_1351 + 0LL) = $y_1350;
        $y_1352 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1352 + -1LL) = 1024LL;
        *((value *) $y_1352 + 0LL) = $y_1351;
        $y_1353 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1335;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1355 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1352, $y_1353);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(18LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1355;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 18LL;
          garbage_collect($tinfo);
          $y_1355 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1335 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1356 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1356 + -1LL) = 1024LL;
        *((value *) $y_1356 + 0LL) = $y_1355;
        $y_1357 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1357 + -1LL) = 1024LL;
        *((value *) $y_1357 + 0LL) = $y_1356;
        $y_1358 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1358 + -1LL) = 1024LL;
        *((value *) $y_1358 + 0LL) = $y_1357;
        $y_1359 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1359 + -1LL) = 1024LL;
        *((value *) $y_1359 + 0LL) = $y_1358;
        $y_1360 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1360 + -1LL) = 1024LL;
        *((value *) $y_1360 + 0LL) = $y_1359;
        $y_1361 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1361 + -1LL) = 1024LL;
        *((value *) $y_1361 + 0LL) = $y_1360;
        $y_1362 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1362 + -1LL) = 1024LL;
        *((value *) $y_1362 + 0LL) = $y_1361;
        $y_1363 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1363 + -1LL) = 1024LL;
        *((value *) $y_1363 + 0LL) = $y_1362;
        $y_1364 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1364 + -1LL) = 1024LL;
        *((value *) $y_1364 + 0LL) = $y_1363;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1364, $d_1335);
        return $result;
        break;
      case 10:
        $d_1365 = *((value *) $d_1109 + 0LL);
        $y_1366 = 1LL;
        $y_1367 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1367 + -1LL) = 1024LL;
        *((value *) $y_1367 + 0LL) = $y_1366;
        $y_1368 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1368 + -1LL) = 1024LL;
        *((value *) $y_1368 + 0LL) = $y_1367;
        $y_1369 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1369 + -1LL) = 1024LL;
        *((value *) $y_1369 + 0LL) = $y_1368;
        $y_1370 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1370 + -1LL) = 1024LL;
        *((value *) $y_1370 + 0LL) = $y_1369;
        $y_1371 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1371 + -1LL) = 1024LL;
        *((value *) $y_1371 + 0LL) = $y_1370;
        $y_1372 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1372 + -1LL) = 1024LL;
        *((value *) $y_1372 + 0LL) = $y_1371;
        $y_1373 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1373 + -1LL) = 1024LL;
        *((value *) $y_1373 + 0LL) = $y_1372;
        $y_1374 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1374 + -1LL) = 1024LL;
        *((value *) $y_1374 + 0LL) = $y_1373;
        $y_1375 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1375 + -1LL) = 1024LL;
        *((value *) $y_1375 + 0LL) = $y_1374;
        $y_1376 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1376 + -1LL) = 1024LL;
        *((value *) $y_1376 + 0LL) = $y_1375;
        $y_1377 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1377 + -1LL) = 1024LL;
        *((value *) $y_1377 + 0LL) = $y_1376;
        $y_1378 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1378 + -1LL) = 1024LL;
        *((value *) $y_1378 + 0LL) = $y_1377;
        $y_1379 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1379 + -1LL) = 1024LL;
        *((value *) $y_1379 + 0LL) = $y_1378;
        $y_1380 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1380 + -1LL) = 1024LL;
        *((value *) $y_1380 + 0LL) = $y_1379;
        $y_1381 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1381 + -1LL) = 1024LL;
        *((value *) $y_1381 + 0LL) = $y_1380;
        $y_1382 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1382 + -1LL) = 1024LL;
        *((value *) $y_1382 + 0LL) = $y_1381;
        $y_1383 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1365;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1385 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1382, $y_1383);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(20LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1385;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 20LL;
          garbage_collect($tinfo);
          $y_1385 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1365 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1386 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1386 + -1LL) = 1024LL;
        *((value *) $y_1386 + 0LL) = $y_1385;
        $y_1387 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1387 + -1LL) = 1024LL;
        *((value *) $y_1387 + 0LL) = $y_1386;
        $y_1388 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1388 + -1LL) = 1024LL;
        *((value *) $y_1388 + 0LL) = $y_1387;
        $y_1389 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1389 + -1LL) = 1024LL;
        *((value *) $y_1389 + 0LL) = $y_1388;
        $y_1390 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1390 + -1LL) = 1024LL;
        *((value *) $y_1390 + 0LL) = $y_1389;
        $y_1391 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1391 + -1LL) = 1024LL;
        *((value *) $y_1391 + 0LL) = $y_1390;
        $y_1392 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1392 + -1LL) = 1024LL;
        *((value *) $y_1392 + 0LL) = $y_1391;
        $y_1393 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1393 + -1LL) = 1024LL;
        *((value *) $y_1393 + 0LL) = $y_1392;
        $y_1394 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1394 + -1LL) = 1024LL;
        *((value *) $y_1394 + 0LL) = $y_1393;
        $y_1395 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1395 + -1LL) = 1024LL;
        *((value *) $y_1395 + 0LL) = $y_1394;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1395, $d_1365);
        return $result;
        break;
      case 11:
        $d_1396 = *((value *) $d_1109 + 0LL);
        $y_1397 = 1LL;
        $y_1398 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1398 + -1LL) = 1024LL;
        *((value *) $y_1398 + 0LL) = $y_1397;
        $y_1399 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1399 + -1LL) = 1024LL;
        *((value *) $y_1399 + 0LL) = $y_1398;
        $y_1400 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1400 + -1LL) = 1024LL;
        *((value *) $y_1400 + 0LL) = $y_1399;
        $y_1401 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1401 + -1LL) = 1024LL;
        *((value *) $y_1401 + 0LL) = $y_1400;
        $y_1402 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1402 + -1LL) = 1024LL;
        *((value *) $y_1402 + 0LL) = $y_1401;
        $y_1403 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1403 + -1LL) = 1024LL;
        *((value *) $y_1403 + 0LL) = $y_1402;
        $y_1404 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1404 + -1LL) = 1024LL;
        *((value *) $y_1404 + 0LL) = $y_1403;
        $y_1405 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1405 + -1LL) = 1024LL;
        *((value *) $y_1405 + 0LL) = $y_1404;
        $y_1406 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1406 + -1LL) = 1024LL;
        *((value *) $y_1406 + 0LL) = $y_1405;
        $y_1407 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1407 + -1LL) = 1024LL;
        *((value *) $y_1407 + 0LL) = $y_1406;
        $y_1408 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1408 + -1LL) = 1024LL;
        *((value *) $y_1408 + 0LL) = $y_1407;
        $y_1409 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1409 + -1LL) = 1024LL;
        *((value *) $y_1409 + 0LL) = $y_1408;
        $y_1410 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1410 + -1LL) = 1024LL;
        *((value *) $y_1410 + 0LL) = $y_1409;
        $y_1411 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1411 + -1LL) = 1024LL;
        *((value *) $y_1411 + 0LL) = $y_1410;
        $y_1412 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1412 + -1LL) = 1024LL;
        *((value *) $y_1412 + 0LL) = $y_1411;
        $y_1413 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1413 + -1LL) = 1024LL;
        *((value *) $y_1413 + 0LL) = $y_1412;
        $y_1414 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1396;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1416 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1413, $y_1414);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(22LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1416;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 22LL;
          garbage_collect($tinfo);
          $y_1416 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1396 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1417 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1417 + -1LL) = 1024LL;
        *((value *) $y_1417 + 0LL) = $y_1416;
        $y_1418 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1418 + -1LL) = 1024LL;
        *((value *) $y_1418 + 0LL) = $y_1417;
        $y_1419 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1419 + -1LL) = 1024LL;
        *((value *) $y_1419 + 0LL) = $y_1418;
        $y_1420 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1420 + -1LL) = 1024LL;
        *((value *) $y_1420 + 0LL) = $y_1419;
        $y_1421 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1421 + -1LL) = 1024LL;
        *((value *) $y_1421 + 0LL) = $y_1420;
        $y_1422 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1422 + -1LL) = 1024LL;
        *((value *) $y_1422 + 0LL) = $y_1421;
        $y_1423 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1423 + -1LL) = 1024LL;
        *((value *) $y_1423 + 0LL) = $y_1422;
        $y_1424 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1424 + -1LL) = 1024LL;
        *((value *) $y_1424 + 0LL) = $y_1423;
        $y_1425 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1425 + -1LL) = 1024LL;
        *((value *) $y_1425 + 0LL) = $y_1424;
        $y_1426 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1426 + -1LL) = 1024LL;
        *((value *) $y_1426 + 0LL) = $y_1425;
        $y_1427 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1427 + -1LL) = 1024LL;
        *((value *) $y_1427 + 0LL) = $y_1426;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1427, $d_1396);
        return $result;
        break;
      case 12:
        $d_1428 = *((value *) $d_1109 + 0LL);
        $y_1429 = 1LL;
        $y_1430 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1430 + -1LL) = 1024LL;
        *((value *) $y_1430 + 0LL) = $y_1429;
        $y_1431 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1431 + -1LL) = 1024LL;
        *((value *) $y_1431 + 0LL) = $y_1430;
        $y_1432 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1432 + -1LL) = 1024LL;
        *((value *) $y_1432 + 0LL) = $y_1431;
        $y_1433 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1433 + -1LL) = 1024LL;
        *((value *) $y_1433 + 0LL) = $y_1432;
        $y_1434 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1434 + -1LL) = 1024LL;
        *((value *) $y_1434 + 0LL) = $y_1433;
        $y_1435 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1435 + -1LL) = 1024LL;
        *((value *) $y_1435 + 0LL) = $y_1434;
        $y_1436 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1436 + -1LL) = 1024LL;
        *((value *) $y_1436 + 0LL) = $y_1435;
        $y_1437 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1437 + -1LL) = 1024LL;
        *((value *) $y_1437 + 0LL) = $y_1436;
        $y_1438 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1438 + -1LL) = 1024LL;
        *((value *) $y_1438 + 0LL) = $y_1437;
        $y_1439 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1439 + -1LL) = 1024LL;
        *((value *) $y_1439 + 0LL) = $y_1438;
        $y_1440 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1440 + -1LL) = 1024LL;
        *((value *) $y_1440 + 0LL) = $y_1439;
        $y_1441 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1441 + -1LL) = 1024LL;
        *((value *) $y_1441 + 0LL) = $y_1440;
        $y_1442 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1442 + -1LL) = 1024LL;
        *((value *) $y_1442 + 0LL) = $y_1441;
        $y_1443 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1443 + -1LL) = 1024LL;
        *((value *) $y_1443 + 0LL) = $y_1442;
        $y_1444 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1444 + -1LL) = 1024LL;
        *((value *) $y_1444 + 0LL) = $y_1443;
        $y_1445 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1445 + -1LL) = 1024LL;
        *((value *) $y_1445 + 0LL) = $y_1444;
        $y_1446 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1428;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1448 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1445, $y_1446);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(24LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1448;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 24LL;
          garbage_collect($tinfo);
          $y_1448 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1428 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1449 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1449 + -1LL) = 1024LL;
        *((value *) $y_1449 + 0LL) = $y_1448;
        $y_1450 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1450 + -1LL) = 1024LL;
        *((value *) $y_1450 + 0LL) = $y_1449;
        $y_1451 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1451 + -1LL) = 1024LL;
        *((value *) $y_1451 + 0LL) = $y_1450;
        $y_1452 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1452 + -1LL) = 1024LL;
        *((value *) $y_1452 + 0LL) = $y_1451;
        $y_1453 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1453 + -1LL) = 1024LL;
        *((value *) $y_1453 + 0LL) = $y_1452;
        $y_1454 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1454 + -1LL) = 1024LL;
        *((value *) $y_1454 + 0LL) = $y_1453;
        $y_1455 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1455 + -1LL) = 1024LL;
        *((value *) $y_1455 + 0LL) = $y_1454;
        $y_1456 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1456 + -1LL) = 1024LL;
        *((value *) $y_1456 + 0LL) = $y_1455;
        $y_1457 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1457 + -1LL) = 1024LL;
        *((value *) $y_1457 + 0LL) = $y_1456;
        $y_1458 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1458 + -1LL) = 1024LL;
        *((value *) $y_1458 + 0LL) = $y_1457;
        $y_1459 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1459 + -1LL) = 1024LL;
        *((value *) $y_1459 + 0LL) = $y_1458;
        $y_1460 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1460 + -1LL) = 1024LL;
        *((value *) $y_1460 + 0LL) = $y_1459;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1460, $d_1428);
        return $result;
        break;
      case 13:
        $d_1461 = *((value *) $d_1109 + 0LL);
        $y_1462 = 1LL;
        $y_1463 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1463 + -1LL) = 1024LL;
        *((value *) $y_1463 + 0LL) = $y_1462;
        $y_1464 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1464 + -1LL) = 1024LL;
        *((value *) $y_1464 + 0LL) = $y_1463;
        $y_1465 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1465 + -1LL) = 1024LL;
        *((value *) $y_1465 + 0LL) = $y_1464;
        $y_1466 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1466 + -1LL) = 1024LL;
        *((value *) $y_1466 + 0LL) = $y_1465;
        $y_1467 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1467 + -1LL) = 1024LL;
        *((value *) $y_1467 + 0LL) = $y_1466;
        $y_1468 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1468 + -1LL) = 1024LL;
        *((value *) $y_1468 + 0LL) = $y_1467;
        $y_1469 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1469 + -1LL) = 1024LL;
        *((value *) $y_1469 + 0LL) = $y_1468;
        $y_1470 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1470 + -1LL) = 1024LL;
        *((value *) $y_1470 + 0LL) = $y_1469;
        $y_1471 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1471 + -1LL) = 1024LL;
        *((value *) $y_1471 + 0LL) = $y_1470;
        $y_1472 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1472 + -1LL) = 1024LL;
        *((value *) $y_1472 + 0LL) = $y_1471;
        $y_1473 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1473 + -1LL) = 1024LL;
        *((value *) $y_1473 + 0LL) = $y_1472;
        $y_1474 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1474 + -1LL) = 1024LL;
        *((value *) $y_1474 + 0LL) = $y_1473;
        $y_1475 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1475 + -1LL) = 1024LL;
        *((value *) $y_1475 + 0LL) = $y_1474;
        $y_1476 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1476 + -1LL) = 1024LL;
        *((value *) $y_1476 + 0LL) = $y_1475;
        $y_1477 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1477 + -1LL) = 1024LL;
        *((value *) $y_1477 + 0LL) = $y_1476;
        $y_1478 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1478 + -1LL) = 1024LL;
        *((value *) $y_1478 + 0LL) = $y_1477;
        $y_1479 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1461;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1481 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1478, $y_1479);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(26LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1481;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 26LL;
          garbage_collect($tinfo);
          $y_1481 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1461 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1482 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1482 + -1LL) = 1024LL;
        *((value *) $y_1482 + 0LL) = $y_1481;
        $y_1483 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1483 + -1LL) = 1024LL;
        *((value *) $y_1483 + 0LL) = $y_1482;
        $y_1484 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1484 + -1LL) = 1024LL;
        *((value *) $y_1484 + 0LL) = $y_1483;
        $y_1485 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1485 + -1LL) = 1024LL;
        *((value *) $y_1485 + 0LL) = $y_1484;
        $y_1486 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1486 + -1LL) = 1024LL;
        *((value *) $y_1486 + 0LL) = $y_1485;
        $y_1487 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1487 + -1LL) = 1024LL;
        *((value *) $y_1487 + 0LL) = $y_1486;
        $y_1488 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1488 + -1LL) = 1024LL;
        *((value *) $y_1488 + 0LL) = $y_1487;
        $y_1489 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1489 + -1LL) = 1024LL;
        *((value *) $y_1489 + 0LL) = $y_1488;
        $y_1490 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1490 + -1LL) = 1024LL;
        *((value *) $y_1490 + 0LL) = $y_1489;
        $y_1491 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1491 + -1LL) = 1024LL;
        *((value *) $y_1491 + 0LL) = $y_1490;
        $y_1492 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1492 + -1LL) = 1024LL;
        *((value *) $y_1492 + 0LL) = $y_1491;
        $y_1493 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1493 + -1LL) = 1024LL;
        *((value *) $y_1493 + 0LL) = $y_1492;
        $y_1494 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1494 + -1LL) = 1024LL;
        *((value *) $y_1494 + 0LL) = $y_1493;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1494, $d_1461);
        return $result;
        break;
      case 14:
        $d_1495 = *((value *) $d_1109 + 0LL);
        $y_1496 = 1LL;
        $y_1497 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1497 + -1LL) = 1024LL;
        *((value *) $y_1497 + 0LL) = $y_1496;
        $y_1498 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1498 + -1LL) = 1024LL;
        *((value *) $y_1498 + 0LL) = $y_1497;
        $y_1499 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1499 + -1LL) = 1024LL;
        *((value *) $y_1499 + 0LL) = $y_1498;
        $y_1500 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1500 + -1LL) = 1024LL;
        *((value *) $y_1500 + 0LL) = $y_1499;
        $y_1501 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1501 + -1LL) = 1024LL;
        *((value *) $y_1501 + 0LL) = $y_1500;
        $y_1502 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1502 + -1LL) = 1024LL;
        *((value *) $y_1502 + 0LL) = $y_1501;
        $y_1503 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1503 + -1LL) = 1024LL;
        *((value *) $y_1503 + 0LL) = $y_1502;
        $y_1504 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1504 + -1LL) = 1024LL;
        *((value *) $y_1504 + 0LL) = $y_1503;
        $y_1505 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1505 + -1LL) = 1024LL;
        *((value *) $y_1505 + 0LL) = $y_1504;
        $y_1506 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1506 + -1LL) = 1024LL;
        *((value *) $y_1506 + 0LL) = $y_1505;
        $y_1507 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1507 + -1LL) = 1024LL;
        *((value *) $y_1507 + 0LL) = $y_1506;
        $y_1508 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1508 + -1LL) = 1024LL;
        *((value *) $y_1508 + 0LL) = $y_1507;
        $y_1509 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1509 + -1LL) = 1024LL;
        *((value *) $y_1509 + 0LL) = $y_1508;
        $y_1510 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1510 + -1LL) = 1024LL;
        *((value *) $y_1510 + 0LL) = $y_1509;
        $y_1511 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1511 + -1LL) = 1024LL;
        *((value *) $y_1511 + 0LL) = $y_1510;
        $y_1512 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1512 + -1LL) = 1024LL;
        *((value *) $y_1512 + 0LL) = $y_1511;
        $y_1513 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1495;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1515 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1512, $y_1513);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(28LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1515;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 28LL;
          garbage_collect($tinfo);
          $y_1515 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1495 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1516 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1516 + -1LL) = 1024LL;
        *((value *) $y_1516 + 0LL) = $y_1515;
        $y_1517 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1517 + -1LL) = 1024LL;
        *((value *) $y_1517 + 0LL) = $y_1516;
        $y_1518 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1518 + -1LL) = 1024LL;
        *((value *) $y_1518 + 0LL) = $y_1517;
        $y_1519 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1519 + -1LL) = 1024LL;
        *((value *) $y_1519 + 0LL) = $y_1518;
        $y_1520 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1520 + -1LL) = 1024LL;
        *((value *) $y_1520 + 0LL) = $y_1519;
        $y_1521 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1521 + -1LL) = 1024LL;
        *((value *) $y_1521 + 0LL) = $y_1520;
        $y_1522 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1522 + -1LL) = 1024LL;
        *((value *) $y_1522 + 0LL) = $y_1521;
        $y_1523 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1523 + -1LL) = 1024LL;
        *((value *) $y_1523 + 0LL) = $y_1522;
        $y_1524 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1524 + -1LL) = 1024LL;
        *((value *) $y_1524 + 0LL) = $y_1523;
        $y_1525 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1525 + -1LL) = 1024LL;
        *((value *) $y_1525 + 0LL) = $y_1524;
        $y_1526 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1526 + -1LL) = 1024LL;
        *((value *) $y_1526 + 0LL) = $y_1525;
        $y_1527 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1527 + -1LL) = 1024LL;
        *((value *) $y_1527 + 0LL) = $y_1526;
        $y_1528 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1528 + -1LL) = 1024LL;
        *((value *) $y_1528 + 0LL) = $y_1527;
        $y_1529 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1529 + -1LL) = 1024LL;
        *((value *) $y_1529 + 0LL) = $y_1528;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1529, $d_1495);
        return $result;
        break;
      default:
        $d_1530 = *((value *) $d_1109 + 0LL);
        $y_1531 = 1LL;
        $y_1532 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1532 + -1LL) = 1024LL;
        *((value *) $y_1532 + 0LL) = $y_1531;
        $y_1533 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1533 + -1LL) = 1024LL;
        *((value *) $y_1533 + 0LL) = $y_1532;
        $y_1534 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1534 + -1LL) = 1024LL;
        *((value *) $y_1534 + 0LL) = $y_1533;
        $y_1535 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1535 + -1LL) = 1024LL;
        *((value *) $y_1535 + 0LL) = $y_1534;
        $y_1536 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1536 + -1LL) = 1024LL;
        *((value *) $y_1536 + 0LL) = $y_1535;
        $y_1537 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1537 + -1LL) = 1024LL;
        *((value *) $y_1537 + 0LL) = $y_1536;
        $y_1538 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1538 + -1LL) = 1024LL;
        *((value *) $y_1538 + 0LL) = $y_1537;
        $y_1539 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1539 + -1LL) = 1024LL;
        *((value *) $y_1539 + 0LL) = $y_1538;
        $y_1540 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1540 + -1LL) = 1024LL;
        *((value *) $y_1540 + 0LL) = $y_1539;
        $y_1541 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1541 + -1LL) = 1024LL;
        *((value *) $y_1541 + 0LL) = $y_1540;
        $y_1542 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1542 + -1LL) = 1024LL;
        *((value *) $y_1542 + 0LL) = $y_1541;
        $y_1543 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1543 + -1LL) = 1024LL;
        *((value *) $y_1543 + 0LL) = $y_1542;
        $y_1544 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1544 + -1LL) = 1024LL;
        *((value *) $y_1544 + 0LL) = $y_1543;
        $y_1545 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1545 + -1LL) = 1024LL;
        *((value *) $y_1545 + 0LL) = $y_1544;
        $y_1546 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1546 + -1LL) = 1024LL;
        *((value *) $y_1546 + 0LL) = $y_1545;
        $y_1547 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1547 + -1LL) = 1024LL;
        *((value *) $y_1547 + 0LL) = $y_1546;
        $y_1548 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1530;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1550 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_1108, $y_1547, $y_1548);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(30LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1550;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 30LL;
          garbage_collect($tinfo);
          $y_1550 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1530 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1551 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1551 + -1LL) = 1024LL;
        *((value *) $y_1551 + 0LL) = $y_1550;
        $y_1552 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1552 + -1LL) = 1024LL;
        *((value *) $y_1552 + 0LL) = $y_1551;
        $y_1553 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1553 + -1LL) = 1024LL;
        *((value *) $y_1553 + 0LL) = $y_1552;
        $y_1554 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1554 + -1LL) = 1024LL;
        *((value *) $y_1554 + 0LL) = $y_1553;
        $y_1555 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1555 + -1LL) = 1024LL;
        *((value *) $y_1555 + 0LL) = $y_1554;
        $y_1556 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1556 + -1LL) = 1024LL;
        *((value *) $y_1556 + 0LL) = $y_1555;
        $y_1557 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1557 + -1LL) = 1024LL;
        *((value *) $y_1557 + 0LL) = $y_1556;
        $y_1558 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1558 + -1LL) = 1024LL;
        *((value *) $y_1558 + 0LL) = $y_1557;
        $y_1559 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1559 + -1LL) = 1024LL;
        *((value *) $y_1559 + 0LL) = $y_1558;
        $y_1560 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1560 + -1LL) = 1024LL;
        *((value *) $y_1560 + 0LL) = $y_1559;
        $y_1561 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1561 + -1LL) = 1024LL;
        *((value *) $y_1561 + 0LL) = $y_1560;
        $y_1562 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1562 + -1LL) = 1024LL;
        *((value *) $y_1562 + 0LL) = $y_1561;
        $y_1563 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1563 + -1LL) = 1024LL;
        *((value *) $y_1563 + 0LL) = $y_1562;
        $y_1564 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1564 + -1LL) = 1024LL;
        *((value *) $y_1564 + 0LL) = $y_1563;
        $y_1565 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1565 + -1LL) = 1024LL;
        *((value *) $y_1565 + 0LL) = $y_1564;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_1565, $d_1530);
        return $result;
        break;

    }
  } else {
    switch ($d_1109 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $acc_1108;
        break;

    }
  }
}

value of_uint_acc_uncurried_known_139(struct thread_info *$tinfo, value $acc_910, value $d_911)
{
  struct stack_frame frame;
  value root[2];
  register value $d_912;
  register value $y_913;
  register value $y_914;
  register value $y_915;
  register value $y_916;
  register value $y_917;
  register value $y_918;
  register value $y_919;
  register value $y_920;
  register value $y_921;
  register value $y_922;
  register value $y_923;
  register value $y_924;
  register value $y_926;
  register value $d_927;
  register value $y_928;
  register value $y_929;
  register value $y_930;
  register value $y_931;
  register value $y_932;
  register value $y_933;
  register value $y_934;
  register value $y_935;
  register value $y_936;
  register value $y_937;
  register value $y_938;
  register value $y_939;
  register value $y_941;
  register value $y_942;
  register value $d_943;
  register value $y_944;
  register value $y_945;
  register value $y_946;
  register value $y_947;
  register value $y_948;
  register value $y_949;
  register value $y_950;
  register value $y_951;
  register value $y_952;
  register value $y_953;
  register value $y_954;
  register value $y_955;
  register value $y_957;
  register value $y_958;
  register value $y_959;
  register value $d_960;
  register value $y_961;
  register value $y_962;
  register value $y_963;
  register value $y_964;
  register value $y_965;
  register value $y_966;
  register value $y_967;
  register value $y_968;
  register value $y_969;
  register value $y_970;
  register value $y_971;
  register value $y_972;
  register value $y_974;
  register value $y_975;
  register value $y_976;
  register value $y_977;
  register value $d_978;
  register value $y_979;
  register value $y_980;
  register value $y_981;
  register value $y_982;
  register value $y_983;
  register value $y_984;
  register value $y_985;
  register value $y_986;
  register value $y_987;
  register value $y_988;
  register value $y_989;
  register value $y_990;
  register value $y_992;
  register value $y_993;
  register value $y_994;
  register value $y_995;
  register value $y_996;
  register value $d_997;
  register value $y_998;
  register value $y_999;
  register value $y_1000;
  register value $y_1001;
  register value $y_1002;
  register value $y_1003;
  register value $y_1004;
  register value $y_1005;
  register value $y_1006;
  register value $y_1007;
  register value $y_1008;
  register value $y_1009;
  register value $y_1011;
  register value $y_1012;
  register value $y_1013;
  register value $y_1014;
  register value $y_1015;
  register value $y_1016;
  register value $d_1017;
  register value $y_1018;
  register value $y_1019;
  register value $y_1020;
  register value $y_1021;
  register value $y_1022;
  register value $y_1023;
  register value $y_1024;
  register value $y_1025;
  register value $y_1026;
  register value $y_1027;
  register value $y_1028;
  register value $y_1029;
  register value $y_1031;
  register value $y_1032;
  register value $y_1033;
  register value $y_1034;
  register value $y_1035;
  register value $y_1036;
  register value $y_1037;
  register value $d_1038;
  register value $y_1039;
  register value $y_1040;
  register value $y_1041;
  register value $y_1042;
  register value $y_1043;
  register value $y_1044;
  register value $y_1045;
  register value $y_1046;
  register value $y_1047;
  register value $y_1048;
  register value $y_1049;
  register value $y_1050;
  register value $y_1052;
  register value $y_1053;
  register value $y_1054;
  register value $y_1055;
  register value $y_1056;
  register value $y_1057;
  register value $y_1058;
  register value $y_1059;
  register value $d_1060;
  register value $y_1061;
  register value $y_1062;
  register value $y_1063;
  register value $y_1064;
  register value $y_1065;
  register value $y_1066;
  register value $y_1067;
  register value $y_1068;
  register value $y_1069;
  register value $y_1070;
  register value $y_1071;
  register value $y_1072;
  register value $y_1074;
  register value $y_1075;
  register value $y_1076;
  register value $y_1077;
  register value $y_1078;
  register value $y_1079;
  register value $y_1080;
  register value $y_1081;
  register value $y_1082;
  register value $d_1083;
  register value $y_1084;
  register value $y_1085;
  register value $y_1086;
  register value $y_1087;
  register value $y_1088;
  register value $y_1089;
  register value $y_1090;
  register value $y_1091;
  register value $y_1092;
  register value $y_1093;
  register value $y_1094;
  register value $y_1095;
  register value $y_1097;
  register value $y_1098;
  register value $y_1099;
  register value $y_1100;
  register value $y_1101;
  register value $y_1102;
  register value $y_1103;
  register value $y_1104;
  register value $y_1105;
  register value $y_1106;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(20LL <= $limit - $alloc)) {
    *(root + 1LL) = $d_911;
    *(root + 0LL) = $acc_910;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 20LL;
    garbage_collect($tinfo);
    $d_911 = *(root + 1LL);
    $acc_910 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($d_911 & 1) == 0) {
    switch (*((value *) $d_911 + -1LL) & 255LL) {
      case 0:
        $d_912 = *((value *) $d_911 + 0LL);
        $y_913 = 1LL;
        $y_914 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_914 + -1LL) = 1024LL;
        *((value *) $y_914 + 0LL) = $y_913;
        $y_915 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_915 + -1LL) = 1024LL;
        *((value *) $y_915 + 0LL) = $y_914;
        $y_916 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_916 + -1LL) = 1024LL;
        *((value *) $y_916 + 0LL) = $y_915;
        $y_917 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_917 + -1LL) = 1024LL;
        *((value *) $y_917 + 0LL) = $y_916;
        $y_918 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_918 + -1LL) = 1024LL;
        *((value *) $y_918 + 0LL) = $y_917;
        $y_919 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_919 + -1LL) = 1024LL;
        *((value *) $y_919 + 0LL) = $y_918;
        $y_920 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_920 + -1LL) = 1024LL;
        *((value *) $y_920 + 0LL) = $y_919;
        $y_921 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_921 + -1LL) = 1024LL;
        *((value *) $y_921 + 0LL) = $y_920;
        $y_922 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_922 + -1LL) = 1024LL;
        *((value *) $y_922 + 0LL) = $y_921;
        $y_923 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_923 + -1LL) = 1024LL;
        *((value *) $y_923 + 0LL) = $y_922;
        $y_924 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_912;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_926 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_923, $y_924);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $d_912 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_926, $d_912);
        return $result;
        break;
      case 1:
        $d_927 = *((value *) $d_911 + 0LL);
        $y_928 = 1LL;
        $y_929 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_929 + -1LL) = 1024LL;
        *((value *) $y_929 + 0LL) = $y_928;
        $y_930 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_930 + -1LL) = 1024LL;
        *((value *) $y_930 + 0LL) = $y_929;
        $y_931 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_931 + -1LL) = 1024LL;
        *((value *) $y_931 + 0LL) = $y_930;
        $y_932 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_932 + -1LL) = 1024LL;
        *((value *) $y_932 + 0LL) = $y_931;
        $y_933 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_933 + -1LL) = 1024LL;
        *((value *) $y_933 + 0LL) = $y_932;
        $y_934 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_934 + -1LL) = 1024LL;
        *((value *) $y_934 + 0LL) = $y_933;
        $y_935 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_935 + -1LL) = 1024LL;
        *((value *) $y_935 + 0LL) = $y_934;
        $y_936 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_936 + -1LL) = 1024LL;
        *((value *) $y_936 + 0LL) = $y_935;
        $y_937 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_937 + -1LL) = 1024LL;
        *((value *) $y_937 + 0LL) = $y_936;
        $y_938 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_938 + -1LL) = 1024LL;
        *((value *) $y_938 + 0LL) = $y_937;
        $y_939 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_927;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_941 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_938, $y_939);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_941;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_941 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_927 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_942 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_942 + -1LL) = 1024LL;
        *((value *) $y_942 + 0LL) = $y_941;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_942, $d_927);
        return $result;
        break;
      case 2:
        $d_943 = *((value *) $d_911 + 0LL);
        $y_944 = 1LL;
        $y_945 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_945 + -1LL) = 1024LL;
        *((value *) $y_945 + 0LL) = $y_944;
        $y_946 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_946 + -1LL) = 1024LL;
        *((value *) $y_946 + 0LL) = $y_945;
        $y_947 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_947 + -1LL) = 1024LL;
        *((value *) $y_947 + 0LL) = $y_946;
        $y_948 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_948 + -1LL) = 1024LL;
        *((value *) $y_948 + 0LL) = $y_947;
        $y_949 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_949 + -1LL) = 1024LL;
        *((value *) $y_949 + 0LL) = $y_948;
        $y_950 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_950 + -1LL) = 1024LL;
        *((value *) $y_950 + 0LL) = $y_949;
        $y_951 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_951 + -1LL) = 1024LL;
        *((value *) $y_951 + 0LL) = $y_950;
        $y_952 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_952 + -1LL) = 1024LL;
        *((value *) $y_952 + 0LL) = $y_951;
        $y_953 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_953 + -1LL) = 1024LL;
        *((value *) $y_953 + 0LL) = $y_952;
        $y_954 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_954 + -1LL) = 1024LL;
        *((value *) $y_954 + 0LL) = $y_953;
        $y_955 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_943;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_957 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_954, $y_955);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(4LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_957;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 4LL;
          garbage_collect($tinfo);
          $y_957 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_943 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_958 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_958 + -1LL) = 1024LL;
        *((value *) $y_958 + 0LL) = $y_957;
        $y_959 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_959 + -1LL) = 1024LL;
        *((value *) $y_959 + 0LL) = $y_958;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_959, $d_943);
        return $result;
        break;
      case 3:
        $d_960 = *((value *) $d_911 + 0LL);
        $y_961 = 1LL;
        $y_962 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_962 + -1LL) = 1024LL;
        *((value *) $y_962 + 0LL) = $y_961;
        $y_963 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_963 + -1LL) = 1024LL;
        *((value *) $y_963 + 0LL) = $y_962;
        $y_964 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_964 + -1LL) = 1024LL;
        *((value *) $y_964 + 0LL) = $y_963;
        $y_965 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_965 + -1LL) = 1024LL;
        *((value *) $y_965 + 0LL) = $y_964;
        $y_966 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_966 + -1LL) = 1024LL;
        *((value *) $y_966 + 0LL) = $y_965;
        $y_967 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_967 + -1LL) = 1024LL;
        *((value *) $y_967 + 0LL) = $y_966;
        $y_968 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_968 + -1LL) = 1024LL;
        *((value *) $y_968 + 0LL) = $y_967;
        $y_969 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_969 + -1LL) = 1024LL;
        *((value *) $y_969 + 0LL) = $y_968;
        $y_970 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_970 + -1LL) = 1024LL;
        *((value *) $y_970 + 0LL) = $y_969;
        $y_971 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_971 + -1LL) = 1024LL;
        *((value *) $y_971 + 0LL) = $y_970;
        $y_972 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_960;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_974 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_971, $y_972);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(6LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_974;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 6LL;
          garbage_collect($tinfo);
          $y_974 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_960 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_975 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_975 + -1LL) = 1024LL;
        *((value *) $y_975 + 0LL) = $y_974;
        $y_976 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_976 + -1LL) = 1024LL;
        *((value *) $y_976 + 0LL) = $y_975;
        $y_977 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_977 + -1LL) = 1024LL;
        *((value *) $y_977 + 0LL) = $y_976;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_977, $d_960);
        return $result;
        break;
      case 4:
        $d_978 = *((value *) $d_911 + 0LL);
        $y_979 = 1LL;
        $y_980 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_980 + -1LL) = 1024LL;
        *((value *) $y_980 + 0LL) = $y_979;
        $y_981 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_981 + -1LL) = 1024LL;
        *((value *) $y_981 + 0LL) = $y_980;
        $y_982 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_982 + -1LL) = 1024LL;
        *((value *) $y_982 + 0LL) = $y_981;
        $y_983 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_983 + -1LL) = 1024LL;
        *((value *) $y_983 + 0LL) = $y_982;
        $y_984 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_984 + -1LL) = 1024LL;
        *((value *) $y_984 + 0LL) = $y_983;
        $y_985 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_985 + -1LL) = 1024LL;
        *((value *) $y_985 + 0LL) = $y_984;
        $y_986 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_986 + -1LL) = 1024LL;
        *((value *) $y_986 + 0LL) = $y_985;
        $y_987 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_987 + -1LL) = 1024LL;
        *((value *) $y_987 + 0LL) = $y_986;
        $y_988 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_988 + -1LL) = 1024LL;
        *((value *) $y_988 + 0LL) = $y_987;
        $y_989 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_989 + -1LL) = 1024LL;
        *((value *) $y_989 + 0LL) = $y_988;
        $y_990 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_978;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_992 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_989, $y_990);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(8LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_992;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 8LL;
          garbage_collect($tinfo);
          $y_992 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_978 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_993 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_993 + -1LL) = 1024LL;
        *((value *) $y_993 + 0LL) = $y_992;
        $y_994 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_994 + -1LL) = 1024LL;
        *((value *) $y_994 + 0LL) = $y_993;
        $y_995 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_995 + -1LL) = 1024LL;
        *((value *) $y_995 + 0LL) = $y_994;
        $y_996 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_996 + -1LL) = 1024LL;
        *((value *) $y_996 + 0LL) = $y_995;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_996, $d_978);
        return $result;
        break;
      case 5:
        $d_997 = *((value *) $d_911 + 0LL);
        $y_998 = 1LL;
        $y_999 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_999 + -1LL) = 1024LL;
        *((value *) $y_999 + 0LL) = $y_998;
        $y_1000 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1000 + -1LL) = 1024LL;
        *((value *) $y_1000 + 0LL) = $y_999;
        $y_1001 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1001 + -1LL) = 1024LL;
        *((value *) $y_1001 + 0LL) = $y_1000;
        $y_1002 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1002 + -1LL) = 1024LL;
        *((value *) $y_1002 + 0LL) = $y_1001;
        $y_1003 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1003 + -1LL) = 1024LL;
        *((value *) $y_1003 + 0LL) = $y_1002;
        $y_1004 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1004 + -1LL) = 1024LL;
        *((value *) $y_1004 + 0LL) = $y_1003;
        $y_1005 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1005 + -1LL) = 1024LL;
        *((value *) $y_1005 + 0LL) = $y_1004;
        $y_1006 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1006 + -1LL) = 1024LL;
        *((value *) $y_1006 + 0LL) = $y_1005;
        $y_1007 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1007 + -1LL) = 1024LL;
        *((value *) $y_1007 + 0LL) = $y_1006;
        $y_1008 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1008 + -1LL) = 1024LL;
        *((value *) $y_1008 + 0LL) = $y_1007;
        $y_1009 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_997;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1011 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_1008, $y_1009);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(10LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1011;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 10LL;
          garbage_collect($tinfo);
          $y_1011 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_997 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1012 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1012 + -1LL) = 1024LL;
        *((value *) $y_1012 + 0LL) = $y_1011;
        $y_1013 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1013 + -1LL) = 1024LL;
        *((value *) $y_1013 + 0LL) = $y_1012;
        $y_1014 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1014 + -1LL) = 1024LL;
        *((value *) $y_1014 + 0LL) = $y_1013;
        $y_1015 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1015 + -1LL) = 1024LL;
        *((value *) $y_1015 + 0LL) = $y_1014;
        $y_1016 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1016 + -1LL) = 1024LL;
        *((value *) $y_1016 + 0LL) = $y_1015;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_1016, $d_997);
        return $result;
        break;
      case 6:
        $d_1017 = *((value *) $d_911 + 0LL);
        $y_1018 = 1LL;
        $y_1019 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1019 + -1LL) = 1024LL;
        *((value *) $y_1019 + 0LL) = $y_1018;
        $y_1020 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1020 + -1LL) = 1024LL;
        *((value *) $y_1020 + 0LL) = $y_1019;
        $y_1021 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1021 + -1LL) = 1024LL;
        *((value *) $y_1021 + 0LL) = $y_1020;
        $y_1022 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1022 + -1LL) = 1024LL;
        *((value *) $y_1022 + 0LL) = $y_1021;
        $y_1023 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1023 + -1LL) = 1024LL;
        *((value *) $y_1023 + 0LL) = $y_1022;
        $y_1024 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1024 + -1LL) = 1024LL;
        *((value *) $y_1024 + 0LL) = $y_1023;
        $y_1025 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1025 + -1LL) = 1024LL;
        *((value *) $y_1025 + 0LL) = $y_1024;
        $y_1026 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1026 + -1LL) = 1024LL;
        *((value *) $y_1026 + 0LL) = $y_1025;
        $y_1027 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1027 + -1LL) = 1024LL;
        *((value *) $y_1027 + 0LL) = $y_1026;
        $y_1028 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1028 + -1LL) = 1024LL;
        *((value *) $y_1028 + 0LL) = $y_1027;
        $y_1029 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1017;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1031 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_1028, $y_1029);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(12LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1031;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 12LL;
          garbage_collect($tinfo);
          $y_1031 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1017 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1032 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1032 + -1LL) = 1024LL;
        *((value *) $y_1032 + 0LL) = $y_1031;
        $y_1033 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1033 + -1LL) = 1024LL;
        *((value *) $y_1033 + 0LL) = $y_1032;
        $y_1034 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1034 + -1LL) = 1024LL;
        *((value *) $y_1034 + 0LL) = $y_1033;
        $y_1035 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1035 + -1LL) = 1024LL;
        *((value *) $y_1035 + 0LL) = $y_1034;
        $y_1036 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1036 + -1LL) = 1024LL;
        *((value *) $y_1036 + 0LL) = $y_1035;
        $y_1037 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1037 + -1LL) = 1024LL;
        *((value *) $y_1037 + 0LL) = $y_1036;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_1037, $d_1017);
        return $result;
        break;
      case 7:
        $d_1038 = *((value *) $d_911 + 0LL);
        $y_1039 = 1LL;
        $y_1040 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1040 + -1LL) = 1024LL;
        *((value *) $y_1040 + 0LL) = $y_1039;
        $y_1041 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1041 + -1LL) = 1024LL;
        *((value *) $y_1041 + 0LL) = $y_1040;
        $y_1042 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1042 + -1LL) = 1024LL;
        *((value *) $y_1042 + 0LL) = $y_1041;
        $y_1043 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1043 + -1LL) = 1024LL;
        *((value *) $y_1043 + 0LL) = $y_1042;
        $y_1044 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1044 + -1LL) = 1024LL;
        *((value *) $y_1044 + 0LL) = $y_1043;
        $y_1045 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1045 + -1LL) = 1024LL;
        *((value *) $y_1045 + 0LL) = $y_1044;
        $y_1046 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1046 + -1LL) = 1024LL;
        *((value *) $y_1046 + 0LL) = $y_1045;
        $y_1047 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1047 + -1LL) = 1024LL;
        *((value *) $y_1047 + 0LL) = $y_1046;
        $y_1048 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1048 + -1LL) = 1024LL;
        *((value *) $y_1048 + 0LL) = $y_1047;
        $y_1049 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1049 + -1LL) = 1024LL;
        *((value *) $y_1049 + 0LL) = $y_1048;
        $y_1050 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1038;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1052 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_1049, $y_1050);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(14LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1052;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 14LL;
          garbage_collect($tinfo);
          $y_1052 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1038 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1053 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1053 + -1LL) = 1024LL;
        *((value *) $y_1053 + 0LL) = $y_1052;
        $y_1054 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1054 + -1LL) = 1024LL;
        *((value *) $y_1054 + 0LL) = $y_1053;
        $y_1055 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1055 + -1LL) = 1024LL;
        *((value *) $y_1055 + 0LL) = $y_1054;
        $y_1056 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1056 + -1LL) = 1024LL;
        *((value *) $y_1056 + 0LL) = $y_1055;
        $y_1057 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1057 + -1LL) = 1024LL;
        *((value *) $y_1057 + 0LL) = $y_1056;
        $y_1058 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1058 + -1LL) = 1024LL;
        *((value *) $y_1058 + 0LL) = $y_1057;
        $y_1059 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1059 + -1LL) = 1024LL;
        *((value *) $y_1059 + 0LL) = $y_1058;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_1059, $d_1038);
        return $result;
        break;
      case 8:
        $d_1060 = *((value *) $d_911 + 0LL);
        $y_1061 = 1LL;
        $y_1062 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1062 + -1LL) = 1024LL;
        *((value *) $y_1062 + 0LL) = $y_1061;
        $y_1063 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1063 + -1LL) = 1024LL;
        *((value *) $y_1063 + 0LL) = $y_1062;
        $y_1064 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1064 + -1LL) = 1024LL;
        *((value *) $y_1064 + 0LL) = $y_1063;
        $y_1065 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1065 + -1LL) = 1024LL;
        *((value *) $y_1065 + 0LL) = $y_1064;
        $y_1066 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1066 + -1LL) = 1024LL;
        *((value *) $y_1066 + 0LL) = $y_1065;
        $y_1067 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1067 + -1LL) = 1024LL;
        *((value *) $y_1067 + 0LL) = $y_1066;
        $y_1068 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1068 + -1LL) = 1024LL;
        *((value *) $y_1068 + 0LL) = $y_1067;
        $y_1069 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1069 + -1LL) = 1024LL;
        *((value *) $y_1069 + 0LL) = $y_1068;
        $y_1070 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1070 + -1LL) = 1024LL;
        *((value *) $y_1070 + 0LL) = $y_1069;
        $y_1071 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1071 + -1LL) = 1024LL;
        *((value *) $y_1071 + 0LL) = $y_1070;
        $y_1072 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1060;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1074 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_1071, $y_1072);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(16LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1074;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 16LL;
          garbage_collect($tinfo);
          $y_1074 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1060 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1075 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1075 + -1LL) = 1024LL;
        *((value *) $y_1075 + 0LL) = $y_1074;
        $y_1076 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1076 + -1LL) = 1024LL;
        *((value *) $y_1076 + 0LL) = $y_1075;
        $y_1077 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1077 + -1LL) = 1024LL;
        *((value *) $y_1077 + 0LL) = $y_1076;
        $y_1078 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1078 + -1LL) = 1024LL;
        *((value *) $y_1078 + 0LL) = $y_1077;
        $y_1079 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1079 + -1LL) = 1024LL;
        *((value *) $y_1079 + 0LL) = $y_1078;
        $y_1080 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1080 + -1LL) = 1024LL;
        *((value *) $y_1080 + 0LL) = $y_1079;
        $y_1081 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1081 + -1LL) = 1024LL;
        *((value *) $y_1081 + 0LL) = $y_1080;
        $y_1082 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1082 + -1LL) = 1024LL;
        *((value *) $y_1082 + 0LL) = $y_1081;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_1082, $d_1060);
        return $result;
        break;
      default:
        $d_1083 = *((value *) $d_911 + 0LL);
        $y_1084 = 1LL;
        $y_1085 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1085 + -1LL) = 1024LL;
        *((value *) $y_1085 + 0LL) = $y_1084;
        $y_1086 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1086 + -1LL) = 1024LL;
        *((value *) $y_1086 + 0LL) = $y_1085;
        $y_1087 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1087 + -1LL) = 1024LL;
        *((value *) $y_1087 + 0LL) = $y_1086;
        $y_1088 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1088 + -1LL) = 1024LL;
        *((value *) $y_1088 + 0LL) = $y_1087;
        $y_1089 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1089 + -1LL) = 1024LL;
        *((value *) $y_1089 + 0LL) = $y_1088;
        $y_1090 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1090 + -1LL) = 1024LL;
        *((value *) $y_1090 + 0LL) = $y_1089;
        $y_1091 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1091 + -1LL) = 1024LL;
        *((value *) $y_1091 + 0LL) = $y_1090;
        $y_1092 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1092 + -1LL) = 1024LL;
        *((value *) $y_1092 + 0LL) = $y_1091;
        $y_1093 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1093 + -1LL) = 1024LL;
        *((value *) $y_1093 + 0LL) = $y_1092;
        $y_1094 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1094 + -1LL) = 1024LL;
        *((value *) $y_1094 + 0LL) = $y_1093;
        $y_1095 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $d_1083;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_1097 =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $acc_910, $y_1094, $y_1095);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(18LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_1097;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 18LL;
          garbage_collect($tinfo);
          $y_1097 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $d_1083 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_1098 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1098 + -1LL) = 1024LL;
        *((value *) $y_1098 + 0LL) = $y_1097;
        $y_1099 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1099 + -1LL) = 1024LL;
        *((value *) $y_1099 + 0LL) = $y_1098;
        $y_1100 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1100 + -1LL) = 1024LL;
        *((value *) $y_1100 + 0LL) = $y_1099;
        $y_1101 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1101 + -1LL) = 1024LL;
        *((value *) $y_1101 + 0LL) = $y_1100;
        $y_1102 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1102 + -1LL) = 1024LL;
        *((value *) $y_1102 + 0LL) = $y_1101;
        $y_1103 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1103 + -1LL) = 1024LL;
        *((value *) $y_1103 + 0LL) = $y_1102;
        $y_1104 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1104 + -1LL) = 1024LL;
        *((value *) $y_1104 + 0LL) = $y_1103;
        $y_1105 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1105 + -1LL) = 1024LL;
        *((value *) $y_1105 + 0LL) = $y_1104;
        $y_1106 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_1106 + -1LL) = 1024LL;
        *((value *) $y_1106 + 0LL) = $y_1105;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_1106, $d_1083);
        return $result;
        break;

    }
  } else {
    switch ($d_911 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $acc_910;
        break;

    }
  }
}

value f_case_known_138(struct thread_info *$tinfo, value $s_902)
{
  struct stack_frame frame;
  value root[1];
  register value $d_903;
  register value $y_905;
  register value $d_906;
  register value $y_908;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_902 & 1) == 0) {
    switch (*((value *) $s_902 + -1LL) & 255LL) {
      case 0:
        $d_903 = *((value *) $s_902 + 0LL);
        $y_905 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_uint_acc_uncurried_known_139)
          ($tinfo, $y_905, $d_903);
        return $result;
        break;
      default:
        $d_906 = *((value *) $s_902 + 0LL);
        $y_908 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_hex_uint_acc_uncurried_known_140)
          ($tinfo, $y_908, $d_906);
        return $result;
        break;

    }
  } else {
    switch ($s_902 >> 1LL) {

    }
  }
}

value tail_add_uncurried_known_137(struct thread_info *$tinfo, value $m_897, value $n_898)
{
  struct stack_frame frame;
  value root[2];
  register value $n_899;
  register value $y_900;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $n_898;
    *(root + 0LL) = $m_897;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $n_898 = *(root + 1LL);
    $m_897 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($n_898 & 1) == 0) {
    switch (*((value *) $n_898 + -1LL) & 255LL) {
      default:
        $n_899 = *((value *) $n_898 + 0LL);
        $y_900 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_900 + -1LL) = 1024LL;
        *((value *) $y_900 + 0LL) = $m_897;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) tail_add_uncurried_known_137)
          ($tinfo, $y_900, $n_899);
        return $result;
        break;

    }
  } else {
    switch ($n_898 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $m_897;
        break;

    }
  }
}

value tail_addmul_uncurried_uncurried_known_136(struct thread_info *$tinfo, value $m_890, value $n_891, value $r_892)
{
  struct stack_frame frame;
  value root[3];
  register value $n_893;
  register value $y_895;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_891 & 1) == 0) {
    switch (*((value *) $n_891 + -1LL) & 255LL) {
      default:
        $n_893 = *((value *) $n_891 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $n_893;
        *(root + 0LL) = $m_890;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_895 =
          ((value (*)(struct thread_info *, value, value)) tail_add_uncurried_known_137)
          ($tinfo, $r_892, $m_890);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $n_893 = *(root + 1LL);
        $m_890 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value, value)) tail_addmul_uncurried_uncurried_known_136)
          ($tinfo, $m_890, $n_893, $y_895);
        return $result;
        break;

    }
  } else {
    switch ($n_891 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $r_892;
        break;

    }
  }
}

value f_case_known_135(struct thread_info *$tinfo, value $s_885)
{
  struct stack_frame frame;
  value root[1];
  register value $y_886;
  register value $y_887;
  register value $y_888;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_885 & 1) == 0) {
    switch (*((value *) $s_885 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_885 >> 1LL) {
      case 0:
        $y_886 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_886;
        break;
      case 1:
        $y_887 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_887;
        break;
      default:
        $y_888 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_888;
        break;

    }
  }
}

value pos_div_eucl_uncurried_known_134(struct thread_info *$tinfo, value $b_800, value $a_801, value $y_802)
{
  struct stack_frame frame;
  value root[4];
  register value $ap_803;
  register value $y_804;
  register value $q_805;
  register value $r_806;
  register value $y_807;
  register value $y_808;
  register value $y_809;
  register value $y_811;
  register value $y_812;
  register value $y_813;
  register value $rp_815;
  register value $y_817;
  register value $y_818;
  register value $y_819;
  register value $y_820;
  register value $y_822;
  register value $y_823;
  register value $y_824;
  register value $y_825;
  register value $y_826;
  register value $y_828;
  register value $y_829;
  register value $y_830;
  register value $y_832;
  register value $y_834;
  register value $y_836;
  register value $y_837;
  register value $ap_838;
  register value $y_839;
  register value $q_840;
  register value $r_841;
  register value $y_842;
  register value $y_843;
  register value $y_844;
  register value $rp_846;
  register value $y_848;
  register value $y_849;
  register value $y_850;
  register value $y_851;
  register value $y_853;
  register value $y_854;
  register value $y_855;
  register value $y_856;
  register value $y_857;
  register value $y_859;
  register value $y_860;
  register value $y_861;
  register value $y_863;
  register value $y_865;
  register value $y_867;
  register value $y_868;
  register value $y_869;
  register value $y_870;
  register value $y_871;
  register value $y_874;
  register value $y_875;
  register value $y_876;
  register value $y_877;
  register value $y_878;
  register value $y_879;
  register value $y_880;
  register value $y_881;
  register value $y_882;
  register value $y_883;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 2LL) = $y_802;
    *(root + 1LL) = $a_801;
    *(root + 0LL) = $b_800;
    frame.next = root + 3LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $y_802 = *(root + 2LL);
    $a_801 = *(root + 1LL);
    $b_800 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($a_801 & 1) == 0) {
    switch (*((value *) $a_801 + -1LL) & 255LL) {
      case 0:
        $ap_803 = *((value *) $a_801 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $y_802;
        *(root + 0LL) = $b_800;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_804 =
          ((value (*)(struct thread_info *, value, value, value)) pos_div_eucl_uncurried_known_134)
          ($tinfo, $b_800, $ap_803, $y_802);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(4LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_804;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 4LL;
          garbage_collect($tinfo);
          $y_804 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $y_802 = *(root + 1LL);
        $b_800 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_804 & 1) == 0) {
          switch (*((value *) $y_804 + -1LL) & 255LL) {
            default:
              $q_805 = *((value *) $y_804 + 0LL);
              $r_806 = *((value *) $y_804 + 1LL);
              $y_807 = 1LL;
              $y_808 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_808 + -1LL) = 1025LL;
              *((value *) $y_808 + 0LL) = $y_807;
              $y_809 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_809 + -1LL) = 1024LL;
              *((value *) $y_809 + 0LL) = $y_808;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $q_805;
              *(root + 1LL) = $y_802;
              *(root + 0LL) = $b_800;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $y_811 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdmul_uncurried_known_132)
                ($tinfo, $r_806, $y_809);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 3LL) = $y_811;
                frame.next = root + 4LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_811 = *(root + 3LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $q_805 = *(root + 2LL);
              $y_802 = *(root + 1LL);
              $b_800 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_812 = 1LL;
              $y_813 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_813 + -1LL) = 1024LL;
              *((value *) $y_813 + 0LL) = $y_812;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $q_805;
              *(root + 1LL) = $y_802;
              *(root + 0LL) = $b_800;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $rp_815 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                ($tinfo, $y_813, $y_811);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $q_805 = *(root + 2LL);
              $y_802 = *(root + 1LL);
              $b_800 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $rp_815;
              *(root + 1LL) = $q_805;
              *(root + 0LL) = $b_800;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $y_817 =
                ((value (*)(struct thread_info *, value, value, value))
                  CoqdZArithdBinIntDefdZdltb_uncurried_known_123)
                ($tinfo, $b_800, $rp_815, $y_802);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 3LL) = $y_817;
                frame.next = root + 4LL;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_817 = *(root + 3LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $rp_815 = *(root + 2LL);
              $q_805 = *(root + 1LL);
              $b_800 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_817 & 1) == 0) {
                switch (*((value *) $y_817 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_817 >> 1LL) {
                  case 0:
                    $y_818 = 1LL;
                    $y_819 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_819 + -1LL) = 1025LL;
                    *((value *) $y_819 + 0LL) = $y_818;
                    $y_820 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_820 + -1LL) = 1024LL;
                    *((value *) $y_820 + 0LL) = $y_819;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $rp_815;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_822 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdmul_uncurried_known_132)
                      ($tinfo, $q_805, $y_820);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_822;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_822 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $rp_815 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_823 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_823 + -1LL) = 2048LL;
                    *((value *) $y_823 + 0LL) = $y_822;
                    *((value *) $y_823 + 1LL) = $rp_815;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_823;
                    break;
                  default:
                    $y_824 = 1LL;
                    $y_825 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_825 + -1LL) = 1025LL;
                    *((value *) $y_825 + 0LL) = $y_824;
                    $y_826 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_826 + -1LL) = 1024LL;
                    *((value *) $y_826 + 0LL) = $y_825;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $rp_815;
                    *(root + 0LL) = $b_800;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_828 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdmul_uncurried_known_132)
                      ($tinfo, $q_805, $y_826);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(2LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_828;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 2LL;
                      garbage_collect($tinfo);
                      $y_828 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $rp_815 = *(root + 1LL);
                    $b_800 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_829 = 1LL;
                    $y_830 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_830 + -1LL) = 1024LL;
                    *((value *) $y_830 + 0LL) = $y_829;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $rp_815;
                    *(root + 0LL) = $b_800;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_832 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                      ($tinfo, $y_830, $y_828);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $rp_815 = *(root + 1LL);
                    $b_800 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $y_832;
                    *(root + 0LL) = $rp_815;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_834 =
                      ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZdopp_known_133)
                      ($tinfo, $b_800);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $y_832 = *(root + 1LL);
                    $rp_815 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $y_832;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_836 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                      ($tinfo, $y_834, $rp_815);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_836;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_836 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $y_832 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_837 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_837 + -1LL) = 2048LL;
                    *((value *) $y_837 + 0LL) = $y_832;
                    *((value *) $y_837 + 1LL) = $y_836;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_837;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_804 >> 1LL) {

          }
        }
        break;
      default:
        $ap_838 = *((value *) $a_801 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $y_802;
        *(root + 0LL) = $b_800;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_839 =
          ((value (*)(struct thread_info *, value, value, value)) pos_div_eucl_uncurried_known_134)
          ($tinfo, $b_800, $ap_838, $y_802);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(4LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_839;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 4LL;
          garbage_collect($tinfo);
          $y_839 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $y_802 = *(root + 1LL);
        $b_800 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_839 & 1) == 0) {
          switch (*((value *) $y_839 + -1LL) & 255LL) {
            default:
              $q_840 = *((value *) $y_839 + 0LL);
              $r_841 = *((value *) $y_839 + 1LL);
              $y_842 = 1LL;
              $y_843 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_843 + -1LL) = 1025LL;
              *((value *) $y_843 + 0LL) = $y_842;
              $y_844 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_844 + -1LL) = 1024LL;
              *((value *) $y_844 + 0LL) = $y_843;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $q_840;
              *(root + 1LL) = $y_802;
              *(root + 0LL) = $b_800;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $rp_846 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdmul_uncurried_known_132)
                ($tinfo, $r_841, $y_844);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $q_840 = *(root + 2LL);
              $y_802 = *(root + 1LL);
              $b_800 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $rp_846;
              *(root + 1LL) = $q_840;
              *(root + 0LL) = $b_800;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $y_848 =
                ((value (*)(struct thread_info *, value, value, value))
                  CoqdZArithdBinIntDefdZdltb_uncurried_known_123)
                ($tinfo, $b_800, $rp_846, $y_802);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 3LL) = $y_848;
                frame.next = root + 4LL;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_848 = *(root + 3LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $rp_846 = *(root + 2LL);
              $q_840 = *(root + 1LL);
              $b_800 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_848 & 1) == 0) {
                switch (*((value *) $y_848 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_848 >> 1LL) {
                  case 0:
                    $y_849 = 1LL;
                    $y_850 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_850 + -1LL) = 1025LL;
                    *((value *) $y_850 + 0LL) = $y_849;
                    $y_851 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_851 + -1LL) = 1024LL;
                    *((value *) $y_851 + 0LL) = $y_850;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $rp_846;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_853 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdmul_uncurried_known_132)
                      ($tinfo, $q_840, $y_851);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_853;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_853 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $rp_846 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_854 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_854 + -1LL) = 2048LL;
                    *((value *) $y_854 + 0LL) = $y_853;
                    *((value *) $y_854 + 1LL) = $rp_846;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_854;
                    break;
                  default:
                    $y_855 = 1LL;
                    $y_856 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_856 + -1LL) = 1025LL;
                    *((value *) $y_856 + 0LL) = $y_855;
                    $y_857 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_857 + -1LL) = 1024LL;
                    *((value *) $y_857 + 0LL) = $y_856;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $rp_846;
                    *(root + 0LL) = $b_800;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_859 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdmul_uncurried_known_132)
                      ($tinfo, $q_840, $y_857);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(2LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_859;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 2LL;
                      garbage_collect($tinfo);
                      $y_859 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $rp_846 = *(root + 1LL);
                    $b_800 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_860 = 1LL;
                    $y_861 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_861 + -1LL) = 1024LL;
                    *((value *) $y_861 + 0LL) = $y_860;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $rp_846;
                    *(root + 0LL) = $b_800;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_863 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                      ($tinfo, $y_861, $y_859);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $rp_846 = *(root + 1LL);
                    $b_800 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $y_863;
                    *(root + 0LL) = $rp_846;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_865 =
                      ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZdopp_known_133)
                      ($tinfo, $b_800);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $y_863 = *(root + 1LL);
                    $rp_846 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $y_863;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_867 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdZArithdBinIntDefdZdadd_uncurried_known_130)
                      ($tinfo, $y_865, $rp_846);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_867;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_867 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $y_863 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_868 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_868 + -1LL) = 2048LL;
                    *((value *) $y_868 + 0LL) = $y_863;
                    *((value *) $y_868 + 1LL) = $y_867;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_868;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_839 >> 1LL) {

          }
        }
        break;

    }
  } else {
    switch ($a_801 >> 1LL) {
      default:
        $y_869 = 1LL;
        $y_870 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_870 + -1LL) = 1025LL;
        *((value *) $y_870 + 0LL) = $y_869;
        $y_871 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_871 + -1LL) = 1024LL;
        *((value *) $y_871 + 0LL) = $y_870;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_874 =
          ((value (*)(struct thread_info *, value, value, value)) CoqdZArithdBinIntDefdZdcompare_uncurried_known_122)
          ($tinfo, $b_800, $y_871, $y_802);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_875 =
          ((value (*)(struct thread_info *, value)) f_case_known_135)
          ($tinfo, $y_874);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(5LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_875;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 5LL;
          garbage_collect($tinfo);
          $y_875 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        if (($y_875 & 1) == 0) {
          switch (*((value *) $y_875 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_875 >> 1LL) {
            case 0:
              $y_876 = 1LL;
              $y_877 = 1LL;
              $y_878 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_878 + -1LL) = 1024LL;
              *((value *) $y_878 + 0LL) = $y_877;
              $y_879 = (value) ($alloc + 1LL);
              $alloc = $alloc + 3LL;
              *((value *) $y_879 + -1LL) = 2048LL;
              *((value *) $y_879 + 0LL) = $y_876;
              *((value *) $y_879 + 1LL) = $y_878;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_879;
              break;
            default:
              $y_880 = 1LL;
              $y_881 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_881 + -1LL) = 1024LL;
              *((value *) $y_881 + 0LL) = $y_880;
              $y_882 = 1LL;
              $y_883 = (value) ($alloc + 1LL);
              $alloc = $alloc + 3LL;
              *((value *) $y_883 + -1LL) = 2048LL;
              *((value *) $y_883 + 0LL) = $y_881;
              *((value *) $y_883 + 1LL) = $y_882;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_883;
              break;

          }
        }
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdopp_known_133(struct thread_info *$tinfo, value $x_793)
{
  struct stack_frame frame;
  value root[1];
  register value $y_794;
  register value $x_795;
  register value $y_796;
  register value $x_797;
  register value $y_798;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_793;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_793 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_793 & 1) == 0) {
    switch (*((value *) $x_793 + -1LL) & 255LL) {
      case 0:
        $x_795 = *((value *) $x_793 + 0LL);
        $y_796 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_796 + -1LL) = 1025LL;
        *((value *) $y_796 + 0LL) = $x_795;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_796;
        break;
      default:
        $x_797 = *((value *) $x_793 + 0LL);
        $y_798 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_798 + -1LL) = 1024LL;
        *((value *) $y_798 + 0LL) = $x_797;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_798;
        break;

    }
  } else {
    switch ($x_793 >> 1LL) {
      default:
        $y_794 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_794;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdmul_uncurried_known_132(struct thread_info *$tinfo, value $y_769, value $x_770)
{
  struct stack_frame frame;
  value root[2];
  register value $y_771;
  register value $xp_772;
  register value $y_773;
  register value $yp_774;
  register value $y_776;
  register value $y_777;
  register value $yp_778;
  register value $y_780;
  register value $y_781;
  register value $xp_782;
  register value $y_783;
  register value $yp_784;
  register value $y_786;
  register value $y_787;
  register value $yp_788;
  register value $y_790;
  register value $y_791;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($x_770 & 1) == 0) {
    switch (*((value *) $x_770 + -1LL) & 255LL) {
      case 0:
        $xp_772 = *((value *) $x_770 + 0LL);
        if (($y_769 & 1) == 0) {
          switch (*((value *) $y_769 + -1LL) & 255LL) {
            case 0:
              $yp_774 = *((value *) $y_769 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_776 =
                ((value (*)(struct thread_info *, value, value)) mul_uncurried_known_131)
                ($tinfo, $yp_774, $xp_772);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_776;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_776 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_777 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_777 + -1LL) = 1024LL;
              *((value *) $y_777 + 0LL) = $y_776;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_777;
              break;
            default:
              $yp_778 = *((value *) $y_769 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_780 =
                ((value (*)(struct thread_info *, value, value)) mul_uncurried_known_131)
                ($tinfo, $yp_778, $xp_772);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_780;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_780 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_781 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_781 + -1LL) = 1025LL;
              *((value *) $y_781 + 0LL) = $y_780;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_781;
              break;

          }
        } else {
          switch ($y_769 >> 1LL) {
            default:
              $y_773 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_773;
              break;

          }
        }
        break;
      default:
        $xp_782 = *((value *) $x_770 + 0LL);
        if (($y_769 & 1) == 0) {
          switch (*((value *) $y_769 + -1LL) & 255LL) {
            case 0:
              $yp_784 = *((value *) $y_769 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_786 =
                ((value (*)(struct thread_info *, value, value)) mul_uncurried_known_131)
                ($tinfo, $yp_784, $xp_782);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_786;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_786 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_787 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_787 + -1LL) = 1025LL;
              *((value *) $y_787 + 0LL) = $y_786;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_787;
              break;
            default:
              $yp_788 = *((value *) $y_769 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_790 =
                ((value (*)(struct thread_info *, value, value)) mul_uncurried_known_131)
                ($tinfo, $yp_788, $xp_782);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_790;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_790 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_791 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_791 + -1LL) = 1024LL;
              *((value *) $y_791 + 0LL) = $y_790;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_791;
              break;

          }
        } else {
          switch ($y_769 >> 1LL) {
            default:
              $y_783 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_783;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_770 >> 1LL) {
      default:
        $y_771 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_771;
        break;

    }
  }
}

value mul_uncurried_known_131(struct thread_info *$tinfo, value $y_759, value $x_760)
{
  struct stack_frame frame;
  value root[2];
  register value $p_761;
  register value $y_762;
  register value $y_763;
  register value $p_765;
  register value $y_766;
  register value $y_767;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($x_760 & 1) == 0) {
    switch (*((value *) $x_760 + -1LL) & 255LL) {
      case 0:
        $p_761 = *((value *) $x_760 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $y_759;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_762 =
          ((value (*)(struct thread_info *, value, value)) mul_uncurried_known_131)
          ($tinfo, $y_759, $p_761);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 1LL) = $y_762;
          frame.next = root + 2LL;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_762 = *(root + 1LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $y_759 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_763 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_763 + -1LL) = 1025LL;
        *((value *) $y_763 + 0LL) = $y_762;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
          ($tinfo, $y_763, $y_759);
        return $result;
        break;
      default:
        $p_765 = *((value *) $x_760 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_766 =
          ((value (*)(struct thread_info *, value, value)) mul_uncurried_known_131)
          ($tinfo, $y_759, $p_765);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_766;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_766 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_767 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_767 + -1LL) = 1025LL;
        *((value *) $y_767 + 0LL) = $y_766;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_767;
        break;

    }
  } else {
    switch ($x_760 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_759;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdadd_uncurried_known_130(struct thread_info *$tinfo, value $y_742, value $x_743)
{
  struct stack_frame frame;
  value root[2];
  register value $xp_744;
  register value $yp_745;
  register value $y_747;
  register value $y_748;
  register value $yp_749;
  register value $xp_751;
  register value $yp_752;
  register value $yp_754;
  register value $y_756;
  register value $y_757;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($x_743 & 1) == 0) {
    switch (*((value *) $x_743 + -1LL) & 255LL) {
      case 0:
        $xp_744 = *((value *) $x_743 + 0LL);
        if (($y_742 & 1) == 0) {
          switch (*((value *) $y_742 + -1LL) & 255LL) {
            case 0:
              $yp_745 = *((value *) $y_742 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_747 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
                ($tinfo, $yp_745, $xp_744);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_747;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_747 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_748 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_748 + -1LL) = 1024LL;
              *((value *) $y_748 + 0LL) = $y_747;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_748;
              break;
            default:
              $yp_749 = *((value *) $y_742 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_129)
                ($tinfo, $yp_749, $xp_744);
              return $result;
              break;

          }
        } else {
          switch ($y_742 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $x_743;
              break;

          }
        }
        break;
      default:
        $xp_751 = *((value *) $x_743 + 0LL);
        if (($y_742 & 1) == 0) {
          switch (*((value *) $y_742 + -1LL) & 255LL) {
            case 0:
              $yp_752 = *((value *) $y_742 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_129)
                ($tinfo, $xp_751, $yp_752);
              return $result;
              break;
            default:
              $yp_754 = *((value *) $y_742 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_756 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
                ($tinfo, $yp_754, $xp_751);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_756;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_756 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_757 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_757 + -1LL) = 1025LL;
              *((value *) $y_757 + 0LL) = $y_756;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_757;
              break;

          }
        } else {
          switch ($y_742 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $x_743;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_743 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_742;
        break;

    }
  }
}

value pos_sub_uncurried_known_129(struct thread_info *$tinfo, value $y_696, value $x_697)
{
  struct stack_frame frame;
  value root[2];
  register value $p_698;
  register value $q_699;
  register value $y_700;
  register value $q_702;
  register value $y_703;
  register value $y_704;
  register value $y_705;
  register value $p_706;
  register value $y_707;
  register value $y_708;
  register value $p_709;
  register value $y_711;
  register value $y_712;
  register value $y_713;
  register value $y_714;
  register value $p_715;
  register value $q_716;
  register value $y_717;
  register value $y_718;
  register value $y_719;
  register value $p_720;
  register value $y_722;
  register value $y_723;
  register value $p_724;
  register value $y_725;
  register value $y_726;
  register value $q_727;
  register value $y_728;
  register value $y_731;
  register value $y_732;
  register value $q_733;
  register value $y_734;
  register value $y_735;
  register value $q_736;
  register value $y_738;
  register value $y_739;
  register value $y_740;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_697;
    *(root + 0LL) = $y_696;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_697 = *(root + 1LL);
    $y_696 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_697 & 1) == 0) {
    switch (*((value *) $x_697 + -1LL) & 255LL) {
      case 0:
        $p_698 = *((value *) $x_697 + 0LL);
        if (($y_696 & 1) == 0) {
          switch (*((value *) $y_696 + -1LL) & 255LL) {
            case 0:
              $q_699 = *((value *) $y_696 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_700 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_129)
                ($tinfo, $q_699, $p_698);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZddouble_known_127)
                ($tinfo, $y_700);
              return $result;
              break;
            default:
              $q_702 = *((value *) $y_696 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_703 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_129)
                ($tinfo, $q_702, $p_698);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_703;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_703 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              if (($y_703 & 1) == 0) {
                switch (*((value *) $y_703 + -1LL) & 255LL) {
                  case 0:
                    $p_706 = *((value *) $y_703 + 0LL);
                    $y_707 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_707 + -1LL) = 1024LL;
                    *((value *) $y_707 + 0LL) = $p_706;
                    $y_708 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_708 + -1LL) = 1024LL;
                    *((value *) $y_708 + 0LL) = $y_707;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_708;
                    break;
                  default:
                    $p_709 = *((value *) $y_703 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $y_711 =
                      ((value (*)(struct thread_info *, value)) pred_double_known_128)
                      ($tinfo, $p_709);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(2LL <= $limit - $alloc)) {
                      *(root + 0LL) = $y_711;
                      frame.next = root + 1LL;
                      (*$tinfo).fp = &frame;
                      (*$tinfo).nalloc = 2LL;
                      garbage_collect($tinfo);
                      $y_711 = *(root + 0LL);
                      (*$tinfo).fp = frame.prev;
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    /*skip*/;
                    $y_712 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_712 + -1LL) = 1025LL;
                    *((value *) $y_712 + 0LL) = $y_711;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_712;
                    break;

                }
              } else {
                switch ($y_703 >> 1LL) {
                  default:
                    $y_704 = 1LL;
                    $y_705 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_705 + -1LL) = 1024LL;
                    *((value *) $y_705 + 0LL) = $y_704;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_705;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_696 >> 1LL) {
            default:
              $y_713 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_713 + -1LL) = 1025LL;
              *((value *) $y_713 + 0LL) = $p_698;
              $y_714 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_714 + -1LL) = 1024LL;
              *((value *) $y_714 + 0LL) = $y_713;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_714;
              break;

          }
        }
        break;
      default:
        $p_715 = *((value *) $x_697 + 0LL);
        if (($y_696 & 1) == 0) {
          switch (*((value *) $y_696 + -1LL) & 255LL) {
            case 0:
              $q_716 = *((value *) $y_696 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_717 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_129)
                ($tinfo, $q_716, $p_715);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_717;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_717 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              if (($y_717 & 1) == 0) {
                switch (*((value *) $y_717 + -1LL) & 255LL) {
                  case 0:
                    $p_720 = *((value *) $y_717 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $y_722 =
                      ((value (*)(struct thread_info *, value)) pred_double_known_128)
                      ($tinfo, $p_720);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(2LL <= $limit - $alloc)) {
                      *(root + 0LL) = $y_722;
                      frame.next = root + 1LL;
                      (*$tinfo).fp = &frame;
                      (*$tinfo).nalloc = 2LL;
                      garbage_collect($tinfo);
                      $y_722 = *(root + 0LL);
                      (*$tinfo).fp = frame.prev;
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    /*skip*/;
                    $y_723 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_723 + -1LL) = 1024LL;
                    *((value *) $y_723 + 0LL) = $y_722;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_723;
                    break;
                  default:
                    $p_724 = *((value *) $y_717 + 0LL);
                    $y_725 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_725 + -1LL) = 1024LL;
                    *((value *) $y_725 + 0LL) = $p_724;
                    $y_726 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_726 + -1LL) = 1025LL;
                    *((value *) $y_726 + 0LL) = $y_725;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_726;
                    break;

                }
              } else {
                switch ($y_717 >> 1LL) {
                  default:
                    $y_718 = 1LL;
                    $y_719 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_719 + -1LL) = 1025LL;
                    *((value *) $y_719 + 0LL) = $y_718;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_719;
                    break;

                }
              }
              break;
            default:
              $q_727 = *((value *) $y_696 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_728 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_129)
                ($tinfo, $q_727, $p_715);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZddouble_known_127)
                ($tinfo, $y_728);
              return $result;
              break;

          }
        } else {
          switch ($y_696 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_731 =
                ((value (*)(struct thread_info *, value)) pred_double_known_128)
                ($tinfo, $p_715);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_731;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_731 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_732 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_732 + -1LL) = 1024LL;
              *((value *) $y_732 + 0LL) = $y_731;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_732;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_697 >> 1LL) {
      default:
        if (($y_696 & 1) == 0) {
          switch (*((value *) $y_696 + -1LL) & 255LL) {
            case 0:
              $q_733 = *((value *) $y_696 + 0LL);
              $y_734 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_734 + -1LL) = 1025LL;
              *((value *) $y_734 + 0LL) = $q_733;
              $y_735 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_735 + -1LL) = 1025LL;
              *((value *) $y_735 + 0LL) = $y_734;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_735;
              break;
            default:
              $q_736 = *((value *) $y_696 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_738 =
                ((value (*)(struct thread_info *, value)) pred_double_known_128)
                ($tinfo, $q_736);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_738;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_738 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_739 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_739 + -1LL) = 1025LL;
              *((value *) $y_739 + 0LL) = $y_738;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_739;
              break;

          }
        } else {
          switch ($y_696 >> 1LL) {
            default:
              $y_740 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_740;
              break;

          }
        }
        break;

    }
  }
}

value pred_double_known_128(struct thread_info *$tinfo, value $x_687)
{
  struct stack_frame frame;
  value root[1];
  register value $p_688;
  register value $y_689;
  register value $y_690;
  register value $p_691;
  register value $y_692;
  register value $y_693;
  register value $y_694;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_687;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_687 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_687 & 1) == 0) {
    switch (*((value *) $x_687 + -1LL) & 255LL) {
      case 0:
        $p_688 = *((value *) $x_687 + 0LL);
        $y_689 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_689 + -1LL) = 1025LL;
        *((value *) $y_689 + 0LL) = $p_688;
        $y_690 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_690 + -1LL) = 1024LL;
        *((value *) $y_690 + 0LL) = $y_689;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_690;
        break;
      default:
        $p_691 = *((value *) $x_687 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_692 =
          ((value (*)(struct thread_info *, value)) pred_double_known_128)
          ($tinfo, $p_691);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_692;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_692 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_693 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_693 + -1LL) = 1024LL;
        *((value *) $y_693 + 0LL) = $y_692;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_693;
        break;

    }
  } else {
    switch ($x_687 >> 1LL) {
      default:
        $y_694 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_694;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZddouble_known_127(struct thread_info *$tinfo, value $x_678)
{
  struct stack_frame frame;
  value root[1];
  register value $y_679;
  register value $p_680;
  register value $y_681;
  register value $y_682;
  register value $p_683;
  register value $y_684;
  register value $y_685;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_678;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_678 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_678 & 1) == 0) {
    switch (*((value *) $x_678 + -1LL) & 255LL) {
      case 0:
        $p_680 = *((value *) $x_678 + 0LL);
        $y_681 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_681 + -1LL) = 1025LL;
        *((value *) $y_681 + 0LL) = $p_680;
        $y_682 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_682 + -1LL) = 1024LL;
        *((value *) $y_682 + 0LL) = $y_681;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_682;
        break;
      default:
        $p_683 = *((value *) $x_678 + 0LL);
        $y_684 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_684 + -1LL) = 1025LL;
        *((value *) $y_684 + 0LL) = $p_683;
        $y_685 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_685 + -1LL) = 1025LL;
        *((value *) $y_685 + 0LL) = $y_684;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_685;
        break;

    }
  } else {
    switch ($x_678 >> 1LL) {
      default:
        $y_679 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_679;
        break;

    }
  }
}

value add_carry_uncurried_known_126(struct thread_info *$tinfo, value $y_645, value $x_646)
{
  struct stack_frame frame;
  value root[2];
  register value $p_647;
  register value $q_648;
  register value $y_649;
  register value $y_650;
  register value $q_651;
  register value $y_652;
  register value $y_653;
  register value $y_655;
  register value $y_656;
  register value $p_657;
  register value $q_658;
  register value $y_659;
  register value $y_660;
  register value $q_661;
  register value $y_662;
  register value $y_663;
  register value $y_665;
  register value $y_666;
  register value $q_667;
  register value $y_669;
  register value $y_670;
  register value $q_671;
  register value $y_673;
  register value $y_674;
  register value $y_675;
  register value $y_676;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_646;
    *(root + 0LL) = $y_645;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_646 = *(root + 1LL);
    $y_645 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_646 & 1) == 0) {
    switch (*((value *) $x_646 + -1LL) & 255LL) {
      case 0:
        $p_647 = *((value *) $x_646 + 0LL);
        if (($y_645 & 1) == 0) {
          switch (*((value *) $y_645 + -1LL) & 255LL) {
            case 0:
              $q_648 = *((value *) $y_645 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_649 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_126)
                ($tinfo, $q_648, $p_647);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_649;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_649 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_650 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_650 + -1LL) = 1024LL;
              *((value *) $y_650 + 0LL) = $y_649;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_650;
              break;
            default:
              $q_651 = *((value *) $y_645 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_652 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_126)
                ($tinfo, $q_651, $p_647);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_652;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_652 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_653 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_653 + -1LL) = 1025LL;
              *((value *) $y_653 + 0LL) = $y_652;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_653;
              break;

          }
        } else {
          switch ($y_645 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_655 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $p_647);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_655;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_655 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_656 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_656 + -1LL) = 1024LL;
              *((value *) $y_656 + 0LL) = $y_655;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_656;
              break;

          }
        }
        break;
      default:
        $p_657 = *((value *) $x_646 + 0LL);
        if (($y_645 & 1) == 0) {
          switch (*((value *) $y_645 + -1LL) & 255LL) {
            case 0:
              $q_658 = *((value *) $y_645 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_659 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_126)
                ($tinfo, $q_658, $p_657);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_659;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_659 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_660 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_660 + -1LL) = 1025LL;
              *((value *) $y_660 + 0LL) = $y_659;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_660;
              break;
            default:
              $q_661 = *((value *) $y_645 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_662 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
                ($tinfo, $q_661, $p_657);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_662;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_662 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_663 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_663 + -1LL) = 1024LL;
              *((value *) $y_663 + 0LL) = $y_662;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_663;
              break;

          }
        } else {
          switch ($y_645 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_665 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $p_657);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_665;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_665 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_666 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_666 + -1LL) = 1025LL;
              *((value *) $y_666 + 0LL) = $y_665;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_666;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_646 >> 1LL) {
      default:
        if (($y_645 & 1) == 0) {
          switch (*((value *) $y_645 + -1LL) & 255LL) {
            case 0:
              $q_667 = *((value *) $y_645 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_669 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $q_667);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_669;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_669 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_670 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_670 + -1LL) = 1024LL;
              *((value *) $y_670 + 0LL) = $y_669;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_670;
              break;
            default:
              $q_671 = *((value *) $y_645 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_673 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $q_671);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_673;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_673 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_674 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_674 + -1LL) = 1025LL;
              *((value *) $y_674 + 0LL) = $y_673;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_674;
              break;

          }
        } else {
          switch ($y_645 >> 1LL) {
            default:
              $y_675 = 1LL;
              $y_676 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_676 + -1LL) = 1024LL;
              *((value *) $y_676 + 0LL) = $y_675;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_676;
              break;

          }
        }
        break;

    }
  }
}

value add_uncurried_known_125(struct thread_info *$tinfo, value $y_616, value $x_617)
{
  struct stack_frame frame;
  value root[2];
  register value $p_618;
  register value $q_619;
  register value $y_620;
  register value $y_621;
  register value $q_622;
  register value $y_623;
  register value $y_624;
  register value $y_626;
  register value $y_627;
  register value $p_628;
  register value $q_629;
  register value $y_630;
  register value $y_631;
  register value $q_632;
  register value $y_633;
  register value $y_634;
  register value $y_635;
  register value $q_636;
  register value $y_638;
  register value $y_639;
  register value $q_640;
  register value $y_641;
  register value $y_642;
  register value $y_643;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_617;
    *(root + 0LL) = $y_616;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_617 = *(root + 1LL);
    $y_616 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_617 & 1) == 0) {
    switch (*((value *) $x_617 + -1LL) & 255LL) {
      case 0:
        $p_618 = *((value *) $x_617 + 0LL);
        if (($y_616 & 1) == 0) {
          switch (*((value *) $y_616 + -1LL) & 255LL) {
            case 0:
              $q_619 = *((value *) $y_616 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_620 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_126)
                ($tinfo, $q_619, $p_618);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_620;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_620 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_621 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_621 + -1LL) = 1025LL;
              *((value *) $y_621 + 0LL) = $y_620;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_621;
              break;
            default:
              $q_622 = *((value *) $y_616 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_623 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
                ($tinfo, $q_622, $p_618);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_623;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_623 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_624 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_624 + -1LL) = 1024LL;
              *((value *) $y_624 + 0LL) = $y_623;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_624;
              break;

          }
        } else {
          switch ($y_616 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_626 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $p_618);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_626;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_626 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_627 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_627 + -1LL) = 1025LL;
              *((value *) $y_627 + 0LL) = $y_626;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_627;
              break;

          }
        }
        break;
      default:
        $p_628 = *((value *) $x_617 + 0LL);
        if (($y_616 & 1) == 0) {
          switch (*((value *) $y_616 + -1LL) & 255LL) {
            case 0:
              $q_629 = *((value *) $y_616 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_630 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
                ($tinfo, $q_629, $p_628);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_630;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_630 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_631 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_631 + -1LL) = 1024LL;
              *((value *) $y_631 + 0LL) = $y_630;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_631;
              break;
            default:
              $q_632 = *((value *) $y_616 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_633 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_125)
                ($tinfo, $q_632, $p_628);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_633;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_633 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_634 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_634 + -1LL) = 1025LL;
              *((value *) $y_634 + 0LL) = $y_633;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_634;
              break;

          }
        } else {
          switch ($y_616 >> 1LL) {
            default:
              $y_635 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_635 + -1LL) = 1024LL;
              *((value *) $y_635 + 0LL) = $p_628;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_635;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_617 >> 1LL) {
      default:
        if (($y_616 & 1) == 0) {
          switch (*((value *) $y_616 + -1LL) & 255LL) {
            case 0:
              $q_636 = *((value *) $y_616 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_638 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $q_636);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_638;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_638 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_639 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_639 + -1LL) = 1025LL;
              *((value *) $y_639 + 0LL) = $y_638;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_639;
              break;
            default:
              $q_640 = *((value *) $y_616 + 0LL);
              $y_641 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_641 + -1LL) = 1024LL;
              *((value *) $y_641 + 0LL) = $q_640;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_641;
              break;

          }
        } else {
          switch ($y_616 >> 1LL) {
            default:
              $y_642 = 1LL;
              $y_643 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_643 + -1LL) = 1025LL;
              *((value *) $y_643 + 0LL) = $y_642;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_643;
              break;

          }
        }
        break;

    }
  }
}

value succ_known_124(struct thread_info *$tinfo, value $x_607)
{
  struct stack_frame frame;
  value root[1];
  register value $p_608;
  register value $y_609;
  register value $y_610;
  register value $p_611;
  register value $y_612;
  register value $y_613;
  register value $y_614;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_607;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_607 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_607 & 1) == 0) {
    switch (*((value *) $x_607 + -1LL) & 255LL) {
      case 0:
        $p_608 = *((value *) $x_607 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_609 =
          ((value (*)(struct thread_info *, value)) succ_known_124)
          ($tinfo, $p_608);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_609;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_609 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_610 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_610 + -1LL) = 1025LL;
        *((value *) $y_610 + 0LL) = $y_609;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_610;
        break;
      default:
        $p_611 = *((value *) $x_607 + 0LL);
        $y_612 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_612 + -1LL) = 1024LL;
        *((value *) $y_612 + 0LL) = $p_611;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_612;
        break;

    }
  } else {
    switch ($x_607 >> 1LL) {
      default:
        $y_613 = 1LL;
        $y_614 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_614 + -1LL) = 1025LL;
        *((value *) $y_614 + 0LL) = $y_613;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_614;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdltb_uncurried_known_123(struct thread_info *$tinfo, value $y_598, value $x_599, value $y_600)
{
  struct stack_frame frame;
  value root[3];
  register value $y_602;
  register value $y_603;
  register value $y_604;
  register value $y_605;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  $y_602 =
    ((value (*)(struct thread_info *, value, value, value)) CoqdZArithdBinIntDefdZdcompare_uncurried_known_122)
    ($tinfo, $y_598, $x_599, $y_600);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  if (($y_602 & 1) == 0) {
    switch (*((value *) $y_602 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_602 >> 1LL) {
      case 0:
        $y_603 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_603;
        break;
      case 1:
        $y_604 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_604;
        break;
      default:
        $y_605 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_605;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdcompare_uncurried_known_122(struct thread_info *$tinfo, value $y_577, value $x_578, value $y_579)
{
  struct stack_frame frame;
  value root[3];
  register value $y_580;
  register value $y_581;
  register value $y_582;
  register value $xp_583;
  register value $y_584;
  register value $yp_585;
  register value $y_587;
  register value $xp_588;
  register value $y_589;
  register value $y_590;
  register value $yp_591;
  register value $y_593;
  register value $y_594;
  register value $y_595;
  register value $y_596;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($x_578 & 1) == 0) {
    switch (*((value *) $x_578 + -1LL) & 255LL) {
      case 0:
        $xp_583 = *((value *) $x_578 + 0LL);
        if (($y_577 & 1) == 0) {
          switch (*((value *) $y_577 + -1LL) & 255LL) {
            case 0:
              $yp_585 = *((value *) $y_577 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_121)
                ($tinfo, $yp_585, $xp_583, $y_579);
              return $result;
              break;
            default:
              $y_587 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_587;
              break;

          }
        } else {
          switch ($y_577 >> 1LL) {
            default:
              $y_584 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_584;
              break;

          }
        }
        break;
      default:
        $xp_588 = *((value *) $x_578 + 0LL);
        if (($y_577 & 1) == 0) {
          switch (*((value *) $y_577 + -1LL) & 255LL) {
            case 0:
              $y_590 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_590;
              break;
            default:
              $yp_591 = *((value *) $y_577 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_593 =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_121)
                ($tinfo, $yp_591, $xp_588, $y_579);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              if (($y_593 & 1) == 0) {
                switch (*((value *) $y_593 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_593 >> 1LL) {
                  case 0:
                    $y_594 = 1LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_594;
                    break;
                  case 1:
                    $y_595 = 5LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_595;
                    break;
                  default:
                    $y_596 = 3LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_596;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_577 >> 1LL) {
            default:
              $y_589 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_589;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_578 >> 1LL) {
      default:
        if (($y_577 & 1) == 0) {
          switch (*((value *) $y_577 + -1LL) & 255LL) {
            case 0:
              $y_581 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_581;
              break;
            default:
              $y_582 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_582;
              break;

          }
        } else {
          switch ($y_577 >> 1LL) {
            default:
              $y_580 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_580;
              break;

          }
        }
        break;

    }
  }
}

value compare_cont_uncurried_uncurried_known_121(struct thread_info *$tinfo, value $y_561, value $x_562, value $r_563)
{
  struct stack_frame frame;
  value root[3];
  register value $p_564;
  register value $q_565;
  register value $q_566;
  register value $y_567;
  register value $y_568;
  register value $p_569;
  register value $q_570;
  register value $y_571;
  register value $q_572;
  register value $y_573;
  register value $y_574;
  register value $y_575;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($x_562 & 1) == 0) {
    switch (*((value *) $x_562 + -1LL) & 255LL) {
      case 0:
        $p_564 = *((value *) $x_562 + 0LL);
        if (($y_561 & 1) == 0) {
          switch (*((value *) $y_561 + -1LL) & 255LL) {
            case 0:
              $q_565 = *((value *) $y_561 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_121)
                ($tinfo, $q_565, $p_564, $r_563);
              return $result;
              break;
            default:
              $q_566 = *((value *) $y_561 + 0LL);
              $y_567 = 5LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_121)
                ($tinfo, $q_566, $p_564, $y_567);
              return $result;
              break;

          }
        } else {
          switch ($y_561 >> 1LL) {
            default:
              $y_568 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_568;
              break;

          }
        }
        break;
      default:
        $p_569 = *((value *) $x_562 + 0LL);
        if (($y_561 & 1) == 0) {
          switch (*((value *) $y_561 + -1LL) & 255LL) {
            case 0:
              $q_570 = *((value *) $y_561 + 0LL);
              $y_571 = 3LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_121)
                ($tinfo, $q_570, $p_569, $y_571);
              return $result;
              break;
            default:
              $q_572 = *((value *) $y_561 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_121)
                ($tinfo, $q_572, $p_569, $r_563);
              return $result;
              break;

          }
        } else {
          switch ($y_561 >> 1LL) {
            default:
              $y_573 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_573;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_562 >> 1LL) {
      default:
        if (($y_561 & 1) == 0) {
          switch (*((value *) $y_561 + -1LL) & 255LL) {
            case 0:
              $y_574 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_574;
              break;
            default:
              $y_575 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_575;
              break;

          }
        } else {
          switch ($y_561 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $r_563;
              break;

          }
        }
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_wrapper_120(struct thread_info *$tinfo, value $env_557, value $reg_id_558)
{
  struct stack_frame frame;
  value root[1];
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value)) CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_known_119)
    ($tinfo, $reg_id_558);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatddisable_sound_known_119(struct thread_info *$tinfo, value $reg_id_300)
{
  struct stack_frame frame;
  value root[2];
  register value $prim_301;
  register value $y_302;
  register value $y_303;
  register value $y_304;
  register value $y_305;
  register value $y_306;
  register value $y_307;
  register value $y_308;
  register value $y_309;
  register value $y_310;
  register value $y_311;
  register value $y_312;
  register value $y_313;
  register value $y_314;
  register value $y_315;
  register value $y_316;
  register value $y_317;
  register value $y_318;
  register value $y_319;
  register value $y_320;
  register value $y_321;
  register value $y_322;
  register value $y_323;
  register value $y_324;
  register value $y_325;
  register value $y_326;
  register value $y_327;
  register value $y_328;
  register value $y_329;
  register value $y_330;
  register value $y_331;
  register value $y_332;
  register value $y_333;
  register value $y_334;
  register value $y_335;
  register value $y_336;
  register value $y_337;
  register value $y_338;
  register value $y_339;
  register value $y_340;
  register value $y_341;
  register value $y_342;
  register value $y_343;
  register value $y_344;
  register value $y_345;
  register value $y_346;
  register value $y_347;
  register value $y_348;
  register value $y_349;
  register value $y_350;
  register value $y_351;
  register value $y_352;
  register value $y_353;
  register value $y_354;
  register value $y_355;
  register value $y_356;
  register value $y_357;
  register value $y_358;
  register value $y_359;
  register value $y_360;
  register value $y_361;
  register value $y_362;
  register value $y_363;
  register value $y_364;
  register value $y_365;
  register value $y_366;
  register value $y_367;
  register value $y_368;
  register value $y_369;
  register value $y_370;
  register value $y_371;
  register value $y_372;
  register value $y_373;
  register value $y_374;
  register value $y_375;
  register value $y_376;
  register value $y_377;
  register value $y_378;
  register value $y_379;
  register value $y_380;
  register value $y_381;
  register value $y_382;
  register value $y_383;
  register value $y_384;
  register value $y_385;
  register value $y_386;
  register value $y_387;
  register value $y_388;
  register value $y_389;
  register value $y_390;
  register value $y_391;
  register value $y_392;
  register value $y_393;
  register value $y_394;
  register value $y_395;
  register value $y_396;
  register value $y_397;
  register value $y_398;
  register value $y_399;
  register value $y_400;
  register value $y_401;
  register value $y_402;
  register value $y_403;
  register value $y_404;
  register value $y_405;
  register value $y_406;
  register value $y_407;
  register value $y_408;
  register value $y_409;
  register value $y_410;
  register value $y_411;
  register value $y_412;
  register value $y_413;
  register value $y_414;
  register value $y_415;
  register value $y_416;
  register value $y_417;
  register value $y_418;
  register value $y_419;
  register value $y_420;
  register value $y_421;
  register value $y_422;
  register value $y_423;
  register value $y_424;
  register value $y_425;
  register value $y_426;
  register value $y_427;
  register value $y_428;
  register value $y_429;
  register value $y_430;
  register value $y_431;
  register value $y_432;
  register value $y_433;
  register value $y_434;
  register value $y_435;
  register value $y_436;
  register value $y_437;
  register value $y_438;
  register value $y_439;
  register value $y_440;
  register value $y_441;
  register value $y_442;
  register value $y_443;
  register value $y_444;
  register value $y_445;
  register value $y_446;
  register value $y_447;
  register value $y_448;
  register value $y_449;
  register value $y_450;
  register value $y_451;
  register value $y_452;
  register value $y_453;
  register value $y_454;
  register value $y_455;
  register value $y_456;
  register value $y_457;
  register value $y_458;
  register value $y_459;
  register value $y_460;
  register value $y_461;
  register value $y_462;
  register value $y_463;
  register value $y_464;
  register value $y_465;
  register value $y_466;
  register value $y_467;
  register value $y_468;
  register value $y_469;
  register value $y_470;
  register value $y_471;
  register value $y_472;
  register value $y_473;
  register value $y_474;
  register value $y_475;
  register value $y_476;
  register value $y_477;
  register value $y_478;
  register value $y_479;
  register value $y_480;
  register value $y_481;
  register value $y_482;
  register value $y_483;
  register value $y_484;
  register value $y_485;
  register value $y_486;
  register value $y_487;
  register value $y_488;
  register value $y_489;
  register value $y_490;
  register value $y_491;
  register value $y_492;
  register value $y_493;
  register value $y_494;
  register value $y_495;
  register value $y_496;
  register value $y_497;
  register value $y_498;
  register value $y_499;
  register value $y_500;
  register value $y_501;
  register value $y_502;
  register value $y_503;
  register value $y_504;
  register value $y_505;
  register value $y_506;
  register value $y_507;
  register value $y_508;
  register value $y_509;
  register value $y_510;
  register value $y_511;
  register value $y_512;
  register value $y_513;
  register value $y_514;
  register value $y_515;
  register value $y_516;
  register value $y_517;
  register value $y_518;
  register value $y_519;
  register value $y_520;
  register value $y_521;
  register value $y_522;
  register value $y_523;
  register value $y_524;
  register value $y_525;
  register value $y_526;
  register value $y_527;
  register value $y_528;
  register value $y_529;
  register value $y_530;
  register value $y_531;
  register value $y_532;
  register value $y_533;
  register value $y_534;
  register value $y_535;
  register value $y_536;
  register value $y_537;
  register value $y_538;
  register value $y_539;
  register value $y_540;
  register value $y_541;
  register value $y_542;
  register value $y_543;
  register value $y_544;
  register value $y_545;
  register value $y_546;
  register value $y_547;
  register value $y_548;
  register value $y_549;
  register value $y_550;
  register value $y_551;
  register value $y_552;
  register value $y_553;
  register value $y_554;
  register value $prim_555;
  register value $prim_556;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(504LL <= $limit - $alloc)) {
    *(root + 0LL) = $reg_id_300;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 504LL;
    garbage_collect($tinfo);
    $reg_id_300 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $reg_id_300;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $prim_301 =
    ((value (*)(struct thread_info *, value)) in8_p)
    ($tinfo, $reg_id_300);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(504LL <= $limit - $alloc)) {
    *(root + 1LL) = $prim_301;
    frame.next = root + 2LL;
    (*$tinfo).nalloc = 504LL;
    garbage_collect($tinfo);
    $prim_301 = *(root + 1LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $reg_id_300 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_302 = 1LL;
  $y_303 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_303 + -1LL) = 1024LL;
  *((value *) $y_303 + 0LL) = $y_302;
  $y_304 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_304 + -1LL) = 1024LL;
  *((value *) $y_304 + 0LL) = $y_303;
  $y_305 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_305 + -1LL) = 1024LL;
  *((value *) $y_305 + 0LL) = $y_304;
  $y_306 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_306 + -1LL) = 1024LL;
  *((value *) $y_306 + 0LL) = $y_305;
  $y_307 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_307 + -1LL) = 1024LL;
  *((value *) $y_307 + 0LL) = $y_306;
  $y_308 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_308 + -1LL) = 1024LL;
  *((value *) $y_308 + 0LL) = $y_307;
  $y_309 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_309 + -1LL) = 1024LL;
  *((value *) $y_309 + 0LL) = $y_308;
  $y_310 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_310 + -1LL) = 1024LL;
  *((value *) $y_310 + 0LL) = $y_309;
  $y_311 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_311 + -1LL) = 1024LL;
  *((value *) $y_311 + 0LL) = $y_310;
  $y_312 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_312 + -1LL) = 1024LL;
  *((value *) $y_312 + 0LL) = $y_311;
  $y_313 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_313 + -1LL) = 1024LL;
  *((value *) $y_313 + 0LL) = $y_312;
  $y_314 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_314 + -1LL) = 1024LL;
  *((value *) $y_314 + 0LL) = $y_313;
  $y_315 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_315 + -1LL) = 1024LL;
  *((value *) $y_315 + 0LL) = $y_314;
  $y_316 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_316 + -1LL) = 1024LL;
  *((value *) $y_316 + 0LL) = $y_315;
  $y_317 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_317 + -1LL) = 1024LL;
  *((value *) $y_317 + 0LL) = $y_316;
  $y_318 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_318 + -1LL) = 1024LL;
  *((value *) $y_318 + 0LL) = $y_317;
  $y_319 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_319 + -1LL) = 1024LL;
  *((value *) $y_319 + 0LL) = $y_318;
  $y_320 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_320 + -1LL) = 1024LL;
  *((value *) $y_320 + 0LL) = $y_319;
  $y_321 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_321 + -1LL) = 1024LL;
  *((value *) $y_321 + 0LL) = $y_320;
  $y_322 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_322 + -1LL) = 1024LL;
  *((value *) $y_322 + 0LL) = $y_321;
  $y_323 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_323 + -1LL) = 1024LL;
  *((value *) $y_323 + 0LL) = $y_322;
  $y_324 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_324 + -1LL) = 1024LL;
  *((value *) $y_324 + 0LL) = $y_323;
  $y_325 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_325 + -1LL) = 1024LL;
  *((value *) $y_325 + 0LL) = $y_324;
  $y_326 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_326 + -1LL) = 1024LL;
  *((value *) $y_326 + 0LL) = $y_325;
  $y_327 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_327 + -1LL) = 1024LL;
  *((value *) $y_327 + 0LL) = $y_326;
  $y_328 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_328 + -1LL) = 1024LL;
  *((value *) $y_328 + 0LL) = $y_327;
  $y_329 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_329 + -1LL) = 1024LL;
  *((value *) $y_329 + 0LL) = $y_328;
  $y_330 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_330 + -1LL) = 1024LL;
  *((value *) $y_330 + 0LL) = $y_329;
  $y_331 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_331 + -1LL) = 1024LL;
  *((value *) $y_331 + 0LL) = $y_330;
  $y_332 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_332 + -1LL) = 1024LL;
  *((value *) $y_332 + 0LL) = $y_331;
  $y_333 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_333 + -1LL) = 1024LL;
  *((value *) $y_333 + 0LL) = $y_332;
  $y_334 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_334 + -1LL) = 1024LL;
  *((value *) $y_334 + 0LL) = $y_333;
  $y_335 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_335 + -1LL) = 1024LL;
  *((value *) $y_335 + 0LL) = $y_334;
  $y_336 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_336 + -1LL) = 1024LL;
  *((value *) $y_336 + 0LL) = $y_335;
  $y_337 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_337 + -1LL) = 1024LL;
  *((value *) $y_337 + 0LL) = $y_336;
  $y_338 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_338 + -1LL) = 1024LL;
  *((value *) $y_338 + 0LL) = $y_337;
  $y_339 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_339 + -1LL) = 1024LL;
  *((value *) $y_339 + 0LL) = $y_338;
  $y_340 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_340 + -1LL) = 1024LL;
  *((value *) $y_340 + 0LL) = $y_339;
  $y_341 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_341 + -1LL) = 1024LL;
  *((value *) $y_341 + 0LL) = $y_340;
  $y_342 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_342 + -1LL) = 1024LL;
  *((value *) $y_342 + 0LL) = $y_341;
  $y_343 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_343 + -1LL) = 1024LL;
  *((value *) $y_343 + 0LL) = $y_342;
  $y_344 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_344 + -1LL) = 1024LL;
  *((value *) $y_344 + 0LL) = $y_343;
  $y_345 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_345 + -1LL) = 1024LL;
  *((value *) $y_345 + 0LL) = $y_344;
  $y_346 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_346 + -1LL) = 1024LL;
  *((value *) $y_346 + 0LL) = $y_345;
  $y_347 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_347 + -1LL) = 1024LL;
  *((value *) $y_347 + 0LL) = $y_346;
  $y_348 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_348 + -1LL) = 1024LL;
  *((value *) $y_348 + 0LL) = $y_347;
  $y_349 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_349 + -1LL) = 1024LL;
  *((value *) $y_349 + 0LL) = $y_348;
  $y_350 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_350 + -1LL) = 1024LL;
  *((value *) $y_350 + 0LL) = $y_349;
  $y_351 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_351 + -1LL) = 1024LL;
  *((value *) $y_351 + 0LL) = $y_350;
  $y_352 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_352 + -1LL) = 1024LL;
  *((value *) $y_352 + 0LL) = $y_351;
  $y_353 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_353 + -1LL) = 1024LL;
  *((value *) $y_353 + 0LL) = $y_352;
  $y_354 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_354 + -1LL) = 1024LL;
  *((value *) $y_354 + 0LL) = $y_353;
  $y_355 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_355 + -1LL) = 1024LL;
  *((value *) $y_355 + 0LL) = $y_354;
  $y_356 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_356 + -1LL) = 1024LL;
  *((value *) $y_356 + 0LL) = $y_355;
  $y_357 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_357 + -1LL) = 1024LL;
  *((value *) $y_357 + 0LL) = $y_356;
  $y_358 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_358 + -1LL) = 1024LL;
  *((value *) $y_358 + 0LL) = $y_357;
  $y_359 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_359 + -1LL) = 1024LL;
  *((value *) $y_359 + 0LL) = $y_358;
  $y_360 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_360 + -1LL) = 1024LL;
  *((value *) $y_360 + 0LL) = $y_359;
  $y_361 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_361 + -1LL) = 1024LL;
  *((value *) $y_361 + 0LL) = $y_360;
  $y_362 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_362 + -1LL) = 1024LL;
  *((value *) $y_362 + 0LL) = $y_361;
  $y_363 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_363 + -1LL) = 1024LL;
  *((value *) $y_363 + 0LL) = $y_362;
  $y_364 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_364 + -1LL) = 1024LL;
  *((value *) $y_364 + 0LL) = $y_363;
  $y_365 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_365 + -1LL) = 1024LL;
  *((value *) $y_365 + 0LL) = $y_364;
  $y_366 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_366 + -1LL) = 1024LL;
  *((value *) $y_366 + 0LL) = $y_365;
  $y_367 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_367 + -1LL) = 1024LL;
  *((value *) $y_367 + 0LL) = $y_366;
  $y_368 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_368 + -1LL) = 1024LL;
  *((value *) $y_368 + 0LL) = $y_367;
  $y_369 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_369 + -1LL) = 1024LL;
  *((value *) $y_369 + 0LL) = $y_368;
  $y_370 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_370 + -1LL) = 1024LL;
  *((value *) $y_370 + 0LL) = $y_369;
  $y_371 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_371 + -1LL) = 1024LL;
  *((value *) $y_371 + 0LL) = $y_370;
  $y_372 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_372 + -1LL) = 1024LL;
  *((value *) $y_372 + 0LL) = $y_371;
  $y_373 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_373 + -1LL) = 1024LL;
  *((value *) $y_373 + 0LL) = $y_372;
  $y_374 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_374 + -1LL) = 1024LL;
  *((value *) $y_374 + 0LL) = $y_373;
  $y_375 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_375 + -1LL) = 1024LL;
  *((value *) $y_375 + 0LL) = $y_374;
  $y_376 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_376 + -1LL) = 1024LL;
  *((value *) $y_376 + 0LL) = $y_375;
  $y_377 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_377 + -1LL) = 1024LL;
  *((value *) $y_377 + 0LL) = $y_376;
  $y_378 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_378 + -1LL) = 1024LL;
  *((value *) $y_378 + 0LL) = $y_377;
  $y_379 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_379 + -1LL) = 1024LL;
  *((value *) $y_379 + 0LL) = $y_378;
  $y_380 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_380 + -1LL) = 1024LL;
  *((value *) $y_380 + 0LL) = $y_379;
  $y_381 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_381 + -1LL) = 1024LL;
  *((value *) $y_381 + 0LL) = $y_380;
  $y_382 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_382 + -1LL) = 1024LL;
  *((value *) $y_382 + 0LL) = $y_381;
  $y_383 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_383 + -1LL) = 1024LL;
  *((value *) $y_383 + 0LL) = $y_382;
  $y_384 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_384 + -1LL) = 1024LL;
  *((value *) $y_384 + 0LL) = $y_383;
  $y_385 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_385 + -1LL) = 1024LL;
  *((value *) $y_385 + 0LL) = $y_384;
  $y_386 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_386 + -1LL) = 1024LL;
  *((value *) $y_386 + 0LL) = $y_385;
  $y_387 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_387 + -1LL) = 1024LL;
  *((value *) $y_387 + 0LL) = $y_386;
  $y_388 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_388 + -1LL) = 1024LL;
  *((value *) $y_388 + 0LL) = $y_387;
  $y_389 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_389 + -1LL) = 1024LL;
  *((value *) $y_389 + 0LL) = $y_388;
  $y_390 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_390 + -1LL) = 1024LL;
  *((value *) $y_390 + 0LL) = $y_389;
  $y_391 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_391 + -1LL) = 1024LL;
  *((value *) $y_391 + 0LL) = $y_390;
  $y_392 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_392 + -1LL) = 1024LL;
  *((value *) $y_392 + 0LL) = $y_391;
  $y_393 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_393 + -1LL) = 1024LL;
  *((value *) $y_393 + 0LL) = $y_392;
  $y_394 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_394 + -1LL) = 1024LL;
  *((value *) $y_394 + 0LL) = $y_393;
  $y_395 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_395 + -1LL) = 1024LL;
  *((value *) $y_395 + 0LL) = $y_394;
  $y_396 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_396 + -1LL) = 1024LL;
  *((value *) $y_396 + 0LL) = $y_395;
  $y_397 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_397 + -1LL) = 1024LL;
  *((value *) $y_397 + 0LL) = $y_396;
  $y_398 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_398 + -1LL) = 1024LL;
  *((value *) $y_398 + 0LL) = $y_397;
  $y_399 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_399 + -1LL) = 1024LL;
  *((value *) $y_399 + 0LL) = $y_398;
  $y_400 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_400 + -1LL) = 1024LL;
  *((value *) $y_400 + 0LL) = $y_399;
  $y_401 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_401 + -1LL) = 1024LL;
  *((value *) $y_401 + 0LL) = $y_400;
  $y_402 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_402 + -1LL) = 1024LL;
  *((value *) $y_402 + 0LL) = $y_401;
  $y_403 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_403 + -1LL) = 1024LL;
  *((value *) $y_403 + 0LL) = $y_402;
  $y_404 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_404 + -1LL) = 1024LL;
  *((value *) $y_404 + 0LL) = $y_403;
  $y_405 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_405 + -1LL) = 1024LL;
  *((value *) $y_405 + 0LL) = $y_404;
  $y_406 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_406 + -1LL) = 1024LL;
  *((value *) $y_406 + 0LL) = $y_405;
  $y_407 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_407 + -1LL) = 1024LL;
  *((value *) $y_407 + 0LL) = $y_406;
  $y_408 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_408 + -1LL) = 1024LL;
  *((value *) $y_408 + 0LL) = $y_407;
  $y_409 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_409 + -1LL) = 1024LL;
  *((value *) $y_409 + 0LL) = $y_408;
  $y_410 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_410 + -1LL) = 1024LL;
  *((value *) $y_410 + 0LL) = $y_409;
  $y_411 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_411 + -1LL) = 1024LL;
  *((value *) $y_411 + 0LL) = $y_410;
  $y_412 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_412 + -1LL) = 1024LL;
  *((value *) $y_412 + 0LL) = $y_411;
  $y_413 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_413 + -1LL) = 1024LL;
  *((value *) $y_413 + 0LL) = $y_412;
  $y_414 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_414 + -1LL) = 1024LL;
  *((value *) $y_414 + 0LL) = $y_413;
  $y_415 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_415 + -1LL) = 1024LL;
  *((value *) $y_415 + 0LL) = $y_414;
  $y_416 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_416 + -1LL) = 1024LL;
  *((value *) $y_416 + 0LL) = $y_415;
  $y_417 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_417 + -1LL) = 1024LL;
  *((value *) $y_417 + 0LL) = $y_416;
  $y_418 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_418 + -1LL) = 1024LL;
  *((value *) $y_418 + 0LL) = $y_417;
  $y_419 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_419 + -1LL) = 1024LL;
  *((value *) $y_419 + 0LL) = $y_418;
  $y_420 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_420 + -1LL) = 1024LL;
  *((value *) $y_420 + 0LL) = $y_419;
  $y_421 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_421 + -1LL) = 1024LL;
  *((value *) $y_421 + 0LL) = $y_420;
  $y_422 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_422 + -1LL) = 1024LL;
  *((value *) $y_422 + 0LL) = $y_421;
  $y_423 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_423 + -1LL) = 1024LL;
  *((value *) $y_423 + 0LL) = $y_422;
  $y_424 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_424 + -1LL) = 1024LL;
  *((value *) $y_424 + 0LL) = $y_423;
  $y_425 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_425 + -1LL) = 1024LL;
  *((value *) $y_425 + 0LL) = $y_424;
  $y_426 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_426 + -1LL) = 1024LL;
  *((value *) $y_426 + 0LL) = $y_425;
  $y_427 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_427 + -1LL) = 1024LL;
  *((value *) $y_427 + 0LL) = $y_426;
  $y_428 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_428 + -1LL) = 1024LL;
  *((value *) $y_428 + 0LL) = $y_427;
  $y_429 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_429 + -1LL) = 1024LL;
  *((value *) $y_429 + 0LL) = $y_428;
  $y_430 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_430 + -1LL) = 1024LL;
  *((value *) $y_430 + 0LL) = $y_429;
  $y_431 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_431 + -1LL) = 1024LL;
  *((value *) $y_431 + 0LL) = $y_430;
  $y_432 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_432 + -1LL) = 1024LL;
  *((value *) $y_432 + 0LL) = $y_431;
  $y_433 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_433 + -1LL) = 1024LL;
  *((value *) $y_433 + 0LL) = $y_432;
  $y_434 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_434 + -1LL) = 1024LL;
  *((value *) $y_434 + 0LL) = $y_433;
  $y_435 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_435 + -1LL) = 1024LL;
  *((value *) $y_435 + 0LL) = $y_434;
  $y_436 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_436 + -1LL) = 1024LL;
  *((value *) $y_436 + 0LL) = $y_435;
  $y_437 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_437 + -1LL) = 1024LL;
  *((value *) $y_437 + 0LL) = $y_436;
  $y_438 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_438 + -1LL) = 1024LL;
  *((value *) $y_438 + 0LL) = $y_437;
  $y_439 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_439 + -1LL) = 1024LL;
  *((value *) $y_439 + 0LL) = $y_438;
  $y_440 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_440 + -1LL) = 1024LL;
  *((value *) $y_440 + 0LL) = $y_439;
  $y_441 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_441 + -1LL) = 1024LL;
  *((value *) $y_441 + 0LL) = $y_440;
  $y_442 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_442 + -1LL) = 1024LL;
  *((value *) $y_442 + 0LL) = $y_441;
  $y_443 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_443 + -1LL) = 1024LL;
  *((value *) $y_443 + 0LL) = $y_442;
  $y_444 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_444 + -1LL) = 1024LL;
  *((value *) $y_444 + 0LL) = $y_443;
  $y_445 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_445 + -1LL) = 1024LL;
  *((value *) $y_445 + 0LL) = $y_444;
  $y_446 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_446 + -1LL) = 1024LL;
  *((value *) $y_446 + 0LL) = $y_445;
  $y_447 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_447 + -1LL) = 1024LL;
  *((value *) $y_447 + 0LL) = $y_446;
  $y_448 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_448 + -1LL) = 1024LL;
  *((value *) $y_448 + 0LL) = $y_447;
  $y_449 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_449 + -1LL) = 1024LL;
  *((value *) $y_449 + 0LL) = $y_448;
  $y_450 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_450 + -1LL) = 1024LL;
  *((value *) $y_450 + 0LL) = $y_449;
  $y_451 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_451 + -1LL) = 1024LL;
  *((value *) $y_451 + 0LL) = $y_450;
  $y_452 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_452 + -1LL) = 1024LL;
  *((value *) $y_452 + 0LL) = $y_451;
  $y_453 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_453 + -1LL) = 1024LL;
  *((value *) $y_453 + 0LL) = $y_452;
  $y_454 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_454 + -1LL) = 1024LL;
  *((value *) $y_454 + 0LL) = $y_453;
  $y_455 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_455 + -1LL) = 1024LL;
  *((value *) $y_455 + 0LL) = $y_454;
  $y_456 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_456 + -1LL) = 1024LL;
  *((value *) $y_456 + 0LL) = $y_455;
  $y_457 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_457 + -1LL) = 1024LL;
  *((value *) $y_457 + 0LL) = $y_456;
  $y_458 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_458 + -1LL) = 1024LL;
  *((value *) $y_458 + 0LL) = $y_457;
  $y_459 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_459 + -1LL) = 1024LL;
  *((value *) $y_459 + 0LL) = $y_458;
  $y_460 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_460 + -1LL) = 1024LL;
  *((value *) $y_460 + 0LL) = $y_459;
  $y_461 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_461 + -1LL) = 1024LL;
  *((value *) $y_461 + 0LL) = $y_460;
  $y_462 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_462 + -1LL) = 1024LL;
  *((value *) $y_462 + 0LL) = $y_461;
  $y_463 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_463 + -1LL) = 1024LL;
  *((value *) $y_463 + 0LL) = $y_462;
  $y_464 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_464 + -1LL) = 1024LL;
  *((value *) $y_464 + 0LL) = $y_463;
  $y_465 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_465 + -1LL) = 1024LL;
  *((value *) $y_465 + 0LL) = $y_464;
  $y_466 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_466 + -1LL) = 1024LL;
  *((value *) $y_466 + 0LL) = $y_465;
  $y_467 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_467 + -1LL) = 1024LL;
  *((value *) $y_467 + 0LL) = $y_466;
  $y_468 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_468 + -1LL) = 1024LL;
  *((value *) $y_468 + 0LL) = $y_467;
  $y_469 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_469 + -1LL) = 1024LL;
  *((value *) $y_469 + 0LL) = $y_468;
  $y_470 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_470 + -1LL) = 1024LL;
  *((value *) $y_470 + 0LL) = $y_469;
  $y_471 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_471 + -1LL) = 1024LL;
  *((value *) $y_471 + 0LL) = $y_470;
  $y_472 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_472 + -1LL) = 1024LL;
  *((value *) $y_472 + 0LL) = $y_471;
  $y_473 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_473 + -1LL) = 1024LL;
  *((value *) $y_473 + 0LL) = $y_472;
  $y_474 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_474 + -1LL) = 1024LL;
  *((value *) $y_474 + 0LL) = $y_473;
  $y_475 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_475 + -1LL) = 1024LL;
  *((value *) $y_475 + 0LL) = $y_474;
  $y_476 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_476 + -1LL) = 1024LL;
  *((value *) $y_476 + 0LL) = $y_475;
  $y_477 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_477 + -1LL) = 1024LL;
  *((value *) $y_477 + 0LL) = $y_476;
  $y_478 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_478 + -1LL) = 1024LL;
  *((value *) $y_478 + 0LL) = $y_477;
  $y_479 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_479 + -1LL) = 1024LL;
  *((value *) $y_479 + 0LL) = $y_478;
  $y_480 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_480 + -1LL) = 1024LL;
  *((value *) $y_480 + 0LL) = $y_479;
  $y_481 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_481 + -1LL) = 1024LL;
  *((value *) $y_481 + 0LL) = $y_480;
  $y_482 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_482 + -1LL) = 1024LL;
  *((value *) $y_482 + 0LL) = $y_481;
  $y_483 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_483 + -1LL) = 1024LL;
  *((value *) $y_483 + 0LL) = $y_482;
  $y_484 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_484 + -1LL) = 1024LL;
  *((value *) $y_484 + 0LL) = $y_483;
  $y_485 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_485 + -1LL) = 1024LL;
  *((value *) $y_485 + 0LL) = $y_484;
  $y_486 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_486 + -1LL) = 1024LL;
  *((value *) $y_486 + 0LL) = $y_485;
  $y_487 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_487 + -1LL) = 1024LL;
  *((value *) $y_487 + 0LL) = $y_486;
  $y_488 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_488 + -1LL) = 1024LL;
  *((value *) $y_488 + 0LL) = $y_487;
  $y_489 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_489 + -1LL) = 1024LL;
  *((value *) $y_489 + 0LL) = $y_488;
  $y_490 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_490 + -1LL) = 1024LL;
  *((value *) $y_490 + 0LL) = $y_489;
  $y_491 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_491 + -1LL) = 1024LL;
  *((value *) $y_491 + 0LL) = $y_490;
  $y_492 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_492 + -1LL) = 1024LL;
  *((value *) $y_492 + 0LL) = $y_491;
  $y_493 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_493 + -1LL) = 1024LL;
  *((value *) $y_493 + 0LL) = $y_492;
  $y_494 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_494 + -1LL) = 1024LL;
  *((value *) $y_494 + 0LL) = $y_493;
  $y_495 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_495 + -1LL) = 1024LL;
  *((value *) $y_495 + 0LL) = $y_494;
  $y_496 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_496 + -1LL) = 1024LL;
  *((value *) $y_496 + 0LL) = $y_495;
  $y_497 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_497 + -1LL) = 1024LL;
  *((value *) $y_497 + 0LL) = $y_496;
  $y_498 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_498 + -1LL) = 1024LL;
  *((value *) $y_498 + 0LL) = $y_497;
  $y_499 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_499 + -1LL) = 1024LL;
  *((value *) $y_499 + 0LL) = $y_498;
  $y_500 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_500 + -1LL) = 1024LL;
  *((value *) $y_500 + 0LL) = $y_499;
  $y_501 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_501 + -1LL) = 1024LL;
  *((value *) $y_501 + 0LL) = $y_500;
  $y_502 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_502 + -1LL) = 1024LL;
  *((value *) $y_502 + 0LL) = $y_501;
  $y_503 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_503 + -1LL) = 1024LL;
  *((value *) $y_503 + 0LL) = $y_502;
  $y_504 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_504 + -1LL) = 1024LL;
  *((value *) $y_504 + 0LL) = $y_503;
  $y_505 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_505 + -1LL) = 1024LL;
  *((value *) $y_505 + 0LL) = $y_504;
  $y_506 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_506 + -1LL) = 1024LL;
  *((value *) $y_506 + 0LL) = $y_505;
  $y_507 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_507 + -1LL) = 1024LL;
  *((value *) $y_507 + 0LL) = $y_506;
  $y_508 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_508 + -1LL) = 1024LL;
  *((value *) $y_508 + 0LL) = $y_507;
  $y_509 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_509 + -1LL) = 1024LL;
  *((value *) $y_509 + 0LL) = $y_508;
  $y_510 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_510 + -1LL) = 1024LL;
  *((value *) $y_510 + 0LL) = $y_509;
  $y_511 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_511 + -1LL) = 1024LL;
  *((value *) $y_511 + 0LL) = $y_510;
  $y_512 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_512 + -1LL) = 1024LL;
  *((value *) $y_512 + 0LL) = $y_511;
  $y_513 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_513 + -1LL) = 1024LL;
  *((value *) $y_513 + 0LL) = $y_512;
  $y_514 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_514 + -1LL) = 1024LL;
  *((value *) $y_514 + 0LL) = $y_513;
  $y_515 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_515 + -1LL) = 1024LL;
  *((value *) $y_515 + 0LL) = $y_514;
  $y_516 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_516 + -1LL) = 1024LL;
  *((value *) $y_516 + 0LL) = $y_515;
  $y_517 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_517 + -1LL) = 1024LL;
  *((value *) $y_517 + 0LL) = $y_516;
  $y_518 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_518 + -1LL) = 1024LL;
  *((value *) $y_518 + 0LL) = $y_517;
  $y_519 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_519 + -1LL) = 1024LL;
  *((value *) $y_519 + 0LL) = $y_518;
  $y_520 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_520 + -1LL) = 1024LL;
  *((value *) $y_520 + 0LL) = $y_519;
  $y_521 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_521 + -1LL) = 1024LL;
  *((value *) $y_521 + 0LL) = $y_520;
  $y_522 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_522 + -1LL) = 1024LL;
  *((value *) $y_522 + 0LL) = $y_521;
  $y_523 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_523 + -1LL) = 1024LL;
  *((value *) $y_523 + 0LL) = $y_522;
  $y_524 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_524 + -1LL) = 1024LL;
  *((value *) $y_524 + 0LL) = $y_523;
  $y_525 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_525 + -1LL) = 1024LL;
  *((value *) $y_525 + 0LL) = $y_524;
  $y_526 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_526 + -1LL) = 1024LL;
  *((value *) $y_526 + 0LL) = $y_525;
  $y_527 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_527 + -1LL) = 1024LL;
  *((value *) $y_527 + 0LL) = $y_526;
  $y_528 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_528 + -1LL) = 1024LL;
  *((value *) $y_528 + 0LL) = $y_527;
  $y_529 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_529 + -1LL) = 1024LL;
  *((value *) $y_529 + 0LL) = $y_528;
  $y_530 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_530 + -1LL) = 1024LL;
  *((value *) $y_530 + 0LL) = $y_529;
  $y_531 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_531 + -1LL) = 1024LL;
  *((value *) $y_531 + 0LL) = $y_530;
  $y_532 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_532 + -1LL) = 1024LL;
  *((value *) $y_532 + 0LL) = $y_531;
  $y_533 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_533 + -1LL) = 1024LL;
  *((value *) $y_533 + 0LL) = $y_532;
  $y_534 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_534 + -1LL) = 1024LL;
  *((value *) $y_534 + 0LL) = $y_533;
  $y_535 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_535 + -1LL) = 1024LL;
  *((value *) $y_535 + 0LL) = $y_534;
  $y_536 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_536 + -1LL) = 1024LL;
  *((value *) $y_536 + 0LL) = $y_535;
  $y_537 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_537 + -1LL) = 1024LL;
  *((value *) $y_537 + 0LL) = $y_536;
  $y_538 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_538 + -1LL) = 1024LL;
  *((value *) $y_538 + 0LL) = $y_537;
  $y_539 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_539 + -1LL) = 1024LL;
  *((value *) $y_539 + 0LL) = $y_538;
  $y_540 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_540 + -1LL) = 1024LL;
  *((value *) $y_540 + 0LL) = $y_539;
  $y_541 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_541 + -1LL) = 1024LL;
  *((value *) $y_541 + 0LL) = $y_540;
  $y_542 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_542 + -1LL) = 1024LL;
  *((value *) $y_542 + 0LL) = $y_541;
  $y_543 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_543 + -1LL) = 1024LL;
  *((value *) $y_543 + 0LL) = $y_542;
  $y_544 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_544 + -1LL) = 1024LL;
  *((value *) $y_544 + 0LL) = $y_543;
  $y_545 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_545 + -1LL) = 1024LL;
  *((value *) $y_545 + 0LL) = $y_544;
  $y_546 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_546 + -1LL) = 1024LL;
  *((value *) $y_546 + 0LL) = $y_545;
  $y_547 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_547 + -1LL) = 1024LL;
  *((value *) $y_547 + 0LL) = $y_546;
  $y_548 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_548 + -1LL) = 1024LL;
  *((value *) $y_548 + 0LL) = $y_547;
  $y_549 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_549 + -1LL) = 1024LL;
  *((value *) $y_549 + 0LL) = $y_548;
  $y_550 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_550 + -1LL) = 1024LL;
  *((value *) $y_550 + 0LL) = $y_549;
  $y_551 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_551 + -1LL) = 1024LL;
  *((value *) $y_551 + 0LL) = $y_550;
  $y_552 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_552 + -1LL) = 1024LL;
  *((value *) $y_552 + 0LL) = $y_551;
  $y_553 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_553 + -1LL) = 1024LL;
  *((value *) $y_553 + 0LL) = $y_552;
  $y_554 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_554 + -1LL) = 1024LL;
  *((value *) $y_554 + 0LL) = $y_553;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $reg_id_300;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $prim_555 =
    ((value (*)(struct thread_info *, value, value)) land)
    ($tinfo, $prim_301, $y_554);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $reg_id_300 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  $prim_556 =
    ((value (*)(struct thread_info *, value, value)) out8)
    ($tinfo, $prim_555, $reg_id_300);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $prim_556;
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_Z_uncurried_known_118(struct thread_info *$tinfo, value $a_274, value $func_275)
{
  struct stack_frame frame;
  value root[3];
  register value $y_276;
  register value $y_277;
  register value $prim_278;
  register value $y_279;
  register value $y_281;
  register value $func_code_282;
  register value $func_env_283;
  register value $result_284;
  register value $y_285;
  register value $y_287;
  register value $y_288;
  register value $prim_289;
  register value $y_290;
  register value $prim_291;
  register value $y_292;
  register value $y_294;
  register value $y_295;
  register value $y_296;
  register value $y_297;
  register value $y_298;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $func_275;
    *(root + 0LL) = $a_274;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $func_275 = *(root + 1LL);
    $a_274 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_276 = 1LL;
  $y_277 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_277 + -1LL) = 1024LL;
  *((value *) $y_277 + 0LL) = $y_276;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $func_275;
  *(root + 0LL) = $a_274;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $prim_278 =
    ((value (*)(struct thread_info *, value)) spinlock)
    ($tinfo, $y_277);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $func_275 = *(root + 1LL);
  $a_274 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_279 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $func_275;
  *(root + 0LL) = $a_274;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $y_281 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
    ($tinfo, $y_279, $prim_278);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 2LL) = $y_281;
    frame.next = root + 3LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_281 = *(root + 2LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $func_275 = *(root + 1LL);
  $a_274 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_281 & 1) == 0) {
    switch (*((value *) $y_281 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_281 >> 1LL) {
      case 0:
        $func_code_282 = *((value *) $func_275 + 0LL);
        $func_env_283 = *((value *) $func_275 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $result_284 =
          ((value (*)(struct thread_info *, value, value)) $func_code_282)
          ($tinfo, $func_env_283, $a_274);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_285 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $result_284;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_287 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
          ($tinfo, $y_285, $result_284);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $result_284 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_287 & 1) == 0) {
          switch (*((value *) $y_287 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_287 >> 1LL) {
            case 0:
              $y_288 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $prim_289 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_288);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_289;
              break;
            default:
              $y_290 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_284;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_291 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_290);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $result_284 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_292 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_284;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_294 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
                ($tinfo, $y_292, $prim_291);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_294;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_294 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $result_284 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_294 & 1) == 0) {
                switch (*((value *) $y_294 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_294 >> 1LL) {
                  case 0:
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $result_284;
                    break;
                  default:
                    $y_295 = 1LL;
                    $y_296 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_296 + -1LL) = 1024LL;
                    *((value *) $y_296 + 0LL) = $y_295;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_296;
                    break;

                }
              }
              break;

          }
        }
        break;
      default:
        $y_297 = 1LL;
        $y_298 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_298 + -1LL) = 1024LL;
        *((value *) $y_298 + 0LL) = $y_297;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_298;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_117(struct thread_info *$tinfo, value $env_239, value $prev_byte_240, value $last_byte_241)
{
  struct stack_frame frame;
  value root[4];
  register value $CertiDDdOSdRegistersdNatdsnd_command_proj_242;
  register value $CertiDDdOSdRegistersdNatdCmd_proj_243;
  register value $prim_244;
  register value $y_245;
  register value $y_247;
  register value $CertiDDdOSdRegistersdNatdData2_proj_248;
  register value $prim_249;
  register value $y_250;
  register value $y_252;
  register value $CertiDDdOSdRegistersdNatdData2_proj_253;
  register value $prim_254;
  register value $y_255;
  register value $y_257;
  register value $CertiDDdOSdRegistersdNatdPc_spk_proj_258;
  register value $prim_259;
  register value $y_260;
  register value $y_261;
  register value $y_262;
  register value $y_263;
  register value $prim_264;
  register value $CertiDDdOSdRegistersdNatdPc_spk_proj_265;
  register value $prim_266;
  register value $y_267;
  register value $y_268;
  register value $y_269;
  register value $y_270;
  register value $y_271;
  register value $y_272;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $CertiDDdOSdRegistersdNatdsnd_command_proj_242 =
    *((value *) $env_239 + 0LL);
  $CertiDDdOSdRegistersdNatdCmd_proj_243 = *((value *) $env_239 + 1LL);
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $last_byte_241;
  *(root + 1LL) = $prev_byte_240;
  *(root + 0LL) = $env_239;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $prim_244 =
    ((value (*)(struct thread_info *, value, value)) out8_p)
    ($tinfo, $CertiDDdOSdRegistersdNatdsnd_command_proj_242,
     $CertiDDdOSdRegistersdNatdCmd_proj_243);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $last_byte_241 = *(root + 2LL);
  $prev_byte_240 = *(root + 1LL);
  $env_239 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_245 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $last_byte_241;
  *(root + 1LL) = $prev_byte_240;
  *(root + 0LL) = $env_239;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_247 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
    ($tinfo, $y_245, $prim_244);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_247;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_247 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $last_byte_241 = *(root + 2LL);
  $prev_byte_240 = *(root + 1LL);
  $env_239 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_247 & 1) == 0) {
    switch (*((value *) $y_247 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_247 >> 1LL) {
      case 0:
        $CertiDDdOSdRegistersdNatdData2_proj_248 =
          *((value *) $env_239 + 2LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $prev_byte_240;
        *(root + 0LL) = $env_239;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $prim_249 =
          ((value (*)(struct thread_info *, value, value)) out8_p)
          ($tinfo, $last_byte_241, $CertiDDdOSdRegistersdNatdData2_proj_248);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $prev_byte_240 = *(root + 1LL);
        $env_239 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_250 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $prev_byte_240;
        *(root + 0LL) = $env_239;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_252 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
          ($tinfo, $y_250, $prim_249);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_252;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_252 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $prev_byte_240 = *(root + 1LL);
        $env_239 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_252 & 1) == 0) {
          switch (*((value *) $y_252 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_252 >> 1LL) {
            case 0:
              $CertiDDdOSdRegistersdNatdData2_proj_253 =
                *((value *) $env_239 + 2LL);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_239;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_254 =
                ((value (*)(struct thread_info *, value, value)) out8)
                ($tinfo, $prev_byte_240,
                 $CertiDDdOSdRegistersdNatdData2_proj_253);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $env_239 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_255 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_239;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_257 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
                ($tinfo, $y_255, $prim_254);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(6LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_257;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 6LL;
                garbage_collect($tinfo);
                $y_257 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $env_239 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_257 & 1) == 0) {
                switch (*((value *) $y_257 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_257 >> 1LL) {
                  case 0:
                    $CertiDDdOSdRegistersdNatdPc_spk_proj_258 =
                      *((value *) $env_239 + 3LL);
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_239;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $prim_259 =
                      ((value (*)(struct thread_info *, value)) in8_p)
                      ($tinfo, $CertiDDdOSdRegistersdNatdPc_spk_proj_258);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(6LL <= $limit - $alloc)) {
                      *(root + 1LL) = $prim_259;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 6LL;
                      garbage_collect($tinfo);
                      $prim_259 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $env_239 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_260 = 1LL;
                    $y_261 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_261 + -1LL) = 1024LL;
                    *((value *) $y_261 + 0LL) = $y_260;
                    $y_262 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_262 + -1LL) = 1024LL;
                    *((value *) $y_262 + 0LL) = $y_261;
                    $y_263 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_263 + -1LL) = 1024LL;
                    *((value *) $y_263 + 0LL) = $y_262;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_239;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $prim_264 =
                      ((value (*)(struct thread_info *, value, value)) lor)
                      ($tinfo, $prim_259, $y_263);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $env_239 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $CertiDDdOSdRegistersdNatdPc_spk_proj_265 =
                      *((value *) $env_239 + 3LL);
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $prim_266 =
                      ((value (*)(struct thread_info *, value, value))
                        out8_p)
                      ($tinfo, $prim_264,
                       $CertiDDdOSdRegistersdNatdPc_spk_proj_265);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    /*skip*/;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $prim_266;
                    break;
                  default:
                    $y_267 = 1LL;
                    $y_268 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_268 + -1LL) = 1024LL;
                    *((value *) $y_268 + 0LL) = $y_267;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_268;
                    break;

                }
              }
              break;
            default:
              $y_269 = 1LL;
              $y_270 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_270 + -1LL) = 1024LL;
              *((value *) $y_270 + 0LL) = $y_269;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_270;
              break;

          }
        }
        break;
      default:
        $y_271 = 1LL;
        $y_272 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_272 + -1LL) = 1024LL;
        *((value *) $y_272 + 0LL) = $y_271;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_272;
        break;

    }
  }
}

value y_wrapper_116(struct thread_info *$tinfo, value $env_233, value $prev_byte_234)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_proj_235;
  register value $last_byte_proj_236;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_code_237;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_env_238;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_proj_235 =
    *((value *) $env_233 + 0LL);
  $last_byte_proj_236 = *((value *) $env_233 + 1LL);
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_code_237 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_proj_235
       + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_env_238 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_proj_235
       + 1LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value, value)) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_code_237)
    ($tinfo,
     $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_env_238,
     $prev_byte_234, $last_byte_proj_236);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_115(struct thread_info *$tinfo, value $env_228, value $last_byte_229)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_clo_230;
  register value $env_231;
  register value $y_wrapper_clo_232;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(9LL <= $limit - $alloc)) {
    *(root + 1LL) = $last_byte_229;
    *(root + 0LL) = $env_228;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 9LL;
    garbage_collect($tinfo);
    $last_byte_229 = *(root + 1LL);
    $env_228 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_clo_230 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_clo_230
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_clo_230
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_117;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_clo_230
     + 1LL) =
    $env_228;
  $env_231 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $env_231 + -1LL) = 2048LL;
  *((value *) $env_231 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_uncurried_clo_230;
  *((value *) $env_231 + 1LL) = $last_byte_229;
  $y_wrapper_clo_232 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_232 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_232 + 0LL) = y_wrapper_116;
  *((value *) $y_wrapper_clo_232 + 1LL) = $env_231;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_232;
}

value add_uncurried_known_114(struct thread_info *$tinfo, value $m_223, value $n_224)
{
  struct stack_frame frame;
  value root[2];
  register value $p_225;
  register value $y_226;
  register value $y_227;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_224 & 1) == 0) {
    switch (*((value *) $n_224 + -1LL) & 255LL) {
      default:
        $p_225 = *((value *) $n_224 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_226 =
          ((value (*)(struct thread_info *, value, value)) add_uncurried_known_114)
          ($tinfo, $m_223, $p_225);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_226;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_226 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_227 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_227 + -1LL) = 1024LL;
        *((value *) $y_227 + 0LL) = $y_226;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_227;
        break;

    }
  } else {
    switch ($n_224 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $m_223;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_nat_nat_Z_uncurried_uncurried_known_113(struct thread_info *$tinfo, value $b_193, value $a_194, value $func_195)
{
  struct stack_frame frame;
  value root[4];
  register value $y_196;
  register value $y_197;
  register value $prim_198;
  register value $y_199;
  register value $y_201;
  register value $func_code_202;
  register value $func_env_203;
  register value $y_204;
  register value $y_code_205;
  register value $y_env_206;
  register value $result_207;
  register value $y_208;
  register value $y_210;
  register value $y_211;
  register value $prim_212;
  register value $y_213;
  register value $prim_214;
  register value $y_215;
  register value $y_217;
  register value $y_218;
  register value $y_219;
  register value $y_220;
  register value $y_221;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 2LL) = $func_195;
    *(root + 1LL) = $a_194;
    *(root + 0LL) = $b_193;
    frame.next = root + 3LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $func_195 = *(root + 2LL);
    $a_194 = *(root + 1LL);
    $b_193 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_196 = 1LL;
  $y_197 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_197 + -1LL) = 1024LL;
  *((value *) $y_197 + 0LL) = $y_196;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $func_195;
  *(root + 1LL) = $a_194;
  *(root + 0LL) = $b_193;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $prim_198 =
    ((value (*)(struct thread_info *, value)) spinlock)
    ($tinfo, $y_197);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $func_195 = *(root + 2LL);
  $a_194 = *(root + 1LL);
  $b_193 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_199 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $func_195;
  *(root + 1LL) = $a_194;
  *(root + 0LL) = $b_193;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_201 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
    ($tinfo, $y_199, $prim_198);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_201;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_201 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $func_195 = *(root + 2LL);
  $a_194 = *(root + 1LL);
  $b_193 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_201 & 1) == 0) {
    switch (*((value *) $y_201 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_201 >> 1LL) {
      case 0:
        $func_code_202 = *((value *) $func_195 + 0LL);
        $func_env_203 = *((value *) $func_195 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $b_193;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_204 =
          ((value (*)(struct thread_info *, value, value)) $func_code_202)
          ($tinfo, $func_env_203, $a_194);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $b_193 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_205 = *((value *) $y_204 + 0LL);
        $y_env_206 = *((value *) $y_204 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $result_207 =
          ((value (*)(struct thread_info *, value, value)) $y_code_205)
          ($tinfo, $y_env_206, $b_193);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_208 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $result_207;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_210 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
          ($tinfo, $y_208, $result_207);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $result_207 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_210 & 1) == 0) {
          switch (*((value *) $y_210 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_210 >> 1LL) {
            case 0:
              $y_211 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $prim_212 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_211);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_212;
              break;
            default:
              $y_213 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_207;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_214 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_213);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $result_207 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_215 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_207;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_217 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_112)
                ($tinfo, $y_215, $prim_214);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_217;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_217 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $result_207 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_217 & 1) == 0) {
                switch (*((value *) $y_217 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_217 >> 1LL) {
                  case 0:
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $result_207;
                    break;
                  default:
                    $y_218 = 1LL;
                    $y_219 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_219 + -1LL) = 1024LL;
                    *((value *) $y_219 + 0LL) = $y_218;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_219;
                    break;

                }
              }
              break;

          }
        }
        break;
      default:
        $y_220 = 1LL;
        $y_221 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_221 + -1LL) = 1024LL;
        *((value *) $y_221 + 0LL) = $y_220;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_221;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdeqb_uncurried_known_112(struct thread_info *$tinfo, value $y_177, value $x_178)
{
  struct stack_frame frame;
  value root[2];
  register value $y_179;
  register value $y_180;
  register value $y_181;
  register value $p_182;
  register value $y_183;
  register value $q_184;
  register value $y_186;
  register value $p_187;
  register value $y_188;
  register value $y_189;
  register value $q_190;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($x_178 & 1) == 0) {
    switch (*((value *) $x_178 + -1LL) & 255LL) {
      case 0:
        $p_182 = *((value *) $x_178 + 0LL);
        if (($y_177 & 1) == 0) {
          switch (*((value *) $y_177 + -1LL) & 255LL) {
            case 0:
              $q_184 = *((value *) $y_177 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_184, $p_182);
              return $result;
              break;
            default:
              $y_186 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_186;
              break;

          }
        } else {
          switch ($y_177 >> 1LL) {
            default:
              $y_183 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_183;
              break;

          }
        }
        break;
      default:
        $p_187 = *((value *) $x_178 + 0LL);
        if (($y_177 & 1) == 0) {
          switch (*((value *) $y_177 + -1LL) & 255LL) {
            case 0:
              $y_189 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_189;
              break;
            default:
              $q_190 = *((value *) $y_177 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_190, $p_187);
              return $result;
              break;

          }
        } else {
          switch ($y_177 >> 1LL) {
            default:
              $y_188 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_188;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_178 >> 1LL) {
      default:
        if (($y_177 & 1) == 0) {
          switch (*((value *) $y_177 + -1LL) & 255LL) {
            case 0:
              $y_180 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_180;
              break;
            default:
              $y_181 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_181;
              break;

          }
        } else {
          switch ($y_177 >> 1LL) {
            default:
              $y_179 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_179;
              break;

          }
        }
        break;

    }
  }
}

value eqb_uncurried_known_111(struct thread_info *$tinfo, value $q_163, value $p_164)
{
  struct stack_frame frame;
  value root[2];
  register value $p_165;
  register value $q_166;
  register value $y_167;
  register value $y_168;
  register value $p_169;
  register value $y_170;
  register value $q_171;
  register value $y_172;
  register value $y_173;
  register value $y_174;
  register value $y_175;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($p_164 & 1) == 0) {
    switch (*((value *) $p_164 + -1LL) & 255LL) {
      case 0:
        $p_165 = *((value *) $p_164 + 0LL);
        if (($q_163 & 1) == 0) {
          switch (*((value *) $q_163 + -1LL) & 255LL) {
            case 0:
              $q_166 = *((value *) $q_163 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_166, $p_165);
              return $result;
              break;
            default:
              $y_167 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_167;
              break;

          }
        } else {
          switch ($q_163 >> 1LL) {
            default:
              $y_168 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_168;
              break;

          }
        }
        break;
      default:
        $p_169 = *((value *) $p_164 + 0LL);
        if (($q_163 & 1) == 0) {
          switch (*((value *) $q_163 + -1LL) & 255LL) {
            case 0:
              $y_170 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_170;
              break;
            default:
              $q_171 = *((value *) $q_163 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_171, $p_169);
              return $result;
              break;

          }
        } else {
          switch ($q_163 >> 1LL) {
            default:
              $y_172 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_172;
              break;

          }
        }
        break;

    }
  } else {
    switch ($p_164 >> 1LL) {
      default:
        if (($q_163 & 1) == 0) {
          switch (*((value *) $q_163 + -1LL) & 255LL) {
            case 0:
              $y_173 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_173;
              break;
            default:
              $y_174 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_174;
              break;

          }
        } else {
          switch ($q_163 >> 1LL) {
            default:
              $y_175 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_175;
              break;

          }
        }
        break;

    }
  }
}

value eqb_uncurried_known_110(struct thread_info *$tinfo, value $m_155, value $n_156)
{
  struct stack_frame frame;
  value root[2];
  register value $y_157;
  register value $y_158;
  register value $np_159;
  register value $y_160;
  register value $mp_161;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_156 & 1) == 0) {
    switch (*((value *) $n_156 + -1LL) & 255LL) {
      default:
        $np_159 = *((value *) $n_156 + 0LL);
        if (($m_155 & 1) == 0) {
          switch (*((value *) $m_155 + -1LL) & 255LL) {
            default:
              $mp_161 = *((value *) $m_155 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_110)
                ($tinfo, $mp_161, $np_159);
              return $result;
              break;

          }
        } else {
          switch ($m_155 >> 1LL) {
            default:
              $y_160 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_160;
              break;

          }
        }
        break;

    }
  } else {
    switch ($n_156 >> 1LL) {
      default:
        if (($m_155 & 1) == 0) {
          switch (*((value *) $m_155 + -1LL) & 255LL) {
            default:
              $y_158 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_158;
              break;

          }
        } else {
          switch ($m_155 >> 1LL) {
            default:
              $y_157 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_157;
              break;

          }
        }
        break;

    }
  }
}

value body(struct thread_info *$tinfo)
{
  struct stack_frame frame;
  value root[3];
  register value $y_2719;
  register value $y_2720;
  register value $y_2721;
  register value $y_2722;
  register value $y_2723;
  register value $y_2724;
  register value $y_2725;
  register value $y_2726;
  register value $y_2727;
  register value $y_2728;
  register value $y_2729;
  register value $y_2730;
  register value $y_2731;
  register value $y_2732;
  register value $y_2733;
  register value $y_2734;
  register value $y_2735;
  register value $y_2736;
  register value $y_2737;
  register value $y_2738;
  register value $y_2739;
  register value $y_2740;
  register value $y_2741;
  register value $y_2742;
  register value $y_2743;
  register value $y_2744;
  register value $y_2745;
  register value $y_2746;
  register value $y_2747;
  register value $y_2748;
  register value $y_2749;
  register value $y_2750;
  register value $y_2751;
  register value $y_2752;
  register value $y_2753;
  register value $y_2754;
  register value $y_2755;
  register value $y_2756;
  register value $y_2757;
  register value $y_2758;
  register value $y_2759;
  register value $y_2760;
  register value $y_2761;
  register value $y_2762;
  register value $y_2763;
  register value $y_2764;
  register value $y_2765;
  register value $y_2766;
  register value $y_2767;
  register value $y_2768;
  register value $y_2769;
  register value $y_2770;
  register value $y_2771;
  register value $y_2772;
  register value $y_2773;
  register value $y_2774;
  register value $y_2775;
  register value $y_2776;
  register value $y_2777;
  register value $y_2778;
  register value $y_2779;
  register value $y_2780;
  register value $y_2781;
  register value $y_2782;
  register value $y_2783;
  register value $y_2784;
  register value $y_2785;
  register value $y_2786;
  register value $y_2787;
  register value $y_2788;
  register value $y_2789;
  register value $y_2790;
  register value $y_2791;
  register value $y_2792;
  register value $y_2793;
  register value $y_2794;
  register value $y_2795;
  register value $y_2796;
  register value $y_2797;
  register value $y_2798;
  register value $y_2799;
  register value $y_2800;
  register value $y_2801;
  register value $y_2802;
  register value $y_2803;
  register value $y_2804;
  register value $y_2805;
  register value $y_2806;
  register value $y_2807;
  register value $y_2808;
  register value $y_2809;
  register value $y_2810;
  register value $y_2811;
  register value $y_2812;
  register value $y_2813;
  register value $y_2814;
  register value $y_2815;
  register value $y_2816;
  register value $y_2817;
  register value $y_2818;
  register value $y_2819;
  register value $y_2820;
  register value $y_2821;
  register value $y_2822;
  register value $y_2823;
  register value $y_2824;
  register value $y_2825;
  register value $y_2826;
  register value $y_2827;
  register value $y_2828;
  register value $y_2829;
  register value $y_2830;
  register value $y_2831;
  register value $y_2832;
  register value $y_2833;
  register value $y_2834;
  register value $y_2835;
  register value $y_2836;
  register value $y_2837;
  register value $y_2838;
  register value $y_2839;
  register value $y_2840;
  register value $y_2841;
  register value $y_2842;
  register value $y_2843;
  register value $y_2844;
  register value $y_2845;
  register value $y_2846;
  register value $y_2847;
  register value $y_2848;
  register value $y_2849;
  register value $y_2850;
  register value $y_2851;
  register value $y_2852;
  register value $y_2853;
  register value $y_2854;
  register value $y_2855;
  register value $y_2856;
  register value $y_2857;
  register value $y_2858;
  register value $y_2859;
  register value $y_2860;
  register value $y_2861;
  register value $y_2862;
  register value $y_2863;
  register value $y_2864;
  register value $y_2865;
  register value $y_2866;
  register value $y_2867;
  register value $y_2868;
  register value $y_2869;
  register value $y_2870;
  register value $y_2871;
  register value $y_2872;
  register value $y_2873;
  register value $y_2874;
  register value $y_2875;
  register value $y_2876;
  register value $y_2877;
  register value $y_2878;
  register value $y_2879;
  register value $y_2880;
  register value $y_2881;
  register value $y_2882;
  register value $y_2883;
  register value $y_2884;
  register value $y_2885;
  register value $y_2886;
  register value $y_2887;
  register value $y_2888;
  register value $y_2889;
  register value $y_2890;
  register value $y_2891;
  register value $y_2892;
  register value $y_2893;
  register value $y_2894;
  register value $y_2895;
  register value $y_2896;
  register value $y_2897;
  register value $y_2898;
  register value $y_2899;
  register value $y_2900;
  register value $CertiDDdOSdRegistersdNatdsnd_command_2901;
  register value $y_2902;
  register value $y_2903;
  register value $y_2904;
  register value $y_2905;
  register value $y_2906;
  register value $y_2907;
  register value $y_2908;
  register value $y_2909;
  register value $y_2910;
  register value $y_2911;
  register value $y_2912;
  register value $y_2913;
  register value $y_2914;
  register value $y_2915;
  register value $y_2916;
  register value $y_2917;
  register value $y_2918;
  register value $y_2919;
  register value $y_2920;
  register value $y_2921;
  register value $y_2922;
  register value $y_2923;
  register value $y_2924;
  register value $y_2925;
  register value $y_2926;
  register value $y_2927;
  register value $y_2928;
  register value $y_2929;
  register value $y_2930;
  register value $y_2931;
  register value $y_2932;
  register value $y_2933;
  register value $y_2934;
  register value $y_2935;
  register value $y_2936;
  register value $y_2937;
  register value $y_2938;
  register value $y_2939;
  register value $y_2940;
  register value $y_2941;
  register value $y_2942;
  register value $y_2943;
  register value $y_2944;
  register value $y_2945;
  register value $y_2946;
  register value $y_2947;
  register value $y_2948;
  register value $y_2949;
  register value $y_2950;
  register value $y_2951;
  register value $y_2952;
  register value $y_2953;
  register value $y_2954;
  register value $y_2955;
  register value $y_2956;
  register value $y_2957;
  register value $y_2958;
  register value $y_2959;
  register value $y_2960;
  register value $y_2961;
  register value $y_2962;
  register value $y_2963;
  register value $y_2964;
  register value $y_2965;
  register value $y_2966;
  register value $y_2967;
  register value $y_2968;
  register value $CertiDDdOSdRegistersdNatdCmd_2969;
  register value $y_2970;
  register value $y_2971;
  register value $y_2972;
  register value $y_2973;
  register value $y_2974;
  register value $y_2975;
  register value $y_2976;
  register value $y_2977;
  register value $y_2978;
  register value $y_2979;
  register value $y_2980;
  register value $y_2981;
  register value $y_2982;
  register value $y_2983;
  register value $y_2984;
  register value $y_2985;
  register value $y_2986;
  register value $y_2987;
  register value $y_2988;
  register value $y_2989;
  register value $y_2990;
  register value $y_2991;
  register value $y_2992;
  register value $y_2993;
  register value $y_2994;
  register value $y_2995;
  register value $y_2996;
  register value $y_2997;
  register value $y_2998;
  register value $y_2999;
  register value $y_3000;
  register value $y_3001;
  register value $y_3002;
  register value $y_3003;
  register value $y_3004;
  register value $y_3005;
  register value $y_3006;
  register value $y_3007;
  register value $y_3008;
  register value $y_3009;
  register value $y_3010;
  register value $y_3011;
  register value $y_3012;
  register value $y_3013;
  register value $y_3014;
  register value $y_3015;
  register value $y_3016;
  register value $y_3017;
  register value $y_3018;
  register value $y_3019;
  register value $y_3020;
  register value $y_3021;
  register value $y_3022;
  register value $y_3023;
  register value $y_3024;
  register value $y_3025;
  register value $y_3026;
  register value $y_3027;
  register value $y_3028;
  register value $y_3029;
  register value $y_3030;
  register value $y_3031;
  register value $y_3032;
  register value $y_3033;
  register value $y_3034;
  register value $y_3035;
  register value $CertiDDdOSdRegistersdNatdData2_3036;
  register value $y_3037;
  register value $y_3038;
  register value $y_3039;
  register value $y_3040;
  register value $y_3041;
  register value $y_3042;
  register value $y_3043;
  register value $y_3044;
  register value $y_3045;
  register value $y_3046;
  register value $y_3047;
  register value $y_3048;
  register value $y_3049;
  register value $y_3050;
  register value $y_3051;
  register value $y_3052;
  register value $y_3053;
  register value $y_3054;
  register value $y_3055;
  register value $y_3056;
  register value $y_3057;
  register value $y_3058;
  register value $y_3059;
  register value $y_3060;
  register value $y_3061;
  register value $y_3062;
  register value $y_3063;
  register value $y_3064;
  register value $y_3065;
  register value $y_3066;
  register value $y_3067;
  register value $y_3068;
  register value $y_3069;
  register value $y_3070;
  register value $y_3071;
  register value $y_3072;
  register value $y_3073;
  register value $y_3074;
  register value $y_3075;
  register value $y_3076;
  register value $y_3077;
  register value $y_3078;
  register value $y_3079;
  register value $y_3080;
  register value $y_3081;
  register value $y_3082;
  register value $y_3083;
  register value $y_3084;
  register value $y_3085;
  register value $y_3086;
  register value $y_3087;
  register value $y_3088;
  register value $y_3089;
  register value $y_3090;
  register value $y_3091;
  register value $y_3092;
  register value $y_3093;
  register value $y_3094;
  register value $y_3095;
  register value $y_3096;
  register value $y_3097;
  register value $y_3098;
  register value $y_3099;
  register value $y_3100;
  register value $y_3101;
  register value $y_3102;
  register value $y_3103;
  register value $y_3104;
  register value $y_3105;
  register value $y_3106;
  register value $y_3107;
  register value $y_3108;
  register value $y_3109;
  register value $y_3110;
  register value $y_3111;
  register value $y_3112;
  register value $y_3113;
  register value $y_3114;
  register value $y_3115;
  register value $y_3116;
  register value $y_3117;
  register value $y_3118;
  register value $y_3119;
  register value $y_3120;
  register value $y_3121;
  register value $y_3122;
  register value $y_3123;
  register value $y_3124;
  register value $y_3125;
  register value $y_3126;
  register value $y_3127;
  register value $y_3128;
  register value $y_3129;
  register value $y_3130;
  register value $y_3131;
  register value $y_3132;
  register value $y_3133;
  register value $CertiDDdOSdRegistersdNatdPc_spk_3134;
  register value $env_3135;
  register value $y_3136;
  register value $y_3137;
  register value $y_3138;
  register value $y_3139;
  register value $y_3140;
  register value $y_3141;
  register value $y_3142;
  register value $y_3143;
  register value $y_3144;
  register value $y_3145;
  register value $CertiDDdOSdPit_infodLinuxdNatdTick_rate_3147;
  register value $y_3148;
  register value $y_3149;
  register value $y_3150;
  register value $y_3151;
  register value $y_3152;
  register value $CertiDDdOSdErrvaldeinval_3153;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_clo_3154;
  register value $env_3155;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_clo_3156;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(845LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 845LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_2719 = 1LL;
  $y_2720 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2720 + -1LL) = 1024LL;
  *((value *) $y_2720 + 0LL) = $y_2719;
  $y_2721 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2721 + -1LL) = 1024LL;
  *((value *) $y_2721 + 0LL) = $y_2720;
  $y_2722 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2722 + -1LL) = 1024LL;
  *((value *) $y_2722 + 0LL) = $y_2721;
  $y_2723 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2723 + -1LL) = 1024LL;
  *((value *) $y_2723 + 0LL) = $y_2722;
  $y_2724 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2724 + -1LL) = 1024LL;
  *((value *) $y_2724 + 0LL) = $y_2723;
  $y_2725 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2725 + -1LL) = 1024LL;
  *((value *) $y_2725 + 0LL) = $y_2724;
  $y_2726 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2726 + -1LL) = 1024LL;
  *((value *) $y_2726 + 0LL) = $y_2725;
  $y_2727 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2727 + -1LL) = 1024LL;
  *((value *) $y_2727 + 0LL) = $y_2726;
  $y_2728 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2728 + -1LL) = 1024LL;
  *((value *) $y_2728 + 0LL) = $y_2727;
  $y_2729 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2729 + -1LL) = 1024LL;
  *((value *) $y_2729 + 0LL) = $y_2728;
  $y_2730 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2730 + -1LL) = 1024LL;
  *((value *) $y_2730 + 0LL) = $y_2729;
  $y_2731 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2731 + -1LL) = 1024LL;
  *((value *) $y_2731 + 0LL) = $y_2730;
  $y_2732 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2732 + -1LL) = 1024LL;
  *((value *) $y_2732 + 0LL) = $y_2731;
  $y_2733 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2733 + -1LL) = 1024LL;
  *((value *) $y_2733 + 0LL) = $y_2732;
  $y_2734 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2734 + -1LL) = 1024LL;
  *((value *) $y_2734 + 0LL) = $y_2733;
  $y_2735 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2735 + -1LL) = 1024LL;
  *((value *) $y_2735 + 0LL) = $y_2734;
  $y_2736 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2736 + -1LL) = 1024LL;
  *((value *) $y_2736 + 0LL) = $y_2735;
  $y_2737 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2737 + -1LL) = 1024LL;
  *((value *) $y_2737 + 0LL) = $y_2736;
  $y_2738 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2738 + -1LL) = 1024LL;
  *((value *) $y_2738 + 0LL) = $y_2737;
  $y_2739 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2739 + -1LL) = 1024LL;
  *((value *) $y_2739 + 0LL) = $y_2738;
  $y_2740 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2740 + -1LL) = 1024LL;
  *((value *) $y_2740 + 0LL) = $y_2739;
  $y_2741 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2741 + -1LL) = 1024LL;
  *((value *) $y_2741 + 0LL) = $y_2740;
  $y_2742 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2742 + -1LL) = 1024LL;
  *((value *) $y_2742 + 0LL) = $y_2741;
  $y_2743 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2743 + -1LL) = 1024LL;
  *((value *) $y_2743 + 0LL) = $y_2742;
  $y_2744 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2744 + -1LL) = 1024LL;
  *((value *) $y_2744 + 0LL) = $y_2743;
  $y_2745 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2745 + -1LL) = 1024LL;
  *((value *) $y_2745 + 0LL) = $y_2744;
  $y_2746 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2746 + -1LL) = 1024LL;
  *((value *) $y_2746 + 0LL) = $y_2745;
  $y_2747 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2747 + -1LL) = 1024LL;
  *((value *) $y_2747 + 0LL) = $y_2746;
  $y_2748 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2748 + -1LL) = 1024LL;
  *((value *) $y_2748 + 0LL) = $y_2747;
  $y_2749 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2749 + -1LL) = 1024LL;
  *((value *) $y_2749 + 0LL) = $y_2748;
  $y_2750 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2750 + -1LL) = 1024LL;
  *((value *) $y_2750 + 0LL) = $y_2749;
  $y_2751 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2751 + -1LL) = 1024LL;
  *((value *) $y_2751 + 0LL) = $y_2750;
  $y_2752 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2752 + -1LL) = 1024LL;
  *((value *) $y_2752 + 0LL) = $y_2751;
  $y_2753 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2753 + -1LL) = 1024LL;
  *((value *) $y_2753 + 0LL) = $y_2752;
  $y_2754 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2754 + -1LL) = 1024LL;
  *((value *) $y_2754 + 0LL) = $y_2753;
  $y_2755 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2755 + -1LL) = 1024LL;
  *((value *) $y_2755 + 0LL) = $y_2754;
  $y_2756 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2756 + -1LL) = 1024LL;
  *((value *) $y_2756 + 0LL) = $y_2755;
  $y_2757 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2757 + -1LL) = 1024LL;
  *((value *) $y_2757 + 0LL) = $y_2756;
  $y_2758 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2758 + -1LL) = 1024LL;
  *((value *) $y_2758 + 0LL) = $y_2757;
  $y_2759 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2759 + -1LL) = 1024LL;
  *((value *) $y_2759 + 0LL) = $y_2758;
  $y_2760 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2760 + -1LL) = 1024LL;
  *((value *) $y_2760 + 0LL) = $y_2759;
  $y_2761 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2761 + -1LL) = 1024LL;
  *((value *) $y_2761 + 0LL) = $y_2760;
  $y_2762 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2762 + -1LL) = 1024LL;
  *((value *) $y_2762 + 0LL) = $y_2761;
  $y_2763 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2763 + -1LL) = 1024LL;
  *((value *) $y_2763 + 0LL) = $y_2762;
  $y_2764 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2764 + -1LL) = 1024LL;
  *((value *) $y_2764 + 0LL) = $y_2763;
  $y_2765 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2765 + -1LL) = 1024LL;
  *((value *) $y_2765 + 0LL) = $y_2764;
  $y_2766 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2766 + -1LL) = 1024LL;
  *((value *) $y_2766 + 0LL) = $y_2765;
  $y_2767 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2767 + -1LL) = 1024LL;
  *((value *) $y_2767 + 0LL) = $y_2766;
  $y_2768 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2768 + -1LL) = 1024LL;
  *((value *) $y_2768 + 0LL) = $y_2767;
  $y_2769 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2769 + -1LL) = 1024LL;
  *((value *) $y_2769 + 0LL) = $y_2768;
  $y_2770 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2770 + -1LL) = 1024LL;
  *((value *) $y_2770 + 0LL) = $y_2769;
  $y_2771 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2771 + -1LL) = 1024LL;
  *((value *) $y_2771 + 0LL) = $y_2770;
  $y_2772 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2772 + -1LL) = 1024LL;
  *((value *) $y_2772 + 0LL) = $y_2771;
  $y_2773 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2773 + -1LL) = 1024LL;
  *((value *) $y_2773 + 0LL) = $y_2772;
  $y_2774 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2774 + -1LL) = 1024LL;
  *((value *) $y_2774 + 0LL) = $y_2773;
  $y_2775 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2775 + -1LL) = 1024LL;
  *((value *) $y_2775 + 0LL) = $y_2774;
  $y_2776 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2776 + -1LL) = 1024LL;
  *((value *) $y_2776 + 0LL) = $y_2775;
  $y_2777 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2777 + -1LL) = 1024LL;
  *((value *) $y_2777 + 0LL) = $y_2776;
  $y_2778 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2778 + -1LL) = 1024LL;
  *((value *) $y_2778 + 0LL) = $y_2777;
  $y_2779 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2779 + -1LL) = 1024LL;
  *((value *) $y_2779 + 0LL) = $y_2778;
  $y_2780 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2780 + -1LL) = 1024LL;
  *((value *) $y_2780 + 0LL) = $y_2779;
  $y_2781 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2781 + -1LL) = 1024LL;
  *((value *) $y_2781 + 0LL) = $y_2780;
  $y_2782 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2782 + -1LL) = 1024LL;
  *((value *) $y_2782 + 0LL) = $y_2781;
  $y_2783 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2783 + -1LL) = 1024LL;
  *((value *) $y_2783 + 0LL) = $y_2782;
  $y_2784 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2784 + -1LL) = 1024LL;
  *((value *) $y_2784 + 0LL) = $y_2783;
  $y_2785 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2785 + -1LL) = 1024LL;
  *((value *) $y_2785 + 0LL) = $y_2784;
  $y_2786 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2786 + -1LL) = 1024LL;
  *((value *) $y_2786 + 0LL) = $y_2785;
  $y_2787 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2787 + -1LL) = 1024LL;
  *((value *) $y_2787 + 0LL) = $y_2786;
  $y_2788 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2788 + -1LL) = 1024LL;
  *((value *) $y_2788 + 0LL) = $y_2787;
  $y_2789 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2789 + -1LL) = 1024LL;
  *((value *) $y_2789 + 0LL) = $y_2788;
  $y_2790 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2790 + -1LL) = 1024LL;
  *((value *) $y_2790 + 0LL) = $y_2789;
  $y_2791 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2791 + -1LL) = 1024LL;
  *((value *) $y_2791 + 0LL) = $y_2790;
  $y_2792 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2792 + -1LL) = 1024LL;
  *((value *) $y_2792 + 0LL) = $y_2791;
  $y_2793 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2793 + -1LL) = 1024LL;
  *((value *) $y_2793 + 0LL) = $y_2792;
  $y_2794 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2794 + -1LL) = 1024LL;
  *((value *) $y_2794 + 0LL) = $y_2793;
  $y_2795 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2795 + -1LL) = 1024LL;
  *((value *) $y_2795 + 0LL) = $y_2794;
  $y_2796 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2796 + -1LL) = 1024LL;
  *((value *) $y_2796 + 0LL) = $y_2795;
  $y_2797 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2797 + -1LL) = 1024LL;
  *((value *) $y_2797 + 0LL) = $y_2796;
  $y_2798 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2798 + -1LL) = 1024LL;
  *((value *) $y_2798 + 0LL) = $y_2797;
  $y_2799 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2799 + -1LL) = 1024LL;
  *((value *) $y_2799 + 0LL) = $y_2798;
  $y_2800 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2800 + -1LL) = 1024LL;
  *((value *) $y_2800 + 0LL) = $y_2799;
  $y_2801 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2801 + -1LL) = 1024LL;
  *((value *) $y_2801 + 0LL) = $y_2800;
  $y_2802 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2802 + -1LL) = 1024LL;
  *((value *) $y_2802 + 0LL) = $y_2801;
  $y_2803 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2803 + -1LL) = 1024LL;
  *((value *) $y_2803 + 0LL) = $y_2802;
  $y_2804 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2804 + -1LL) = 1024LL;
  *((value *) $y_2804 + 0LL) = $y_2803;
  $y_2805 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2805 + -1LL) = 1024LL;
  *((value *) $y_2805 + 0LL) = $y_2804;
  $y_2806 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2806 + -1LL) = 1024LL;
  *((value *) $y_2806 + 0LL) = $y_2805;
  $y_2807 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2807 + -1LL) = 1024LL;
  *((value *) $y_2807 + 0LL) = $y_2806;
  $y_2808 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2808 + -1LL) = 1024LL;
  *((value *) $y_2808 + 0LL) = $y_2807;
  $y_2809 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2809 + -1LL) = 1024LL;
  *((value *) $y_2809 + 0LL) = $y_2808;
  $y_2810 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2810 + -1LL) = 1024LL;
  *((value *) $y_2810 + 0LL) = $y_2809;
  $y_2811 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2811 + -1LL) = 1024LL;
  *((value *) $y_2811 + 0LL) = $y_2810;
  $y_2812 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2812 + -1LL) = 1024LL;
  *((value *) $y_2812 + 0LL) = $y_2811;
  $y_2813 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2813 + -1LL) = 1024LL;
  *((value *) $y_2813 + 0LL) = $y_2812;
  $y_2814 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2814 + -1LL) = 1024LL;
  *((value *) $y_2814 + 0LL) = $y_2813;
  $y_2815 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2815 + -1LL) = 1024LL;
  *((value *) $y_2815 + 0LL) = $y_2814;
  $y_2816 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2816 + -1LL) = 1024LL;
  *((value *) $y_2816 + 0LL) = $y_2815;
  $y_2817 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2817 + -1LL) = 1024LL;
  *((value *) $y_2817 + 0LL) = $y_2816;
  $y_2818 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2818 + -1LL) = 1024LL;
  *((value *) $y_2818 + 0LL) = $y_2817;
  $y_2819 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2819 + -1LL) = 1024LL;
  *((value *) $y_2819 + 0LL) = $y_2818;
  $y_2820 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2820 + -1LL) = 1024LL;
  *((value *) $y_2820 + 0LL) = $y_2819;
  $y_2821 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2821 + -1LL) = 1024LL;
  *((value *) $y_2821 + 0LL) = $y_2820;
  $y_2822 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2822 + -1LL) = 1024LL;
  *((value *) $y_2822 + 0LL) = $y_2821;
  $y_2823 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2823 + -1LL) = 1024LL;
  *((value *) $y_2823 + 0LL) = $y_2822;
  $y_2824 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2824 + -1LL) = 1024LL;
  *((value *) $y_2824 + 0LL) = $y_2823;
  $y_2825 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2825 + -1LL) = 1024LL;
  *((value *) $y_2825 + 0LL) = $y_2824;
  $y_2826 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2826 + -1LL) = 1024LL;
  *((value *) $y_2826 + 0LL) = $y_2825;
  $y_2827 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2827 + -1LL) = 1024LL;
  *((value *) $y_2827 + 0LL) = $y_2826;
  $y_2828 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2828 + -1LL) = 1024LL;
  *((value *) $y_2828 + 0LL) = $y_2827;
  $y_2829 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2829 + -1LL) = 1024LL;
  *((value *) $y_2829 + 0LL) = $y_2828;
  $y_2830 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2830 + -1LL) = 1024LL;
  *((value *) $y_2830 + 0LL) = $y_2829;
  $y_2831 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2831 + -1LL) = 1024LL;
  *((value *) $y_2831 + 0LL) = $y_2830;
  $y_2832 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2832 + -1LL) = 1024LL;
  *((value *) $y_2832 + 0LL) = $y_2831;
  $y_2833 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2833 + -1LL) = 1024LL;
  *((value *) $y_2833 + 0LL) = $y_2832;
  $y_2834 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2834 + -1LL) = 1024LL;
  *((value *) $y_2834 + 0LL) = $y_2833;
  $y_2835 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2835 + -1LL) = 1024LL;
  *((value *) $y_2835 + 0LL) = $y_2834;
  $y_2836 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2836 + -1LL) = 1024LL;
  *((value *) $y_2836 + 0LL) = $y_2835;
  $y_2837 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2837 + -1LL) = 1024LL;
  *((value *) $y_2837 + 0LL) = $y_2836;
  $y_2838 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2838 + -1LL) = 1024LL;
  *((value *) $y_2838 + 0LL) = $y_2837;
  $y_2839 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2839 + -1LL) = 1024LL;
  *((value *) $y_2839 + 0LL) = $y_2838;
  $y_2840 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2840 + -1LL) = 1024LL;
  *((value *) $y_2840 + 0LL) = $y_2839;
  $y_2841 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2841 + -1LL) = 1024LL;
  *((value *) $y_2841 + 0LL) = $y_2840;
  $y_2842 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2842 + -1LL) = 1024LL;
  *((value *) $y_2842 + 0LL) = $y_2841;
  $y_2843 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2843 + -1LL) = 1024LL;
  *((value *) $y_2843 + 0LL) = $y_2842;
  $y_2844 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2844 + -1LL) = 1024LL;
  *((value *) $y_2844 + 0LL) = $y_2843;
  $y_2845 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2845 + -1LL) = 1024LL;
  *((value *) $y_2845 + 0LL) = $y_2844;
  $y_2846 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2846 + -1LL) = 1024LL;
  *((value *) $y_2846 + 0LL) = $y_2845;
  $y_2847 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2847 + -1LL) = 1024LL;
  *((value *) $y_2847 + 0LL) = $y_2846;
  $y_2848 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2848 + -1LL) = 1024LL;
  *((value *) $y_2848 + 0LL) = $y_2847;
  $y_2849 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2849 + -1LL) = 1024LL;
  *((value *) $y_2849 + 0LL) = $y_2848;
  $y_2850 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2850 + -1LL) = 1024LL;
  *((value *) $y_2850 + 0LL) = $y_2849;
  $y_2851 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2851 + -1LL) = 1024LL;
  *((value *) $y_2851 + 0LL) = $y_2850;
  $y_2852 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2852 + -1LL) = 1024LL;
  *((value *) $y_2852 + 0LL) = $y_2851;
  $y_2853 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2853 + -1LL) = 1024LL;
  *((value *) $y_2853 + 0LL) = $y_2852;
  $y_2854 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2854 + -1LL) = 1024LL;
  *((value *) $y_2854 + 0LL) = $y_2853;
  $y_2855 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2855 + -1LL) = 1024LL;
  *((value *) $y_2855 + 0LL) = $y_2854;
  $y_2856 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2856 + -1LL) = 1024LL;
  *((value *) $y_2856 + 0LL) = $y_2855;
  $y_2857 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2857 + -1LL) = 1024LL;
  *((value *) $y_2857 + 0LL) = $y_2856;
  $y_2858 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2858 + -1LL) = 1024LL;
  *((value *) $y_2858 + 0LL) = $y_2857;
  $y_2859 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2859 + -1LL) = 1024LL;
  *((value *) $y_2859 + 0LL) = $y_2858;
  $y_2860 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2860 + -1LL) = 1024LL;
  *((value *) $y_2860 + 0LL) = $y_2859;
  $y_2861 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2861 + -1LL) = 1024LL;
  *((value *) $y_2861 + 0LL) = $y_2860;
  $y_2862 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2862 + -1LL) = 1024LL;
  *((value *) $y_2862 + 0LL) = $y_2861;
  $y_2863 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2863 + -1LL) = 1024LL;
  *((value *) $y_2863 + 0LL) = $y_2862;
  $y_2864 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2864 + -1LL) = 1024LL;
  *((value *) $y_2864 + 0LL) = $y_2863;
  $y_2865 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2865 + -1LL) = 1024LL;
  *((value *) $y_2865 + 0LL) = $y_2864;
  $y_2866 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2866 + -1LL) = 1024LL;
  *((value *) $y_2866 + 0LL) = $y_2865;
  $y_2867 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2867 + -1LL) = 1024LL;
  *((value *) $y_2867 + 0LL) = $y_2866;
  $y_2868 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2868 + -1LL) = 1024LL;
  *((value *) $y_2868 + 0LL) = $y_2867;
  $y_2869 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2869 + -1LL) = 1024LL;
  *((value *) $y_2869 + 0LL) = $y_2868;
  $y_2870 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2870 + -1LL) = 1024LL;
  *((value *) $y_2870 + 0LL) = $y_2869;
  $y_2871 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2871 + -1LL) = 1024LL;
  *((value *) $y_2871 + 0LL) = $y_2870;
  $y_2872 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2872 + -1LL) = 1024LL;
  *((value *) $y_2872 + 0LL) = $y_2871;
  $y_2873 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2873 + -1LL) = 1024LL;
  *((value *) $y_2873 + 0LL) = $y_2872;
  $y_2874 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2874 + -1LL) = 1024LL;
  *((value *) $y_2874 + 0LL) = $y_2873;
  $y_2875 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2875 + -1LL) = 1024LL;
  *((value *) $y_2875 + 0LL) = $y_2874;
  $y_2876 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2876 + -1LL) = 1024LL;
  *((value *) $y_2876 + 0LL) = $y_2875;
  $y_2877 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2877 + -1LL) = 1024LL;
  *((value *) $y_2877 + 0LL) = $y_2876;
  $y_2878 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2878 + -1LL) = 1024LL;
  *((value *) $y_2878 + 0LL) = $y_2877;
  $y_2879 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2879 + -1LL) = 1024LL;
  *((value *) $y_2879 + 0LL) = $y_2878;
  $y_2880 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2880 + -1LL) = 1024LL;
  *((value *) $y_2880 + 0LL) = $y_2879;
  $y_2881 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2881 + -1LL) = 1024LL;
  *((value *) $y_2881 + 0LL) = $y_2880;
  $y_2882 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2882 + -1LL) = 1024LL;
  *((value *) $y_2882 + 0LL) = $y_2881;
  $y_2883 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2883 + -1LL) = 1024LL;
  *((value *) $y_2883 + 0LL) = $y_2882;
  $y_2884 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2884 + -1LL) = 1024LL;
  *((value *) $y_2884 + 0LL) = $y_2883;
  $y_2885 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2885 + -1LL) = 1024LL;
  *((value *) $y_2885 + 0LL) = $y_2884;
  $y_2886 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2886 + -1LL) = 1024LL;
  *((value *) $y_2886 + 0LL) = $y_2885;
  $y_2887 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2887 + -1LL) = 1024LL;
  *((value *) $y_2887 + 0LL) = $y_2886;
  $y_2888 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2888 + -1LL) = 1024LL;
  *((value *) $y_2888 + 0LL) = $y_2887;
  $y_2889 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2889 + -1LL) = 1024LL;
  *((value *) $y_2889 + 0LL) = $y_2888;
  $y_2890 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2890 + -1LL) = 1024LL;
  *((value *) $y_2890 + 0LL) = $y_2889;
  $y_2891 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2891 + -1LL) = 1024LL;
  *((value *) $y_2891 + 0LL) = $y_2890;
  $y_2892 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2892 + -1LL) = 1024LL;
  *((value *) $y_2892 + 0LL) = $y_2891;
  $y_2893 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2893 + -1LL) = 1024LL;
  *((value *) $y_2893 + 0LL) = $y_2892;
  $y_2894 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2894 + -1LL) = 1024LL;
  *((value *) $y_2894 + 0LL) = $y_2893;
  $y_2895 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2895 + -1LL) = 1024LL;
  *((value *) $y_2895 + 0LL) = $y_2894;
  $y_2896 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2896 + -1LL) = 1024LL;
  *((value *) $y_2896 + 0LL) = $y_2895;
  $y_2897 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2897 + -1LL) = 1024LL;
  *((value *) $y_2897 + 0LL) = $y_2896;
  $y_2898 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2898 + -1LL) = 1024LL;
  *((value *) $y_2898 + 0LL) = $y_2897;
  $y_2899 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2899 + -1LL) = 1024LL;
  *((value *) $y_2899 + 0LL) = $y_2898;
  $y_2900 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2900 + -1LL) = 1024LL;
  *((value *) $y_2900 + 0LL) = $y_2899;
  $CertiDDdOSdRegistersdNatdsnd_command_2901 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNatdsnd_command_2901 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNatdsnd_command_2901 + 0LL) = $y_2900;
  $y_2902 = 1LL;
  $y_2903 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2903 + -1LL) = 1024LL;
  *((value *) $y_2903 + 0LL) = $y_2902;
  $y_2904 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2904 + -1LL) = 1024LL;
  *((value *) $y_2904 + 0LL) = $y_2903;
  $y_2905 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2905 + -1LL) = 1024LL;
  *((value *) $y_2905 + 0LL) = $y_2904;
  $y_2906 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2906 + -1LL) = 1024LL;
  *((value *) $y_2906 + 0LL) = $y_2905;
  $y_2907 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2907 + -1LL) = 1024LL;
  *((value *) $y_2907 + 0LL) = $y_2906;
  $y_2908 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2908 + -1LL) = 1024LL;
  *((value *) $y_2908 + 0LL) = $y_2907;
  $y_2909 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2909 + -1LL) = 1024LL;
  *((value *) $y_2909 + 0LL) = $y_2908;
  $y_2910 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2910 + -1LL) = 1024LL;
  *((value *) $y_2910 + 0LL) = $y_2909;
  $y_2911 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2911 + -1LL) = 1024LL;
  *((value *) $y_2911 + 0LL) = $y_2910;
  $y_2912 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2912 + -1LL) = 1024LL;
  *((value *) $y_2912 + 0LL) = $y_2911;
  $y_2913 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2913 + -1LL) = 1024LL;
  *((value *) $y_2913 + 0LL) = $y_2912;
  $y_2914 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2914 + -1LL) = 1024LL;
  *((value *) $y_2914 + 0LL) = $y_2913;
  $y_2915 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2915 + -1LL) = 1024LL;
  *((value *) $y_2915 + 0LL) = $y_2914;
  $y_2916 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2916 + -1LL) = 1024LL;
  *((value *) $y_2916 + 0LL) = $y_2915;
  $y_2917 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2917 + -1LL) = 1024LL;
  *((value *) $y_2917 + 0LL) = $y_2916;
  $y_2918 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2918 + -1LL) = 1024LL;
  *((value *) $y_2918 + 0LL) = $y_2917;
  $y_2919 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2919 + -1LL) = 1024LL;
  *((value *) $y_2919 + 0LL) = $y_2918;
  $y_2920 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2920 + -1LL) = 1024LL;
  *((value *) $y_2920 + 0LL) = $y_2919;
  $y_2921 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2921 + -1LL) = 1024LL;
  *((value *) $y_2921 + 0LL) = $y_2920;
  $y_2922 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2922 + -1LL) = 1024LL;
  *((value *) $y_2922 + 0LL) = $y_2921;
  $y_2923 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2923 + -1LL) = 1024LL;
  *((value *) $y_2923 + 0LL) = $y_2922;
  $y_2924 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2924 + -1LL) = 1024LL;
  *((value *) $y_2924 + 0LL) = $y_2923;
  $y_2925 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2925 + -1LL) = 1024LL;
  *((value *) $y_2925 + 0LL) = $y_2924;
  $y_2926 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2926 + -1LL) = 1024LL;
  *((value *) $y_2926 + 0LL) = $y_2925;
  $y_2927 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2927 + -1LL) = 1024LL;
  *((value *) $y_2927 + 0LL) = $y_2926;
  $y_2928 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2928 + -1LL) = 1024LL;
  *((value *) $y_2928 + 0LL) = $y_2927;
  $y_2929 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2929 + -1LL) = 1024LL;
  *((value *) $y_2929 + 0LL) = $y_2928;
  $y_2930 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2930 + -1LL) = 1024LL;
  *((value *) $y_2930 + 0LL) = $y_2929;
  $y_2931 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2931 + -1LL) = 1024LL;
  *((value *) $y_2931 + 0LL) = $y_2930;
  $y_2932 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2932 + -1LL) = 1024LL;
  *((value *) $y_2932 + 0LL) = $y_2931;
  $y_2933 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2933 + -1LL) = 1024LL;
  *((value *) $y_2933 + 0LL) = $y_2932;
  $y_2934 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2934 + -1LL) = 1024LL;
  *((value *) $y_2934 + 0LL) = $y_2933;
  $y_2935 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2935 + -1LL) = 1024LL;
  *((value *) $y_2935 + 0LL) = $y_2934;
  $y_2936 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2936 + -1LL) = 1024LL;
  *((value *) $y_2936 + 0LL) = $y_2935;
  $y_2937 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2937 + -1LL) = 1024LL;
  *((value *) $y_2937 + 0LL) = $y_2936;
  $y_2938 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2938 + -1LL) = 1024LL;
  *((value *) $y_2938 + 0LL) = $y_2937;
  $y_2939 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2939 + -1LL) = 1024LL;
  *((value *) $y_2939 + 0LL) = $y_2938;
  $y_2940 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2940 + -1LL) = 1024LL;
  *((value *) $y_2940 + 0LL) = $y_2939;
  $y_2941 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2941 + -1LL) = 1024LL;
  *((value *) $y_2941 + 0LL) = $y_2940;
  $y_2942 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2942 + -1LL) = 1024LL;
  *((value *) $y_2942 + 0LL) = $y_2941;
  $y_2943 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2943 + -1LL) = 1024LL;
  *((value *) $y_2943 + 0LL) = $y_2942;
  $y_2944 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2944 + -1LL) = 1024LL;
  *((value *) $y_2944 + 0LL) = $y_2943;
  $y_2945 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2945 + -1LL) = 1024LL;
  *((value *) $y_2945 + 0LL) = $y_2944;
  $y_2946 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2946 + -1LL) = 1024LL;
  *((value *) $y_2946 + 0LL) = $y_2945;
  $y_2947 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2947 + -1LL) = 1024LL;
  *((value *) $y_2947 + 0LL) = $y_2946;
  $y_2948 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2948 + -1LL) = 1024LL;
  *((value *) $y_2948 + 0LL) = $y_2947;
  $y_2949 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2949 + -1LL) = 1024LL;
  *((value *) $y_2949 + 0LL) = $y_2948;
  $y_2950 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2950 + -1LL) = 1024LL;
  *((value *) $y_2950 + 0LL) = $y_2949;
  $y_2951 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2951 + -1LL) = 1024LL;
  *((value *) $y_2951 + 0LL) = $y_2950;
  $y_2952 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2952 + -1LL) = 1024LL;
  *((value *) $y_2952 + 0LL) = $y_2951;
  $y_2953 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2953 + -1LL) = 1024LL;
  *((value *) $y_2953 + 0LL) = $y_2952;
  $y_2954 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2954 + -1LL) = 1024LL;
  *((value *) $y_2954 + 0LL) = $y_2953;
  $y_2955 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2955 + -1LL) = 1024LL;
  *((value *) $y_2955 + 0LL) = $y_2954;
  $y_2956 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2956 + -1LL) = 1024LL;
  *((value *) $y_2956 + 0LL) = $y_2955;
  $y_2957 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2957 + -1LL) = 1024LL;
  *((value *) $y_2957 + 0LL) = $y_2956;
  $y_2958 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2958 + -1LL) = 1024LL;
  *((value *) $y_2958 + 0LL) = $y_2957;
  $y_2959 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2959 + -1LL) = 1024LL;
  *((value *) $y_2959 + 0LL) = $y_2958;
  $y_2960 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2960 + -1LL) = 1024LL;
  *((value *) $y_2960 + 0LL) = $y_2959;
  $y_2961 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2961 + -1LL) = 1024LL;
  *((value *) $y_2961 + 0LL) = $y_2960;
  $y_2962 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2962 + -1LL) = 1024LL;
  *((value *) $y_2962 + 0LL) = $y_2961;
  $y_2963 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2963 + -1LL) = 1024LL;
  *((value *) $y_2963 + 0LL) = $y_2962;
  $y_2964 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2964 + -1LL) = 1024LL;
  *((value *) $y_2964 + 0LL) = $y_2963;
  $y_2965 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2965 + -1LL) = 1024LL;
  *((value *) $y_2965 + 0LL) = $y_2964;
  $y_2966 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2966 + -1LL) = 1024LL;
  *((value *) $y_2966 + 0LL) = $y_2965;
  $y_2967 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2967 + -1LL) = 1024LL;
  *((value *) $y_2967 + 0LL) = $y_2966;
  $y_2968 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2968 + -1LL) = 1024LL;
  *((value *) $y_2968 + 0LL) = $y_2967;
  $CertiDDdOSdRegistersdNatdCmd_2969 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNatdCmd_2969 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNatdCmd_2969 + 0LL) = $y_2968;
  $y_2970 = 1LL;
  $y_2971 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2971 + -1LL) = 1024LL;
  *((value *) $y_2971 + 0LL) = $y_2970;
  $y_2972 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2972 + -1LL) = 1024LL;
  *((value *) $y_2972 + 0LL) = $y_2971;
  $y_2973 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2973 + -1LL) = 1024LL;
  *((value *) $y_2973 + 0LL) = $y_2972;
  $y_2974 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2974 + -1LL) = 1024LL;
  *((value *) $y_2974 + 0LL) = $y_2973;
  $y_2975 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2975 + -1LL) = 1024LL;
  *((value *) $y_2975 + 0LL) = $y_2974;
  $y_2976 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2976 + -1LL) = 1024LL;
  *((value *) $y_2976 + 0LL) = $y_2975;
  $y_2977 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2977 + -1LL) = 1024LL;
  *((value *) $y_2977 + 0LL) = $y_2976;
  $y_2978 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2978 + -1LL) = 1024LL;
  *((value *) $y_2978 + 0LL) = $y_2977;
  $y_2979 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2979 + -1LL) = 1024LL;
  *((value *) $y_2979 + 0LL) = $y_2978;
  $y_2980 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2980 + -1LL) = 1024LL;
  *((value *) $y_2980 + 0LL) = $y_2979;
  $y_2981 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2981 + -1LL) = 1024LL;
  *((value *) $y_2981 + 0LL) = $y_2980;
  $y_2982 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2982 + -1LL) = 1024LL;
  *((value *) $y_2982 + 0LL) = $y_2981;
  $y_2983 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2983 + -1LL) = 1024LL;
  *((value *) $y_2983 + 0LL) = $y_2982;
  $y_2984 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2984 + -1LL) = 1024LL;
  *((value *) $y_2984 + 0LL) = $y_2983;
  $y_2985 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2985 + -1LL) = 1024LL;
  *((value *) $y_2985 + 0LL) = $y_2984;
  $y_2986 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2986 + -1LL) = 1024LL;
  *((value *) $y_2986 + 0LL) = $y_2985;
  $y_2987 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2987 + -1LL) = 1024LL;
  *((value *) $y_2987 + 0LL) = $y_2986;
  $y_2988 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2988 + -1LL) = 1024LL;
  *((value *) $y_2988 + 0LL) = $y_2987;
  $y_2989 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2989 + -1LL) = 1024LL;
  *((value *) $y_2989 + 0LL) = $y_2988;
  $y_2990 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2990 + -1LL) = 1024LL;
  *((value *) $y_2990 + 0LL) = $y_2989;
  $y_2991 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2991 + -1LL) = 1024LL;
  *((value *) $y_2991 + 0LL) = $y_2990;
  $y_2992 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2992 + -1LL) = 1024LL;
  *((value *) $y_2992 + 0LL) = $y_2991;
  $y_2993 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2993 + -1LL) = 1024LL;
  *((value *) $y_2993 + 0LL) = $y_2992;
  $y_2994 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2994 + -1LL) = 1024LL;
  *((value *) $y_2994 + 0LL) = $y_2993;
  $y_2995 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2995 + -1LL) = 1024LL;
  *((value *) $y_2995 + 0LL) = $y_2994;
  $y_2996 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2996 + -1LL) = 1024LL;
  *((value *) $y_2996 + 0LL) = $y_2995;
  $y_2997 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2997 + -1LL) = 1024LL;
  *((value *) $y_2997 + 0LL) = $y_2996;
  $y_2998 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2998 + -1LL) = 1024LL;
  *((value *) $y_2998 + 0LL) = $y_2997;
  $y_2999 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_2999 + -1LL) = 1024LL;
  *((value *) $y_2999 + 0LL) = $y_2998;
  $y_3000 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3000 + -1LL) = 1024LL;
  *((value *) $y_3000 + 0LL) = $y_2999;
  $y_3001 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3001 + -1LL) = 1024LL;
  *((value *) $y_3001 + 0LL) = $y_3000;
  $y_3002 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3002 + -1LL) = 1024LL;
  *((value *) $y_3002 + 0LL) = $y_3001;
  $y_3003 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3003 + -1LL) = 1024LL;
  *((value *) $y_3003 + 0LL) = $y_3002;
  $y_3004 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3004 + -1LL) = 1024LL;
  *((value *) $y_3004 + 0LL) = $y_3003;
  $y_3005 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3005 + -1LL) = 1024LL;
  *((value *) $y_3005 + 0LL) = $y_3004;
  $y_3006 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3006 + -1LL) = 1024LL;
  *((value *) $y_3006 + 0LL) = $y_3005;
  $y_3007 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3007 + -1LL) = 1024LL;
  *((value *) $y_3007 + 0LL) = $y_3006;
  $y_3008 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3008 + -1LL) = 1024LL;
  *((value *) $y_3008 + 0LL) = $y_3007;
  $y_3009 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3009 + -1LL) = 1024LL;
  *((value *) $y_3009 + 0LL) = $y_3008;
  $y_3010 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3010 + -1LL) = 1024LL;
  *((value *) $y_3010 + 0LL) = $y_3009;
  $y_3011 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3011 + -1LL) = 1024LL;
  *((value *) $y_3011 + 0LL) = $y_3010;
  $y_3012 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3012 + -1LL) = 1024LL;
  *((value *) $y_3012 + 0LL) = $y_3011;
  $y_3013 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3013 + -1LL) = 1024LL;
  *((value *) $y_3013 + 0LL) = $y_3012;
  $y_3014 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3014 + -1LL) = 1024LL;
  *((value *) $y_3014 + 0LL) = $y_3013;
  $y_3015 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3015 + -1LL) = 1024LL;
  *((value *) $y_3015 + 0LL) = $y_3014;
  $y_3016 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3016 + -1LL) = 1024LL;
  *((value *) $y_3016 + 0LL) = $y_3015;
  $y_3017 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3017 + -1LL) = 1024LL;
  *((value *) $y_3017 + 0LL) = $y_3016;
  $y_3018 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3018 + -1LL) = 1024LL;
  *((value *) $y_3018 + 0LL) = $y_3017;
  $y_3019 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3019 + -1LL) = 1024LL;
  *((value *) $y_3019 + 0LL) = $y_3018;
  $y_3020 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3020 + -1LL) = 1024LL;
  *((value *) $y_3020 + 0LL) = $y_3019;
  $y_3021 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3021 + -1LL) = 1024LL;
  *((value *) $y_3021 + 0LL) = $y_3020;
  $y_3022 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3022 + -1LL) = 1024LL;
  *((value *) $y_3022 + 0LL) = $y_3021;
  $y_3023 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3023 + -1LL) = 1024LL;
  *((value *) $y_3023 + 0LL) = $y_3022;
  $y_3024 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3024 + -1LL) = 1024LL;
  *((value *) $y_3024 + 0LL) = $y_3023;
  $y_3025 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3025 + -1LL) = 1024LL;
  *((value *) $y_3025 + 0LL) = $y_3024;
  $y_3026 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3026 + -1LL) = 1024LL;
  *((value *) $y_3026 + 0LL) = $y_3025;
  $y_3027 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3027 + -1LL) = 1024LL;
  *((value *) $y_3027 + 0LL) = $y_3026;
  $y_3028 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3028 + -1LL) = 1024LL;
  *((value *) $y_3028 + 0LL) = $y_3027;
  $y_3029 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3029 + -1LL) = 1024LL;
  *((value *) $y_3029 + 0LL) = $y_3028;
  $y_3030 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3030 + -1LL) = 1024LL;
  *((value *) $y_3030 + 0LL) = $y_3029;
  $y_3031 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3031 + -1LL) = 1024LL;
  *((value *) $y_3031 + 0LL) = $y_3030;
  $y_3032 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3032 + -1LL) = 1024LL;
  *((value *) $y_3032 + 0LL) = $y_3031;
  $y_3033 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3033 + -1LL) = 1024LL;
  *((value *) $y_3033 + 0LL) = $y_3032;
  $y_3034 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3034 + -1LL) = 1024LL;
  *((value *) $y_3034 + 0LL) = $y_3033;
  $y_3035 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3035 + -1LL) = 1024LL;
  *((value *) $y_3035 + 0LL) = $y_3034;
  $CertiDDdOSdRegistersdNatdData2_3036 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNatdData2_3036 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNatdData2_3036 + 0LL) = $y_3035;
  $y_3037 = 1LL;
  $y_3038 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3038 + -1LL) = 1024LL;
  *((value *) $y_3038 + 0LL) = $y_3037;
  $y_3039 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3039 + -1LL) = 1024LL;
  *((value *) $y_3039 + 0LL) = $y_3038;
  $y_3040 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3040 + -1LL) = 1024LL;
  *((value *) $y_3040 + 0LL) = $y_3039;
  $y_3041 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3041 + -1LL) = 1024LL;
  *((value *) $y_3041 + 0LL) = $y_3040;
  $y_3042 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3042 + -1LL) = 1024LL;
  *((value *) $y_3042 + 0LL) = $y_3041;
  $y_3043 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3043 + -1LL) = 1024LL;
  *((value *) $y_3043 + 0LL) = $y_3042;
  $y_3044 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3044 + -1LL) = 1024LL;
  *((value *) $y_3044 + 0LL) = $y_3043;
  $y_3045 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3045 + -1LL) = 1024LL;
  *((value *) $y_3045 + 0LL) = $y_3044;
  $y_3046 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3046 + -1LL) = 1024LL;
  *((value *) $y_3046 + 0LL) = $y_3045;
  $y_3047 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3047 + -1LL) = 1024LL;
  *((value *) $y_3047 + 0LL) = $y_3046;
  $y_3048 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3048 + -1LL) = 1024LL;
  *((value *) $y_3048 + 0LL) = $y_3047;
  $y_3049 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3049 + -1LL) = 1024LL;
  *((value *) $y_3049 + 0LL) = $y_3048;
  $y_3050 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3050 + -1LL) = 1024LL;
  *((value *) $y_3050 + 0LL) = $y_3049;
  $y_3051 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3051 + -1LL) = 1024LL;
  *((value *) $y_3051 + 0LL) = $y_3050;
  $y_3052 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3052 + -1LL) = 1024LL;
  *((value *) $y_3052 + 0LL) = $y_3051;
  $y_3053 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3053 + -1LL) = 1024LL;
  *((value *) $y_3053 + 0LL) = $y_3052;
  $y_3054 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3054 + -1LL) = 1024LL;
  *((value *) $y_3054 + 0LL) = $y_3053;
  $y_3055 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3055 + -1LL) = 1024LL;
  *((value *) $y_3055 + 0LL) = $y_3054;
  $y_3056 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3056 + -1LL) = 1024LL;
  *((value *) $y_3056 + 0LL) = $y_3055;
  $y_3057 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3057 + -1LL) = 1024LL;
  *((value *) $y_3057 + 0LL) = $y_3056;
  $y_3058 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3058 + -1LL) = 1024LL;
  *((value *) $y_3058 + 0LL) = $y_3057;
  $y_3059 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3059 + -1LL) = 1024LL;
  *((value *) $y_3059 + 0LL) = $y_3058;
  $y_3060 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3060 + -1LL) = 1024LL;
  *((value *) $y_3060 + 0LL) = $y_3059;
  $y_3061 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3061 + -1LL) = 1024LL;
  *((value *) $y_3061 + 0LL) = $y_3060;
  $y_3062 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3062 + -1LL) = 1024LL;
  *((value *) $y_3062 + 0LL) = $y_3061;
  $y_3063 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3063 + -1LL) = 1024LL;
  *((value *) $y_3063 + 0LL) = $y_3062;
  $y_3064 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3064 + -1LL) = 1024LL;
  *((value *) $y_3064 + 0LL) = $y_3063;
  $y_3065 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3065 + -1LL) = 1024LL;
  *((value *) $y_3065 + 0LL) = $y_3064;
  $y_3066 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3066 + -1LL) = 1024LL;
  *((value *) $y_3066 + 0LL) = $y_3065;
  $y_3067 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3067 + -1LL) = 1024LL;
  *((value *) $y_3067 + 0LL) = $y_3066;
  $y_3068 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3068 + -1LL) = 1024LL;
  *((value *) $y_3068 + 0LL) = $y_3067;
  $y_3069 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3069 + -1LL) = 1024LL;
  *((value *) $y_3069 + 0LL) = $y_3068;
  $y_3070 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3070 + -1LL) = 1024LL;
  *((value *) $y_3070 + 0LL) = $y_3069;
  $y_3071 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3071 + -1LL) = 1024LL;
  *((value *) $y_3071 + 0LL) = $y_3070;
  $y_3072 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3072 + -1LL) = 1024LL;
  *((value *) $y_3072 + 0LL) = $y_3071;
  $y_3073 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3073 + -1LL) = 1024LL;
  *((value *) $y_3073 + 0LL) = $y_3072;
  $y_3074 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3074 + -1LL) = 1024LL;
  *((value *) $y_3074 + 0LL) = $y_3073;
  $y_3075 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3075 + -1LL) = 1024LL;
  *((value *) $y_3075 + 0LL) = $y_3074;
  $y_3076 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3076 + -1LL) = 1024LL;
  *((value *) $y_3076 + 0LL) = $y_3075;
  $y_3077 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3077 + -1LL) = 1024LL;
  *((value *) $y_3077 + 0LL) = $y_3076;
  $y_3078 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3078 + -1LL) = 1024LL;
  *((value *) $y_3078 + 0LL) = $y_3077;
  $y_3079 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3079 + -1LL) = 1024LL;
  *((value *) $y_3079 + 0LL) = $y_3078;
  $y_3080 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3080 + -1LL) = 1024LL;
  *((value *) $y_3080 + 0LL) = $y_3079;
  $y_3081 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3081 + -1LL) = 1024LL;
  *((value *) $y_3081 + 0LL) = $y_3080;
  $y_3082 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3082 + -1LL) = 1024LL;
  *((value *) $y_3082 + 0LL) = $y_3081;
  $y_3083 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3083 + -1LL) = 1024LL;
  *((value *) $y_3083 + 0LL) = $y_3082;
  $y_3084 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3084 + -1LL) = 1024LL;
  *((value *) $y_3084 + 0LL) = $y_3083;
  $y_3085 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3085 + -1LL) = 1024LL;
  *((value *) $y_3085 + 0LL) = $y_3084;
  $y_3086 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3086 + -1LL) = 1024LL;
  *((value *) $y_3086 + 0LL) = $y_3085;
  $y_3087 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3087 + -1LL) = 1024LL;
  *((value *) $y_3087 + 0LL) = $y_3086;
  $y_3088 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3088 + -1LL) = 1024LL;
  *((value *) $y_3088 + 0LL) = $y_3087;
  $y_3089 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3089 + -1LL) = 1024LL;
  *((value *) $y_3089 + 0LL) = $y_3088;
  $y_3090 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3090 + -1LL) = 1024LL;
  *((value *) $y_3090 + 0LL) = $y_3089;
  $y_3091 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3091 + -1LL) = 1024LL;
  *((value *) $y_3091 + 0LL) = $y_3090;
  $y_3092 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3092 + -1LL) = 1024LL;
  *((value *) $y_3092 + 0LL) = $y_3091;
  $y_3093 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3093 + -1LL) = 1024LL;
  *((value *) $y_3093 + 0LL) = $y_3092;
  $y_3094 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3094 + -1LL) = 1024LL;
  *((value *) $y_3094 + 0LL) = $y_3093;
  $y_3095 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3095 + -1LL) = 1024LL;
  *((value *) $y_3095 + 0LL) = $y_3094;
  $y_3096 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3096 + -1LL) = 1024LL;
  *((value *) $y_3096 + 0LL) = $y_3095;
  $y_3097 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3097 + -1LL) = 1024LL;
  *((value *) $y_3097 + 0LL) = $y_3096;
  $y_3098 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3098 + -1LL) = 1024LL;
  *((value *) $y_3098 + 0LL) = $y_3097;
  $y_3099 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3099 + -1LL) = 1024LL;
  *((value *) $y_3099 + 0LL) = $y_3098;
  $y_3100 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3100 + -1LL) = 1024LL;
  *((value *) $y_3100 + 0LL) = $y_3099;
  $y_3101 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3101 + -1LL) = 1024LL;
  *((value *) $y_3101 + 0LL) = $y_3100;
  $y_3102 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3102 + -1LL) = 1024LL;
  *((value *) $y_3102 + 0LL) = $y_3101;
  $y_3103 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3103 + -1LL) = 1024LL;
  *((value *) $y_3103 + 0LL) = $y_3102;
  $y_3104 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3104 + -1LL) = 1024LL;
  *((value *) $y_3104 + 0LL) = $y_3103;
  $y_3105 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3105 + -1LL) = 1024LL;
  *((value *) $y_3105 + 0LL) = $y_3104;
  $y_3106 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3106 + -1LL) = 1024LL;
  *((value *) $y_3106 + 0LL) = $y_3105;
  $y_3107 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3107 + -1LL) = 1024LL;
  *((value *) $y_3107 + 0LL) = $y_3106;
  $y_3108 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3108 + -1LL) = 1024LL;
  *((value *) $y_3108 + 0LL) = $y_3107;
  $y_3109 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3109 + -1LL) = 1024LL;
  *((value *) $y_3109 + 0LL) = $y_3108;
  $y_3110 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3110 + -1LL) = 1024LL;
  *((value *) $y_3110 + 0LL) = $y_3109;
  $y_3111 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3111 + -1LL) = 1024LL;
  *((value *) $y_3111 + 0LL) = $y_3110;
  $y_3112 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3112 + -1LL) = 1024LL;
  *((value *) $y_3112 + 0LL) = $y_3111;
  $y_3113 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3113 + -1LL) = 1024LL;
  *((value *) $y_3113 + 0LL) = $y_3112;
  $y_3114 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3114 + -1LL) = 1024LL;
  *((value *) $y_3114 + 0LL) = $y_3113;
  $y_3115 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3115 + -1LL) = 1024LL;
  *((value *) $y_3115 + 0LL) = $y_3114;
  $y_3116 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3116 + -1LL) = 1024LL;
  *((value *) $y_3116 + 0LL) = $y_3115;
  $y_3117 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3117 + -1LL) = 1024LL;
  *((value *) $y_3117 + 0LL) = $y_3116;
  $y_3118 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3118 + -1LL) = 1024LL;
  *((value *) $y_3118 + 0LL) = $y_3117;
  $y_3119 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3119 + -1LL) = 1024LL;
  *((value *) $y_3119 + 0LL) = $y_3118;
  $y_3120 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3120 + -1LL) = 1024LL;
  *((value *) $y_3120 + 0LL) = $y_3119;
  $y_3121 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3121 + -1LL) = 1024LL;
  *((value *) $y_3121 + 0LL) = $y_3120;
  $y_3122 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3122 + -1LL) = 1024LL;
  *((value *) $y_3122 + 0LL) = $y_3121;
  $y_3123 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3123 + -1LL) = 1024LL;
  *((value *) $y_3123 + 0LL) = $y_3122;
  $y_3124 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3124 + -1LL) = 1024LL;
  *((value *) $y_3124 + 0LL) = $y_3123;
  $y_3125 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3125 + -1LL) = 1024LL;
  *((value *) $y_3125 + 0LL) = $y_3124;
  $y_3126 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3126 + -1LL) = 1024LL;
  *((value *) $y_3126 + 0LL) = $y_3125;
  $y_3127 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3127 + -1LL) = 1024LL;
  *((value *) $y_3127 + 0LL) = $y_3126;
  $y_3128 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3128 + -1LL) = 1024LL;
  *((value *) $y_3128 + 0LL) = $y_3127;
  $y_3129 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3129 + -1LL) = 1024LL;
  *((value *) $y_3129 + 0LL) = $y_3128;
  $y_3130 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3130 + -1LL) = 1024LL;
  *((value *) $y_3130 + 0LL) = $y_3129;
  $y_3131 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3131 + -1LL) = 1024LL;
  *((value *) $y_3131 + 0LL) = $y_3130;
  $y_3132 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3132 + -1LL) = 1024LL;
  *((value *) $y_3132 + 0LL) = $y_3131;
  $y_3133 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3133 + -1LL) = 1024LL;
  *((value *) $y_3133 + 0LL) = $y_3132;
  $CertiDDdOSdRegistersdNatdPc_spk_3134 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNatdPc_spk_3134 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNatdPc_spk_3134 + 0LL) = $y_3133;
  $env_3135 = (value) ($alloc + 1LL);
  $alloc = $alloc + 5LL;
  *((value *) $env_3135 + -1LL) = 4096LL;
  *((value *) $env_3135 + 0LL) = $CertiDDdOSdRegistersdNatdsnd_command_2901;
  *((value *) $env_3135 + 1LL) = $CertiDDdOSdRegistersdNatdCmd_2969;
  *((value *) $env_3135 + 2LL) = $CertiDDdOSdRegistersdNatdData2_3036;
  *((value *) $env_3135 + 3LL) = $CertiDDdOSdRegistersdNatdPc_spk_3134;
  $y_3136 = 1LL;
  $y_3137 = 1LL;
  $y_3138 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3138 + -1LL) = 1026LL;
  *((value *) $y_3138 + 0LL) = $y_3137;
  $y_3139 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3139 + -1LL) = 1032LL;
  *((value *) $y_3139 + 0LL) = $y_3138;
  $y_3140 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3140 + -1LL) = 1025LL;
  *((value *) $y_3140 + 0LL) = $y_3139;
  $y_3141 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3141 + -1LL) = 1027LL;
  *((value *) $y_3141 + 0LL) = $y_3140;
  $y_3142 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3142 + -1LL) = 1033LL;
  *((value *) $y_3142 + 0LL) = $y_3141;
  $y_3143 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3143 + -1LL) = 1025LL;
  *((value *) $y_3143 + 0LL) = $y_3142;
  $y_3144 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3144 + -1LL) = 1025LL;
  *((value *) $y_3144 + 0LL) = $y_3143;
  $y_3145 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3145 + -1LL) = 1024LL;
  *((value *) $y_3145 + 0LL) = $y_3144;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $y_3136;
  *(root + 0LL) = $env_3135;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $CertiDDdOSdPit_infodLinuxdNatdTick_rate_3147 =
    ((value (*)(struct thread_info *, value)) f_case_known_138)
    ($tinfo, $y_3145);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(21LL <= $limit - $alloc)) {
    *(root + 2LL) = $CertiDDdOSdPit_infodLinuxdNatdTick_rate_3147;
    frame.next = root + 3LL;
    (*$tinfo).nalloc = 21LL;
    garbage_collect($tinfo);
    $CertiDDdOSdPit_infodLinuxdNatdTick_rate_3147 = *(root + 2LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_3136 = *(root + 1LL);
  $env_3135 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_3148 = 1LL;
  $y_3149 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3149 + -1LL) = 1025LL;
  *((value *) $y_3149 + 0LL) = $y_3148;
  $y_3150 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3150 + -1LL) = 1024LL;
  *((value *) $y_3150 + 0LL) = $y_3149;
  $y_3151 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3151 + -1LL) = 1024LL;
  *((value *) $y_3151 + 0LL) = $y_3150;
  $y_3152 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_3152 + -1LL) = 1025LL;
  *((value *) $y_3152 + 0LL) = $y_3151;
  $CertiDDdOSdErrvaldeinval_3153 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdErrvaldeinval_3153 + -1LL) = 1025LL;
  *((value *) $CertiDDdOSdErrvaldeinval_3153 + 0LL) = $y_3152;
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_clo_3154 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_clo_3154
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_clo_3154
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_115;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_clo_3154
     + 1LL) =
    $env_3135;
  $env_3155 = (value) ($alloc + 1LL);
  $alloc = $alloc + 5LL;
  *((value *) $env_3155 + -1LL) = 4096LL;
  *((value *) $env_3155 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNatdenable_sound_clo_3154;
  *((value *) $env_3155 + 1LL) = $y_3136;
  *((value *) $env_3155 + 2LL) =
    $CertiDDdOSdPit_infodLinuxdNatdTick_rate_3147;
  *((value *) $env_3155 + 3LL) = $CertiDDdOSdErrvaldeinval_3153;
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_clo_3156 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_clo_3156
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_clo_3156
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_143;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_clo_3156
     + 1LL) =
    $env_3155;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNatdpcspkr_evt_opt_clo_3156;
}


#endif /* PCSPKR_EVT_LINUX_NAT_C */
