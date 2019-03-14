
/*
 *  Copyright (C) Three Zhang
 *  Copyright (C) QuantMatrix All rights reserved.
 */


#ifndef _MATRIX_MTRX_OS_H_INCLUDED_
#define _MATRIX_MTRX_OS_H_INCLUDED_

#if (MTRX_FREEBSD)
#include <freebsd/mtrx_freebsd.h>

#elif (MTRX_LINUX)
#include <linux/mtrx_linux.h>

#elif (MTRX_DARWIN)
#include <darwin/mtrx_darwin.h>
#endif

#endif /* _MATRIX_MTRX_OS_H_INCLUDED_ */
