# The Main Source Directory

This directory contains the plain C files for the PCspeaker driver:

- certpcspkr_mod.c (and the header) contain the Kernel Module definition including the definitions for the event call, suspend, resume, probe and shutdown.
- clight_iface.c contains the code to instantiate and call the synthesised code as closure and retrieve the result.
- The Makefile can be used to compile the Kernel module.
- locking.c (and the header) contains the spinlocking functionality
- pit.c (and the header) expose a function that return the PIT_TICK_RATE as unsigned long
- regio.c (and the header) contain the calls to the Kernel register read and write operations.


