cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
include(cmake/define.cmake)

project(${MATRIX_NAME} VERSION ${MATRIX_VERSION} LANGUAGES C)

if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(MATRIX_CURRENT_PLATFORM "QM_WIN32")
    set(MATRIX_SRC_OS_DIR "${MATRIX_SRC_OS_WIN32_DIR}")

elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
    set(MATRIX_CURRENT_PLATFORM "QM_FREEBSD")

elseif (CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(MATRIX_CURRENT_PLATFORM "QM_LINUX")

elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    set(MATRIX_CURRENT_PLATFORM "QM_DARWIN")

else ()
    set(MATRIX_CURRENT_PLATFORM "QM_POSIX")

endif (CMAKE_SYSTEM_NAME MATCHES "Windows")

enable_language(C)

include(cmake/set_variables.cmake)

configure_file(
    "cmake/matrix.h.in"
    "${PROJECT_BINARY_DIR}/include/${MATRIX_NAME}/matrix.h"
    @ONLY
)

configure_file(
    "cmake/mtrx_auto_config.h.in"
    "${PROJECT_BINARY_DIR}/include/${MATRIX_NAME}/mtrx_auto_config.h"
    @ONLY
)

configure_file(
    "cmake/mtrx_auto_headers.h.in"
    "${PROJECT_BINARY_DIR}/include/${MATRIX_NAME}/mtrx_auto_headers.h"
    @ONLY
)

include_directories(
    ${PROJECT_BINARY_DIR}/include/${MATRIX_NAME}
    ${MATRIX_SRC_OS_DIR}
    ${MATRIX_SRC_CORE_DIR}
)

add_subdirectory(${MATRIX_SRC_OS_DIR})

aux_source_directory(${MATRIX_SRC_CORE_DIR} DIR_SRCS)

add_executable(${MATRIX_EXECUTABLE} ${DIR_SRCS})

include(cmake/dist.cmake)

include(cmake/test.cmake)

include(cmake/message.cmake)