
/*
 *  Copyright (C) Three Zhang
 *  Copyright (C) QuantMatrix All rights reserved.
 */


#ifndef _MATRIX_MTRX_DARWIN_CONFIG_H_INCLUDED_
#define _MATRIX_MTRX_DARWIN_CONFIG_H_INCLUDED_

#define __APPLE_USE_RFC_3542    /* IPV6_PKTINFO */

#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#include <inttypes.h>
#include <stdarg.h>
#include <stddef.h>             /* offsetof() */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <glob.h>
#include <sys/mount.h>          /* statfs() */

#include <sys/filio.h>          /* FIONBIO */
#include <sys/ioctl.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sched.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>        /* TCP_NODELAY */
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/un.h>

#include <sys/sysctl.h>
#include <xlocale.h>

#include <dlfcn.h>

#include <semaphore.h>
#include <sys/event.h>

#include <mtrx_auto_config.h>

#ifndef IOV_MAX
#define IOV_MAX   64
#endif

#define NGX_LISTEN_BACKLOG  -1

#ifndef NGX_HAVE_INHERITED_NONBLOCK
#define NGX_HAVE_INHERITED_NONBLOCK  1
#endif

#ifndef NGX_HAVE_CASELESS_FILESYSTEM
#define NGX_HAVE_CASELESS_FILESYSTEM  1
#endif

#define NGX_HAVE_OS_SPECIFIC_INIT    1
#define NGX_HAVE_DEBUG_MALLOC        1

extern char **environ;

#endif /* _MATRIX_MTRX_DARWIN_CONFIG_H_INCLUDED_ */