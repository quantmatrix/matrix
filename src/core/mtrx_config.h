
/*
 *  Copyright (C) Three Zhang
 *  Copyright (C) QuantMatrix All rights reserved.
 */


#ifndef _MATRIX_MTRX_CONFIG_H_INCLUDED_
#define _MATRIX_MTRX_CONFIG_H_INCLUDED_


#include <mtrx_auto_headers.h>

#if (MTRX_LINUX)
#include <linux/mtrx_linux_config.h>

#elif (MTRX_DARWIN)
#include <darwin/mtrx_darwin_config.h>

#elif (MTRX_FREEBSD)
#include <freed/mtrx_freebsd_config.h>

#elif (MTRX_WIN32)
#include <mtrx_win32_config.h>

#else /* POSIX */
#include <posix/mtrx_posix_config.h>

#endif

#endif /* _MATRIX_MTRX_CONFIG_H_INCLUDED_ */
