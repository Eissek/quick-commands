/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: posixunix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file posixunix.c
   unit: posix
*/

#include "chicken.h"


#include <signal.h>
#include <errno.h>

#include <sys/stat.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#define C_curdir(buf)       (getcwd(C_c_string(buf), 1024) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

static C_TLS struct stat C_statbuf;

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

#ifndef S_IFSOCK
# define S_IFSOCK           0140000
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    ((ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = -C_unfix(C_block_item((v), 9)))

#define C_tm_set_08(v, tm)  cpy_tmvec_to_tmstc08( (tm), (v) )
#define C_tm_set_9(v, tm)   cpy_tmvec_to_tmstc9( (tm), (v) )

static struct tm *
C_tm_set( C_word v, void *tm )
{
  C_tm_set_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_set_9( v, (struct tm *)tm );
#endif
  return tm;
}

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#define C_strftime(v, f, tm) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set((v), (tm))) ? C_time_string : NULL)
#define C_a_mktime(ptr, c, v, tm)  C_flonum(ptr, mktime(C_tm_set((v), C_data_pointer(tm))))
#define C_asctime(v, tm)    (asctime(C_tm_set((v), (tm))))

#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_opendir(x,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b,l)    (C_strlcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name, l), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#ifdef HAVE_SETENV
# define C_unsetenv(s)      (unsetenv((char *)C_data_pointer(s)), C_SCHEME_TRUE)
# define C_setenv(x, y)     C_fix(setenv((char *)C_data_pointer(x), (char *)C_data_pointer(y), 1))
#else
# if defined(_WIN32) && !defined(__CYGWIN__)
#  define C_unsetenv(s)      C_setenv(s, C_SCHEME_FALSE)
# else
#  define C_unsetenv(s)      C_fix(putenv((char *)C_data_pointer(s)))
# endif
static C_word C_fcall C_setenv(C_word x, C_word y) {
  char *sx = C_c_string(x),
       *sy = (y == C_SCHEME_FALSE ? "" : C_c_string(y));
  int n1 = C_strlen(sx), n2 = C_strlen(sy);
  int buf_len = n1 + n2 + 2;
  char *buf = (char *)C_malloc(buf_len);
  if(buf == NULL) return(C_fix(0));
  else {
    C_strlcpy(buf, sx, buf_len);
    C_strlcat(buf, "=", buf_len);
    C_strlcat(buf, sy, buf_len);
    return(C_fix(putenv(buf)));
  }
}
#endif

#ifndef S_IFLNK
#define S_IFLNK S_IFREG
#endif

#ifndef S_IFREG
#define S_IFREG S_IFREG
#endif

#ifndef S_IFDIR
#define S_IFDIR S_IFREG
#endif

#ifndef S_IFCHR
#define S_IFCHR S_IFREG
#endif

#ifndef S_IFBLK
#define S_IFBLK S_IFREG
#endif

#ifndef S_IFSOCK
#define S_IFSOCK S_IFREG
#endif

#ifndef S_IFIFO
#define S_IFIFO S_IFREG
#endif

static C_TLS int C_wait_status;

#include <sys/time.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun) && defined(__SVR4)
# include <sys/tty.h>
# include <termios.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#include <sys/mman.h>
#include <sys/poll.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef ARG_MAX
# define ARG_MAX 256
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#if defined(HAVE_CRT_EXTERNS_H)
# include <crt_externs.h>
# define C_getenventry(i)       ((*_NSGetEnviron())[ i ])
#elif defined(C_MACOSX)
# define C_getenventry(i)       NULL
#else
extern char **environ;
# define C_getenventry(i)       (environ[ i ])
#endif

#ifndef ENV_MAX
# define ENV_MAX        1024
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct utsname C_utsname;
static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;
#ifdef HAVE_GRP_H
static C_TLS struct group *C_group;
#else
static C_TLS struct {
  char *gr_name, gr_passwd;
  int gr_gid;
  char *gr_mem[ 1 ];
} C_group = { "", "", 0, { "" } };
#endif

/* Android doesn't provide pw_gecos in the passwd struct */
#ifdef __ANDROID__
# define C_PW_GECOS ("")
#else
# define C_PW_GECOS (C_user->pw_gecos)
#endif

static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct timeval C_timeval;
static C_TLS char C_hostbuf[ 256 ];
static C_TLS struct stat C_statbuf;

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#define C_fchdir(fd)        C_fix(fchdir(C_unfix(fd)))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_data_pointer(fn), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_data_pointer(o), C_data_pointer(n)))
#define C_do_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam((char *)C_data_pointer(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#if !defined(__ANDROID__) && defined(HAVE_GRP_H)
#define C_getgrnam(n)       C_mk_bool((C_group = getgrnam((char *)C_data_pointer(n))) != NULL)
#define C_getgrgid(u)       C_mk_bool((C_group = getgrgid(C_unfix(u))) != NULL)
#else
#define C_getgrnam(n)       C_SCHEME_FALSE
#define C_getgrgid(n)       C_SCHEME_FALSE
#endif
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate((char *)C_data_pointer(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_uname             C_fix(uname(&C_utsname))
#define C_alarm             alarm
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_sleep             sleep
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_lstat(fn)         C_fix(lstat((char *)C_data_pointer(fn), &C_statbuf))

static void C_fcall C_set_arg_string(char **where, int i, char *a, int len) {
  char *ptr;
  if(a != NULL) {
    ptr = (char *)C_malloc(len + 1);
    C_memcpy(ptr, a, len);
    ptr[ len ] = '\0';
    /* Can't barf() here, so the NUL byte check happens in Scheme */
  }
  else ptr = NULL;
  where[ i ] = ptr;
}

static void C_fcall C_free_arg_string(char **where) {
  while((*where) != NULL) C_free(*(where++));
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_free_exec_args()		C_free_arg_string(C_exec_args)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)
#define C_free_exec_env()		C_free_arg_string(C_exec_env)

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), C_exec_args))
#define C_execve(f)         C_fix(execve(C_data_pointer(f), C_exec_args, C_exec_env))

#if defined(__FreeBSD__) || defined(C_MACOSX) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sgi__) || defined(sgi) || defined(__DragonFly__) || defined(__SUNPRO_C)
static C_TLS int C_uw;
# define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
# define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
# define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
# define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
# define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
# define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))
#else
# define C_WIFEXITED(n)      C_mk_bool(WIFEXITED(C_unfix(n)))
# define C_WIFSIGNALED(n)    C_mk_bool(WIFSIGNALED(C_unfix(n)))
# define C_WIFSTOPPED(n)     C_mk_bool(WIFSTOPPED(C_unfix(n)))
# define C_WEXITSTATUS(n)    C_fix(WEXITSTATUS(C_unfix(n)))
# define C_WTERMSIG(n)       C_fix(WTERMSIG(C_unfix(n)))
# define C_WSTOPSIG(n)       C_fix(WSTOPSIG(C_unfix(n)))
#endif

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1);
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo((char *)C_data_pointer(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))
#define C_sigprocmask_get(d)        C_fix(sigprocmask(SIG_SETMASK, NULL, &C_sigset))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4) || defined(C_MACOSX) || defined(__ANDROID__) || defined(_AIX)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t C_timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#else
#define C_timegm timegm
#endif

#define C_a_timegm(ptr, c, v, tm)  C_flonum(ptr, C_timegm(C_tm_set((v), C_data_pointer(tm))))

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

/* tm_get could be in posix-common, but it's only used in here */
#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix(-(ptm)->tm_gmtoff)))

#define C_tm_get_08(v, tm)  cpy_tmstc08_to_tmvec( (v), (tm) )
#define C_tm_get_9(v, tm)   cpy_tmstc9_to_tmvec( (v), (tm) )

static C_word
C_tm_get( C_word v, void *tm )
{
  C_tm_get_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_get_9( v, (struct tm *)tm );
#endif
  return v;
}

#define C_strptime(s, f, v, stm) \
        (strptime(C_c_string(s), C_c_string(f), ((struct tm *)(stm))) ? C_tm_get((v), (stm)) : C_SCHEME_FALSE)

static gid_t *C_groups = NULL;

#define C_get_gid(n)      C_fix(C_groups[ C_unfix(n) ])
#define C_set_gid(n, id)  (C_groups[ C_unfix(n) ] = C_unfix(id), C_SCHEME_UNDEFINED)
#define C_set_groups(n)   C_fix(setgroups(C_unfix(n), C_groups))

#if !defined(__ANDROID__) && defined(TIOCGWINSZ)
static int get_tty_size(int p, int *rows, int *cols)
{
 struct winsize tty_size;
 int r;

 memset(&tty_size, 0, sizeof tty_size);

 r = ioctl(p, TIOCGWINSZ, &tty_size);
 if (r == 0) {
    *rows = tty_size.ws_row;
    *cols = tty_size.ws_col;
 }
 return r;
}
#else
static int get_tty_size(int p, int *rows, int *cols)
{
 *rows = *cols = 0;
 return -1;
}
#endif

static int set_file_mtime(char *filename, C_word tm)
{
  struct utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return utime(filename, &tb);
}

static C_word C_i_fifo_p(C_word name) 
{
  struct stat buf;
  int res;

  res = stat(C_c_string(name), &buf);

  if(res != 0) {
#ifdef __CYGWIN__
    return C_SCHEME_FALSE;
#else
    if(errno == ENOENT) return C_fix(0);
    else return C_fix(res);
#endif
  }

  if((buf.st_mode & S_IFMT) == S_IFIFO) return C_SCHEME_TRUE;
  else return C_SCHEME_FALSE;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[462];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,55,49,32,108,111,99,55,50,32,109,115,103,55,51,32,46,32,97,114,103,115,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,56,54,32,108,105,110,107,56,55,32,101,114,114,56,56,32,108,111,99,56,57,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,115,116,97,116,32,102,49,48,50,32,46,32,116,109,112,49,48,49,49,48,51,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,49,50,56,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,49,51,49,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,49,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,49,51,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,102,105,108,101,45,115,105,122,101,32,102,49,52,48,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,116,121,112,101,32,102,105,108,101,49,52,56,32,46,32,116,109,112,49,52,55,49,52,57,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,23),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,105,108,101,49,54,55,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,24),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,105,108,101,49,54,57,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,23),40,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,105,108,101,49,55,49,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,105,108,101,49,55,51,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,57,48,49,32,102,105,108,101,49,55,53,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,115,111,99,107,101,116,63,32,102,105,108,101,49,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,49,55,57,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,56,52,32,112,111,115,49,56,53,32,46,32,119,104,101,110,99,101,49,56,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,50,48,56,32,109,50,48,57,32,108,111,99,50,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,32,108,111,99,50,50,50,32,102,100,50,50,51,32,105,110,112,50,50,52,32,114,50,50,53,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,50,50,56,32,46,32,109,50,50,57,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,50,51,49,32,46,32,109,50,51,50,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,50,51,56,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,50,52,55,32,46,32,110,101,119,50,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,53,57,50,54,48,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,56,55,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,103,50,57,51,32,102,51,48,50,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,50,32,103,50,57,57,51,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,55,57,32,46,32,116,109,112,50,55,56,50,56,48,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,51,51,52,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,51,51,51,53,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,47),40,97,51,51,52,49,32,100,105,114,51,52,50,51,52,51,51,52,56,32,102,105,108,101,51,52,52,51,52,53,51,52,57,32,101,120,116,51,52,54,51,52,55,51,53,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,51,50,51,32,46,32,116,109,112,51,50,50,51,50,52,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,54,53,51,54,54,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,51,53,52,50,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,103,52,50,56,32,109,52,51,48,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,52,50,49,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,46),40,97,51,53,52,56,32,100,105,114,52,48,52,52,48,53,52,49,48,32,102,105,108,52,48,54,52,48,55,52,49,49,32,101,120,116,52,48,56,52,48,57,52,49,50,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,52,48,50,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,52,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,51,55,49,50,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,51,55,49,55,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,51,55,52,53,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,102,115,52,53,55,32,114,52,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,48,51,32,120,52,53,53,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,102,95,51,56,49,57,32,46,32,95,52,53,50,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,102,95,51,56,49,49,32,46,32,95,52,53,49,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,51,56,52,56,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,51,56,53,49,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,56,53,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,56,53,55,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,102,95,51,56,54,51,32,120,52,57,51,32,121,52,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,56,54,48,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,15),40,102,95,51,56,55,49,32,46,32,95,52,57,49,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,51,56,54,56,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,31),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,52,56,56,32,46,32,116,109,112,52,56,55,52,56,57,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,53,50,48,32,116,109,53,50,49,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,53,50,56,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,53,52,49,53,52,50,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,53,54,48,53,54,49,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,53,55,50,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,32),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,54,48,53,32,46,32,116,109,112,54,48,52,54,48,54,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,22),40,115,101,116,101,110,118,32,118,97,114,54,49,57,32,118,97,108,54,50,48,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,17),40,117,110,115,101,116,101,110,118,32,118,97,114,54,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,54,51,57,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,54,51,54,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,54,52,51,32,112,114,111,99,54,52,52,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,52,50,52,51,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,33),40,97,52,50,52,57,32,101,112,105,100,54,54,56,32,101,110,111,114,109,54,54,57,32,101,99,111,100,101,54,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,54,53,51,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,102,100,55,50,50,55,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,105,110,116,55,50,55,55,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,39),40,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,55,56,50,32,99,109,100,55,56,51,32,46,32,116,109,112,55,56,49,55,56,52,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,55,57,53,32,102,108,97,103,115,55,57,54,32,46,32,109,111,100,101,55,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,99,108,111,115,101,32,102,100,56,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,37),40,102,105,108,101,45,114,101,97,100,32,102,100,56,48,56,32,115,105,122,101,56,48,57,32,46,32,98,117,102,102,101,114,56,49,48,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,38),40,102,105,108,101,45,119,114,105,116,101,32,102,100,56,49,57,32,98,117,102,102,101,114,56,50,48,32,46,32,115,105,122,101,56,50,49,41,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,56,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,56,53,56,32,102,100,115,114,108,56,54,49,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,56,55,54,32,102,100,115,119,108,56,55,57,41,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,23),40,108,112,32,105,57,51,51,32,114,101,115,57,51,52,32,102,100,115,57,51,53,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,23),40,108,112,32,105,57,49,52,32,114,101,115,57,49,53,32,102,100,115,57,49,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,56,51,55,32,102,100,115,119,56,51,56,32,46,32,116,105,109,101,111,117,116,56,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,57,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,25),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,102,100,57,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,108,111,99,57,55,50,32,99,109,100,57,55,51,32,105,110,112,57,55,52,32,114,57,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,57,55,56,32,46,32,109,57,55,57,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,57,56,56,32,46,32,109,57,56,57,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,57,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,28),40,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,49,48,48,50,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,7),40,97,53,49,49,49,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,21),40,97,53,49,49,55,32,46,32,114,101,115,117,108,116,115,49,48,49,55,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,50),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,49,48,49,51,32,112,114,111,99,49,48,49,52,32,46,32,109,111,100,101,49,48,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,7),40,97,53,49,51,53,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,21),40,97,53,49,52,49,32,46,32,114,101,115,117,108,116,115,49,48,50,52,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,51),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,49,48,50,48,32,112,114,111,99,49,48,50,49,32,46,32,109,111,100,101,49,48,50,50,41,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,97,53,49,53,57,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,97,53,49,55,48,32,46,32,114,101,115,117,108,116,115,49,48,51,57,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,7),40,97,53,49,54,52,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,7),40,97,53,49,55,57,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,51),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,49,48,50,55,32,116,104,117,110,107,49,48,50,56,32,46,32,109,111,100,101,49,48,50,57,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,97,53,49,57,51,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,21),40,97,53,50,48,52,32,46,32,114,101,115,117,108,116,115,49,48,53,54,41,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,7),40,97,53,49,57,56,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,7),40,97,53,50,49,51,41,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,50),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,49,48,52,52,32,116,104,117,110,107,49,48,52,53,32,46,32,109,111,100,101,49,48,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,13),40,99,114,101,97,116,101,45,112,105,112,101,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,57,52,41,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,49,48,57,49,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,24),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,49,49,50,50,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,22),40,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,49,49,50,54,41,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,24),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,49,49,51,49,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,41),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,49,49,54,52,32,46,32,116,109,112,49,49,54,51,49,49,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,50,48,51,41,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,43),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,103,114,111,117,112,49,49,57,48,32,46,32,116,109,112,49,49,56,57,49,49,57,49,41,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,50,50,50,41,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,12),40,103,101,116,45,103,114,111,117,112,115,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,50,50,57,32,108,115,116,49,50,51,49,32,105,49,50,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,22),40,115,101,116,45,103,114,111,117,112,115,33,32,108,115,116,48,49,50,50,56,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,35),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,117,115,101,114,49,50,52,57,32,105,100,49,50,53,48,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,34),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,49,50,57,52,32,109,49,50,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,42),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,102,110,49,50,57,57,32,117,105,100,49,51,48,48,32,103,105,100,49,51,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,49,51,48,54,32,97,99,99,49,51,48,55,32,108,111,99,49,51,48,56,41,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,51,49,50,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,51,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,51,49,52,41,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,16),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,49,51,51,52,32,110,101,119,49,51,51,53,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,49,51,52,48,32,108,111,99,97,116,105,111,110,49,51,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,7),40,97,53,57,53,52,41,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,99,111,109,112,111,110,101,110,116,115,49,51,54,48,32,114,101,115,117,108,116,49,51,54,49,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,67),40,97,53,57,54,48,32,98,97,115,101,45,111,114,105,103,105,110,49,51,53,54,32,98,97,115,101,45,100,105,114,101,99,116,111,114,121,49,51,53,55,32,100,105,114,101,99,116,111,114,121,45,99,111,109,112,111,110,101,110,116,115,49,51,53,56,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,44),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,49,51,52,57,32,46,32,116,109,112,49,51,52,56,49,51,53,48,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,108,105,110,107,32,111,108,100,49,51,56,52,32,110,101,119,49,51,56,53,41,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,7),40,97,54,50,53,54,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,7),40,97,54,50,56,49,41,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,7),40,97,54,50,57,51,41,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,7),40,97,54,51,49,53,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,110,49,52,54,52,32,109,49,52,54,53,32,115,116,97,114,116,49,52,54,54,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,41),40,97,54,51,51,48,32,112,111,114,116,49,52,53,57,32,110,49,52,54,48,32,100,101,115,116,49,52,54,49,32,115,116,97,114,116,49,52,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,15),40,97,54,52,51,52,32,112,111,115,49,52,56,54,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,7),40,97,54,52,50,52,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,40),40,97,54,52,56,48,32,110,101,120,116,49,52,57,52,32,108,105,110,101,49,52,57,53,32,102,117,108,108,45,108,105,110,101,63,49,52,57,54,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,23),40,97,54,52,48,54,32,112,49,52,56,48,32,108,105,109,105,116,49,52,56,49,41,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,16),40,97,54,53,50,57,32,112,111,114,116,49,53,48,49,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,49,51,57,52,32,110,97,109,49,51,57,53,32,102,100,49,51,57,54,32,46,32,116,109,112,49,51,57,51,49,51,57,55,41,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,26),40,112,111,107,101,49,53,50,57,32,115,116,114,49,53,51,53,32,108,101,110,49,53,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,15),40,97,54,55,48,53,32,115,116,114,49,53,55,51,41,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,7),40,97,54,55,49,49,41,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,7),40,97,54,55,51,51,41,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,16),40,102,95,54,55,52,50,32,115,116,114,49,53,53,51,41};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,114,101,109,49,53,53,56,32,115,116,97,114,116,49,53,53,57,32,108,101,110,49,53,54,48,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,16),40,102,95,54,55,53,55,32,115,116,114,49,53,53,54,41};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,63),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,49,53,49,51,32,110,97,109,49,53,49,52,32,102,100,49,53,49,53,32,46,32,116,109,112,49,53,49,50,49,53,49,54,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,49,53,56,49,32,111,102,102,49,53,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,32,112,111,114,116,49,53,57,48,32,97,114,103,115,49,53,57,49,32,108,111,99,49,53,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,30),40,101,114,114,32,109,115,103,49,54,48,55,32,108,111,99,107,49,54,48,56,32,108,111,99,49,54,48,57,41,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,108,111,99,107,32,112,111,114,116,49,54,49,48,32,46,32,97,114,103,115,49,54,49,49,41,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,40),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,49,54,49,51,32,46,32,97,114,103,115,49,54,49,52,41};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,36),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,49,54,49,54,32,46,32,97,114,103,115,49,54,49,55,41,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,22),40,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,49,54,51,52,41,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,49,54,51,56,32,46,32,109,111,100,101,49,54,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,20),40,102,105,102,111,63,32,102,105,108,101,110,97,109,101,49,54,52,52,41,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,54,56,48,32,108,101,110,49,54,56,49,32,112,114,111,116,49,54,56,50,32,102,108,97,103,49,54,56,51,32,102,100,49,54,56,52,32,46,32,111,102,102,49,54,56,53,41};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,55,48,50,32,46,32,108,101,110,49,55,48,51,41,0,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,55,48,55,41,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,55,49,48,41,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,36),40,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,49,55,51,50,32,46,32,116,109,112,49,55,51,49,49,55,51,51,41,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,26),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,55,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,105,110,116,49,55,53,57,49,55,54,50,41};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,55,54,52,32,109,111,100,101,49,55,54,53,32,46,32,115,105,122,101,49,55,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,55,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,101,114,109,105,110,97,108,45,99,104,101,99,107,32,99,97,108,108,101,114,49,55,56,51,32,112,111,114,116,49,55,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,49,55,57,52,41};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,56,48,54,41};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,18),40,102,95,55,54,50,56,32,116,104,117,110,107,49,56,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,7),40,97,55,54,49,51,41,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,116,109,112,49,56,51,51,49,56,51,52,41,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,49),40,115,101,116,97,114,103,32,105,110,116,49,56,54,52,49,56,55,48,32,99,45,115,116,114,105,110,103,49,56,54,53,49,56,55,49,32,105,110,116,49,56,54,54,49,56,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,49),40,115,101,116,101,110,118,32,105,110,116,49,56,55,54,49,56,56,50,32,99,45,115,116,114,105,110,103,49,56,55,55,49,56,56,51,32,105,110,116,49,56,55,56,49,56,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,57,49,48,32,101,108,49,57,49,50,32,105,49,57,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,57,48,54,32,97,108,49,57,48,56,32,105,49,57,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,56,57,51,32,46,32,116,109,112,49,56,57,50,49,56,57,52,41,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,7),40,97,55,56,56,53,41,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,57,51,51,32,110,111,104,97,110,103,49,57,51,52,41,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,19),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,19),40,115,108,101,101,112,32,105,110,116,49,57,52,54,49,57,52,57,41,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,49,57,53,49,32,46,32,115,105,103,49,57,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,57,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,57,54,52,32,46,32,97,114,103,115,49,57,54,53,41,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,7),40,97,56,48,50,56,41,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,29),40,97,56,48,51,52,32,95,49,57,56,57,32,102,108,103,49,57,57,48,32,99,111,100,49,57,57,49,41,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,8),40,102,95,56,48,49,52,41};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,68),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,49,57,56,50,32,112,105,100,49,57,56,51,32,99,108,115,118,101,99,49,57,56,52,32,105,100,120,49,57,56,53,32,105,100,120,97,49,57,56,54,32,105,100,120,98,49,57,56,55,41,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,7),40,97,56,48,53,55,41,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,19),40,97,56,48,54,51,32,105,49,57,57,54,32,111,49,57,57,55,41,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,22),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,49,57,57,52,41,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,34),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,49,57,57,57,32,112,111,114,116,50,48,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,43),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,50,48,48,55,32,112,111,114,116,50,48,48,56,32,115,116,100,102,100,50,48,48,57,41,0,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,14),40,115,119,97,112,112,101,100,45,101,110,100,115,41,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,7),40,97,56,49,51,50,41,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,67),40,115,112,97,119,110,32,99,109,100,50,48,50,48,32,97,114,103,115,50,48,50,49,32,101,110,118,50,48,50,50,32,115,116,100,111,117,116,102,50,48,50,51,32,115,116,100,105,110,102,50,48,50,52,32,115,116,100,101,114,114,102,50,48,50,53,41,0,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,59),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,50,48,51,50,32,99,109,100,50,48,51,52,32,112,105,112,101,50,48,51,53,32,115,116,100,102,50,48,51,54,32,111,110,45,99,108,111,115,101,50,48,51,56,41,0,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,60),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,50,48,52,48,32,99,109,100,50,48,52,50,32,112,105,112,101,50,48,52,51,32,115,116,100,102,50,48,52,52,32,111,110,45,99,108,111,115,101,50,48,52,54,41,0,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,7),40,97,56,49,56,50,41,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,50),40,97,56,49,56,56,32,105,110,112,105,112,101,50,48,53,53,32,111,117,116,112,105,112,101,50,48,53,54,32,101,114,114,112,105,112,101,50,48,53,55,32,112,105,100,50,48,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,83),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,50,48,52,56,32,99,109,100,50,48,52,57,32,97,114,103,115,50,48,53,48,32,101,110,118,50,48,53,49,32,115,116,100,111,117,116,102,50,48,53,50,32,115,116,100,105,110,102,50,48,53,51,32,115,116,100,101,114,114,102,50,48,53,52,41,0,0,0,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,7),40,103,50,48,55,52,41,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,55,51,41,0,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,50,48,55,48,41,0,0,0,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,7),40,97,56,50,56,51,41,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,58),40,37,112,114,111,99,101,115,115,32,108,111,99,50,48,54,51,32,101,114,114,63,50,48,54,52,32,99,109,100,50,48,54,53,32,97,114,103,115,50,48,54,54,32,101,110,118,50,48,54,55,32,107,50,48,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,31),40,97,56,51,50,49,32,105,50,49,49,56,32,111,50,49,49,57,32,112,50,49,50,48,32,101,50,49,50,49,41,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,50,49,48,54,32,46,32,116,109,112,50,49,48,53,50,49,48,55,41,0};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,50,49,50,55,32,46,32,116,109,112,50,49,50,54,50,49,50,56,41};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,50,49,52,56,41,0,0,0};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,15),40,97,56,52,50,57,32,112,105,100,49,51,50,51,41,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,24),40,97,56,52,52,55,32,112,105,100,49,51,50,56,32,112,103,105,100,49,51,50,57,41};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,7),40,97,56,52,54,57,41,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,14),40,97,56,52,55,50,32,105,100,49,49,53,54,41,0,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,7),40,97,56,52,56,56,41,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,14),40,97,56,52,57,49,32,105,100,49,49,53,49,41,0,0};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,7),40,97,56,53,48,55,41,0};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,14),40,97,56,53,49,48,32,105,100,49,49,52,54,41,0,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,7),40,97,56,53,50,54,41,0};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,14),40,97,56,53,50,57,32,105,100,49,49,52,49,41,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,115,105,103,115,49,49,49,54,32,109,97,115,107,49,49,49,55,41};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,7),40,97,56,53,52,53,41,0};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,14),40,97,56,53,55,57,32,115,105,103,54,52,57,41,0,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,19),40,97,56,53,56,56,32,46,32,116,109,112,53,48,52,53,48,53,41,0,0,0,0,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,13),40,97,56,54,49,51,32,117,109,53,49,55,41,0,0,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,15),40,97,56,54,49,57,32,112,111,114,116,49,57,54,41,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,12),40,97,56,54,53,54,32,102,49,49,49,41,0,0,0,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,17),40,97,56,54,54,50,32,102,49,49,51,32,116,49,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k8397 in set-root-directory! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub2143(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2143(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k7914 */
static C_word C_fcall stub1947(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1947(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub1943(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1943(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from freeenv */
static C_word C_fcall stub1886(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1886(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k7702 */
static C_word C_fcall stub1879(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1879(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub1874(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1874(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k7679 */
static C_word C_fcall stub1867(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1867(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k7622 */
static C_word C_fcall stub1853(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1853(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from fork */
static C_word C_fcall stub1827(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1827(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1820(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1820(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) C_return(NULL);else C_return(C_hostbuf);
C_ret:
#undef return

return C_r;}

/* from k7527 */
static C_word C_fcall stub1801(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1801(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k7503 */
static C_word C_fcall stub1790(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1790(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k7390 */
static C_word C_fcall stub1760(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1760(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k7370 */
static C_word C_fcall stub1754(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1754(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1748(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1748(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__) && !defined(_AIX)
time_t clock = time(NULL);struct tm *ltm = C_localtime(&clock);char *z = ltm ? (char *)ltm->tm_zone : 0;
#else
char *z = (daylight ? tzname[1] : tzname[0]);
#endif
C_return(z);
C_ret:
#undef return

return C_r;}

/* from k7298 */
static C_word C_fcall stub1718(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub1718(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
void * t3=(void * )C_data_pointer_or_null(C_a3);
C_r=((C_word)C_strptime(t0,t1,t2,t3));
return C_r;}

/* from k7241 */
static C_word C_fcall stub1696(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1696(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k7181 */
static C_word C_fcall stub1669(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub1669(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k6044 in k6040 in file-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub1376(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1376(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from k5711 */
static C_word C_fcall stub1243(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1243(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub1213(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1213(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) C_return(0);else C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1208(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1208(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
C_return(getgroups(n, C_groups));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1180(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1180(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
C_return(C_group->gr_mem[ i ]);
C_ret:
#undef return

return C_r;}

/* from a8469 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub1154(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1154(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a8488 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub1149(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1149(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a8507 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub1144(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1144(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a8526 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub1139(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1139(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub944(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub944(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;C_return(fds[i].revents & (POLLOUT|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub925(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub925(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;C_return(fds[i].revents & (POLLIN|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

/* from k4583 */
static C_word C_fcall stub900(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub900(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)poll(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub885(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub885(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;fds[i].fd = fd; fds[i].events = POLLOUT;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub867(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub867(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;fds[i].fd = fd; fds[i].events = POLLIN;
C_ret:
#undef return

return C_r;}

/* from k4350 */
static C_word C_fcall stub772(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub772(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k4299 */
static C_word C_fcall stub728(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub728(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub723(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub723(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) C_return(0);C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from k4128 */
static C_word C_fcall stub631(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub631(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k4026 */
static C_word C_fcall stub591(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub591(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k4013 */
static C_word C_fcall stub581(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub581(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3946 */
static C_word C_fcall stub552(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub552(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k8671 in a8662 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall stub120(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub120(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2661 */
static C_word C_fcall stub67(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub67(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_ccall f_5155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5399)
static void C_ccall f_5399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5359)
static void C_ccall f_5359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6985)
static void C_ccall f_6985(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6985)
static void C_ccall f_6985r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7373)
static void C_ccall f_7373(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7373)
static void C_ccall f_7373r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5388)
static void C_ccall f_5388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5655)
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5646)
static void C_ccall f_5646(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6902)
static void C_fcall f_6902(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6918)
static void C_ccall f_6918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6924)
static void C_fcall f_6924(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static C_word C_fcall f_4841(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7387)
static void C_ccall f_7387(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7805)
static void C_ccall f_7805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8322)
static void C_ccall f_8322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6967)
static void C_fcall f_6967(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_fcall f_3025(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7072)
static void C_ccall f_7072(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7072)
static void C_ccall f_7072r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7079)
static void C_fcall f_7079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8437)
static void C_ccall f_8437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8430)
static void C_ccall f_8430(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5597)
static void C_fcall f_5597(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6282)
static void C_ccall f_6282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8166)
static void C_fcall f_8166(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_fcall f_3639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_fcall f_3636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8177)
static void C_ccall f_8177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8170)
static void C_ccall f_8170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3648)
static void C_fcall f_3648(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8448)
static void C_ccall f_8448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5509)
static void C_fcall f_5509(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8443)
static void C_ccall f_8443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7001)
static void C_ccall f_7001(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7001)
static void C_ccall f_7001r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6530)
static void C_ccall f_6530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4666)
static void C_fcall f_4666(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_fcall f_4695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5536)
static void C_ccall f_5536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6213)
static void C_ccall f_6213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6216)
static void C_ccall f_6216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8110)
static void C_fcall f_8110(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8117)
static void C_ccall f_8117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5532)
static void C_fcall f_5532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7870)
static void C_ccall f_7870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4978)
static void C_fcall f_4978(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6255)
static void C_ccall f_6255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6774)
static void C_fcall f_6774(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6784)
static void C_ccall f_6784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8483)
static void C_ccall f_8483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8489)
static void C_ccall f_8489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7044)
static void C_ccall f_7044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8492)
static void C_ccall f_8492(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4636)
static void C_fcall f_4636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8464)
static void C_ccall f_8464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4548)
static void C_fcall f_4548(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4626)
static void C_ccall f_4626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3991)
static void C_ccall f_3991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6700)
static void C_ccall f_6700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8661)
static void C_ccall f_8661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8407)
static void C_ccall f_8407(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6712)
static void C_ccall f_6712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8673)
static void C_ccall f_8673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_fcall f_4554(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_fcall f_4551(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8657)
static void C_ccall f_8657(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8473)
static void C_ccall f_8473(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8470)
static void C_ccall f_8470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6742)
static void C_ccall f_6742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8624)
static void C_ccall f_8624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8627)
static void C_ccall f_8627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8620)
static void C_ccall f_8620(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7457)
static void C_ccall f_7457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8636)
static void C_ccall f_8636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5860)
static void C_ccall f_5860(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3562)
static void C_fcall f_3562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8614)
static void C_ccall f_8614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5834)
static void C_fcall f_5834(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3583)
static void C_fcall f_3583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8240)
static C_word C_fcall f_8240(C_word t0,C_word t1);
C_noret_decl(f_8249)
static C_word C_fcall f_8249(C_word t0,C_word t1);
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_fcall f_3528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8235)
static void C_fcall f_8235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8233)
static void C_fcall f_8233(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4390)
static void C_fcall f_4390(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7691)
static void C_fcall f_7691(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7413)
static void C_fcall f_7413(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7401)
static void C_fcall f_7401(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7404)
static void C_ccall f_7404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7668)
static void C_fcall f_7668(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6455)
static void C_ccall f_6455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7677)
static void C_ccall f_7677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8276)
static void C_ccall f_8276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8279)
static void C_ccall f_8279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7475)
static void C_fcall f_7475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7194)
static void C_fcall f_7194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7197)
static void C_ccall f_7197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7922)
static void C_fcall f_7922(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7618)
static void C_ccall f_7618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7463)
static void C_ccall f_7463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7614)
static void C_ccall f_7614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2938)
static void C_fcall f_2938(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8140)
static void C_ccall f_8140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_8159)
static void C_ccall f_8159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8155)
static void C_fcall f_8155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8131)
static void C_ccall f_8131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7117)
static void C_ccall f_7117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8096)
static C_word C_fcall f_8096(C_word *a,C_word t0);
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8092)
static void C_ccall f_8092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_fcall f_3426(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8081)
static void C_fcall f_8081(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8080)
static void C_ccall f_8080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6420)
static void C_fcall f_6420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8284)
static void C_ccall f_8284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7203)
static void C_ccall f_7203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7109)
static void C_ccall f_7109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8298)
static void C_ccall f_8298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8069)
static void C_fcall f_8069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3452)
static void C_fcall f_3452(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8064)
static void C_ccall f_8064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7254)
static void C_fcall f_7254(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8012)
static void C_fcall f_8012(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8014)
static void C_ccall f_8014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8029)
static void C_ccall f_8029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_fcall f_3301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6118)
static void C_fcall f_6118(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6117)
static void C_ccall f_6117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8008)
static void C_ccall f_8008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7952)
static void C_ccall f_7952(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6147)
static C_word C_fcall f_6147(C_word t0);
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_fcall f_6155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7918)
static void C_ccall f_7918(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7918)
static void C_ccall f_7918r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7943)
static void C_ccall f_7943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7965)
static void C_ccall f_7965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7962)
static void C_fcall f_7962(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6685)
static void C_ccall f_6685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7216)
static void C_ccall f_7216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7744)
static void C_fcall f_7744(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7534)
static void C_ccall f_7534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5961)
static void C_ccall f_5961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7530)
static void C_ccall f_7530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5007)
static void C_ccall f_5007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6695)
static void C_fcall f_6695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7559)
static void C_ccall f_7559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_fcall f_4149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_fcall f_4137(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7700)
static void C_ccall f_7700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3294)
static void C_fcall f_3294(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6635)
static void C_ccall f_6635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8527)
static void C_ccall f_8527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8521)
static void C_ccall f_8521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6654)
static void C_ccall f_6654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7581)
static void C_ccall f_7581(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7581)
static void C_ccall f_7581r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8546)
static void C_ccall f_8546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5416)
static void C_fcall f_5416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8540)
static void C_ccall f_8540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4786)
static void C_fcall f_4786(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3234)
static void C_fcall f_3234(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8552)
static void C_fcall f_8552(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4406)
static void C_ccall f_4406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_fcall f_5971(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static C_word C_fcall f_4799(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_fcall f_3207(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7757)
static void C_ccall f_7757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6877)
static void C_fcall f_6877(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5403)
static void C_ccall f_5403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5290)
static C_word C_fcall f_5290(C_word t0);
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4485)
static void C_fcall f_4485(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7786)
static void C_fcall f_7786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3123)
static void C_fcall f_3123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7571)
static void C_ccall f_7571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7574)
static void C_ccall f_7574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8580)
static void C_ccall f_8580(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8589)
static void C_ccall f_8589(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8589)
static void C_ccall f_8589r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7739)
static void C_ccall f_7739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7736)
static void C_ccall f_7736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_fcall f_3183(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_fcall f_4754(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_fcall f_6341(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_fcall f_6339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8035)
static void C_ccall f_8035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3878)
static void C_fcall f_3878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8049)
static void C_fcall f_8049(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7355)
static void C_ccall f_7355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8502)
static void C_ccall f_8502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8508)
static void C_ccall f_8508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8511)
static void C_ccall f_8511(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2682)
static void C_fcall f_2682(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7304)
static void C_ccall f_7304(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7304)
static void C_ccall f_7304r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5136)
static void C_ccall f_5136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;

C_noret_decl(trf_5655)
static void C_fcall trf_5655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5655(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5655(t0,t1,t2,t3);}

C_noret_decl(trf_6902)
static void C_fcall trf_6902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6902(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6902(t0,t1,t2,t3);}

C_noret_decl(trf_6924)
static void C_fcall trf_6924(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6924(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6924(t0,t1);}

C_noret_decl(trf_6967)
static void C_fcall trf_6967(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6967(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6967(t0,t1,t2,t3);}

C_noret_decl(trf_3025)
static void C_fcall trf_3025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3025(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3025(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7079)
static void C_fcall trf_7079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7079(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7079(t0,t1);}

C_noret_decl(trf_5597)
static void C_fcall trf_5597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5597(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5597(t0,t1,t2);}

C_noret_decl(trf_8166)
static void C_fcall trf_8166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8166(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8166(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3639)
static void C_fcall trf_3639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3639(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3639(t0,t1);}

C_noret_decl(trf_3636)
static void C_fcall trf_3636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3636(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3636(t0,t1);}

C_noret_decl(trf_3648)
static void C_fcall trf_3648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3648(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3648(t0,t1,t2,t3);}

C_noret_decl(trf_5509)
static void C_fcall trf_5509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5509(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5509(t0,t1);}

C_noret_decl(trf_4666)
static void C_fcall trf_4666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4666(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4666(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4695)
static void C_fcall trf_4695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4695(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4695(t0,t1);}

C_noret_decl(trf_8110)
static void C_fcall trf_8110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8110(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_8110(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_5532)
static void C_fcall trf_5532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5532(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5532(t0,t1,t2);}

C_noret_decl(trf_4978)
static void C_fcall trf_4978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4978(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4978(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6774)
static void C_fcall trf_6774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6774(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6774(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4636)
static void C_fcall trf_4636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4636(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4636(t0,t1);}

C_noret_decl(trf_4548)
static void C_fcall trf_4548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4548(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4548(t0,t1);}

C_noret_decl(trf_4554)
static void C_fcall trf_4554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4554(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4554(t0,t1);}

C_noret_decl(trf_4551)
static void C_fcall trf_4551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4551(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4551(t0,t1);}

C_noret_decl(trf_3562)
static void C_fcall trf_3562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3562(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3562(t0,t1,t2);}

C_noret_decl(trf_5834)
static void C_fcall trf_5834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5834(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5834(t0,t1,t2,t3);}

C_noret_decl(trf_3583)
static void C_fcall trf_3583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3583(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3583(t0,t1,t2);}

C_noret_decl(trf_2988)
static void C_fcall trf_2988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2988(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2988(t0,t1,t2,t3);}

C_noret_decl(trf_3528)
static void C_fcall trf_3528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3528(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3528(t0,t1,t2);}

C_noret_decl(trf_8235)
static void C_fcall trf_8235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8235(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8235(t0,t1,t2);}

C_noret_decl(trf_8233)
static void C_fcall trf_8233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8233(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8233(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4390)
static void C_fcall trf_4390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4390(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4390(t0,t1);}

C_noret_decl(trf_7691)
static void C_fcall trf_7691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7691(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7691(t0,t1,t2,t3);}

C_noret_decl(trf_7413)
static void C_fcall trf_7413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7413(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7413(t0,t1);}

C_noret_decl(trf_7401)
static void C_fcall trf_7401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7401(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7401(t0,t1);}

C_noret_decl(trf_7668)
static void C_fcall trf_7668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7668(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7668(t0,t1,t2,t3);}

C_noret_decl(trf_7475)
static void C_fcall trf_7475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7475(t0,t1,t2);}

C_noret_decl(trf_7194)
static void C_fcall trf_7194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7194(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7194(t0,t1);}

C_noret_decl(trf_7922)
static void C_fcall trf_7922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7922(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7922(t0,t1);}

C_noret_decl(trf_2938)
static void C_fcall trf_2938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2938(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2938(t0,t1);}

C_noret_decl(trf_8155)
static void C_fcall trf_8155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8155(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8155(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3426)
static void C_fcall trf_3426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3426(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3426(t0,t1);}

C_noret_decl(trf_8081)
static void C_fcall trf_8081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8081(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8081(t0,t1,t2,t3);}

C_noret_decl(trf_6420)
static void C_fcall trf_6420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6420(t0,t1);}

C_noret_decl(trf_8069)
static void C_fcall trf_8069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8069(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8069(t0,t1,t2);}

C_noret_decl(trf_3452)
static void C_fcall trf_3452(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3452(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3452(t0,t1);}

C_noret_decl(trf_7254)
static void C_fcall trf_7254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7254(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7254(t0,t1);}

C_noret_decl(trf_8012)
static void C_fcall trf_8012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8012(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8012(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3301)
static void C_fcall trf_3301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3301(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3301(t0,t1);}

C_noret_decl(trf_6118)
static void C_fcall trf_6118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6118(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6118(t0,t1);}

C_noret_decl(trf_6155)
static void C_fcall trf_6155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6155(t0,t1);}

C_noret_decl(trf_7962)
static void C_fcall trf_7962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7962(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7962(t0,t1);}

C_noret_decl(trf_7744)
static void C_fcall trf_7744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7744(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7744(t0,t1,t2,t3);}

C_noret_decl(trf_6695)
static void C_fcall trf_6695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6695(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6695(t0,t1);}

C_noret_decl(trf_4149)
static void C_fcall trf_4149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4149(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4149(t0,t1,t2);}

C_noret_decl(trf_4137)
static void C_fcall trf_4137(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4137(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4137(t0,t1,t2);}

C_noret_decl(trf_3294)
static void C_fcall trf_3294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3294(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3294(t0,t1,t2);}

C_noret_decl(trf_5416)
static void C_fcall trf_5416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5416(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5416(t0,t1);}

C_noret_decl(trf_4786)
static void C_fcall trf_4786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4786(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4786(t0,t1);}

C_noret_decl(trf_3234)
static void C_fcall trf_3234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3234(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3234(t0,t1,t2);}

C_noret_decl(trf_8552)
static void C_fcall trf_8552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8552(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8552(t0,t1,t2,t3);}

C_noret_decl(trf_5971)
static void C_fcall trf_5971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5971(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5971(t0,t1,t2,t3);}

C_noret_decl(trf_3207)
static void C_fcall trf_3207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3207(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3207(t0,t1,t2);}

C_noret_decl(trf_6877)
static void C_fcall trf_6877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6877(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6877(t0,t1);}

C_noret_decl(trf_4485)
static void C_fcall trf_4485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4485(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4485(t0,t1);}

C_noret_decl(trf_7786)
static void C_fcall trf_7786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7786(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7786(t0,t1,t2,t3);}

C_noret_decl(trf_3123)
static void C_fcall trf_3123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3123(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3123(t0,t1);}

C_noret_decl(trf_3183)
static void C_fcall trf_3183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3183(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3183(t0,t1);}

C_noret_decl(trf_4725)
static void C_fcall trf_4725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4725(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4725(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4754)
static void C_fcall trf_4754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4754(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4754(t0,t1);}

C_noret_decl(trf_6341)
static void C_fcall trf_6341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6341(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6341(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6339)
static void C_fcall trf_6339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6339(t0,t1);}

C_noret_decl(trf_3878)
static void C_fcall trf_3878(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3878(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3878(t0,t1,t2);}

C_noret_decl(trf_8049)
static void C_fcall trf_8049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8049(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8049(t0,t1);}

C_noret_decl(trf_2682)
static void C_fcall trf_2682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2682(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2682(t0,t1,t2,t3,t4);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr7r)
static void C_fcall tr7r(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7r(C_proc7 k){
int n;
C_word *a,t7;
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
n=C_rest_count(0);
a=C_alloc(n*3);
t7=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

/* k5129 in call-with-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5131,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5136,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5142,a[2]=t2,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:689: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}

/* k5207 in a5204 in a5198 in k5187 in with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a5204 in a5198 in k5187 in with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5205r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5205r(t0,t1,t2);}}

static void C_ccall f_5205r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5209,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:709: close-output-pipe */
t4=*((C_word*)lf[204]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* a5164 in k5153 in with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[2],a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:699: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* a5159 in k5153 in with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5160,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[209]+1));
t3=C_mutate2((C_word*)lf[209]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5395,2,t0,t1);}
t2=C_mutate2((C_word*)lf[253]+1 /* (set! current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8508,a[2]=((C_word)li235),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8511,a[2]=((C_word)li236),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:862: getter-with-setter */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,lf[452]);}

/* k5153 in with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5155,2,t0,t1);}
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=t6,a[3]=t4,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5165,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5180,a[2]=t4,a[3]=t6,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:696: ##sys#dynamic-wind */
t10=*((C_word*)lf[98]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[3],t7,t8,t9);}

/* with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5151(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5151r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5151r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5151r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5155,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[197]+1),t2,t4);}

/* k5187 in with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5189,2,t0,t1);}
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5194,a[2]=t6,a[3]=t4,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5199,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5214,a[2]=t4,a[3]=t6,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:704: ##sys#dynamic-wind */
t10=*((C_word*)lf[98]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[3],t7,t8,t9);}

/* k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5399,2,t0,t1);}
t2=C_mutate2((C_word*)lf[254]+1 /* (set! current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5403,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8489,a[2]=((C_word)li233),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8492,a[2]=((C_word)li234),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:872: getter-with-setter */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,lf[449]);}

/* with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5185r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5185r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5185r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5189,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[201]+1),t2,t4);}

/* a5179 in k5153 in with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5180,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[209]+1));
t3=C_mutate2((C_word*)lf[209]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5173 in a5170 in a5164 in k5153 in with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a5170 in a5164 in k5153 in with-input-from-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5171r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5171r(t0,t1,t2);}}

static void C_ccall f_5171r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5175,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:701: close-input-pipe */
t4=*((C_word*)lf[202]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k5364 in k5357 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5366,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* a5198 in k5187 in with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[2],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:707: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5359,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5388,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:844: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t3);}
else{
t3=t2;
f_5359(2,t3,C_SCHEME_UNDEFINED);}}

/* a5193 in k5187 in with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5194,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[211]+1));
t3=C_mutate2((C_word*)lf[211]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5380 in k5376 in k5372 in k5368 in k5364 in k5357 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5382,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1));}

/* k5669 in doloop1229 in k5648 in set-groups! in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:979: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[267],lf[268],((C_word*)t0)[3]);}

/* k5357 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k6987 in file-lock in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_flock_lock(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1367: err */
f_6967(((C_word*)t0)[4],lf[361],t1,lf[360]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* file-lock in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6985(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6985r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6985r(t0,t1,t2,t3);}}

static void C_ccall f_6985r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6989,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1365: setup */
f_6902(t4,t2,t3,lf[360]);}

/* _exit in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7373(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_7373r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7373r(t0,t1,t2);}}

static void C_ccall f_7373r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t1;
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub1754(C_SCHEME_UNDEFINED,t6));}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1754(C_SCHEME_UNDEFINED,t4));}}

/* k5372 in k5368 in k5364 in k5357 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5374,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k5368 in k5364 in k5357 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k5386 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:845: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[250],lf[252]);}

/* local-timezone-abbreviation in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7360,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1748(t2);
/* posixunix.scm:1485: ##sys#peek-c-string */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,C_fix(0));}

/* signal-mask! in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5323(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5323,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[246]);
t4=C_sigemptyset(C_fix(0));
t5=C_sigaddset(t2);
t6=C_sigprocmask_block(C_fix(0));
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* posixunix.scm:822: posix-error */
t7=lf[0];
f_2664(5,t7,t1,lf[133],lf[246],lf[247]);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k5610 in loop in k5590 in k5587 in k5584 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5376 in k5372 in k5368 in k5364 in k5357 in system-information in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5378,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=C_mutate2((C_word*)lf[244]+1 /* (set! signal-mask ...) */,t1);
t3=C_mutate2((C_word*)lf[245]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[246]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5323,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[248]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5339,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[250]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5355,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8527,a[2]=((C_word)li237),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8530,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:853: getter-with-setter */
t10=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,t9,lf[454]);}

/* k3064 in open-output-file* in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3066,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:379: check */
f_3025(((C_word*)t0)[4],lf[60],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* port->fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3068,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[61]);
t5=C_slot(t2,C_fix(7));
t6=C_eqp(lf[28],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3084,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:389: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[62]+1)))(3,*((C_word*)lf[62]+1),t7,t2);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3110,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:390: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[65]+1)))(4,*((C_word*)lf[65]+1),t7,t2,C_fix(0));}}

/* signal-masked? in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5317,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[245]);
t4=C_sigprocmask_get(C_fix(0));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_sigismember(t2));}

/* k5620 in k5587 in k5584 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:965: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[263],lf[264]);}

/* k3036 in check in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5648 in set-groups! in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5650,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5655,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5655(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* signal-unmask! in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5339,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[248]);
t4=C_sigemptyset(C_fix(0));
t5=C_sigaddset(t2);
t6=C_sigprocmask_unblock(C_fix(0));
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* posixunix.scm:829: posix-error */
t7=lf[0];
f_2664(5,t7,t1,lf[133],lf[248],lf[249]);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* doloop1229 in k5648 in set-groups! in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5655,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_set_groups(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5671,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:978: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_i_check_exact_2(t4,lf[267]);
t6=C_set_gid(t3,t4);
t7=C_slot(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* open-output-file* in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3054r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3054r(t0,t1,t2,t3);}}

static void C_ccall f_3054r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[60]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3066,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:379: mode */
f_2988(t5,C_SCHEME_FALSE,t3,lf[60]);}

/* k5639 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:960: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[263],lf[266]);}

/* k3050 in open-input-file* in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:375: check */
f_3025(((C_word*)t0)[4],lf[59],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* set-groups! in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5646(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5646,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5650,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_length(t2);
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub1213(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_5650(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:973: ##sys#error */
t6=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[267],lf[269]);}}

/* setup in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6902(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6902,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):C_i_car(t3));
t7=t6;
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_TRUE:C_i_car(t9));
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_i_nullp(t9);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6918,a[2]=t7,a[3]=t4,a[4]=t2,a[5]=t13,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1354: ##sys#check-port */
t17=*((C_word*)lf[359]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,t2,t4);}

/* k6916 in setup in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6918,2,t0,t1);}
t2=C_i_check_number_2(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6924,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[5],0,C_fix(0));
t6=t3;
f_6924(t6,t5);}
else{
t5=t3;
f_6924(t5,C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[3]));}}

/* open-input-file* in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3040r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3040r(t0,t1,t2,t3);}}

static void C_ccall f_3040r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[59]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3052,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:375: mode */
f_2988(t5,C_SCHEME_TRUE,t3,lf[59]);}

/* k6922 in k6916 in setup in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6924(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6924,NULL,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=C_flock_setup(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[358],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]));}

/* set-buffering-mode! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_7394r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7394r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7394r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7398,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1512: ##sys#check-port */
t6=*((C_word*)lf[359]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[398]);}

/* k7396 in set-buffering-mode! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_7401(t4,C_u_i_car(t3));}
else{
t3=t2;
f_7401(t3,C_fix((C_word)BUFSIZ));}}

/* doloop858 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_4841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=t1;
t5=C_i_foreign_fixnum_argumentp(t4);
t6=C_i_foreign_fixnum_argumentp(t3);
if(C_truep(((C_word*)t0)[2])){
t7=C_i_foreign_block_argumentp(((C_word*)t0)[2]);
t8=stub867(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_fixnum_plus(t1,C_fix(1));
t10=t2;
t11=C_u_i_cdr(t10);
t18=t9;
t19=t11;
t1=t18;
t2=t19;
goto loop;}
else{
t7=stub867(C_SCHEME_UNDEFINED,t5,t6,C_SCHEME_FALSE);
t8=C_fixnum_plus(t1,C_fix(1));
t9=t2;
t10=C_u_i_cdr(t9);
t18=t8;
t19=t10;
t1=t18;
t2=t19;
goto loop;}}}

/* set-alarm! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7387(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7387,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1760(C_SCHEME_UNDEFINED,t3));}

/* process* in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8352(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_8352r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8352r(t0,t1,t2,t3);}}

static void C_ccall f_8352r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
if(C_truep(C_i_nullp(t7))){
/* posixunix.scm:1792: %process */
f_8233(t1,lf[435],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[436]+1));}
else{
t10=C_i_cdr(t7);
/* posixunix.scm:1792: %process */
f_8233(t1,lf[435],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[436]+1));}}

/* k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3765,2,t0,t1);}
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:537: pproc */
t5=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:538: lproc */
t4=((C_word*)t0)[12];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}}

/* k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3667,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* posix-common.scm:535: pathname-file */
t3=*((C_word*)lf[99]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:544: pproc */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k7803 in doloop1910 in k7752 in doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_7805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_7786(t5,((C_word*)t0)[5],t3,t4);}

/* a8321 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8322,6,t0,t1,t2,t3,t4,t5);}
/* posixunix.scm:1789: values */
C_values(5,0,t1,t2,t3,t4);}

/* k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3772,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[94]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[95]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:535: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* posix-common.scm:536: symbolic-link? */
t3=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k3776 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3778,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:544: action */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
/* posix-common.scm:545: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* err in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6967(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6967,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t3,C_fix(1));
t6=C_slot(t3,C_fix(2));
t7=C_slot(t3,C_fix(3));
/* posixunix.scm:1362: posix-error */
t8=lf[0];
f_2664(8,t8,t1,lf[8],t4,t2,t5,t6,t7);}

/* k3687 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:537: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8304(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_8304r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8304r(t0,t1,t2,t3);}}

static void C_ccall f_8304r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8322,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1787: %process */
f_8233(t1,lf[434],C_SCHEME_FALSE,t2,t5,t9,t12);}

/* k8300 in k8296 in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_8276(2,t3,t2);}

/* k3690 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:537: action */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:537: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3648(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* check in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3025(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3025,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:368: posix-error */
t6=lf[0];
f_2664(6,t6,t1,lf[8],t2,lf[55],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3038,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:369: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(6,*((C_word*)lf[56]+1),t6,t4,*((C_word*)lf[57]+1),lf[58],lf[41]);}}

/* create-fifo in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7072(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7072r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7072r(t0,t1,t2,t3);}}

static void C_ccall f_7072r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_string_2(t2,lf[368]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7079,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_7079(t7,C_u_i_car(t6));}
else{
t6=C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_7079(t7,C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* k7077 in create-fifo in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7079,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_exact_2(t2,lf[368]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7096,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1396: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[3],lf[368]);}

/* k7094 in k7077 in create-fifo in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mkfifo(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1397: posix-error */
t3=lf[0];
f_2664(7,t3,((C_word*)t0)[3],lf[8],lf[368],lf[369],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5587 in k5584 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=stub1208(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:964: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t5);}
else{
t5=t2;
f_5592(2,t5,C_SCHEME_UNDEFINED);}}

/* k3783 in k3776 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:544: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5582,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5586,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5641,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:959: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=t3;
f_5586(2,t4,C_SCHEME_UNDEFINED);}}

/* k5584 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
if(C_truep(stub1213(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_5589(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:962: ##sys#error */
t4=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[263],lf[265]);}}

/* k3790 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:528: glob */
t2=*((C_word*)lf[88]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5105 in call-with-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5107,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5112,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5118,a[2]=t2,a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:680: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}

/* call-with-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5103r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5103r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5103r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5107,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[197]+1),t2,t4);}

/* k7019 in file-test-lock in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_flock_test(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_eqp(t2,C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t2));}
else{
/* posixunix.scm:1379: err */
f_6967(((C_word*)t0)[3],lf[365],t1,lf[364]);}}

/* k8435 in a8429 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* a8429 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8430(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8430,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[320]);
t4=C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8437,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8443,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1081: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}}

/* k5590 in k5587 in k5584 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5592,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5597(t5,((C_word*)t0)[3],C_fix(0));}

/* loop in k5590 in k5587 in k5584 in get-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5597(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5597,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_get_gid(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5612,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm:969: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* a3745 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3746,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3738 in a3717 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:541: glob */
t2=*((C_word*)lf[88]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3601 in g428 in k3577 in loop in k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:508: make-pathname */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[26],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8189,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_not(((C_word*)t0)[2]);
t7=C_i_not(((C_word*)t0)[3]);
t8=C_i_not(((C_word*)t0)[4]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8200,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=t10,a[11]=((C_word*)t0)[9],a[12]=t3,a[13]=((C_word*)t0)[3],tmp=(C_word)a,a+=14,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8220,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1757: make-on-close */
f_8012(t12,((C_word*)t0)[6],t5,t10,C_fix(0),C_fix(1),C_fix(2));}

/* a6281 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6282,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm:1209: ready? */
t3=((C_word*)t0)[4];
f_6118(t3,t1);}}

/* a8182 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8183,2,t0,t1);}
/* posixunix.scm:1750: spawn */
t2=((C_word*)t0)[2];
f_8110(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k3757 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:543: action */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:543: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3648(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k3754 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_3756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:543: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a6293 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6294,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:1214: posix-error */
t4=lf[0];
f_2664(7,t4,t2,lf[8],((C_word*)t0)[5],lf[347],((C_word*)t0)[4],((C_word*)t0)[6]);}
else{
/* posixunix.scm:1215: on-close */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* k6538 in a6529 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k3621 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:502: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[92]+1)))(3,*((C_word*)lf[92]+1),((C_word*)t0)[2],t1);}

/* output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8166(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8166,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8170,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1746: connect-parent */
f_8069(t7,t4,t5);}

/* k5558 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5509(t2,C_getgrnam(t1));}

/* k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3639,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posix-common.scm:528: make-pathname */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[9],lf[100]);}
else{
/* posix-common.scm:528: make-pathname */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[9],lf[101]);}}

/* k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3636(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3636,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t4=t3;
f_3639(t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3802,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:526: irregex */
t5=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}}

/* ##sys#process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[21],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_8177,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8183,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word)li217),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8189,a[2]=t7,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li218),tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1690: ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* k8168 in output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1747: ##sys#custom-output-port */
t2=*((C_word*)lf[351]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_TRUE,C_fix(0),((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* file-test-lock in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7017(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_7017r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7017r(t0,t1,t2,t3);}}

static void C_ccall f_7017r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7021,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1377: setup */
f_6902(t4,t2,t3,lf[364]);}

/* loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3648(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3648,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3667,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t5,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* posix-common.scm:534: directory? */
t9=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}}

/* k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3701,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3713,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3746,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:540: ##sys#dynamic-wind */
t11=*((C_word*)lf[98]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:543: pproc */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* a8447 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8448,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[440]);
t5=C_i_check_exact_2(t3,lf[440]);
t6=C_setpgid(t2,t3);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8464,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1088: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t7);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3646,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3648,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li43),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3648(t5,((C_word*)t0)[8],t1,((C_word*)t0)[9]);}

/* k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5509(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5509,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[258]+1):*((C_word*)lf[259]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5522,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8441 in a8429 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1082: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[320],lf[439],((C_word*)t0)[3]);}

/* k3091 in k3108 in port->fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5502(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_5502r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5502r(t0,t1,t2,t3);}}

static void C_ccall f_5502r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5509,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t8=t7;
f_5509(t8,C_getgrgid(t2));}
else{
t8=C_i_check_string_2(t2,lf[262]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5560,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:933: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[262]);}}

/* file-lock/blocking in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7001(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_7001r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7001r(t0,t1,t2,t3);}}

static void C_ccall f_7001r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7005,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1371: setup */
f_6902(t4,t2,t3,lf[362]);}

/* a3717 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_3718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[7])){
/* posix-common.scm:541: make-pathname */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[96]);}
else{
/* posix-common.scm:541: make-pathname */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[97]);}}

/* k7003 in file-lock/blocking in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_flock_lockw(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1373: err */
f_6967(((C_word*)t0)[4],lf[363],t1,lf[362]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* a6529 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6530,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[349]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1269: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}}

/* k3709 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:539: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a3712 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_3713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3713,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k8422 in set-root-directory! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1804: posix-error */
t2=lf[0];
f_2664(6,t2,((C_word*)t0)[2],lf[8],lf[437],lf[438],((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k8118 in k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8120,2,t0,t1);}
t2=t1;
t3=f_8096(C_a_i(&a,3),((C_word*)t0)[3]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8131,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8133,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[12],a[13]=((C_word)li213),tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm:1734: process-fork */
t7=*((C_word*)lf[415]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* lp in k4624 in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4666(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4666,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:600: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[189]+1)))(3,*((C_word*)lf[189]+1),t1,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4695,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=t2;
t7=C_i_foreign_fixnum_argumentp(t6);
if(C_truep(((C_word*)t0)[3])){
t8=C_i_foreign_block_argumentp(((C_word*)t0)[3]);
t9=t5;
f_4695(t9,stub944(C_SCHEME_UNDEFINED,t7,t8));}
else{
t8=t5;
f_4695(t8,stub944(C_SCHEME_UNDEFINED,t7,C_SCHEME_FALSE));}}}

/* k3082 in port->fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}

/* k4693 in lp in k4624 in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4695,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* posixunix.scm:605: lp */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4666(t7,((C_word*)t0)[6],t2,t4,t6);}
else{
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm:606: lp */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4666(t4,((C_word*)t0)[6],t2,((C_word*)t0)[4],t3);}}

/* k5544 in k5534 in loop in k5524 in k5520 in k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5546,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4562,2,t0,t1);}
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_check_number(((C_word*)t0)[2]):C_SCHEME_UNDEFINED);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4841,a[2]=t2,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
t5=f_4841(t4,C_fix(0),((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4799,a[2]=t2,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
t7=f_4799(t6,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4786,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4797,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:586: max */
t10=*((C_word*)lf[190]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_fix(0),((C_word*)t0)[2]);}
else{
t9=t8;
f_4786(t9,C_fix(-1));}}

/* k5534 in loop in k5524 in k5520 in k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5536,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5546,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:942: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5532(t5,t3,t4);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}

/* k6211 in loop in fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_6213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6213,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1186: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[339]+1)))(2,*((C_word*)lf[339]+1),t2);}
else{
t2=C_read(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6222,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t7=(C_truep(t6)?t6:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t7)){
t8=C_set_block_item(t3,0,C_fix(0));
t9=C_mutate2(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t10=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* posixunix.scm:1193: posix-error */
t8=lf[0];
f_2664(7,t8,t4,lf[8],((C_word*)t0)[9],lf[345],((C_word*)t0)[4],((C_word*)t0)[10]);}}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* k6214 in k6211 in loop in fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_6216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1187: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6161(2,t2,((C_word*)t0)[3]);}

/* spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8110(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8110,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8114,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=t7,a[9]=t5,a[10]=t6,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1729: needed-pipe */
f_8049(t8,t6);}

/* k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8114,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8117,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1730: needed-pipe */
f_8049(t3,((C_word*)t0)[9]);}

/* k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8117,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8120,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1731: needed-pipe */
f_8049(t3,((C_word*)t0)[9]);}

/* loop in k5524 in k5520 in k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5532,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5536,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub1180(t5,t6);
/* posixunix.scm:925: ##sys#peek-c-string */
t8=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k5528 in k5524 in k5520 in k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:928: g1200 */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fix((C_word)C_group->gr_gid),t1);}

/* k3724 in a3717 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_3726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3726,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:542: pproc */
t5=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* k6220 in k6211 in loop in fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_6222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* open-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4993(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4993r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4993r(t0,t1,t2,t3);}}

static void C_ccall f_4993r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=C_i_check_string_2(t2,lf[197]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[198]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5007,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[198]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5014,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:648: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[197]);}
else{
t9=C_eqp(t6,lf[199]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5024,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:649: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t10,t2,lf[197]);}
else{
/* posixunix.scm:633: ##sys#error */
t10=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[200],t6);}}}

/* k4989 in check in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3731 in k3724 in a3717 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in ... */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:542: action */
t2=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:541: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3648(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k3728 in k3724 in a3717 in k3699 in k3763 in k3770 in k3665 in loop in k3644 in k3637 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in ... */
static void C_ccall f_3730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:541: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3648(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#process-wait in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7870,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=C_eqp(t5,C_fix(-1));
t8=(C_truep(t7)?C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7886,a[2]=t2,a[3]=t3,a[4]=((C_word)li195),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1633: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[343]+1)))(3,*((C_word*)lf[343]+1),t1,t9);}
else{
if(C_truep(t6)){
t9=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm:1635: values */
C_values(5,0,t1,t5,t6,t9);}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t9=C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1635: values */
C_values(5,0,t1,t5,t6,t9);}
else{
t9=C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1635: values */
C_values(5,0,t1,t5,t6,t9);}}}}

/* check in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4978(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4978,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm:636: posix-error */
t6=lf[0];
f_2664(6,t6,t1,lf[8],t2,lf[195],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4991,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:637: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(6,*((C_word*)lf[56]+1),t6,t4,*((C_word*)lf[57]+1),lf[196],lf[41]);}}

/* a6256 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6261,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:1203: fetch */
t3=((C_word*)t0)[5];
f_6155(t3,t2);}
else{
t3=t2;
f_6261(2,t3,C_SCHEME_UNDEFINED);}}

/* k6253 in k6249 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k6249 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6251,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6255,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1273: set-port-name! */
t4=*((C_word*)lf[346]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[4]);}

/* k5524 in k5520 in k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5526,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=t5,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5532(t7,t3,C_fix(0));}

/* a7885 in process-wait in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7886,2,t0,t1);}
/* posixunix.scm:1634: ##sys#process-wait */
t2=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop */
static void C_fcall f_6774(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6774,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1306: poke */
t7=((C_word*)((C_word*)t0)[5])[1];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t2,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_difference(t4,t2);
/* posixunix.scm:1311: loop */
t13=t1;
t14=C_fix(0);
t15=t2;
t16=t7;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}
else{
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t4,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* k6259 in a6256 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_6147(((C_word*)t0)[2]);
if(C_truep(C_eofp(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k5520 in k5507 in group-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5522,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k6782 in loop */
static void C_ccall f_6784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* posixunix.scm:1308: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6774(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[6]);}

/* k8481 in a8472 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:886: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[444],lf[445],((C_word*)t0)[3]);}

/* a8488 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8489,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1149(C_SCHEME_UNDEFINED));}

/* k7825 in doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_7744(t5,((C_word*)t0)[5],t3,t4);}

/* file-unlock in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7044,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[358],lf[366]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
t8=C_flock_lock(t7);
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm:1386: posix-error */
t9=lf[0];
f_2664(6,t9,t1,lf[8],lf[366],lf[367],t2);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* a8491 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8492(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8492,3,t0,t1,t2);}
t3=C_setgid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8502,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:876: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4634 in k4627 in k4624 in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4636(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
/* posixunix.scm:607: values */
C_values(4,0,((C_word*)t0)[4],t1,t2);}
else{
/* posixunix.scm:607: values */
C_values(4,0,((C_word*)t0)[4],t1,C_SCHEME_FALSE);}}
else{
/* posixunix.scm:607: values */
C_values(4,0,((C_word*)t0)[4],t1,((C_word*)t0)[3]);}}
else{
/* posixunix.scm:607: values */
C_values(4,0,((C_word*)t0)[4],t1,C_SCHEME_FALSE);}}

/* change-directory in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4925,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[69]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4932,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:617: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,lf[69]);}

/* k8397 in set-root-directory! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub2143(C_SCHEME_UNDEFINED,t1));}

/* k8462 in a8447 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1089: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[440],lf[441],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4548(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4548,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4551,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=t3;
f_4551(t5,C_a_i_list1(&a,1,((C_word*)t0)[3]));}
else{
t5=C_i_check_list_2(((C_word*)t0)[3],lf[187]);
t6=((C_word*)t0)[3];
t7=t3;
f_4551(t7,t6);}}
else{
t5=t3;
f_4551(t5,C_SCHEME_END_OF_LIST);}}

/* file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4544r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4544r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4544r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4548,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4548(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4548(t6,C_SCHEME_FALSE);}}

/* k4624 in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4626,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4666,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4666(t7,t3,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}

/* k3993 in k3989 in local-time->seconds in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3995,2,t0,t1);}
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:600: fp= */
t4=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[120],t2);}

/* k3989 in local-time->seconds in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:599: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t2,((C_word*)t0)[4],C_make_character(0));}

/* k4627 in k4624 in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4629,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t4=C_i_memq(((C_word*)t0)[4],((C_word*)t0)[5]);
t5=t3;
f_4636(t5,(C_truep(t4)?((C_word*)t0)[4]:C_SCHEME_FALSE));}
else{
t4=t3;
f_4636(t4,((C_word*)t0)[5]);}}
else{
t4=t3;
f_4636(t4,C_SCHEME_FALSE);}}

/* k4530 in k4523 in k4517 in file-mkstemp in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:552: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4523 in k4517 in file-mkstemp in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixunix.scm:552: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t2,((C_word*)t0)[5],C_fix(0),t3);}

/* file-mkstemp in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4512,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[185]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4519,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:547: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,lf[185]);}

/* k4517 in file-mkstemp in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4519,2,t0,t1);}
t2=t1;
t3=C_mkstemp(t2);
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4525,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(C_fix(-1),t3);
if(C_truep(t7)){
/* posixunix.scm:551: posix-error */
t8=lf[0];
f_2664(6,t8,t6,lf[8],lf[185],lf[186],((C_word*)t0)[3]);}
else{
t8=t6;
f_4525(2,t8,C_SCHEME_UNDEFINED);}}

/* local-time->seconds in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3987,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3991,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:598: check-time-vector */
f_3878(t3,lf[117],t2);}

/* k6698 in k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6700,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6704,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1328: set-port-name! */
t4=*((C_word*)lf[346]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[4]);}

/* create-symbolic-link in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5891(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5891,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[321]);
t5=C_i_check_string_2(t3,lf[321]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5912,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1101: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t6,t2,lf[321]);}

/* k4949 in change-directory* in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5880 in create-session in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1072: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[318],lf[319]);}

/* k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5889,2,t0,t1);}
t2=C_mutate2((C_word*)lf[320]+1 /* (set! process-group-id ...) */,t1);
t3=C_mutate2((C_word*)lf[321]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5891,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t4,t5,C_make_character(32));}

/* k6702 in k6698 in k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* a6705 in k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6706,3,t0,t1,t2);}
/* posixunix.scm:1320: store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t1,t2);}

/* change-directory* in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4944,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[193]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4951,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_fchdir(t2);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
/* posixunix.scm:625: posix-error */
t7=lf[0];
f_2664(6,t7,t4,lf[8],lf[193],lf[194],t2);}}

/* k8659 in a8656 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8661,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* a8662 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8663,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[459]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8683,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=t5;
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8673,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=C_i_foreign_string_argumentp(t7);
/* posix-common.scm:255: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t9,t10);}
else{
t10=t6;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub120(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t8));}}

/* set-root-directory! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8407(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8407,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[437]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8424,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8399,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
t8=C_i_foreign_string_argumentp(t6);
/* posixunix.scm:1800: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t7,t8);}
else{
t8=t5;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub2143(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* a6711 in k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6712,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6722,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:1324: posix-error */
t4=lf[0];
f_2664(7,t4,t2,lf[8],((C_word*)t0)[5],lf[353],((C_word*)t0)[4],((C_word*)t0)[6]);}
else{
/* posixunix.scm:1325: on-close */
t4=((C_word*)t0)[3];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}}

/* k4930 in change-directory in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_chdir(t1);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}
else{
/* posixunix.scm:619: posix-error */
t5=lf[0];
f_2664(6,t5,t2,lf[8],lf[69],lf[192],((C_word*)t0)[3]);}}

/* k4933 in k4930 in change-directory in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k8671 in a8662 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub120(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3]));}

/* k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4554(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4554,NULL,2,t0,t1);}
t2=t1;
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_u_i_length(t2);
t5=C_fixnum_plus(t3,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t8=C_fix((C_word)sizeof(struct pollfd));
t9=C_fixnum_times(t6,t8);
/* posixunix.scm:570: ##sys#make-blob */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[191]+1)))(3,*((C_word*)lf[191]+1),t7,t9);}

/* k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4551(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4551,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4554,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];
if(C_truep(t4)){
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t5=t3;
f_4554(t5,C_a_i_list1(&a,1,((C_word*)t0)[5]));}
else{
t5=C_i_check_list_2(((C_word*)t0)[5],lf[187]);
t6=((C_word*)t0)[5];
t7=t3;
f_4554(t7,t6);}}
else{
t5=t3;
f_4554(t5,C_SCHEME_END_OF_LIST);}}

/* k6720 in a6711 in k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1325: on-close */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* a6733 in k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6734,2,t0,t1);}
/* posixunix.scm:1327: store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* seconds->utc-time in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3918r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3918r(t0,t1,t2);}}

static void C_ccall f_3918r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:582: current-seconds */
t4=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[114]);
/* posix-common.scm:584: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(4,*((C_word*)lf[112]+1),t1,t4,C_SCHEME_TRUE);}}

/* setenv in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4094,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[124]);
t5=C_i_check_string_2(t3,lf[124]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4105,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:627: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t6,t2,lf[124]);}

/* a8656 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8657(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8657,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8661,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:252: ##sys#stat */
f_2682(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[15]);}

/* a8472 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8473(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8473,3,t0,t1,t2);}
t3=C_setegid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8483,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:885: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a8469 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8470,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1154(C_SCHEME_UNDEFINED));}

/* k3920 in seconds->utc-time in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[114]);
/* posix-common.scm:584: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(4,*((C_word*)lf[112]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* f_6742 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6742,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_block_size(t2);
/* posixunix.scm:1299: poke */
t4=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t1,t2,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4084 in k4037 in time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4086,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub581(t3,t2,t4);
/* posix-common.scm:605: ##sys#peek-c-string */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],t5,C_fix(0));}
else{
t4=stub581(t3,t2,C_SCHEME_FALSE);
/* posix-common.scm:605: ##sys#peek-c-string */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,C_fix(0));}}

/* k8622 in a8619 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8624,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8627,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
/* posix-common.scm:339: posix-error */
t4=lf[0];
f_2664(6,t4,t3,lf[8],lf[44],lf[456],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k8625 in k8622 in a8619 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* a8619 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8620(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8620,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8624,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8636,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:330: port? */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7598 in process-fork in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7600,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_eqp(((C_word*)t0)[3],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[416]+1):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7628,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7614,a[2]=((C_word*)t0)[2],a[3]=((C_word)li188),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1579: g1847 */
t5=t3;
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,((C_word*)t0)[5],t4);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* terminal-port? in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7457(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7457,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[404]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7463,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1528: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[65]+1)))(4,*((C_word*)lf[65]+1),t5,t2,C_fix(0));}

/* create-session in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5872,2,t0,t1);}
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5876,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5882,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1071: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k5874 in create-session in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_6757 in k6754 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6757(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6757,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6774,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li160),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6774(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1316: poke */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* k6754 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6756,2,t0,t1);}
t2=t1;
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
f_6695(t5,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li161),tmp=(C_word)a,a+=7,tmp));}

/* k3589 in g428 in k3577 in loop in k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:509: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3562(t5,t3,t4);}

/* k3593 in k3589 in g428 in k3577 in loop in k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3595,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k8634 in a8619 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[41]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
f_8624(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
f_8624(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];
f_8624(2,t3,t2);}
else{
/* posix-common.scm:337: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[12],lf[44],lf[457],((C_word*)t0)[2]);}}}

/* file-write-access? in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5860(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5860,3,t0,t1,t2);}
/* posixunix.scm:1065: check */
f_5834(t1,t2,C_fix((C_word)W_OK),lf[316]);}

/* file-execute-access? in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5866,3,t0,t1,t2);}
/* posixunix.scm:1066: check */
f_5834(t1,t2,C_fix((C_word)X_OK),lf[317]);}

/* k3899 in seconds->local-time in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[111]);
/* posix-common.scm:580: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(4,*((C_word*)lf[112]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3560,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li36),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3562(t5,((C_word*)t0)[6],t1);}

/* loop in k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3562,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* posix-common.scm:504: conc-loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3528(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3579,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:505: irregex-match */
t5=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[6],t4);}}

/* k8681 in a8662 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:258: posix-error */
t2=lf[0];
f_2664(7,t2,((C_word*)t0)[2],lf[8],lf[459],lf[460],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3951 in seconds->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3953,2,t0,t1);}
t2=t1;
t3=C_i_check_number_2(t2,lf[115]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3959,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t2);
t7=stub552(t5,t6);
/* posix-common.scm:587: ##sys#peek-c-string */
t8=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,t7,C_fix(0));}

/* k3957 in k3951 in seconds->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:592: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:593: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[115],lf[116],((C_word*)t0)[3]);}}

/* k3577 in loop in k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:500: g428 */
t3=t2;
f_3583(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* posix-common.scm:510: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3562(t4,((C_word*)t0)[5],t3);}}

/* a8613 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8614,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[108]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_umask(t2));}

/* change-file-owner in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5808,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,lf[313]);
t6=C_i_check_exact_2(t3,lf[313]);
t7=C_i_check_exact_2(t4,lf[313]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5832,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1051: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t8,t2,lf[313]);}

/* k5804 in change-file-mode in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chmod(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1044: posix-error */
t3=lf[0];
f_2664(7,t3,((C_word*)t0)[3],lf[8],lf[311],lf[312],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5830 in change-file-owner in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chown(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1052: posix-error */
t3=lf[0];
f_2664(8,t3,((C_word*)t0)[4],lf[8],lf[313],lf[314],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* check in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5834(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5834,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5852,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1061: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t6,t2,t4);}

/* seconds->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3949r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3949r(t0,t1,t2);}}

static void C_ccall f_3949r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3953,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:588: current-seconds */
t4=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_3953(2,t4,C_i_car(t2));}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_posix_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3374)){
C_save(t1);
C_rereclaim2(3374*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,462);
lf[1]=C_h_intern(&lf[1],15,"\003syssignal-hook");
lf[2]=C_h_intern(&lf[2],13,"string-append");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[4]=C_h_intern(&lf[4],17,"\003syspeek-c-string");
lf[5]=C_h_intern(&lf[5],16,"\003sysupdate-errno");
lf[6]=C_h_intern(&lf[6],15,"\003sysposix-error");
lf[8]=C_h_intern(&lf[8],11,"\000file-error");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[10]=C_h_intern(&lf[10],17,"\003sysmake-c-string");
lf[11]=C_h_intern(&lf[11],27,"\003sysplatform-fixup-pathname");
lf[12]=C_h_intern(&lf[12],11,"\000type-error");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a fixnum or string");
lf[14]=C_h_intern(&lf[14],9,"file-stat");
lf[15]=C_h_intern(&lf[15],22,"file-modification-time");
lf[16]=C_h_intern(&lf[16],16,"file-access-time");
lf[17]=C_h_intern(&lf[17],16,"file-change-time");
lf[18]=C_h_intern(&lf[18],10,"file-owner");
lf[19]=C_h_intern(&lf[19],16,"file-permissions");
lf[20]=C_h_intern(&lf[20],9,"file-size");
lf[21]=C_h_intern(&lf[21],9,"file-type");
lf[22]=C_h_intern(&lf[22],12,"regular-file");
lf[23]=C_h_intern(&lf[23],13,"symbolic-link");
lf[24]=C_h_intern(&lf[24],9,"directory");
lf[25]=C_h_intern(&lf[25],16,"character-device");
lf[26]=C_h_intern(&lf[26],12,"block-device");
lf[27]=C_h_intern(&lf[27],4,"fifo");
lf[28]=C_h_intern(&lf[28],6,"socket");
lf[29]=C_h_intern(&lf[29],13,"regular-file\077");
lf[30]=C_h_intern(&lf[30],14,"symbolic-link\077");
lf[31]=C_h_intern(&lf[31],13,"block-device\077");
lf[32]=C_h_intern(&lf[32],17,"character-device\077");
lf[33]=C_h_intern(&lf[33],5,"fifo\077");
lf[34]=C_h_intern(&lf[34],7,"socket\077");
lf[35]=C_h_intern(&lf[35],10,"directory\077");
lf[36]=C_h_intern(&lf[36],8,"seek/set");
lf[37]=C_h_intern(&lf[37],8,"seek/end");
lf[38]=C_h_intern(&lf[38],8,"seek/cur");
lf[39]=C_h_intern(&lf[39],18,"set-file-position!");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[41]=C_h_intern(&lf[41],6,"stream");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[43]=C_h_intern(&lf[43],5,"port\077");
lf[44]=C_h_intern(&lf[44],13,"file-position");
lf[45]=C_h_intern(&lf[45],12,"fileno/stdin");
lf[46]=C_h_intern(&lf[46],13,"fileno/stdout");
lf[47]=C_h_intern(&lf[47],13,"fileno/stderr");
lf[48]=C_h_intern(&lf[48],7,"\000append");
lf[49]=C_h_intern(&lf[49],9,"\003syserror");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[56]=C_h_intern(&lf[56],13,"\003sysmake-port");
lf[57]=C_h_intern(&lf[57],21,"\003sysstream-port-class");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[59]=C_h_intern(&lf[59],16,"open-input-file\052");
lf[60]=C_h_intern(&lf[60],17,"open-output-file\052");
lf[61]=C_h_intern(&lf[61],12,"port->fileno");
lf[62]=C_h_intern(&lf[62],13,"\003sysport-data");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[65]=C_h_intern(&lf[65],25,"\003syspeek-unsigned-integer");
lf[66]=C_h_intern(&lf[66],16,"duplicate-fileno");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[68]=C_h_intern(&lf[68],17,"current-directory");
lf[69]=C_h_intern(&lf[69],16,"change-directory");
lf[70]=C_h_intern(&lf[70],13,"\003syssubstring");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[72]=C_h_intern(&lf[72],15,"\003sysmake-string");
lf[73]=C_h_intern(&lf[73],16,"delete-directory");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[75]=C_h_intern(&lf[75],11,"delete-file");
lf[76]=C_h_intern(&lf[76],8,"for-each");
lf[77]=C_h_intern(&lf[77],10,"find-files");
lf[78]=C_h_intern(&lf[78],9,"\000dotfiles");
lf[79]=C_h_intern(&lf[79],16,"\000follow-symlinks");
lf[80]=C_h_intern(&lf[80],16,"create-directory");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[82]=C_h_intern(&lf[82],18,"pathname-directory");
lf[83]=C_h_intern(&lf[83],18,"decompose-pathname");
lf[84]=C_h_intern(&lf[84],13,"make-pathname");
lf[85]=C_h_intern(&lf[85],12,"file-exists\077");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[87]=C_h_intern(&lf[87],16,"\003sysmake-pointer");
lf[88]=C_h_intern(&lf[88],4,"glob");
lf[89]=C_h_intern(&lf[89],23,"irregex-match-substring");
lf[90]=C_h_intern(&lf[90],13,"irregex-match");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[92]=C_h_intern(&lf[92],16,"\003sysglob->regexp");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\002\077\052");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[98]=C_h_intern(&lf[98],16,"\003sysdynamic-wind");
lf[99]=C_h_intern(&lf[99],13,"pathname-file");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\002\077\052");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[102]=C_h_intern(&lf[102],7,"irregex");
lf[103]=C_h_intern(&lf[103],15,"\003sysget-keyword");
lf[104]=C_h_intern(&lf[104],6,"\000limit");
lf[105]=C_h_intern(&lf[105],5,"\000seed");
lf[106]=C_h_intern(&lf[106],7,"\000action");
lf[107]=C_h_intern(&lf[107],5,"\000test");
lf[108]=C_h_intern(&lf[108],18,"file-creation-mode");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[111]=C_h_intern(&lf[111],19,"seconds->local-time");
lf[112]=C_h_intern(&lf[112],18,"\003sysdecode-seconds");
lf[113]=C_h_intern(&lf[113],15,"current-seconds");
lf[114]=C_h_intern(&lf[114],17,"seconds->utc-time");
lf[115]=C_h_intern(&lf[115],15,"seconds->string");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[117]=C_h_intern(&lf[117],19,"local-time->seconds");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[119]=C_h_intern(&lf[119],3,"fp=");
lf[120]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[121]=C_h_intern(&lf[121],12,"time->string");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[124]=C_h_intern(&lf[124],6,"setenv");
lf[125]=C_h_intern(&lf[125],8,"unsetenv");
lf[126]=C_h_intern(&lf[126],25,"get-environment-variables");
lf[127]=C_h_intern(&lf[127],19,"set-signal-handler!");
lf[128]=C_h_intern(&lf[128],17,"\003syssignal-vector");
lf[129]=C_h_intern(&lf[129],14,"signal-handler");
lf[130]=C_h_intern(&lf[130],18,"current-process-id");
lf[131]=C_h_intern(&lf[131],12,"process-wait");
lf[132]=C_h_intern(&lf[132],16,"\003sysprocess-wait");
lf[133]=C_h_intern(&lf[133],14,"\000process-error");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[135]=C_h_intern(&lf[135],21,"\003sysfile-nonblocking!");
lf[136]=C_h_intern(&lf[136],19,"\003sysfile-select-one");
lf[137]=C_h_intern(&lf[137],8,"pipe/buf");
lf[138]=C_h_intern(&lf[138],11,"fcntl/dupfd");
lf[139]=C_h_intern(&lf[139],11,"fcntl/getfd");
lf[140]=C_h_intern(&lf[140],11,"fcntl/setfd");
lf[141]=C_h_intern(&lf[141],11,"fcntl/getfl");
lf[142]=C_h_intern(&lf[142],11,"fcntl/setfl");
lf[143]=C_h_intern(&lf[143],11,"open/rdonly");
lf[144]=C_h_intern(&lf[144],11,"open/wronly");
lf[145]=C_h_intern(&lf[145],9,"open/rdwr");
lf[146]=C_h_intern(&lf[146],9,"open/read");
lf[147]=C_h_intern(&lf[147],10,"open/write");
lf[148]=C_h_intern(&lf[148],10,"open/creat");
lf[149]=C_h_intern(&lf[149],11,"open/append");
lf[150]=C_h_intern(&lf[150],9,"open/excl");
lf[151]=C_h_intern(&lf[151],11,"open/noctty");
lf[152]=C_h_intern(&lf[152],13,"open/nonblock");
lf[153]=C_h_intern(&lf[153],10,"open/trunc");
lf[154]=C_h_intern(&lf[154],9,"open/sync");
lf[155]=C_h_intern(&lf[155],10,"open/fsync");
lf[156]=C_h_intern(&lf[156],11,"open/binary");
lf[157]=C_h_intern(&lf[157],9,"open/text");
lf[158]=C_h_intern(&lf[158],10,"perm/irusr");
lf[159]=C_h_intern(&lf[159],10,"perm/iwusr");
lf[160]=C_h_intern(&lf[160],10,"perm/ixusr");
lf[161]=C_h_intern(&lf[161],10,"perm/irgrp");
lf[162]=C_h_intern(&lf[162],10,"perm/iwgrp");
lf[163]=C_h_intern(&lf[163],10,"perm/ixgrp");
lf[164]=C_h_intern(&lf[164],10,"perm/iroth");
lf[165]=C_h_intern(&lf[165],10,"perm/iwoth");
lf[166]=C_h_intern(&lf[166],10,"perm/ixoth");
lf[167]=C_h_intern(&lf[167],10,"perm/irwxu");
lf[168]=C_h_intern(&lf[168],10,"perm/irwxg");
lf[169]=C_h_intern(&lf[169],10,"perm/irwxo");
lf[170]=C_h_intern(&lf[170],10,"perm/isvtx");
lf[171]=C_h_intern(&lf[171],10,"perm/isuid");
lf[172]=C_h_intern(&lf[172],10,"perm/isgid");
lf[173]=C_h_intern(&lf[173],12,"file-control");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot control file");
lf[175]=C_h_intern(&lf[175],9,"file-open");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[177]=C_h_intern(&lf[177],10,"file-close");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[179]=C_h_intern(&lf[179],9,"file-read");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[182]=C_h_intern(&lf[182],10,"file-write");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[185]=C_h_intern(&lf[185],12,"file-mkstemp");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[187]=C_h_intern(&lf[187],11,"file-select");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\006failed");
lf[189]=C_h_intern(&lf[189],16,"\003sysfast-reverse");
lf[190]=C_h_intern(&lf[190],3,"max");
lf[191]=C_h_intern(&lf[191],13,"\003sysmake-blob");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[193]=C_h_intern(&lf[193],17,"change-directory\052");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[197]=C_h_intern(&lf[197],15,"open-input-pipe");
lf[198]=C_h_intern(&lf[198],5,"\000text");
lf[199]=C_h_intern(&lf[199],7,"\000binary");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[201]=C_h_intern(&lf[201],16,"open-output-pipe");
lf[202]=C_h_intern(&lf[202],16,"close-input-pipe");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[204]=C_h_intern(&lf[204],17,"close-output-pipe");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[206]=C_h_intern(&lf[206],20,"call-with-input-pipe");
lf[207]=C_h_intern(&lf[207],21,"call-with-output-pipe");
lf[208]=C_h_intern(&lf[208],20,"with-input-from-pipe");
lf[209]=C_h_intern(&lf[209],18,"\003sysstandard-input");
lf[210]=C_h_intern(&lf[210],19,"with-output-to-pipe");
lf[211]=C_h_intern(&lf[211],19,"\003sysstandard-output");
lf[212]=C_h_intern(&lf[212],11,"create-pipe");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[214]=C_h_intern(&lf[214],11,"signal/term");
lf[215]=C_h_intern(&lf[215],11,"signal/kill");
lf[216]=C_h_intern(&lf[216],10,"signal/int");
lf[217]=C_h_intern(&lf[217],10,"signal/hup");
lf[218]=C_h_intern(&lf[218],10,"signal/fpe");
lf[219]=C_h_intern(&lf[219],10,"signal/ill");
lf[220]=C_h_intern(&lf[220],11,"signal/segv");
lf[221]=C_h_intern(&lf[221],11,"signal/abrt");
lf[222]=C_h_intern(&lf[222],11,"signal/trap");
lf[223]=C_h_intern(&lf[223],11,"signal/quit");
lf[224]=C_h_intern(&lf[224],11,"signal/alrm");
lf[225]=C_h_intern(&lf[225],13,"signal/vtalrm");
lf[226]=C_h_intern(&lf[226],11,"signal/prof");
lf[227]=C_h_intern(&lf[227],9,"signal/io");
lf[228]=C_h_intern(&lf[228],10,"signal/urg");
lf[229]=C_h_intern(&lf[229],11,"signal/chld");
lf[230]=C_h_intern(&lf[230],11,"signal/cont");
lf[231]=C_h_intern(&lf[231],11,"signal/stop");
lf[232]=C_h_intern(&lf[232],11,"signal/tstp");
lf[233]=C_h_intern(&lf[233],11,"signal/pipe");
lf[234]=C_h_intern(&lf[234],11,"signal/xcpu");
lf[235]=C_h_intern(&lf[235],11,"signal/xfsz");
lf[236]=C_h_intern(&lf[236],11,"signal/usr1");
lf[237]=C_h_intern(&lf[237],11,"signal/usr2");
lf[238]=C_h_intern(&lf[238],12,"signal/winch");
lf[239]=C_h_intern(&lf[239],10,"signal/bus");
lf[240]=C_h_intern(&lf[240],12,"signal/break");
lf[241]=C_h_intern(&lf[241],12,"signals-list");
lf[242]=C_h_intern(&lf[242],16,"set-signal-mask!");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot set signal mask");
lf[244]=C_h_intern(&lf[244],11,"signal-mask");
lf[245]=C_h_intern(&lf[245],14,"signal-masked\077");
lf[246]=C_h_intern(&lf[246],12,"signal-mask!");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot block signal");
lf[248]=C_h_intern(&lf[248],14,"signal-unmask!");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot unblock signal");
lf[250]=C_h_intern(&lf[250],18,"system-information");
lf[251]=C_h_intern(&lf[251],25,"\003syspeek-nonnull-c-string");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system information");
lf[253]=C_h_intern(&lf[253],15,"current-user-id");
lf[254]=C_h_intern(&lf[254],25,"current-effective-user-id");
lf[255]=C_h_intern(&lf[255],16,"current-group-id");
lf[256]=C_h_intern(&lf[256],26,"current-effective-group-id");
lf[257]=C_h_intern(&lf[257],16,"user-information");
lf[258]=C_h_intern(&lf[258],6,"vector");
lf[259]=C_h_intern(&lf[259],4,"list");
lf[260]=C_h_intern(&lf[260],17,"current-user-name");
lf[261]=C_h_intern(&lf[261],27,"current-effective-user-name");
lf[262]=C_h_intern(&lf[262],17,"group-information");
lf[263]=C_h_intern(&lf[263],10,"get-groups");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[267]=C_h_intern(&lf[267],11,"set-groups!");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot set supplementary group ids");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[270]=C_h_intern(&lf[270],17,"initialize-groups");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000)cannot initialize supplementary group ids");
lf[272]=C_h_intern(&lf[272],10,"errno/perm");
lf[273]=C_h_intern(&lf[273],11,"errno/noent");
lf[274]=C_h_intern(&lf[274],10,"errno/srch");
lf[275]=C_h_intern(&lf[275],10,"errno/intr");
lf[276]=C_h_intern(&lf[276],8,"errno/io");
lf[277]=C_h_intern(&lf[277],12,"errno/noexec");
lf[278]=C_h_intern(&lf[278],10,"errno/badf");
lf[279]=C_h_intern(&lf[279],11,"errno/child");
lf[280]=C_h_intern(&lf[280],11,"errno/nomem");
lf[281]=C_h_intern(&lf[281],11,"errno/acces");
lf[282]=C_h_intern(&lf[282],11,"errno/fault");
lf[283]=C_h_intern(&lf[283],10,"errno/busy");
lf[284]=C_h_intern(&lf[284],12,"errno/notdir");
lf[285]=C_h_intern(&lf[285],11,"errno/isdir");
lf[286]=C_h_intern(&lf[286],11,"errno/inval");
lf[287]=C_h_intern(&lf[287],11,"errno/mfile");
lf[288]=C_h_intern(&lf[288],11,"errno/nospc");
lf[289]=C_h_intern(&lf[289],11,"errno/spipe");
lf[290]=C_h_intern(&lf[290],10,"errno/pipe");
lf[291]=C_h_intern(&lf[291],11,"errno/again");
lf[292]=C_h_intern(&lf[292],10,"errno/rofs");
lf[293]=C_h_intern(&lf[293],11,"errno/exist");
lf[294]=C_h_intern(&lf[294],16,"errno/wouldblock");
lf[295]=C_h_intern(&lf[295],10,"errno/2big");
lf[296]=C_h_intern(&lf[296],12,"errno/deadlk");
lf[297]=C_h_intern(&lf[297],9,"errno/dom");
lf[298]=C_h_intern(&lf[298],10,"errno/fbig");
lf[299]=C_h_intern(&lf[299],11,"errno/ilseq");
lf[300]=C_h_intern(&lf[300],11,"errno/mlink");
lf[301]=C_h_intern(&lf[301],17,"errno/nametoolong");
lf[302]=C_h_intern(&lf[302],11,"errno/nfile");
lf[303]=C_h_intern(&lf[303],11,"errno/nodev");
lf[304]=C_h_intern(&lf[304],11,"errno/nolck");
lf[305]=C_h_intern(&lf[305],11,"errno/nosys");
lf[306]=C_h_intern(&lf[306],14,"errno/notempty");
lf[307]=C_h_intern(&lf[307],11,"errno/notty");
lf[308]=C_h_intern(&lf[308],10,"errno/nxio");
lf[309]=C_h_intern(&lf[309],11,"errno/range");
lf[310]=C_h_intern(&lf[310],10,"errno/xdev");
lf[311]=C_h_intern(&lf[311],16,"change-file-mode");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[313]=C_h_intern(&lf[313],17,"change-file-owner");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot change file owner");
lf[315]=C_h_intern(&lf[315],17,"file-read-access\077");
lf[316]=C_h_intern(&lf[316],18,"file-write-access\077");
lf[317]=C_h_intern(&lf[317],20,"file-execute-access\077");
lf[318]=C_h_intern(&lf[318],14,"create-session");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot create session");
lf[320]=C_h_intern(&lf[320],16,"process-group-id");
lf[321]=C_h_intern(&lf[321],20,"create-symbolic-link");
lf[322]=C_h_intern(&lf[322],18,"create-symbol-link");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create symbolic link");
lf[324]=C_h_intern(&lf[324],22,"\003sysread-symbolic-link");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot read symbolic link");
lf[326]=C_h_intern(&lf[326],9,"substring");
lf[327]=C_h_intern(&lf[327],18,"read-symbolic-link");
lf[328]=C_h_intern(&lf[328],19,"decompose-directory");
lf[329]=C_h_intern(&lf[329],18,"absolute-pathname\077");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000Icould not canonicalize path with symbolic links, component does not exist");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[333]=C_h_intern(&lf[333],9,"file-link");
lf[334]=C_h_intern(&lf[334],9,"hard-link");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\032could not create hard link");
lf[336]=C_h_intern(&lf[336],21,"\003syscustom-input-port");
lf[337]=C_h_intern(&lf[337],4,"void");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\015cannot select");
lf[339]=C_h_intern(&lf[339],17,"\003systhread-yield!");
lf[340]=C_h_intern(&lf[340],25,"\003systhread-block-for-i/o!");
lf[341]=C_h_intern(&lf[341],18,"\003syscurrent-thread");
lf[342]=C_h_intern(&lf[342],6,"\000input");
lf[343]=C_h_intern(&lf[343],22,"\003sysdispatch-interrupt");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[346]=C_h_intern(&lf[346],14,"set-port-name!");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[348]=C_h_intern(&lf[348],20,"\003sysscan-buffer-line");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[350]=C_h_intern(&lf[350],15,"make-input-port");
lf[351]=C_h_intern(&lf[351],22,"\003syscustom-output-port");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot write");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[354]=C_h_intern(&lf[354],16,"make-output-port");
lf[355]=C_h_intern(&lf[355],13,"file-truncate");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot truncate file");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[358]=C_h_intern(&lf[358],4,"lock");
lf[359]=C_h_intern(&lf[359],14,"\003syscheck-port");
lf[360]=C_h_intern(&lf[360],9,"file-lock");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[362]=C_h_intern(&lf[362],18,"file-lock/blocking");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[364]=C_h_intern(&lf[364],14,"file-test-lock");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[366]=C_h_intern(&lf[366],11,"file-unlock");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[368]=C_h_intern(&lf[368],11,"create-fifo");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create FIFO");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\023file does not exist");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000(system error while trying to access file");
lf[372]=C_h_intern(&lf[372],9,"prot/read");
lf[373]=C_h_intern(&lf[373],10,"prot/write");
lf[374]=C_h_intern(&lf[374],9,"prot/exec");
lf[375]=C_h_intern(&lf[375],9,"prot/none");
lf[376]=C_h_intern(&lf[376],9,"map/fixed");
lf[377]=C_h_intern(&lf[377],10,"map/shared");
lf[378]=C_h_intern(&lf[378],11,"map/private");
lf[379]=C_h_intern(&lf[379],13,"map/anonymous");
lf[380]=C_h_intern(&lf[380],8,"map/file");
lf[381]=C_h_intern(&lf[381],18,"map-file-to-memory");
lf[382]=C_h_intern(&lf[382],4,"mmap");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[384]=C_h_intern(&lf[384],20,"\003syspointer->address");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[386]=C_h_intern(&lf[386],16,"\003sysnull-pointer");
lf[387]=C_h_intern(&lf[387],22,"unmap-file-from-memory");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[389]=C_h_intern(&lf[389],26,"memory-mapped-file-pointer");
lf[390]=C_h_intern(&lf[390],19,"memory-mapped-file\077");
lf[391]=C_h_intern(&lf[391],12,"string->time");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\027%a %b %e %H:%M:%S %Z %Y");
lf[393]=C_h_intern(&lf[393],17,"utc-time->seconds");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[395]=C_h_intern(&lf[395],27,"local-timezone-abbreviation");
lf[396]=C_h_intern(&lf[396],5,"_exit");
lf[397]=C_h_intern(&lf[397],10,"set-alarm!");
lf[398]=C_h_intern(&lf[398],19,"set-buffering-mode!");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[400]=C_h_intern(&lf[400],5,"\000full");
lf[401]=C_h_intern(&lf[401],5,"\000line");
lf[402]=C_h_intern(&lf[402],5,"\000none");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[404]=C_h_intern(&lf[404],14,"terminal-port\077");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[407]=C_h_intern(&lf[407],13,"terminal-name");
lf[408]=C_h_intern(&lf[408],13,"terminal-size");
lf[409]=C_h_intern(&lf[409],6,"\000error");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\036Unable to get size of terminal");
lf[411]=C_h_intern(&lf[411],17,"\003sysmake-locative");
lf[412]=C_h_intern(&lf[412],8,"location");
lf[413]=C_h_intern(&lf[413],13,"get-host-name");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[415]=C_h_intern(&lf[415],12,"process-fork");
lf[416]=C_h_intern(&lf[416],22,"\003syskill-other-threads");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create child process");
lf[418]=C_h_intern(&lf[418],24,"pathname-strip-directory");
lf[419]=C_h_intern(&lf[419],15,"process-execute");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[421]=C_h_intern(&lf[421],17,"parent-process-id");
lf[422]=C_h_intern(&lf[422],5,"sleep");
lf[423]=C_h_intern(&lf[423],14,"process-signal");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000 could not send signal to process");
lf[425]=C_h_intern(&lf[425],17,"\003sysshell-command");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\007/bin/sh");
lf[427]=C_h_intern(&lf[427],24,"get-environment-variable");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\005SHELL");
lf[429]=C_h_intern(&lf[429],27,"\003sysshell-command-arguments");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[431]=C_h_intern(&lf[431],11,"process-run");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\025abnormal process exit");
lf[433]=C_h_intern(&lf[433],11,"\003sysprocess");
lf[434]=C_h_intern(&lf[434],7,"process");
lf[435]=C_h_intern(&lf[435],8,"process\052");
lf[436]=C_h_intern(&lf[436],6,"values");
lf[437]=C_h_intern(&lf[437],19,"set-root-directory!");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\037unable to change root directory");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve process group ID");
lf[440]=C_h_intern(&lf[440],21,"set-process-group-id!");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot set process group ID");
lf[442]=C_h_intern(&lf[442],18,"getter-with-setter");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\026(process-group-id pid)");
lf[444]=C_h_intern(&lf[444],26,"effective-group-id!-setter");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot set effective group ID");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\034(current-effective-group-id)");
lf[447]=C_h_intern(&lf[447],12,"set-user-id!");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot set group ID");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\022(current-group-id)");
lf[450]=C_h_intern(&lf[450],25,"effective-user-id!-setter");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot set effective user ID");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\033(current-effective-used-id)");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot set user ID");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\021(current-user-id)");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[459]=C_h_intern(&lf[459],26,"set-file-modification-time");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,462,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2640,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* change-file-mode in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5785,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[311]);
t5=C_i_check_exact_2(t3,lf[311]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5806,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1043: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t6,t2,lf[311]);}

/* g428 in k3577 in loop in k3558 in k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3583,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3591,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3603,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:508: irregex-match-substring */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2994 in mode in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* mode in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_2988(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2988,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[48]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posix-common.scm:361: ##sys#error */
t10=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t5,lf[50],t7);}
else{
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,lf[51],t4);}}
else{
/* posix-common.scm:362: ##sys#error */
t9=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[52],t7);}}
else{
if(C_truep(t2)){
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,lf[53],t4);}
else{
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t1,lf[54],t4);}}}

/* k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2983,2,t0,t1);}
t2=C_mutate2((C_word*)lf[44]+1 /* (set! file-position ...) */,t1);
t3=C_mutate2((C_word*)lf[45]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t4=C_mutate2((C_word*)lf[46]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t5=C_mutate2((C_word*)lf[47]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[59]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3040,a[2]=t9,a[3]=t7,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate2((C_word*)lf[60]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3054,a[2]=t9,a[3]=t7,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate2((C_word*)lf[61]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[66]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3116,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[68]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[73]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[80]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3266,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[24]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3383,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[88]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[77]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8589,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8614,a[2]=((C_word)li243),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:559: getter-with-setter */
t25=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t25+1)))(5,t25,t22,t23,t24,lf[455]);}

/* g2074 in chkstrlst in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_8240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop2073 in chkstrlst in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_8249(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_8240(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k3551 in a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3553,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
/* posix-common.scm:503: directory */
t4=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
/* posix-common.scm:503: directory */
t4=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[91],C_SCHEME_TRUE);}}

/* k8218 in a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1756: input-port */
t2=((C_word*)t0)[2];
f_8155(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k2715 in stat in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:225: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3528,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3543,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3549,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:500: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_3522r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3522r(t0,t1,t2);}}

static void C_ccall f_3522r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3528,a[2]=t4,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3528(t6,t1,t2);}

/* chkstrlst in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8235(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8235,NULL,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8240,a[2]=((C_word*)t0)[2],a[3]=((C_word)li220),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8249,a[2]=t4,a[3]=((C_word)li221),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_8249(t6,t5));}

/* %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8233(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8233,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8235,a[2]=t2,a[3]=((C_word)li222),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8276,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t1,a[8]=t7,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixunix.scm:1777: chkstrlst */
t13=t10;
f_8235(t13,t12,((C_word*)t9)[1]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8298,a[2]=t9,a[3]=t8,a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1779: ##sys#shell-command-arguments */
t14=*((C_word*)lf[429]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,((C_word*)t8)[1]);}}

/* k2708 in stat in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2686(2,t2,(C_truep(((C_word*)t0)[3])?C_lstat(t1):C_stat(t1)));}

/* file-read-access? in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5854(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5854,3,t0,t1,t2);}
/* posixunix.scm:1064: check */
f_5834(t1,t2,C_fix((C_word)R_OK),lf[315]);}

/* k5850 in check in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5852,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(C_fix(0),t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}
else{
/* posixunix.scm:1062: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t5);}}

/* k8202 in k8198 in a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8204,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8212,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1762: make-on-close */
f_8012(t4,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[11],C_fix(2),C_fix(0),C_fix(1));}

/* k8206 in k8202 in k8198 in a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1755: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k8198 in a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8200,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8204,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8216,a[2]=((C_word*)t0)[11],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1759: make-on-close */
f_8012(t4,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[10],C_fix(1),C_fix(0),C_fix(2));}

/* k5842 in k5850 in check in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5707 in initialize-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1243(C_SCHEME_UNDEFINED,t1,t2));}

/* k8210 in k8202 in k8198 in a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1761: input-port */
t2=((C_word*)t0)[2];
f_8155(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k8214 in k8198 in a8188 in process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1758: output-port */
t2=((C_word*)t0)[2];
f_8166(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* initialize-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5721,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[270]);
t5=C_i_check_exact_2(t3,lf[270]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5744,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t2;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5709,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t8)){
t11=C_i_foreign_string_argumentp(t8);
/* posixunix.scm:985: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t10,t11);}
else{
t11=C_i_foreign_fixnum_argumentp(t9);
t12=t7;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub1243(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t11));}}

/* k2727 in file-stat in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2729,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks)));}

/* k5735 in k5742 in initialize-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:991: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[270],lf[271],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* file-stat in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2722r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2722r(t0,t1,t2,t3);}}

static void C_ccall f_2722r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:242: ##sys#stat */
f_2682(t6,t2,t5,C_SCHEME_TRUE,lf[14]);}

/* k4388 in file-open in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4390(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4390,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[175]);
t4=C_i_check_exact_2(((C_word*)t0)[3],lf[175]);
t5=C_i_check_exact_2(t2,lf[175]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4403,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:509: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t6,((C_word*)t0)[2],lf[175]);}

/* k2752 in file-change-time in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2754,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-owner in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2756,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2760,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:265: ##sys#stat */
f_2682(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[18]);}

/* file-change-time in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2750,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:264: ##sys#stat */
f_2682(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);}

/* file-open in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4386r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4386r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4386r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4390,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4390(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4390(t6,((C_word*)t0)[2]);}}

/* setenv in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7691(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7691,NULL,4,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7700,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* posixunix.scm:1594: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t7,t8);}
else{
t8=C_i_foreign_fixnum_argumentp(t4);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub1879(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t8));}}

/* a3548 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3549,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3623,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t8=t3;
/* posix-common.scm:502: make-pathname */
t9=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,C_SCHEME_FALSE,t8,t4);}
else{
/* posix-common.scm:502: make-pathname */
t8=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,C_SCHEME_FALSE,lf[93],t4);}}

/* a3542 in conc-loop in glob in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
/* posix-common.scm:501: decompose-pathname */
t2=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k7411 in k7402 in k7399 in k7396 in set-buffering-mode! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7413(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1524: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[398],lf[399],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7399 in k7396 in set-buffering-mode! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7401(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7401,NULL,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7404,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[400]);
if(C_truep(t5)){
t6=t4;
f_7404(2,t6,C_fix((C_word)_IOFBF));}
else{
t6=C_eqp(t3,lf[401]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;
f_7404(2,t8,t7);}
else{
t7=C_eqp(t3,lf[402]);
if(C_truep(t7)){
t8=t4;
f_7404(2,t8,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm:1518: ##sys#error */
t8=*((C_word*)lf[49]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t4,lf[398],lf[403],((C_word*)t0)[2],((C_word*)t0)[4]);}}}}

/* k7402 in k7399 in k7396 in set-buffering-mode! in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7404,2,t0,t1);}
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[398]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7413,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(((C_word*)t0)[4],C_fix(7));
t6=C_eqp(lf[41],t5);
if(C_truep(t6)){
t7=C_setvbuf(((C_word*)t0)[4],t2,((C_word*)t0)[2]);
t8=t4;
f_7413(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
t7=t4;
f_7413(t7,C_SCHEME_TRUE);}}

/* setarg in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7668(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7668,NULL,4,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7677,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* posixunix.scm:1592: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t7,t8);}
else{
t8=C_i_foreign_fixnum_argumentp(t4);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub1867(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t8));}}

/* parent-process-id in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7908,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1943(C_SCHEME_UNDEFINED));}

/* k6453 in a6434 in a6424 in k6418 in k6409 in a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in ... */
static void C_ccall f_6455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t2);
/* posixunix.scm:1253: values */
C_values(5,0,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[2])[1],t3);}
else{
/* posixunix.scm:1256: values */
C_values(5,0,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE);}}

/* k7675 in setarg in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1867(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* k8274 in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm:1781: chkstrlst */
t3=((C_word*)t0)[9];
f_8235(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_8279(2,t3,C_SCHEME_UNDEFINED);}}

/* k8277 in k8274 in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li223),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1782: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[7],t2,((C_word*)t0)[8]);}

/* f_7628 in k7598 in process-fork in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7628(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7628,3,t0,t1,t2);}
/* posixunix.scm:1582: thunk */
t3=t2;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t1);}

/* ##sys#terminal-check in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7475(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7475,NULL,3,t1,t2,t3);}
t4=t3;
t5=t2;
t6=C_i_check_port_2(t4,C_fix(0),C_SCHEME_TRUE,t5);
t7=C_slot(t3,C_fix(7));
t8=C_eqp(lf[41],t7);
t9=(C_truep(t8)?C_tty_portp(t3):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* posixunix.scm:1535: ##sys#error */
t10=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t1,t2,lf[406],t3);}}

/* k5742 in initialize-groups in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5744,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:990: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7192 in k7189 in map-file-to-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7194(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7194,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_blockp(((C_word*)t0)[6]))){
if(C_truep(C_specialp(((C_word*)t0)[6]))){
t4=t3;
f_7197(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:1444: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[12],lf[381],lf[385],((C_word*)t0)[6]);}}
else{
/* posixunix.scm:1444: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[12],lf[381],lf[385],((C_word*)t0)[6]);}}

/* k7195 in k7192 in k7189 in map-file-to-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7197,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=C_a_i_bytevector(&a,1,C_fix(3));
t7=(C_truep(((C_word*)t0)[6])?C_i_foreign_pointer_argumentp(((C_word*)t0)[6]):C_SCHEME_FALSE);
t8=C_i_foreign_integer_argumentp(t2);
t9=C_i_foreign_fixnum_argumentp(t3);
t10=C_i_foreign_fixnum_argumentp(t4);
t11=C_i_foreign_fixnum_argumentp(t5);
t12=C_i_foreign_integer_argumentp(((C_word*)t0)[7]);
t13=stub1669(t6,t7,t8,t9,t10,t11,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7203,a[2]=((C_word*)t0)[8],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7216,a[2]=t15,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t14,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1446: ##sys#pointer->address */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[384]+1)))(3,*((C_word*)lf[384]+1),t16,t14);}

/* k2948 in k2936 in set-file-position! in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posix-common.scm:325: posix-error */
t2=lf[0];
f_2664(7,t2,((C_word*)t0)[2],lf[8],lf[39],lf[40],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k7920 in process-signal in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7922(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[423]);
t3=C_i_check_exact_2(t1,lf[423]);
t4=C_kill(((C_word*)t0)[2],t1);
t5=C_eqp(t4,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm:1653: posix-error */
t6=lf[0];
f_2664(7,t6,((C_word*)t0)[3],lf[133],lf[423],lf[424],((C_word*)t0)[2],t1);}
else{
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7189 in map-file-to-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7191,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t4=((C_word*)t0)[7];
t5=t3;
f_7194(t5,C_u_i_car(t4));}
else{
t4=t3;
f_7194(t4,C_fix(0));}}

/* k7616 in a7613 in k7598 in process-fork in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(0));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1853(C_SCHEME_UNDEFINED,t3));}

/* k7461 in terminal-port? in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_tty_portp(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a7613 in k7598 in process-fork in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7618,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1584: thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k2954 in k2936 in set-file-position! in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[41]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
f_2950(2,t5,t4);}
else{
t4=((C_word*)t0)[5];
f_2950(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_2950(2,t3,t2);}
else{
/* posix-common.scm:324: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[12],lf[39],lf[42],((C_word*)t0)[2]);}}}

/* file-control in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_4353r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4353r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4353r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_check_exact_2(t2,lf[173]);
t8=C_i_check_exact_2(t3,lf[173]);
t9=t2;
t10=t3;
t11=C_i_foreign_fixnum_argumentp(t9);
t12=C_i_foreign_fixnum_argumentp(t10);
t13=C_i_foreign_integer_argumentp(t6);
t14=stub772(C_SCHEME_UNDEFINED,t11,t12,t13);
t15=C_eqp(t14,C_fix(-1));
if(C_truep(t15)){
/* posixunix.scm:499: posix-error */
t16=lf[0];
f_2664(7,t16,t1,lf[8],lf[173],lf[174],t2,t3);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t14);}}

/* directory? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2921,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2929,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:300: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* set-file-position! in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2934r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2934r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2934r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2938,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_2938(t7,C_u_i_car(t6));}
else{
t6=t5;
f_2938(t6,C_fix((C_word)SEEK_SET));}}

/* k2936 in set-file-position! in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_2938(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2938,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[39]);
t4=C_i_check_exact_2(t2,lf[39]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2956,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:318: port? */
t7=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* socket? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2911,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:297: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k8141 in k8138 in k8135 in a8132 in k8118 in k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_8143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1739: process-execute */
t2=*((C_word*)lf[419]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k8138 in k8135 in a8132 in k8118 in k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_8140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=f_8096(C_a_i(&a,3),((C_word*)t0)[7]);
/* posixunix.scm:1738: connect-child */
f_8081(t2,t3,((C_word*)t0)[9],*((C_word*)lf[47]+1));}

/* a6434 in a6424 in k6418 in k6409 in a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_6435(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6435,3,t0,t1,t2);}
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1248: values */
C_values(5,0,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}
else{
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1251: fetch */
t7=((C_word*)t0)[6];
f_6155(t7,t6);}}

/* k2927 in directory? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[24],t1));}

/* f_2901 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2901,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:294: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* map-file-to-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7187(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7r,(void*)f_7187r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_7187r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_7187r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7191,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_7191(2,t10,t2);}
else{
/* posixunix.scm:1441: ##sys#null-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[386]+1)))(2,*((C_word*)lf[386]+1),t8);}}

/* k8157 in input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1743: ##sys#custom-input-port */
t2=*((C_word*)lf[336]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_TRUE,C_fix(256),((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8155,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8159,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1742: connect-parent */
f_8069(t7,t4,t5);}

/* k2917 in socket? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[28],t1));}

/* k2907 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[27],t1));}

/* k8135 in a8132 in k8118 in k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_8137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=f_8096(C_a_i(&a,3),((C_word*)t0)[10]);
/* posixunix.scm:1737: connect-child */
f_8081(t2,t3,((C_word*)t0)[11],*((C_word*)lf[46]+1));}

/* a8132 in k8118 in k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8137,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1736: connect-child */
f_8081(t2,((C_word*)t0)[11],((C_word*)t0)[12],*((C_word*)lf[45]+1));}

/* k8129 in k8118 in k8115 in k8112 in spawn in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1732: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k7115 in fifo? in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_fifo_p(t1);
switch(t2){
case C_SCHEME_TRUE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);
case C_SCHEME_FALSE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);
case C_fix(0):
/* posixunix.scm:1407: ##sys#signal-hook */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[8],lf[33],lf[370],((C_word*)t0)[3]);
default:
/* posixunix.scm:1409: posix-error */
t3=lf[0];
f_2664(6,t3,((C_word*)t0)[2],lf[8],lf[33],lf[371],((C_word*)t0)[3]);}}

/* unmap-file-from-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7247(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7247r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7247r(t0,t1,t2,t3);}}

static void C_ccall f_7247r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_check_structure_2(t2,lf[382],lf[387]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7254,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_7254(t7,C_u_i_car(t6));}
else{
t6=t5;
f_7254(t6,C_slot(t2,C_fix(2)));}}

/* swapped-ends in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_8096(C_word *a,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
if(C_truep(t1)){
t2=C_i_cdr(t1);
t3=t1;
t4=C_u_i_car(t3);
return(C_a_i_cons(&a,2,t2,t4));}
else{
return(C_SCHEME_FALSE);}}

/* k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3405,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3408,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:470: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(2,*((C_word*)lf[87]+1),t3);}

/* k3406 in k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3408,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:473: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,((C_word*)t0)[4],lf[24]);}

/* k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3402,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:469: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[87]+1)))(2,*((C_word*)lf[87]+1),t3);}

/* k8090 in connect-child in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8092,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_eqp(t4,t3);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8008,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1694: duplicate-fileno */
t7=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,t4);}}

/* k3410 in k3406 in k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posix-common.scm:475: posix-error */
t3=lf[0];
f_2664(6,t3,((C_word*)t0)[3],lf[8],lf[24],lf[86],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3426(t6,((C_word*)t0)[3]);}}

/* k6181 in k6178 in loop in fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_6183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1177: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6161(2,t2,((C_word*)t0)[3]);}

/* a6480 in k6418 in k6409 in a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_6481(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6481,5,t0,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(4));
t6=C_fixnum_plus(t5,C_fix(1));
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
t9=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t3);}
else{
t5=C_slot(((C_word*)t0)[2],C_fix(5));
t6=C_block_size(t3);
t7=C_fixnum_plus(t5,t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t7);
t9=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t3);}}

/* file-size in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2768,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2772,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:267: ##sys#stat */
f_2682(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[20]);}

/* k6178 in loop in fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_6180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1176: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[339]+1)))(2,*((C_word*)lf[339]+1),t2);}

/* k2764 in file-permissions in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-permissions in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2762,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:266: ##sys#stat */
f_2682(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);}

/* k2758 in file-owner in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* loop in k3410 in k3406 in k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3426(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3426,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_block_size(((C_word*)t0)[4]);
t4=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3440,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:483: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t5,((C_word*)t0)[4],C_fix(0),t4);}}

/* k6409 in a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6411,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6420(t4,t2);}
else{
t4=C_fudge(C_fix(21));
t5=t3;
f_6420(t5,C_fixnum_difference(t4,((C_word*)((C_word*)t0)[2])[1]));}}}

/* k2791 in file-type in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[22]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[23]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[24]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[25]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[26]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[27]);}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[28]:lf[22]));}}}}}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a6424 in k6418 in k6409 in a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6425,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li148),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1241: ##sys#scan-buffer-line */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[348]+1)))(6,*((C_word*)lf[348]+1),t1,((C_word*)t0)[5],t3,((C_word*)((C_word*)t0)[2])[1],t4);}

/* connect-child in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8081(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8081,NULL,4,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8092,a[2]=t1,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1720: file-close */
t10=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k8078 in connect-parent in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k6418 in k6409 in a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_fcall f_6420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6420,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6425,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li149),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6481,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1239: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[7],t4,t5);}

/* k3363 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posix-common.scm:449: posix-error */
t4=lf[0];
f_2664(6,t4,((C_word*)t0)[2],lf[8],lf[80],lf[81],((C_word*)t0)[3]);}}

/* k2746 in file-access-time in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2748,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-access-time in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2744,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2748,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:263: ##sys#stat */
f_2682(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[16]);}

/* a8283 in k8277 in k8274 in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8284,2,t0,t1);}
/* posixunix.scm:1783: ##sys#process */
t2=*((C_word*)lf[433]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2742,2,t0,t1);}
t2=C_mutate2((C_word*)lf[15]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate2((C_word*)lf[16]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2744,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[17]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[18]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2756,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[19]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2762,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[20]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2768,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[21]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2774,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[29]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2861,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[30]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2871,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[31]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[32]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[33]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2901,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[34]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2911,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[35]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[36]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t17=C_mutate2((C_word*)lf[37]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t18=C_mutate2((C_word*)lf[38]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t19=C_mutate2((C_word*)lf[39]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8620,a[2]=((C_word)li244),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:328: getter-with-setter */
t22=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t20,t21,*((C_word*)lf[39]+1),lf[458]);}

/* k7201 in k7195 in k7192 in k7189 in map-file-to-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7203,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[382],((C_word*)t0)[3],((C_word*)t0)[4]));}

/* a8057 in needed-pipe in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8058,2,t0,t1);}
/* posixunix.scm:1709: create-pipe */
t2=*((C_word*)lf[212]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* k3438 in loop in k3410 in k3406 in k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=t1;
t3=C_i_string_ref(t2,C_fix(0));
t4=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t5=(C_truep(t4)?C_subchar(t2,C_fix(1)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_make_character(46),t3);
if(C_truep(t7)){
t8=C_i_not(t5);
if(C_truep(t8)){
t9=t6;
f_3452(t9,t8);}
else{
t9=C_eqp(C_make_character(46),t5);
if(C_truep(t9)){
t10=C_eqp(C_fix(2),((C_word*)t0)[2]);
t11=t6;
f_3452(t11,(C_truep(t10)?t10:C_i_not(((C_word*)t0)[5])));}
else{
t10=t6;
f_3452(t10,C_i_not(((C_word*)t0)[5]));}}}
else{
t8=t6;
f_3452(t8,C_SCHEME_FALSE);}}

/* fifo? in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7109,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[33]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7117,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1404: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,lf[33]);}

/* file-type in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2774r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2774r(t0,t1,t2,t3);}}

static void C_ccall f_2774r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_TRUE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2793,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:270: ##sys#stat */
f_2682(t12,t2,t5,t9,lf[21]);}

/* k8296 in %process in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8298,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1780: ##sys#shell-command */
t4=*((C_word*)lf[425]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2770 in file-size in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2772,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* connect-parent in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8069(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8069,NULL,3,t1,t2,t3);}
if(C_truep(t3)){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8080,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1714: file-close */
t9=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t7);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k3450 in k3438 in loop in k3410 in k3406 in k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3452(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3452,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:490: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3426(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:491: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3426(t3,t2);}}

/* a8063 in needed-pipe in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8064,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* a3341 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3342,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
/* posix-common.scm:458: make-pathname */
t5=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k3460 in k3450 in k3438 in loop in k3410 in k3406 in k3403 in k3400 in k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7252 in unmap-file-from-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7254(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=C_i_foreign_integer_argumentp(t1);
t5=stub1696(C_SCHEME_UNDEFINED,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* posixunix.scm:1456: posix-error */
t7=lf[0];
f_2664(7,t7,((C_word*)t0)[3],lf[8],lf[387],lf[388],((C_word*)t0)[2],t1);}}

/* k3325 in k3299 in loop in k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:460: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3294(t2,((C_word*)t0)[3],t1);}

/* k3318 in k3302 in k3299 in loop in k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posix-common.scm:449: posix-error */
t4=lf[0];
f_2664(6,t4,((C_word*)t0)[2],lf[8],lf[80],lf[81],((C_word*)t0)[3]);}}

/* make-on-close in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8012(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8012,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8014,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=t7,a[6]=t3,a[7]=t2,a[8]=((C_word)li205),tmp=(C_word)a,a+=9,tmp));}

/* f_8014 in make-on-close in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8014,2,t0,t1);}
t2=C_i_vector_set(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[4]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8029,a[2]=((C_word*)t0)[6],a[3]=((C_word)li203),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8035,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word)li204),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1702: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a3335 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
/* posix-common.scm:457: decompose-pathname */
t2=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k3332 in loop in k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3301(t2,C_i_not(t1));}

/* a6406 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6407,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1236: fetch */
t5=((C_word*)t0)[5];
f_6155(t5,t4);}
else{
t5=t4;
f_6411(2,t5,C_SCHEME_UNDEFINED);}}

/* a8028 */
static void C_ccall f_8029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8029,2,t0,t1);}
/* posixunix.scm:1702: ##sys#process-wait */
t2=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3299 in loop in k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3301,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:460: pathname-directory */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3302 in k3299 in loop in k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3304,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3320,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:448: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t3,lf[80]);}

/* ready? in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6118(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6118,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6122,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1156: ##sys#file-select-one */
t3=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word ab[81],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6117,2,t0,t1);}
t2=t1;
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li139),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6147,a[2]=t6,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6155,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t6,a[10]=((C_word)li141),tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6251,a[2]=t11,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6257,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word)li142),tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6282,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=((C_word)li143),tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6294,a[2]=t11,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word)li144),tmp=(C_word)a,a+=8,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6316,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6331,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t9,a[6]=((C_word)li147),tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6407,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t9,a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6530,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li152),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1200: make-input-port */
t20=*((C_word*)lf[350]+1);
((C_proc9)(void*)(*((C_word*)t20+1)))(9,t20,t12,t13,t14,t15,t16,t17,t18,t19);}

/* k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6111,2,t0,t1);}
t2=C_fixnump(((C_word*)t0)[2]);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_block_size(((C_word*)t0)[2]));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
/* posixunix.scm:1151: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t5,((C_word*)t0)[2]);}
else{
t6=t5;
f_6117(2,t6,((C_word*)t0)[2]);}}

/* k8006 in k8090 in connect-child in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1695: file-close */
t2=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6120 in ready? in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t4=(C_truep(t3)?t3:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
/* posixunix.scm:1161: posix-error */
t5=lf[0];
f_2664(7,t5,((C_word*)t0)[2],lf[8],((C_word*)t0)[3],lf[338],((C_word*)t0)[4],((C_word*)t0)[5]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t1));}}

/* k6000 in k5997 in k5985 in k5979 in loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in ... */
static void C_ccall f_6002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6002,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1131: absolute-pathname? */
t4=*((C_word*)lf[329]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6006 in k6000 in k5997 in k5985 in k5979 in loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in ... */
static void C_ccall f_6008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1128: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5971(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* posixunix.scm:1133: make-pathname */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[5]);}}

/* ##sys#shell-command-arguments in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7952(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7952,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list2(&a,2,lf[430],t2));}

/* process-run in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7958(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7958r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7958r(t0,t1,t2,t3);}}

static void C_ccall f_7958r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7962,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_7962(t6,C_u_i_car(t5));}
else{
t5=t4;
f_7962(t5,C_SCHEME_FALSE);}}

/* k7982 in k7963 in k7960 in process-run in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7984,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7988,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1668: ##sys#shell-command-arguments */
t4=*((C_word*)lf[429]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* peek in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_6147(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_END_OF_FILE);}
else{
t1=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
return(t1);}}

/* k7986 in k7982 in k7963 in k7960 in process-run in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1668: process-execute */
t2=*((C_word*)lf[419]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6155,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li140),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_6161(2,t5,t1);}

/* k6040 in file-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6042,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6046,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
/* posixunix.scm:1139: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t3,t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1376(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE));}}

/* k6044 in k6040 in file-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1376(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));}

/* loop in fetch in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6161,2,t0,t1);}
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_i_eqvp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_i_eqvp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6180,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1175: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[340]+1)))(5,*((C_word*)lf[340]+1),t7,*((C_word*)lf[341]+1),((C_word*)t0)[2],lf[342]);}
else{
if(C_truep(C_i_eqvp(t4,C_fix((C_word)EINTR)))){
/* posixunix.scm:1179: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[343]+1)))(3,*((C_word*)lf[343]+1),t1,((C_word*)((C_word*)t0)[5])[1]);}
else{
/* posixunix.scm:1180: posix-error */
t7=lf[0];
f_2664(7,t7,t1,lf[8],((C_word*)t0)[6],lf[344],((C_word*)t0)[2],((C_word*)t0)[7]);}}}
else{
t4=(C_truep(((C_word*)t0)[8])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6213,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1184: more? */
t6=((C_word*)t0)[8];
((C_proc2)C_fast_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[9])+1,t2);
t6=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* process-signal in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7918(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7918r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7918r(t0,t1,t2,t3);}}

static void C_ccall f_7918r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7922,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_7922(t6,C_u_i_car(t5));}
else{
t5=t4;
f_7922(t5,C_fix((C_word)SIGTERM));}}

/* sleep in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7911(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7911,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1947(C_SCHEME_UNDEFINED,t3));}

/* file-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6061,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[333]);
t5=C_i_check_string_2(t3,lf[333]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6081,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t2;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6042,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t8)){
t11=C_i_foreign_string_argumentp(t8);
/* posixunix.scm:1139: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t10,t11);}
else{
t11=t10;
f_6042(2,t11,C_SCHEME_FALSE);}}

/* directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3383r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3383r(t0,t1,t2);}}

static void C_ccall f_3383r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3387,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:466: current-directory */
t5=*((C_word*)lf[68]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_3387(2,t5,C_i_car(t3));}}

/* k7945 in shell-command in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[426]);}}

/* k3385 in directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3387,2,t0,t1);}
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_check_string_2(t2,lf[24]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t11,C_fix(256),C_make_character(32));}

/* ##sys#shell-command in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7947,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1656: get-environment-variable */
t3=*((C_word*)lf[427]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[428]);}

/* k7963 in k7960 in process-run in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7965,2,t0,t1);}
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm:1666: process-execute */
t3=*((C_word*)lf[419]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1668: ##sys#shell-command */
t4=*((C_word*)lf[425]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k7960 in process-run in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7962(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7962,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7965,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1664: process-fork */
t4=*((C_word*)lf[415]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4165 in k4177 in k4173 in scan in k4139 in loop in get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4167,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5052 in open-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5054,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixunix.scm:655: check */
f_4978(((C_word*)t0)[3],lf[201],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k2887 in block-device? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[26],t1));}

/* block-device? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2881,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:288: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k5924 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_do_readlink(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1115: posix-error */
t3=lf[0];
f_2664(6,t3,((C_word*)t0)[3],lf[8],((C_word*)t0)[4],lf[325],((C_word*)t0)[5]);}
else{
/* posixunix.scm:1116: substring */
t3=*((C_word*)lf[326]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}}

/* k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word ab[186],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5920,2,t0,t1);}
t2=t1;
t3=C_mutate2((C_word*)lf[324]+1 /* (set! ##sys#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5921,a[2]=t2,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[327]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5940,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[333]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6061,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[336]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6083,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[351]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6606,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[355]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6867,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6902,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6967,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[360]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6985,a[2]=t12,a[3]=t10,a[4]=((C_word)li166),tmp=(C_word)a,a+=5,tmp));
t16=C_mutate2((C_word*)lf[362]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7001,a[2]=t12,a[3]=t10,a[4]=((C_word)li167),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate2((C_word*)lf[364]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7017,a[2]=t12,a[3]=t10,a[4]=((C_word)li168),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate2((C_word*)lf[366]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7044,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[368]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7072,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[33]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7109,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[372]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t22=C_mutate2((C_word*)lf[373]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t23=C_mutate2((C_word*)lf[374]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t24=C_mutate2((C_word*)lf[375]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t25=C_mutate2((C_word*)lf[376]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t26=C_mutate2((C_word*)lf[377]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t27=C_mutate2((C_word*)lf[378]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t28=C_mutate2((C_word*)lf[379]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANON));
t29=C_mutate2((C_word*)lf[380]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t30=C_mutate2((C_word*)lf[381]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7187,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate2((C_word*)lf[387]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7247,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[389]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7280,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[390]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7289,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t34=C_fix((C_word)sizeof(struct tm));
t35=C_mutate2((C_word*)lf[391]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7304,a[2]=t34,a[3]=((C_word)li176),tmp=(C_word)a,a+=4,tmp));
t36=C_fix((C_word)sizeof(struct tm));
t37=C_mutate2((C_word*)lf[393]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7341,a[2]=t36,a[3]=((C_word)li177),tmp=(C_word)a,a+=4,tmp));
t38=C_mutate2((C_word*)lf[395]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7360,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[396]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7373,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[397]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7387,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[398]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7394,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[404]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7457,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2(&lf[405] /* (set! ##sys#terminal-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7475,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[407]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7506,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[408]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7530,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[413]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7567,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[415]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7581,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t48=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7668,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7691,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
t50=*((C_word*)lf[418]+1);
t51=C_mutate2((C_word*)lf[419]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7714,a[2]=t49,a[3]=t48,a[4]=t50,a[5]=((C_word)li194),tmp=(C_word)a,a+=6,tmp));
t52=C_mutate2((C_word*)lf[132]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7870,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[421]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7908,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[422]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7911,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[423]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7918,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[425]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7943,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2((C_word*)lf[429]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7952,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[431]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7958,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8012,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp);
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8049,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8069,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8081,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8096,a[2]=((C_word)li212),tmp=(C_word)a,a+=3,tmp);
t64=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8110,a[2]=t63,a[3]=t62,a[4]=t60,a[5]=((C_word)li214),tmp=(C_word)a,a+=6,tmp);
t65=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8155,a[2]=t61,a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp);
t66=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8166,a[2]=t61,a[3]=((C_word)li216),tmp=(C_word)a,a+=4,tmp);
t67=C_mutate2((C_word*)lf[433]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8177,a[2]=t64,a[3]=t65,a[4]=t59,a[5]=t66,a[6]=((C_word)li219),tmp=(C_word)a,a+=7,tmp));
t68=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8233,a[2]=((C_word)li224),tmp=(C_word)a,a+=3,tmp);
t69=C_mutate2((C_word*)lf[434]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8304,a[2]=t68,a[3]=((C_word)li226),tmp=(C_word)a,a+=4,tmp));
t70=C_mutate2((C_word*)lf[435]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8352,a[2]=t68,a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp));
t71=C_mutate2((C_word*)lf[437]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8407,a[2]=((C_word)li228),tmp=(C_word)a,a+=3,tmp));
t72=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t72+1)))(2,t72,C_SCHEME_UNDEFINED);}

/* ##sys#read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5921,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5926,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1113: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,t3);}

/* k5045 in open-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:655: check */
f_4978(((C_word*)t0)[3],lf[201],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k2877 in symbolic-link? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[23],t1));}

/* symbolic-link? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2871(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2871,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2879,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:285: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k5914 in k5910 in create-symbolic-link in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_symlink(((C_word*)t0)[2],t1);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1104: posix-error */
t3=lf[0];
f_2664(7,t3,((C_word*)t0)[3],lf[8],lf[322],lf[323],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5910 in create-symbolic-link in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5912,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5916,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1102: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,((C_word*)t0)[4],lf[321]);}

/* close-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5073,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[202]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm:667: posix-error */
t8=lf[0];
f_2664(6,t8,t6,lf[8],lf[202],lf[203],t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* set-signal-handler! in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4197,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[127]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(*((C_word*)lf[128]+1),t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(*((C_word*)lf[128]+1),t2,t3));}}

/* read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5940(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_5940r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5940r(t0,t1,t2,t3);}}

static void C_ccall f_5940r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[327]);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5955,a[2]=t2,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5961,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1121: ##sys#call-with-values */
C_call_with_values(4,0,t1,t7,t8);}
else{
/* posixunix.scm:1136: ##sys#read-symbolic-link */
t7=*((C_word*)lf[324]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t2,lf[327]);}}

/* k5062 in open-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5064,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixunix.scm:655: check */
f_4978(((C_word*)t0)[3],lf[201],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k2897 in character-device? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[25],t1));}

/* character-device? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2891,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:291: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k5012 in open-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5014,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixunix.scm:644: check */
f_4978(((C_word*)t0)[3],lf[197],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5971,a[2]=t3,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5971(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6683 in loop in poke1529 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
/* posixunix.scm:1293: poke */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,((C_word*)t0)[5],t1,t2);}

/* k7214 in k7195 in k7192 in k7189 in map-file-to-memory in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7216,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm:1447: posix-error */
t3=lf[0];
f_2664(11,t3,((C_word*)t0)[2],lf[8],lf[381],lf[383],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t3=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record3(&a,3,lf[382],((C_word*)t0)[10],((C_word*)t0)[4]));}}

/* doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_7744(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7744,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7754,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1605: setarg */
f_7668(t4,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,lf[419]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7827,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixunix.scm:1624: setarg */
f_7668(t6,t3,t4,t7);}}

/* k7532 in terminal-size in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7534,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=C_C_fileno(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7555,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1553: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[411]+1)))(6,*((C_word*)lf[411]+1),t5,t2,C_fix(0),C_SCHEME_FALSE,lf[412]);}

/* a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5961,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5969,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(t2)?t2:lf[331]);
if(C_truep(t3)){
/* posixunix.scm:1123: string-append */
t7=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t3);}
else{
/* posixunix.scm:1123: string-append */
t7=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,lf[332]);}}

/* terminal-size in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7530,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7534,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1548: ##sys#terminal-check */
f_7475(t3,lf[408],t2);}

/* k5005 in open-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:644: check */
f_4978(((C_word*)t0)[3],lf[197],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k6693 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6695,NULL,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6700,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[4],a[3]=((C_word)li156),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6712,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word)li157),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6734,a[2]=((C_word*)t0)[4],a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1318: make-output-port */
t10=*((C_word*)lf[354]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* memory-mapped-file-pointer in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7280(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7280,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[382],lf[389]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* memory-mapped-file? in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7289,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[382]));}

/* a5954 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5955,2,t0,t1);}
/* posixunix.scm:1121: decompose-directory */
t2=*((C_word*)lf[328]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* open-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_5033r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5033r(t0,t1,t2,t3);}}

static void C_ccall f_5033r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=C_i_check_string_2(t2,lf[201]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[198]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5047,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[198]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5054,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:659: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[201]);}
else{
t9=C_eqp(t6,lf[199]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:660: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t10,t2,lf[201]);}
else{
/* posixunix.scm:633: ##sys#error */
t10=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[200],t6);}}}

/* k7557 in k7553 in k7532 in terminal-size in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=C_i_foreign_pointer_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_pointer_argumentp(t1);
t5=stub1801(C_SCHEME_UNDEFINED,t2,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
/* posixunix.scm:1555: values */
C_values(4,0,((C_word*)t0)[4],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5]))),C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6]))));}
else{
/* posixunix.scm:1556: posix-error */
t7=lf[0];
f_2664(6,t7,((C_word*)t0)[4],lf[409],lf[408],lf[410],((C_word*)t0)[7]);}}

/* k7553 in k7532 in terminal-size in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7555,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7559,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1554: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[411]+1)))(6,*((C_word*)lf[411]+1),t3,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[412]);}

/* k5022 in open-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5024,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixunix.scm:644: check */
f_4978(((C_word*)t0)[3],lf[197],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* scan in k4139 in loop in get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4149(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4149,NULL,3,t0,t1,t2);}
t3=C_subchar(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(61),t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4175,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:643: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t4,((C_word*)t0)[2],C_fix(0),t2);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posix-common.scm:646: scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k4139 in loop in get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4141,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4149,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4149(t6,((C_word*)t0)[4],C_fix(0));}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}

/* loop in get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4137(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4137,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4141,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub631(t5,t6);
/* posix-common.scm:636: ##sys#peek-c-string */
t8=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4131,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4137,a[2]=t3,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4137(t5,t1,C_fix(0));}

/* k7698 in setenv in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1879(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* k5997 in k5985 in k5979 in loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5999,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1130: ##sys#read-symbolic-link */
t3=*((C_word*)lf[324]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],lf[327]);}
else{
/* posixunix.scm:1128: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5971(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k5994 in k5985 in k5979 in loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1128: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5971(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3266r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3266r(t0,t1,t2,t3);}}

static void C_ccall f_3266r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_check_string_2(t2,lf[80]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3276,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_block_size(t2);
t10=C_eqp(C_fix(0),t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3282,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_3282(2,t12,t10);}
else{
/* posix-common.scm:455: file-exists? */
t12=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t2);}}

/* k3274 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4117 in unsetenv in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* unsetenv in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4111,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[125]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4119,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:632: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t2,lf[125]);}

/* k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3294,a[2]=t3,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3294(t5,((C_word*)t0)[2],t1);}

/* k4177 in k4173 in scan in k4139 in loop in get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4179,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4167,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* posix-common.scm:645: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4137(t6,t4,t5);}

/* loop in k3290 in k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3294(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3294,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3301,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3334,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:459: directory? */
t5=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t3;
f_3301(t4,C_SCHEME_FALSE);}}

/* ##sys#custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_6606r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6606r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6606r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?*((C_word*)lf[337]+1):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6628,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t12,a[6]=t1,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
/* posixunix.scm:1278: ##sys#file-nonblocking! */
t21=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t20,t4);}
else{
t21=t20;
f_6628(2,t21,C_SCHEME_UNDEFINED);}}

/* k4173 in scan in k4139 in loop in get-environment-variables in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4175,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_block_size(((C_word*)t0)[6]);
/* posix-common.scm:644: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t3,((C_word*)t0)[6],t4,t5);}

/* k2867 in regular-file? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[22],t1));}

/* regular-file? in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2861,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2869,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:282: file-type */
t4=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* loop in poke1529 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6635,2,t0,t1);}
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_i_eqvp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_i_eqvp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6654,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1286: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[339]+1)))(2,*((C_word*)lf[339]+1),t7);}
else{
if(C_truep(C_i_eqvp(t4,C_fix((C_word)EINTR)))){
/* posixunix.scm:1289: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[343]+1)))(3,*((C_word*)lf[343]+1),t1,((C_word*)((C_word*)t0)[6])[1]);}
else{
/* posixunix.scm:1291: posix-error */
t7=lf[0];
f_2664(7,t7,t1,((C_word*)t0)[7],lf[8],lf[352],((C_word*)t0)[2],((C_word*)t0)[8]);}}}
else{
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6685,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1293: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),t4,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}}

/* a8526 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8527,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1139(C_SCHEME_UNDEFINED));}

/* k3242 in for-each-loop292 in k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3234(t3,((C_word*)t0)[4],t2);}

/* k8519 in a8510 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:867: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[450],lf[451],((C_word*)t0)[3]);}

/* a8529 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8530,3,t0,t1,t2);}
t3=C_setuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8540,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:857: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5453 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5416(t2,C_getpwnam(t1));}

/* k6652 in loop in poke1529 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1287: poke */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc4)C_fast_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4448 in k4445 in k4442 in file-read in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4450,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k4107 in k4103 in setenv in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k5473 in current-user-name in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:915: user-information */
t2=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4103 in setenv in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4105,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4109,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:627: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t3,((C_word*)t0)[3],lf[124]);}

/* k5469 in current-user-name in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* k3280 in create-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3342,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:457: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3365,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:448: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,t3,lf[80]);}}}

/* current-effective-user-name in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5485,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5489,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:918: current-effective-user-id */
t4=*((C_word*)lf[254]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3154 in current-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3156,2,t0,t1);}
t2=t1;
t3=C_curdir(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3159,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:418: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}

/* k4442 in file-read in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4444,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t4=t3;
f_4447(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:526: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[12],lf[179],lf[181],t2);}}
else{
/* posixunix.scm:526: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[12],lf[179],lf[181],t2);}}

/* k4445 in k4442 in file-read in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4447,2,t0,t1);}
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4450,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:529: posix-error */
t5=lf[0];
f_2664(7,t5,t3,lf[8],lf[179],lf[180],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,((C_word*)t0)[3],t2));}}

/* process-fork in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7581(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_7581r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7581r(t0,t1,t2);}}

static void C_ccall f_7581r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=stub1827(C_SCHEME_UNDEFINED);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7600,a[2]=t5,a[3]=t14,a[4]=t10,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t16=C_eqp(C_fix(-1),t14);
if(C_truep(t16)){
/* posixunix.scm:1578: posix-error */
t17=lf[0];
f_2664(5,t17,t15,lf[133],lf[415],lf[417]);}
else{
t17=t15;
f_7600(2,t17,C_SCHEME_UNDEFINED);}}

/* k3157 in k3154 in current-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:420: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2]);}
else{
/* posix-common.scm:421: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[8],lf[68],lf[71]);}}

/* current-user-name in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5471,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5475,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:915: current-user-id */
t4=*((C_word*)lf[253]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3215 in g293 in k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[75]+1);
t3=*((C_word*)lf[75]+1);
/* posix-common.scm:438: g303 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(3,*((C_word*)lf[75]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:440: directory? */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* file-write in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4475r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4475r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4475r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[182]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4482,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_4482(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm:536: ##sys#signal-hook */
t7=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[12],lf[182],lf[184],t3);}}
else{
/* posixunix.scm:536: ##sys#signal-hook */
t7=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[12],lf[182],lf[184],t3);}}

/* k3227 in k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:444: rmdir */
f_3183(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a8545 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8546,2,t0,t1);}
t2=C_sigprocmask_get(C_fix(0));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8552,a[2]=t4,a[3]=((C_word)li239),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8552(t6,t1,*((C_word*)lf[241]+1),C_SCHEME_END_OF_LIST);}

/* k5414 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5416(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5416,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[258]+1):*((C_word*)lf[259]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5429,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3221 in k3215 in g293 in k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:438: g303 */
f_3183(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[75]+1);
t3=*((C_word*)lf[75]+1);
/* posix-common.scm:438: g303 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[75]+1)))(3,*((C_word*)lf[75]+1),((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k8538 in a8529 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:858: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[447],lf[453],((C_word*)t0)[3]);}

/* k5221 in create-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:719: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4786(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4786,NULL,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub900(C_SCHEME_UNDEFINED,t2,t3,t4);
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:588: posix-error */
t6=lf[0];
f_2664(7,t6,((C_word*)t0)[4],lf[8],lf[187],lf[188],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t6=C_eqp(t5,C_fix(0));
if(C_truep(t6)){
t7=C_i_pairp(((C_word*)t0)[5]);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
/* posixunix.scm:589: values */
C_values(4,0,((C_word*)t0)[4],t8,C_SCHEME_END_OF_LIST);}
else{
/* posixunix.scm:589: values */
C_values(4,0,((C_word*)t0)[4],t8,C_SCHEME_FALSE);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4626,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4725,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4725(t11,t7,C_fix(0),C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);}}}

/* k5483 in current-effective-user-name in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* k5985 in k5979 in loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5999,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1129: symbolic-link? */
t6=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}
else{
/* posixunix.scm:1135: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[8],lf[327],lf[330],((C_word*)t0)[6]);}}

/* poke1529 in k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6629,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6635,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li154),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_6635(2,t7,t1);}

/* k6626 in custom-output-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6628,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6629,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li155),tmp=(C_word)a,a+=7,tmp);
t7=C_fixnump(((C_word*)t0)[5]);
t8=(C_truep(t7)?((C_word*)t0)[5]:C_block_size(((C_word*)t0)[5]));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6695,a[2]=t3,a[3]=t6,a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=t10;
f_6695(t12,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6742,a[2]=t3,a[3]=((C_word)li159),tmp=(C_word)a,a+=4,tmp));}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6756,a[2]=t10,a[3]=t9,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
/* posixunix.scm:1300: ##sys#make-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t12,((C_word*)t0)[5]);}
else{
t13=t12;
f_6756(2,t13,((C_word*)t0)[5]);}}}

/* k5487 in current-effective-user-name in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:918: user-information */
t2=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop292 in k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3234(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3234,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3244,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:433: g293 */
t5=((C_word*)t0)[3];
f_3207(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in a8545 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8552(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8552,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_sigismember(t4))){
t7=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm:808: loop */
t11=t1;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t7=t3;
/* posixunix.scm:808: loop */
t11=t1;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* file-close in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4418(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4418,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[177]);
t4=C_close(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* posixunix.scm:518: posix-error */
t5=lf[0];
f_2664(6,t5,t1,lf[8],lf[177],lf[178],t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a5213 in k5187 in with-output-to-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5214,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[211]+1));
t3=C_mutate2((C_word*)lf[211]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5979 in loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5981,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1127: file-exists? */
t4=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* create-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5223,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_pipe(C_SCHEME_FALSE);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:718: posix-error */
t4=lf[0];
f_2664(5,t4,t2,lf[8],lf[212],lf[213]);}
else{
/* posixunix.scm:719: values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k5431 in k5427 in k5414 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_PW_GECOS),C_fix(0));}

/* k5435 in k5431 in k5427 in k5414 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k4404 in k4401 in k4388 in file-open in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4401 in k4388 in file-open in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4403,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4406,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:511: posix-error */
t5=lf[0];
f_2664(8,t5,t3,lf[8],lf[175],lf[176],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* loop in k5967 in a5960 in read-symbolic-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_5971(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5971,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5981,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
/* posixunix.scm:1126: make-pathname */
t6=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t3,t5);}}

/* k5427 in k5414 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5429,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* file-read in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4434(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4434r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4434r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4434r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[179]);
t6=C_i_check_exact_2(t3,lf[179]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4444,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_4444(2,t9,C_u_i_car(t8));}
else{
t8=t3;
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t7,t8,C_make_character(32));}}

/* a4249 in process-wait in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4250,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:676: posix-error */
t6=lf[0];
f_2664(6,t6,t1,lf[133],lf[131],lf[134],((C_word*)t0)[2]);}
else{
/* posix-common.scm:677: values */
C_values(5,0,t1,t2,t3,t4);}}

/* k4795 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4797,2,t0,t1);}
t2=C_a_i_times(&a,2,t1,C_fix(1000));
t3=((C_word*)t0)[2];
f_4786(t3,C_i_inexact_to_exact(t2));}

/* doloop876 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_4799(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=t1;
t5=C_i_foreign_fixnum_argumentp(t4);
t6=C_i_foreign_fixnum_argumentp(t3);
if(C_truep(((C_word*)t0)[2])){
t7=C_i_foreign_block_argumentp(((C_word*)t0)[2]);
t8=stub885(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_fixnum_plus(t1,C_fix(1));
t10=t2;
t11=C_u_i_cdr(t10);
t18=t9;
t19=t11;
t1=t18;
t2=t19;
goto loop;}
else{
t7=stub885(C_SCHEME_UNDEFINED,t5,t6,C_SCHEME_FALSE);
t8=C_fixnum_plus(t1,C_fix(1));
t9=t2;
t10=C_u_i_cdr(t9);
t18=t8;
t19=t10;
t1=t18;
t2=t19;
goto loop;}}}

/* k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2641 in k2638 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2644 in k2641 in k2638 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2638 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* ##sys#file-nonblocking! in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4289,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub723(C_SCHEME_UNDEFINED,t3));}

/* set-signal-mask! in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5266,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[242]);
t4=C_sigemptyset(C_fix(0));
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5290,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t7=f_5290(t5);
t8=C_sigprocmask_set(C_fix(0));
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm:798: posix-error */
t9=lf[0];
f_2664(5,t9,t1,lf[133],lf[242],lf[243]);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* k5439 in k5435 in k5431 in k5427 in k5414 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5441,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k5443 in k5439 in k5435 in k5431 in k5427 in k5414 in user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:898: g1174 */
t2=((C_word*)t0)[2];
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k7508 in terminal-name in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7510,2,t0,t1);}
t2=C_C_fileno(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub1790(t4,t5);
/* posixunix.scm:1538: ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* g293 in k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3207(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3207,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3217,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:439: symbolic-link? */
t4=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3204 in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[76]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3234,a[2]=t6,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3234(t8,t4,t1);}

/* k7752 in doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_check_list_2(((C_word*)t0)[2],lf[419]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7786,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word)li192),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7786(t7,t2,((C_word*)t0)[2],C_fix(0));}
else{
t3=t2;
f_7757(2,t3,C_SCHEME_UNDEFINED);}}

/* terminal-name in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7506,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7510,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1540: ##sys#terminal-check */
f_7475(t3,lf[407],t2);}

/* k7755 in k7752 in doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_ccall f_7757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7757,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1614: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,((C_word*)t0)[4],lf[419]);}

/* k5093 in close-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k6875 in file-truncate in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6877(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1341: posix-error */
t2=lf[0];
f_2664(7,t2,((C_word*)t0)[2],lf[8],lf[355],lf[356],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#file-select-one in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4296,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub728(C_SCHEME_UNDEFINED,t3));}

/* close-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5088,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[204]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5095,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm:674: posix-error */
t8=lf[0];
f_2664(6,t8,t6,lf[8],lf[204],lf[205],t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k5078 in close-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5403,2,t0,t1);}
t2=C_mutate2((C_word*)lf[255]+1 /* (set! current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8470,a[2]=((C_word)li231),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8473,a[2]=((C_word)li232),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:881: getter-with-setter */
t6=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,t5,lf[446]);}

/* user-information in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_5409r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5409r(t0,t1,t2,t3);}}

static void C_ccall f_5409r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5416,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t8=t7;
f_5416(t8,C_getpwuid(t2));}
else{
t8=C_i_check_string_2(t2,lf[257]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5455,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:903: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[257]);}}

/* k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5407,2,t0,t1);}
t2=C_mutate2((C_word*)lf[256]+1 /* (set! current-effective-group-id ...) */,t1);
t3=C_mutate2((C_word*)lf[257]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5409,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[260]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5463,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[261]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5477,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[262]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5502,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[263]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5582,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[267]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5646,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[270]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5721,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[272]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t11=C_mutate2((C_word*)lf[273]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t12=C_mutate2((C_word*)lf[274]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t13=C_mutate2((C_word*)lf[275]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t14=C_mutate2((C_word*)lf[276]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t15=C_mutate2((C_word*)lf[277]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t16=C_mutate2((C_word*)lf[278]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t17=C_mutate2((C_word*)lf[279]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t18=C_mutate2((C_word*)lf[280]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t19=C_mutate2((C_word*)lf[281]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t20=C_mutate2((C_word*)lf[282]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t21=C_mutate2((C_word*)lf[283]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t22=C_mutate2((C_word*)lf[284]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t23=C_mutate2((C_word*)lf[285]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t24=C_mutate2((C_word*)lf[286]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t25=C_mutate2((C_word*)lf[287]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t26=C_mutate2((C_word*)lf[288]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t27=C_mutate2((C_word*)lf[289]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t28=C_mutate2((C_word*)lf[290]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t29=C_mutate2((C_word*)lf[291]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t30=C_mutate2((C_word*)lf[292]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t31=C_mutate2((C_word*)lf[293]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t32=C_mutate2((C_word*)lf[294]+1 /* (set! errno/wouldblock ...) */,C_fix((C_word)EWOULDBLOCK));
t33=C_set_block_item(lf[295] /* errno/2big */,0,C_fix(0));
t34=C_set_block_item(lf[296] /* errno/deadlk */,0,C_fix(0));
t35=C_set_block_item(lf[297] /* errno/dom */,0,C_fix(0));
t36=C_set_block_item(lf[298] /* errno/fbig */,0,C_fix(0));
t37=C_set_block_item(lf[299] /* errno/ilseq */,0,C_fix(0));
t38=C_set_block_item(lf[300] /* errno/mlink */,0,C_fix(0));
t39=C_set_block_item(lf[301] /* errno/nametoolong */,0,C_fix(0));
t40=C_set_block_item(lf[302] /* errno/nfile */,0,C_fix(0));
t41=C_set_block_item(lf[303] /* errno/nodev */,0,C_fix(0));
t42=C_set_block_item(lf[304] /* errno/nolck */,0,C_fix(0));
t43=C_set_block_item(lf[305] /* errno/nosys */,0,C_fix(0));
t44=C_set_block_item(lf[306] /* errno/notempty */,0,C_fix(0));
t45=C_set_block_item(lf[307] /* errno/notty */,0,C_fix(0));
t46=C_set_block_item(lf[308] /* errno/nxio */,0,C_fix(0));
t47=C_set_block_item(lf[309] /* errno/range */,0,C_fix(0));
t48=C_set_block_item(lf[310] /* errno/xdev */,0,C_fix(0));
t49=C_mutate2((C_word*)lf[311]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5785,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[313]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5808,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5834,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
t52=C_mutate2((C_word*)lf[315]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5854,a[2]=t51,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate2((C_word*)lf[316]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5860,a[2]=t51,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate2((C_word*)lf[317]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5866,a[2]=t51,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp));
t55=C_mutate2((C_word*)lf[318]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5872,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8430,a[2]=((C_word)li229),tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8448,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1076: getter-with-setter */
t59=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t59+1)))(5,t59,t56,t57,t58,lf[443]);}

/* k7758 in k7755 in k7752 in doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_7760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(((C_word*)t0)[2])?C_execve(t1):C_execvp(t1));
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=stub1874(C_SCHEME_UNDEFINED);
t5=stub1886(C_SCHEME_UNDEFINED);
/* posixunix.scm:1621: posix-error */
t6=lf[0];
f_2664(6,t6,((C_word*)t0)[3],lf[133],lf[419],lf[420],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k4489 in k4483 in k4480 in file-write in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* current-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3143r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3143r(t0,t1,t2);}}

static void C_ccall f_3143r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
if(C_truep(t4)){
/* posix-common.scm:414: change-directory */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t5,C_fix(1024),C_make_character(32));}}

/* for-each-loop1094 in set-signal-mask! in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static C_word C_fcall f_5290(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_exact_2(t2,lf[242]);
t4=C_sigaddset(t2);
t5=C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k6889 in file-truncate in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_truncate(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_6877(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* duplicate-fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3116r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3116r(t0,t1,t2,t3);}}

static void C_ccall f_3116r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[66]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3123,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_3123(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[66]);
t8=t5;
f_3123(t8,C_dup2(t2,t6));}}

/* k4480 in file-write in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4485(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4485(t3,C_block_size(((C_word*)t0)[3]));}}

/* k3108 in port->fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3110,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posix-common.scm:395: posix-error */
t2=lf[0];
f_2664(6,t2,((C_word*)t0)[2],lf[12],lf[61],lf[63],((C_word*)t0)[3]);}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3093,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:393: posix-error */
t4=lf[0];
f_2664(6,t4,t3,lf[8],lf[61],lf[64],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* file-truncate in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6867,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[355]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6877,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6884,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6891,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1337: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t7,t2,lf[355]);}
else{
if(C_truep(C_fixnump(t2))){
t7=C_ftruncate(t2,t3);
t8=t5;
f_6877(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
/* posixunix.scm:1339: ##sys#error */
t7=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[355],lf[357],t2);}}}

/* process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7714(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_7714r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7714r(t0,t1,t2,t3);}}

static void C_ccall f_7714r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_check_string_2(t2,lf[419]);
t15=C_i_check_list_2(t6,lf[419]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7736,a[2]=t11,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1600: pathname-strip-directory */
t17=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t2);}

/* k4483 in k4480 in file-write in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4485(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4485,NULL,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[182]);
t3=C_write(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
/* posixunix.scm:541: posix-error */
t6=lf[0];
f_2664(7,t6,t4,lf[8],lf[182],lf[183],((C_word*)t0)[2],t1);}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}}

/* seconds->local-time in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3897(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3897r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3897r(t0,t1,t2);}}

static void C_ccall f_3897r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:578: current-seconds */
t4=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[111]);
/* posix-common.scm:580: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[112]+1)))(4,*((C_word*)lf[112]+1),t1,t4,C_SCHEME_FALSE);}}

/* k3124 in k3121 in duplicate-fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* doloop1910 in k7752 in doloop1906 in k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_fcall f_7786(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7786,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixunix.scm:1610: setenv */
f_7691(t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,lf[419]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7805,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixunix.scm:1613: setenv */
f_7691(t6,t3,t4,t7);}}

/* k3121 in duplicate-fileno in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3123,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:406: posix-error */
t4=lf[0];
f_2664(6,t4,t3,lf[8],lf[66],lf[67],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k7569 in get-host-name in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7571,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7574,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* posixunix.scm:1567: posix-error */
t4=lf[0];
f_2664(5,t4,t3,lf[409],lf[413],lf[414]);}}

/* f_3863 in a3860 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3863(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3863,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* k7572 in k7569 in get-host-name in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* a3860 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3861,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3863,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));}

/* a3868 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3869,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));}

/* a8579 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8580(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8580,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[129]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(*((C_word*)lf[128]+1),t2));}

/* a8588 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8589(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_8589r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8589r(t0,t1,t2);}}

static void C_ccall f_8589r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(C_truep(t4)?C_i_check_exact_2(t4,lf[108]):C_SCHEME_UNDEFINED);
if(C_truep(t4)){
t6=C_umask(t4);
if(C_truep(t4)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_umask(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}}
else{
t6=C_umask(C_fix(0));
if(C_truep(t4)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_umask(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}}}

/* k7737 in k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7739,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word)li193),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_7744(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(1));}

/* k7734 in process-execute in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_block_size(t1);
/* posixunix.scm:1601: setarg */
f_7668(t2,C_fix(0),t1,t3);}

/* k6882 in file-truncate in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6877(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3177r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3177r(t0,t1,t2,t3);}}

static void C_ccall f_3177r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[73]);
if(C_truep(t5)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3206,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:433: find-files */
t9=*((C_word*)lf[77]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t8,t2,lf[78],C_SCHEME_TRUE,lf[79],C_SCHEME_FALSE);}
else{
/* posix-common.scm:445: rmdir */
f_3183(t1,t2);}}

/* get-host-name in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7571,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=stub1820(t3);
/* posixunix.scm:1561: ##sys#peek-c-string */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,C_fix(0));}

/* rmdir in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3183(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3183,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3187,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:428: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t3,t2);}

/* k3185 in rmdir in delete-directory in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_rmdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posix-common.scm:430: posix-error */
t4=lf[0];
f_2664(6,t4,((C_word*)t0)[2],lf[8],lf[73],lf[74],((C_word*)t0)[3]);}}

/* lp in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4725,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:592: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[189]+1)))(3,*((C_word*)lf[189]+1),t1,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4754,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=t2;
t7=C_i_foreign_fixnum_argumentp(t6);
if(C_truep(((C_word*)t0)[3])){
t8=C_i_foreign_block_argumentp(((C_word*)t0)[3]);
t9=t5;
f_4754(t9,stub925(C_SCHEME_UNDEFINED,t7,t8));}
else{
t8=t5;
f_4754(t8,stub925(C_SCHEME_UNDEFINED,t7,C_SCHEME_FALSE));}}}

/* process-wait in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4220(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_4220r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4220r(t0,t1,t2);}}

static void C_ccall f_4220r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a=C_alloc(9);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=t8;
t10=C_i_nullp(t6);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t12=(C_truep(t4)?t4:C_fix(-1));
t13=t12;
t14=C_i_check_exact_2(t13,lf[131]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4244,a[2]=t13,a[3]=t9,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4250,a[2]=t13,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:674: ##sys#call-with-values */
C_call_with_values(4,0,t1,t15,t16);}

/* k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word ab[168],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4212,2,t0,t1);}
t2=C_mutate2((C_word*)lf[129]+1 /* (set! signal-handler ...) */,t1);
t3=C_mutate2((C_word*)lf[130]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4214,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[131]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4220,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[135]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4289,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[136]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4296,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[137]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t8=C_mutate2((C_word*)lf[138]+1 /* (set! fcntl/dupfd ...) */,C_fix((C_word)F_DUPFD));
t9=C_mutate2((C_word*)lf[139]+1 /* (set! fcntl/getfd ...) */,C_fix((C_word)F_GETFD));
t10=C_mutate2((C_word*)lf[140]+1 /* (set! fcntl/setfd ...) */,C_fix((C_word)F_SETFD));
t11=C_mutate2((C_word*)lf[141]+1 /* (set! fcntl/getfl ...) */,C_fix((C_word)F_GETFL));
t12=C_mutate2((C_word*)lf[142]+1 /* (set! fcntl/setfl ...) */,C_fix((C_word)F_SETFL));
t13=C_mutate2((C_word*)lf[143]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t14=C_mutate2((C_word*)lf[144]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t15=C_mutate2((C_word*)lf[145]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t16=C_mutate2((C_word*)lf[146]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDONLY));
t17=C_mutate2((C_word*)lf[147]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t18=C_mutate2((C_word*)lf[148]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t19=C_mutate2((C_word*)lf[149]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t20=C_mutate2((C_word*)lf[150]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t21=C_mutate2((C_word*)lf[151]+1 /* (set! open/noctty ...) */,C_fix((C_word)O_NOCTTY));
t22=C_mutate2((C_word*)lf[152]+1 /* (set! open/nonblock ...) */,C_fix((C_word)O_NONBLOCK));
t23=C_mutate2((C_word*)lf[153]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t24=C_mutate2((C_word*)lf[154]+1 /* (set! open/sync ...) */,C_fix((C_word)O_FSYNC));
t25=C_mutate2((C_word*)lf[155]+1 /* (set! open/fsync ...) */,C_fix((C_word)O_FSYNC));
t26=C_mutate2((C_word*)lf[156]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t27=C_mutate2((C_word*)lf[157]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t28=C_mutate2((C_word*)lf[158]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IRUSR));
t29=C_mutate2((C_word*)lf[159]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWUSR));
t30=C_mutate2((C_word*)lf[160]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IXUSR));
t31=C_mutate2((C_word*)lf[161]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IRGRP));
t32=C_mutate2((C_word*)lf[162]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWGRP));
t33=C_mutate2((C_word*)lf[163]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IXGRP));
t34=C_mutate2((C_word*)lf[164]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IROTH));
t35=C_mutate2((C_word*)lf[165]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWOTH));
t36=C_mutate2((C_word*)lf[166]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IXOTH));
t37=C_mutate2((C_word*)lf[167]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IRWXU));
t38=C_mutate2((C_word*)lf[168]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IRWXG));
t39=C_mutate2((C_word*)lf[169]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IRWXO));
t40=C_mutate2((C_word*)lf[170]+1 /* (set! perm/isvtx ...) */,C_fix((C_word)S_ISVTX));
t41=C_mutate2((C_word*)lf[171]+1 /* (set! perm/isuid ...) */,C_fix((C_word)S_ISUID));
t42=C_mutate2((C_word*)lf[172]+1 /* (set! perm/isgid ...) */,C_fix((C_word)S_ISGID));
t43=C_mutate2((C_word*)lf[173]+1 /* (set! file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4353,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t44=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t45=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t44);
t46=t45;
t47=C_mutate2((C_word*)lf[175]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4386,a[2]=t46,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate2((C_word*)lf[177]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4418,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[179]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4434,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[182]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4475,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[185]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4512,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[187]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[69]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4925,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[193]+1 /* (set! change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4944,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
t56=C_mutate2((C_word*)lf[197]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4993,a[2]=t55,a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp));
t57=C_mutate2((C_word*)lf[201]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5033,a[2]=t55,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp));
t58=C_mutate2((C_word*)lf[202]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5073,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate2((C_word*)lf[204]+1 /* (set! close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5088,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate2((C_word*)lf[206]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5103,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate2((C_word*)lf[207]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5127,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate2((C_word*)lf[208]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5151,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate2((C_word*)lf[210]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5185,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate2((C_word*)lf[212]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5219,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate2((C_word*)lf[214]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t66=C_mutate2((C_word*)lf[215]+1 /* (set! signal/kill ...) */,C_fix((C_word)SIGKILL));
t67=C_mutate2((C_word*)lf[216]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t68=C_mutate2((C_word*)lf[217]+1 /* (set! signal/hup ...) */,C_fix((C_word)SIGHUP));
t69=C_mutate2((C_word*)lf[218]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t70=C_mutate2((C_word*)lf[219]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t71=C_mutate2((C_word*)lf[220]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t72=C_mutate2((C_word*)lf[221]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t73=C_mutate2((C_word*)lf[222]+1 /* (set! signal/trap ...) */,C_fix((C_word)SIGTRAP));
t74=C_mutate2((C_word*)lf[223]+1 /* (set! signal/quit ...) */,C_fix((C_word)SIGQUIT));
t75=C_mutate2((C_word*)lf[224]+1 /* (set! signal/alrm ...) */,C_fix((C_word)SIGALRM));
t76=C_mutate2((C_word*)lf[225]+1 /* (set! signal/vtalrm ...) */,C_fix((C_word)SIGVTALRM));
t77=C_mutate2((C_word*)lf[226]+1 /* (set! signal/prof ...) */,C_fix((C_word)SIGPROF));
t78=C_mutate2((C_word*)lf[227]+1 /* (set! signal/io ...) */,C_fix((C_word)SIGIO));
t79=C_mutate2((C_word*)lf[228]+1 /* (set! signal/urg ...) */,C_fix((C_word)SIGURG));
t80=C_mutate2((C_word*)lf[229]+1 /* (set! signal/chld ...) */,C_fix((C_word)SIGCHLD));
t81=C_mutate2((C_word*)lf[230]+1 /* (set! signal/cont ...) */,C_fix((C_word)SIGCONT));
t82=C_mutate2((C_word*)lf[231]+1 /* (set! signal/stop ...) */,C_fix((C_word)SIGSTOP));
t83=C_mutate2((C_word*)lf[232]+1 /* (set! signal/tstp ...) */,C_fix((C_word)SIGTSTP));
t84=C_mutate2((C_word*)lf[233]+1 /* (set! signal/pipe ...) */,C_fix((C_word)SIGPIPE));
t85=C_mutate2((C_word*)lf[234]+1 /* (set! signal/xcpu ...) */,C_fix((C_word)SIGXCPU));
t86=C_mutate2((C_word*)lf[235]+1 /* (set! signal/xfsz ...) */,C_fix((C_word)SIGXFSZ));
t87=C_mutate2((C_word*)lf[236]+1 /* (set! signal/usr1 ...) */,C_fix((C_word)SIGUSR1));
t88=C_mutate2((C_word*)lf[237]+1 /* (set! signal/usr2 ...) */,C_fix((C_word)SIGUSR2));
t89=C_mutate2((C_word*)lf[238]+1 /* (set! signal/winch ...) */,C_fix((C_word)SIGWINCH));
t90=C_mutate2((C_word*)lf[239]+1 /* (set! signal/bus ...) */,C_fix((C_word)SIGBUS));
t91=C_set_block_item(lf[240] /* signal/break */,0,C_fix(0));
t92=C_a_i_list(&a,26,*((C_word*)lf[214]+1),*((C_word*)lf[215]+1),*((C_word*)lf[216]+1),*((C_word*)lf[217]+1),*((C_word*)lf[218]+1),*((C_word*)lf[219]+1),*((C_word*)lf[220]+1),*((C_word*)lf[221]+1),*((C_word*)lf[222]+1),*((C_word*)lf[223]+1),*((C_word*)lf[224]+1),*((C_word*)lf[225]+1),*((C_word*)lf[226]+1),*((C_word*)lf[227]+1),*((C_word*)lf[228]+1),*((C_word*)lf[229]+1),*((C_word*)lf[230]+1),*((C_word*)lf[231]+1),*((C_word*)lf[232]+1),*((C_word*)lf[233]+1),*((C_word*)lf[234]+1),*((C_word*)lf[235]+1),*((C_word*)lf[236]+1),*((C_word*)lf[237]+1),*((C_word*)lf[238]+1),*((C_word*)lf[239]+1));
t93=C_mutate2((C_word*)lf[241]+1 /* (set! signals-list ...) */,t92);
t94=C_mutate2((C_word*)lf[242]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5266,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t95=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t96=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8546,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:801: getter-with-setter */
t97=*((C_word*)lf[442]+1);
((C_proc4)(void*)(*((C_word*)t97+1)))(4,t97,t95,t96,*((C_word*)lf[242]+1));}

/* current-process-id in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4214,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fudge(C_fix(33)));}

/* k4752 in lp in k4784 in k4560 in k4552 in k4549 in k4546 in file-select in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_4754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4754,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* posixunix.scm:597: lp */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4725(t7,((C_word*)t0)[6],t2,t4,t6);}
else{
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm:598: lp */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4725(t4,((C_word*)t0)[6],t2,((C_word*)t0)[4],t3);}}

/* loop in k6337 in a6330 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 in ... */
static void C_fcall f_6341(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6341,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t10=C_substring_copy(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t12=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t11);
t13=C_fixnum_difference(t2,t8);
t14=C_fixnum_plus(t3,t8);
t15=C_fixnum_plus(t4,t8);
/* posixunix.scm:1228: loop */
t19=t1;
t20=t13;
t21=t14;
t22=t15;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1230: fetch */
t7=((C_word*)t0)[7];
f_6155(t7,t6);}}}

/* a4243 in process-wait in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4244,2,t0,t1);}
/* posix-common.scm:674: ##sys#process-wait */
t2=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6337 in a6330 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_6339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6339,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word)li146),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6341(t5,((C_word*)t0)[7],t1,C_fix(0),((C_word*)t0)[8]);}

/* f_3871 in a3868 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3871(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3871,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* a8034 */
static void C_ccall f_8035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8035,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm:1704: ##sys#signal-hook */
t5=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[133],((C_word*)t0)[2],lf[432],((C_word*)t0)[3],t4);}}

/* k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3876,2,t0,t1);}
t2=C_mutate2((C_word*)lf[108]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate2(&lf[109] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[111]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3897,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[114]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3918,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[115]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t7=C_fix((C_word)sizeof(struct tm));
t8=C_mutate2((C_word*)lf[117]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3987,a[2]=t7,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t9=C_fix((C_word)sizeof(struct tm));
t10=C_mutate2((C_word*)lf[121]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4032,a[2]=t9,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate2((C_word*)lf[124]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4094,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[125]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[126]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4131,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[127]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8580,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:658: getter-with-setter */
t17=*((C_word*)lf[442]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t15,t16,*((C_word*)lf[127]+1));}

/* check-time-vector in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_3878(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3878,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:576: ##sys#error */
t6=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[110],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* needed-pipe in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_8049(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8049,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8058,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8064,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1707: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_3819 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]));}

/* f_3811 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3811,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k7353 in k7347 in k7343 in utc-time->seconds in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm:1481: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[393],lf[394],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4056 in k4037 in time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4058,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:613: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t3,((C_word*)t0)[4],C_make_character(0));}

/* k8500 in a8491 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:877: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[447],lf[448],((C_word*)t0)[3]);}

/* a8507 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8508,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1144(C_SCHEME_UNDEFINED));}

/* k7347 in k7343 in utc-time->seconds in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7349,2,t0,t1);}
t2=C_a_timegm(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1480: fp= */
t4=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[120],t2);}

/* k7343 in utc-time->seconds in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1479: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t2,((C_word*)t0)[4],C_make_character(0));}

/* utc-time->seconds in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7341(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7341,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7345,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1478: check-time-vector */
f_3878(t3,lf[393],t2);}

/* k4046 in k4037 in time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posix-common.scm:614: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[121],lf[122],((C_word*)t0)[3]);}}

/* a8510 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_8511(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8511,3,t0,t1,t2);}
t3=C_seteuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8521,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:866: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k6387 in loop in k6337 in a6330 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in ... */
static void C_ccall f_6389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixunix.scm:1233: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6341(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k6318 in a6315 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1219: peek */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_6147(((C_word*)t0)[3]));}

/* k3800 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3802,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
f_3639(t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3803,a[2]=t2,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));}

/* f_3803 in k3800 in k3634 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3803,3,t0,t1,t2);}
/* posix-common.scm:527: irregex-match */
t3=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k2666 in posix-error in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2679,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub67(t4,t5);
/* posix-common.scm:180: ##sys#peek-c-string */
t7=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* posix-error in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_2664r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2664r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2664r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2668,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:183: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t6);}

/* a6315 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6320,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:1218: fetch */
t3=((C_word*)t0)[5];
f_6155(t3,t2);}
else{
/* posixunix.scm:1219: peek */
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_6147(((C_word*)t0)[2]));}}

/* a3854 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3855,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a3857 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3858,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* a3851 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3852,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a6330 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6331,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_6339(t7,t3);}
else{
t7=C_block_size(t4);
t8=t6;
f_6339(t8,C_fixnum_difference(t7,t5));}}

/* k4060 in k4056 in k4037 in time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4062,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub591(t3,t2,((C_word*)t0)[3],t4);
/* posix-common.scm:606: ##sys#peek-c-string */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[4],t5,C_fix(0));}
else{
t4=stub591(t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);
/* posix-common.scm:606: ##sys#peek-c-string */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t4,C_fix(0));}}

/* k4063 in k4037 in time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:617: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[70]+1)))(5,*((C_word*)lf[70]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:618: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[121],lf[123],((C_word*)t0)[3]);}}

/* k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[6]+1 /* (set! ##sys#posix-error ...) */,lf[0]);
t4=C_mutate2(&lf[7] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2682,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[14]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2722,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8657,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8663,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:250: getter-with-setter */
t9=*((C_word*)lf[442]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t6,t7,t8,lf[461]);}

/* k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3829,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3861,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t3,lf[106],((C_word*)t0)[4],t4);}

/* find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3825r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3825r(t0,t1,t2,t3);}}

static void C_ccall f_3825r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3829,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3869,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t4,lf[107],t3,t5);}

/* ##sys#stat in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_fcall f_2682(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2682,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2686,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_2686(2,t7,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2710,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2717,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:226: ##sys#platform-fixup-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[11]+1)))(3,*((C_word*)lf[11]+1),t8,t2);}
else{
/* posix-common.scm:233: ##sys#signal-hook */
t7=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[12],t5,lf[13],t2);}}}

/* k2684 in stat in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:237: posix-error */
t2=lf[0];
f_2664(6,t2,((C_word*)t0)[3],lf[8],((C_word*)t0)[4],lf[9],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* string->time in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7304(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_7304r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7304r(t0,t1,t2,t3);}}

static void C_ccall f_7304r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[392]:C_i_car(t3));
t6=t5;
t7=C_i_check_string_2(t2,lf[391]);
t8=C_i_check_string_2(t6,lf[391]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7321,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1473: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,t2,lf[391]);}

/* k3999 in k3993 in k3989 in local-time->seconds in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:601: ##sys#error */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[117],lf[118],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k2677 in k2666 in posix-error in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:184: string-append */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[3],t1);}

/* k2673 in k2666 in posix-error in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k7331 in k7323 in k7319 in string->time in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1718(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1718(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE));}}

/* a3848 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3849,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3841,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3849,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t3,lf[79],((C_word*)t0)[8],t4);}

/* k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3844,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=t1;
t9=((C_word*)t0)[8];
t10=C_i_check_string_2(t3,lf[77]);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3636,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t9,a[6]=t2,a[7]=t6,a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
if(C_truep(C_fixnump(t7))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3819,a[2]=t12,a[3]=t7,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
t15=t13;
f_3636(t15,t14);}
else{
t14=t13;
f_3636(t14,t7);}}
else{
t14=t13;
f_3636(t14,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3811,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));}}

/* time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4032(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_4032r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4032r(t0,t1,t2,t3);}}

static void C_ccall f_4032r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4039,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:609: check-time-vector */
f_3878(t7,lf[121],t2);}

/* k4037 in time->string in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[121]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:613: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t4,((C_word*)t0)[2],lf[121]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:615: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t3,((C_word*)t0)[5],C_make_character(0));}}

/* k7323 in k7319 in string->time in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7325,2,t0,t1);}
t2=t1;
t3=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1473: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[72]+1)))(4,*((C_word*)lf[72]+1),t5,((C_word*)t0)[4],C_make_character(0));}

/* k7319 in string->time in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_7321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7321,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1473: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t3,((C_word*)t0)[4]);}

/* call-with-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5127r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5127r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5127r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5131,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[201]+1),t2,t4);}

/* k5120 in a5117 in k5105 in call-with-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a5117 in k5105 in call-with-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5118r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5118r(t0,t1,t2);}}

static void C_ccall f_5118r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5122,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:683: close-input-pipe */
t4=*((C_word*)lf[202]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* a5111 in k5105 in call-with-input-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5112,2,t0,t1);}
/* posixunix.scm:681: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* k5144 in a5141 in k5129 in call-with-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3836 in k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3852,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t3,lf[78],((C_word*)t0)[7],t4);}

/* k3833 in k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3835,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t3,lf[104],((C_word*)t0)[6],t4);}

/* k3830 in k3827 in find-files in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_3832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3832,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3858,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[103]+1)))(5,*((C_word*)lf[103]+1),t3,lf[105],((C_word*)t0)[5],t4);}

/* a5141 in k5129 in call-with-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5142(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5142r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5142r(t0,t1,t2);}}

static void C_ccall f_5142r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5146,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:692: close-output-pipe */
t4=*((C_word*)lf[204]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* a5135 in k5129 in call-with-output-pipe in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_5136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5136,2,t0,t1);}
/* posixunix.scm:690: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* k6302 in a6293 in k6115 in k6109 in custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm:1215: on-close */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}

/* k6079 in file-link in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1144: posix-error */
t2=lf[0];
f_2664(7,t2,((C_word*)t0)[2],lf[8],lf[334],lf[335],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#custom-input-port in k5918 in k5887 in k5405 in k5401 in k5397 in k5393 in k5313 in k4210 in k3874 in k2981 in k2740 in k2650 in k2647 in k2644 in k2641 in k2638 */
static void C_ccall f_6083(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_6083r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6083r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6083r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word *a=C_alloc(9);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?*((C_word*)lf[337]+1):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6111,a[2]=t12,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t22,a[7]=t1,a[8]=t17,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
/* posixunix.scm:1149: ##sys#file-nonblocking! */
t26=*((C_word*)lf[135]+1);
((C_proc3)(void*)(*((C_word*)t26+1)))(3,t26,t25,t4);}
else{
t26=t25;
f_6111(2,t26,C_SCHEME_UNDEFINED);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[591] = {
{"f_5131:posixunix_2escm",(void*)f_5131},
{"f_5209:posixunix_2escm",(void*)f_5209},
{"f_5205:posixunix_2escm",(void*)f_5205},
{"f_5165:posixunix_2escm",(void*)f_5165},
{"f_5160:posixunix_2escm",(void*)f_5160},
{"f_5395:posixunix_2escm",(void*)f_5395},
{"f_5155:posixunix_2escm",(void*)f_5155},
{"f_5151:posixunix_2escm",(void*)f_5151},
{"f_5189:posixunix_2escm",(void*)f_5189},
{"f_5399:posixunix_2escm",(void*)f_5399},
{"f_5185:posixunix_2escm",(void*)f_5185},
{"f_5180:posixunix_2escm",(void*)f_5180},
{"f_5175:posixunix_2escm",(void*)f_5175},
{"f_5171:posixunix_2escm",(void*)f_5171},
{"f_5366:posixunix_2escm",(void*)f_5366},
{"f_5199:posixunix_2escm",(void*)f_5199},
{"f_5355:posixunix_2escm",(void*)f_5355},
{"f_5194:posixunix_2escm",(void*)f_5194},
{"f_5382:posixunix_2escm",(void*)f_5382},
{"f_5671:posixunix_2escm",(void*)f_5671},
{"f_5359:posixunix_2escm",(void*)f_5359},
{"f_6989:posixunix_2escm",(void*)f_6989},
{"f_6985:posixunix_2escm",(void*)f_6985},
{"f_7373:posixunix_2escm",(void*)f_7373},
{"f_5374:posixunix_2escm",(void*)f_5374},
{"f_5370:posixunix_2escm",(void*)f_5370},
{"f_5388:posixunix_2escm",(void*)f_5388},
{"f_7360:posixunix_2escm",(void*)f_7360},
{"f_5323:posixunix_2escm",(void*)f_5323},
{"f_5612:posixunix_2escm",(void*)f_5612},
{"f_5378:posixunix_2escm",(void*)f_5378},
{"f_5315:posixunix_2escm",(void*)f_5315},
{"f_3066:posixunix_2escm",(void*)f_3066},
{"f_3068:posixunix_2escm",(void*)f_3068},
{"f_5317:posixunix_2escm",(void*)f_5317},
{"f_5622:posixunix_2escm",(void*)f_5622},
{"f_3038:posixunix_2escm",(void*)f_3038},
{"f_5650:posixunix_2escm",(void*)f_5650},
{"f_5339:posixunix_2escm",(void*)f_5339},
{"f_5655:posixunix_2escm",(void*)f_5655},
{"f_3054:posixunix_2escm",(void*)f_3054},
{"f_5641:posixunix_2escm",(void*)f_5641},
{"f_3052:posixunix_2escm",(void*)f_3052},
{"f_5646:posixunix_2escm",(void*)f_5646},
{"f_6902:posixunix_2escm",(void*)f_6902},
{"f_6918:posixunix_2escm",(void*)f_6918},
{"f_3040:posixunix_2escm",(void*)f_3040},
{"f_6924:posixunix_2escm",(void*)f_6924},
{"f_7394:posixunix_2escm",(void*)f_7394},
{"f_7398:posixunix_2escm",(void*)f_7398},
{"f_4841:posixunix_2escm",(void*)f_4841},
{"f_7387:posixunix_2escm",(void*)f_7387},
{"f_8352:posixunix_2escm",(void*)f_8352},
{"f_3765:posixunix_2escm",(void*)f_3765},
{"f_3667:posixunix_2escm",(void*)f_3667},
{"f_7805:posixunix_2escm",(void*)f_7805},
{"f_8322:posixunix_2escm",(void*)f_8322},
{"f_3772:posixunix_2escm",(void*)f_3772},
{"f_3778:posixunix_2escm",(void*)f_3778},
{"f_6967:posixunix_2escm",(void*)f_6967},
{"f_3689:posixunix_2escm",(void*)f_3689},
{"f_8304:posixunix_2escm",(void*)f_8304},
{"f_8302:posixunix_2escm",(void*)f_8302},
{"f_3692:posixunix_2escm",(void*)f_3692},
{"f_3025:posixunix_2escm",(void*)f_3025},
{"f_7072:posixunix_2escm",(void*)f_7072},
{"f_7079:posixunix_2escm",(void*)f_7079},
{"f_7096:posixunix_2escm",(void*)f_7096},
{"f_5589:posixunix_2escm",(void*)f_5589},
{"f_3785:posixunix_2escm",(void*)f_3785},
{"f_5582:posixunix_2escm",(void*)f_5582},
{"f_5586:posixunix_2escm",(void*)f_5586},
{"f_3792:posixunix_2escm",(void*)f_3792},
{"f_5107:posixunix_2escm",(void*)f_5107},
{"f_5103:posixunix_2escm",(void*)f_5103},
{"f_7021:posixunix_2escm",(void*)f_7021},
{"f_8437:posixunix_2escm",(void*)f_8437},
{"f_8430:posixunix_2escm",(void*)f_8430},
{"f_5592:posixunix_2escm",(void*)f_5592},
{"f_5597:posixunix_2escm",(void*)f_5597},
{"f_3746:posixunix_2escm",(void*)f_3746},
{"f_3740:posixunix_2escm",(void*)f_3740},
{"f_3603:posixunix_2escm",(void*)f_3603},
{"f_8189:posixunix_2escm",(void*)f_8189},
{"f_6282:posixunix_2escm",(void*)f_6282},
{"f_8183:posixunix_2escm",(void*)f_8183},
{"f_3759:posixunix_2escm",(void*)f_3759},
{"f_3756:posixunix_2escm",(void*)f_3756},
{"f_6294:posixunix_2escm",(void*)f_6294},
{"f_6540:posixunix_2escm",(void*)f_6540},
{"f_3623:posixunix_2escm",(void*)f_3623},
{"f_8166:posixunix_2escm",(void*)f_8166},
{"f_5560:posixunix_2escm",(void*)f_5560},
{"f_3639:posixunix_2escm",(void*)f_3639},
{"f_3636:posixunix_2escm",(void*)f_3636},
{"f_8177:posixunix_2escm",(void*)f_8177},
{"f_8170:posixunix_2escm",(void*)f_8170},
{"f_7017:posixunix_2escm",(void*)f_7017},
{"f_3648:posixunix_2escm",(void*)f_3648},
{"f_3701:posixunix_2escm",(void*)f_3701},
{"f_8448:posixunix_2escm",(void*)f_8448},
{"f_3646:posixunix_2escm",(void*)f_3646},
{"f_5509:posixunix_2escm",(void*)f_5509},
{"f_8443:posixunix_2escm",(void*)f_8443},
{"f_3093:posixunix_2escm",(void*)f_3093},
{"f_5502:posixunix_2escm",(void*)f_5502},
{"f_7001:posixunix_2escm",(void*)f_7001},
{"f_3718:posixunix_2escm",(void*)f_3718},
{"f_7005:posixunix_2escm",(void*)f_7005},
{"f_6530:posixunix_2escm",(void*)f_6530},
{"f_3711:posixunix_2escm",(void*)f_3711},
{"f_3713:posixunix_2escm",(void*)f_3713},
{"f_8424:posixunix_2escm",(void*)f_8424},
{"f_8120:posixunix_2escm",(void*)f_8120},
{"f_4666:posixunix_2escm",(void*)f_4666},
{"f_3084:posixunix_2escm",(void*)f_3084},
{"f_4695:posixunix_2escm",(void*)f_4695},
{"f_5546:posixunix_2escm",(void*)f_5546},
{"f_4562:posixunix_2escm",(void*)f_4562},
{"f_5536:posixunix_2escm",(void*)f_5536},
{"f_6213:posixunix_2escm",(void*)f_6213},
{"f_6216:posixunix_2escm",(void*)f_6216},
{"f_8110:posixunix_2escm",(void*)f_8110},
{"f_8114:posixunix_2escm",(void*)f_8114},
{"f_8117:posixunix_2escm",(void*)f_8117},
{"f_5532:posixunix_2escm",(void*)f_5532},
{"f_5530:posixunix_2escm",(void*)f_5530},
{"f_3726:posixunix_2escm",(void*)f_3726},
{"f_6222:posixunix_2escm",(void*)f_6222},
{"f_4993:posixunix_2escm",(void*)f_4993},
{"f_4991:posixunix_2escm",(void*)f_4991},
{"f_3733:posixunix_2escm",(void*)f_3733},
{"f_3730:posixunix_2escm",(void*)f_3730},
{"f_7870:posixunix_2escm",(void*)f_7870},
{"f_4978:posixunix_2escm",(void*)f_4978},
{"f_6257:posixunix_2escm",(void*)f_6257},
{"f_6255:posixunix_2escm",(void*)f_6255},
{"f_6251:posixunix_2escm",(void*)f_6251},
{"f_5526:posixunix_2escm",(void*)f_5526},
{"f_7886:posixunix_2escm",(void*)f_7886},
{"f_6774:posixunix_2escm",(void*)f_6774},
{"f_6261:posixunix_2escm",(void*)f_6261},
{"f_5522:posixunix_2escm",(void*)f_5522},
{"f_6784:posixunix_2escm",(void*)f_6784},
{"f_8483:posixunix_2escm",(void*)f_8483},
{"f_8489:posixunix_2escm",(void*)f_8489},
{"f_7827:posixunix_2escm",(void*)f_7827},
{"f_7044:posixunix_2escm",(void*)f_7044},
{"f_8492:posixunix_2escm",(void*)f_8492},
{"f_4636:posixunix_2escm",(void*)f_4636},
{"f_4925:posixunix_2escm",(void*)f_4925},
{"f_8399:posixunix_2escm",(void*)f_8399},
{"f_8464:posixunix_2escm",(void*)f_8464},
{"f_4548:posixunix_2escm",(void*)f_4548},
{"f_4544:posixunix_2escm",(void*)f_4544},
{"f_4626:posixunix_2escm",(void*)f_4626},
{"f_3995:posixunix_2escm",(void*)f_3995},
{"f_3991:posixunix_2escm",(void*)f_3991},
{"f_4629:posixunix_2escm",(void*)f_4629},
{"f_4532:posixunix_2escm",(void*)f_4532},
{"f_4525:posixunix_2escm",(void*)f_4525},
{"f_4512:posixunix_2escm",(void*)f_4512},
{"f_4519:posixunix_2escm",(void*)f_4519},
{"f_3987:posixunix_2escm",(void*)f_3987},
{"f_6700:posixunix_2escm",(void*)f_6700},
{"f_5891:posixunix_2escm",(void*)f_5891},
{"f_4951:posixunix_2escm",(void*)f_4951},
{"f_5882:posixunix_2escm",(void*)f_5882},
{"f_5889:posixunix_2escm",(void*)f_5889},
{"f_6704:posixunix_2escm",(void*)f_6704},
{"f_6706:posixunix_2escm",(void*)f_6706},
{"f_4944:posixunix_2escm",(void*)f_4944},
{"f_8661:posixunix_2escm",(void*)f_8661},
{"f_8663:posixunix_2escm",(void*)f_8663},
{"f_8407:posixunix_2escm",(void*)f_8407},
{"f_6712:posixunix_2escm",(void*)f_6712},
{"f_4932:posixunix_2escm",(void*)f_4932},
{"f_4935:posixunix_2escm",(void*)f_4935},
{"f_8673:posixunix_2escm",(void*)f_8673},
{"f_4554:posixunix_2escm",(void*)f_4554},
{"f_4551:posixunix_2escm",(void*)f_4551},
{"f_6722:posixunix_2escm",(void*)f_6722},
{"f_6734:posixunix_2escm",(void*)f_6734},
{"f_3918:posixunix_2escm",(void*)f_3918},
{"f_4094:posixunix_2escm",(void*)f_4094},
{"f_8657:posixunix_2escm",(void*)f_8657},
{"f_8473:posixunix_2escm",(void*)f_8473},
{"f_8470:posixunix_2escm",(void*)f_8470},
{"f_3922:posixunix_2escm",(void*)f_3922},
{"f_6742:posixunix_2escm",(void*)f_6742},
{"f_4086:posixunix_2escm",(void*)f_4086},
{"f_8624:posixunix_2escm",(void*)f_8624},
{"f_8627:posixunix_2escm",(void*)f_8627},
{"f_8620:posixunix_2escm",(void*)f_8620},
{"f_7600:posixunix_2escm",(void*)f_7600},
{"f_7457:posixunix_2escm",(void*)f_7457},
{"f_5872:posixunix_2escm",(void*)f_5872},
{"f_5876:posixunix_2escm",(void*)f_5876},
{"f_6757:posixunix_2escm",(void*)f_6757},
{"f_6756:posixunix_2escm",(void*)f_6756},
{"f_3591:posixunix_2escm",(void*)f_3591},
{"f_3595:posixunix_2escm",(void*)f_3595},
{"f_8636:posixunix_2escm",(void*)f_8636},
{"f_5860:posixunix_2escm",(void*)f_5860},
{"f_5866:posixunix_2escm",(void*)f_5866},
{"f_3901:posixunix_2escm",(void*)f_3901},
{"f_3560:posixunix_2escm",(void*)f_3560},
{"f_3562:posixunix_2escm",(void*)f_3562},
{"f_8683:posixunix_2escm",(void*)f_8683},
{"f_3953:posixunix_2escm",(void*)f_3953},
{"f_3959:posixunix_2escm",(void*)f_3959},
{"f_3579:posixunix_2escm",(void*)f_3579},
{"f_8614:posixunix_2escm",(void*)f_8614},
{"f_5808:posixunix_2escm",(void*)f_5808},
{"f_5806:posixunix_2escm",(void*)f_5806},
{"f_5832:posixunix_2escm",(void*)f_5832},
{"f_5834:posixunix_2escm",(void*)f_5834},
{"f_3949:posixunix_2escm",(void*)f_3949},
{"toplevel:posixunix_2escm",(void*)C_posix_toplevel},
{"f_5785:posixunix_2escm",(void*)f_5785},
{"f_3583:posixunix_2escm",(void*)f_3583},
{"f_2996:posixunix_2escm",(void*)f_2996},
{"f_2988:posixunix_2escm",(void*)f_2988},
{"f_2983:posixunix_2escm",(void*)f_2983},
{"f_8240:posixunix_2escm",(void*)f_8240},
{"f_8249:posixunix_2escm",(void*)f_8249},
{"f_3553:posixunix_2escm",(void*)f_3553},
{"f_8220:posixunix_2escm",(void*)f_8220},
{"f_2717:posixunix_2escm",(void*)f_2717},
{"f_3528:posixunix_2escm",(void*)f_3528},
{"f_3522:posixunix_2escm",(void*)f_3522},
{"f_8235:posixunix_2escm",(void*)f_8235},
{"f_8233:posixunix_2escm",(void*)f_8233},
{"f_2710:posixunix_2escm",(void*)f_2710},
{"f_5854:posixunix_2escm",(void*)f_5854},
{"f_5852:posixunix_2escm",(void*)f_5852},
{"f_8204:posixunix_2escm",(void*)f_8204},
{"f_8208:posixunix_2escm",(void*)f_8208},
{"f_8200:posixunix_2escm",(void*)f_8200},
{"f_5844:posixunix_2escm",(void*)f_5844},
{"f_5709:posixunix_2escm",(void*)f_5709},
{"f_8212:posixunix_2escm",(void*)f_8212},
{"f_8216:posixunix_2escm",(void*)f_8216},
{"f_5721:posixunix_2escm",(void*)f_5721},
{"f_2729:posixunix_2escm",(void*)f_2729},
{"f_5737:posixunix_2escm",(void*)f_5737},
{"f_2722:posixunix_2escm",(void*)f_2722},
{"f_4390:posixunix_2escm",(void*)f_4390},
{"f_2754:posixunix_2escm",(void*)f_2754},
{"f_2756:posixunix_2escm",(void*)f_2756},
{"f_2750:posixunix_2escm",(void*)f_2750},
{"f_4386:posixunix_2escm",(void*)f_4386},
{"f_7691:posixunix_2escm",(void*)f_7691},
{"f_3549:posixunix_2escm",(void*)f_3549},
{"f_3543:posixunix_2escm",(void*)f_3543},
{"f_7413:posixunix_2escm",(void*)f_7413},
{"f_7401:posixunix_2escm",(void*)f_7401},
{"f_7404:posixunix_2escm",(void*)f_7404},
{"f_7668:posixunix_2escm",(void*)f_7668},
{"f_7908:posixunix_2escm",(void*)f_7908},
{"f_6455:posixunix_2escm",(void*)f_6455},
{"f_7677:posixunix_2escm",(void*)f_7677},
{"f_8276:posixunix_2escm",(void*)f_8276},
{"f_8279:posixunix_2escm",(void*)f_8279},
{"f_7628:posixunix_2escm",(void*)f_7628},
{"f_7475:posixunix_2escm",(void*)f_7475},
{"f_5744:posixunix_2escm",(void*)f_5744},
{"f_7194:posixunix_2escm",(void*)f_7194},
{"f_7197:posixunix_2escm",(void*)f_7197},
{"f_2950:posixunix_2escm",(void*)f_2950},
{"f_7922:posixunix_2escm",(void*)f_7922},
{"f_7191:posixunix_2escm",(void*)f_7191},
{"f_7618:posixunix_2escm",(void*)f_7618},
{"f_7463:posixunix_2escm",(void*)f_7463},
{"f_7614:posixunix_2escm",(void*)f_7614},
{"f_2956:posixunix_2escm",(void*)f_2956},
{"f_4353:posixunix_2escm",(void*)f_4353},
{"f_2921:posixunix_2escm",(void*)f_2921},
{"f_2934:posixunix_2escm",(void*)f_2934},
{"f_2938:posixunix_2escm",(void*)f_2938},
{"f_2911:posixunix_2escm",(void*)f_2911},
{"f_8143:posixunix_2escm",(void*)f_8143},
{"f_8140:posixunix_2escm",(void*)f_8140},
{"f_6435:posixunix_2escm",(void*)f_6435},
{"f_2929:posixunix_2escm",(void*)f_2929},
{"f_2901:posixunix_2escm",(void*)f_2901},
{"f_7187:posixunix_2escm",(void*)f_7187},
{"f_8159:posixunix_2escm",(void*)f_8159},
{"f_8155:posixunix_2escm",(void*)f_8155},
{"f_2919:posixunix_2escm",(void*)f_2919},
{"f_2909:posixunix_2escm",(void*)f_2909},
{"f_8137:posixunix_2escm",(void*)f_8137},
{"f_8133:posixunix_2escm",(void*)f_8133},
{"f_8131:posixunix_2escm",(void*)f_8131},
{"f_7117:posixunix_2escm",(void*)f_7117},
{"f_7247:posixunix_2escm",(void*)f_7247},
{"f_8096:posixunix_2escm",(void*)f_8096},
{"f_3405:posixunix_2escm",(void*)f_3405},
{"f_3408:posixunix_2escm",(void*)f_3408},
{"f_3402:posixunix_2escm",(void*)f_3402},
{"f_8092:posixunix_2escm",(void*)f_8092},
{"f_3412:posixunix_2escm",(void*)f_3412},
{"f_6183:posixunix_2escm",(void*)f_6183},
{"f_6481:posixunix_2escm",(void*)f_6481},
{"f_2768:posixunix_2escm",(void*)f_2768},
{"f_6180:posixunix_2escm",(void*)f_6180},
{"f_2766:posixunix_2escm",(void*)f_2766},
{"f_2762:posixunix_2escm",(void*)f_2762},
{"f_2760:posixunix_2escm",(void*)f_2760},
{"f_3426:posixunix_2escm",(void*)f_3426},
{"f_6411:posixunix_2escm",(void*)f_6411},
{"f_2793:posixunix_2escm",(void*)f_2793},
{"f_6425:posixunix_2escm",(void*)f_6425},
{"f_8081:posixunix_2escm",(void*)f_8081},
{"f_8080:posixunix_2escm",(void*)f_8080},
{"f_6420:posixunix_2escm",(void*)f_6420},
{"f_3365:posixunix_2escm",(void*)f_3365},
{"f_2748:posixunix_2escm",(void*)f_2748},
{"f_2744:posixunix_2escm",(void*)f_2744},
{"f_8284:posixunix_2escm",(void*)f_8284},
{"f_2742:posixunix_2escm",(void*)f_2742},
{"f_7203:posixunix_2escm",(void*)f_7203},
{"f_8058:posixunix_2escm",(void*)f_8058},
{"f_3440:posixunix_2escm",(void*)f_3440},
{"f_7109:posixunix_2escm",(void*)f_7109},
{"f_2774:posixunix_2escm",(void*)f_2774},
{"f_8298:posixunix_2escm",(void*)f_8298},
{"f_2772:posixunix_2escm",(void*)f_2772},
{"f_8069:posixunix_2escm",(void*)f_8069},
{"f_3452:posixunix_2escm",(void*)f_3452},
{"f_8064:posixunix_2escm",(void*)f_8064},
{"f_3342:posixunix_2escm",(void*)f_3342},
{"f_3462:posixunix_2escm",(void*)f_3462},
{"f_7254:posixunix_2escm",(void*)f_7254},
{"f_3327:posixunix_2escm",(void*)f_3327},
{"f_3320:posixunix_2escm",(void*)f_3320},
{"f_8012:posixunix_2escm",(void*)f_8012},
{"f_8014:posixunix_2escm",(void*)f_8014},
{"f_3336:posixunix_2escm",(void*)f_3336},
{"f_3334:posixunix_2escm",(void*)f_3334},
{"f_6407:posixunix_2escm",(void*)f_6407},
{"f_8029:posixunix_2escm",(void*)f_8029},
{"f_3301:posixunix_2escm",(void*)f_3301},
{"f_3304:posixunix_2escm",(void*)f_3304},
{"f_6118:posixunix_2escm",(void*)f_6118},
{"f_6117:posixunix_2escm",(void*)f_6117},
{"f_6111:posixunix_2escm",(void*)f_6111},
{"f_8008:posixunix_2escm",(void*)f_8008},
{"f_6122:posixunix_2escm",(void*)f_6122},
{"f_6002:posixunix_2escm",(void*)f_6002},
{"f_6008:posixunix_2escm",(void*)f_6008},
{"f_7952:posixunix_2escm",(void*)f_7952},
{"f_7958:posixunix_2escm",(void*)f_7958},
{"f_7984:posixunix_2escm",(void*)f_7984},
{"f_6147:posixunix_2escm",(void*)f_6147},
{"f_7988:posixunix_2escm",(void*)f_7988},
{"f_6155:posixunix_2escm",(void*)f_6155},
{"f_6042:posixunix_2escm",(void*)f_6042},
{"f_6046:posixunix_2escm",(void*)f_6046},
{"f_6161:posixunix_2escm",(void*)f_6161},
{"f_7918:posixunix_2escm",(void*)f_7918},
{"f_7911:posixunix_2escm",(void*)f_7911},
{"f_6061:posixunix_2escm",(void*)f_6061},
{"f_3383:posixunix_2escm",(void*)f_3383},
{"f_7947:posixunix_2escm",(void*)f_7947},
{"f_3387:posixunix_2escm",(void*)f_3387},
{"f_7943:posixunix_2escm",(void*)f_7943},
{"f_7965:posixunix_2escm",(void*)f_7965},
{"f_7962:posixunix_2escm",(void*)f_7962},
{"f_4167:posixunix_2escm",(void*)f_4167},
{"f_5054:posixunix_2escm",(void*)f_5054},
{"f_2889:posixunix_2escm",(void*)f_2889},
{"f_2881:posixunix_2escm",(void*)f_2881},
{"f_5926:posixunix_2escm",(void*)f_5926},
{"f_5920:posixunix_2escm",(void*)f_5920},
{"f_5921:posixunix_2escm",(void*)f_5921},
{"f_5047:posixunix_2escm",(void*)f_5047},
{"f_2879:posixunix_2escm",(void*)f_2879},
{"f_2871:posixunix_2escm",(void*)f_2871},
{"f_5916:posixunix_2escm",(void*)f_5916},
{"f_5912:posixunix_2escm",(void*)f_5912},
{"f_5073:posixunix_2escm",(void*)f_5073},
{"f_4197:posixunix_2escm",(void*)f_4197},
{"f_5940:posixunix_2escm",(void*)f_5940},
{"f_5064:posixunix_2escm",(void*)f_5064},
{"f_2899:posixunix_2escm",(void*)f_2899},
{"f_2891:posixunix_2escm",(void*)f_2891},
{"f_5014:posixunix_2escm",(void*)f_5014},
{"f_5969:posixunix_2escm",(void*)f_5969},
{"f_6685:posixunix_2escm",(void*)f_6685},
{"f_7216:posixunix_2escm",(void*)f_7216},
{"f_7744:posixunix_2escm",(void*)f_7744},
{"f_7534:posixunix_2escm",(void*)f_7534},
{"f_5961:posixunix_2escm",(void*)f_5961},
{"f_7530:posixunix_2escm",(void*)f_7530},
{"f_5007:posixunix_2escm",(void*)f_5007},
{"f_6695:posixunix_2escm",(void*)f_6695},
{"f_7280:posixunix_2escm",(void*)f_7280},
{"f_7289:posixunix_2escm",(void*)f_7289},
{"f_5955:posixunix_2escm",(void*)f_5955},
{"f_5033:posixunix_2escm",(void*)f_5033},
{"f_7559:posixunix_2escm",(void*)f_7559},
{"f_7555:posixunix_2escm",(void*)f_7555},
{"f_5024:posixunix_2escm",(void*)f_5024},
{"f_4149:posixunix_2escm",(void*)f_4149},
{"f_4141:posixunix_2escm",(void*)f_4141},
{"f_4137:posixunix_2escm",(void*)f_4137},
{"f_4131:posixunix_2escm",(void*)f_4131},
{"f_7700:posixunix_2escm",(void*)f_7700},
{"f_5999:posixunix_2escm",(void*)f_5999},
{"f_5996:posixunix_2escm",(void*)f_5996},
{"f_3266:posixunix_2escm",(void*)f_3266},
{"f_3276:posixunix_2escm",(void*)f_3276},
{"f_4119:posixunix_2escm",(void*)f_4119},
{"f_4111:posixunix_2escm",(void*)f_4111},
{"f_3292:posixunix_2escm",(void*)f_3292},
{"f_4179:posixunix_2escm",(void*)f_4179},
{"f_3294:posixunix_2escm",(void*)f_3294},
{"f_6606:posixunix_2escm",(void*)f_6606},
{"f_4175:posixunix_2escm",(void*)f_4175},
{"f_2869:posixunix_2escm",(void*)f_2869},
{"f_2861:posixunix_2escm",(void*)f_2861},
{"f_6635:posixunix_2escm",(void*)f_6635},
{"f_8527:posixunix_2escm",(void*)f_8527},
{"f_3244:posixunix_2escm",(void*)f_3244},
{"f_8521:posixunix_2escm",(void*)f_8521},
{"f_8530:posixunix_2escm",(void*)f_8530},
{"f_5455:posixunix_2escm",(void*)f_5455},
{"f_6654:posixunix_2escm",(void*)f_6654},
{"f_4450:posixunix_2escm",(void*)f_4450},
{"f_4109:posixunix_2escm",(void*)f_4109},
{"f_5475:posixunix_2escm",(void*)f_5475},
{"f_4105:posixunix_2escm",(void*)f_4105},
{"f_5471:posixunix_2escm",(void*)f_5471},
{"f_3282:posixunix_2escm",(void*)f_3282},
{"f_5477:posixunix_2escm",(void*)f_5477},
{"f_3156:posixunix_2escm",(void*)f_3156},
{"f_4444:posixunix_2escm",(void*)f_4444},
{"f_4447:posixunix_2escm",(void*)f_4447},
{"f_7581:posixunix_2escm",(void*)f_7581},
{"f_3159:posixunix_2escm",(void*)f_3159},
{"f_5463:posixunix_2escm",(void*)f_5463},
{"f_3217:posixunix_2escm",(void*)f_3217},
{"f_4475:posixunix_2escm",(void*)f_4475},
{"f_3229:posixunix_2escm",(void*)f_3229},
{"f_8546:posixunix_2escm",(void*)f_8546},
{"f_5416:posixunix_2escm",(void*)f_5416},
{"f_3223:posixunix_2escm",(void*)f_3223},
{"f_8540:posixunix_2escm",(void*)f_8540},
{"f_5223:posixunix_2escm",(void*)f_5223},
{"f_4786:posixunix_2escm",(void*)f_4786},
{"f_5485:posixunix_2escm",(void*)f_5485},
{"f_5987:posixunix_2escm",(void*)f_5987},
{"f_6629:posixunix_2escm",(void*)f_6629},
{"f_6628:posixunix_2escm",(void*)f_6628},
{"f_5489:posixunix_2escm",(void*)f_5489},
{"f_3234:posixunix_2escm",(void*)f_3234},
{"f_8552:posixunix_2escm",(void*)f_8552},
{"f_4418:posixunix_2escm",(void*)f_4418},
{"f_5214:posixunix_2escm",(void*)f_5214},
{"f_5981:posixunix_2escm",(void*)f_5981},
{"f_5219:posixunix_2escm",(void*)f_5219},
{"f_5433:posixunix_2escm",(void*)f_5433},
{"f_5437:posixunix_2escm",(void*)f_5437},
{"f_4406:posixunix_2escm",(void*)f_4406},
{"f_4403:posixunix_2escm",(void*)f_4403},
{"f_5971:posixunix_2escm",(void*)f_5971},
{"f_5429:posixunix_2escm",(void*)f_5429},
{"f_4434:posixunix_2escm",(void*)f_4434},
{"f_4250:posixunix_2escm",(void*)f_4250},
{"f_4797:posixunix_2escm",(void*)f_4797},
{"f_4799:posixunix_2escm",(void*)f_4799},
{"f_2649:posixunix_2escm",(void*)f_2649},
{"f_2643:posixunix_2escm",(void*)f_2643},
{"f_2646:posixunix_2escm",(void*)f_2646},
{"f_2640:posixunix_2escm",(void*)f_2640},
{"f_4289:posixunix_2escm",(void*)f_4289},
{"f_5266:posixunix_2escm",(void*)f_5266},
{"f_5441:posixunix_2escm",(void*)f_5441},
{"f_5445:posixunix_2escm",(void*)f_5445},
{"f_7510:posixunix_2escm",(void*)f_7510},
{"f_3207:posixunix_2escm",(void*)f_3207},
{"f_3206:posixunix_2escm",(void*)f_3206},
{"f_7754:posixunix_2escm",(void*)f_7754},
{"f_7506:posixunix_2escm",(void*)f_7506},
{"f_7757:posixunix_2escm",(void*)f_7757},
{"f_5095:posixunix_2escm",(void*)f_5095},
{"f_6877:posixunix_2escm",(void*)f_6877},
{"f_4296:posixunix_2escm",(void*)f_4296},
{"f_5088:posixunix_2escm",(void*)f_5088},
{"f_5080:posixunix_2escm",(void*)f_5080},
{"f_5403:posixunix_2escm",(void*)f_5403},
{"f_5409:posixunix_2escm",(void*)f_5409},
{"f_5407:posixunix_2escm",(void*)f_5407},
{"f_7760:posixunix_2escm",(void*)f_7760},
{"f_4491:posixunix_2escm",(void*)f_4491},
{"f_3143:posixunix_2escm",(void*)f_3143},
{"f_5290:posixunix_2escm",(void*)f_5290},
{"f_6891:posixunix_2escm",(void*)f_6891},
{"f_3116:posixunix_2escm",(void*)f_3116},
{"f_4482:posixunix_2escm",(void*)f_4482},
{"f_3110:posixunix_2escm",(void*)f_3110},
{"f_6867:posixunix_2escm",(void*)f_6867},
{"f_7714:posixunix_2escm",(void*)f_7714},
{"f_4485:posixunix_2escm",(void*)f_4485},
{"f_3897:posixunix_2escm",(void*)f_3897},
{"f_3126:posixunix_2escm",(void*)f_3126},
{"f_7786:posixunix_2escm",(void*)f_7786},
{"f_3123:posixunix_2escm",(void*)f_3123},
{"f_7571:posixunix_2escm",(void*)f_7571},
{"f_3863:posixunix_2escm",(void*)f_3863},
{"f_7574:posixunix_2escm",(void*)f_7574},
{"f_3861:posixunix_2escm",(void*)f_3861},
{"f_3869:posixunix_2escm",(void*)f_3869},
{"f_8580:posixunix_2escm",(void*)f_8580},
{"f_8589:posixunix_2escm",(void*)f_8589},
{"f_7739:posixunix_2escm",(void*)f_7739},
{"f_7736:posixunix_2escm",(void*)f_7736},
{"f_6884:posixunix_2escm",(void*)f_6884},
{"f_3177:posixunix_2escm",(void*)f_3177},
{"f_7567:posixunix_2escm",(void*)f_7567},
{"f_3183:posixunix_2escm",(void*)f_3183},
{"f_3187:posixunix_2escm",(void*)f_3187},
{"f_4725:posixunix_2escm",(void*)f_4725},
{"f_4220:posixunix_2escm",(void*)f_4220},
{"f_4212:posixunix_2escm",(void*)f_4212},
{"f_4214:posixunix_2escm",(void*)f_4214},
{"f_4754:posixunix_2escm",(void*)f_4754},
{"f_6341:posixunix_2escm",(void*)f_6341},
{"f_4244:posixunix_2escm",(void*)f_4244},
{"f_6339:posixunix_2escm",(void*)f_6339},
{"f_3871:posixunix_2escm",(void*)f_3871},
{"f_8035:posixunix_2escm",(void*)f_8035},
{"f_3876:posixunix_2escm",(void*)f_3876},
{"f_3878:posixunix_2escm",(void*)f_3878},
{"f_8049:posixunix_2escm",(void*)f_8049},
{"f_3819:posixunix_2escm",(void*)f_3819},
{"f_3811:posixunix_2escm",(void*)f_3811},
{"f_7355:posixunix_2escm",(void*)f_7355},
{"f_4058:posixunix_2escm",(void*)f_4058},
{"f_8502:posixunix_2escm",(void*)f_8502},
{"f_8508:posixunix_2escm",(void*)f_8508},
{"f_7349:posixunix_2escm",(void*)f_7349},
{"f_7345:posixunix_2escm",(void*)f_7345},
{"f_7341:posixunix_2escm",(void*)f_7341},
{"f_4048:posixunix_2escm",(void*)f_4048},
{"f_8511:posixunix_2escm",(void*)f_8511},
{"f_6389:posixunix_2escm",(void*)f_6389},
{"f_6320:posixunix_2escm",(void*)f_6320},
{"f_3802:posixunix_2escm",(void*)f_3802},
{"f_3803:posixunix_2escm",(void*)f_3803},
{"f_2668:posixunix_2escm",(void*)f_2668},
{"f_2664:posixunix_2escm",(void*)f_2664},
{"f_6316:posixunix_2escm",(void*)f_6316},
{"f_3855:posixunix_2escm",(void*)f_3855},
{"f_3858:posixunix_2escm",(void*)f_3858},
{"f_3852:posixunix_2escm",(void*)f_3852},
{"f_6331:posixunix_2escm",(void*)f_6331},
{"f_4062:posixunix_2escm",(void*)f_4062},
{"f_4065:posixunix_2escm",(void*)f_4065},
{"f_2652:posixunix_2escm",(void*)f_2652},
{"f_3829:posixunix_2escm",(void*)f_3829},
{"f_3825:posixunix_2escm",(void*)f_3825},
{"f_2682:posixunix_2escm",(void*)f_2682},
{"f_2686:posixunix_2escm",(void*)f_2686},
{"f_7304:posixunix_2escm",(void*)f_7304},
{"f_4001:posixunix_2escm",(void*)f_4001},
{"f_2679:posixunix_2escm",(void*)f_2679},
{"f_2675:posixunix_2escm",(void*)f_2675},
{"f_7333:posixunix_2escm",(void*)f_7333},
{"f_3849:posixunix_2escm",(void*)f_3849},
{"f_3841:posixunix_2escm",(void*)f_3841},
{"f_3844:posixunix_2escm",(void*)f_3844},
{"f_4032:posixunix_2escm",(void*)f_4032},
{"f_4039:posixunix_2escm",(void*)f_4039},
{"f_7325:posixunix_2escm",(void*)f_7325},
{"f_7321:posixunix_2escm",(void*)f_7321},
{"f_5127:posixunix_2escm",(void*)f_5127},
{"f_5122:posixunix_2escm",(void*)f_5122},
{"f_5118:posixunix_2escm",(void*)f_5118},
{"f_5112:posixunix_2escm",(void*)f_5112},
{"f_5146:posixunix_2escm",(void*)f_5146},
{"f_3838:posixunix_2escm",(void*)f_3838},
{"f_3835:posixunix_2escm",(void*)f_3835},
{"f_3832:posixunix_2escm",(void*)f_3832},
{"f_5142:posixunix_2escm",(void*)f_5142},
{"f_5136:posixunix_2escm",(void*)f_5136},
{"f_6304:posixunix_2escm",(void*)f_6304},
{"f_6081:posixunix_2escm",(void*)f_6081},
{"f_6083:posixunix_2escm",(void*)f_6083},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
S|applied compiler syntax:
S|  for-each		3
o|eliminated procedure checks: 275 
o|specializations:
o|  1 (zero? fixnum)
o|  2 (##sys#check-list (or pair list) *)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#length list)
o|  11 (cdr pair)
o|  1 (string-ref string fixnum)
o|  1 (string-length string)
o|  4 (make-string fixnum)
o|  3 (##sys#check-open-port * *)
o|  11 (eqv? * (not float))
o|  14 (car pair)
o|dropping redundant toplevel assignment: process 
o|dropping redundant toplevel assignment: process* 
o|safe globals: (file-stat ##sys#stat ##sys#posix-error posix-error) 
o|Removed `not' forms: 9 
o|contracted procedure: "(posix-common.scm:184) strerror64" 
o|inlining procedure: k2687 
o|inlining procedure: k2687 
o|inlining procedure: k2702 
o|inlining procedure: k2702 
o|inlining procedure: k2788 
o|inlining procedure: k2800 
o|inlining procedure: k2800 
o|inlining procedure: k2812 
o|inlining procedure: k2812 
o|inlining procedure: k2824 
o|inlining procedure: k2824 
o|inlining procedure: k2788 
o|inlining procedure: k2945 
o|inlining procedure: k2945 
o|inlining procedure: k2957 
o|inlining procedure: k2957 
o|inlining procedure: k2967 
o|inlining procedure: k2967 
o|inlining procedure: k2994 
o|contracted procedure: k3010 
o|inlining procedure: k3007 
o|inlining procedure: k3007 
o|substituted constant variable: a3020 
o|inlining procedure: k2994 
o|inlining procedure: k3027 
o|inlining procedure: k3027 
o|substituted constant variable: a3071 
o|inlining procedure: k3072 
o|inlining procedure: k3072 
o|contracted procedure: k3088 
o|inlining procedure: k3091 
o|inlining procedure: k3091 
o|inlining procedure: k3124 
o|inlining procedure: k3124 
o|inlining procedure: k3148 
o|inlining procedure: k3148 
o|substituted constant variable: a3169 
o|inlining procedure: k3188 
o|inlining procedure: k3188 
o|inlining procedure: k3209 
o|propagated global variable: r32108733 delete-file 
o|inlining procedure: k3209 
o|inlining procedure: k3201 
o|inlining procedure: k3236 
o|inlining procedure: k3236 
o|inlining procedure: k3201 
o|inlining procedure: k3274 
o|inlining procedure: k3274 
o|inlining procedure: k3296 
o|contracted procedure: "(posix-common.scm:461) g336337" 
o|inlining procedure: k3307 
o|inlining procedure: k3307 
o|inlining procedure: k3296 
o|inlining procedure: k3344 
o|inlining procedure: k3344 
o|contracted procedure: "(posix-common.scm:462) g354355" 
o|inlining procedure: k3352 
o|inlining procedure: k3352 
o|inlining procedure: k3413 
o|inlining procedure: k3413 
o|inlining procedure: k3428 
o|inlining procedure: k3428 
o|inlining procedure: k3469 
o|inlining procedure: k3469 
o|substituted constant variable: a3491 
o|substituted constant variable: a3493 
o|inlining procedure: k3530 
o|inlining procedure: k3530 
o|inlining procedure: k3564 
o|inlining procedure: k3564 
o|inlining procedure: k3617 
o|inlining procedure: k3617 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|contracted procedure: "(posix-common.scm:553) find-files" 
o|inlining procedure: k3650 
o|inlining procedure: k3650 
o|inlining procedure: k3668 
o|inlining procedure: k3668 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|inlining procedure: k3696 
o|inlining procedure: k3728 
o|inlining procedure: k3728 
o|inlining procedure: k3742 
o|inlining procedure: k3742 
o|inlining procedure: k3696 
o|inlining procedure: k3754 
o|inlining procedure: k3754 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3794 
o|inlining procedure: k3794 
o|contracted procedure: k3808 
o|inlining procedure: k3813 
o|inlining procedure: k3813 
o|inlining procedure: k3883 
o|inlining procedure: k3883 
o|inlining procedure: k3960 
o|inlining procedure: k3960 
o|contracted procedure: "(posix-common.scm:590) ctime550" 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|inlining procedure: k4040 
o|contracted procedure: "(posix-common.scm:613) strftime577" 
o|inlining procedure: k4026 
o|inlining procedure: k4026 
o|inlining procedure: k4040 
o|contracted procedure: "(posix-common.scm:615) asctime576" 
o|inlining procedure: k4013 
o|inlining procedure: k4013 
o|inlining procedure: k4142 
o|inlining procedure: k4151 
o|inlining procedure: k4151 
o|inlining procedure: k4142 
o|contracted procedure: "(posix-common.scm:639) get629" 
o|inlining procedure: k4252 
o|inlining procedure: k4252 
o|inlining procedure: k4367 
o|inlining procedure: k4367 
o|contracted procedure: "(posixunix.scm:497) fcntl768" 
o|inlining procedure: k4404 
o|inlining procedure: k4404 
o|inlining procedure: k4423 
o|inlining procedure: k4423 
o|inlining procedure: k4448 
o|inlining procedure: k4448 
o|inlining procedure: k4489 
o|inlining procedure: k4489 
o|inlining procedure: k4592 
o|inlining procedure: k4592 
o|inlining procedure: k4615 
o|inlining procedure: k4615 
o|inlining procedure: k4638 
o|inlining procedure: k4647 
o|inlining procedure: k4647 
o|inlining procedure: k4638 
o|inlining procedure: k4653 
o|inlining procedure: k4653 
o|inlining procedure: k4668 
o|inlining procedure: k4668 
o|contracted procedure: "(posixunix.scm:599) g940941" 
o|inlining procedure: k4687 
o|inlining procedure: k4687 
o|inlining procedure: k4727 
o|inlining procedure: k4727 
o|contracted procedure: "(posixunix.scm:591) g921922" 
o|inlining procedure: k4746 
o|inlining procedure: k4746 
o|contracted procedure: "(posixunix.scm:585) g895896" 
o|inlining procedure: k4801 
o|inlining procedure: k4801 
o|contracted procedure: "(posixunix.scm:579) g880881" 
o|inlining procedure: k4818 
o|inlining procedure: k4818 
o|inlining procedure: k4843 
o|inlining procedure: k4843 
o|contracted procedure: "(posixunix.scm:573) g862863" 
o|inlining procedure: k4860 
o|inlining procedure: k4860 
o|contracted procedure: k4890 
o|inlining procedure: k4893 
o|inlining procedure: k4893 
o|contracted procedure: k4905 
o|inlining procedure: k4908 
o|inlining procedure: k4908 
o|inlining procedure: k4933 
o|inlining procedure: k4933 
o|inlining procedure: k4949 
o|inlining procedure: k4949 
o|inlining procedure: k4962 
o|inlining procedure: k4962 
o|inlining procedure: k4980 
o|inlining procedure: k4980 
o|inlining procedure: k5005 
o|inlining procedure: k5005 
o|inlining procedure: "(posixunix.scm:650) badmode968" 
o|substituted constant variable: a5029 
o|substituted constant variable: a5031 
o|inlining procedure: k5045 
o|inlining procedure: k5045 
o|inlining procedure: "(posixunix.scm:661) badmode968" 
o|substituted constant variable: a5069 
o|substituted constant variable: a5071 
o|substituted constant variable: a5076 
o|substituted constant variable: a5077 
o|inlining procedure: k5078 
o|inlining procedure: k5078 
o|substituted constant variable: a5091 
o|substituted constant variable: a5092 
o|inlining procedure: k5093 
o|inlining procedure: k5093 
o|inlining procedure: k5221 
o|inlining procedure: k5221 
o|inlining procedure: k5279 
o|inlining procedure: k5279 
o|inlining procedure: k5292 
o|contracted procedure: "(posixunix.scm:792) g10951102" 
o|inlining procedure: k5292 
o|inlining procedure: k5328 
o|inlining procedure: k5328 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|inlining procedure: k5417 
o|inlining procedure: k5417 
o|inlining procedure: k5510 
o|inlining procedure: k5537 
o|inlining procedure: k5537 
o|contracted procedure: "(posixunix.scm:940) group-member" 
o|inlining procedure: k5510 
o|inlining procedure: k5599 
o|inlining procedure: k5599 
o|contracted procedure: "(posixunix.scm:963) _get-groups" 
o|inlining procedure: "(posixunix.scm:961) _ensure-groups" 
o|inlining procedure: k5657 
o|inlining procedure: k5657 
o|inlining procedure: "(posixunix.scm:972) _ensure-groups" 
o|inlining procedure: k5729 
o|inlining procedure: k5729 
o|contracted procedure: "(posixunix.scm:989) init1240" 
o|inlining procedure: k5793 
o|inlining procedure: k5793 
o|inlining procedure: k5819 
o|inlining procedure: k5819 
o|inlining procedure: k5842 
o|inlining procedure: k5842 
o|inlining procedure: k5874 
o|inlining procedure: k5874 
o|inlining procedure: k5899 
o|inlining procedure: k5899 
o|inlining procedure: k5927 
o|inlining procedure: k5927 
o|inlining procedure: k5948 
o|inlining procedure: k5973 
o|inlining procedure: k5973 
o|inlining procedure: k5994 
o|inlining procedure: k5994 
o|inlining procedure: k6024 
o|inlining procedure: k6024 
o|inlining procedure: k5948 
o|inlining procedure: k6069 
o|inlining procedure: k6069 
o|contracted procedure: "(posixunix.scm:1143) link1373" 
o|inlining procedure: k6044 
o|inlining procedure: k6044 
o|inlining procedure: k6123 
o|inlining procedure: k6123 
o|inlining procedure: k6149 
o|inlining procedure: k6149 
o|inlining procedure: k6163 
o|inlining procedure: k6187 
o|inlining procedure: k6187 
o|inlining procedure: k6163 
o|inlining procedure: k6208 
o|inlining procedure: k6208 
o|inlining procedure: k6228 
o|inlining procedure: k6228 
o|inlining procedure: k6265 
o|inlining procedure: k6265 
o|inlining procedure: k6287 
o|inlining procedure: k6287 
o|inlining procedure: k6296 
o|inlining procedure: k6296 
o|inlining procedure: k6318 
o|inlining procedure: k6318 
o|inlining procedure: k6343 
o|inlining procedure: k6343 
o|inlining procedure: k6390 
o|inlining procedure: k6390 
o|inlining procedure: k6412 
o|inlining procedure: k6412 
o|inlining procedure: k6440 
o|inlining procedure: k6440 
o|inlining procedure: k6483 
o|inlining procedure: k6483 
o|inlining procedure: k6532 
o|inlining procedure: k6532 
o|inlining procedure: k6637 
o|inlining procedure: k6658 
o|inlining procedure: k6658 
o|inlining procedure: k6637 
o|inlining procedure: k6714 
o|inlining procedure: k6714 
o|inlining procedure: k6744 
o|inlining procedure: k6744 
o|inlining procedure: k6759 
o|inlining procedure: k6776 
o|inlining procedure: k6776 
o|inlining procedure: k6759 
o|inlining procedure: k6872 
o|inlining procedure: k6872 
o|inlining procedure: k6882 
o|inlining procedure: k6882 
o|inlining procedure: k6990 
o|inlining procedure: k6990 
o|inlining procedure: k7006 
o|inlining procedure: k7006 
o|inlining procedure: k7022 
o|contracted procedure: "(posixunix.scm:1376) g16251626" 
o|contracted procedure: k7030 
o|inlining procedure: k7027 
o|inlining procedure: k7027 
o|inlining procedure: k7022 
o|inlining procedure: k7057 
o|inlining procedure: k7057 
o|inlining procedure: k7083 
o|inlining procedure: k7083 
o|inlining procedure: k7118 
o|inlining procedure: k7118 
o|inlining procedure: k7130 
o|inlining procedure: k7130 
o|substituted constant variable: a7143 
o|substituted constant variable: a7145 
o|substituted constant variable: a7147 
o|contracted procedure: "(posixunix.scm:1445) mmap1662" 
o|contracted procedure: k7227 
o|inlining procedure: k7255 
o|inlining procedure: k7255 
o|contracted procedure: "(posixunix.scm:1455) munmap1693" 
o|contracted procedure: "(posixunix.scm:1473) strptime1712" 
o|inlining procedure: k7298 
o|inlining procedure: k7298 
o|inlining procedure: k7350 
o|inlining procedure: k7350 
o|contracted procedure: "(posixunix.scm:1501) ex01752" 
o|inlining procedure: k7408 
o|inlining procedure: k7408 
o|inlining procedure: k7418 
o|inlining procedure: k7418 
o|inlining procedure: k7431 
o|inlining procedure: k7431 
o|substituted constant variable: a7447 
o|substituted constant variable: a7449 
o|substituted constant variable: a7451 
o|substituted constant variable: a7460 
o|contracted procedure: k7467 
o|inlining procedure: k7464 
o|inlining procedure: k7464 
o|inlining procedure: k7479 
o|inlining procedure: k7479 
o|contracted procedure: "(posixunix.scm:1541) ttyname1788" 
o|inlining procedure: k7535 
o|inlining procedure: k7535 
o|contracted procedure: "(posixunix.scm:1552) ttysize1797" 
o|inlining procedure: k7572 
o|inlining procedure: k7572 
o|contracted procedure: "(posixunix.scm:1565) getit1819" 
o|inlining procedure: k7601 
o|contracted procedure: "(posixunix.scm:1583) g18501851" 
o|inlining procedure: k7601 
o|contracted procedure: "(posixunix.scm:1576) fork1826" 
o|inlining procedure: k7746 
o|contracted procedure: "(posixunix.scm:1620) freeenv1862" 
o|contracted procedure: "(posixunix.scm:1619) freeargs1860" 
o|inlining procedure: k7788 
o|inlining procedure: k7788 
o|inlining procedure: k7746 
o|inlining procedure: k7876 
o|inlining procedure: k7876 
o|inlining procedure: k7895 
o|inlining procedure: k7895 
o|inlining procedure: k7929 
o|inlining procedure: k7929 
o|inlining procedure: k7948 
o|inlining procedure: k7948 
o|contracted procedure: k7969 
o|inlining procedure: k7966 
o|inlining procedure: k7966 
o|inlining procedure: k8019 
o|inlining procedure: k8037 
o|inlining procedure: k8037 
o|inlining procedure: k8019 
o|removed unused formal parameters: (loc1993) 
o|inlining procedure: k8051 
o|inlining procedure: k8051 
o|removed unused formal parameters: (loc1998 fd2001) 
o|inlining procedure: k8071 
o|inlining procedure: k8071 
o|inlining procedure: k8083 
o|contracted procedure: "(posixunix.scm:1721) replace-fd1973" 
o|inlining procedure: k8000 
o|inlining procedure: k8000 
o|inlining procedure: k8083 
o|inlining procedure: k8098 
o|inlining procedure: k8098 
o|removed unused parameter to known procedure: loc1993 "(posixunix.scm:1731) needed-pipe1979" 
o|removed unused parameter to known procedure: loc1993 "(posixunix.scm:1730) needed-pipe1979" 
o|removed unused parameter to known procedure: loc1993 "(posixunix.scm:1729) needed-pipe1979" 
o|removed unused formal parameters: (pid2033) 
o|inlining procedure: k8160 
o|inlining procedure: k8160 
o|removed unused parameter to known procedure: loc1998 "(posixunix.scm:1742) connect-parent1980" 
o|removed unused parameter to known procedure: fd2001 "(posixunix.scm:1742) connect-parent1980" 
o|removed unused formal parameters: (pid2041) 
o|inlining procedure: k8171 
o|inlining procedure: k8171 
o|removed unused parameter to known procedure: loc1998 "(posixunix.scm:1746) connect-parent1980" 
o|removed unused parameter to known procedure: fd2001 "(posixunix.scm:1746) connect-parent1980" 
o|removed unused parameter to known procedure: pid2033 "(posixunix.scm:1761) input-port2014" 
o|removed unused parameter to known procedure: pid2041 "(posixunix.scm:1758) output-port2015" 
o|removed unused parameter to known procedure: pid2033 "(posixunix.scm:1756) input-port2014" 
o|inlining procedure: k8251 
o|inlining procedure: k8251 
o|inlining procedure: k8412 
o|inlining procedure: k8412 
o|contracted procedure: "(posixunix.scm:1803) chroot2141" 
o|inlining procedure: k8397 
o|inlining procedure: k8397 
o|inlining procedure: k8435 
o|inlining procedure: k8435 
o|inlining procedure: k8456 
o|inlining procedure: k8456 
o|inlining procedure: k8475 
o|inlining procedure: k8475 
o|inlining procedure: k8494 
o|inlining procedure: k8494 
o|inlining procedure: k8513 
o|inlining procedure: k8513 
o|inlining procedure: k8532 
o|inlining procedure: k8532 
o|inlining procedure: k8554 
o|inlining procedure: k8554 
o|inlining procedure: k8569 
o|inlining procedure: k8569 
o|inlining procedure: k8601 
o|inlining procedure: k8601 
o|inlining procedure: k8625 
o|inlining procedure: k8625 
o|inlining procedure: k8637 
o|inlining procedure: k8637 
o|inlining procedure: k8647 
o|inlining procedure: k8647 
o|inlining procedure: k8684 
o|inlining procedure: k8684 
o|contracted procedure: "(posix-common.scm:255) g116117" 
o|inlining procedure: k8671 
o|inlining procedure: k8671 
o|replaced variables: 891 
o|removed binding forms: 565 
o|substituted constant variable: r26888694 
o|substituted constant variable: r28018698 
o|substituted constant variable: r28138700 
o|substituted constant variable: r28258702 
o|substituted constant variable: r27898704 
o|substituted constant variable: r29588708 
o|inlining procedure: k2994 
o|substituted constant variable: r30088714 
o|inlining procedure: k2994 
o|inlining procedure: k2994 
o|propagated global variable: g3033048734 delete-file 
o|inlining procedure: k3209 
o|inlining procedure: k3209 
o|propagated global variable: r32109212 delete-file 
o|propagated global variable: r32109212 delete-file 
o|converted assignments to bindings: (rmdir286) 
o|substituted constant variable: loc338 
o|substituted constant variable: loc338 
o|substituted constant variable: loc356 
o|substituted constant variable: loc356 
o|substituted constant variable: r34298761 
o|substituted constant variable: r35318765 
o|substituted constant variable: r36188771 
o|substituted constant variable: r36188771 
o|substituted constant variable: r36268775 
o|substituted constant variable: r36268775 
o|substituted constant variable: r37438790 
o|substituted constant variable: r37438790 
o|substituted constant variable: r37438792 
o|substituted constant variable: r37438792 
o|substituted constant variable: r37958801 
o|substituted constant variable: r37958801 
o|substituted constant variable: r37958803 
o|substituted constant variable: r37958803 
o|substituted constant variable: loc444 
o|substituted constant variable: r40278817 
o|substituted constant variable: r40278817 
o|substituted constant variable: r40148824 
o|substituted constant variable: r40148824 
o|substituted constant variable: r41438830 
o|substituted constant variable: r46168857 
o|substituted constant variable: r46168857 
o|substituted constant variable: r46168859 
o|substituted constant variable: r46168859 
o|inlining procedure: k4638 
o|inlining procedure: k4638 
o|substituted constant variable: r46488864 
o|inlining procedure: k4638 
o|substituted constant variable: r46398865 
o|substituted constant variable: r46398865 
o|substituted constant variable: r46888873 
o|substituted constant variable: r46888873 
o|substituted constant variable: r47478879 
o|substituted constant variable: r47478879 
o|substituted constant variable: r48198885 
o|substituted constant variable: r48198885 
o|substituted constant variable: r48618891 
o|substituted constant variable: r48618891 
o|substituted constant variable: r49638906 
o|removed side-effect free assignment to unused variable: badmode968 
o|inlining procedure: k5005 
o|inlining procedure: k5045 
o|substituted constant variable: r54188954 
o|substituted constant variable: r55388957 
o|substituted constant variable: r55118958 
o|removed side-effect free assignment to unused variable: _ensure-groups 
o|substituted constant variable: r56008959 
o|inlining procedure: k5994 
o|substituted constant variable: r60259002 
o|substituted constant variable: r60259002 
o|substituted constant variable: r60459009 
o|substituted constant variable: r60459009 
o|substituted constant variable: r61509013 
o|inlining procedure: k6220 
o|inlining procedure: k6220 
o|inlining procedure: k6302 
o|substituted constant variable: r64139045 
o|substituted constant variable: r65339057 
o|inlining procedure: k6720 
o|inlining procedure: k6882 
o|substituted constant variable: r70289082 
o|substituted constant variable: r71199089 
o|inlining procedure: k7201 
o|substituted constant variable: r72999097 
o|substituted constant variable: r72999097 
o|substituted constant variable: r74199105 
o|substituted constant variable: r74199105 
o|folded constant expression: (fx< (quote -1) (quote 0)) 
o|substituted constant variable: r74659109 
o|substituted constant variable: int18521855 
o|inlining procedure: k7895 
o|inlining procedure: k7895 
o|substituted constant variable: r79499134 
o|substituted constant variable: r80529142 
o|substituted constant variable: r80729144 
o|substituted constant variable: r80999150 
o|removed unused formal parameters: (stdfd2037) 
o|substituted constant variable: r81619152 
o|removed unused formal parameters: (stdfd2045) 
o|substituted constant variable: r81729154 
o|removed unused parameter to known procedure: stdfd2037 "(posixunix.scm:1761) input-port2014" 
o|removed unused parameter to known procedure: stdfd2045 "(posixunix.scm:1758) output-port2015" 
o|removed unused parameter to known procedure: stdfd2037 "(posixunix.scm:1756) input-port2014" 
o|substituted constant variable: r83989161 
o|substituted constant variable: r83989161 
o|converted assignments to bindings: (check1305) 
o|substituted constant variable: r86389192 
o|substituted constant variable: r86729199 
o|substituted constant variable: r86729199 
o|simplifications: ((let . 2)) 
o|replaced variables: 62 
o|removed binding forms: 932 
o|inlining procedure: k3472 
o|inlining procedure: k4203 
o|inlining procedure: k4203 
o|inlining procedure: k4460 
o|inlining procedure: k4460 
o|inlining procedure: k4505 
o|inlining procedure: k4505 
o|substituted constant variable: r46399250 
o|inlining procedure: k7217 
o|inlining procedure: k7217 
o|inlining procedure: k7773 
o|removed unused formal parameters: (loc2006) 
o|removed unused parameter to known procedure: loc2006 "(posixunix.scm:1738) connect-child1981" 
o|removed unused parameter to known procedure: loc2006 "(posixunix.scm:1737) connect-child1981" 
o|removed unused parameter to known procedure: loc2006 "(posixunix.scm:1736) connect-child1981" 
o|inlining procedure: k8363 
o|replaced variables: 27 
o|removed binding forms: 179 
o|substituted constant variable: r29959201 
o|substituted constant variable: r29959203 
o|substituted constant variable: r29959205 
o|substituted constant variable: r34739349 
o|substituted constant variable: r34739349 
o|substituted constant variable: r42049364 
o|substituted constant variable: r44619367 
o|substituted constant variable: r45069369 
o|substituted constant variable: r72189397 
o|contracted procedure: k7595 
o|contracted procedure: k7770 
o|removed unused formal parameters: (loc2019) 
o|removed unused parameter to known procedure: loc2019 "(posixunix.scm:1750) spawn2013" 
o|inlining procedure: k8598 
o|inlining procedure: k8598 
o|simplifications: ((let . 3)) 
o|replaced variables: 2 
o|removed binding forms: 30 
o|removed conditional forms: 4 
o|inlining procedure: k7379 
o|inlining procedure: k7379 
o|substituted constant variable: r85999461 
o|replaced variables: 1 
o|removed binding forms: 11 
o|substituted constant variable: r73809511 
o|removed binding forms: 3 
o|removed binding forms: 1 
o|simplifications: ((if . 89) (##core#call . 672)) 
o|  call simplifications:
o|    <
o|    bitwise-ior	2
o|    vector-ref	2
o|    make-vector
o|    ##sys#structure?
o|    ##sys#foreign-pointer-argument	4
o|    fxior	2
o|    ##sys#check-structure	3
o|    ##sys#make-structure	3
o|    ##sys#setislot	3
o|    fxmin	2
o|    eof-object?
o|    ##sys#foreign-string-argument	7
o|    length
o|    fx>=	8
o|    fx*
o|    *
o|    inexact->exact
o|    memq	2
o|    list	7
o|    values	20
o|    ##sys#fudge	2
o|    vector-set!	3
o|    char=?
o|    ##sys#foreign-block-argument	8
o|    ##sys#foreign-integer-argument	5
o|    fx-	12
o|    ##sys#check-number	8
o|    ##sys#check-vector
o|    procedure?
o|    member
o|    fx+	27
o|    string-ref
o|    fx>
o|    cons	12
o|    ##sys#size	17
o|    ##sys#call-with-values	13
o|    not	8
o|    ##sys#check-string	34
o|    ##sys#check-list	7
o|    fx=	30
o|    zero?
o|    ##sys#null-pointer?	4
o|    pair?	19
o|    ##sys#check-exact	37
o|    ##sys#slot	32
o|    eq?	40
o|    cdr	28
o|    ##sys#eqv?	13
o|    null?	73
o|    car	52
o|    vector	2
o|    fixnum?	15
o|    string?	2
o|    fx<	47
o|    ##sys#foreign-fixnum-argument	33
o|    apply	9
o|contracted procedure: k2661 
o|contracted procedure: k2690 
o|contracted procedure: k2699 
o|contracted procedure: k2705 
o|contracted procedure: k2733 
o|contracted procedure: k2724 
o|contracted procedure: k2854 
o|contracted procedure: k2776 
o|contracted procedure: k2848 
o|contracted procedure: k2779 
o|contracted procedure: k2842 
o|contracted procedure: k2782 
o|contracted procedure: k2836 
o|contracted procedure: k2785 
o|contracted procedure: k2797 
o|contracted procedure: k2803 
o|contracted procedure: k2809 
o|contracted procedure: k2815 
o|contracted procedure: k2821 
o|contracted procedure: k2827 
o|contracted procedure: k2833 
o|contracted procedure: k2939 
o|contracted procedure: k2942 
o|contracted procedure: k2964 
o|contracted procedure: k2960 
o|contracted procedure: k2970 
o|contracted procedure: k2976 
o|contracted procedure: k2997 
o|contracted procedure: k3004 
o|contracted procedure: k3030 
o|contracted procedure: k3042 
o|contracted procedure: k3056 
o|contracted procedure: k3112 
o|contracted procedure: k3075 
o|contracted procedure: k3104 
o|contracted procedure: k3094 
o|contracted procedure: k3118 
o|contracted procedure: k3127 
o|contracted procedure: k3133 
o|contracted procedure: k3136 
o|contracted procedure: k3139 
o|contracted procedure: k3170 
o|contracted procedure: k3145 
o|contracted procedure: k3259 
o|contracted procedure: k3179 
o|contracted procedure: k3191 
o|contracted procedure: k3198 
o|contracted procedure: k3224 
o|contracted procedure: k3239 
o|contracted procedure: k3249 
o|contracted procedure: k3253 
o|contracted procedure: k3376 
o|contracted procedure: k3268 
o|contracted procedure: k3271 
o|contracted procedure: k3373 
o|contracted procedure: k3277 
o|contracted procedure: k3310 
o|contracted procedure: k3355 
o|contracted procedure: k3506 
o|contracted procedure: k3388 
o|contracted procedure: k3500 
o|contracted procedure: k3391 
o|contracted procedure: k3494 
o|contracted procedure: k3394 
o|contracted procedure: k3397 
o|contracted procedure: k3416 
o|contracted procedure: k3431 
o|contracted procedure: k3435 
o|contracted procedure: k3441 
o|contracted procedure: k3487 
o|contracted procedure: k3444 
o|contracted procedure: k3463 
o|contracted procedure: k3466 
o|contracted procedure: k3481 
o|contracted procedure: k3472 
o|contracted procedure: k3512 
o|contracted procedure: k3533 
o|contracted procedure: k3536 
o|contracted procedure: k3567 
o|contracted procedure: k3574 
o|contracted procedure: k3597 
o|contracted procedure: k3613 
o|contracted procedure: k3631 
o|contracted procedure: k3653 
o|contracted procedure: k3656 
o|contracted procedure: k3659 
o|contracted procedure: k3671 
o|contracted procedure: k3680 
o|contracted procedure: k3706 
o|contracted procedure: k3797 
o|contracted procedure: k3816 
o|contracted procedure: k3880 
o|contracted procedure: k3893 
o|contracted procedure: k3886 
o|contracted procedure: k3902 
o|contracted procedure: k3908 
o|contracted procedure: k3923 
o|contracted procedure: k3929 
o|contracted procedure: k3954 
o|contracted procedure: k3971 
o|contracted procedure: k3967 
o|contracted procedure: k3946 
o|contracted procedure: k3977 
o|contracted procedure: k4087 
o|contracted procedure: k4034 
o|contracted procedure: k4043 
o|contracted procedure: k4026 
o|contracted procedure: k4077 
o|contracted procedure: k4073 
o|contracted procedure: k4013 
o|contracted procedure: k4096 
o|contracted procedure: k4099 
o|contracted procedure: k4113 
o|contracted procedure: k4154 
o|contracted procedure: k4161 
o|contracted procedure: k4169 
o|contracted procedure: k4181 
o|contracted procedure: k4185 
o|contracted procedure: k4192 
o|contracted procedure: k4128 
o|contracted procedure: k4199 
o|contracted procedure: k4282 
o|contracted procedure: k4222 
o|contracted procedure: k4276 
o|contracted procedure: k4225 
o|contracted procedure: k4270 
o|contracted procedure: k4228 
o|contracted procedure: k4264 
o|contracted procedure: k4231 
o|contracted procedure: k4234 
o|contracted procedure: k4237 
o|contracted procedure: k4255 
o|contracted procedure: k4292 
o|contracted procedure: k4299 
o|contracted procedure: k4376 
o|contracted procedure: k4355 
o|contracted procedure: k4358 
o|contracted procedure: k4361 
o|contracted procedure: k4370 
o|contracted procedure: k4342 
o|contracted procedure: k4346 
o|contracted procedure: k4350 
o|contracted procedure: k8576 
o|contracted procedure: k4383 
o|contracted procedure: k4391 
o|contracted procedure: k4394 
o|contracted procedure: k4397 
o|contracted procedure: k4407 
o|contracted procedure: k4413 
o|contracted procedure: k4420 
o|contracted procedure: k4426 
o|contracted procedure: k4436 
o|contracted procedure: k4439 
o|contracted procedure: k4454 
o|contracted procedure: k4466 
o|contracted procedure: k4477 
o|contracted procedure: k4486 
o|contracted procedure: k4492 
o|contracted procedure: k4498 
o|contracted procedure: k4514 
o|contracted procedure: k4520 
o|contracted procedure: k4534 
o|contracted procedure: k4537 
o|contracted procedure: k4557 
o|contracted procedure: k4563 
o|contracted procedure: k4595 
o|contracted procedure: k4604 
o|contracted procedure: k4621 
o|contracted procedure: k4611 
o|contracted procedure: k4618 
o|contracted procedure: k4644 
o|contracted procedure: k4650 
o|contracted procedure: k4656 
o|contracted procedure: k4662 
o|contracted procedure: k4671 
o|contracted procedure: k4700 
o|contracted procedure: k4710 
o|contracted procedure: k4704 
o|contracted procedure: k4717 
o|contracted procedure: k4721 
o|contracted procedure: k4683 
o|contracted procedure: k4687 
o|contracted procedure: k4730 
o|contracted procedure: k4759 
o|contracted procedure: k4769 
o|contracted procedure: k4763 
o|contracted procedure: k4776 
o|contracted procedure: k4780 
o|contracted procedure: k4742 
o|contracted procedure: k4746 
o|contracted procedure: k4575 
o|contracted procedure: k4579 
o|contracted procedure: k4583 
o|contracted procedure: k4791 
o|contracted procedure: k4804 
o|contracted procedure: k4831 
o|contracted procedure: k4837 
o|contracted procedure: k4810 
o|contracted procedure: k4814 
o|contracted procedure: k4818 
o|contracted procedure: k4846 
o|contracted procedure: k4873 
o|contracted procedure: k4879 
o|contracted procedure: k4852 
o|contracted procedure: k4856 
o|contracted procedure: k4860 
o|contracted procedure: k4886 
o|contracted procedure: k4896 
o|contracted procedure: k4902 
o|contracted procedure: k4911 
o|contracted procedure: k4917 
o|contracted procedure: k4920 
o|contracted procedure: k4927 
o|contracted procedure: k4936 
o|contracted procedure: k4946 
o|contracted procedure: k4952 
o|contracted procedure: k4965 
o|contracted procedure: k4983 
o|contracted procedure: k4995 
o|contracted procedure: k5008 
o|contracted procedure: k5018 
o|contracted procedure: k5035 
o|contracted procedure: k5048 
o|contracted procedure: k5058 
o|contracted procedure: k5081 
o|contracted procedure: k5096 
o|contracted procedure: k5227 
o|contracted procedure: k5262 
o|contracted procedure: k5268 
o|contracted procedure: k5282 
o|contracted procedure: k5295 
o|contracted procedure: k5305 
o|contracted procedure: k5309 
o|contracted procedure: k5273 
o|contracted procedure: k5319 
o|contracted procedure: k5325 
o|contracted procedure: k5331 
o|contracted procedure: k5341 
o|contracted procedure: k5347 
o|contracted procedure: k5383 
o|contracted procedure: k5456 
o|contracted procedure: k5411 
o|contracted procedure: k5420 
o|contracted procedure: k5446 
o|contracted procedure: k5449 
o|contracted procedure: k5561 
o|contracted procedure: k5504 
o|contracted procedure: k5513 
o|contracted procedure: k5548 
o|contracted procedure: k5498 
o|contracted procedure: k5551 
o|contracted procedure: k5554 
o|contracted procedure: k5602 
o|contracted procedure: k5614 
o|contracted procedure: k5617 
o|contracted procedure: k5571 
o|contracted procedure: k55788966 
o|contracted procedure: k5636 
o|contracted procedure: k5660 
o|contracted procedure: k5666 
o|contracted procedure: k5676 
o|contracted procedure: k5679 
o|contracted procedure: k5686 
o|contracted procedure: k5690 
o|contracted procedure: k5700 
o|contracted procedure: k55788974 
o|contracted procedure: k5723 
o|contracted procedure: k5726 
o|contracted procedure: k5732 
o|contracted procedure: k5711 
o|contracted procedure: k5718 
o|contracted procedure: k5787 
o|contracted procedure: k5790 
o|contracted procedure: k5796 
o|contracted procedure: k5810 
o|contracted procedure: k5813 
o|contracted procedure: k5816 
o|contracted procedure: k5822 
o|contracted procedure: k5836 
o|contracted procedure: k5839 
o|contracted procedure: k5877 
o|contracted procedure: k5893 
o|contracted procedure: k5896 
o|contracted procedure: k5902 
o|contracted procedure: k5930 
o|contracted procedure: k6030 
o|contracted procedure: k5942 
o|contracted procedure: k5945 
o|contracted procedure: k5976 
o|contracted procedure: k6016 
o|contracted procedure: k6020 
o|contracted procedure: k6063 
o|contracted procedure: k6066 
o|contracted procedure: k6072 
o|contracted procedure: k6051 
o|contracted procedure: k6058 
o|contracted procedure: k6599 
o|contracted procedure: k6085 
o|contracted procedure: k6593 
o|contracted procedure: k6088 
o|contracted procedure: k6587 
o|contracted procedure: k6091 
o|contracted procedure: k6581 
o|contracted procedure: k6094 
o|contracted procedure: k6575 
o|contracted procedure: k6097 
o|contracted procedure: k6569 
o|contracted procedure: k6100 
o|contracted procedure: k6563 
o|contracted procedure: k6103 
o|contracted procedure: k6557 
o|contracted procedure: k6106 
o|contracted procedure: k6548 
o|contracted procedure: k6112 
o|contracted procedure: k6126 
o|contracted procedure: k6132 
o|contracted procedure: k6135 
o|contracted procedure: k6152 
o|contracted procedure: k6166 
o|contracted procedure: k6172 
o|contracted procedure: k6175 
o|contracted procedure: k6190 
o|contracted procedure: k6205 
o|contracted procedure: k6225 
o|contracted procedure: k6231 
o|contracted procedure: k6234 
o|contracted procedure: k6268 
o|contracted procedure: k6272 
o|contracted procedure: k6275 
o|contracted procedure: k6284 
o|contracted procedure: k6299 
o|contracted procedure: k6308 
o|contracted procedure: k6324 
o|contracted procedure: k6346 
o|contracted procedure: k6352 
o|contracted procedure: k6355 
o|contracted procedure: k6384 
o|contracted procedure: k6358 
o|contracted procedure: k6362 
o|contracted procedure: k6366 
o|contracted procedure: k6373 
o|contracted procedure: k6377 
o|contracted procedure: k6381 
o|contracted procedure: k6393 
o|contracted procedure: k6403 
o|contracted procedure: k6415 
o|contracted procedure: k6477 
o|contracted procedure: k6431 
o|contracted procedure: k6437 
o|contracted procedure: k6443 
o|contracted procedure: k6450 
o|contracted procedure: k6459 
o|contracted procedure: k6470 
o|contracted procedure: k6466 
o|contracted procedure: k6498 
o|contracted procedure: k6494 
o|contracted procedure: k6487 
o|inlining procedure: k6483 
o|contracted procedure: k6509 
o|contracted procedure: k6513 
o|contracted procedure: k6505 
o|inlining procedure: k6483 
o|contracted procedure: k6520 
o|contracted procedure: k6523 
o|contracted procedure: k6535 
o|contracted procedure: k6542 
o|contracted procedure: k6860 
o|contracted procedure: k6608 
o|contracted procedure: k6854 
o|contracted procedure: k6611 
o|contracted procedure: k6848 
o|contracted procedure: k6614 
o|contracted procedure: k6842 
o|contracted procedure: k6617 
o|contracted procedure: k6836 
o|contracted procedure: k6620 
o|contracted procedure: k6830 
o|contracted procedure: k6623 
o|contracted procedure: k6640 
o|contracted procedure: k6646 
o|contracted procedure: k6649 
o|contracted procedure: k6661 
o|contracted procedure: k6676 
o|contracted procedure: k6687 
o|contracted procedure: k6821 
o|contracted procedure: k6690 
o|contracted procedure: k6717 
o|contracted procedure: k6726 
o|contracted procedure: k6739 
o|contracted procedure: k6751 
o|contracted procedure: k6766 
o|contracted procedure: k6770 
o|contracted procedure: k6779 
o|contracted procedure: k6792 
o|contracted procedure: k6799 
o|contracted procedure: k6803 
o|contracted procedure: k6809 
o|contracted procedure: k6815 
o|contracted procedure: k6869 
o|contracted procedure: k6885 
o|contracted procedure: k6895 
o|contracted procedure: k6960 
o|contracted procedure: k6904 
o|contracted procedure: k6954 
o|contracted procedure: k6907 
o|contracted procedure: k6948 
o|contracted procedure: k6910 
o|contracted procedure: k6942 
o|contracted procedure: k6913 
o|contracted procedure: k6919 
o|contracted procedure: k6932 
o|contracted procedure: k6926 
o|contracted procedure: k6935 
o|contracted procedure: k6973 
o|contracted procedure: k6977 
o|contracted procedure: k6981 
o|contracted procedure: k6993 
o|contracted procedure: k7009 
o|contracted procedure: k7034 
o|contracted procedure: k7046 
o|contracted procedure: k7050 
o|contracted procedure: k7054 
o|contracted procedure: k7068 
o|contracted procedure: k7060 
o|contracted procedure: k7074 
o|contracted procedure: k7080 
o|contracted procedure: k7086 
o|contracted procedure: k7097 
o|contracted procedure: k7105 
o|contracted procedure: k7111 
o|contracted procedure: k7121 
o|contracted procedure: k7127 
o|contracted procedure: k7133 
o|contracted procedure: k7207 
o|contracted procedure: k7161 
o|contracted procedure: k7165 
o|contracted procedure: k7169 
o|contracted procedure: k7173 
o|contracted procedure: k7177 
o|contracted procedure: k7181 
o|contracted procedure: k7223 
o|contracted procedure: k7249 
o|contracted procedure: k7258 
o|contracted procedure: k7269 
o|contracted procedure: k7237 
o|contracted procedure: k7241 
o|contracted procedure: k7272 
o|contracted procedure: k7282 
o|contracted procedure: k7334 
o|contracted procedure: k7306 
o|contracted procedure: k7309 
o|contracted procedure: k7312 
o|contracted procedure: k7327 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|substituted constant variable: g9716 
o|contracted procedure: k7298 
o|contracted procedure: k7382 
o|contracted procedure: k73709510 
o|contracted procedure: k73709515 
o|contracted procedure: k7390 
o|contracted procedure: k7405 
o|contracted procedure: k7425 
o|contracted procedure: k7421 
o|contracted procedure: k7428 
o|contracted procedure: k7434 
o|contracted procedure: k7440 
o|contracted procedure: k7452 
o|contracted procedure: k7471 
o|contracted procedure: k7492 
o|contracted procedure: k7488 
o|contracted procedure: k7482 
o|contracted procedure: k7503 
o|contracted procedure: k7538 
o|contracted procedure: k7519 
o|contracted procedure: k7523 
o|contracted procedure: k7527 
o|contracted procedure: k7661 
o|contracted procedure: k7583 
o|contracted procedure: k7655 
o|contracted procedure: k7586 
o|contracted procedure: k7649 
o|contracted procedure: k7589 
o|contracted procedure: k7643 
o|contracted procedure: k7592 
o|contracted procedure: k7604 
o|contracted procedure: k7607 
o|contracted procedure: k7622 
o|contracted procedure: k7637 
o|contracted procedure: k7671 
o|contracted procedure: k7679 
o|contracted procedure: k7686 
o|contracted procedure: k7694 
o|contracted procedure: k7702 
o|contracted procedure: k7709 
o|contracted procedure: k7863 
o|contracted procedure: k7716 
o|contracted procedure: k7857 
o|contracted procedure: k7719 
o|contracted procedure: k7851 
o|contracted procedure: k7722 
o|contracted procedure: k7845 
o|contracted procedure: k7725 
o|contracted procedure: k7728 
o|contracted procedure: k7731 
o|contracted procedure: k7749 
o|contracted procedure: k7761 
o|contracted procedure: k7767 
o|contracted procedure: k7779 
o|contracted procedure: k7791 
o|contracted procedure: k7797 
o|contracted procedure: k7800 
o|contracted procedure: k7812 
o|contracted procedure: k7816 
o|contracted procedure: k7819 
o|contracted procedure: k7822 
o|contracted procedure: k7834 
o|contracted procedure: k7838 
o|contracted procedure: k7842 
o|contracted procedure: k7873 
o|contracted procedure: k7901 
o|contracted procedure: k7879 
o|contracted procedure: k7914 
o|contracted procedure: k7923 
o|contracted procedure: k7926 
o|contracted procedure: k7932 
o|contracted procedure: k7938 
o|contracted procedure: k7990 
o|contracted procedure: k7993 
o|contracted procedure: k8016 
o|contracted procedure: k8043 
o|contracted procedure: k8022 
o|contracted procedure: k8074 
o|contracted procedure: k8086 
o|contracted procedure: k8003 
o|contracted procedure: k8105 
o|contracted procedure: k8222 
o|contracted procedure: k8226 
o|contracted procedure: k8230 
o|contracted procedure: k8191 
o|contracted procedure: k8237 
o|contracted procedure: k8254 
o|contracted procedure: k8264 
o|contracted procedure: k8268 
o|contracted procedure: k8271 
o|contracted procedure: k8345 
o|contracted procedure: k8306 
o|contracted procedure: k8339 
o|contracted procedure: k8309 
o|contracted procedure: k8333 
o|contracted procedure: k8312 
o|contracted procedure: k8327 
o|contracted procedure: k8315 
o|contracted procedure: k8387 
o|contracted procedure: k8354 
o|contracted procedure: k8381 
o|contracted procedure: k8357 
o|contracted procedure: k8375 
o|contracted procedure: k8360 
o|contracted procedure: k8369 
o|contracted procedure: k8363 
o|contracted procedure: k8409 
o|contracted procedure: k8415 
o|contracted procedure: k8404 
o|contracted procedure: k8426 
o|contracted procedure: k8432 
o|contracted procedure: k8438 
o|contracted procedure: k8450 
o|contracted procedure: k8453 
o|contracted procedure: k8459 
o|contracted procedure: k8478 
o|contracted procedure: k8497 
o|contracted procedure: k8516 
o|contracted procedure: k8535 
o|contracted procedure: k8557 
o|contracted procedure: k8560 
o|contracted procedure: k8569 
o|contracted procedure: k8582 
o|contracted procedure: k8607 
o|contracted procedure: k8591 
o|contracted procedure: k8594 
o|contracted procedure: k8616 
o|contracted procedure: k8628 
o|contracted procedure: k8644 
o|contracted procedure: k8640 
o|contracted procedure: k8650 
o|contracted procedure: k8665 
o|contracted procedure: k8687 
o|contracted procedure: k8678 
o|simplifications: ((if . 1) (let . 121)) 
o|removed binding forms: 584 
o|inlining procedure: k3899 
o|inlining procedure: k3920 
o|inlining procedure: "(posixunix.scm:643) mode967" 
o|inlining procedure: "(posixunix.scm:654) mode967" 
o|inlining procedure: k5707 
o|inlining procedure: k7675 
o|inlining procedure: k7698 
o|replaced variables: 315 
o|removed binding forms: 2 
o|inlining procedure: k4824 
o|inlining procedure: k4824 
o|inlining procedure: k4866 
o|inlining procedure: k4866 
o|removed side-effect free assignment to unused variable: mode967 
o|inlining procedure: k5298 
o|inlining procedure: k5630 
o|inlining procedure: k5693 
o|substituted constant variable: r57089824 
o|substituted constant variable: r57089824 
o|substituted constant variable: r76769837 
o|substituted constant variable: r76769837 
o|substituted constant variable: r76999840 
o|substituted constant variable: r76999840 
o|replaced variables: 10 
o|removed binding forms: 160 
o|contracted procedure: k4364 
o|contracted procedure: k4589 
o|contracted procedure: k5627 
o|contracted procedure: k7198 
o|contracted procedure: k7265 
o|contracted procedure: k7548 
o|converted assignments to bindings: (check969) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 25 
o|contracted procedure: k4998 
o|contracted procedure: k5038 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: doloop876877 0 
o|direct leaf routine/allocation: doloop858859 0 
o|direct leaf routine/allocation: for-each-loop10941106 0 
o|direct leaf routine/allocation: peek1417 0 
o|direct leaf routine/allocation: swapped-ends2016 3 
o|direct leaf routine/allocation: g20742081 0 
o|contracted procedure: k4566 
o|contracted procedure: k4569 
o|converted assignments to bindings: (doloop876877) 
o|converted assignments to bindings: (doloop858859) 
o|contracted procedure: k5276 
o|converted assignments to bindings: (for-each-loop10941106) 
o|contracted procedure: "(posixunix.scm:1204) k6262" 
o|contracted procedure: "(posixunix.scm:1733) k8125" 
o|contracted procedure: "(posixunix.scm:1738) k8148" 
o|contracted procedure: "(posixunix.scm:1737) k8152" 
o|contracted procedure: "(posixunix.scm:1774) k8257" 
o|simplifications: ((let . 3)) 
o|removed binding forms: 8 
o|direct leaf routine/allocation: for-each-loop20732091 0 
o|converted assignments to bindings: (for-each-loop20732091) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (loop1115 %process2062 chkstrlst2069 output-port2015 make-on-close1978 input-port2014 spawn2013 connect-parent1980 needed-pipe1979 connect-child1981 k7960 k7920 doloop19061907 setarg1859 doloop19101911 setenv1861 ##sys#terminal-check k7399 k7411 k7252 k7192 k7077 setup1588 err1589 k6922 k6875 loop1557 k6693 k6418 k6337 loop1463 ready?1416 fetch1418 loop1359 check1305 doloop12291230 loop1221 k5507 loop1202 k5414 check969 k4546 k4549 k4552 k4784 k4752 lp913 k4693 lp932 k4634 k4483 k4388 scan638 loop635 check-time-vector k3634 k3637 loop456 g428429 loop420 conc-loop401 k3450 loop380 k3299 loop333 g293300 for-each-loop292309 rmdir286 k3121 mode206 check207 k2936 ##sys#stat) 
o|calls to known targets: 282 
o|unused rest argument: _452 f_3819 
o|unused rest argument: _451 f_3811 
o|unused rest argument: _491 f_3871 
o|identified direct recursive calls: f_4149 1 
o|identified direct recursive calls: f_4841 2 
o|identified direct recursive calls: f_4799 2 
o|identified direct recursive calls: f_5290 1 
o|identified direct recursive calls: f_5597 1 
o|identified direct recursive calls: f_5655 1 
o|identified direct recursive calls: f_6341 1 
o|identified direct recursive calls: f_6774 1 
o|identified direct recursive calls: f_8249 1 
o|identified direct recursive calls: f_8552 2 
o|fast box initializations: 25 
o|fast global references: 67 
o|fast global assignments: 4 
o|dropping unused closure argument: f_6902 
o|dropping unused closure argument: f_6967 
o|dropping unused closure argument: f_3025 
o|dropping unused closure argument: f_4978 
o|dropping unused closure argument: f_5834 
o|dropping unused closure argument: f_2988 
o|dropping unused closure argument: f_8233 
o|dropping unused closure argument: f_7691 
o|dropping unused closure argument: f_7668 
o|dropping unused closure argument: f_7475 
o|dropping unused closure argument: f_8096 
o|dropping unused closure argument: f_8081 
o|dropping unused closure argument: f_8069 
o|dropping unused closure argument: f_8012 
o|dropping unused closure argument: f_5290 
o|dropping unused closure argument: f_3183 
o|dropping unused closure argument: f_3878 
o|dropping unused closure argument: f_8049 
o|dropping unused closure argument: f_2682 
*/
/* end of file */
