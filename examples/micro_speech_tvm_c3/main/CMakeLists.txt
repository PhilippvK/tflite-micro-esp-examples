#
# Main component of TF Micro project 'micro_speech'.
#

idf_component_register(
  SRCS
  main.cc
  main_functions.cc
  audio_provider.cc
  feature_provider.cc
  # no_micro_features_data.cc yes_micro_features_data.cc model.cc
  recognize_commands.cc
  command_responder.cc
  micro_features_generator.cc
  micro_model_settings.cc
  ringbuf.c
  aot_wrapper.c
  codegen/host/src/default_lib0.c
  codegen/host/src/default_lib1.c
  kissfft/kiss_fft.c
  kissfft/tools/kiss_fftr.c
  microfrontend/lib/frontend.c
  microfrontend/lib/fft.cc
  microfrontend/lib/window.c
  microfrontend/lib/log_scale.c
  microfrontend/lib/log_lut.c
  microfrontend/lib/pcan_gain_control.c
  microfrontend/lib/noise_reduction.c
  microfrontend/lib/filterbank.c
  microfrontend/lib/frontend_util.c
  microfrontend/lib/window_util.c
  microfrontend/lib/fft_util.cc
  microfrontend/lib/filterbank_util.c
  microfrontend/lib/noise_reduction_util.c
  microfrontend/lib/pcan_gain_control_util.c
  microfrontend/lib/log_scale_util.c
  # PRIV_REQUIRES tflite-lib spi_flash
  REQUIRES
  spi_flash
  INCLUDE_DIRS
  runtime/include/
  codegen/host/include/
  kissfft/
  kissfft/tools/
  .)
