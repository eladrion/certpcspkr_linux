#ifndef PCSPKR_EVT_LINUX_N_C
#define PCSPKR_EVT_LINUX_N_C
#include <gc_stack.h>
#include "bitwise_ffi.h"
#include "arith_ffi.h"
#include "locking_ffi.h"
#include "regio_ffi.h"
#include "pcspkr_evt_linux.h"
extern struct thread_info *make_tinfo(void);
extern value f_case_known_131(struct thread_info *, value);
extern value f_case_known_130(struct thread_info *, value, value);
extern value f_case_known_129(struct thread_info *, value);
extern value f_case_known_128(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_127(struct thread_info *, value, value, value, value);
extern value y_wrapper_126(struct thread_info *, value, value);
extern value y_wrapper_125(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_124(struct thread_info *, value, value);
extern value f_case_known_123(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdltb_uncurried_known_122(struct thread_info *, value, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_121(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_120(struct thread_info *, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_119(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_118(struct thread_info *, value, value, value);
extern value y_wrapper_117(struct thread_info *, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_116(struct thread_info *, value, value);
extern value compare_cont_uncurried_uncurried_known_115(struct thread_info *, value, value, value);
extern value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_114(struct thread_info *, value, value, value);
extern value CoqdZArithdBinIntDefdZdeqb_uncurried_known_113(struct thread_info *, value, value);
extern value CoqdNArithdBinNatDefdNdeqb_uncurried_known_112(struct thread_info *, value, value);
extern value eqb_uncurried_known_111(struct thread_info *, value, value);
extern value body(struct thread_info *);
value f_case_known_131(struct thread_info *, value);
value f_case_known_130(struct thread_info *, value, value);
value f_case_known_129(struct thread_info *, value);
value f_case_known_128(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_127(struct thread_info *, value, value, value, value);
value y_wrapper_126(struct thread_info *, value, value);
value y_wrapper_125(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_124(struct thread_info *, value, value);
value f_case_known_123(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdltb_uncurried_known_122(struct thread_info *, value, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_121(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_120(struct thread_info *, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_119(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_118(struct thread_info *, value, value, value);
value y_wrapper_117(struct thread_info *, value, value);
value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_116(struct thread_info *, value, value);
value compare_cont_uncurried_uncurried_known_115(struct thread_info *, value, value, value);
value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_114(struct thread_info *, value, value, value);
value CoqdZArithdBinIntDefdZdeqb_uncurried_known_113(struct thread_info *, value, value);
value CoqdNArithdBinNatDefdNdeqb_uncurried_known_112(struct thread_info *, value, value);
value eqb_uncurried_known_111(struct thread_info *, value, value);
value body(struct thread_info *);
unsigned long long const body_info_589[2] = { 126LL, 0LL, };

unsigned long long const eqb_uncurried_known_info_588[4] = { 0LL, 2LL, 0LL,
  1LL, };

unsigned long long const CoqdNArithdBinNatDefdNdeqb_uncurried_known_info_587[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdeqb_uncurried_known_info_586[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_info_585[5] = {
  2LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const compare_cont_uncurried_uncurried_known_info_584[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_info_583[4] = {
  9LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_582[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_info_581[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_info_580[4] = {
  2LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_info_579[3] = {
  16LL, 1LL, 0LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_info_578[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZdltb_uncurried_known_info_577[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const f_case_known_info_576[5] = { 0LL, 3LL, 0LL, 1LL,
  2LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_info_575[4] = {
  9LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_574[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_573[4] = { 7LL, 2LL, 0LL, 1LL, };

unsigned long long const CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_info_572[6] = {
  10LL, 4LL, 0LL, 1LL, 2LL, 3LL, };

unsigned long long const f_case_known_info_571[4] = { 4LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_570[3] = { 0LL, 1LL, 0LL, };

unsigned long long const f_case_known_info_569[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_568[3] = { 2LL, 1LL, 0LL, };

value f_case_known_131(struct thread_info *$tinfo, value $s_497)
{
  struct stack_frame frame;
  value root[1];
  register value $y_498;
  register value $p_499;
  register value $y_500;
  register value $y_501;
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
    *(root + 0LL) = $s_497;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $s_497 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_497 & 1) == 0) {
    switch (*((value *) $s_497 + -1LL) & 255LL) {
      case 0:
        $p_499 = *((value *) $s_497 + 0LL);
        $y_500 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_500 + -1LL) = 1024LL;
        *((value *) $y_500 + 0LL) = $p_499;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_500;
        break;
      default:
        $y_501 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_501;
        break;

    }
  } else {
    switch ($s_497 >> 1LL) {
      default:
        $y_498 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_498;
        break;

    }
  }
}

value f_case_known_130(struct thread_info *$tinfo, value $s_493, value $y_494)
{
  struct stack_frame frame;
  value root[2];
  register value $y_495;
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
  if (($s_493 & 1) == 0) {
    switch (*((value *) $s_493 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_493 >> 1LL) {
      case 0:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_494;
        break;
      default:
        $y_495 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_495;
        break;

    }
  }
}

value f_case_known_129(struct thread_info *$tinfo, value $s_488)
{
  struct stack_frame frame;
  value root[1];
  register value $y_489;
  register value $y_490;
  register value $y_491;
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
  if (($s_488 & 1) == 0) {
    switch (*((value *) $s_488 + -1LL) & 255LL) {
      case 0:
        $y_490 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_490;
        break;
      default:
        $y_491 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_491;
        break;

    }
  } else {
    switch ($s_488 >> 1LL) {
      default:
        $y_489 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_489;
        break;

    }
  }
}

value f_case_known_128(struct thread_info *$tinfo, value $s_475, value $code_476)
{
  struct stack_frame frame;
  value root[2];
  register value $y_477;
  register value $y_478;
  register value $y_479;
  register value $y_480;
  register value $y_481;
  register value $y_483;
  register value $y_484;
  register value $y_485;
  register value $y_486;
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
    *(root + 1LL) = $code_476;
    *(root + 0LL) = $s_475;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $code_476 = *(root + 1LL);
    $s_475 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_475 & 1) == 0) {
    switch (*((value *) $s_475 + -1LL) & 255LL) {

    }
  } else {
    switch ($s_475 >> 1LL) {
      case 0:
        $y_477 = 1LL;
        $y_478 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_478 + -1LL) = 1024LL;
        *((value *) $y_478 + 0LL) = $y_477;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_478;
        break;
      default:
        $y_479 = 1LL;
        $y_480 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_480 + -1LL) = 1025LL;
        *((value *) $y_480 + 0LL) = $y_479;
        $y_481 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_481 + -1LL) = 1024LL;
        *((value *) $y_481 + 0LL) = $y_480;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_483 =
          ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdeqb_uncurried_known_112)
          ($tinfo, $y_481, $code_476);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_483;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_483 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        if (($y_483 & 1) == 0) {
          switch (*((value *) $y_483 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_483 >> 1LL) {
            case 0:
              $y_484 = 3LL;
              $y_485 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_485 + -1LL) = 1024LL;
              *((value *) $y_485 + 0LL) = $y_484;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_485;
              break;
            default:
              $y_486 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_486;
              break;

          }
        }
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_127(struct thread_info *$tinfo, value $env_352, value $val_353, value $code_354, value $type_355)
{
  struct stack_frame frame;
  value root[4];
  register value $y_356;
  register value $y_357;
  register value $y_358;
  register value $y_359;
  register value $y_360;
  register value $y_361;
  register value $y_363;
  register value $y_365;
  register value $y_366;
  register value $y_368;
  register value $snd_type_369;
  register value $s_370;
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
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_387;
  register value $y_388;
  register value $y_389;
  register value $y_390;
  register value $y_391;
  register value $y_392;
  register value $y_393;
  register value $y_394;
  register value $y_395;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_397;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_398;
  register value $y_399;
  register value $y_400;
  register value $y_401;
  register value $y_402;
  register value $y_403;
  register value $y_404;
  register value $y_proj_406;
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
  register value $y_proj_425;
  register value $y_426;
  register value $y_428;
  register value $y_430;
  register value $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_431;
  register value $prim_432;
  register value $y_433;
  register value $y_434;
  register value $y_435;
  register value $y_436;
  register value $y_437;
  register value $y_438;
  register value $y_439;
  register value $y_440;
  register value $y_441;
  register value $prim_442;
  register value $y_443;
  register value $y_444;
  register value $y_445;
  register value $y_446;
  register value $y_447;
  register value $prim_448;
  register value $y_449;
  register value $y_450;
  register value $y_451;
  register value $y_452;
  register value $y_453;
  register value $y_454;
  register value $y_455;
  register value $y_456;
  register value $y_457;
  register value $prim_458;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_460;
  register value $y_461;
  register value $y_462;
  register value $y_463;
  register value $y_464;
  register value $y_465;
  register value $y_466;
  register value $y_467;
  register value $y_468;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_470;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_471;
  register value $CertiDDdOSdErrvaldeinval_proj_472;
  register value $CertiDDdOSdErrvaldeinval_proj_473;
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
    *(root + 3LL) = $type_355;
    *(root + 2LL) = $code_354;
    *(root + 1LL) = $val_353;
    *(root + 0LL) = $env_352;
    frame.next = root + 4LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 10LL;
    garbage_collect($tinfo);
    $type_355 = *(root + 3LL);
    $code_354 = *(root + 2LL);
    $val_353 = *(root + 1LL);
    $env_352 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_356 = 1LL;
  $y_357 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_357 + -1LL) = 1025LL;
  *((value *) $y_357 + 0LL) = $y_356;
  $y_358 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_358 + -1LL) = 1025LL;
  *((value *) $y_358 + 0LL) = $y_357;
  $y_359 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_359 + -1LL) = 1024LL;
  *((value *) $y_359 + 0LL) = $y_358;
  $y_360 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_360 + -1LL) = 1025LL;
  *((value *) $y_360 + 0LL) = $y_359;
  $y_361 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_361 + -1LL) = 1024LL;
  *((value *) $y_361 + 0LL) = $y_360;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $code_354;
  *(root + 1LL) = $val_353;
  *(root + 0LL) = $env_352;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_363 =
    ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdeqb_uncurried_known_112)
    ($tinfo, $y_361, $type_355);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_363;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_363 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $code_354 = *(root + 2LL);
  $val_353 = *(root + 1LL);
  $env_352 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_363 & 1) == 0) {
    switch (*((value *) $y_363 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_363 >> 1LL) {
      case 0:
        $y_365 = 1LL;
        $y_366 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_366 + -1LL) = 1024LL;
        *((value *) $y_366 + 0LL) = $y_365;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 2LL) = $code_354;
        *(root + 1LL) = $val_353;
        *(root + 0LL) = $env_352;
        frame.next = root + 3LL;
        (*$tinfo).fp = &frame;
        $y_368 =
          ((value (*)(struct thread_info *, value, value)) CoqdNArithdBinNatDefdNdeqb_uncurried_known_112)
          ($tinfo, $y_366, $code_354);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $code_354 = *(root + 2LL);
        $val_353 = *(root + 1LL);
        $env_352 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $val_353;
        *(root + 0LL) = $env_352;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $snd_type_369 =
          ((value (*)(struct thread_info *, value, value)) f_case_known_128)
          ($tinfo, $y_368, $code_354);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(10LL <= $limit - $alloc)) {
          *(root + 2LL) = $snd_type_369;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 10LL;
          garbage_collect($tinfo);
          $snd_type_369 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $val_353 = *(root + 1LL);
        $env_352 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($snd_type_369 & 1) == 0) {
          switch (*((value *) $snd_type_369 + -1LL) & 255LL) {
            default:
              $s_370 = *((value *) $snd_type_369 + 0LL);
              if (($s_370 & 1) == 0) {
                switch (*((value *) $s_370 + -1LL) & 255LL) {

                }
              } else {
                switch ($s_370 >> 1LL) {
                  case 0:
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_352;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $y_372 =
                      ((value (*)(struct thread_info *, value)) f_case_known_129)
                      ($tinfo, $val_353);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(22LL <= $limit - $alloc)) {
                      *(root + 1LL) = $y_372;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 22LL;
                      garbage_collect($tinfo);
                      $y_372 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $env_352 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    if (($y_372 & 1) == 0) {
                      switch (*((value *) $y_372 + -1LL) & 255LL) {

                      }
                    } else {
                      switch ($y_372 >> 1LL) {
                        case 0:
                          $y_373 = 1LL;
                          $y_374 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_374 + -1LL) = 1025LL;
                          *((value *) $y_374 + 0LL) = $y_373;
                          $y_375 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_375 + -1LL) = 1024LL;
                          *((value *) $y_375 + 0LL) = $y_374;
                          $y_376 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_376 + -1LL) = 1025LL;
                          *((value *) $y_376 + 0LL) = $y_375;
                          $y_377 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_377 + -1LL) = 1024LL;
                          *((value *) $y_377 + 0LL) = $y_376;
                          $y_378 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_378 + -1LL) = 1025LL;
                          *((value *) $y_378 + 0LL) = $y_377;
                          $y_379 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_379 + -1LL) = 1025LL;
                          *((value *) $y_379 + 0LL) = $y_378;
                          $y_380 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_380 + -1LL) = 1024LL;
                          *((value *) $y_380 + 0LL) = $y_379;
                          $y_381 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_381 + -1LL) = 1024LL;
                          *((value *) $y_381 + 0LL) = $y_380;
                          $y_382 = 1LL;
                          $y_383 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_383 + -1LL) = 1025LL;
                          *((value *) $y_383 + 0LL) = $y_382;
                          $y_384 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_384 + -1LL) = 1025LL;
                          *((value *) $y_384 + 0LL) = $y_383;
                          $y_385 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_385 + -1LL) = 1024LL;
                          *((value *) $y_385 + 0LL) = $y_384;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_387 =
                            *((value *) $env_352 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_114)
                            ($tinfo, $y_385, $y_381,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_387);
                          return $result;
                          break;
                        default:
                          $y_388 = 1LL;
                          $y_389 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_389 + -1LL) = 1024LL;
                          *((value *) $y_389 + 0LL) = $y_388;
                          $y_390 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_390 + -1LL) = 1025LL;
                          *((value *) $y_390 + 0LL) = $y_389;
                          $y_391 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_391 + -1LL) = 1025LL;
                          *((value *) $y_391 + 0LL) = $y_390;
                          $y_392 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_392 + -1LL) = 1025LL;
                          *((value *) $y_392 + 0LL) = $y_391;
                          $y_393 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_393 + -1LL) = 1025LL;
                          *((value *) $y_393 + 0LL) = $y_392;
                          $y_394 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_394 + -1LL) = 1024LL;
                          *((value *) $y_394 + 0LL) = $y_393;
                          $y_395 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_395 + -1LL) = 1024LL;
                          *((value *) $y_395 + 0LL) = $y_394;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_397 =
                            1LL;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_398 =
                            (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_398
                             + -1LL) =
                            2048LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_398
                             + 0LL) =
                            CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_121;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_398
                             + 1LL) =
                            $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_397;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_119)
                            ($tinfo, $y_395,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_398);
                          return $result;
                          break;

                      }
                    }
                    break;
                  default:
                    $y_399 = 1LL;
                    $y_400 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_400 + -1LL) = 1025LL;
                    *((value *) $y_400 + 0LL) = $y_399;
                    $y_401 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_401 + -1LL) = 1024LL;
                    *((value *) $y_401 + 0LL) = $y_400;
                    $y_402 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_402 + -1LL) = 1025LL;
                    *((value *) $y_402 + 0LL) = $y_401;
                    $y_403 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_403 + -1LL) = 1025LL;
                    *((value *) $y_403 + 0LL) = $y_402;
                    $y_404 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_404 + -1LL) = 1024LL;
                    *((value *) $y_404 + 0LL) = $y_403;
                    $y_proj_406 = *((value *) $env_352 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $val_353;
                    *(root + 0LL) = $env_352;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_407 =
                      ((value (*)(struct thread_info *, value, value, value))
                        CoqdZArithdBinIntDefdZdltb_uncurried_known_122)
                      ($tinfo, $val_353, $y_404, $y_proj_406);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(30LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_407;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 30LL;
                      garbage_collect($tinfo);
                      $y_407 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $val_353 = *(root + 1LL);
                    $env_352 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_408 = 1LL;
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
                    $y_proj_425 = *((value *) $env_352 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 2LL) = $y_407;
                    *(root + 1LL) = $val_353;
                    *(root + 0LL) = $env_352;
                    frame.next = root + 3LL;
                    (*$tinfo).fp = &frame;
                    $y_426 =
                      ((value (*)(struct thread_info *, value, value, value))
                        CoqdZArithdBinIntDefdZdltb_uncurried_known_122)
                      ($tinfo, $y_423, $val_353, $y_proj_425);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $y_407 = *(root + 2LL);
                    $val_353 = *(root + 1LL);
                    $env_352 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 1LL) = $val_353;
                    *(root + 0LL) = $env_352;
                    frame.next = root + 2LL;
                    (*$tinfo).fp = &frame;
                    $y_428 =
                      ((value (*)(struct thread_info *, value, value))
                        f_case_known_130)
                      ($tinfo, $y_407, $y_426);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(17LL <= $limit - $alloc)) {
                      *(root + 2LL) = $y_428;
                      frame.next = root + 3LL;
                      (*$tinfo).nalloc = 17LL;
                      garbage_collect($tinfo);
                      $y_428 = *(root + 2LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $val_353 = *(root + 1LL);
                    $env_352 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    if (($y_428 & 1) == 0) {
                      switch (*((value *) $y_428 + -1LL) & 255LL) {

                      }
                    } else {
                      switch ($y_428 >> 1LL) {
                        case 0:
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_352;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $y_430 =
                            ((value (*)(struct thread_info *, value))
                              f_case_known_131)
                            ($tinfo, $val_353);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(40LL <= $limit - $alloc)) {
                            *(root + 1LL) = $y_430;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 40LL;
                            garbage_collect($tinfo);
                            $y_430 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $env_352 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_431 =
                            *((value *) $env_352 + 2LL);
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 0LL) = $env_352;
                          frame.next = root + 1LL;
                          (*$tinfo).fp = &frame;
                          $prim_432 =
                            ((value (*)(struct thread_info *, value, value))
                              div)
                            ($tinfo,
                             $CertiDDdOSdPit_infodLinuxdNdTick_rate_proj_431,
                             $y_430);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(40LL <= $limit - $alloc)) {
                            *(root + 1LL) = $prim_432;
                            frame.next = root + 2LL;
                            (*$tinfo).nalloc = 40LL;
                            garbage_collect($tinfo);
                            $prim_432 = *(root + 1LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $env_352 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_433 = 1LL;
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
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $prim_432;
                          *(root + 0LL) = $env_352;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $prim_442 =
                            ((value (*)(struct thread_info *, value, value))
                              land)
                            ($tinfo, $prim_432, $y_441);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(24LL <= $limit - $alloc)) {
                            *(root + 2LL) = $prim_442;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 24LL;
                            garbage_collect($tinfo);
                            $prim_442 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $prim_432 = *(root + 1LL);
                          $env_352 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_443 = 1LL;
                          $y_444 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_444 + -1LL) = 1025LL;
                          *((value *) $y_444 + 0LL) = $y_443;
                          $y_445 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_445 + -1LL) = 1025LL;
                          *((value *) $y_445 + 0LL) = $y_444;
                          $y_446 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_446 + -1LL) = 1025LL;
                          *((value *) $y_446 + 0LL) = $y_445;
                          $y_447 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_447 + -1LL) = 1024LL;
                          *((value *) $y_447 + 0LL) = $y_446;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $prim_442;
                          *(root + 0LL) = $env_352;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $prim_448 =
                            ((value (*)(struct thread_info *, value, value))
                              shiftr)
                            ($tinfo, $prim_432, $y_447);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          if (!(16LL <= $limit - $alloc)) {
                            *(root + 2LL) = $prim_448;
                            frame.next = root + 3LL;
                            (*$tinfo).nalloc = 16LL;
                            garbage_collect($tinfo);
                            $prim_448 = *(root + 2LL);
                            $alloc = (*$tinfo).alloc;
                            $limit = (*$tinfo).limit;
                          }
                          $prim_442 = *(root + 1LL);
                          $env_352 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $y_449 = 1LL;
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
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          *(root + 1LL) = $prim_442;
                          *(root + 0LL) = $env_352;
                          frame.next = root + 2LL;
                          (*$tinfo).fp = &frame;
                          $prim_458 =
                            ((value (*)(struct thread_info *, value, value))
                              land)
                            ($tinfo, $prim_448, $y_457);
                          $alloc = (*$tinfo).alloc;
                          $limit = (*$tinfo).limit;
                          $prim_442 = *(root + 1LL);
                          $env_352 = *(root + 0LL);
                          (*$tinfo).fp = frame.prev;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_460 =
                            *((value *) $env_352 + 1LL);
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_114)
                            ($tinfo, $prim_458, $prim_442,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_proj_460);
                          return $result;
                          break;
                        default:
                          $y_461 = 1LL;
                          $y_462 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_462 + -1LL) = 1024LL;
                          *((value *) $y_462 + 0LL) = $y_461;
                          $y_463 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_463 + -1LL) = 1025LL;
                          *((value *) $y_463 + 0LL) = $y_462;
                          $y_464 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_464 + -1LL) = 1025LL;
                          *((value *) $y_464 + 0LL) = $y_463;
                          $y_465 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_465 + -1LL) = 1025LL;
                          *((value *) $y_465 + 0LL) = $y_464;
                          $y_466 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_466 + -1LL) = 1025LL;
                          *((value *) $y_466 + 0LL) = $y_465;
                          $y_467 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_467 + -1LL) = 1024LL;
                          *((value *) $y_467 + 0LL) = $y_466;
                          $y_468 = (value) ($alloc + 1LL);
                          $alloc = $alloc + 2LL;
                          *((value *) $y_468 + -1LL) = 1024LL;
                          *((value *) $y_468 + 0LL) = $y_467;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_470 =
                            1LL;
                          $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_471 =
                            (value) ($alloc + 1LL);
                          $alloc = $alloc + 3LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_471
                             + -1LL) =
                            2048LL;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_471
                             + 0LL) =
                            CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_121;
                          *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_471
                             + 1LL) =
                            $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapperbogus_env_470;
                          $args = (*$tinfo).args;
                          (*$tinfo).alloc = $alloc;
                          (*$tinfo).limit = $limit;
                          $result =
                            ((value (*)(struct thread_info *, value, value))
                              CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_119)
                            ($tinfo, $y_468,
                             $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_clo_471);
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
          switch ($snd_type_369 >> 1LL) {
            default:
              $CertiDDdOSdErrvaldeinval_proj_472 =
                *((value *) $env_352 + 3LL);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $CertiDDdOSdErrvaldeinval_proj_472;
              break;

          }
        }
        break;
      default:
        $CertiDDdOSdErrvaldeinval_proj_473 = *((value *) $env_352 + 3LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $CertiDDdOSdErrvaldeinval_proj_473;
        break;

    }
  }
}

value y_wrapper_126(struct thread_info *$tinfo, value $env_346, value $code_347)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_348;
  register value $type_proj_349;
  register value $env_350;
  register value $y_wrapper_clo_351;
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
    *(root + 1LL) = $code_347;
    *(root + 0LL) = $env_346;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 7LL;
    garbage_collect($tinfo);
    $code_347 = *(root + 1LL);
    $env_346 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_348 =
    *((value *) $env_346 + 0LL);
  $type_proj_349 = *((value *) $env_346 + 1LL);
  $env_350 = (value) ($alloc + 1LL);
  $alloc = $alloc + 4LL;
  *((value *) $env_350 + -1LL) = 3072LL;
  *((value *) $env_350 + 0LL) = $code_347;
  *((value *) $env_350 + 1LL) = $type_proj_349;
  *((value *) $env_350 + 2LL) =
    $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_348;
  $y_wrapper_clo_351 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_351 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_351 + 0LL) = y_wrapper_125;
  *((value *) $y_wrapper_clo_351 + 1LL) = $env_350;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_351;
}

value y_wrapper_125(struct thread_info *$tinfo, value $env_339, value $val_340)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_341;
  register value $type_proj_342;
  register value $code_proj_343;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_code_344;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_env_345;
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
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_341 =
    *((value *) $env_339 + 2LL);
  $type_proj_342 = *((value *) $env_339 + 1LL);
  $code_proj_343 = *((value *) $env_339 + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_code_344 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_341
       + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_env_345 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_proj_341
       + 1LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value, value, value)) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_code_344)
    ($tinfo,
     $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_env_345,
     $val_340, $code_proj_343, $type_proj_342);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_124(struct thread_info *$tinfo, value $env_334, value $type_335)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_336;
  register value $env_337;
  register value $y_wrapper_clo_338;
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
    *(root + 1LL) = $type_335;
    *(root + 0LL) = $env_334;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 9LL;
    garbage_collect($tinfo);
    $type_335 = *(root + 1LL);
    $env_334 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_336 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_336
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_336
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_127;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_336
     + 1LL) =
    $env_334;
  $env_337 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $env_337 + -1LL) = 2048LL;
  *((value *) $env_337 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_uncurried_uncurried_clo_336;
  *((value *) $env_337 + 1LL) = $type_335;
  $y_wrapper_clo_338 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_338 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_338 + 0LL) = y_wrapper_126;
  *((value *) $y_wrapper_clo_338 + 1LL) = $env_337;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_338;
}

value f_case_known_123(struct thread_info *$tinfo, value $s_314, value $y_315, value $y_316)
{
  struct stack_frame frame;
  value root[3];
  register value $y_317;
  register value $y_318;
  register value $y_319;
  register value $xp_320;
  register value $y_321;
  register value $yp_322;
  register value $y_324;
  register value $xp_325;
  register value $y_326;
  register value $y_327;
  register value $yp_328;
  register value $y_330;
  register value $y_331;
  register value $y_332;
  register value $y_333;
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
  if (($s_314 & 1) == 0) {
    switch (*((value *) $s_314 + -1LL) & 255LL) {
      case 0:
        $xp_320 = *((value *) $s_314 + 0LL);
        if (($y_316 & 1) == 0) {
          switch (*((value *) $y_316 + -1LL) & 255LL) {
            case 0:
              $yp_322 = *((value *) $y_316 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_115)
                ($tinfo, $yp_322, $xp_320, $y_315);
              return $result;
              break;
            default:
              $y_324 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_324;
              break;

          }
        } else {
          switch ($y_316 >> 1LL) {
            default:
              $y_321 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_321;
              break;

          }
        }
        break;
      default:
        $xp_325 = *((value *) $s_314 + 0LL);
        if (($y_316 & 1) == 0) {
          switch (*((value *) $y_316 + -1LL) & 255LL) {
            case 0:
              $y_327 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_327;
              break;
            default:
              $yp_328 = *((value *) $y_316 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_330 =
                ((value (*)(struct thread_info *, value, value, value))
                  compare_cont_uncurried_uncurried_known_115)
                ($tinfo, $yp_328, $xp_325, $y_315);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              if (($y_330 & 1) == 0) {
                switch (*((value *) $y_330 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_330 >> 1LL) {
                  case 0:
                    $y_331 = 1LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_331;
                    break;
                  case 1:
                    $y_332 = 5LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_332;
                    break;
                  default:
                    $y_333 = 3LL;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_333;
                    break;

                }
              }
              break;

          }
        } else {
          switch ($y_316 >> 1LL) {
            default:
              $y_326 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_326;
              break;

          }
        }
        break;

    }
  } else {
    switch ($s_314 >> 1LL) {
      default:
        if (($y_316 & 1) == 0) {
          switch (*((value *) $y_316 + -1LL) & 255LL) {
            case 0:
              $y_318 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_318;
              break;
            default:
              $y_319 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_319;
              break;

          }
        } else {
          switch ($y_316 >> 1LL) {
            default:
              $y_317 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_317;
              break;

          }
        }
        break;

    }
  }
}

value CoqdZArithdBinIntDefdZdltb_uncurried_known_122(struct thread_info *$tinfo, value $y_305, value $x_306, value $y_307)
{
  struct stack_frame frame;
  value root[3];
  register value $y_309;
  register value $y_310;
  register value $y_311;
  register value $y_312;
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
  $y_309 =
    ((value (*)(struct thread_info *, value, value, value)) f_case_known_123)
    ($tinfo, $x_306, $y_307, $y_305);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  if (($y_309 & 1) == 0) {
    switch (*((value *) $y_309 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_309 >> 1LL) {
      case 0:
        $y_310 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_310;
        break;
      case 1:
        $y_311 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_311;
        break;
      default:
        $y_312 = 3LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_312;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_wrapper_121(struct thread_info *$tinfo, value $env_301, value $reg_id_302)
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
    ((value (*)(struct thread_info *, value)) CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_120)
    ($tinfo, $reg_id_302);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNddisable_sound_known_120(struct thread_info *$tinfo, value $reg_id_288)
{
  struct stack_frame frame;
  value root[2];
  register value $prim_289;
  register value $y_290;
  register value $y_291;
  register value $y_292;
  register value $y_293;
  register value $y_294;
  register value $y_295;
  register value $y_296;
  register value $y_297;
  register value $y_298;
  register value $prim_299;
  register value $prim_300;
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
    *(root + 0LL) = $reg_id_288;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 16LL;
    garbage_collect($tinfo);
    $reg_id_288 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $reg_id_288;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $prim_289 =
    ((value (*)(struct thread_info *, value)) in8_p)
    ($tinfo, $reg_id_288);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(16LL <= $limit - $alloc)) {
    *(root + 1LL) = $prim_289;
    frame.next = root + 2LL;
    (*$tinfo).nalloc = 16LL;
    garbage_collect($tinfo);
    $prim_289 = *(root + 1LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $reg_id_288 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_290 = 1LL;
  $y_291 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_291 + -1LL) = 1024LL;
  *((value *) $y_291 + 0LL) = $y_290;
  $y_292 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_292 + -1LL) = 1024LL;
  *((value *) $y_292 + 0LL) = $y_291;
  $y_293 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_293 + -1LL) = 1024LL;
  *((value *) $y_293 + 0LL) = $y_292;
  $y_294 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_294 + -1LL) = 1024LL;
  *((value *) $y_294 + 0LL) = $y_293;
  $y_295 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_295 + -1LL) = 1024LL;
  *((value *) $y_295 + 0LL) = $y_294;
  $y_296 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_296 + -1LL) = 1025LL;
  *((value *) $y_296 + 0LL) = $y_295;
  $y_297 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_297 + -1LL) = 1025LL;
  *((value *) $y_297 + 0LL) = $y_296;
  $y_298 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_298 + -1LL) = 1024LL;
  *((value *) $y_298 + 0LL) = $y_297;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $reg_id_288;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $prim_299 =
    ((value (*)(struct thread_info *, value, value)) land)
    ($tinfo, $prim_289, $y_298);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $reg_id_288 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  $prim_300 =
    ((value (*)(struct thread_info *, value, value)) out8)
    ($tinfo, $prim_299, $reg_id_288);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  /*skip*/;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $prim_300;
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_Z_uncurried_known_119(struct thread_info *$tinfo, value $a_262, value $func_263)
{
  struct stack_frame frame;
  value root[3];
  register value $y_264;
  register value $y_265;
  register value $prim_266;
  register value $y_267;
  register value $y_269;
  register value $func_code_270;
  register value $func_env_271;
  register value $result_272;
  register value $y_273;
  register value $y_275;
  register value $y_276;
  register value $prim_277;
  register value $y_278;
  register value $prim_279;
  register value $y_280;
  register value $y_282;
  register value $y_283;
  register value $y_284;
  register value $y_285;
  register value $y_286;
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
    *(root + 1LL) = $func_263;
    *(root + 0LL) = $a_262;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $func_263 = *(root + 1LL);
    $a_262 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_264 = 1LL;
  $y_265 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_265 + -1LL) = 1024LL;
  *((value *) $y_265 + 0LL) = $y_264;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $func_263;
  *(root + 0LL) = $a_262;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $prim_266 =
    ((value (*)(struct thread_info *, value)) spinlock)
    ($tinfo, $y_265);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $func_263 = *(root + 1LL);
  $a_262 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_267 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 1LL) = $func_263;
  *(root + 0LL) = $a_262;
  frame.next = root + 2LL;
  (*$tinfo).fp = &frame;
  $y_269 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
    ($tinfo, $y_267, $prim_266);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 2LL) = $y_269;
    frame.next = root + 3LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_269 = *(root + 2LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $func_263 = *(root + 1LL);
  $a_262 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_269 & 1) == 0) {
    switch (*((value *) $y_269 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_269 >> 1LL) {
      case 0:
        $func_code_270 = *((value *) $func_263 + 0LL);
        $func_env_271 = *((value *) $func_263 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $result_272 =
          ((value (*)(struct thread_info *, value, value)) $func_code_270)
          ($tinfo, $func_env_271, $a_262);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_273 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $result_272;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_275 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
          ($tinfo, $y_273, $result_272);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $result_272 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_275 & 1) == 0) {
          switch (*((value *) $y_275 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_275 >> 1LL) {
            case 0:
              $y_276 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $prim_277 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_276);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_277;
              break;
            default:
              $y_278 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_272;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_279 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_278);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $result_272 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_280 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_272;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_282 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
                ($tinfo, $y_280, $prim_279);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_282;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_282 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $result_272 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_282 & 1) == 0) {
                switch (*((value *) $y_282 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_282 >> 1LL) {
                  case 0:
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $result_272;
                    break;
                  default:
                    $y_283 = 1LL;
                    $y_284 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_284 + -1LL) = 1024LL;
                    *((value *) $y_284 + 0LL) = $y_283;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_284;
                    break;

                }
              }
              break;

          }
        }
        break;
      default:
        $y_285 = 1LL;
        $y_286 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_286 + -1LL) = 1024LL;
        *((value *) $y_286 + 0LL) = $y_285;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_286;
        break;

    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_118(struct thread_info *$tinfo, value $env_228, value $prev_byte_229, value $last_byte_230)
{
  struct stack_frame frame;
  value root[4];
  register value $CertiDDdOSdRegistersdNdsnd_command_proj_231;
  register value $CertiDDdOSdRegistersdNdCmd_proj_232;
  register value $prim_233;
  register value $y_234;
  register value $y_236;
  register value $CertiDDdOSdRegistersdNdData2_proj_237;
  register value $prim_238;
  register value $y_239;
  register value $y_241;
  register value $CertiDDdOSdRegistersdNdData2_proj_242;
  register value $prim_243;
  register value $y_244;
  register value $y_246;
  register value $CertiDDdOSdRegistersdNdPc_spk_proj_247;
  register value $prim_248;
  register value $y_249;
  register value $y_250;
  register value $y_251;
  register value $prim_252;
  register value $CertiDDdOSdRegistersdNdPc_spk_proj_253;
  register value $prim_254;
  register value $y_255;
  register value $y_256;
  register value $y_257;
  register value $y_258;
  register value $y_259;
  register value $y_260;
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
  $CertiDDdOSdRegistersdNdsnd_command_proj_231 = *((value *) $env_228 + 0LL);
  $CertiDDdOSdRegistersdNdCmd_proj_232 = *((value *) $env_228 + 1LL);
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $last_byte_230;
  *(root + 1LL) = $prev_byte_229;
  *(root + 0LL) = $env_228;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $prim_233 =
    ((value (*)(struct thread_info *, value, value)) out8_p)
    ($tinfo, $CertiDDdOSdRegistersdNdsnd_command_proj_231,
     $CertiDDdOSdRegistersdNdCmd_proj_232);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $last_byte_230 = *(root + 2LL);
  $prev_byte_229 = *(root + 1LL);
  $env_228 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_234 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $last_byte_230;
  *(root + 1LL) = $prev_byte_229;
  *(root + 0LL) = $env_228;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_236 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
    ($tinfo, $y_234, $prim_233);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_236;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_236 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $last_byte_230 = *(root + 2LL);
  $prev_byte_229 = *(root + 1LL);
  $env_228 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_236 & 1) == 0) {
    switch (*((value *) $y_236 + -1LL) & 255LL) {

    }
  } else {
    switch ($y_236 >> 1LL) {
      case 0:
        $CertiDDdOSdRegistersdNdData2_proj_237 = *((value *) $env_228 + 2LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $prev_byte_229;
        *(root + 0LL) = $env_228;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $prim_238 =
          ((value (*)(struct thread_info *, value, value)) out8_p)
          ($tinfo, $last_byte_230, $CertiDDdOSdRegistersdNdData2_proj_237);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $prev_byte_229 = *(root + 1LL);
        $env_228 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_239 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $prev_byte_229;
        *(root + 0LL) = $env_228;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_241 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
          ($tinfo, $y_239, $prim_238);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_241;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_241 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $prev_byte_229 = *(root + 1LL);
        $env_228 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_241 & 1) == 0) {
          switch (*((value *) $y_241 + -1LL) & 255LL) {

          }
        } else {
          switch ($y_241 >> 1LL) {
            case 0:
              $CertiDDdOSdRegistersdNdData2_proj_242 =
                *((value *) $env_228 + 2LL);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_228;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_243 =
                ((value (*)(struct thread_info *, value, value)) out8)
                ($tinfo, $prev_byte_229,
                 $CertiDDdOSdRegistersdNdData2_proj_242);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $env_228 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_244 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_228;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_246 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
                ($tinfo, $y_244, $prim_243);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_246;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_246 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $env_228 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_246 & 1) == 0) {
                switch (*((value *) $y_246 + -1LL) & 255LL) {

                }
              } else {
                switch ($y_246 >> 1LL) {
                  case 0:
                    $CertiDDdOSdRegistersdNdPc_spk_proj_247 =
                      *((value *) $env_228 + 3LL);
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_228;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $prim_248 =
                      ((value (*)(struct thread_info *, value)) in8_p)
                      ($tinfo, $CertiDDdOSdRegistersdNdPc_spk_proj_247);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(4LL <= $limit - $alloc)) {
                      *(root + 1LL) = $prim_248;
                      frame.next = root + 2LL;
                      (*$tinfo).nalloc = 4LL;
                      garbage_collect($tinfo);
                      $prim_248 = *(root + 1LL);
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    $env_228 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $y_249 = 1LL;
                    $y_250 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_250 + -1LL) = 1024LL;
                    *((value *) $y_250 + 0LL) = $y_249;
                    $y_251 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_251 + -1LL) = 1024LL;
                    *((value *) $y_251 + 0LL) = $y_250;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    *(root + 0LL) = $env_228;
                    frame.next = root + 1LL;
                    (*$tinfo).fp = &frame;
                    $prim_252 =
                      ((value (*)(struct thread_info *, value, value)) lor)
                      ($tinfo, $prim_248, $y_251);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    $env_228 = *(root + 0LL);
                    (*$tinfo).fp = frame.prev;
                    $CertiDDdOSdRegistersdNdPc_spk_proj_253 =
                      *((value *) $env_228 + 3LL);
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $prim_254 =
                      ((value (*)(struct thread_info *, value, value)) 
                        out8_p)
                      ($tinfo, $prim_252,
                       $CertiDDdOSdRegistersdNdPc_spk_proj_253);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    /*skip*/;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $prim_254;
                    break;
                  default:
                    $y_255 = 1LL;
                    $y_256 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_256 + -1LL) = 1024LL;
                    *((value *) $y_256 + 0LL) = $y_255;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_256;
                    break;
                  
                }
              }
              break;
            default:
              $y_257 = 1LL;
              $y_258 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_258 + -1LL) = 1024LL;
              *((value *) $y_258 + 0LL) = $y_257;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_258;
              break;
            
          }
        }
        break;
      default:
        $y_259 = 1LL;
        $y_260 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_260 + -1LL) = 1024LL;
        *((value *) $y_260 + 0LL) = $y_259;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_260;
        break;
      
    }
  }
}

value y_wrapper_117(struct thread_info *$tinfo, value $env_222, value $prev_byte_223)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_224;
  register value $last_byte_proj_225;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_code_226;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_env_227;
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
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_224 =
    *((value *) $env_222 + 0LL);
  $last_byte_proj_225 = *((value *) $env_222 + 1LL);
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_code_226 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_224
       + 0LL);
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_env_227 =
    *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_proj_224
       + 1LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value, value)) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_code_226)
    ($tinfo,
     $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_env_227,
     $prev_byte_223, $last_byte_proj_225);
  return $result;
}

value CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_116(struct thread_info *$tinfo, value $env_217, value $last_byte_218)
{
  struct stack_frame frame;
  value root[2];
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_219;
  register value $env_220;
  register value $y_wrapper_clo_221;
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
    *(root + 1LL) = $last_byte_218;
    *(root + 0LL) = $env_217;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 9LL;
    garbage_collect($tinfo);
    $last_byte_218 = *(root + 1LL);
    $env_217 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_219 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_219
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_219
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_118;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_219
     + 1LL) =
    $env_217;
  $env_220 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $env_220 + -1LL) = 2048LL;
  *((value *) $env_220 + 0LL) =
    $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_uncurried_clo_219;
  *((value *) $env_220 + 1LL) = $last_byte_218;
  $y_wrapper_clo_221 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_wrapper_clo_221 + -1LL) = 2048LL;
  *((value *) $y_wrapper_clo_221 + 0LL) = y_wrapper_117;
  *((value *) $y_wrapper_clo_221 + 1LL) = $env_220;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_wrapper_clo_221;
}

value compare_cont_uncurried_uncurried_known_115(struct thread_info *$tinfo, value $y_202, value $x_203, value $r_204)
{
  struct stack_frame frame;
  value root[3];
  register value $p_205;
  register value $q_206;
  register value $q_207;
  register value $y_208;
  register value $y_209;
  register value $p_210;
  register value $q_211;
  register value $y_212;
  register value $q_213;
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
  if (($x_203 & 1) == 0) {
    switch (*((value *) $x_203 + -1LL) & 255LL) {
      case 0:
        $p_205 = *((value *) $x_203 + 0LL);
        if (($y_202 & 1) == 0) {
          switch (*((value *) $y_202 + -1LL) & 255LL) {
            case 0:
              $q_206 = *((value *) $y_202 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value)) 
                  compare_cont_uncurried_uncurried_known_115)
                ($tinfo, $q_206, $p_205, $r_204);
              return $result;
              break;
            default:
              $q_207 = *((value *) $y_202 + 0LL);
              $y_208 = 5LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value)) 
                  compare_cont_uncurried_uncurried_known_115)
                ($tinfo, $q_207, $p_205, $y_208);
              return $result;
              break;
            
          }
        } else {
          switch ($y_202 >> 1LL) {
            default:
              $y_209 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_209;
              break;
            
          }
        }
        break;
      default:
        $p_210 = *((value *) $x_203 + 0LL);
        if (($y_202 & 1) == 0) {
          switch (*((value *) $y_202 + -1LL) & 255LL) {
            case 0:
              $q_211 = *((value *) $y_202 + 0LL);
              $y_212 = 3LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value)) 
                  compare_cont_uncurried_uncurried_known_115)
                ($tinfo, $q_211, $p_210, $y_212);
              return $result;
              break;
            default:
              $q_213 = *((value *) $y_202 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value, value)) 
                  compare_cont_uncurried_uncurried_known_115)
                ($tinfo, $q_213, $p_210, $r_204);
              return $result;
              break;
            
          }
        } else {
          switch ($y_202 >> 1LL) {
            default:
              $y_214 = 5LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_214;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($x_203 >> 1LL) {
      default:
        if (($y_202 & 1) == 0) {
          switch (*((value *) $y_202 + -1LL) & 255LL) {
            case 0:
              $y_215 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_215;
              break;
            default:
              $y_216 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_216;
              break;
            
          }
        } else {
          switch ($y_202 >> 1LL) {
            default:
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $r_204;
              break;
            
          }
        }
        break;
      
    }
  }
}

value CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdLinux_guard_N_N_Z_uncurried_uncurried_known_114(struct thread_info *$tinfo, value $b_172, value $a_173, value $func_174)
{
  struct stack_frame frame;
  value root[4];
  register value $y_175;
  register value $y_176;
  register value $prim_177;
  register value $y_178;
  register value $y_180;
  register value $func_code_181;
  register value $func_env_182;
  register value $y_183;
  register value $y_code_184;
  register value $y_env_185;
  register value $result_186;
  register value $y_187;
  register value $y_189;
  register value $y_190;
  register value $prim_191;
  register value $y_192;
  register value $prim_193;
  register value $y_194;
  register value $y_196;
  register value $y_197;
  register value $y_198;
  register value $y_199;
  register value $y_200;
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
    *(root + 2LL) = $func_174;
    *(root + 1LL) = $a_173;
    *(root + 0LL) = $b_172;
    frame.next = root + 3LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $func_174 = *(root + 2LL);
    $a_173 = *(root + 1LL);
    $b_172 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_175 = 1LL;
  $y_176 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_176 + -1LL) = 1024LL;
  *((value *) $y_176 + 0LL) = $y_175;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $func_174;
  *(root + 1LL) = $a_173;
  *(root + 0LL) = $b_172;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $prim_177 =
    ((value (*)(struct thread_info *, value)) spinlock)
    ($tinfo, $y_176);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $func_174 = *(root + 2LL);
  $a_173 = *(root + 1LL);
  $b_172 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_178 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $func_174;
  *(root + 1LL) = $a_173;
  *(root + 0LL) = $b_172;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_180 =
    ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
    ($tinfo, $y_178, $prim_177);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_180;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_180 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $func_174 = *(root + 2LL);
  $a_173 = *(root + 1LL);
  $b_172 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_180 & 1) == 0) {
    switch (*((value *) $y_180 + -1LL) & 255LL) {
      
    }
  } else {
    switch ($y_180 >> 1LL) {
      case 0:
        $func_code_181 = *((value *) $func_174 + 0LL);
        $func_env_182 = *((value *) $func_174 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $b_172;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_183 =
          ((value (*)(struct thread_info *, value, value)) $func_code_181)
          ($tinfo, $func_env_182, $a_173);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $b_172 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_184 = *((value *) $y_183 + 0LL);
        $y_env_185 = *((value *) $y_183 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $result_186 =
          ((value (*)(struct thread_info *, value, value)) $y_code_184)
          ($tinfo, $y_env_185, $b_172);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_187 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $result_186;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_189 =
          ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
          ($tinfo, $y_187, $result_186);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $result_186 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_189 & 1) == 0) {
          switch (*((value *) $y_189 + -1LL) & 255LL) {
            
          }
        } else {
          switch ($y_189 >> 1LL) {
            case 0:
              $y_190 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $prim_191 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_190);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_191;
              break;
            default:
              $y_192 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_186;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $prim_193 =
                ((value (*)(struct thread_info *, value)) spinlock)
                ($tinfo, $y_192);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $result_186 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              $y_194 = 1LL;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $result_186;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_196 =
                ((value (*)(struct thread_info *, value, value)) CoqdZArithdBinIntDefdZdeqb_uncurried_known_113)
                ($tinfo, $y_194, $prim_193);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 1LL) = $y_196;
                frame.next = root + 2LL;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_196 = *(root + 1LL);
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              $result_186 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_196 & 1) == 0) {
                switch (*((value *) $y_196 + -1LL) & 255LL) {
                  
                }
              } else {
                switch ($y_196 >> 1LL) {
                  case 0:
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $result_186;
                    break;
                  default:
                    $y_197 = 1LL;
                    $y_198 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_198 + -1LL) = 1024LL;
                    *((value *) $y_198 + 0LL) = $y_197;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_198;
                    break;
                  
                }
              }
              break;
            
          }
        }
        break;
      default:
        $y_199 = 1LL;
        $y_200 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_200 + -1LL) = 1024LL;
        *((value *) $y_200 + 0LL) = $y_199;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_200;
        break;
      
    }
  }
}

value CoqdZArithdBinIntDefdZdeqb_uncurried_known_113(struct thread_info *$tinfo, value $y_156, value $x_157)
{
  struct stack_frame frame;
  value root[2];
  register value $y_158;
  register value $y_159;
  register value $y_160;
  register value $p_161;
  register value $y_162;
  register value $q_163;
  register value $y_165;
  register value $p_166;
  register value $y_167;
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
  if (($x_157 & 1) == 0) {
    switch (*((value *) $x_157 + -1LL) & 255LL) {
      case 0:
        $p_161 = *((value *) $x_157 + 0LL);
        if (($y_156 & 1) == 0) {
          switch (*((value *) $y_156 + -1LL) & 255LL) {
            case 0:
              $q_163 = *((value *) $y_156 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_163, $p_161);
              return $result;
              break;
            default:
              $y_165 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_165;
              break;
            
          }
        } else {
          switch ($y_156 >> 1LL) {
            default:
              $y_162 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_162;
              break;
            
          }
        }
        break;
      default:
        $p_166 = *((value *) $x_157 + 0LL);
        if (($y_156 & 1) == 0) {
          switch (*((value *) $y_156 + -1LL) & 255LL) {
            case 0:
              $y_168 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_168;
              break;
            default:
              $q_169 = *((value *) $y_156 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_169, $p_166);
              return $result;
              break;
            
          }
        } else {
          switch ($y_156 >> 1LL) {
            default:
              $y_167 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_167;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($x_157 >> 1LL) {
      default:
        if (($y_156 & 1) == 0) {
          switch (*((value *) $y_156 + -1LL) & 255LL) {
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
          switch ($y_156 >> 1LL) {
            default:
              $y_158 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_158;
              break;
            
          }
        }
        break;
      
    }
  }
}

value CoqdNArithdBinNatDefdNdeqb_uncurried_known_112(struct thread_info *$tinfo, value $m_147, value $n_148)
{
  struct stack_frame frame;
  value root[2];
  register value $y_149;
  register value $y_150;
  register value $p_151;
  register value $y_152;
  register value $q_153;
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
  if (($n_148 & 1) == 0) {
    switch (*((value *) $n_148 + -1LL) & 255LL) {
      default:
        $p_151 = *((value *) $n_148 + 0LL);
        if (($m_147 & 1) == 0) {
          switch (*((value *) $m_147 + -1LL) & 255LL) {
            default:
              $q_153 = *((value *) $m_147 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_153, $p_151);
              return $result;
              break;
            
          }
        } else {
          switch ($m_147 >> 1LL) {
            default:
              $y_152 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_152;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($n_148 >> 1LL) {
      default:
        if (($m_147 & 1) == 0) {
          switch (*((value *) $m_147 + -1LL) & 255LL) {
            default:
              $y_150 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_150;
              break;
            
          }
        } else {
          switch ($m_147 >> 1LL) {
            default:
              $y_149 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_149;
              break;
            
          }
        }
        break;
      
    }
  }
}

value eqb_uncurried_known_111(struct thread_info *$tinfo, value $q_133, value $p_134)
{
  struct stack_frame frame;
  value root[2];
  register value $p_135;
  register value $q_136;
  register value $y_137;
  register value $y_138;
  register value $p_139;
  register value $y_140;
  register value $q_141;
  register value $y_142;
  register value $y_143;
  register value $y_144;
  register value $y_145;
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
  if (($p_134 & 1) == 0) {
    switch (*((value *) $p_134 + -1LL) & 255LL) {
      case 0:
        $p_135 = *((value *) $p_134 + 0LL);
        if (($q_133 & 1) == 0) {
          switch (*((value *) $q_133 + -1LL) & 255LL) {
            case 0:
              $q_136 = *((value *) $q_133 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_136, $p_135);
              return $result;
              break;
            default:
              $y_137 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_137;
              break;
            
          }
        } else {
          switch ($q_133 >> 1LL) {
            default:
              $y_138 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_138;
              break;
            
          }
        }
        break;
      default:
        $p_139 = *((value *) $p_134 + 0LL);
        if (($q_133 & 1) == 0) {
          switch (*((value *) $q_133 + -1LL) & 255LL) {
            case 0:
              $y_140 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_140;
              break;
            default:
              $q_141 = *((value *) $q_133 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value, value)) eqb_uncurried_known_111)
                ($tinfo, $q_141, $p_139);
              return $result;
              break;
            
          }
        } else {
          switch ($q_133 >> 1LL) {
            default:
              $y_142 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_142;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($p_134 >> 1LL) {
      default:
        if (($q_133 & 1) == 0) {
          switch (*((value *) $q_133 + -1LL) & 255LL) {
            case 0:
              $y_143 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_143;
              break;
            default:
              $y_144 = 3LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_144;
              break;
            
          }
        } else {
          switch ($q_133 >> 1LL) {
            default:
              $y_145 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_145;
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
  register value $y_502;
  register value $y_503;
  register value $y_504;
  register value $y_505;
  register value $y_506;
  register value $y_507;
  register value $y_508;
  register value $y_509;
  register value $y_510;
  register value $CertiDDdOSdRegistersdNdsnd_command_511;
  register value $y_512;
  register value $y_513;
  register value $y_514;
  register value $y_515;
  register value $y_516;
  register value $y_517;
  register value $y_518;
  register value $CertiDDdOSdRegistersdNdCmd_519;
  register value $y_520;
  register value $y_521;
  register value $y_522;
  register value $y_523;
  register value $y_524;
  register value $y_525;
  register value $y_526;
  register value $CertiDDdOSdRegistersdNdData2_527;
  register value $y_528;
  register value $y_529;
  register value $y_530;
  register value $y_531;
  register value $y_532;
  register value $y_533;
  register value $y_534;
  register value $CertiDDdOSdRegistersdNdPc_spk_535;
  register value $env_536;
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
  register value $y_555;
  register value $y_556;
  register value $y_557;
  register value $CertiDDdOSdPit_infodLinuxdNdTick_rate_558;
  register value $y_559;
  register value $y_560;
  register value $y_561;
  register value $y_562;
  register value $y_563;
  register value $CertiDDdOSdErrvaldeinval_564;
  register value $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_565;
  register value $env_566;
  register value $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_567;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(126LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 126LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_502 = 1LL;
  $y_503 = 1LL;
  $y_504 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_504 + -1LL) = 1025LL;
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
  *((value *) $y_507 + -1LL) = 1025LL;
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
  *((value *) $y_510 + -1LL) = 1025LL;
  *((value *) $y_510 + 0LL) = $y_509;
  $CertiDDdOSdRegistersdNdsnd_command_511 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdsnd_command_511 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdsnd_command_511 + 0LL) = $y_510;
  $y_512 = 1LL;
  $y_513 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_513 + -1LL) = 1025LL;
  *((value *) $y_513 + 0LL) = $y_512;
  $y_514 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_514 + -1LL) = 1025LL;
  *((value *) $y_514 + 0LL) = $y_513;
  $y_515 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_515 + -1LL) = 1025LL;
  *((value *) $y_515 + 0LL) = $y_514;
  $y_516 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_516 + -1LL) = 1025LL;
  *((value *) $y_516 + 0LL) = $y_515;
  $y_517 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_517 + -1LL) = 1024LL;
  *((value *) $y_517 + 0LL) = $y_516;
  $y_518 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_518 + -1LL) = 1024LL;
  *((value *) $y_518 + 0LL) = $y_517;
  $CertiDDdOSdRegistersdNdCmd_519 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdCmd_519 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdCmd_519 + 0LL) = $y_518;
  $y_520 = 1LL;
  $y_521 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_521 + -1LL) = 1025LL;
  *((value *) $y_521 + 0LL) = $y_520;
  $y_522 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_522 + -1LL) = 1025LL;
  *((value *) $y_522 + 0LL) = $y_521;
  $y_523 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_523 + -1LL) = 1025LL;
  *((value *) $y_523 + 0LL) = $y_522;
  $y_524 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_524 + -1LL) = 1025LL;
  *((value *) $y_524 + 0LL) = $y_523;
  $y_525 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_525 + -1LL) = 1024LL;
  *((value *) $y_525 + 0LL) = $y_524;
  $y_526 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_526 + -1LL) = 1025LL;
  *((value *) $y_526 + 0LL) = $y_525;
  $CertiDDdOSdRegistersdNdData2_527 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdData2_527 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdData2_527 + 0LL) = $y_526;
  $y_528 = 1LL;
  $y_529 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_529 + -1LL) = 1024LL;
  *((value *) $y_529 + 0LL) = $y_528;
  $y_530 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_530 + -1LL) = 1025LL;
  *((value *) $y_530 + 0LL) = $y_529;
  $y_531 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_531 + -1LL) = 1025LL;
  *((value *) $y_531 + 0LL) = $y_530;
  $y_532 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_532 + -1LL) = 1025LL;
  *((value *) $y_532 + 0LL) = $y_531;
  $y_533 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_533 + -1LL) = 1025LL;
  *((value *) $y_533 + 0LL) = $y_532;
  $y_534 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_534 + -1LL) = 1024LL;
  *((value *) $y_534 + 0LL) = $y_533;
  $CertiDDdOSdRegistersdNdPc_spk_535 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdRegistersdNdPc_spk_535 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdRegistersdNdPc_spk_535 + 0LL) = $y_534;
  $env_536 = (value) ($alloc + 1LL);
  $alloc = $alloc + 5LL;
  *((value *) $env_536 + -1LL) = 4096LL;
  *((value *) $env_536 + 0LL) = $CertiDDdOSdRegistersdNdsnd_command_511;
  *((value *) $env_536 + 1LL) = $CertiDDdOSdRegistersdNdCmd_519;
  *((value *) $env_536 + 2LL) = $CertiDDdOSdRegistersdNdData2_527;
  *((value *) $env_536 + 3LL) = $CertiDDdOSdRegistersdNdPc_spk_535;
  $y_537 = 1LL;
  $y_538 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_538 + -1LL) = 1025LL;
  *((value *) $y_538 + 0LL) = $y_537;
  $y_539 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_539 + -1LL) = 1025LL;
  *((value *) $y_539 + 0LL) = $y_538;
  $y_540 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_540 + -1LL) = 1024LL;
  *((value *) $y_540 + 0LL) = $y_539;
  $y_541 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_541 + -1LL) = 1025LL;
  *((value *) $y_541 + 0LL) = $y_540;
  $y_542 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_542 + -1LL) = 1025LL;
  *((value *) $y_542 + 0LL) = $y_541;
  $y_543 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_543 + -1LL) = 1025LL;
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
  *((value *) $y_546 + -1LL) = 1025LL;
  *((value *) $y_546 + 0LL) = $y_545;
  $y_547 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_547 + -1LL) = 1024LL;
  *((value *) $y_547 + 0LL) = $y_546;
  $y_548 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_548 + -1LL) = 1025LL;
  *((value *) $y_548 + 0LL) = $y_547;
  $y_549 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_549 + -1LL) = 1025LL;
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
  *((value *) $y_552 + -1LL) = 1025LL;
  *((value *) $y_552 + 0LL) = $y_551;
  $y_553 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_553 + -1LL) = 1024LL;
  *((value *) $y_553 + 0LL) = $y_552;
  $y_554 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_554 + -1LL) = 1024LL;
  *((value *) $y_554 + 0LL) = $y_553;
  $y_555 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_555 + -1LL) = 1024LL;
  *((value *) $y_555 + 0LL) = $y_554;
  $y_556 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_556 + -1LL) = 1024LL;
  *((value *) $y_556 + 0LL) = $y_555;
  $y_557 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_557 + -1LL) = 1025LL;
  *((value *) $y_557 + 0LL) = $y_556;
  $CertiDDdOSdPit_infodLinuxdNdTick_rate_558 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdPit_infodLinuxdNdTick_rate_558 + -1LL) = 1024LL;
  *((value *) $CertiDDdOSdPit_infodLinuxdNdTick_rate_558 + 0LL) = $y_557;
  $y_559 = 1LL;
  $y_560 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_560 + -1LL) = 1025LL;
  *((value *) $y_560 + 0LL) = $y_559;
  $y_561 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_561 + -1LL) = 1024LL;
  *((value *) $y_561 + 0LL) = $y_560;
  $y_562 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_562 + -1LL) = 1024LL;
  *((value *) $y_562 + 0LL) = $y_561;
  $y_563 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_563 + -1LL) = 1025LL;
  *((value *) $y_563 + 0LL) = $y_562;
  $CertiDDdOSdErrvaldeinval_564 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CertiDDdOSdErrvaldeinval_564 + -1LL) = 1025LL;
  *((value *) $CertiDDdOSdErrvaldeinval_564 + 0LL) = $y_563;
  $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_565 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_565
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_565
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_116;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_565
     + 1LL) =
    $env_536;
  $env_566 = (value) ($alloc + 1LL);
  $alloc = $alloc + 5LL;
  *((value *) $env_566 + -1LL) = 4096LL;
  *((value *) $env_566 + 0LL) = $y_502;
  *((value *) $env_566 + 1LL) =
    $CertiDDdDriversdPlatformdPcspkrdSoundSwitchdNdenable_sound_clo_565;
  *((value *) $env_566 + 2LL) = $CertiDDdOSdPit_infodLinuxdNdTick_rate_558;
  *((value *) $env_566 + 3LL) = $CertiDDdOSdErrvaldeinval_564;
  $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_567 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_567
     + -1LL) =
    2048LL;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_567
     + 0LL) =
    CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_124;
  *((value *) $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_567
     + 1LL) =
    $env_566;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $CertiDDdDriversdPlatformdPcspkrdPcspkr_linuxdNdpcspkr_evt_clo_567;
}


#endif /* PCSPKR_EVT_LINUX_N_C */
