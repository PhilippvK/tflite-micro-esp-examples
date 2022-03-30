// This file is generated. Do not edit.
// Generated on: 2022-03-25 08:11:14.084409

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <dlpack/dlpack.h>
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/crt/stack_allocator.h"
// #include "printing.h"
#include "tvmgen_default.h"


// Define data for input and output tensors
char input0_data[1960];
void* inputs[] = {input0_data};
struct tvmgen_default_inputs tvmgen_default_inputs = {
    .Reshape_1 = input0_data,
};
char output0_data[4];
void* outputs[] = {output0_data};
struct tvmgen_default_outputs tvmgen_default_outputs = {
    .labels_softmax = output0_data,
};

void TVMLogf(const char* msg, ...) {
    va_list args;
    va_start(args, msg);
    printf(msg, args);
    va_end(args);
}

tvm_crt_error_t TVMPlatformMemoryAllocate(size_t num_bytes, DLDevice dev, void** out_ptr) {
    return kTvmErrorFunctionCallNotImplemented;
}
tvm_crt_error_t TVMPlatformMemoryFree(void* ptr, DLDevice dev) {
    return kTvmErrorFunctionCallNotImplemented;
}

void __attribute__((noreturn)) TVMPlatformAbort(tvm_crt_error_t code) { exit(1); }

TVM_DLL int TVMFuncRegisterGlobal(const char* name, TVMFunctionHandle f, int override) { return 0; }

void TVMWrap_Init()
{

}

void *TVMWrap_GetInputPtr(int index)
{
    return inputs[index];
}

size_t TVMWrap_GetInputSize(int index)
{
    size_t sizes[] = { 1960, };

    return sizes[index];
}

size_t TVMWrap_GetNumInputs()
{
    return 1;
}

void TVMWrap_Run()
{
    // printf("TVMWrap_Run\n");
    int ret_val = tvmgen_default_run(&tvmgen_default_inputs, &tvmgen_default_outputs);
    if (ret_val) {
        TVMPlatformAbort(kTvmErrorPlatformCheckFailure);
    }

}

void *TVMWrap_GetOutputPtr(int index)
{
    return outputs[index];
}

size_t TVMWrap_GetOutputSize(int index)
{
    size_t sizes[] = { 4, };

    return sizes[index];
}

size_t TVMWrap_GetNumOutputs()
{
    return 1;
}
