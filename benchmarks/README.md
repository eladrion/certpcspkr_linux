This (work in progress) directory contains a shell script for benchmarking the driver.
The script compiles all variants (`nat`, `n` and `n_minprims`) and copies
the kernel objects to this directories.
Additionally, the `n_minprims` variant is also built partially using
the verified Clight compiler CompCert which has to be installed.

Also, the driver is tested using the tool `beep` which is usually available
as command line tool in most Linux distributions.
The tool does not have a direct way of emitting the `Bell` signal. Thus,
I had to install a patched version of beep that emits `SND_BELL` instead
of `SND_TONE`.