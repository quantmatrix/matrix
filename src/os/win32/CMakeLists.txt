cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
aux_source_directory(. MATRIX_WIN32_DIR_LIB_SRCS)
add_library(MATRIX_WIN32 STATIC ${MATRIX_WIN32_DIR_LIB_SRCS})