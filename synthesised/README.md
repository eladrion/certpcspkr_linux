# Synthesised Code Directory

This directory includes the synthesised implementation of the PC Speaker driver and the glue code generated
by [CertiCoq](https://github.com/CertiCoq/certicoq).

There are different variants being synthesised from the formalisation.
In all cases, the glue code to interface C and Coq was generated using

```
CertiCoq Generate Glue -build_dir "Synthesised/Platform/Pcspkr/"  -file "glue_all" [ nat, N, Z, bool].
```

to make sure that all primitives can be used.

More important, there are 3 variants of the generated driver code.
The first (`pcspkr_evt_linux_nat.c`) uses the Coq type `nat` as type for unsigned
integer values while `pcspkr_evt_linux_n.c` and `pcspkr_evt_linux_n_minprims.c`
use the binary Coq datatype `N`.
Additionally, `pcspkr_evt_linux_n_minprims.c` uses only the really necessary
primitives for register IO and locking. while `pcspkr_evt_linux_n.c` additionally
uses primitives for division, shift operations and bitwise and/or.
Also, there is a variant of `pcspkr_evt_linux_nat.c` that includes operations
on big values of `nat` which will make the system freeze due to a stack overflow.

The following commands were used for the generation of `pcspkr_evt_linux_nat.c`:

```
From CertiCoq.Plugin Require Import Loader.

From Coq Require Import ZArith.BinInt.

(* Register the register IO primitives to use for the Kernel module. *)
CertiCoq Register [Register_io.Nat.in8          => "in8" with tinfo,
                   Register_io.Nat.in8_p        => "in8_p" with tinfo,
                   Register_io.Nat.out8         => "out8" with tinfo,
                   Register_io.Nat.out8_p       => "out8_p" with tinfo]
         Include ["regio_ffi.h"].


(* Register the locking primitives to use for the Kernel module. *)
CertiCoq Register [Pcspkr_linux.linux_lock  => "spinlock" with tinfo]
         Include ["locking_ffi.h"].


(* Register the duration and frequency primitives to use for the Kernel module. *)
CertiCoq Register [Count_prim.Nat.compute_duration_nat   => "compute_duration_nat" with tinfo]
         Include ["z_ffi.h"].

(* Register the primitives on nat to use for the Kernel module. *)
CertiCoq Register [Nat.div                  => "div" with tinfo,
                   Nat.div2                 => "div2" with tinfo]
         Include ["arith_ffi.h"].

(* Register the primitives on nat to use for the Kernel module. *)
CertiCoq Register [Nat.land                 => "land" with tinfo,
                   Nat.lor                  => "lor" with tinfo,
                   Nat.shiftr               => "shiftr" with tinfo,
                   Nat.shiftl               => "shiftl" with tinfo]
         Include ["bitwise_ffi.h"].

(* Compile the driver itself. *)
CertiCoq Compile -build_dir "Synthesised/Platform/Pcspkr/" -file "pcspkr_evt_linux" Nat.pcspkr_evt_opt_prim.

```

The following commands were used for the generation of `pcspkr_evt_linux_n_minprims.c`:

```
(* Register the register IO primitives to use for the Kernel module. *)
CertiCoq Register [Register_io.N.in8          => "in8" with tinfo,
                   Register_io.N.in8_p        => "in8_p" with tinfo,
                   Register_io.N.out8         => "out8" with tinfo]
         Include ["regio_ffi.h"].

(* Register the locking primitives to use for the Kernel module. *)
CertiCoq Register [Pcspkr_linux.linux_lock  => "spinlock" with tinfo]
         Include ["locking_ffi.h"].
```

The following commands were additionally used for the generation of `pcspkr_evt_linux_n.c`:

```
(* Register the primitives on N to use for the Kernel module. *)
CertiCoq Register [N.div                  => "div" with tinfo,
                   N.div2                 => "div2" with tinfo]
         Include ["arith_ffi.h"].

(* Register the primitives on N to use for the Kernel module. *)
CertiCoq Register [N.land                 => "land" with tinfo,
                   N.lor                  => "lor" with tinfo,
                   N.shiftr               => "shiftr" with tinfo,
                   N.shiftl               => "shiftl" with tinfo]
         Include ["bitwise_ffi.h"].
```

As can be seen there are many primitives being used depending on the variant. Most of them are used for performance reasons.
The use of primitives for the functions `in8`, `out8`, `in8_p` and `linux_lock` are strictly
necessary since the functions are axiomatic in the formalisation.
This again is necessary since the implementation of register writes and reads and also spinlocking are
internal functionalities of Linux.
However, since a formalisation of `out8_p` exists, it is used in the `minprims`
variant. The ordinary generation for `N` uses a mapping `Register_io.N.out8_p => "out8_p" with tinfo` for performance reasons.

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