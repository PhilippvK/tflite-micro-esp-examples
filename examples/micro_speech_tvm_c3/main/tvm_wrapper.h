#ifndef TVM_WRAPPER_H
#define TVM_WRAPPER_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void TVMWrap_Init();
void *TVMWrap_GetInputPtr(int index);
size_t TVMWrap_GetInputSize(int index);
size_t TVMWrap_GetNumInputs();
void TVMWrap_Run();
void *TVMWrap_GetOutputPtr(int index);
size_t TVMWrap_GetOutputSize(int index);
size_t TVMWrap_GetNumOutputs();

#ifdef __cplusplus
};
#endif

#endif  // TVM_WRAPPER_H
