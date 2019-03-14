
/*
 *  Copyright (C) Three Zhang
 *  Copyright (C) QuantMatrix All rights reserved.
 */


#ifndef _MATRIX_MTRX_FREEBSD_CONFIG_H_INCLUDED_
#define _MATRIX_MTRX_FREEBSD_CONFIG_H_INCLUDED_

#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
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
#include <time.h>
#include <sys/param.h>          /* ALIGN() */
#include <sys/mount.h>          /* statfs() */

#include <sys/filio.h>          /* FIONBIO */
#include <sys/uio.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sched.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>        /* TCP_NODELAY, TCP_NOPUSH */
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/un.h>

#include <libutil.h>            /* setproctitle() before 4.1 */
#include <osreldate.h>
#include <sys/sysctl.h>

#include <dlfcn.h>

#include <semaphore.h>
#include <sys/event.h>
#include <aio.h>

#include <mtrx_auto_config.h>

#if __FreeBSD_version < 400017

/*
 * FreeBSD 3.x has no CMSG_SPACE() and CMSG_LEN() and has the broken CMSG_DATA()
 */

#undef  CMSG_SPACE
#define CMSG_SPACE(l)       (ALIGN(sizeof(struct cmsghdr)) + ALIGN(l))

#undef  CMSG_LEN
#define CMSG_LEN(l)         (ALIGN(sizeof(struct cmsghdr)) + (l))

#undef  CMSG_DATA
#define CMSG_DATA(cmsg)     ((u_char *)(cmsg) + ALIGN(sizeof(struct cmsghdr)))

#endif

#ifndef IOV_MAX
#define IOV_MAX   1024
#endif

extern char **environ;
extern char *malloc_options;

#endif /* _MATRIX_MTRX_FREEBSD_CONFIG_H_INCLUDED_ */
