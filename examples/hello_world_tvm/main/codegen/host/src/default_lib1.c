// tvm target: c -keys=cpu -constants-byte-alignment=4 -executor=aot -interface-api=c -link-params=0 -unpacked-api=1 -workspace-byte-alignment=4
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
static const float __attribute__((section(".rodata.tvm"), aligned(4))) constant_5[1] = {
    -0x1.4ac2dcp-2
};
#ifdef __cplusplus
}  // extern "C"
#endif

#ifdef __cplusplus
extern "C" {
#endif
static const float __attribute__((section(".rodata.tvm"), aligned(4))) constant_4[16] = {
    0x1.3f2904p+0, -0x1.6caf88p-1, -0x1.6db08cp-3, -0x1.ed48ccp-2, -0x1.3df766p-1, -0x1.53f896p-3, 0x1.4f38fp+0, 0x1.f64842p-1, 
    -0x1.4fb7fap-2, 0x1.0ebfd4p-1, -0x1.02d634p-1, 0x1.d02294p-2, 0x1.f1ca8cp-1, -0x1.f4c128p-1, -0x1.b76f7p-1, 0x1.b749d6p-1
};
#ifdef __cplusplus
}  // extern "C"
#endif

#ifdef __cplusplus
extern "C" {
#endif
static const float __attribute__((section(".rodata.tvm"), aligned(4))) constant_3[16] = {
    0x1.c3d8cap-2, 0x1.139e48p-2, 0x0p+0   , 0x1.d20edap-3, 0x1.1990bcp-2, 0x1.995332p-3, 0x1.49fedp-2, -0x1.a47e58p-2, 
    0x1.c2b01ap-3, -0x1.b363acp-2, 0x1.f180cep-3, -0x1.0641b6p-5, 0x1.b5fee4p-2, 0x1.64673p-3, 0x1.f6c69cp-3, -0x1.6c2864p-2
};
#ifdef __cplusplus
}  // extern "C"
#endif

#ifdef __cplusplus
extern "C" {
#endif
static const float __attribute__((section(".rodata.tvm"), aligned(4))) constant_2[256] = {
    0x1.05a71cp-3, 0x1.660c26p-2, 0x1.9765b6p-2, 0x1.dc7fdp-5, 0x1.4f3b88p-4, 0x1.1bdb82p-2, 0x1.f2443cp-3, 0x1.d3f5e4p-3, 
    -0x1.27aeaep-1, -0x1.434b2ap-2, -0x1.d28a1ap-3, -0x1.f9ef2ep-4, -0x1.3ad5d6p-6, -0x1.61162ep-2, -0x1.1e7468p-2, 0x1.41a2b4p-1, 
    0x1.858d3ap-1, 0x1.a19b02p-3, -0x1.42121p-3, 0x1.13309ep+0, 0x1.5effbp-1, 0x1.b862dap-2, 0x1.40eb8cp-2, -0x1.3c0ea8p+0, 
    -0x1.5a4a48p-2, -0x1.c9fe0ap-3, 0x1.9a999ep-2, 0x1.052554p-3, 0x1.7ffc6cp-3, 0x1.8cb034p-3, -0x1.aa624p-5, 0x1.aec58p-5, 
    0x1.6e03aap-2, -0x1.babc6cp-3, 0x1.61cb0ap-2, -0x1.4549dcp-3, -0x1.024e44p-2, -0x1.a29c9p-5, -0x1.ad5cp-7, -0x1.64b888p-3, 
    0x1.55ba1ap-2, 0x1.acfc7p-5, -0x1.fef768p-4, -0x1.7d86fp-3, 0x1.a98ed2p-2, -0x1.01886p-6, -0x1.784abp-2, 0x1.a34d5ap-2, 
    -0x1.e0699cp-2, -0x1.3d4a78p-4, -0x1.82505p-3, -0x1.bf6d4cp-3, 0x1.aa4ep-7, 0x1.4dbb7cp-7, -0x1.1fb088p+0, -0x1.bff4fep-4, 
    -0x1.7567cap-2, -0x1.0ed9d8p-1, -0x1.e11c6p-6, 0x1.3110bap-3, -0x1.2860e8p-1, 0x1.d5de8ep-3, -0x1.ed4a88p-2, 0x1.7b70dcp-2, 
    0x1.9b074ep-2, -0x1.077d3p-5, 0x1.bd283cp-3, -0x1.c7e5a4p-3, 0x1.7bad44p-3, -0x1.5987ap-4, 0x1.e89a18p-4, -0x1.e852ep-3, 
    0x1.fd0b74p-3, 0x1.6112d2p-2, 0x1.01515ap-2, 0x1.a32f1ap-2, 0x1.353ef2p-2, -0x1.7dec7p-4, -0x1.8a944p-7, -0x1.d3f88ap-3, 
    0x1.a92a1cp-2, -0x1.ef2f46p-6, -0x1.f39d12p-3, 0x1.993194p-3, -0x1.bf4082p-2, 0x1.606eaep-2, 0x1.0e969cp-1, -0x1.08a2f6p-3, 
    -0x1.6a611p-5, -0x1.82f2c6p-2, -0x1.48c5dp-2, 0x1.7cab4p-5, -0x1.4560c2p-2, -0x1.acf7ep-6, -0x1.c847cp-6, 0x1.b204a6p-2, 
    -0x1.aef1f2p-2, -0x1.f2efbp-5, 0x1.74e556p-2, -0x1.b41fcp-2, -0x1.25335ep-2, 0x1.057d4p-7, 0x1.b63322p-2, 0x1.6c434ap-2, 
    0x1.5d18c2p-2, 0x1.13e29ep-2, -0x1.0c3a04p-2, 0x1.883528p-4, -0x1.fc574p-4, -0x1.d5992p-5, 0x1.77aa6ap-2, -0x1.fc4678p-4, 
    0x1.939948p-4, -0x1.6ad69cp-2, -0x1.38353cp-2, 0x1.7079f2p-2, 0x1.09753ap-2, 0x1.85203cp-3, -0x1.372bb8p-3, -0x1.6e0914p-3, 
    0x1.baf29ap-2, 0x1.217b18p-4, -0x1.7dcb16p-3, 0x1.c8efp-7, -0x1.0bf058p-3, 0x1.b395a4p-3, 0x1.8d0e7cp-3, 0x1.aed9e2p-2, 
    0x1.bc3d54p-3, -0x1.2ff244p-2, -0x1.34bd28p-3, -0x1.55528p-5, 0x1.92406ep-2, -0x1.430954p-2, 0x1.2ee604p-3, 0x1.32749p-5, 
    -0x1.03019ep-4, 0x1.597d32p-1, -0x1.716e2p-2, 0x1.217d98p-4, -0x1.9bb902p-1, 0x1.3d104cp-3, -0x1.70da6p-2, 0x1.50944ap-2, 
    0x1.bb1a78p-2, -0x1.eaa59p-1, 0x1.91ed3cp-1, 0x1.2cfa22p-4, 0x1.9dbb64p-3, 0x1.570d68p-1, 0x1.215adp-1, -0x1.c04358p-1, 
    -0x1.6141d8p-4, -0x1.36dcb2p-2, 0x1.eb7e64p-3, 0x1.c3c64p-6, 0x1.750a82p-2, -0x1.95cafep-2, -0x1.b4482ep-2, 0x1.45ea9ep-2, 
    -0x1.80a73p-5, 0x1.0cac6p-4, 0x1.d22fe8p-4, 0x1.429076p-2, 0x1.05ed5ep-2, -0x1.ccc6fp-4, 0x1.8f1bp-7, -0x1.0580e8p-3, 
    -0x1.afbf84p-3, -0x1.61e33cp-3, -0x1.9c10a8p-2, -0x1.b6eda8p-3, 0x1.0f67e6p-2, 0x1.01ef3cp-3, 0x1.bda6d8p-4, -0x1.6e814cp-2, 
    -0x1.c762bep-9, 0x1.199dbcp-1, -0x1.9c9d86p-2, -0x1.a8c3d4p-3, -0x1.c0c14cp-1, 0x1.254beap-2, 0x1.7f49b6p-2, 0x1.09a136p-1, 
    0x1.b2e088p-2, 0x1.24eec2p-3, 0x1.695584p-4, -0x1.4cf5dcp-3, -0x1.987aa8p-3, -0x1.087092p-1, -0x1.6a3cb2p-1, 0x1.29b44ep-2, 
    -0x1.648756p-2, 0x1.1cea64p-3, 0x1.aa5b14p-3, -0x1.67324ep-2, 0x1.d324b4p-3, -0x1.593acp-6, -0x1.bb2a54p-2, 0x1.e422bcp-3, 
    -0x1.0ff9d8p-2, 0x1.a0bbb2p-2, 0x1.88a352p-2, 0x1.19b7f4p-3, -0x1.fa37ap-5, -0x1.6fbb2p-6, 0x1.03721p-5, 0x1.219ea2p-2, 
    0x1.13ac8cp-2, 0x1.4b93p-4, 0x1.5dca02p-2, -0x1.009c2ap-4, 0x1.6efe22p-2, -0x1.c0585ep-1, -0x1.8bd768p-2, 0x1.403c42p-4, 
    0x1.2ae40cp-3, -0x1.4b0cdp-3, 0x1.0e8a9ep-2, 0x1.0837eap-2, -0x1.cc359p-4, -0x1.895e68p-4, 0x1.b7fd42p-2, -0x1.7285b8p-4, 
    -0x1.6fe70cp-2, 0x1.a3db3ep-2, -0x1.609116p-2, -0x1.14ce94p-2, 0x1.79ed36p-2, 0x1.224814p-3, 0x1.91b868p-4, -0x1.9630dcp-3, 
    0x1.356bf6p-2, -0x1.8263a2p-3, 0x1.a62264p-3, -0x1.7b59p-2, -0x1.99eaap-3, -0x1.830356p-2, 0x1.3bda74p-3, -0x1.627498p-2, 
    -0x1.e0901ap-3, 0x1.b83f7ep-2, 0x1.61df26p-2, -0x1.a74bdcp-2, -0x1.8b95a8p-3, -0x1.65f658p-2, -0x1.38p-13, 0x1.77c3acp-3, 
    -0x1.a19fe8p-4, 0x1.fe7178p-4, -0x1.d4261p-3, -0x1.424494p-2, -0x1.d500bp-5, 0x1.77aeb2p-2, 0x1.ad9fd4p-3, -0x1.9e7004p-2
};
#ifdef __cplusplus
}  // extern "C"
#endif

#ifdef __cplusplus
extern "C" {
#endif
static const float __attribute__((section(".rodata.tvm"), aligned(4))) constant_1[16] = {
    0x0p+0   , -0x1.e5e3cep-2, 0x1.7acb34p-1, 0x0p+0   , 0x0p+0   , 0x0p+0   , -0x1.3fbfa8p-2, -0x1.3cdeacp-3, 
    0x0p+0   , 0x0p+0   , 0x1.8563b6p-2, 0x0p+0   , 0x0p+0   , 0x0p+0   , 0x0p+0   , 0x0p+0   
};
#ifdef __cplusplus
}  // extern "C"
#endif

#ifdef __cplusplus
extern "C" {
#endif
static const float __attribute__((section(".rodata.tvm"), aligned(4))) constant_0[16] = {
    -0x1.89f05p-4, 0x1.5342b2p-3, -0x1.eb753cp-4, -0x1.b9032p-5, -0x1.08a552p-1, -0x1.6f8aep-4, 0x1.225ecep-3, 0x1.a72cbp-2, 
    -0x1.363fc6p-2, -0x1.ef260ap-2, 0x1.e4ac4ep-3, -0x1.aaf1cp-4, -0x1.dd39e4p-2, -0x1.e15e3ap-2, -0x1.4f7288p-3, -0x1.235824p-1
};
#ifdef __cplusplus
}  // extern "C"
#endif
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add(float* placeholder, float* T_add, uint8_t* global_workspace_5_var) {
  void* compute_global_let = (&(global_workspace_5_var[256]));
  ((float*)compute_global_let)[0] = 0.000000e+00f;
  for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
    ((float*)compute_global_let)[0] = (((float*)compute_global_let)[0] + (placeholder[k_outer] * ((float*)constant_4)[k_outer]));
  }
  T_add[0] = (((float*)compute_global_let)[0] + ((float*)constant_5)[0]);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_nn_relu_1(float* placeholder, float* T_relu, uint8_t* global_workspace_4_var) {
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_4_var[192]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((float*)compute_global_let)[x_c_init] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
      for (int32_t x_c = 0; x_c < 8; ++x_c) {
        ((float*)compute_global_let)[x_c] = (((float*)compute_global_let)[x_c] + (placeholder[k_outer] * ((float*)constant_2)[(((ax1_outer_ax0_outer_fused * 128) + (k_outer * 8)) + x_c)]));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      float _1 = ((float*)compute_global_let)[ax1_inner_inner] + ((float*)constant_3)[cse_var_1];
      T_relu[cse_var_1] = ((_1) > (0.000000e+00f) ? (_1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_nn_relu(float* placeholder, float* T_relu, uint8_t* global_workspace_2_var) {
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_2_var[64]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((float*)compute_global_let)[x_c_init] = 0.000000e+00f;
    }
    for (int32_t x_c = 0; x_c < 8; ++x_c) {
      ((float*)compute_global_let)[x_c] = (((float*)compute_global_let)[x_c] + (placeholder[0] * ((float*)constant_0)[((ax1_outer_ax0_outer_fused * 8) + x_c)]));
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      float _1 = ((float*)compute_global_let)[ax1_inner_inner] + ((float*)constant_1)[cse_var_1];
      T_relu[cse_var_1] = ((_1) > (0.000000e+00f) ? (_1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_1(float* placeholder, float* T_reshape, uint8_t* global_workspace_3_var) {
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_reshape[ax1_inner] = placeholder[ax1_inner];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape(float* placeholder, float* T_reshape, uint8_t* global_workspace_1_var) {
  T_reshape[0] = placeholder[0];
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* dense_2_input_buffer_var, float* output_buffer_var, uint8_t* global_workspace_0_var) {
  printf("tvmgen_default_run %f %f\n", *dense_2_input_buffer_var, *output_buffer_var);
  void* sid_2_let = (&(global_workspace_0_var[192]));
  void* sid_6_let = (&(global_workspace_0_var[96]));
  void* sid_3_let = (&(global_workspace_0_var[128]));
  void* sid_4_let = (&(global_workspace_0_var[64]));
  void* sid_5_let = (&(global_workspace_0_var[0]));
  if (tvmgen_default_fused_reshape(dense_2_input_buffer_var, sid_6_let, global_workspace_0_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_nn_relu(sid_6_let, sid_5_let, global_workspace_0_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_1(sid_5_let, sid_4_let, global_workspace_0_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_nn_relu_1(sid_4_let, sid_3_let, global_workspace_0_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_1(sid_3_let, sid_2_let, global_workspace_0_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add(sid_2_let, output_buffer_var, global_workspace_0_var) != 0 ) return -1;
  return 0;
}

