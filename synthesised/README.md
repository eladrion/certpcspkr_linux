# Synthesised Code Directory

This directory includes the synthesised implementation of the PC Speaker driver and the glue code generated
by [CertiCoq](https://github.com/CertiCoq/certicoq).

The following commands were used for the synthesis:

```
From CertiCoq.Plugin Require Import Loader.

From Coq Require Import ZArith.BinInt.

(* Register the register IO primitives to use for the Kernel module. *)
CertiCoq Register [Register_io.in8          => "in8" with tinfo,
                   Register_io.in8_p        => "in8_p" with tinfo,
                   Register_io.out8         => "out8" with tinfo,
                   Register_io.out8_p       => "out8_p" with tinfo
   ] Include ["regio_ffi.h"].

(* Register the locking primitives to use for the Kernel module. *)
CertiCoq Register [Pcspkr_linux.linux_lock  => "spinlock" with tinfo
   ] Include ["locking_ffi.h"].

(* Register the duration and frequency primitives to use for the Kernel module. *)
CertiCoq Register [Val_range.is_valid_value => "z_val_in_freq_interval"
   ] Include ["z_ffi.h"].

(* Register the primitives on nat to use for the Kernel module. *)
CertiCoq Register [Nat.div                  => "nat_div" with tinfo,
                   Nat.div2                 => "nat_div2" with tinfo,
                   Nat.land                 => "nat_land" with tinfo,
                   Nat.lor                  => "nat_lor" with tinfo,
                   Nat.shiftr               => "nat_shiftr" with tinfo,
                   Nat.shiftl               => "nat_shiftl" with tinfo,
                   Count.compute_duration   => "compute_duration" with tinfo
   ] Include ["nat_ffi.h"].

(* Compile the driver itself. *)
CertiCoq Compile -build_dir "Synthesised/Platform/Pcspkr/" -file "pcspkr_evt_linux" pcspkr_evt_linux.

(* Generate the glue code. *)
CertiCoq Generate Glue -build_dir "Synthesised/Platform/Pcspkr/"  -file "glue" [ nat, Z, bool].
```

As can be seen there are many primitives being used. Most of them are used for performance reasons.
The use of primitives for the functions `in8`, `out8`, `in8_p`, `out8_p` and `linux_lock` are strictly
necessary since the functions are axiomatic in the formalisation.
This again is necessary since the implementation of register writes and reads and also spinlocking are
internal functionalities of Linux.
However, a formalisation of `out8_p` exists but is omitted for performance reasons.

Additionally to generating the PC Speaker event handler, glue code for communication between the
synthesised and plain C code is synthesised (`CertiCoq Generate Glue`).
The synthesis is here restricted to the strictly necessary data types, i.e. `nat` for the
event `type` and the `mode` (either Bell or Tone), `Z` for the frequency `val` and `bool` for the use
of `is_valid_value` as primitive.

Only the glue code (glue.c and glue.h) was modified:

- The includes to stdio.h were commented out.
- printing functionality was commented out.

The reason is that the printing would have to be done via printk. But since nat and Z
are printed recursively, printing the nat S ( S ( O ) ) would be printed as 

```
S ( 
S ( 
O 
) 
)
```

into the Kernel logs when using KERN_INFO as log level. It is possible to use KERN_CONT instead
which makes the printing correct again. But using KERN_CONT is [discouraged](https://elixir.bootlin.com/linux/v6.7.4/source/include/linux/kern_levels.h#L20)
for most situations:

```
/*
 * Annotation for a "continued" line of log printout (only done after a
 * line that had no enclosing \n). Only to be used by core/arch code
 * during early bootup (a continued line is not SMP-safe otherwise).
 */
#define KERN_CONT	KERN_SOH "c"
```