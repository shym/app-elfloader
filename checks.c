#include <stddef.h>

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

_Static_assert(sizeof(va_list) == 32);
_Static_assert(sizeof(ino_t) == 8);
_Static_assert(sizeof(dev_t) == 8);
_Static_assert(sizeof(gid_t) == 4);
_Static_assert(sizeof(mode_t) == 4);
_Static_assert(sizeof(nlink_t) == 4);
_Static_assert(sizeof(uid_t) == 4);
_Static_assert(sizeof(off_t) == 8);
_Static_assert(sizeof(pid_t) == 4);
_Static_assert(sizeof(id_t) == 4);
_Static_assert(sizeof(caddr_t) == 8);
_Static_assert(sizeof(clock_t) == 8);
_Static_assert(sizeof(clockid_t) == 4);
_Static_assert(sizeof(time_t) == 8);
_Static_assert(sizeof(timer_t) == 8);
_Static_assert(sizeof(int8_t) == 1);
_Static_assert(sizeof(int16_t) == 2);
_Static_assert(sizeof(int32_t) == 4);
_Static_assert(sizeof(int64_t) == 8);
_Static_assert(sizeof(suseconds_t) == 8);
_Static_assert(offsetof(struct dirent, d_ino) == 0);
_Static_assert(sizeof(((struct dirent*)0)->d_ino) == 8);
_Static_assert(offsetof(struct dirent, d_off) == 8);
_Static_assert(sizeof(((struct dirent*)0)->d_off) == 8);
_Static_assert(offsetof(struct dirent, d_reclen) == 16);
_Static_assert(sizeof(((struct dirent*)0)->d_reclen) == 2);
_Static_assert(offsetof(struct dirent, d_type) == 18);
_Static_assert(sizeof(((struct dirent*)0)->d_type) == 1);
_Static_assert(offsetof(struct dirent, d_name) == 19);
_Static_assert(sizeof(((struct dirent*)0)->d_name) == 256);
_Static_assert(sizeof(struct dirent) == 280);
