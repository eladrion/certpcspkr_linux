
PRIMS_PATH=../prims
IFACE_PATH=../iface
SYNTH_PATH=../synthesised

CQ_RUNTIME_PATH=$(CERTICOQ_PATH)/plugin/runtime
VERIFFI_C_PATH =$(VERIFFI_PATH)/c

# Missing return type is no error but still warn
CQ_NO_WARN_ERRORS    = -Wno-error=return-type
# Do not warn on unused variables
CQ_IGNORED_WARNINGS  = -Wno-unused-variable
CQ_IGNORED_WARNINGS += -Wno-declaration-after-statement
#CQ_IGNORED_WARNINGS += -Wno-return-type
#CQ_IGNORED_WARNINGS += -Wno-int-conversion
#CQ_IGNORED_WARNINGS += -Wno-incompatible-pointer-types

CERTICOQ_DEFINES  = -D CLIGHT_KERNEL_CODE=1
CERTICOQ_DEFINES += -D CERTICOQ_TRACE=1
CERTICOQ_INCLUDES = -I$(PWD)

# Set CLIGHT_KERNEL_CODE to make sure that the GC function printtree is not evaluated
EXTRA_CFLAGS  = -O2 $(CQ_NO_WARN_ERRORS) $(CQ_IGNORED_WARNINGS)
EXTRA_CFLAGS += $(CERTICOQ_DEFINES)
# Add -fomit-framepointer since this is encouraged by CertiCoq documentation (But it does work without)
#EXTRA_CFLAGS +=-fomit-frame-pointer
EXTRA_CFLAGS += $(CERTICOQ_INCLUDES)

default: all

.PHONY: default copy manipulate all clean with_compcert

%.o_shipped : ../synthesised/%.c
	ccomp -c -o $@ $(CERTICOQ_DEFINES) $(CERTICOQ_INCLUDES) $<

%.o_shipped.cmd : %.o_shipped
	touch .$(basename $^).o.cmd
	touch $@


# Set the module object
obj-m += certpcspkr.o

# Objects from synthesised code
SYNTHESISED_OBJS   := pcspkr_evt_linux.o glue.o
# Objects copied from CertiCoq
CERTICOQ_OBJS      := gc_stack.o kmod_alloc.o
# Objects that include functionality directly called by synthesised code
CERTICOQ_FFI_OBJS  := nat_ffi.o regio_ffi.o locking_ffi.o z_ffi.o
# Objects implementing primitives called by CERTICOQ_FFI_OBJS
PRIMS_OBJS         := int6x_nat.o int6x_z.o int64.o prim_int63.o
# Objects that interface the module with the synthesised code
MODULE_IFACE_OBJS  := clight_iface.o
# Objects implementing OS specific call redirections
MODULE_OS_OBJS     := regio.o locking.o pit.o

COMPCERT_OBJS      := pcspkr_evt_linux.o_shipped glue.o_shipped
COMPCERT_OBJS_CMD  := pcspkr_evt_linux.o_shipped.cmd glue.o_shipped.cmd

# Set the module object components
certpcspkr-objs := certpcspkr_mod.o $(SYNTHESISED_OBJS) $(CERTICOQ_OBJS) $(CERTICOQ_FFI_OBJS) $(PRIMS_OBJS) $(MODULE_IFACE_OBJS) $(MODULE_OS_OBJS)

copy:
	# copy the CertiCoq runtime files
	cp $(CQ_RUNTIME_PATH)/certicoq_stdint.h ./
	cp $(CQ_RUNTIME_PATH)/certicoq_stdio.h ./
	cp $(CQ_RUNTIME_PATH)/certicoq_math.h ./
	cp $(CQ_RUNTIME_PATH)/kmod_gc_stack.c ./gc_stack.c
	cp $(CQ_RUNTIME_PATH)/kmod_gc_stack.h ./gc_stack.h
	cp $(CQ_RUNTIME_PATH)/kmod_alloc.c ./
	cp $(CQ_RUNTIME_PATH)/kmod_alloc.h ./
	cp $(CQ_RUNTIME_PATH)/prim_int63.c ./
	cp $(CQ_RUNTIME_PATH)/prim_int63.h ./
	cp $(CQ_RUNTIME_PATH)/m.h ./
	cp $(CQ_RUNTIME_PATH)/values.h ./
	cp $(CQ_RUNTIME_PATH)/config.h ./
	# Copy the VeriFFI files
	cp $(VERIFFI_C_PATH)/int6x_nat.c ./
	cp $(VERIFFI_C_PATH)/int6x_nat.h ./
	cp $(VERIFFI_C_PATH)/int6x_z.c ./
	cp $(VERIFFI_C_PATH)/int6x_z.h ./
	cp $(VERIFFI_C_PATH)/int64.c ./
	cp $(VERIFFI_C_PATH)/int64.h ./
	# Copy the coq->plain C interface files
	cp $(IFACE_PATH)/locking_ffi.c ./
	cp $(IFACE_PATH)/locking_ffi.h ./
	cp $(IFACE_PATH)/nat_ffi.c ./
	cp $(IFACE_PATH)/nat_ffi.h ./
	cp $(IFACE_PATH)/regio_ffi.c ./
	cp $(IFACE_PATH)/regio_ffi.h ./
	cp $(IFACE_PATH)/z_ffi.c ./
	cp $(IFACE_PATH)/z_ffi.h ./
	# Copy the synthesised code.
#	cp $(SYNTH_PATH)/glue.c ./
	cp $(SYNTH_PATH)/glue.h ./
#	cp $(SYNTH_PATH)/pcspkr_evt_linux.c ./
	cp $(SYNTH_PATH)/pcspkr_evt_linux.h ./

copy_synthesised:
	cp $(SYNTH_PATH)/glue.c ./
	cp $(SYNTH_PATH)/pcspkr_evt_linux.c ./

# Manipulate the files, i.e. make sure that the unused includes which break compilation are commented out.
manipulate : copy
	sed -i "s|#include \"kmod_gc_stack.h\"|#include <gc_stack.h>|" ./gc_stack.c
	sed -i "s|#include <kmod_gc_stack.h>|#include <gc_stack.h>|" ./gc_stack.c

all: manipulate copy_synthesised
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" CONFIG_FUNCTION_TRACER= modules

with_compcert : manipulate $(COMPCERT_OBJS) $(COMPCERT_OBJS_CMD)
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" CONFIG_FUNCTION_TRACER= modules

clean:
	# Delete the CertiCoq runtime files.
	rm -f ./certicoq_stdint.h
	rm -f ./certicoq_stdio.h
	rm -f ./certicoq_math.h
	rm -f ./gc_stack.*
	rm -f ./kmod_alloc.*
	rm -f ./prim_int63.*
	rm -f ./m.h
	rm -f ./values.h
	rm -f ./config.h
	# Delete the VeriFFI files
	rm -f ./int6x_nat.*
	rm -f ./int6x_z.*
	rm -f ./int64.*
	# Delete the coq->plain C interface files
	rm -f ./locking_ffi.*
	rm -f ./nat_ffi.*
	rm -f ./regio_ffi.*
	rm -f ./z_ffi.*
	# Delete the synthesised code.
	rm -f ./glue.c
	rm -f ./glue.h
	rm -f ./glue.o*
	rm -f ./pcspkr_evt_linux.c
	rm -f ./pcspkr_evt_linux.h
	rm -f ./pcspkr_evt_linux.o*
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" clean