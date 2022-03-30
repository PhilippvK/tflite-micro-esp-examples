#
# Main component of TF Micro project 'micro_speech'.
#

idf_component_register(
  SRCS
  main.cc
  main_functions.cc
  constants.cc
  output_handler.cc
  model.cc
  aot_wrapper.c
  codegen/host/src/default_lib0.c
  codegen/host/src/default_lib1.c
  # PRIV_REQUIRES tflite-lib spi_flash
  INCLUDE_DIRS
  runtime/include/
  codegen/host/include/
  .)
