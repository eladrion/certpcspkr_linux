#ifndef PCSPKR_EVT_LINUX_N_MINPRIMS_C
#define PCSPKR_EVT_LINUX_N_MINPRIMS_C
#include <gc_stack.h>
#include "locking_ffi.h"
#include "regio_ffi.h"
#include "pcspkr_evt_linux.h"
extern struct thread_info *make_tinfo(void);
extern value iter_fix_uncurried_known_147(struct thread_info *, value, value);
extern value f_case_known_146(struct thread_info *, value, value);
extern value f_case_known_145(struct thread_info *, value);
extern value pos_div_eucl_uncurried_known_144(struct thread_info *, value, value, value);
extern value f_case_known_143(struct thread_info *, value, value, value, value);
extern value f_case_known_142(struct thread_info *, value);
extern value f_case_known_141(struct thread_info *, value, value);
extern value f_case_known_140(struct thread_info *, value);
extern value f_case_known_139(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_138(struct thread_info *, value, value, value, value);
extern value y_wrapper_137(struct thread_info *, value, value);
extern value y_wrapper_136(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_135(struct thread_info *, value, value);
extern value CoqdNArithdBinNatDefdNddiv2_known_134(struct thread_info *, value);
extern value CoqdNArithdBinNatDefdNddouble_known_133(struct thread_info *, value);
extern value sub_mask_carry_uncurried_known_132(struct thread_info *, value, value);
extern value sub_mask_uncurried_known_131(struct thread_info *, value, value);
extern value CoqdNArithdBinNatDefdNdsub_uncurried_known_130(struct thread_info *, value, value);
extern value pred_double_known_129(struct thread_info *, value);
extern value CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128(struct thread_info *, value);
extern value CoqdPArithdBinPosDefdPosddouble_mask_known_127(struct thread_info *, value);
extern value CoqdNArithdBinNatDefdNdsucc_double_known_126(struct thread_info *, value);
extern value f_case_known_125(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdltb_uncurried_known_124(struct thread_info *, value, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_123(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_122(struct thread_info *, value);
extern value land_uncurried_known_121(struct thread_info *, value, value);
extern value CoqdNArithdBinNatDefdNdland_uncurried_known_120(struct thread_info *, value, value);
extern value CoqdPArithdBinPosDefdPosdNdouble_known_119(struct thread_info *, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_118(struct thread_info *, value, value);
extern value lor_uncurried_known_117(struct thread_info *, value, value);
extern value f_case_known_116(struct thread_info *, value, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_115(struct thread_info *, value, value, value);
extern value y_wrapper_114(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_113(struct thread_info *, value, value);
extern value CertiDDdOSdRegister_iodNdout8_p_uncurried_known_112(struct thread_info *, value, value, value);
extern value f_case_known_111(struct thread_info *, value, value, value);
extern value CoqdNArithdBinNatDefdNdleb_uncurried_known_110(struct thread_info *, value, value, value);
extern value compare_cont_uncurried_uncurried_known_109(struct thread_info *, value, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_108(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdeqb_uncurried_known_107(struct thread_info *, value, value);
extern value CoqdNArithdBinNatDefdNdeqb_uncurried_known_106(struct thread_info *, value, value);
extern value eqb_uncurried_known_105(struct thread_info *, value, value);
extern value body(struct thread_info *);
value iter_fix_uncurried_known_147(struct thread_info *, value, value);
value f_case_known_146(struct thread_info *, value, value);
value f_case_known_145(struct thread_info *, value);
value pos_div_eucl_uncurried_known_144(struct thread_info *, value, value, value);
value f_case_known_143(struct thread_info *, value, value, value, value);
value f_case_known_142(struct thread_info *, value);
value f_case_known_141(struct thread_info *, value, value);
value f_case_known_140(struct thread_info *, value);
value f_case_known_139(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_138(struct thread_info *, value, value, value, value);
value y_wrapper_137(struct thread_info *, value, value);
value y_wrapper_136(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_135(struct thread_info *, value, value);
value CoqdNArithdBinNatDefdNddiv2_known_134(struct thread_info *, value);
value CoqdNArithdBinNatDefdNddouble_known_133(struct thread_info *, value);
value sub_mask_carry_uncurried_known_132(struct thread_info *, value, value);
value sub_mask_uncurried_known_131(struct thread_info *, value, value);
value CoqdNArithdBinNatDefdNdsub_uncurried_known_130(struct thread_info *, value, value);
value pred_double_known_129(struct thread_info *, value);
value CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128(struct thread_info *, value);
value CoqdPArithdBinPosDefdPosddouble_mask_known_127(struct thread_info *, value);
value CoqdNArithdBinNatDefdNdsucc_double_known_126(struct thread_info *, value);
value f_case_known_125(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdltb_uncurried_known_124(struct thread_info *, value, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_123(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_122(struct thread_info *, value);
value land_uncurried_known_121(struct thread_info *, value, value);
value CoqdNArithdBinNatDefdNdland_uncurried_known_120(struct thread_info *, value, value);
value CoqdPArithdBinPosDefdPosdNdouble_known_119(struct thread_info *, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_118(struct thread_info *, value, value);
value lor_uncurried_known_117(struct thread_info *, value, value);
value f_case_known_116(struct thread_info *, value, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_115(struct thread_info *, value, value, value);
value y_wrapper_114(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_113(struct thread_info *, value, value);
value CertiDDdOSdRegister_iodNdout8_p_uncurried_known_112(struct thread_info *, value, value, value);
value f_case_known_111(struct thread_info *, value, value, value);
value CoqdNArithdBinNatDefdNdleb_uncurried_known_110(struct thread_info *, value, value, value);
value compare_cont_uncurried_uncurried_known_109(struct thread_info *, value, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_108(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdeqb_uncurried_known_107(struct thread_info *, value, value);
value CoqdNArithdBinNatDefdNdeqb_uncurried_known_106(struct thread_info *, value, value);
value eqb_uncurried_known_105(struct thread_info *, value, value);
value body(struct thread_info *);
unsigned long long const body_info_946[2] = { 127LL, 0LL, };

unsigned long long const eqb_uncurried_known_info_945[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const CoqdNArithdBinNatDefdNdeqb_uncurried_known_info_944[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdeqb_uncurried_known_info_943[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_info_942[5] = {
  2LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const compare_cont_uncurried_uncurried_known_info_941[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CoqdNArithdBinNatDefdNdleb_uncurried_known_info_940[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const f_case_known_info_939[5] = { 0LL, 3LL, 0LL, 1LL,
  2LL, };

unsigned long long const CertiDDdOSdRegister_iodNdout8_p_uncurried_known_info_938[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_info_937[4] = {
  9LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_936[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_info_935[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const f_case_known_info_934[5] = { 0LL, 3LL, 0LL, 1LL,
  2LL, };

unsigned long long const lor_uncurried_known_info_933[4] = { 2LL, 2LL, 0LL,
  1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_info_932[4] = {
  2LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdPArithdBinPosDefdPosdNdouble_known_info_931[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const CoqdNArithdBinNatDefdNdland_uncurried_known_info_930[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const land_uncurried_known_info_929[4] = { 2LL, 2LL, 0LL,
  1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_info_928[3] = {
  16LL, 1LL, 0LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_info_927[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdltb_uncurried_known_info_926[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const f_case_known_info_925[5] = { 0LL, 3LL, 0LL, 1LL,
  2LL, };

unsigned long long const CoqdNArithdBinNatDefdNdsucc_double_known_info_924[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const CoqdPArithdBinPosDefdPosddouble_mask_known_info_923[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const CoqdPArithdBinPosDefdPosdsucc_double_mask_known_info_922[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const pred_double_known_info_921[3] = { 4LL, 1LL, 0LL, };

unsigned long long const CoqdNArithdBinNatDefdNdsub_uncurried_known_info_920[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const sub_mask_uncurried_known_info_919[4] = { 4LL, 2LL,
  0LL, 1LL, };

unsigned long long const sub_mask_carry_uncurried_known_info_918[4] = { 6LL,
  2LL, 0LL, 1LL, };

unsigned long long const CoqdNArithdBinNatDefdNddouble_known_info_917[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const CoqdNArithdBinNatDefdNddiv2_known_info_916[3] = {
  2LL, 1LL, 0LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_info_915[4] = {
  9LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_914[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_913[4] = { 7LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_info_912[6] = {
  10LL, 4LL, 0LL, 1LL, 2LL, 3LL, };

unsigned long long const f_case_known_info_911[4] = { 4LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_910[3] = { 0LL, 1LL, 0LL, };

unsigned long long const f_case_known_info_909[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_908[3] = { 2LL, 1LL, 0LL, };

unsigned long long const f_case_known_info_907[6] = { 3LL, 4LL, 0LL, 1LL,
  2LL, 3LL, };

unsigned long long const pos_div_eucl_uncurried_known_info_906[5] = { 5LL,
  3LL, 0LL, 1LL, 2LL, };

unsigned long long const f_case_known_info_905[3] = { 0LL, 1LL, 0LL, };

unsigned long long const f_case_known_info_904[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const iter_fix_uncurried_known_info_903[4] = { 0LL, 2LL,
  0LL, 1LL, };

value iter_fix_uncurried_known_147(struct thread_info *$tinfo, value $n_828, value $x_829)
{
  struct stack_frame frame;
  value root[2];
  register value $np_830;
  register value $y_831;
  register value $y_832;
  register value $np_834;
  register value $y_835;
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
  if (($n_828 & 1) == 0) {
    switch (*((value *) $n_828 + -1LL) & 255LL) {
      case 0:
        $np_830 = *((value *) $n_828 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $np_830;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_831 =
          ((value (*)(struct thread_info *, value, value)) iter_fix_uncurried_known_147)
          ($tinfo, $np_830, $x_829);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $np_830 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_832 =
          ((value (*)(struct thread_info *, value, value)) iter_fix_uncurried_known_147)
          ($tinfo, $np_830, $y_831);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNddiv2_known_134)
          ($tinfo, $y_832);
        return $result;
        break;
      default:
        $np_834 = *((value *) $n_828 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $np_834;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_835 =
          ((value (*)(struct thread_info *, value, value)) iter_fix_uncurried_known_147)
          ($tinfo, $np_834, $x_829);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $np_834 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) iter_fix_uncurried_known_147)
          ($tinfo, $np_834, $y_835);
        return $result;
        break;

    }
  } else {
    switch ($n_828 >> 1LL) {
      default:
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNddiv2_known_134)
          ($tinfo, $x_829);
        return $result;
        break;

    }
  }
}

value f_case_known_146(struct thread_info *$tinfo, value $s_823, value $count_824)
{
  struct stack_frame frame;
  value root[2];
  register value $p_825;
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
  if (($s_823 & 1) == 0) {
    switch (*((value *) $s_823 + -1LL) & 255LL) {
      default:
        $p_825 = *((value *) $s_823 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) iter_fix_uncurried_known_147)
          ($tinfo, $p_825, $count_824);
        return $result;
        break;

    }
  } else {
    switch ($s_823 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $count_824;
        break;

    }
  }
}

value f_case_known_145(struct thread_info *$tinfo, value $s_820)
{
  struct stack_frame frame;
  value root[1];
  register value $x_821;
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
  if (($s_820 & 1) == 0) {
    switch (*((value *) $s_820 + -1LL) & 255LL) {
      default:
        $x_821 = *((value *) $s_820 + 0LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $x_821;
        break;

    }
  } else {
    switch ($s_820 >> 1LL) {

    }
  }
}

value pos_div_eucl_uncurried_known_144(struct thread_info *$tinfo, value $b_767, value $a_768, value $y_769)
{
  struct stack_frame frame;
  value root[3];
  register value $ap_770;
  register value $y_771;
  register value $q_772;
  register value $r_773;
  register value $rp_775;
  register value $y_777;
  register value $y_779;
  register value $y_781;
  register value $y_782;
  register value $y_784;
  register value $y_785;
  register value $ap_786;
  register value $y_787;
  register value $q_788;
  register value $r_789;
  register value $rp_791;
  register value $y_793;
  register value $y_795;
  register value $y_797;
  register value $y_798;
  register value $y_800;
  register value $y_801;
  register value $y_802;
  register value $y_803;
  register value $y_804;
  register value $y_805;
  register value $p_806;
  register value $y_807;
  register value $y_808;
  register value $y_809;
  register value $y_810;
  register value $y_811;
  register value $y_812;
  register value $y_813;
  register value $y_814;
  register value $y_815;
  register value $y_816;
  register value $y_817;
  register value $y_818;
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
  if (!(5LL <= $limit - $alloc)) {
    *(root + 2LL) = $y_769;
    *(root + 1LL) = $a_768;
    *(root + 0LL) = $b_767;
    frame.next = root + 3LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 5LL;
    garbage_collect($tinfo);
    $y_769 = *(root + 2LL);
    $a_768 = *(root + 1LL);
    $b_767 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($a_768 & 1) == 0) {
    switch (*((value *) $a_768 + -1LL) & 255LL) {
      case 0:
        $ap_770 = *((value *) $a_768 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $y_769;
        *(root + 0LL) = $b_767;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_771 =
          ((value (*)(struct thread_info *, value, value, value)) pos_div_eucl_uncurried_known_144)
          ($tinfo, $b_767, $ap_770, $y_769);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_769 = *(root + 1LL);
        $b_767 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_771 & 1) == 0) {
          switch (*((value *) $y_771 + -1LL) & 255LL) {
            default:
              $q_772 = *((value *) $y_771 + 0LL);
              $r_773 = *((value *) $y_771 + 1LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $q_772;
              *(root + 1LL) = $y_769;
              *(root + 0LL) = $b_767;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $rp_775 =
                ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNdsucc_double_known_126)
                ($tinfo, $r_773);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $q_772 = *(root + 2LL);
              $y_769 = *(root + 1LL);
              $b_767 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $rp_775;
              *(root + 1LL) = $q_772;
              *(root + 0LL) = $b_767;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $y_777 =
                ((value (*)(struct thread_info *, value, value, value))
                  CoqdNArithdBinNatDefdNdleb_uncurried_known_110)
                ($tinfo, $rp_775, $b_767, $y_769);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $rp_775 = *(root + 2LL);
              $q_772 = *(root + 1LL);
              $b_767 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_777 & 1) == 0) {
                switch (*((value *) $y_777 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_777 >> 1LL) {
                  case 0:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $rp_775;
                    *(root + 0LL) = $b_767;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_779 =
                      ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNdsucc_double_known_126)
                      ($tinfo, $q_772);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $rp_775 = *(root + 1LL);
                    $b_767 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $y_779;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_781 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdNArithdBinNatDefdNdsub_uncurried_known_130)
                      ($tinfo, $b_767, $rp_775);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_781;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_781 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $y_779 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_782 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_782 + -1LL) = 2048LL;
                    *((value *) $y_782 + 0LL) = $y_779;
                    *((value *) $y_782 + 1LL) = $y_781;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_782;
                    break;
                  default:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $rp_775;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_784 =
                      ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNddouble_known_133)
                      ($tinfo, $q_772);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_784;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_784 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $rp_775 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_785 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_785 + -1LL) = 2048LL;
                    *((value *) $y_785 + 0LL) = $y_784;
                    *((value *) $y_785 + 1LL) = $rp_775;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_785;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_771 >> 1LL) {

          }
        }
        break;
      default:
        $ap_786 = *((value *) $a_768 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $y_769;
        *(root + 0LL) = $b_767;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_787 =
          ((value (*)(struct thread_info *, value, value, value)) pos_div_eucl_uncurried_known_144)
          ($tinfo, $b_767, $ap_786, $y_769);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_769 = *(root + 1LL);
        $b_767 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_787 & 1) == 0) {
          switch (*((value *) $y_787 + -1LL) & 255LL) {
            default:
              $q_788 = *((value *) $y_787 + 0LL);
              $r_789 = *((value *) $y_787 + 1LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $q_788;
              *(root + 1LL) = $y_769;
              *(root + 0LL) = $b_767;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $rp_791 =
                ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNddouble_known_133)
                ($tinfo, $r_789);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $q_788 = *(root + 2LL);
              $y_769 = *(root + 1LL);
              $b_767 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 2LL) = $rp_791;
              *(root + 1LL) = $q_788;
              *(root + 0LL) = $b_767;
              frame.next = root + 3LL;
              (*$tinfo).fp = &frame;
              $y_793 =
                ((value (*)(struct thread_info *, value, value, value))
                  CoqdNArithdBinNatDefdNdleb_uncurried_known_110)
                ($tinfo, $rp_791, $b_767, $y_769);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $rp_791 = *(root + 2LL);
              $q_788 = *(root + 1LL);
              $b_767 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_793 & 1) == 0) {
                switch (*((value *) $y_793 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_793 >> 1LL) {
                  case 0:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $rp_791;
                    *(root + 0LL) = $b_767;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_795 =
                      ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNdsucc_double_known_126)
                      ($tinfo, $q_788);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $rp_791 = *(root + 1LL);
                    $b_767 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $y_795;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_797 =
                      ((value (*)(struct thread_info *, value, value))
                        CoqdNArithdBinNatDefdNdsub_uncurried_known_130)
                      ($tinfo, $b_767, $rp_791);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_797;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_797 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $y_795 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_798 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_798 + -1LL) = 2048LL;
                    *((value *) $y_798 + 0LL) = $y_795;
                    *((value *) $y_798 + 1LL) = $y_797;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_798;
                    break;
                  default:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $rp_791;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_800 =
                      ((value (*)(struct thread_info *, value)) CoqdNArithdBinNatDefdNddouble_known_133)
                      ($tinfo, $q_788);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(3LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_800;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 3LL;
                      garbage_collect($tinfo);
                      $y_800 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $rp_791 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_801 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_801 + -1LL) = 2048LL;
                    *((value *) $y_801 + 0LL) = $y_800;
                    *((value *) $y_801 + 1LL) = $rp_791;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_801;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_787 >> 1LL) {

          }
        }
        break;

    }
  } else {
    switch ($a_768 >> 1LL) {
      default:
        if (($b_767 & 1) == 0) {
          switch (*((value *) $b_767 + -1LL) & 255LL) {
            default:
              $p_806 = *((value *) $b_767 + 0LL);
              if (($p_806 & 1) == 0) {
                switch (*((value *) $p_806 + -1LL) & 255LL) {
                  case 0:
                    $y_807 = 1LL;
                    $y_808 = 1LL;
                    $y_809 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_809 + -1LL) = 1024LL;
                    *((value *) $y_809 + 0LL) = $y_808;
                    $y_810 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_810 + -1LL) = 2048LL;
                    *((value *) $y_810 + 0LL) = $y_807;
                    *((value *) $y_810 + 1LL) = $y_809;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_810;
                    break;
                  default:
                    $y_811 = 1LL;
                    $y_812 = 1LL;
                    $y_813 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_813 + -1LL) = 1024LL;
                    *((value *) $y_813 + 0LL) = $y_812;
                    $y_814 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_814 + -1LL) = 2048LL;
                    *((value *) $y_814 + 0LL) = $y_811;
                    *((value *) $y_814 + 1LL) = $y_813;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_814;
                    break;

                }
              } else {
                switch ($p_806 >> 1LL) {
                  default:
                    $y_815 = 1LL;
                    $y_816 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_816 + -1LL) = 1024LL;
                    *((value *) $y_816 + 0LL) = $y_815;
                    $y_817 = 1LL;
                    $y_818 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 3LL;
                    *((value *) $y_818 + -1LL) = 2048LL;
                    *((value *) $y_818 + 0LL) = $y_816;
                    *((value *) $y_818 + 1LL) = $y_817;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_818;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($b_767 >> 1LL) {
            default:
              $y_802 = 1LL;
              $y_803 = 1LL;
              $y_804 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_804 + -1LL) = 1024LL;
              *((value *) $y_804 + 0LL) = $y_803;
              $y_805 = (value) ($alloc + 1LL);
              $alloc = $alloc + 3LL;
              *((value *) $y_805 + -1LL) = 2048LL;
              *((value *) $y_805 + 0LL) = $y_802;
              *((value *) $y_805 + 1LL) = $y_804;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_805;
              break;

          }
        }
        break;

    }
  }
}

value f_case_known_143(struct thread_info *$tinfo, value $s_755, value $y_756, value $CertiDDdOSdPit_infodLinuxdNdTick_rate_757, value $y_758)
{
  struct stack_frame frame;
  value root[4];
  register value $y_759;
  register value $y_760;
  register value $y_761;
  register value $na_762;
  register value $y_763;
  register value $y_764;
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
    *(root + 3LL) = $y_758;
    *(root + 2LL) = $CertiDDdOSdPit_infodLinuxdNdTick_rate_757;
    *(root + 1LL) = $y_756;
    *(root + 0LL) = $s_755;
    frame.next = root + 4LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 3LL;
    garbage_collect($tinfo);
    $y_758 = *(root + 3LL);
    $CertiDDdOSdPit_infodLinuxdNdTick_rate_757 = *(root + 2LL);
    $y_756 = *(root + 1LL);
    $s_755 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_755 & 1) == 0) {
    switch (*((value *) $s_755 + -1LL) & 255LL) {
      default:
        $na_762 = *((value *) $s_755 + 0LL);
        if (($y_758 & 1) == 0) {
          switch (*((value *) $y_758 + -1LL) & 255LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  pos_div_eucl_uncurried_known_144)
                ($tinfo, $y_758, $na_762, $y_756);
              return $result;
              break;

          }
        } else {
          switch ($y_758 >> 1LL) {
            default:
              $y_763 = 1LL;
              $y_764 = (value) ($alloc + 1LL);
              $alloc = $alloc + 3LL;
              *((value *) $y_764 + -1LL) = 2048LL;
              *((value *) $y_764 + 0LL) = $y_763;
              *((value *) $y_764 + 1LL) =
                $CertiDDdOSdPit_infodLinuxdNdTick_rate_757;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_764;
              break;

          }
        }
        break;

    }
  } else {
    switch ($s_755 >> 1LL) {
      default:
        $y_759 = 1LL;
        $y_760 = 1LL;
        $y_761 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_761 + -1LL) = 2048LL;
        *((value *) $y_761 + 0LL) = $y_759;
        *((value *) $y_761 + 1LL) = $y_760;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_761;
        break;

    }
  }
}

value f_case_known_142(struct thread_info *$tinfo, value $s_749)
{
  struct stack_frame frame;
  value root[1];
  register value $y_750;
  register value $p_751;
  register value $y_752;
  register value $y_753;
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
    *(root + 0LL) = $s_749;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $s_749 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_749 & 1) == 0) {
    switch (*((value *) $s_749 + -1LL) & 255LL) {
      case 0:
        $p_751 = *((value *) $s_749 + 0LL);
        $y_752 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_752 + -1LL) = 1024LL;
        *((value *) $y_752 + 0LL) = $p_751;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_752;
        break;
      default:
        $y_753 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_753;
        break;

    }
  } else {
    switch ($s_749 >> 1LL) {
      default:
        $y_750 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_750;
        break;

    }
  }
}

value f_case_known_141(struct thread_info *$tinfo, value $s_745, value $y_746)
{
  struct stack_frame frame;
  value root[2];
  register value $y_747;
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
  if (($s_745 & 1) == 0) {
    switch (*((value *) $s_745 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_745 >> 1LL) {
      case 0:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_746;
        break;
      default:
        $y_747 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_747;
        break;

    }
  }
}

value f_case_known_140(struct thread_info *$tinfo, value $s_740)
{
  struct stack_frame frame;
  value root[1];
  register value $y_741;
  register value $y_742;
  register value $y_743;
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
  if (($s_740 & 1) == 0) {
    switch (*((value *) $s_740 + -1LL) & 255LL) {
      case 0:
        $y_742 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_742;
        break;
      default:
        $y_743 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_743;
        break;

    }
  } else {
    switch ($s_740 >> 1LL) {
      default:
        $y_741 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_741;
        break;

    }
  }
}

value f_case_known_139(struct thread_info *$tinfo, value $s_727, value $code_728)
{
  struct stack_frame frame;
  value root[2];
  register value $y_729;
  register value $y_730;
  register value $y_731;
  register value $y_732;
  register value $y_733;
  register value $y_735;
  register value $y_736;
  register value $y_737;
  register value $y_738;
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
    *(root + 1LL) = $code_728;
    *(root + 0LL) = $s_727;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $code_728 = *(root + 1LL);
    $s_727 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_727 & 1) == 0) {
    switch (*((value *) $s_727 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_727 >> 1LL) {
      case 0:
        $y_729 = 1LL;
        $y_730 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_730 + -1LL) = 1024LL;
        *((value *) $y_730 + 0LL) = $y_729;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_730;
        break;
      default:
        $y_731 = 1LL;
        $y_732 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_732 + -1LL) = 1025LL;
        *((value *) $y_732 + 0LL) = $y_731;
        $y_733 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_733 + -1LL) = 1024LL;
        *((value *) $y_733 + 0LL) = $y_732;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_735 =
          ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdeqb_uncurried_known_106)
          ($tinfo, $y_733, $code_728);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_735;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_735 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        if (($y_735 & 1) == 0) {
          switch (*((value *) $y_735 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_735 >> 1LL) {
            case 0:
              $y_736 = 3LL;
              $y_737 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_737 + -1LL) = 1024LL;
              *((value *) $y_737 + 0LL) = $y_736;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_737;
              break;
            default:
              $y_738 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_738;
              break;

          }
        }
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_138(struct thread_info *$tinfo, value $env_596, value $val_597, value $code_598, value $type_599)
{
  struct stack_frame frame;
  value root[4];
  register value $y_600;
  register value $y_601;
  register value $y_602;
  register value $y_603;
  register value $y_604;
  register value $y_605;
  register value $y_607;
  register value $y_609;
  register value $y_610;
  register value $y_612;
  register value $snd_type_613;
  register value $s_614;
  register value $y_616;
  register value $y_617;
  register value $y_618;
  register value $y_619;
  register value $y_620;
  register value $y_621;
  register value $y_622;
  register value $y_623;
  register value $y_624;
  register value $y_625;
  register value $y_626;
  register value $y_627;
  register value $y_628;
  register value $y_629;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_631;
  register value $y_632;
  register value $y_633;
  register value $y_634;
  register value $y_635;
  register value $y_636;
  register value $y_637;
  register value $y_638;
  register value $y_639;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_641;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_642;
  register value $y_643;
  register value $y_644;
  register value $y_645;
  register value $y_646;
  register value $y_647;
  register value $y_648;
  register value $y_proj_650;
  register value $y_651;
  register value $y_652;
  register value $y_653;
  register value $y_654;
  register value $y_655;
  register value $y_656;
  register value $y_657;
  register value $y_658;
  register value $y_659;
  register value $y_660;
  register value $y_661;
  register value $y_662;
  register value $y_663;
  register value $y_664;
  register value $y_665;
  register value $y_666;
  register value $y_667;
  register value $y_proj_669;
  register value $y_670;
  register value $y_672;
  register value $y_674;
  register value $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_676;
  register value $y_proj_677;
  register value $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_678;
  register value $y_679;
  register value $count_681;
  register value $y_682;
  register value $y_683;
  register value $y_684;
  register value $y_685;
  register value $y_686;
  register value $y_687;
  register value $y_688;
  register value $y_689;
  register value $y_690;
  register value $y_692;
  register value $y_693;
  register value $y_694;
  register value $y_695;
  register value $y_696;
  register value $y_697;
  register value $y_699;
  register value $y_700;
  register value $y_701;
  register value $y_702;
  register value $y_703;
  register value $y_704;
  register value $y_705;
  register value $y_706;
  register value $y_707;
  register value $y_708;
  register value $y_710;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_712;
  register value $y_713;
  register value $y_714;
  register value $y_715;
  register value $y_716;
  register value $y_717;
  register value $y_718;
  register value $y_719;
  register value $y_720;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_722;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_723;
  register value $CertiDDdOSdErrvaldeinval_proj_724;
  register value $CertiDDdOSdErrvaldeinval_proj_725;
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
  if (!(10LL <= $limit - $alloc)) {
    *(root + 3LL) = $type_599;
    *(root + 2LL) = $code_598;
    *(root + 1LL) = $val_597;
    *(root + 0LL) = $env_596;
    frame.next = root + 4LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 10LL;
    garbage_collect($tinfo);
    $type_599 = *(root + 3LL);
    $code_598 = *(root + 2LL);
    $val_597 = *(root + 1LL);
    $env_596 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_600 = 1LL;
  $y_601 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_601 + -1LL) = 1025LL;
  *((value *) $y_601 + 0LL) = $y_600;
  $y_602 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_602 + -1LL) = 1025LL;
  *((value *) $y_602 + 0LL) = $y_601;
  $y_603 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_603 + -1LL) = 1024LL;
  *((value *) $y_603 + 0LL) = $y_602;
  $y_604 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_604 + -1LL) = 1025LL;
  *((value *) $y_604 + 0LL) = $y_603;
  $y_605 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_605 + -1LL) = 1024LL;
  *((value *) $y_605 + 0LL) = $y_604;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $code_598;
  *(root + 1LL) = $val_597;
  *(root + 0LL) = $env_596;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_607 =
    ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdeqb_uncurried_known_106)
    ($tinfo, $y_605, $type_599);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_607;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_607 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $code_598 = *(root + 2LL);
  $val_597 = *(root + 1LL);
  $env_596 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_607 & 1) == 0) {
    switch (*((value *) $y_607 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_607 >> 1LL) {
      case 0:
        $y_609 = 1LL;
        $y_610 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_610 + -1LL) = 1024LL;
        *((value *) $y_610 + 0LL) = $y_609;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 2LL) = $code_598;
        *(root + 1LL) = $val_597;
        *(root + 0LL) = $env_596;
        frame.next = root + 3LL;
        (*$tinfo).fp = &frame;
        $y_612 =
          ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdeqb_uncurried_known_106)
          ($tinfo, $y_610, $code_598);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $code_598 = *(root + 2LL);
        $val_597 = *(root + 1LL);
        $env_596 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $val_597;
        *(root + 0LL) = $env_596;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $snd_type_613 =
          ((value (*)(struct thread_info *, value, value)) f_case_known_139)
          ($tinfo, $y_612, $code_598);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(10LL <= $limit - $alloc)) {
          *(root + 2LL) = $snd_type_613;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 10LL;
          garbage_collect($tinfo);
          $snd_type_613 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $val_597 = *(root + 1LL);
        $env_596 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($snd_type_613 & 1) == 0) {
          switch (*((value *) $snd_type_613 + -1LL) & 255LL) {
            default:
              $s_614 = *((value *) $snd_type_613 + 0LL);
              if (($s_614 & 1) == 0) {
                switch (*((value *) $s_614 + -1LL) & 255LL) {

                }
              } else {
                switch ($s_614 >> 1LL) {
                  case 0:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_596;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_616 =
                      ((value (*)(struct thread_info *, value)) f_case_known_140)
                      ($tinfo, $val_597);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(22LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_616;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 22LL;
                      garbage_collect($tinfo);
                      $y_616 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $env_596 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    if (($y_616 & 1) == 0) {
                      switch (*((value *) $y_616 + -1LL) & 255LL) {

                      }
                    } else {
                      switch ($y_616 >> 1LL) {
                        case 0:
                          $y_617 = 1LL;
                          $y_618 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_618 + -1LL) = 1025LL;
                          *((value *) $y_618 + 0LL) = $y_617;
                          $y_619 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_619 + -1LL) = 1024LL;
                          *((value *) $y_619 + 0LL) = $y_618;
                          $y_620 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_620 + -1LL) = 1025LL;
                          *((value *) $y_620 + 0LL) = $y_619;
                          $y_621 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_621 + -1LL) = 1024LL;
                          *((value *) $y_621 + 0LL) = $y_620;
                          $y_622 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_622 + -1LL) = 1025LL;
                          *((value *) $y_622 + 0LL) = $y_621;
                          $y_623 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_623 + -1LL) = 1025LL;
                          *((value *) $y_623 + 0LL) = $y_622;
                          $y_624 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_624 + -1LL) = 1024LL;
                          *((value *) $y_624 + 0LL) = $y_623;
                          $y_625 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_625 + -1LL) = 1024LL;
                          *((value *) $y_625 + 0LL) = $y_624;
                          $y_626 = 1LL;
                          $y_627 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_627 + -1LL) = 1025LL;
                          *((value *) $y_627 + 0LL) = $y_626;
                          $y_628 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_628 + -1LL) = 1025LL;
                          *((value *) $y_628 + 0LL) = $y_627;
                          $y_629 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_629 + -1LL) = 1024LL;
                          *((value *) $y_629 + 0LL) = $y_628;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_631 =
                            *((value *) $env_596 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_108)
                            ($tinfo, $y_629, $y_625,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_631);
                          return $result;
                          break;
                        default:
                          $y_632 = 1LL;
                          $y_633 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_633 + -1LL) = 1024LL;
                          *((value *) $y_633 + 0LL) = $y_632;
                          $y_634 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_634 + -1LL) = 1025LL;
                          *((value *) $y_634 + 0LL) = $y_633;
                          $y_635 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_635 + -1LL) = 1025LL;
                          *((value *) $y_635 + 0LL) = $y_634;
                          $y_636 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_636 + -1LL) = 1025LL;
                          *((value *) $y_636 + 0LL) = $y_635;
                          $y_637 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_637 + -1LL) = 1025LL;
                          *((value *) $y_637 + 0LL) = $y_636;
                          $y_638 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_638 + -1LL) = 1024LL;
                          *((value *) $y_638 + 0LL) = $y_637;
                          $y_639 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_639 + -1LL) = 1024LL;
                          *((value *) $y_639 + 0LL) = $y_638;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_641 =
                            1LL;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_642 =
                            (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_642
                             + -1LL) =
                            2048LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_642
                             + 0LL) =
                            CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_123;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_642
                             + 1LL) =
                            $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_641;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_118)
                            ($tinfo, $y_639,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_642);
                          return $result;
                          break;

                      }
                    }
                    break;
                  default:
                    $y_643 = 1LL;
                    $y_644 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_644 + -1LL) = 1025LL;
                    *((value *) $y_644 + 0LL) = $y_643;
                    $y_645 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_645 + -1LL) = 1024LL;
                    *((value *) $y_645 + 0LL) = $y_644;
                    $y_646 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_646 + -1LL) = 1025LL;
                    *((value *) $y_646 + 0LL) = $y_645;
                    $y_647 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_647 + -1LL) = 1025LL;
                    *((value *) $y_647 + 0LL) = $y_646;
                    $y_648 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_648 + -1LL) = 1024LL;
                    *((value *) $y_648 + 0LL) = $y_647;
                    $y_proj_650 = *((value *) $env_596 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $val_597;
                    *(root + 0LL) = $env_596;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_651 =
                      ((value (*)(struct thread_info *, value, value, value))
                        CoqdZArithdBinIntDefdZdltb_uncurried_known_124)
                      ($tinfo, $val_597, $y_648, $y_proj_650);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(30LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_651;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 30LL;
                      garbage_collect($tinfo);
                      $y_651 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $val_597 = *(root + 1LL);
                    $env_596 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_652 = 1LL;
                    $y_653 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_653 + -1LL) = 1024LL;
                    *((value *) $y_653 + 0LL) = $y_652;
                    $y_654 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_654 + -1LL) = 1024LL;
                    *((value *) $y_654 + 0LL) = $y_653;
                    $y_655 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_655 + -1LL) = 1024LL;
                    *((value *) $y_655 + 0LL) = $y_654;
                    $y_656 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_656 + -1LL) = 1024LL;
                    *((value *) $y_656 + 0LL) = $y_655;
                    $y_657 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_657 + -1LL) = 1024LL;
                    *((value *) $y_657 + 0LL) = $y_656;
                    $y_658 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_658 + -1LL) = 1024LL;
                    *((value *) $y_658 + 0LL) = $y_657;
                    $y_659 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_659 + -1LL) = 1024LL;
                    *((value *) $y_659 + 0LL) = $y_658;
                    $y_660 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_660 + -1LL) = 1024LL;
                    *((value *) $y_660 + 0LL) = $y_659;
                    $y_661 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_661 + -1LL) = 1024LL;
                    *((value *) $y_661 + 0LL) = $y_660;
                    $y_662 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_662 + -1LL) = 1024LL;
                    *((value *) $y_662 + 0LL) = $y_661;
                    $y_663 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_663 + -1LL) = 1024LL;
                    *((value *) $y_663 + 0LL) = $y_662;
                    $y_664 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_664 + -1LL) = 1024LL;
                    *((value *) $y_664 + 0LL) = $y_663;
                    $y_665 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_665 + -1LL) = 1024LL;
                    *((value *) $y_665 + 0LL) = $y_664;
                    $y_666 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_666 + -1LL) = 1024LL;
                    *((value *) $y_666 + 0LL) = $y_665;
                    $y_667 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_667 + -1LL) = 1024LL;
                    *((value *) $y_667 + 0LL) = $y_666;
                    $y_proj_669 = *((value *) $env_596 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 2LL) = $y_651;
                    *(root + 1LL) = $val_597;
                    *(root + 0LL) = $env_596;
                    frame.next = root + 3LL;
                    (*$tinfo).fp = &frame;
                    $y_670 =
                      ((value (*)(struct thread_info *, value, value, value))
                        CoqdZArithdBinIntDefdZdltb_uncurried_known_124)
                      ($tinfo, $y_667, $val_597, $y_proj_669);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $y_651 = *(root + 2LL);
                    $val_597 = *(root + 1LL);
                    $env_596 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $val_597;
                    *(root + 0LL) = $env_596;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_672 =
                      ((value (*)(struct thread_info *, value, value))
                        f_case_known_141)
                      ($tinfo, $y_651, $y_670);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(17LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_672;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 17LL;
                      garbage_collect($tinfo);
                      $y_672 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $val_597 = *(root + 1LL);
                    $env_596 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    if (($y_672 & 1) == 0) {
                      switch (*((value *) $y_672 + -1LL) & 255LL) {

                      }
                    } else {
                      switch ($y_672 >> 1LL) {
                        case 0:
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_596;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_674 =
                            ((value (*)(struct thread_info *, value))
                              f_case_known_142)
                            ($tinfo, $val_597);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $env_596 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_676 =
                            *((value *) $env_596 + 2LL);
                          $y_proj_677 = *((value *) $env_596 + 0LL);
                          $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_678 =
                            *((value *) $env_596 + 2LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_596;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_679 =
                            ((value (*)(struct thread_info *, value, value, value, value))
                              f_case_known_143)
                            ($tinfo,
                             $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_676,
                             $y_proj_677,
                             $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_678,
                             $y_674);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $env_596 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_596;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $count_681 =
                            ((value (*)(struct thread_info *, value))
                              f_case_known_145)
                            ($tinfo, $y_679);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(16LL <= $limit - $alloc)) {
                            *(root + 1LL) = $count_681;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 16LL;
                            garbage_collect($tinfo);
                            $count_681 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $env_596 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_682 = 1LL;
                          $y_683 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_683 + -1LL) = 1024LL;
                          *((value *) $y_683 + 0LL) = $y_682;
                          $y_684 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_684 + -1LL) = 1024LL;
                          *((value *) $y_684 + 0LL) = $y_683;
                          $y_685 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_685 + -1LL) = 1024LL;
                          *((value *) $y_685 + 0LL) = $y_684;
                          $y_686 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_686 + -1LL) = 1024LL;
                          *((value *) $y_686 + 0LL) = $y_685;
                          $y_687 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_687 + -1LL) = 1024LL;
                          *((value *) $y_687 + 0LL) = $y_686;
                          $y_688 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_688 + -1LL) = 1024LL;
                          *((value *) $y_688 + 0LL) = $y_687;
                          $y_689 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_689 + -1LL) = 1024LL;
                          *((value *) $y_689 + 0LL) = $y_688;
                          $y_690 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_690 + -1LL) = 1024LL;
                          *((value *) $y_690 + 0LL) = $y_689;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $count_681;
                          *(root + 0LL) = $env_596;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_692 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdNArithdBinNatDefdNdland_uncurried_known_120)
                            ($tinfo, $y_690, $count_681);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(8LL <= $limit - $alloc)) {
                            *(root + 2LL) = $y_692;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 8LL;
                            garbage_collect($tinfo);
                            $y_692 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $count_681 = *(root + 1LL);
                          $env_596 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_693 = 1LL;
                          $y_694 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_694 + -1LL) = 1025LL;
                          *((value *) $y_694 + 0LL) = $y_693;
                          $y_695 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_695 + -1LL) = 1025LL;
                          *((value *) $y_695 + 0LL) = $y_694;
                          $y_696 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_696 + -1LL) = 1025LL;
                          *((value *) $y_696 + 0LL) = $y_695;
                          $y_697 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_697 + -1LL) = 1024LL;
                          *((value *) $y_697 + 0LL) = $y_696;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $y_692;
                          *(root + 0LL) = $env_596;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_699 =
                            ((value (*)(struct thread_info *, value, value))
                              f_case_known_146)
                            ($tinfo, $y_697, $count_681);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(16LL <= $limit - $alloc)) {
                            *(root + 2LL) = $y_699;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 16LL;
                            garbage_collect($tinfo);
                            $y_699 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $y_692 = *(root + 1LL);
                          $env_596 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_700 = 1LL;
                          $y_701 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_701 + -1LL) = 1024LL;
                          *((value *) $y_701 + 0LL) = $y_700;
                          $y_702 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_702 + -1LL) = 1024LL;
                          *((value *) $y_702 + 0LL) = $y_701;
                          $y_703 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_703 + -1LL) = 1024LL;
                          *((value *) $y_703 + 0LL) = $y_702;
                          $y_704 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_704 + -1LL) = 1024LL;
                          *((value *) $y_704 + 0LL) = $y_703;
                          $y_705 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_705 + -1LL) = 1024LL;
                          *((value *) $y_705 + 0LL) = $y_704;
                          $y_706 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_706 + -1LL) = 1024LL;
                          *((value *) $y_706 + 0LL) = $y_705;
                          $y_707 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_707 + -1LL) = 1024LL;
                          *((value *) $y_707 + 0LL) = $y_706;
                          $y_708 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_708 + -1LL) = 1024LL;
                          *((value *) $y_708 + 0LL) = $y_707;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $y_692;
                          *(root + 0LL) = $env_596;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $y_710 =
                            ((value (*)(struct thread_info *, value, value))
                              CoqdNArithdBinNatDefdNdland_uncurried_known_120)
                            ($tinfo, $y_708, $y_699);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $y_692 = *(root + 1LL);
                          $env_596 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_712 =
                            *((value *) $env_596 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_108)
                            ($tinfo, $y_710, $y_692,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_712);
                          return $result;
                          break;
                        default:
                          $y_713 = 1LL;
                          $y_714 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_714 + -1LL) = 1024LL;
                          *((value *) $y_714 + 0LL) = $y_713;
                          $y_715 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_715 + -1LL) = 1025LL;
                          *((value *) $y_715 + 0LL) = $y_714;
                          $y_716 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_716 + -1LL) = 1025LL;
                          *((value *) $y_716 + 0LL) = $y_715;
                          $y_717 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_717 + -1LL) = 1025LL;
                          *((value *) $y_717 + 0LL) = $y_716;
                          $y_718 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_718 + -1LL) = 1025LL;
                          *((value *) $y_718 + 0LL) = $y_717;
                          $y_719 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_719 + -1LL) = 1024LL;
                          *((value *) $y_719 + 0LL) = $y_718;
                          $y_720 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_720 + -1LL) = 1024LL;
                          *((value *) $y_720 + 0LL) = $y_719;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_722 =
                            1LL;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_723 =
                            (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_723
                             + -1LL) =
                            2048LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_723
                             + 0LL) =
                            CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_123;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_723
                             + 1LL) =
                            $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_722;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_118)
                            ($tinfo, $y_720,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_723);
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
          switch ($snd_type_613 >> 1LL) {
            default:
              $CertiDDdOSdErrvaldeinval_proj_724 =
                *((value *) $env_596 + 3LL);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $CertiDDdOSdErrvaldeinval_proj_724;
              break;

          }
        }
        break;
      default:
        $CertiDDdOSdErrvaldeinval_proj_725 = *((value *) $env_596 + 3LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $CertiDDdOSdErrvaldeinval_proj_725;
        break;

    }
  }
}

value y_wrapper_137(struct thread_info *$tinfo, value $env_590, value $code_591)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_592;
  register value $type_proj_593;
  register value $env_594;
  register value $y_wrapper_clo_595;
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
    *(root + 1LL) = $code_591;
    *(root + 0LL) = $env_590;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 7LL;
    garbage_collect($tinfo);
    $code_591 = *(root + 1LL);
    $env_590 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_592 =
    *((value *) $env_590 + 0LL);
  $type_proj_593 = *((value *) $env_590 + 1LL);
  $env_594 = (value) ($alloc + 1LL);
  $alloc = $alloc + 4LL;
  *((value *) $env_594 + -1LL) = 3072LL;
  *((value *) $env_594 + 0LL) = $code_591;
  *((value *) $env_594 + 1LL) = $type_proj_593;
  *((value *) $env_594 + 2LL) =
    $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_592;
  $y_wrapper_clo_595 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_595 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_595 + 0LL) = y_wrapper_136;
  *((value *) $y_wrapper_clo_595 + 1LL) = $env_594;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_595;
}

value y_wrapper_136(struct thread_info *$tinfo, value $env_583, value $val_584)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_585;
  register value $type_proj_586;
  register value $code_proj_587;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_code_588;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_env_589;
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
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_585 =
    *((value *) $env_583 + 2LL);
  $type_proj_586 = *((value *) $env_583 + 1LL);
  $code_proj_587 = *((value *) $env_583 + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_code_588 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_585
       + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_env_589 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_585
       + 1LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value, value, value)) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_code_588)
    ($tinfo,
     $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_env_589,
     $val_584, $code_proj_587, $type_proj_586);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_135(struct thread_info *$tinfo, value $env_578, value $type_579)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_580;
  register value $env_581;
  register value $y_wrapper_clo_582;
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
    *(root + 1LL) = $type_579;
    *(root + 0LL) = $env_578;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 9LL;
    garbage_collect($tinfo);
    $type_579 = *(root + 1LL);
    $env_578 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_580 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_580
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_580
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_138;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_580
     + 1LL) =
    $env_578;
  $env_581 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $env_581 + -1LL) = 2048LL;
  *((value *) $env_581 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_580;
  *((value *) $env_581 + 1LL) = $type_579;
  $y_wrapper_clo_582 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_582 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_582 + 0LL) = y_wrapper_137;
  *((value *) $y_wrapper_clo_582 + 1LL) = $env_581;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_582;
}

value CoqdNArithdBinNatDefdNddiv2_known_134(struct thread_info *$tinfo, value $n_570)
{
  struct stack_frame frame;
  value root[1];
  register value $y_571;
  register value $p0_572;
  register value $p_573;
  register value $y_574;
  register value $p_575;
  register value $y_576;
  register value $y_577;
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
    *(root + 0LL) = $n_570;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $n_570 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($n_570 & 1) == 0) {
    switch (*((value *) $n_570 + -1LL) & 255LL) {
      default:
        $p0_572 = *((value *) $n_570 + 0LL);
        if (($p0_572 & 1) == 0) {
          switch (*((value *) $p0_572 + -1LL) & 255LL) {
            case 0:
              $p_573 = *((value *) $p0_572 + 0LL);
              $y_574 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_574 + -1LL) = 1024LL;
              *((value *) $y_574 + 0LL) = $p_573;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_574;
              break;
            default:
              $p_575 = *((value *) $p0_572 + 0LL);
              $y_576 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_576 + -1LL) = 1024LL;
              *((value *) $y_576 + 0LL) = $p_575;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_576;
              break;

          }
        } else {
          switch ($p0_572 >> 1LL) {
            default:
              $y_577 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_577;
              break;

          }
        }
        break;

    }
  } else {
    switch ($n_570 >> 1LL) {
      default:
        $y_571 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_571;
        break;

    }
  }
}

value CoqdNArithdBinNatDefdNddouble_known_133(struct thread_info *$tinfo, value $n_564)
{
  struct stack_frame frame;
  value root[1];
  register value $y_565;
  register value $p_566;
  register value $y_567;
  register value $y_568;
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
    *(root + 0LL) = $n_564;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $n_564 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($n_564 & 1) == 0) {
    switch (*((value *) $n_564 + -1LL) & 255LL) {
      default:
        $p_566 = *((value *) $n_564 + 0LL);
        $y_567 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_567 + -1LL) = 1025LL;
        *((value *) $y_567 + 0LL) = $p_566;
        $y_568 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_568 + -1LL) = 1024LL;
        *((value *) $y_568 + 0LL) = $y_567;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_568;
        break;

    }
  } else {
    switch ($n_564 >> 1LL) {
      default:
        $y_565 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_565;
        break;

    }
  }
}

value sub_mask_carry_uncurried_known_132(struct thread_info *$tinfo, value $y_533, value $x_534)
{
  struct stack_frame frame;
  value root[2];
  register value $p_535;
  register value $q_536;
  register value $y_537;
  register value $q_539;
  register value $y_540;
  register value $y_543;
  register value $y_544;
  register value $p_545;
  register value $q_546;
  register value $y_547;
  register value $q_549;
  register value $y_550;
  register value $p_552;
  register value $y_553;
  register value $y_554;
  register value $y_555;
  register value $p_556;
  register value $y_558;
  register value $y_559;
  register value $y_560;
  register value $y_561;
  register value $y_562;
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
  if (!(6LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_534;
    *(root + 0LL) = $y_533;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 6LL;
    garbage_collect($tinfo);
    $x_534 = *(root + 1LL);
    $y_533 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_534 & 1) == 0) {
    switch (*((value *) $x_534 + -1LL) & 255LL) {
      case 0:
        $p_535 = *((value *) $x_534 + 0LL);
        if (($y_533 & 1) == 0) {
          switch (*((value *) $y_533 + -1LL) & 255LL) {
            case 0:
              $q_536 = *((value *) $y_533 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_537 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_carry_uncurried_known_132)
                ($tinfo, $q_536, $p_535);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128)
                ($tinfo, $y_537);
              return $result;
              break;
            default:
              $q_539 = *((value *) $y_533 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_540 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_uncurried_known_131)
                ($tinfo, $q_539, $p_535);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosddouble_mask_known_127)
                ($tinfo, $y_540);
              return $result;
              break;

          }
        } else {
          switch ($y_533 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_543 =
                ((value (*)(struct thread_info *, value)) pred_double_known_129)
                ($tinfo, $p_535);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_543;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_543 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_544 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_544 + -1LL) = 1024LL;
              *((value *) $y_544 + 0LL) = $y_543;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_544;
              break;

          }
        }
        break;
      default:
        $p_545 = *((value *) $x_534 + 0LL);
        if (($y_533 & 1) == 0) {
          switch (*((value *) $y_533 + -1LL) & 255LL) {
            case 0:
              $q_546 = *((value *) $y_533 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_547 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_carry_uncurried_known_132)
                ($tinfo, $q_546, $p_545);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosddouble_mask_known_127)
                ($tinfo, $y_547);
              return $result;
              break;
            default:
              $q_549 = *((value *) $y_533 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_550 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_carry_uncurried_known_132)
                ($tinfo, $q_549, $p_545);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128)
                ($tinfo, $y_550);
              return $result;
              break;

          }
        } else {
          switch ($y_533 >> 1LL) {
            default:
              if (($p_545 & 1) == 0) {
                switch (*((value *) $p_545 + -1LL) & 255LL) {
                  case 0:
                    $p_552 = *((value *) $p_545 + 0LL);
                    $y_553 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_553 + -1LL) = 1025LL;
                    *((value *) $y_553 + 0LL) = $p_552;
                    $y_554 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_554 + -1LL) = 1025LL;
                    *((value *) $y_554 + 0LL) = $y_553;
                    $y_555 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_555 + -1LL) = 1024LL;
                    *((value *) $y_555 + 0LL) = $y_554;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_555;
                    break;
                  default:
                    $p_556 = *((value *) $p_545 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $y_558 =
                      ((value (*)(struct thread_info *, value)) pred_double_known_129)
                      ($tinfo, $p_556);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(4LL <= $limit - $alloc)) {
                      *(root + 0LL) = $y_558;
                      frame.next = root + 1LL;
                      (*$tinfo).fp = &frame;
                      (*$tinfo).nalloc = 4LL;
                      garbage_collect($tinfo);
                      $y_558 = *(root + 0LL);
                      (*$tinfo).fp = frame.prev;
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    /*skip*/;
                    $y_559 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_559 + -1LL) = 1025LL;
                    *((value *) $y_559 + 0LL) = $y_558;
                    $y_560 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_560 + -1LL) = 1024LL;
                    *((value *) $y_560 + 0LL) = $y_559;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_560;
                    break;

                }
              } else {
                switch ($p_545 >> 1LL) {
                  default:
                    $y_561 = 1LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_561;
                    break;

                }
              }
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_534 >> 1LL) {
      default:
        $y_562 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_562;
        break;

    }
  }
}

value sub_mask_uncurried_known_131(struct thread_info *$tinfo, value $y_508, value $x_509)
{
  struct stack_frame frame;
  value root[2];
  register value $p_510;
  register value $q_511;
  register value $y_512;
  register value $q_514;
  register value $y_515;
  register value $y_517;
  register value $y_518;
  register value $p_519;
  register value $q_520;
  register value $y_521;
  register value $q_523;
  register value $y_524;
  register value $y_527;
  register value $y_528;
  register value $y_529;
  register value $y_530;
  register value $y_531;
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
    *(root + 1LL) = $x_509;
    *(root + 0LL) = $y_508;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_509 = *(root + 1LL);
    $y_508 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_509 & 1) == 0) {
    switch (*((value *) $x_509 + -1LL) & 255LL) {
      case 0:
        $p_510 = *((value *) $x_509 + 0LL);
        if (($y_508 & 1) == 0) {
          switch (*((value *) $y_508 + -1LL) & 255LL) {
            case 0:
              $q_511 = *((value *) $y_508 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_512 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_uncurried_known_131)
                ($tinfo, $q_511, $p_510);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosddouble_mask_known_127)
                ($tinfo, $y_512);
              return $result;
              break;
            default:
              $q_514 = *((value *) $y_508 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_515 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_uncurried_known_131)
                ($tinfo, $q_514, $p_510);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128)
                ($tinfo, $y_515);
              return $result;
              break;

          }
        } else {
          switch ($y_508 >> 1LL) {
            default:
              $y_517 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_517 + -1LL) = 1025LL;
              *((value *) $y_517 + 0LL) = $p_510;
              $y_518 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_518 + -1LL) = 1024LL;
              *((value *) $y_518 + 0LL) = $y_517;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_518;
              break;

          }
        }
        break;
      default:
        $p_519 = *((value *) $x_509 + 0LL);
        if (($y_508 & 1) == 0) {
          switch (*((value *) $y_508 + -1LL) & 255LL) {
            case 0:
              $q_520 = *((value *) $y_508 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_521 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_carry_uncurried_known_132)
                ($tinfo, $q_520, $p_519);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128)
                ($tinfo, $y_521);
              return $result;
              break;
            default:
              $q_523 = *((value *) $y_508 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_524 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_uncurried_known_131)
                ($tinfo, $q_523, $p_519);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosddouble_mask_known_127)
                ($tinfo, $y_524);
              return $result;
              break;

          }
        } else {
          switch ($y_508 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_527 =
                ((value (*)(struct thread_info *, value)) pred_double_known_129)
                ($tinfo, $p_519);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_527;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_527 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_528 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_528 + -1LL) = 1024LL;
              *((value *) $y_528 + 0LL) = $y_527;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_528;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_509 >> 1LL) {
      default:
        if (($y_508 & 1) == 0) {
          switch (*((value *) $y_508 + -1LL) & 255LL) {
            case 0:
              $y_529 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_529;
              break;
            default:
              $y_530 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_530;
              break;

          }
        } else {
          switch ($y_508 >> 1LL) {
            default:
              $y_531 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_531;
              break;

          }
        }
        break;

    }
  }
}

value CoqdNArithdBinNatDefdNdsub_uncurried_known_130(struct thread_info *$tinfo, value $m_496, value $n_497)
{
  struct stack_frame frame;
  value root[2];
  register value $y_498;
  register value $np_499;
  register value $mp_500;
  register value $y_502;
  register value $y_503;
  register value $p_504;
  register value $y_505;
  register value $y_506;
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
  if (($n_497 & 1) == 0) {
    switch (*((value *) $n_497 + -1LL) & 255LL) {
      default:
        $np_499 = *((value *) $n_497 + 0LL);
        if (($m_496 & 1) == 0) {
          switch (*((value *) $m_496 + -1LL) & 255LL) {
            default:
              $mp_500 = *((value *) $m_496 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_502 =
                ((value (*)(struct thread_info *, value, value)) sub_mask_uncurried_known_131)
                ($tinfo, $mp_500, $np_499);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_502;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_502 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              if (($y_502 & 1) == 0) {
                switch (*((value *) $y_502 + -1LL) & 255LL) {
                  default:
                    $p_504 = *((value *) $y_502 + 0LL);
                    $y_505 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_505 + -1LL) = 1024LL;
                    *((value *) $y_505 + 0LL) = $p_504;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_505;
                    break;

                }
              } else {
                switch ($y_502 >> 1LL) {
                  case 0:
                    $y_503 = 1LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_503;
                    break;
                  default:
                    $y_506 = 1LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_506;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($m_496 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $n_497;
              break;

          }
        }
        break;

    }
  } else {
    switch ($n_497 >> 1LL) {
      default:
        $y_498 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_498;
        break;

    }
  }
}

value pred_double_known_129(struct thread_info *$tinfo, value $x_487)
{
  struct stack_frame frame;
  value root[1];
  register value $p_488;
  register value $y_489;
  register value $y_490;
  register value $p_491;
  register value $y_492;
  register value $y_493;
  register value $y_494;
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
    *(root + 0LL) = $x_487;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_487 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_487 & 1) == 0) {
    switch (*((value *) $x_487 + -1LL) & 255LL) {
      case 0:
        $p_488 = *((value *) $x_487 + 0LL);
        $y_489 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_489 + -1LL) = 1025LL;
        *((value *) $y_489 + 0LL) = $p_488;
        $y_490 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_490 + -1LL) = 1024LL;
        *((value *) $y_490 + 0LL) = $y_489;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_490;
        break;
      default:
        $p_491 = *((value *) $x_487 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_492 =
          ((value (*)(struct thread_info *, value)) pred_double_known_129)
          ($tinfo, $p_491);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_492;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_492 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_493 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_493 + -1LL) = 1024LL;
        *((value *) $y_493 + 0LL) = $y_492;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_493;
        break;

    }
  } else {
    switch ($x_487 >> 1LL) {
      default:
        $y_494 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_494;
        break;

    }
  }
}

value CoqdPArithdBinPosDefdPosdsucc_double_mask_known_128(struct thread_info *$tinfo, value $x_479)
{
  struct stack_frame frame;
  value root[1];
  register value $y_480;
  register value $y_481;
  register value $p_482;
  register value $y_483;
  register value $y_484;
  register value $y_485;
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
    *(root + 0LL) = $x_479;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_479 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_479 & 1) == 0) {
    switch (*((value *) $x_479 + -1LL) & 255LL) {
      default:
        $p_482 = *((value *) $x_479 + 0LL);
        $y_483 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_483 + -1LL) = 1024LL;
        *((value *) $y_483 + 0LL) = $p_482;
        $y_484 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_484 + -1LL) = 1024LL;
        *((value *) $y_484 + 0LL) = $y_483;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_484;
        break;

    }
  } else {
    switch ($x_479 >> 1LL) {
      case 0:
        $y_480 = 1LL;
        $y_481 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_481 + -1LL) = 1024LL;
        *((value *) $y_481 + 0LL) = $y_480;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_481;
        break;
      default:
        $y_485 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_485;
        break;

    }
  }
}

value CoqdPArithdBinPosDefdPosddouble_mask_known_127(struct thread_info *$tinfo, value $x_472)
{
  struct stack_frame frame;
  value root[1];
  register value $y_473;
  register value $p_474;
  register value $y_475;
  register value $y_476;
  register value $y_477;
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
    *(root + 0LL) = $x_472;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_472 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_472 & 1) == 0) {
    switch (*((value *) $x_472 + -1LL) & 255LL) {
      default:
        $p_474 = *((value *) $x_472 + 0LL);
        $y_475 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_475 + -1LL) = 1025LL;
        *((value *) $y_475 + 0LL) = $p_474;
        $y_476 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_476 + -1LL) = 1024LL;
        *((value *) $y_476 + 0LL) = $y_475;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_476;
        break;

    }
  } else {
    switch ($x_472 >> 1LL) {
      case 0:
        $y_473 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_473;
        break;
      default:
        $y_477 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_477;
        break;

    }
  }
}

value CoqdNArithdBinNatDefdNdsucc_double_known_126(struct thread_info *$tinfo, value $x_465)
{
  struct stack_frame frame;
  value root[1];
  register value $y_466;
  register value $y_467;
  register value $p_468;
  register value $y_469;
  register value $y_470;
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
    *(root + 0LL) = $x_465;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_465 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_465 & 1) == 0) {
    switch (*((value *) $x_465 + -1LL) & 255LL) {
      default:
        $p_468 = *((value *) $x_465 + 0LL);
        $y_469 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_469 + -1LL) = 1024LL;
        *((value *) $y_469 + 0LL) = $p_468;
        $y_470 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_470 + -1LL) = 1024LL;
        *((value *) $y_470 + 0LL) = $y_469;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_470;
        break;

    }
  } else {
    switch ($x_465 >> 1LL) {
      default:
        $y_466 = 1LL;
        $y_467 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_467 + -1LL) = 1024LL;
        *((value *) $y_467 + 0LL) = $y_466;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_467;
        break;

    }
  }
}

value f_case_known_125(struct thread_info *$tinfo, value $s_444, value $y_445, value $y_446)
{
  struct stack_frame frame;
  value root[3];
  register value $y_447;
  register value $y_448;
  register value $y_449;
  register value $xp_450;
  register value $y_451;
  register value $yp_452;
  register value $y_454;
  register value $xp_455;
  register value $y_456;
  register value $y_457;
  register value $yp_458;
  register value $y_460;
  register value $y_461;
  register value $y_462;
  register value $y_463;
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
  if (($s_444 & 1) == 0) {
    switch (*((value *) $s_444 + -1LL) & 255LL) {
      case 0:
        $xp_450 = *((value *) $s_444 + 0LL);
        if (($y_446 & 1) == 0) {
          switch (*((value *) $y_446 + -1LL) & 255LL) {
            case 0:
              $yp_452 = *((value *) $y_446 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $yp_452, $xp_450, $y_445);
              return $result;
              break;
            default:
              $y_454 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_454;
              break;

          }
        } else {
          switch ($y_446 >> 1LL) {
            default:
              $y_451 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_451;
              break;

          }
        }
        break;
      default:
        $xp_455 = *((value *) $s_444 + 0LL);
        if (($y_446 & 1) == 0) {
          switch (*((value *) $y_446 + -1LL) & 255LL) {
            case 0:
              $y_457 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_457;
              break;
            default:
              $yp_458 = *((value *) $y_446 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_460 =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $yp_458, $xp_455, $y_445);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              if (($y_460 & 1) == 0) {
                switch (*((value *) $y_460 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_460 >> 1LL) {
                  case 0:
                    $y_461 = 1LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_461;
                    break;
                  case 1:
                    $y_462 = 5LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_462;
                    break;
                  default:
                    $y_463 = 3LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_463;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_446 >> 1LL) {
            default:
              $y_456 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_456;
              break;

          }
        }
        break;

    }
  } else {
    switch ($s_444 >> 1LL) {
      default:
        if (($y_446 & 1) == 0) {
          switch (*((value *) $y_446 + -1LL) & 255LL) {
            case 0:
              $y_448 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_448;
              break;
            default:
              $y_449 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_449;
              break;

          }
        } else {
          switch ($y_446 >> 1LL) {
            default:
              $y_447 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_447;
              break;

          }
        }
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdltb_uncurried_known_124(struct thread_info *$tinfo, value $y_435, value $x_436, value $y_437)
{
  struct stack_frame frame;
  value root[3];
  register value $y_439;
  register value $y_440;
  register value $y_441;
  register value $y_442;
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
  $y_439 =
    ((value (*)(struct thread_info *, value, value, value)) f_case_known_125)
    ($tinfo, $x_436, $y_437, $y_435);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  if (($y_439 & 1) == 0) {
    switch (*((value *) $y_439 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_439 >> 1LL) {
      case 0:
        $y_440 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_440;
        break;
      case 1:
        $y_441 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_441;
        break;
      default:
        $y_442 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_442;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_123(struct thread_info *$tinfo, value $env_431, value $reg_id_432)
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
    ((value (*)(struct thread_info *, value)) CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_122)
    ($tinfo, $reg_id_432);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_122(struct thread_info *$tinfo, value $reg_id_417)
{
  struct stack_frame frame;
  value root[2];
  register value $prim_418;
  register value $y_419;
  register value $y_420;
  register value $y_421;
  register value $y_422;
  register value $y_423;
  register value $y_424;
  register value $y_425;
  register value $y_426;
  register value $y_427;
  register value $pcspkr_val_out_429;
  register value $prim_430;
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
  if (!(16LL <= $limit - $alloc)) {
    *(root + 0LL) = $reg_id_417;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 16LL;
    garbage_collect($tinfo);
    $reg_id_417 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $reg_id_417;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $prim_418 =
    ((value (*)(struct thread_info *, value)) in8_p)
    ($tinfo, $reg_id_417);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(16LL <= $limit - $alloc)) {
    *(root + 1LL) = $prim_418;
    frame.next = root + 2LL;
    (*$tinfo).nalloc = 16LL;
    garbage_collect($tinfo);
    $prim_418 = *(root + 1LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $reg_id_417 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_419 = 1LL;
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
  *((value *) $y_425 + -1LL) = 1025LL;
  *((value *) $y_425 + 0LL) = $y_424;
  $y_426 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_426 + -1LL) = 1025LL;
  *((value *) $y_426 + 0LL) = $y_425;
  $y_427 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_427 + -1LL) = 1024LL;
  *((value *) $y_427 + 0LL) = $y_426;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $reg_id_417;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $pcspkr_val_out_429 =
    ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdland_uncurried_known_120)
    ($tinfo, $y_427, $prim_418);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $reg_id_417 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  $prim_430 =
    ((value (*)(struct thread_info *, value, value)) out8)
    ($tinfo, $pcspkr_val_out_429, $reg_id_417);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $prim_430;
}

value land_uncurried_known_121(struct thread_info *$tinfo, value $q_388, value $p_389)
{
  struct stack_frame frame;
  value root[2];
  register value $p_390;
  register value $q_391;
  register value $y_392;
  register value $y_393;
  register value $y_394;
  register value $p_395;
  register value $y_396;
  register value $y_397;
  register value $q_398;
  register value $y_399;
  register value $y_401;
  register value $y_402;
  register value $p_403;
  register value $q_404;
  register value $y_405;
  register value $q_407;
  register value $y_408;
  register value $y_410;
  register value $y_411;
  register value $y_412;
  register value $y_413;
  register value $y_414;
  register value $y_415;
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
    *(root + 1LL) = $p_389;
    *(root + 0LL) = $q_388;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $p_389 = *(root + 1LL);
    $q_388 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($p_389 & 1) == 0) {
    switch (*((value *) $p_389 + -1LL) & 255LL) {
      case 0:
        $p_390 = *((value *) $p_389 + 0LL);
        if (($q_388 & 1) == 0) {
          switch (*((value *) $q_388 + -1LL) & 255LL) {
            case 0:
              $q_391 = *((value *) $q_388 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_392 =
                ((value (*)(struct thread_info *, value, value)) land_uncurried_known_121)
                ($tinfo, $q_391, $p_390);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_392;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_392 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              if (($y_392 & 1) == 0) {
                switch (*((value *) $y_392 + -1LL) & 255LL) {
                  default:
                    $p_395 = *((value *) $y_392 + 0LL);
                    $y_396 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_396 + -1LL) = 1024LL;
                    *((value *) $y_396 + 0LL) = $p_395;
                    $y_397 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_397 + -1LL) = 1024LL;
                    *((value *) $y_397 + 0LL) = $y_396;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_397;
                    break;

                }
              } else {
                switch ($y_392 >> 1LL) {
                  default:
                    $y_393 = 1LL;
                    $y_394 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_394 + -1LL) = 1024LL;
                    *((value *) $y_394 + 0LL) = $y_393;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_394;
                    break;

                }
              }
              break;
            default:
              $q_398 = *((value *) $q_388 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_399 =
                ((value (*)(struct thread_info *, value, value)) land_uncurried_known_121)
                ($tinfo, $q_398, $p_390);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdNdouble_known_119)
                ($tinfo, $y_399);
              return $result;
              break;

          }
        } else {
          switch ($q_388 >> 1LL) {
            default:
              $y_401 = 1LL;
              $y_402 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_402 + -1LL) = 1024LL;
              *((value *) $y_402 + 0LL) = $y_401;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_402;
              break;

          }
        }
        break;
      default:
        $p_403 = *((value *) $p_389 + 0LL);
        if (($q_388 & 1) == 0) {
          switch (*((value *) $q_388 + -1LL) & 255LL) {
            case 0:
              $q_404 = *((value *) $q_388 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_405 =
                ((value (*)(struct thread_info *, value, value)) land_uncurried_known_121)
                ($tinfo, $q_404, $p_403);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdNdouble_known_119)
                ($tinfo, $y_405);
              return $result;
              break;
            default:
              $q_407 = *((value *) $q_388 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_408 =
                ((value (*)(struct thread_info *, value, value)) land_uncurried_known_121)
                ($tinfo, $q_407, $p_403);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdPArithdBinPosDefdPosdNdouble_known_119)
                ($tinfo, $y_408);
              return $result;
              break;

          }
        } else {
          switch ($q_388 >> 1LL) {
            default:
              $y_410 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_410;
              break;

          }
        }
        break;

    }
  } else {
    switch ($p_389 >> 1LL) {
      default:
        if (($q_388 & 1) == 0) {
          switch (*((value *) $q_388 + -1LL) & 255LL) {
            case 0:
              $y_411 = 1LL;
              $y_412 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_412 + -1LL) = 1024LL;
              *((value *) $y_412 + 0LL) = $y_411;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_412;
              break;
            default:
              $y_413 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_413;
              break;

          }
        } else {
          switch ($q_388 >> 1LL) {
            default:
              $y_414 = 1LL;
              $y_415 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_415 + -1LL) = 1024LL;
              *((value *) $y_415 + 0LL) = $y_414;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_415;
              break;

          }
        }
        break;

    }
  }
}

value CoqdNArithdBinNatDefdNdland_uncurried_known_120(struct thread_info *$tinfo, value $m_380, value $n_381)
{
  struct stack_frame frame;
  value root[2];
  register value $y_382;
  register value $p_383;
  register value $y_384;
  register value $q_385;
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
  if (($n_381 & 1) == 0) {
    switch (*((value *) $n_381 + -1LL) & 255LL) {
      default:
        $p_383 = *((value *) $n_381 + 0LL);
        if (($m_380 & 1) == 0) {
          switch (*((value *) $m_380 + -1LL) & 255LL) {
            default:
              $q_385 = *((value *) $m_380 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) land_uncurried_known_121)
                ($tinfo, $q_385, $p_383);
              return $result;
              break;

          }
        } else {
          switch ($m_380 >> 1LL) {
            default:
              $y_384 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_384;
              break;

          }
        }
        break;

    }
  } else {
    switch ($n_381 >> 1LL) {
      default:
        $y_382 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_382;
        break;

    }
  }
}

value CoqdPArithdBinPosDefdPosdNdouble_known_119(struct thread_info *$tinfo, value $n_374)
{
  struct stack_frame frame;
  value root[1];
  register value $y_375;
  register value $p_376;
  register value $y_377;
  register value $y_378;
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
    *(root + 0LL) = $n_374;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $n_374 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($n_374 & 1) == 0) {
    switch (*((value *) $n_374 + -1LL) & 255LL) {
      default:
        $p_376 = *((value *) $n_374 + 0LL);
        $y_377 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_377 + -1LL) = 1025LL;
        *((value *) $y_377 + 0LL) = $p_376;
        $y_378 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_378 + -1LL) = 1024LL;
        *((value *) $y_378 + 0LL) = $y_377;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_378;
        break;

    }
  } else {
    switch ($n_374 >> 1LL) {
      default:
        $y_375 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_375;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_118(struct thread_info *$tinfo, value $a_348, value $func_349)
{
  struct stack_frame frame;
  value root[3];
  register value $y_350;
  register value $y_351;
  register value $prim_352;
  register value $y_353;
  register value $y_355;
  register value $func_code_356;
  register value $func_env_357;
  register value $result_358;
  register value $y_359;
  register value $y_361;
  register value $y_362;
  register value $prim_363;
  register value $y_364;
  register value $prim_365;
  register value $y_366;
  register value $y_368;
  register value $y_369;
  register value $y_370;
  register value $y_371;
  register value $y_372;
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
    *(root + 1LL) = $func_349;
    *(root + 0LL) = $a_348;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $func_349 = *(root + 1LL);
    $a_348 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_350 = 1LL;
  $y_351 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_351 + -1LL) = 1024LL;
  *((value *) $y_351 + 0LL) = $y_350;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $func_349;
  *(root + 0LL) = $a_348;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $prim_352 =
    ((value (*)(struct thread_info *, value)) spinlock)
    ($tinfo, $y_351);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $func_349 = *(root + 1LL);
  $a_348 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_353 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $func_349;
  *(root + 0LL) = $a_348;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $y_355 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
    ($tinfo, $y_353, $prim_352);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 2LL) = $y_355;
    frame.next = root + 3LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_355 = *(root + 2LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $func_349 = *(root + 1LL);
  $a_348 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_355 & 1) == 0) {
    switch (*((value *) $y_355 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_355 >> 1LL) {
      case 0:
        $func_code_356 = *((value *) $func_349 + 0LL);
        $func_env_357 = *((value *) $func_349 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $result_358 =
          ((value (*)(struct thread_info *, value, value)) $func_code_356)
          ($tinfo, $func_env_357, $a_348);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_359 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $result_358;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_361 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
          ($tinfo, $y_359, $result_358);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $result_358 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_361 & 1) == 0) {
          switch (*((value *) $y_361 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_361 >> 1LL) {
            case 0:
              $y_362 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $prim_363 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_362);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_363;
              break;
            default:
              $y_364 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_358;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_365 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_364);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $result_358 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_366 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_358;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_368 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
                ($tinfo, $y_366, $prim_365);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_368;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_368 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $result_358 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_368 & 1) == 0) {
                switch (*((value *) $y_368 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_368 >> 1LL) {
                  case 0:
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $result_358;
                    break;
                  default:
                    $y_369 = 1LL;
                    $y_370 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_370 + -1LL) = 1024LL;
                    *((value *) $y_370 + 0LL) = $y_369;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_370;
                    break;

                }
              }
              break;

          }
        }
        break;
      default:
        $y_371 = 1LL;
        $y_372 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_372 + -1LL) = 1024LL;
        *((value *) $y_372 + 0LL) = $y_371;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_372;
        break;

    }
  }
}

value lor_uncurried_known_117(struct thread_info *$tinfo, value $q_328, value $p_329)
{
  struct stack_frame frame;
  value root[2];
  register value $p_330;
  register value $q_331;
  register value $y_332;
  register value $y_333;
  register value $q_334;
  register value $y_335;
  register value $y_336;
  register value $p_337;
  register value $q_338;
  register value $y_339;
  register value $y_340;
  register value $q_341;
  register value $y_342;
  register value $y_343;
  register value $y_344;
  register value $q_345;
  register value $y_346;
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
    *(root + 1LL) = $p_329;
    *(root + 0LL) = $q_328;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $p_329 = *(root + 1LL);
    $q_328 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($p_329 & 1) == 0) {
    switch (*((value *) $p_329 + -1LL) & 255LL) {
      case 0:
        $p_330 = *((value *) $p_329 + 0LL);
        if (($q_328 & 1) == 0) {
          switch (*((value *) $q_328 + -1LL) & 255LL) {
            case 0:
              $q_331 = *((value *) $q_328 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_332 =
                ((value (*)(struct thread_info *, value, value)) lor_uncurried_known_117)
                ($tinfo, $q_331, $p_330);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_332;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_332 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_333 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_333 + -1LL) = 1024LL;
              *((value *) $y_333 + 0LL) = $y_332;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_333;
              break;
            default:
              $q_334 = *((value *) $q_328 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_335 =
                ((value (*)(struct thread_info *, value, value)) lor_uncurried_known_117)
                ($tinfo, $q_334, $p_330);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_335;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_335 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_336 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_336 + -1LL) = 1024LL;
              *((value *) $y_336 + 0LL) = $y_335;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_336;
              break;

          }
        } else {
          switch ($q_328 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $p_329;
              break;

          }
        }
        break;
      default:
        $p_337 = *((value *) $p_329 + 0LL);
        if (($q_328 & 1) == 0) {
          switch (*((value *) $q_328 + -1LL) & 255LL) {
            case 0:
              $q_338 = *((value *) $q_328 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_339 =
                ((value (*)(struct thread_info *, value, value)) lor_uncurried_known_117)
                ($tinfo, $q_338, $p_337);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_339;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_339 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_340 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_340 + -1LL) = 1024LL;
              *((value *) $y_340 + 0LL) = $y_339;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_340;
              break;
            default:
              $q_341 = *((value *) $q_328 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_342 =
                ((value (*)(struct thread_info *, value, value)) lor_uncurried_known_117)
                ($tinfo, $q_341, $p_337);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_342;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_342 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_343 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_343 + -1LL) = 1025LL;
              *((value *) $y_343 + 0LL) = $y_342;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_343;
              break;

          }
        } else {
          switch ($q_328 >> 1LL) {
            default:
              $y_344 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_344 + -1LL) = 1024LL;
              *((value *) $y_344 + 0LL) = $p_337;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_344;
              break;

          }
        }
        break;

    }
  } else {
    switch ($p_329 >> 1LL) {
      default:
        if (($q_328 & 1) == 0) {
          switch (*((value *) $q_328 + -1LL) & 255LL) {
            case 0:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $q_328;
              break;
            default:
              $q_345 = *((value *) $q_328 + 0LL);
              $y_346 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_346 + -1LL) = 1024LL;
              *((value *) $y_346 + 0LL) = $q_345;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_346;
              break;

          }
        } else {
          switch ($q_328 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $q_328;
              break;

          }
        }
        break;

    }
  }
}

value f_case_known_116(struct thread_info *$tinfo, value $s_320, value $y_321, value $y_322)
{
  struct stack_frame frame;
  value root[3];
  register value $p_323;
  register value $y_325;
  register value $y_326;
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
  if (($s_320 & 1) == 0) {
    switch (*((value *) $s_320 + -1LL) & 255LL) {
      default:
        $p_323 = *((value *) $s_320 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_325 =
          ((value (*)(struct thread_info *, value, value)) lor_uncurried_known_117)
          ($tinfo, $y_321, $p_323);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_325;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_325 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_326 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_326 + -1LL) = 1024LL;
        *((value *) $y_326 + 0LL) = $y_325;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_326;
        break;

    }
  } else {
    switch ($s_320 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_322;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_115(struct thread_info *$tinfo, value $env_280, value $prev_byte_281, value $last_byte_282)
{
  struct stack_frame frame;
  value root[4];
  register value $CertiDDdOSdRegistersdNdCmd_proj_284;
  register value $CertiDDdOSdRegistersdNdsnd_command_proj_285;
  register value $y_proj_286;
  register value $y_287;
  register value $y_288;
  register value $y_290;
  register value $CertiDDdOSdRegistersdNdData2_proj_292;
  register value $y_proj_293;
  register value $y_294;
  register value $y_295;
  register value $y_297;
  register value $CertiDDdOSdRegistersdNdData2_proj_298;
  register value $prim_299;
  register value $y_300;
  register value $y_302;
  register value $CertiDDdOSdRegistersdNdPc_spk_proj_303;
  register value $prim_304;
  register value $y_305;
  register value $y_306;
  register value $y_307;
  register value $y_309;
  register value $CertiDDdOSdRegistersdNdPc_spk_proj_311;
  register value $y_proj_312;
  register value $y_313;
  register value $y_314;
  register value $y_315;
  register value $y_316;
  register value $y_317;
  register value $y_318;
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
  $CertiDDdOSdRegistersdNdCmd_proj_284 = *((value *) $env_280 + 2LL);
  $CertiDDdOSdRegistersdNdsnd_command_proj_285 = *((value *) $env_280 + 1LL);
  $y_proj_286 = *((value *) $env_280 + 0LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $last_byte_282;
  *(root + 1LL) = $prev_byte_281;
  *(root + 0LL) = $env_280;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_287 =
    ((value (*)(struct thread_info *, value, value, value)) CertiDDdOSdRegister_iodNdout8_p_uncurried_known_112)
    ($tinfo, $CertiDDdOSdRegistersdNdCmd_proj_284,
     $CertiDDdOSdRegistersdNdsnd_command_proj_285, $y_proj_286);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $last_byte_282 = *(root + 2LL);
  $prev_byte_281 = *(root + 1LL);
  $env_280 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_288 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $last_byte_282;
  *(root + 1LL) = $prev_byte_281;
  *(root + 0LL) = $env_280;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_290 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
    ($tinfo, $y_288, $y_287);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_290;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_290 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $last_byte_282 = *(root + 2LL);
  $prev_byte_281 = *(root + 1LL);
  $env_280 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_290 & 1) == 0) {
    switch (*((value *) $y_290 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_290 >> 1LL) {
      case 0:
        $CertiDDdOSdRegistersdNdData2_proj_292 = *((value *) $env_280 + 3LL);
        $y_proj_293 = *((value *) $env_280 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $prev_byte_281;
        *(root + 0LL) = $env_280;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_294 =
          ((value (*)(struct thread_info *, value, value, value)) CertiDDdOSdRegister_iodNdout8_p_uncurried_known_112)
          ($tinfo, $CertiDDdOSdRegistersdNdData2_proj_292, $last_byte_282,
           $y_proj_293);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $prev_byte_281 = *(root + 1LL);
        $env_280 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_295 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $prev_byte_281;
        *(root + 0LL) = $env_280;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_297 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
          ($tinfo, $y_295, $y_294);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_297;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_297 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $prev_byte_281 = *(root + 1LL);
        $env_280 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_297 & 1) == 0) {
          switch (*((value *) $y_297 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_297 >> 1LL) {
            case 0:
              $CertiDDdOSdRegistersdNdData2_proj_298 =
                *((value *) $env_280 + 3LL);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_280;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_299 =
                ((value (*)(struct thread_info *, value, value)) out8)
                ($tinfo, $prev_byte_281,
                 $CertiDDdOSdRegistersdNdData2_proj_298);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $env_280 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_300 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_280;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_302 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
                ($tinfo, $y_300, $prim_299);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_302;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_302 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $env_280 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_302 & 1) == 0) {
                switch (*((value *) $y_302 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_302 >> 1LL) {
                  case 0:
                    $CertiDDdOSdRegistersdNdPc_spk_proj_303 =
                      *((value *) $env_280 + 4LL);
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_280;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $prim_304 =
                      ((value (*)(struct thread_info *, value)) in8_p)
                      ($tinfo, $CertiDDdOSdRegistersdNdPc_spk_proj_303);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(4LL <= $limit - $alloc)) {
                      *(root + 1LL) = $prim_304;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 4LL;
                      garbage_collect($tinfo);
                      $prim_304 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $env_280 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_305 = 1LL;
                    $y_306 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_306 + -1LL) = 1024LL;
                    *((value *) $y_306 + 0LL) = $y_305;
                    $y_307 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_307 + -1LL) = 1024LL;
                    *((value *) $y_307 + 0LL) = $y_306;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_280;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_309 =
                      ((value (*)(struct thread_info *, value, value, value))
                        f_case_known_116)
                      ($tinfo, $prim_304, $y_306, $y_307);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $env_280 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $CertiDDdOSdRegistersdNdPc_spk_proj_311 =
                      *((value *) $env_280 + 4LL);
                    $y_proj_312 = *((value *) $env_280 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    $result =
                      ((value (*)(struct thread_info *, value, value, value))
                        CertiDDdOSdRegister_iodNdout8_p_uncurried_known_112)
                      ($tinfo, $CertiDDdOSdRegistersdNdPc_spk_proj_311,
                       $y_309, $y_proj_312);
                    return $result;
                    break;
                  default:
                    $y_313 = 1LL;
                    $y_314 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_314 + -1LL) = 1024LL;
                    *((value *) $y_314 + 0LL) = $y_313;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_314;
                    break;

                }
              }
              break;
            default:
              $y_315 = 1LL;
              $y_316 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_316 + -1LL) = 1024LL;
              *((value *) $y_316 + 0LL) = $y_315;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_316;
              break;

          }
        }
        break;
      default:
        $y_317 = 1LL;
        $y_318 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_318 + -1LL) = 1024LL;
        *((value *) $y_318 + 0LL) = $y_317;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_318;
        break;

    }
  }
}

value y_wrapper_114(struct thread_info *$tinfo, value $env_274, value $prev_byte_275)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_276;
  register value $last_byte_proj_277;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_code_278;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_env_279;
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
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_276 =
    *((value *) $env_274 + 0LL);
  $last_byte_proj_277 = *((value *) $env_274 + 1LL);
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_code_278 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_276
       + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_env_279 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_276
       + 1LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value, value)) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_code_278)
    ($tinfo,
     $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_env_279,
     $prev_byte_275, $last_byte_proj_277);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_113(struct thread_info *$tinfo, value $env_269, value $last_byte_270)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_271;
  register value $env_272;
  register value $y_wrapper_clo_273;
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
    *(root + 1LL) = $last_byte_270;
    *(root + 0LL) = $env_269;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 9LL;
    garbage_collect($tinfo);
    $last_byte_270 = *(root + 1LL);
    $env_269 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_271 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_271
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_271
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_115;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_271
     + 1LL) =
    $env_269;
  $env_272 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $env_272 + -1LL) = 2048LL;
  *((value *) $env_272 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_271;
  *((value *) $env_272 + 1LL) = $last_byte_270;
  $y_wrapper_clo_273 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_273 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_273 + 0LL) = y_wrapper_114;
  *((value *) $y_wrapper_clo_273 + 1LL) = $env_272;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_273;
}

value CertiDDdOSdRegister_iodNdout8_p_uncurried_known_112(struct thread_info *$tinfo, value $reg_id_253, value $val_254, value $y_255)
{
  struct stack_frame frame;
  value root[3];
  register value $y_256;
  register value $prim_257;
  register value $y_259;
  register value $y_260;
  register value $prim_261;
  register value $y_263;
  register value $y_264;
  register value $y_265;
  register value $y_266;
  register value $y_267;
  register value $y_268;
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
  $y_256 = 1LL;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $y_256;
  *(root + 1LL) = $y_255;
  *(root + 0LL) = $reg_id_253;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $prim_257 =
    ((value (*)(struct thread_info *, value, value)) out8)
    ($tinfo, $val_254, $reg_id_253);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $y_256 = *(root + 2LL);
  $y_255 = *(root + 1LL);
  $reg_id_253 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $y_255;
  *(root + 0LL) = $reg_id_253;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $y_259 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
    ($tinfo, $prim_257, $y_256);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 2LL) = $y_259;
    frame.next = root + 3LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_259 = *(root + 2LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_255 = *(root + 1LL);
  $reg_id_253 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_259 & 1) == 0) {
    switch (*((value *) $y_259 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_259 >> 1LL) {
      case 0:
        $y_260 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $y_260;
        *(root + 0LL) = $y_255;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $prim_261 =
          ((value (*)(struct thread_info *, value)) in8)
          ($tinfo, $reg_id_253);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_260 = *(root + 1LL);
        $y_255 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_263 =
          ((value (*)(struct thread_info *, value, value, value)) CoqdNArithdBinNatDefdNdleb_uncurried_known_110)
          ($tinfo, $prim_261, $y_260, $y_255);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_263;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_263 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        if (($y_263 & 1) == 0) {
          switch (*((value *) $y_263 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_263 >> 1LL) {
            case 0:
              $y_264 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_264;
              break;
            default:
              $y_265 = 1LL;
              $y_266 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_266 + -1LL) = 1024LL;
              *((value *) $y_266 + 0LL) = $y_265;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_266;
              break;

          }
        }
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
}

value f_case_known_111(struct thread_info *$tinfo, value $s_243, value $y_244, value $y_245)
{
  struct stack_frame frame;
  value root[3];
  register value $y_246;
  register value $y_247;
  register value $np_248;
  register value $y_249;
  register value $mp_250;
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
  if (($s_243 & 1) == 0) {
    switch (*((value *) $s_243 + -1LL) & 255LL) {
      default:
        $np_248 = *((value *) $s_243 + 0LL);
        if (($y_245 & 1) == 0) {
          switch (*((value *) $y_245 + -1LL) & 255LL) {
            default:
              $mp_250 = *((value *) $y_245 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $mp_250, $np_248, $y_244);
              return $result;
              break;

          }
        } else {
          switch ($y_245 >> 1LL) {
            default:
              $y_249 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_249;
              break;

          }
        }
        break;

    }
  } else {
    switch ($s_243 >> 1LL) {
      default:
        if (($y_245 & 1) == 0) {
          switch (*((value *) $y_245 + -1LL) & 255LL) {
            default:
              $y_247 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_247;
              break;

          }
        } else {
          switch ($y_245 >> 1LL) {
            default:
              $y_246 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_246;
              break;

          }
        }
        break;

    }
  }
}

value CoqdNArithdBinNatDefdNdleb_uncurried_known_110(struct thread_info *$tinfo, value $y_234, value $x_235, value $y_236)
{
  struct stack_frame frame;
  value root[3];
  register value $y_238;
  register value $y_239;
  register value $y_240;
  register value $y_241;
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
  $y_238 =
    ((value (*)(struct thread_info *, value, value, value)) f_case_known_111)
    ($tinfo, $x_235, $y_236, $y_234);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  if (($y_238 & 1) == 0) {
    switch (*((value *) $y_238 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_238 >> 1LL) {
      case 0:
        $y_239 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_239;
        break;
      case 1:
        $y_240 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_240;
        break;
      default:
        $y_241 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_241;
        break;

    }
  }
}

value compare_cont_uncurried_uncurried_known_109(struct thread_info *$tinfo, value $y_218, value $x_219, value $r_220)
{
  struct stack_frame frame;
  value root[3];
  register value $p_221;
  register value $q_222;
  register value $q_223;
  register value $y_224;
  register value $y_225;
  register value $p_226;
  register value $q_227;
  register value $y_228;
  register value $q_229;
  register value $y_230;
  register value $y_231;
  register value $y_232;
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
  if (($x_219 & 1) == 0) {
    switch (*((value *) $x_219 + -1LL) & 255LL) {
      case 0:
        $p_221 = *((value *) $x_219 + 0LL);
        if (($y_218 & 1) == 0) {
          switch (*((value *) $y_218 + -1LL) & 255LL) {
            case 0:
              $q_222 = *((value *) $y_218 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $q_222, $p_221, $r_220);
              return $result;
              break;
            default:
              $q_223 = *((value *) $y_218 + 0LL);
              $y_224 = 5LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $q_223, $p_221, $y_224);
              return $result;
              break;

          }
        } else {
          switch ($y_218 >> 1LL) {
            default:
              $y_225 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_225;
              break;

          }
        }
        break;
      default:
        $p_226 = *((value *) $x_219 + 0LL);
        if (($y_218 & 1) == 0) {
          switch (*((value *) $y_218 + -1LL) & 255LL) {
            case 0:
              $q_227 = *((value *) $y_218 + 0LL);
              $y_228 = 3LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $q_227, $p_226, $y_228);
              return $result;
              break;
            default:
              $q_229 = *((value *) $y_218 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_109)
                ($tinfo, $q_229, $p_226, $r_220);
              return $result;
              break;

          }
        } else {
          switch ($y_218 >> 1LL) {
            default:
              $y_230 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_230;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_219 >> 1LL) {
      default:
        if (($y_218 & 1) == 0) {
          switch (*((value *) $y_218 + -1LL) & 255LL) {
            case 0:
              $y_231 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_231;
              break;
            default:
              $y_232 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_232;
              break;

          }
        } else {
          switch ($y_218 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $r_220;
              break;

          }
        }
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_108(struct thread_info *$tinfo, value $b_188, value $a_189, value $func_190)
{
  struct stack_frame frame;
  value root[4];
  register value $y_191;
  register value $y_192;
  register value $prim_193;
  register value $y_194;
  register value $y_196;
  register value $func_code_197;
  register value $func_env_198;
  register value $y_199;
  register value $y_code_200;
  register value $y_env_201;
  register value $result_202;
  register value $y_203;
  register value $y_205;
  register value $y_206;
  register value $prim_207;
  register value $y_208;
  register value $prim_209;
  register value $y_210;
  register value $y_212;
  register value $y_213;
  register value $y_214;
  register value $y_215;
  register value $y_216;
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
    *(root + 2LL) = $func_190;
    *(root + 1LL) = $a_189;
    *(root + 0LL) = $b_188;
    frame.next = root + 3LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $func_190 = *(root + 2LL);
    $a_189 = *(root + 1LL);
    $b_188 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_191 = 1LL;
  $y_192 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_192 + -1LL) = 1024LL;
  *((value *) $y_192 + 0LL) = $y_191;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $func_190;
  *(root + 1LL) = $a_189;
  *(root + 0LL) = $b_188;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $prim_193 =
    ((value (*)(struct thread_info *, value)) spinlock)
    ($tinfo, $y_192);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $func_190 = *(root + 2LL);
  $a_189 = *(root + 1LL);
  $b_188 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_194 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $func_190;
  *(root + 1LL) = $a_189;
  *(root + 0LL) = $b_188;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_196 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
    ($tinfo, $y_194, $prim_193);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_196;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_196 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $func_190 = *(root + 2LL);
  $a_189 = *(root + 1LL);
  $b_188 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_196 & 1) == 0) {
    switch (*((value *) $y_196 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_196 >> 1LL) {
      case 0:
        $func_code_197 = *((value *) $func_190 + 0LL);
        $func_env_198 = *((value *) $func_190 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $b_188;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_199 =
          ((value (*)(struct thread_info *, value, value)) $func_code_197)
          ($tinfo, $func_env_198, $a_189);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $b_188 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_200 = *((value *) $y_199 + 0LL);
        $y_env_201 = *((value *) $y_199 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $result_202 =
          ((value (*)(struct thread_info *, value, value)) $y_code_200)
          ($tinfo, $y_env_201, $b_188);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_203 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $result_202;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_205 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
          ($tinfo, $y_203, $result_202);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $result_202 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_205 & 1) == 0) {
          switch (*((value *) $y_205 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_205 >> 1LL) {
            case 0:
              $y_206 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $prim_207 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_206);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_207;
              break;
            default:
              $y_208 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_202;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_209 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_208);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $result_202 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_210 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_202;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_212 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_107)
                ($tinfo, $y_210, $prim_209);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_212;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_212 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $result_202 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_212 & 1) == 0) {
                switch (*((value *) $y_212 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_212 >> 1LL) {
                  case 0:
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $result_202;
                    break;
                  default:
                    $y_213 = 1LL;
                    $y_214 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_214 + -1LL) = 1024LL;
                    *((value *) $y_214 + 0LL) = $y_213;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_214;
                    break;

                }
              }
              break;

          }
        }
        break;
      default:
        $y_215 = 1LL;
        $y_216 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_216 + -1LL) = 1024LL;
        *((value *) $y_216 + 0LL) = $y_215;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_216;
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdeqb_uncurried_known_107(struct thread_info *$tinfo, value $y_172, value $x_173)
{
  struct stack_frame frame;
  value root[2];
  register value $y_174;
  register value $y_175;
  register value $y_176;
  register value $p_177;
  register value $y_178;
  register value $q_179;
  register value $y_181;
  register value $p_182;
  register value $y_183;
  register value $y_184;
  register value $q_185;
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
  if (($x_173 & 1) == 0) {
    switch (*((value *) $x_173 + -1LL) & 255LL) {
      case 0:
        $p_177 = *((value *) $x_173 + 0LL);
        if (($y_172 & 1) == 0) {
          switch (*((value *) $y_172 + -1LL) & 255LL) {
            case 0:
              $q_179 = *((value *) $y_172 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_105)
                ($tinfo, $q_179, $p_177);
              return $result;
              break;
            default:
              $y_181 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_181;
              break;

          }
        } else {
          switch ($y_172 >> 1LL) {
            default:
              $y_178 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_178;
              break;

          }
        }
        break;
      default:
        $p_182 = *((value *) $x_173 + 0LL);
        if (($y_172 & 1) == 0) {
          switch (*((value *) $y_172 + -1LL) & 255LL) {
            case 0:
              $y_184 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_184;
              break;
            default:
              $q_185 = *((value *) $y_172 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_105)
                ($tinfo, $q_185, $p_182);
              return $result;
              break;

          }
        } else {
          switch ($y_172 >> 1LL) {
            default:
              $y_183 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_183;
              break;

          }
        }
        break;

    }
  } else {
    switch ($x_173 >> 1LL) {
      default:
        if (($y_172 & 1) == 0) {
          switch (*((value *) $y_172 + -1LL) & 255LL) {
            case 0:
              $y_175 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_175;
              break;
            default:
              $y_176 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_176;
              break;

          }
        } else {
          switch ($y_172 >> 1LL) {
            default:
              $y_174 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_174;
              break;

          }
        }
        break;

    }
  }
}

value CoqdNArithdBinNatDefdNdeqb_uncurried_known_106(struct thread_info *$tinfo, value $m_163, value $n_164)
{
  struct stack_frame frame;
  value root[2];
  register value $y_165;
  register value $y_166;
  register value $p_167;
  register value $y_168;
  register value $q_169;
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
  if (($n_164 & 1) == 0) {
    switch (*((value *) $n_164 + -1LL) & 255LL) {
      default:
        $p_167 = *((value *) $n_164 + 0LL);
        if (($m_163 & 1) == 0) {
          switch (*((value *) $m_163 + -1LL) & 255LL) {
            default:
              $q_169 = *((value *) $m_163 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_105)
                ($tinfo, $q_169, $p_167);
              return $result;
              break;

          }
        } else {
          switch ($m_163 >> 1LL) {
            default:
              $y_168 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_168;
              break;

          }
        }
        break;

    }
  } else {
    switch ($n_164 >> 1LL) {
      default:
        if (($m_163 & 1) == 0) {
          switch (*((value *) $m_163 + -1LL) & 255LL) {
            default:
              $y_166 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_166;
              break;

          }
        } else {
          switch ($m_163 >> 1LL) {
            default:
              $y_165 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_165;
              break;

          }
        }
        break;

    }
  }
}

value eqb_uncurried_known_105(struct thread_info *$tinfo, value $q_149, value $p_150)
{
  struct stack_frame frame;
  value root[2];
  register value $p_151;
  register value $q_152;
  register value $y_153;
  register value $y_154;
  register value $p_155;
  register value $y_156;
  register value $q_157;
  register value $y_158;
  register value $y_159;
  register value $y_160;
  register value $y_161;
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
  if (($p_150 & 1) == 0) {
    switch (*((value *) $p_150 + -1LL) & 255LL) {
      case 0:
        $p_151 = *((value *) $p_150 + 0LL);
        if (($q_149 & 1) == 0) {
          switch (*((value *) $q_149 + -1LL) & 255LL) {
            case 0:
              $q_152 = *((value *) $q_149 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_105)
                ($tinfo, $q_152, $p_151);
              return $result;
              break;
            default:
              $y_153 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_153;
              break;

          }
        } else {
          switch ($q_149 >> 1LL) {
            default:
              $y_154 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_154;
              break;

          }
        }
        break;
      default:
        $p_155 = *((value *) $p_150 + 0LL);
        if (($q_149 & 1) == 0) {
          switch (*((value *) $q_149 + -1LL) & 255LL) {
            case 0:
              $y_156 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_156;
              break;
            default:
              $q_157 = *((value *) $q_149 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_105)
                ($tinfo, $q_157, $p_155);
              return $result;
              break;

          }
        } else {
          switch ($q_149 >> 1LL) {
            default:
              $y_158 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_158;
              break;

          }
        }
        break;

    }
  } else {
    switch ($p_150 >> 1LL) {
      default:
        if (($q_149 & 1) == 0) {
          switch (*((value *) $q_149 + -1LL) & 255LL) {
            case 0:
              $y_159 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_159;
              break;
            default:
              $y_160 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_160;
              break;

          }
        } else {
          switch ($q_149 >> 1LL) {
            default:
              $y_161 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_161;
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
  value root[0];
  register value $y_837;
  register value $y_838;
  register value $y_839;
  register value $y_840;
  register value $y_841;
  register value $y_842;
  register value $y_843;
  register value $y_844;
  register value $y_845;
  register value $CertiDDdOSdRegistersdNdsnd_command_846;
  register value $y_847;
  register value $y_848;
  register value $y_849;
  register value $y_850;
  register value $y_851;
  register value $y_852;
  register value $y_853;
  register value $CertiDDdOSdRegistersdNdCmd_854;
  register value $y_855;
  register value $y_856;
  register value $y_857;
  register value $y_858;
  register value $y_859;
  register value $y_860;
  register value $y_861;
  register value $CertiDDdOSdRegistersdNdData2_862;
  register value $y_863;
  register value $y_864;
  register value $y_865;
  register value $y_866;
  register value $y_867;
  register value $y_868;
  register value $y_869;
  register value $CertiDDdOSdRegistersdNdPc_spk_870;
  register value $env_871;
  register value $y_872;
  register value $y_873;
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
  register value $y_884;
  register value $y_885;
  register value $y_886;
  register value $y_887;
  register value $y_888;
  register value $y_889;
  register value $y_890;
  register value $y_891;
  register value $y_892;
  register value $CertiDDdOSdPit_infodLinuxdNdTick_rate_893;
  register value $y_894;
  register value $y_895;
  register value $y_896;
  register value $y_897;
  register value $y_898;
  register value $CertiDDdOSdErrvaldeinval_899;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_900;
  register value $env_901;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_902;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(127LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 127LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_837 = 1LL;
  $y_838 = 1LL;
  $y_839 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_839 + -1LL) = 1025LL;
  *((value *) $y_839 + 0LL) = $y_838;
  $y_840 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_840 + -1LL) = 1024LL;
  *((value *) $y_840 + 0LL) = $y_839;
  $y_841 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_841 + -1LL) = 1024LL;
  *((value *) $y_841 + 0LL) = $y_840;
  $y_842 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_842 + -1LL) = 1025LL;
  *((value *) $y_842 + 0LL) = $y_841;
  $y_843 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_843 + -1LL) = 1024LL;
  *((value *) $y_843 + 0LL) = $y_842;
  $y_844 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_844 + -1LL) = 1024LL;
  *((value *) $y_844 + 0LL) = $y_843;
  $y_845 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_845 + -1LL) = 1025LL;
  *((value *) $y_845 + 0LL) = $y_844;
  $CertiDDdOSdRegistersdNdsnd_command_846 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdsnd_command_846 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdsnd_command_846 + 0LL) = $y_845;
  $y_847 = 1LL;
  $y_848 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_848 + -1LL) = 1025LL;
  *((value *) $y_848 + 0LL) = $y_847;
  $y_849 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_849 + -1LL) = 1025LL;
  *((value *) $y_849 + 0LL) = $y_848;
  $y_850 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_850 + -1LL) = 1025LL;
  *((value *) $y_850 + 0LL) = $y_849;
  $y_851 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_851 + -1LL) = 1025LL;
  *((value *) $y_851 + 0LL) = $y_850;
  $y_852 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_852 + -1LL) = 1024LL;
  *((value *) $y_852 + 0LL) = $y_851;
  $y_853 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_853 + -1LL) = 1024LL;
  *((value *) $y_853 + 0LL) = $y_852;
  $CertiDDdOSdRegistersdNdCmd_854 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdCmd_854 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdCmd_854 + 0LL) = $y_853;
  $y_855 = 1LL;
  $y_856 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_856 + -1LL) = 1025LL;
  *((value *) $y_856 + 0LL) = $y_855;
  $y_857 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_857 + -1LL) = 1025LL;
  *((value *) $y_857 + 0LL) = $y_856;
  $y_858 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_858 + -1LL) = 1025LL;
  *((value *) $y_858 + 0LL) = $y_857;
  $y_859 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_859 + -1LL) = 1025LL;
  *((value *) $y_859 + 0LL) = $y_858;
  $y_860 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_860 + -1LL) = 1024LL;
  *((value *) $y_860 + 0LL) = $y_859;
  $y_861 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_861 + -1LL) = 1025LL;
  *((value *) $y_861 + 0LL) = $y_860;
  $CertiDDdOSdRegistersdNdData2_862 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdData2_862 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdData2_862 + 0LL) = $y_861;
  $y_863 = 1LL;
  $y_864 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_864 + -1LL) = 1024LL;
  *((value *) $y_864 + 0LL) = $y_863;
  $y_865 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_865 + -1LL) = 1025LL;
  *((value *) $y_865 + 0LL) = $y_864;
  $y_866 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_866 + -1LL) = 1025LL;
  *((value *) $y_866 + 0LL) = $y_865;
  $y_867 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_867 + -1LL) = 1025LL;
  *((value *) $y_867 + 0LL) = $y_866;
  $y_868 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_868 + -1LL) = 1025LL;
  *((value *) $y_868 + 0LL) = $y_867;
  $y_869 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_869 + -1LL) = 1024LL;
  *((value *) $y_869 + 0LL) = $y_868;
  $CertiDDdOSdRegistersdNdPc_spk_870 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdPc_spk_870 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdPc_spk_870 + 0LL) = $y_869;
  $env_871 = (value) ($alloc + 1LL);
  $alloc = $alloc + 6LL;
  *((value *) $env_871 + -1LL) = 5120LL;
  *((value *) $env_871 + 0LL) = $y_837;
  *((value *) $env_871 + 1LL) = $CertiDDdOSdRegistersdNdsnd_command_846;
  *((value *) $env_871 + 2LL) = $CertiDDdOSdRegistersdNdCmd_854;
  *((value *) $env_871 + 3LL) = $CertiDDdOSdRegistersdNdData2_862;
  *((value *) $env_871 + 4LL) = $CertiDDdOSdRegistersdNdPc_spk_870;
  $y_872 = 1LL;
  $y_873 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_873 + -1LL) = 1025LL;
  *((value *) $y_873 + 0LL) = $y_872;
  $y_874 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_874 + -1LL) = 1025LL;
  *((value *) $y_874 + 0LL) = $y_873;
  $y_875 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_875 + -1LL) = 1024LL;
  *((value *) $y_875 + 0LL) = $y_874;
  $y_876 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_876 + -1LL) = 1025LL;
  *((value *) $y_876 + 0LL) = $y_875;
  $y_877 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_877 + -1LL) = 1025LL;
  *((value *) $y_877 + 0LL) = $y_876;
  $y_878 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_878 + -1LL) = 1025LL;
  *((value *) $y_878 + 0LL) = $y_877;
  $y_879 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_879 + -1LL) = 1024LL;
  *((value *) $y_879 + 0LL) = $y_878;
  $y_880 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_880 + -1LL) = 1024LL;
  *((value *) $y_880 + 0LL) = $y_879;
  $y_881 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_881 + -1LL) = 1025LL;
  *((value *) $y_881 + 0LL) = $y_880;
  $y_882 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_882 + -1LL) = 1024LL;
  *((value *) $y_882 + 0LL) = $y_881;
  $y_883 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_883 + -1LL) = 1025LL;
  *((value *) $y_883 + 0LL) = $y_882;
  $y_884 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_884 + -1LL) = 1025LL;
  *((value *) $y_884 + 0LL) = $y_883;
  $y_885 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_885 + -1LL) = 1024LL;
  *((value *) $y_885 + 0LL) = $y_884;
  $y_886 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_886 + -1LL) = 1024LL;
  *((value *) $y_886 + 0LL) = $y_885;
  $y_887 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_887 + -1LL) = 1025LL;
  *((value *) $y_887 + 0LL) = $y_886;
  $y_888 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_888 + -1LL) = 1024LL;
  *((value *) $y_888 + 0LL) = $y_887;
  $y_889 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_889 + -1LL) = 1024LL;
  *((value *) $y_889 + 0LL) = $y_888;
  $y_890 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_890 + -1LL) = 1024LL;
  *((value *) $y_890 + 0LL) = $y_889;
  $y_891 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_891 + -1LL) = 1024LL;
  *((value *) $y_891 + 0LL) = $y_890;
  $y_892 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_892 + -1LL) = 1025LL;
  *((value *) $y_892 + 0LL) = $y_891;
  $CertiDDdOSdPit_infodLinuxdNdTick_rate_893 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdPit_infodLinuxdNdTick_rate_893 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdPit_infodLinuxdNdTick_rate_893 + 0LL) = $y_892;
  $y_894 = 1LL;
  $y_895 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_895 + -1LL) = 1025LL;
  *((value *) $y_895 + 0LL) = $y_894;
  $y_896 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_896 + -1LL) = 1024LL;
  *((value *) $y_896 + 0LL) = $y_895;
  $y_897 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_897 + -1LL) = 1024LL;
  *((value *) $y_897 + 0LL) = $y_896;
  $y_898 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_898 + -1LL) = 1025LL;
  *((value *) $y_898 + 0LL) = $y_897;
  $CertiDDdOSdErrvaldeinval_899 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdErrvaldeinval_899 + -1LL) = 1025LL;
  *((value *) $CertiDDdOSdErrvaldeinval_899 + 0LL) = $y_898;
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_900 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_900
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_900
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_113;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_900
     + 1LL) =
    $env_871;
  $env_901 = (value) ($alloc + 1LL);
  $alloc = $alloc + 5LL;
  *((value *) $env_901 + -1LL) = 4096LL;
  *((value *) $env_901 + 0LL) = $y_837;
  *((value *) $env_901 + 1LL) =
    $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_900;
  *((value *) $env_901 + 2LL) = $CertiDDdOSdPit_infodLinuxdNdTick_rate_893;
  *((value *) $env_901 + 3LL) = $CertiDDdOSdErrvaldeinval_899;
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_902 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_902
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_902
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_135;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_902
     + 1LL) =
    $env_901;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_902;
}


#endif /* PCSPKR_EVT_LINUX_N_MINPRIMS_C */
