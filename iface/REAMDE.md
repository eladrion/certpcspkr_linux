# Interface Directory

This directory contains C and header files with functionality that is *directly* called by
the synthesised code:

- Register IO, i.e. in8, out8 and friends (regio_ffi.c, regio_ffi.h)
- Locking functionality, especially spinlock (locking_ffi.c, locking_ffi.h)
- arithmetic and bitwise operations on nat and computing the duration (nat_ffi.c, nat_ffi.h)
- interval check (z_ffi.c, z_ffi.h)
