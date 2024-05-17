

default: copy

.PHONY: copy clean default


copy:
	echo $(CERTICOQ_PATH)
	# copy the CertiCoq runtime files
	cp $(CQ_RUNTIME_PATH)/certicoq_stdint.h ./
	cp $(CQ_RUNTIME_PATH)/certicoq_stdio.h ./
	cp $(CQ_RUNTIME_PATH)/certicoq_math.h ./
	cp $(CQ_RUNTIME_PATH)/kmod_gc_stack.h ./gc_stack.h
	cp $(CQ_RUNTIME_PATH)/kmod_alloc.h ./
	cp $(CQ_RUNTIME_PATH)/prim_int63.h ./
	cp $(CQ_RUNTIME_PATH)/m.h ./
	cp $(CQ_RUNTIME_PATH)/values.h ./
	cp $(CQ_RUNTIME_PATH)/config.h ./
	# Copy the VeriFFI files
	cp $(VERIFFI_C_PATH)/int6x_nat.h ./
	cp $(VERIFFI_C_PATH)/int6x_pos.h ./
	cp $(VERIFFI_C_PATH)/int6x_z.h ./
	cp $(VERIFFI_C_PATH)/int64.h ./

clean:
	# Delete the CertiCoq runtime files.
	rm -f ./certicoq_stdint.h
	rm -f ./certicoq_stdio.h
	rm -f ./certicoq_math.h
	rm -f ./gc_stack.h
	rm -f ./kmod_alloc.h
	rm -f ./prim_int63.h
	rm -f ./m.h
	rm -f ./values.h
	rm -f ./config.h
	# Delete the VeriFFI files
	rm -f ./int6x_nat.h
	rm -f ./int6x_pos.h
	rm -f ./int6x_z.h
	rm -f ./int64.h
