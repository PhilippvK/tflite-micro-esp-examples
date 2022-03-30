#include "tvm/runtime/c_runtime_api.h"
#ifdef __cplusplus
extern "C" {
#endif
__attribute__((section(".data.tvm"), aligned(16)))
static uint8_t global_workspace[17360];
#include <tvmgen_default.h>
TVM_DLL int32_t tvmgen_default___tvm_main__(void* Reshape_1,void* output0,uint8_t* global_workspace_0_var);
int32_t tvmgen_default_run(struct tvmgen_default_inputs* inputs,struct tvmgen_default_outputs* outputs) {return tvmgen_default___tvm_main__(inputs->Reshape_1,outputs->labels_softmax,&global_workspace);
}
#ifdef __cplusplus
}
#endif
;