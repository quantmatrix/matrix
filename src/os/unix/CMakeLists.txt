cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
aux_source_directory(. MATRIX_UNIX_DIR_LIB_SRCS)
add_library(MATRIX_UNIX STATIC ${MATRIX_UNIX_DIR_LIB_SRCS})