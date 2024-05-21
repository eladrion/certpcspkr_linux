MOD_DIR = $(PWD)/..

# Set mode N with minimal primitives by default
COMP_MODE ?=n_minprims

# Set the source directories
PRIMS_PATH=$(MOD_DIR)/prims
IFACE_PATH=$(MOD_DIR)/iface
SYNTH_PATH=$(MOD_DIR)/synthesised

# Set the include path
INC_PATH = $(MOD_DIR)/include

# Set the default CertiCoq path if not set and set the runtime path
CERTICOQ_PATH   ?= ../../CertiCoq_kmod
CQ_RUNTIME_PATH  = $(realpath $(CERTICOQ_PATH))/plugin/runtime

# Set the default VeriFFI path if not set and set the runtime path
VERIFFI_PATH    ?= ../../VeriFFI_contrib/
VERIFFI_C_PATH   = $(realpath $(VERIFFI_PATH))/c

# Configure Warnings and Errors
## Missing return type is no error but still warn
CQ_NO_WARN_ERRORS    = -Wno-error=return-type
## Do not warn on unused variables and declaration after statement
CQ_IGNORED_WARNINGS  = -Wno-unused-variable
CQ_IGNORED_WARNINGS += -Wno-declaration-after-statement
#CQ_IGNORED_WARNINGS += -Wno-return-type
#CQ_IGNORED_WARNINGS += -Wno-int-conversion
#CQ_IGNORED_WARNINGS += -Wno-incompatible-pointer-types

# Set defines for compilation
## Set CLIGHT_KERNEL_CODE to make sure that the GC function printtree is not evaluated
CERTICOQ_DEFINES  = -D CLIGHT_KERNEL_CODE=1

## Add nat mode for compilation if desired.
ifeq ($(COMP_MODE),nat) # Use nat type
CERTICOQ_DEFINES += -D SYN_USE_NAT_FOR_UINT=1
endif

## Activate kernel log debug printings in CertiCoq code.
CERTICOQ_DEFINES += -D CERTICOQ_TRACE=1
## And set the includes
CERTICOQ_INCLUDES = -I$(INC_PATH)/iface -I$(INC_PATH)/dri -I$(INC_PATH)/generated -I$(INC_PATH)/contrib

# Set oprimisation and warnings as compile flags
EXTRA_CFLAGS  = -O2 $(CQ_NO_WARN_ERRORS) $(CQ_IGNORED_WARNINGS)
# Set defines and includes
EXTRA_CFLAGS += $(CERTICOQ_DEFINES) $(CERTICOQ_INCLUDES)
# Add -fomit-framepointer since this is encouraged by CertiCoq documentation (But it does work without)
#EXTRA_CFLAGS +=-fomit-frame-pointer

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
ifeq ($(COMP_MODE),nat) # Use nat type
CERTICOQ_FFI_OBJS  := arith_ffi_nat.o bitwise_ffi_nat.o regio_ffi_nat.o locking_ffi_nat.o z_ffi.o
else ifeq ($(COMP_MODE),n) # Use N type
CERTICOQ_FFI_OBJS  := arith_ffi_n.o bitwise_ffi_n.o regio_ffi_n.o locking_ffi_n.o
else # Use N with minprims
CERTICOQ_FFI_OBJS  :=  regio_ffi_n.o locking_ffi_n.o
endif

# Objects implementing primitives called by CERTICOQ_FFI_OBJS
PRIMS_OBJS         := int6x_pos.o int6x_z.o int64.o prim_int63.o

ifeq ($(COMP_MODE),nat) # Use nat type
PRIMS_OBJS         += int6x_nat.o
else ifeq ($(COMP_MODE),n) # Use N type
PRIMS_OBJS         += int6x_n.o
else # Use N with minprims
PRIMS_OBJS         += int6x_n.o
endif

# Objects that interface the module with the synthesised code
MODULE_IFACE_OBJS  := clight_iface.o

# Objects implementing OS specific call redirections
MODULE_OS_OBJS     := regio.o locking.o pit.o

COMPCERT_OBJS      := pcspkr_evt_linux.o_shipped glue.o_shipped
COMPCERT_OBJS_CMD  := pcspkr_evt_linux.o_shipped.cmd glue.o_shipped.cmd

# Set the module object components
certpcspkr-objs := certpcspkr_mod.o $(SYNTHESISED_OBJS) $(CERTICOQ_OBJS) $(CERTICOQ_FFI_OBJS) $(PRIMS_OBJS) $(MODULE_IFACE_OBJS) $(MODULE_OS_OBJS)


# Copies the CertiCoq runtime implementations
copy_cq_rt:
# copy the CertiCoq runtime files
	@echo "Copying CertiCoq Runtime files."
	@cp $(CQ_RUNTIME_PATH)/kmod_gc_stack.c ./gc_stack.c
	@cp $(CQ_RUNTIME_PATH)/kmod_alloc.c ./
	@cp $(CQ_RUNTIME_PATH)/prim_int63.c ./

# Copies the VeriFFI minimal runtime files
copy_veriffi_rt:
	@cp $(VERIFFI_C_PATH)/int6x_pos.c ./
	@cp $(VERIFFI_C_PATH)/int6x_z.c ./
	@cp $(VERIFFI_C_PATH)/int64.c ./

# Copies the VeriFFI and IFACE files for nat input
copy_nat: copy_cq_rt copy_veriffi_rt
	@echo "Copying nat specific files."
# Copy the VeriFFI files
	@cp $(VERIFFI_C_PATH)/int6x_nat.c ./
# Copy the coq->plain C interface files
	@cp $(IFACE_PATH)/locking_ffi_nat.c ./
	@cp $(IFACE_PATH)/regio_ffi_nat.c ./
	@cp $(IFACE_PATH)/arith_ffi_nat.c ./
	@cp $(IFACE_PATH)/bitwise_ffi_nat.c ./
	@cp $(IFACE_PATH)/z_ffi.c ./

# Copies the VeriFFI and minimal IFACE files for N input
copy_n_minprims: copy_cq_rt copy_veriffi_rt
	@echo "Copying N specific files."
# Copy the VeriFFI files
	@cp $(VERIFFI_C_PATH)/int6x_n.c ./
# Copy the coq->plain C interface files
	@cp $(IFACE_PATH)/locking_ffi_n.c ./
	@cp $(IFACE_PATH)/regio_ffi_n.c ./

# Copies the additional IFACE files for N input
copy_n: copy_n_minprims
	@echo "Copying additional N specific files."
	@cp $(IFACE_PATH)/arith_ffi_n.c ./
	@cp $(IFACE_PATH)/bitwise_ffi_n.c ./

# Copy the files depending on the mode.
ifeq ($(COMP_MODE),nat) # Use nat type
copy: copy_nat
else ifeq ($(COMP_MODE),n) # Use N type
copy: copy_n
else # Use N with minprims
copy: copy_n_minprims
endif
	@make -C $(PWD)/../include/contrib CQ_RUNTIME_PATH=$(CQ_RUNTIME_PATH) VERIFFI_C_PATH=$(VERIFFI_C_PATH) copy

copy_synthesised:
	@cp $(SYNTH_PATH)/glue.c ./
# Copy the synthesised functionality depending on the mode.
ifeq ($(COMP_MODE),nat) # Use nat type
	@cp $(SYNTH_PATH)/pcspkr_evt_linux_nat.c ./pcspkr_evt_linux.c
else ifeq ($(COMP_MODE),n) # Use N type
	@cp $(SYNTH_PATH)/pcspkr_evt_linux_n.c ./pcspkr_evt_linux.c
else # Use N with minprims
	@cp $(SYNTH_PATH)/pcspkr_evt_linux_n_minprims.c ./pcspkr_evt_linux.c
endif

# Manipulate the files, i.e. make sure that the unused includes which break compilation are commented out.
manipulate : copy
	@sed -i "s|#include \"kmod_gc_stack.h\"|#include <gc_stack.h>|" ./gc_stack.c
	@sed -i "s|#include <kmod_gc_stack.h>|#include <gc_stack.h>|" ./gc_stack.c

all: manipulate copy_synthesised
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" CONFIG_FUNCTION_TRACER= modules

with_compcert : manipulate $(COMPCERT_OBJS) $(COMPCERT_OBJS_CMD)
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" CONFIG_FUNCTION_TRACER= modules

clean:
# Delete the CertiCoq runtime files.
	@echo "Deleting copied CertiCoq runtime files"
	@rm -f ./gc_stack.*
	@rm -f ./kmod_alloc.*
	@rm -f ./prim_int63.*
# Delete the VeriFFI files
	@echo "Deleting copied VeriFFI files"
	@rm -f ./int6x_nat.*
	@rm -f ./int6x_n.*
	@rm -f ./int6x_pos.*
	@rm -f ./int6x_z.*
	@rm -f ./int64.*
# Delete the coq->plain C interface files
	@echo "Deleting copied coq->plain C interface files"
	@rm -f ./arith_ffi*
	@rm -f ./bitwise_ffi*
	@rm -f ./locking_ffi*
	@rm -f ./regio_ffi*
	@rm -f ./z_ffi.*
# Delete the synthesised code.
	@echo "Deleting copied synthesised code"
	@rm -f ./glue.c
	@rm -f ./glue.o*
	@rm -f ./pcspkr_evt_linux.c
	@rm -f ./pcspkr_evt_linux.o*
	@make -C $(PWD)/../include/contrib clean
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" clean