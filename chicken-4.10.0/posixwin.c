/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: posixwin.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file posixwin.c
   unit: posix
*/

#include "chicken.h"

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <process.h>
#include <signal.h>
#include <utime.h>
#include <winsock2.h>

#define ARG_MAX		256
#define PIPE_BUF	512
#ifndef ENV_MAX
# define ENV_MAX	1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct group *C_group;
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_hostname[256] = "";
static C_TLS char C_osver[16] = "";
static C_TLS char C_osrel[16] = "";
static C_TLS char C_processor[16] = "";
static C_TLS char C_shlcmd[256] = "";

/* Windows NT or better */
static int C_isNT = 0;

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

/* Directory Operations */

#define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)	    C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)	    C_fix(rmdir(C_c_string(str)))

#ifndef __WATCOMC__
/* DIRENT stuff */
struct dirent
{
    char *		d_name;
};

typedef struct
{
    struct _finddata_t	fdata;
    int			handle;
    struct dirent	current;
} DIR;

static DIR * C_fcall
opendir(const char *name)
{
    int name_len = strlen(name);
    int what_len = name_len + 3;
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
	errno = ENOMEM;
	return NULL;
    }
    what = (char *)malloc(what_len);
    if (!what)
    {
	free(dir);
	errno = ENOMEM;
	return NULL;
    }
    C_strlcpy(what, name, what_len);
    if (strchr("\\/", name[name_len - 1]))
	C_strlcat(what, "*", what_len);
    else
	C_strlcat(what, "\\*", what_len);

    dir->handle = _findfirst(what, &dir->fdata);
    if (dir->handle == -1)
    {
	free(what);
	free(dir);
	return NULL;
    }
    dir->current.d_name = NULL; /* as the first-time indicator */
    free(what);
    return dir;
}

static int C_fcall
closedir(DIR * dir)
{
    if (dir)
    {
	int res = _findclose(dir->handle);
	free(dir);
	return res;
    }
    return -1;
}

static struct dirent * C_fcall
readdir(DIR * dir)
{
    if (dir)
    {
	if (!dir->current.d_name /* first time after opendir */
	     || _findnext(dir->handle, &dir->fdata) != -1)
	{
	    dir->current.d_name = dir->fdata.name;
	    return &dir->current;
	}
    }
    return NULL;
}
#endif /* ifndef __WATCOMC__ */

#ifdef __WATCOMC__
/* there is no P_DETACH in Watcom CRTL */
# define P_DETACH P_NOWAIT
#endif

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)	    C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)	    C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_lstat(fn)	    C_stat(fn)

static void C_fcall
C_set_arg_string(char **where, int i, char *dat, int len)
{
    char *ptr;
    if (dat)
    {
	ptr = (char *)C_malloc(len + 1);
	C_memcpy(ptr, dat, len);
	ptr[ len ] = '\0';
        /* Can't barf() here, so the NUL byte check happens in Scheme */
    }
    else
	ptr = NULL;
    where[ i ] = ptr;
}

static void C_fcall
C_free_arg_string(char **where) {
  while (*where) C_free(*(where++));
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)

#define C_free_exec_args()		(C_free_arg_string(C_exec_args), C_SCHEME_TRUE)
#define C_free_exec_env()		(C_free_arg_string(C_exec_env), C_SCHEME_TRUE)

#define C_execvp(f)	    C_fix(execvp(C_data_pointer(f), (const char *const *)C_exec_args))
#define C_execve(f)	    C_fix(execve(C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

/* MS replacement for the fork-exec pair */
#define C_spawnvp(m, f)	    C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args))
#define C_spawnvpe(m, f)    C_fix(spawnvpe(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))

#define C_flushall()	    C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)	    (C_secs = (n), ctime(&C_secs))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map;
    for (map = errmap; map->win32; ++map)
    {
	if (map->win32 == w32err)
	{
	    errno = map->libc;
	    return;
	}
    }
    errno = ENOSYS; /* For lack of anything better */
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

static int C_fcall
process_wait(C_word h, C_word t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_fix(0))

static int C_fcall
get_hostname()
{
    /* Do we already have hostname? */
    if (strlen(C_hostname))
    {
	return 1;
    }
    else
    {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
	{
	    int nok = gethostname(C_hostname, sizeof(C_hostname));
	    WSACleanup();
	    return !nok;
	}
	return 0;
    }
}

static int C_fcall
sysinfo()
{
    /* Do we need to build the sysinfo? */
    if (!strlen(C_osrel))
    {
	OSVERSIONINFO ovf;
	ZeroMemory(&ovf, sizeof(ovf));
	ovf.dwOSVersionInfoSize = sizeof(ovf);
	if (get_hostname() && GetVersionEx(&ovf))
	{
	    SYSTEM_INFO si;
	    _snprintf(C_osver, sizeof(C_osver) - 1, "%d.%d.%d",
			ovf.dwMajorVersion, ovf.dwMinorVersion, ovf.dwBuildNumber);
	    strncpy(C_osrel, "Win", sizeof(C_osrel) - 1);
	    switch (ovf.dwPlatformId)
	    {
	    case VER_PLATFORM_WIN32s:
		strncpy(C_osrel, "Win32s", sizeof(C_osrel) - 1);
		break;
	    case VER_PLATFORM_WIN32_WINDOWS:
		if (ovf.dwMajorVersion == 4)
		{
		    if (ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win95", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 10)
			strncpy(C_osrel, "Win98", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 90)
			strncpy(C_osrel, "WinMe", sizeof(C_osrel) - 1);
		}
		break;
	    case VER_PLATFORM_WIN32_NT:
		C_isNT = 1;
		if (ovf.dwMajorVersion == 6)
		    strncpy(C_osrel, "WinVista", sizeof(C_osrel) - 1);
		else if (ovf.dwMajorVersion == 5)
		{
		    if (ovf.dwMinorVersion == 2)
			strncpy(C_osrel, "WinServer2003", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 1)
			strncpy(C_osrel, "WinXP", sizeof(C_osrel) - 1);
		    else if ( ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win2000", sizeof(C_osrel) - 1);
		}
		else if (ovf.dwMajorVersion <= 4)
		   strncpy(C_osrel, "WinNT", sizeof(C_osrel) - 1);
		break;
	    }
	    GetSystemInfo(&si);
	    strncpy(C_processor, "Unknown", sizeof(C_processor) - 1);
	    switch (si.wProcessorArchitecture)
	    {
	    case PROCESSOR_ARCHITECTURE_INTEL:
		strncpy(C_processor, "x86", sizeof(C_processor) - 1);
		break;
#	    ifdef PROCESSOR_ARCHITECTURE_IA64
	    case PROCESSOR_ARCHITECTURE_IA64:
		strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_AMD64
	    case PROCESSOR_ARCHITECTURE_AMD64:
		strncpy(C_processor, "x64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
	    case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
		strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
		break;
#	    endif
	    }
	}
	else
	    return set_last_errno();
    }
    return 1;
}

static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
	if (sysinfo()) /* for C_isNT */
	{
	    char *cmdnam = C_isNT ? "\\cmd.exe" : "\\command.com";
	    UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
	    if (len)
		C_strlcpy(C_shlcmd + len, cmdnam, sizeof(C_shlcmd));
	    else
		return set_last_errno();
	}
	else
	    return 0;
    }
    return 1;
}

#define C_get_hostname() (get_hostname() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int C_fcall
get_user_name()
{
    if (!strlen(C_username))
    {
	DWORD bufCharCount = sizeof(C_username) / sizeof(C_username[0]);
	if (!GetUserName(C_username, &bufCharCount))
	    return set_last_errno();
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/*
    Spawn a process directly.
    Params:
    app		Command to execute.
    cmdlin	Command line (arguments).
    env		Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
		Spawned process info are returned in integers.
		When spawned process shares standard io stream with the parent
		process the respective value in handle, stdin, stdout, stderr
		is -1.
    params	A bitmask controling operation.
		Bit 1: Child & parent share standard input if this bit is set.
		Bit 2: Share standard output if bit is set.
		Bit 3: Share standard error if bit is set.

    Returns: zero return value indicates failure.
*/
static int C_fcall
C_process(const char * app, const char * cmdlin, const char ** env,
	  C_word * phandle,
	  int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
	  int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
	child_io_handles[3] = { NULL, NULL, NULL },
	standard_io_handles[3] = {
	    GetStdHandle(STD_INPUT_HANDLE),
	    GetStdHandle(STD_OUTPUT_HANDLE),
	    GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((C_word)parent_end,0)) >= 0;
                /* Make new handle inheritable */
		if (success)
		  success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);
	    }
	}
    }

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
	char** p;
	int len = 0;

	for (p = env; *p; ++p) len += strlen(*p) + 1;

	if (envblk = C_malloc(len + 1))
	{
	    char* pb = (char*)envblk;
	    for (p = env; *p; ++p)
	    {
		C_strlcpy(pb, *p, len+1);
		pb += strlen(*p) + 1;
	    }
	    *pb = '\0';
            /* This _should_ already have been checked for embedded NUL bytes */
	}
	else
	    success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
	PROCESS_INFORMATION pi;
	STARTUPINFO si;

	ZeroMemory(&pi,sizeof pi);
	ZeroMemory(&si,sizeof si);
	si.cb = sizeof si;
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdInput = child_io_handles[0];
	si.hStdOutput = child_io_handles[1];
	si.hStdError = child_io_handles[2];

	/* FIXME passing 'app' param causes failure & possible stack corruption */
	success = CreateProcess(
	    NULL, (char*)cmdlin, NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

	if (success)
	{
	    child_process=pi.hProcess;
	    CloseHandle(pi.hThread);
	}
	else
	    set_last_errno();
    }
    else
	set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) {
	if (child_io_handles[i] != NULL)
	    CloseHandle(child_io_handles[i]);
    }

    if (success)
    {
	*phandle = (C_word)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) {
	    if (io_fds[i] != -1)
		_close(io_fds[i]);
	}
    }

    return success;
}

static int set_file_mtime(char *filename, C_word tm)
{
  struct _utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return _utime(filename, &tb);
}

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


#define PROT_NONE       0
#define PROT_READ       1
#define PROT_WRITE      2
#define PROT_EXEC       4
#define MAP_FILE        0
#define MAP_SHARED      1
#define MAP_PRIVATE     2
#define MAP_FIXED       0x10
#define MAP_ANONYMOUS   0x20

// This value is available starting with Windows XP with SP2 
// and Windows Server 2003 with SP1.
#ifndef FILE_MAP_EXECUTE
#define FILE_MAP_EXECUTE 0x20
#endif//FILE_MAP_EXECUTE

static int page_flags[] =
{
    0,
    PAGE_READONLY,
    PAGE_READWRITE,
    PAGE_READWRITE,
    PAGE_EXECUTE_READ,
    PAGE_EXECUTE_READ,
    PAGE_EXECUTE_READWRITE
};

static int file_flags[] =
{
    0,
    FILE_MAP_READ,
    FILE_MAP_READ|FILE_MAP_WRITE,
    FILE_MAP_READ|FILE_MAP_WRITE,
    FILE_MAP_READ|FILE_MAP_EXECUTE,
    FILE_MAP_READ|FILE_MAP_EXECUTE,
    FILE_MAP_READ|FILE_MAP_WRITE|FILE_MAP_EXECUTE
};

void* mmap(void* addr,int len,int prot,int flags,int fd,int off)
{
    HANDLE hMap;
    HANDLE hFile;

    void* ptr;

    if ((flags & MAP_FIXED) || (flags & MAP_PRIVATE) || (flags & MAP_ANONYMOUS))
    {
        errno = EINVAL;
        return (void*)-1;
    }

    /*
     * We must cast because _get_osfhandle returns intptr_t, but it must
     * be compared with INVALID_HANDLE_VALUE, which is a HANDLE type.
     * Who comes up with this shit?
     */
    hFile = (HANDLE)_get_osfhandle(fd);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return (void*)-1;
    }

    hMap = CreateFileMapping(
            hFile,
            NULL,
            page_flags[prot & (PROT_READ|PROT_WRITE|PROT_EXEC)],
            0,
            0,
            NULL);

    if (hMap == INVALID_HANDLE_VALUE)
    {
        set_last_errno();
        return (void*)-1;
    }

    ptr = MapViewOfFile(
            hMap,
            file_flags[prot & (PROT_READ|PROT_WRITE|PROT_EXEC)],
            0,
            off,
            len);

    if (ptr == NULL)
    {
        set_last_errno();
        ptr = (void*)-1;
    }

    CloseHandle(hMap);

    return ptr;
}

int munmap(void* addr,int len)
{
    if (UnmapViewOfFile(addr))
    {
        errno = 0;
        return 0;
    }
    set_last_errno();
    return -1;
}

int is_bad_mmap(void* p)
{
    void* bad_ptr;
    bad_ptr = (void*)-1;
    return p == bad_ptr;
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

static C_TLS C_word lf[407];
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
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,52,56,49,32,102,105,108,101,49,55,53,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,115,111,99,107,101,116,63,32,102,105,108,101,49,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,49,55,57,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,56,52,32,112,111,115,49,56,53,32,46,32,119,104,101,110,99,101,49,56,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,50,48,56,32,109,50,48,57,32,108,111,99,50,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,32,108,111,99,50,50,50,32,102,100,50,50,51,32,105,110,112,50,50,52,32,114,50,50,53,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,21),40,102,95,50,54,50,48,32,102,100,50,50,56,32,46,32,109,50,50,57,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,21),40,102,95,50,54,51,52,32,102,100,50,51,49,32,46,32,109,50,51,50,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,52,56,32,112,111,114,116,50,51,56,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,24),40,102,95,50,54,57,54,32,111,108,100,50,52,55,32,46,32,110,101,119,50,52,56,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,53,57,50,54,48,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,56,55,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,103,50,57,51,32,102,51,48,50,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,50,32,103,50,57,57,51,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,55,57,32,46,32,116,109,112,50,55,56,50,56,48,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,51,51,52,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,50,57,49,53,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,47),40,97,50,57,50,49,32,100,105,114,51,52,50,51,52,51,51,52,56,32,102,105,108,101,51,52,52,51,52,53,51,52,57,32,101,120,116,51,52,54,51,52,55,51,53,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,51,50,51,32,46,32,116,109,112,51,50,50,51,50,52,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,54,53,51,54,54,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,51,49,50,50,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,103,52,50,56,32,109,52,51,48,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,52,50,49,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,46),40,97,51,49,50,56,32,100,105,114,52,48,52,52,48,53,52,49,48,32,102,105,108,52,48,54,52,48,55,52,49,49,32,101,120,116,52,48,56,52,48,57,52,49,50,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,52,48,50,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,52,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,51,50,57,50,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,51,50,57,55,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,51,51,50,53,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,102,115,52,53,55,32,114,52,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,56,51,32,120,52,53,53,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,57,57,32,46,32,95,52,53,50,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,57,49,32,46,32,95,52,53,49,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,51,52,50,56,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,49,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,55,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,102,95,51,52,52,51,32,120,52,57,51,32,121,52,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,52,52,48,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,53,49,32,46,32,95,52,57,49,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,51,52,52,56,41,0};
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
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,51,56,50,51,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,33),40,97,51,56,50,57,32,101,112,105,100,54,54,56,32,101,110,111,114,109,54,54,57,32,101,99,111,100,101,54,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,54,53,51,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,55,52,56,32,102,108,97,103,115,55,52,57,32,46,32,109,111,100,101,55,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,99,108,111,115,101,32,102,100,55,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,37),40,102,105,108,101,45,114,101,97,100,32,102,100,55,54,51,32,115,105,122,101,55,54,52,32,46,32,98,117,102,102,101,114,55,54,53,41,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,38),40,102,105,108,101,45,119,114,105,116,101,32,102,100,55,55,53,32,98,117,102,102,101,114,55,55,54,32,46,32,115,105,122,101,55,55,55,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,22),40,115,117,102,102,105,120,45,108,111,111,112,32,105,110,100,101,120,56,48,56,41,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,99,111,117,110,116,56,48,54,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,57,53,41,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,55,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,56,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,56,50,55,32,105,110,112,56,50,56,32,114,56,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,56,51,51,32,46,32,109,56,51,52,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,56,52,51,32,46,32,109,56,52,52,41};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,56,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,27),40,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,56,53,56,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,51,55,55,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,20),40,97,52,51,56,51,32,46,32,114,101,115,117,108,116,115,56,55,52,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,56,55,48,32,112,114,111,99,56,55,49,32,46,32,109,111,100,101,56,55,50,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,52,48,49,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,20),40,97,52,52,48,55,32,46,32,114,101,115,117,108,116,115,56,56,49,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,56,55,55,32,112,114,111,99,56,55,56,32,46,32,109,111,100,101,56,55,57,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,7),40,97,52,52,50,53,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,20),40,97,52,52,51,54,32,46,32,114,101,115,117,108,116,115,56,57,54,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,7),40,97,52,52,51,48,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,7),40,97,52,52,52,53,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,56,56,52,32,116,104,117,110,107,56,56,53,32,46,32,109,111,100,101,56,56,54,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,97,52,52,53,57,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,97,52,52,55,48,32,46,32,114,101,115,117,108,116,115,57,49,51,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,52,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,7),40,97,52,52,55,57,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,57,48,49,32,116,104,117,110,107,57,48,50,32,46,32,109,111,100,101,57,48,51,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,112,105,112,101,32,46,32,116,109,112,57,50,50,57,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,57,57,55,32,109,57,57,56,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,49,48,48,51,32,97,99,99,49,48,48,52,32,108,111,99,49,48,48,53,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,48,48,57,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,48,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,48,49,49,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,28),40,109,111,100,101,32,105,110,112,49,48,50,48,32,109,49,48,50,49,32,108,111,99,49,48,50,50,41,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,28),40,99,104,101,99,107,32,102,100,49,48,51,52,32,105,110,112,49,48,51,53,32,114,49,48,51,54,41,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,33),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,49,48,52,48,32,46,32,109,49,48,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,34),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,49,48,52,51,32,46,32,109,49,48,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,49,48,53,48,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,36),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,49,48,53,54,32,46,32,110,101,119,49,48,53,55,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,48,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,48,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,48,56,49,41};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,48,56,51,32,109,111,100,101,49,48,56,52,32,46,32,115,105,122,101,49,48,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,108,115,116,49,49,49,53,32,111,108,115,116,49,49,49,54,41};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,37),40,36,113,117,111,116,101,45,97,114,103,115,45,108,105,115,116,32,108,115,116,49,49,48,50,32,101,120,97,99,116,102,49,49,48,51,41,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,49),40,115,101,116,97,114,103,32,105,110,116,49,49,50,51,49,49,50,57,32,99,45,115,116,114,105,110,103,49,49,50,52,49,49,51,48,32,105,110,116,49,49,50,53,49,49,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,49),40,115,101,116,101,110,118,32,105,110,116,49,49,51,51,49,49,51,57,32,99,45,115,116,114,105,110,103,49,49,51,52,49,49,52,48,32,105,110,116,49,49,51,53,49,49,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,49,52,55,32,108,49,49,52,57,32,105,49,49,53,48,41};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,61),40,98,117,105,108,100,45,101,120,101,99,45,97,114,103,118,101,99,32,108,111,99,49,49,52,51,32,108,115,116,49,49,52,52,32,97,114,103,118,101,99,45,115,101,116,116,101,114,49,49,52,53,32,105,100,120,49,49,52,54,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,67),40,36,101,120,101,99,45,115,101,116,117,112,32,108,111,99,49,49,53,54,32,102,105,108,101,110,97,109,101,49,49,53,55,32,97,114,103,108,115,116,49,49,53,56,32,101,110,118,108,115,116,49,49,53,57,32,101,120,97,99,116,102,49,49,54,48,41,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,53),40,36,101,120,101,99,45,116,101,97,114,100,111,119,110,32,108,111,99,49,49,54,57,32,109,115,103,49,49,55,48,32,102,105,108,101,110,97,109,101,49,49,55,49,32,114,101,115,49,49,55,50,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,49,56,50,32,46,32,116,109,112,49,49,56,49,49,49,56,51,41,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,51),40,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,49,50,48,51,32,102,105,108,101,110,97,109,101,49,50,48,52,32,46,32,116,109,112,49,50,48,50,49,50,48,53,41,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,50,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,50,50,55,32,46,32,97,114,103,115,49,50,50,56,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,49,50,54,57,32,99,109,100,49,50,55,48,32,97,114,103,115,49,50,55,49,32,101,110,118,49,50,55,50,32,115,116,100,111,117,116,102,49,50,55,51,32,115,116,100,105,110,102,49,50,55,52,32,115,116,100,101,114,114,102,49,50,55,53,32,46,32,116,109,112,49,50,54,56,49,50,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,7),40,103,49,51,51,56,41,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,51,55,41,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,49,51,51,52,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,7),40,97,53,53,51,52,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,38),40,97,53,53,52,48,32,105,110,49,51,54,51,32,111,117,116,49,51,54,52,32,112,105,100,49,51,54,53,32,101,114,114,49,51,54,54,41,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,63),40,37,112,114,111,99,101,115,115,32,108,111,99,49,51,50,55,32,101,114,114,63,49,51,50,56,32,99,109,100,49,51,50,57,32,97,114,103,115,49,51,51,48,32,101,110,118,49,51,51,49,32,101,120,97,99,116,102,49,51,51,50,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,49,51,55,53,32,46,32,116,109,112,49,51,55,52,49,51,55,54,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,49,51,57,52,32,46,32,116,109,112,49,51,57,51,49,51,57,53,41};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,52,49,48,32,110,111,104,97,110,103,49,52,49,49,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,13),40,115,108,101,101,112,32,115,49,52,49,51,41,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,52,53,53,32,108,101,110,49,52,53,54,32,112,114,111,116,49,52,53,55,32,102,108,97,103,49,52,53,56,32,102,100,49,52,53,57,32,46,32,111,102,102,49,52,54,48,41};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,52,55,55,32,46,32,108,101,110,49,52,55,56,41,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,52,56,50,41,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,52,56,53,41,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,46,32,95,49,53,49,54,49,53,50,48,41,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,46,32,95,49,53,50,51,49,53,50,55,41,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,49,53,50,57,49,53,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,49,53,51,53,49,53,51,57,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,53,52,49,49,53,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,40),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,49,53,52,55,49,53,53,49,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,39),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,49,53,53,51,49,53,53,55,41,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,41),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,49,53,53,57,49,53,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,30),40,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,49,53,54,53,49,53,54,57,41,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,49,53,55,49,49,53,55,53,41,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,105,110,107,32,46,32,95,49,53,55,55,49,53,56,49,41,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,111,99,107,32,46,32,95,49,53,56,51,49,53,56,55,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,49,53,56,57,49,53,57,51,41};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,49,53,57,53,49,53,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,49,54,48,49,49,54,48,53,41,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,49,54,48,55,49,54,49,49,41,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,49,54,49,51,49,54,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,24),40,103,101,116,45,103,114,111,117,112,115,32,46,32,95,49,54,49,57,49,54,50,51,41};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,31),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,54,50,53,49,54,50,57,41,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,31),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,46,32,95,49,54,51,49,49,54,51,53,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,31),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,49,54,51,55,49,54,52,49,41,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,49,54,52,51,49,54,52,55,41,0,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,49,54,52,57,49,54,53,51,41,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,49,54,53,53,49,54,53,57,41,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,32),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,54,54,49,49,54,54,53,41};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,46,32,95,49,54,54,55,49,54,55,49,41};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,54,55,51,49,54,55,55,41,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,25),40,115,101,116,45,103,114,111,117,112,115,33,32,46,32,95,49,54,55,57,49,54,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,54,56,53,49,54,56,57,41,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,33),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,49,54,57,49,49,54,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,54,57,55,49,55,48,49,41,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,117,115,101,114,45,105,100,33,32,46,32,95,49,55,48,51,49,55,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,25),40,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,49,55,48,57,49,55,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,26),40,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,55,49,53,49,55,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,49,55,50,49,49,55,50,53,41,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,49,55,50,55,49,55,51,49,41,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,46,32,95,49,55,51,51,49,55,51,55,41,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,30),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,55,51,57,49,55,52,51,41,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,31),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,49,55,52,53,49,55,52,57,41,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,26),40,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,49,55,53,49,49,55,53,53,41,0,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,13),40,102,105,102,111,63,32,95,49,55,53,56,41,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,14),40,97,54,49,54,57,32,115,105,103,54,52,57,41,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,19),40,97,54,49,55,56,32,46,32,116,109,112,53,48,52,53,48,53,41,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,13),40,97,54,50,48,51,32,117,109,53,49,55,41,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,15),40,97,54,50,48,57,32,112,111,114,116,49,57,54,41,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,12),40,97,54,50,52,54,32,102,49,49,49,41,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,17),40,97,54,50,53,50,32,102,49,49,51,32,116,49,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k5861 */
static C_word C_fcall stub1471(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1471(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k5805 */
static C_word C_fcall stub1450(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1450(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_mk_bool(is_bad_mmap(t0));
return C_r;}

/* from k5796 */
static C_word C_fcall stub1438(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub1438(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k5358 */
static C_word C_fcall stub1240(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7) C_regparm;
C_regparm static C_word C_fcall stub1240(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

/* from k5034 */
static C_word C_fcall stub1136(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1136(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from k5013 */
static C_word C_fcall stub1126(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1126(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k4808 */
static C_word C_fcall stub1071(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1071(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1065(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1065(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
C_return(z);
C_ret:
#undef return

return C_r;}

/* from k3708 */
static C_word C_fcall stub631(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub631(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k3606 */
static C_word C_fcall stub591(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub591(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3593 */
static C_word C_fcall stub581(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub581(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3526 */
static C_word C_fcall stub552(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub552(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k6261 in a6252 in k2230 in k2227 in k2224 in k2221 in k2218 */
static C_word C_fcall stub120(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub120(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2241 */
static C_word C_fcall stub67(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub67(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4968)
static void C_fcall f_4968(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3717)
static void C_fcall f_3717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4876)
static void C_fcall f_4876(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_fcall f_4864(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4850)
static void C_ccall f_4850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_fcall f_2703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_fcall f_4109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4688)
static void C_fcall f_4688(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4651)
static void C_fcall f_4651(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6263)
static void C_ccall f_6263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5500)
static C_word C_fcall f_5500(C_word t0,C_word t1);
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3429)
static void C_ccall f_3429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5124)
static void C_fcall f_5124(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_fcall f_4235(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4171)
static void C_fcall f_4171(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_fcall f_4164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5915)
static void C_ccall f_5915(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5909)
static void C_ccall f_5909(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4005)
static void C_fcall f_4005(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4620)
static void C_ccall f_4620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3163)
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_fcall f_4610(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_fcall f_2763(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_fcall f_5304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5874)
static void C_fcall f_5874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_fcall f_3901(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4775)
static void C_fcall f_4775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_fcall f_2568(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3108)
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_fcall f_2518(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2814)
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_fcall f_2881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6226)
static void C_ccall f_6226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5056)
static void C_fcall f_5056(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6253)
static void C_ccall f_6253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6247)
static void C_ccall f_6247(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5044)
static void C_fcall f_5044(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_fcall f_4062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6210)
static void C_ccall f_6210(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6204)
static void C_ccall f_6204(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t10) C_noret;
C_noret_decl(f_5818)
static void C_fcall f_5818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3729)
static void C_fcall f_3729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6095)
static void C_ccall f_6095(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5833)
static void C_fcall f_5833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6041)
static void C_ccall f_6041(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4939)
static C_word C_fcall f_4939(C_word t0,C_word t1);
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_fcall f_4925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5092)
static void C_fcall f_5092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_fcall f_3458(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5484)
static void C_fcall f_5484(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5486)
static void C_fcall f_5486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_fcall f_3228(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_fcall f_2262(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5749)
static void C_ccall f_5749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_fcall f_3006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5729)
static void C_ccall f_5729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4471)
static void C_ccall f_4471(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4471)
static void C_ccall f_4471r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3032)
static void C_fcall f_3032(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5491)
static C_word C_fcall f_5491(C_word t0,C_word t1);
C_noret_decl(f_6107)
static void C_ccall f_6107(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2605)
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_fcall f_3219(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3216)
static void C_fcall f_3216(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_fcall f_2874(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2787)
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4968)
static void C_fcall trf_4968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4968(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4968(t0,t1,t2,t3);}

C_noret_decl(trf_3717)
static void C_fcall trf_3717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3717(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3717(t0,t1,t2);}

C_noret_decl(trf_4876)
static void C_fcall trf_4876(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4876(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4876(t0,t1);}

C_noret_decl(trf_4864)
static void C_fcall trf_4864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4864(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4864(t0,t1);}

C_noret_decl(trf_2703)
static void C_fcall trf_2703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2703(t0,t1);}

C_noret_decl(trf_4109)
static void C_fcall trf_4109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4109(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4109(t0,t1,t2);}

C_noret_decl(trf_4688)
static void C_fcall trf_4688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4688(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4688(t0,t1,t2,t3);}

C_noret_decl(trf_4651)
static void C_fcall trf_4651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4651(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4651(t0,t1,t2,t3);}

C_noret_decl(trf_5124)
static void C_fcall trf_5124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5124(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5124(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4235)
static void C_fcall trf_4235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4235(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4235(t0,t1,t2,t3);}

C_noret_decl(trf_4171)
static void C_fcall trf_4171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4171(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4171(t0,t1);}

C_noret_decl(trf_4164)
static void C_fcall trf_4164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4164(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4164(t0,t1,t2);}

C_noret_decl(trf_4005)
static void C_fcall trf_4005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4005(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4005(t0,t1);}

C_noret_decl(trf_3163)
static void C_fcall trf_3163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3163(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3163(t0,t1,t2);}

C_noret_decl(trf_4610)
static void C_fcall trf_4610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4610(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4610(t0,t1,t2,t3);}

C_noret_decl(trf_2763)
static void C_fcall trf_2763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2763(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2763(t0,t1);}

C_noret_decl(trf_5304)
static void C_fcall trf_5304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5304(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5304(t0,t1);}

C_noret_decl(trf_3142)
static void C_fcall trf_3142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3142(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3142(t0,t1,t2);}

C_noret_decl(trf_5874)
static void C_fcall trf_5874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5874(t0,t1);}

C_noret_decl(trf_3901)
static void C_fcall trf_3901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3901(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3901(t0,t1);}

C_noret_decl(trf_4775)
static void C_fcall trf_4775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4775(t0,t1);}

C_noret_decl(trf_2568)
static void C_fcall trf_2568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2568(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2568(t0,t1,t2,t3);}

C_noret_decl(trf_3108)
static void C_fcall trf_3108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3108(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3108(t0,t1,t2);}

C_noret_decl(trf_2518)
static void C_fcall trf_2518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2518(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2518(t0,t1);}

C_noret_decl(trf_2814)
static void C_fcall trf_2814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2814(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2814(t0,t1,t2);}

C_noret_decl(trf_2881)
static void C_fcall trf_2881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2881(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2881(t0,t1);}

C_noret_decl(trf_5056)
static void C_fcall trf_5056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5056(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5056(t0,t1,t2,t3);}

C_noret_decl(trf_5044)
static void C_fcall trf_5044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5044(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5044(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4062)
static void C_fcall trf_4062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4062(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4062(t0,t1,t2);}

C_noret_decl(trf_5818)
static void C_fcall trf_5818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5818(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5818(t0,t1);}

C_noret_decl(trf_3729)
static void C_fcall trf_3729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3729(t0,t1,t2);}

C_noret_decl(trf_5833)
static void C_fcall trf_5833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5833(t0,t1);}

C_noret_decl(trf_4925)
static void C_fcall trf_4925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4925(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4925(t0,t1,t2);}

C_noret_decl(trf_5092)
static void C_fcall trf_5092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5092(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5092(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3458)
static void C_fcall trf_3458(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3458(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3458(t0,t1,t2);}

C_noret_decl(trf_5484)
static void C_fcall trf_5484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5484(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5484(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5486)
static void C_fcall trf_5486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5486(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5486(t0,t1,t2);}

C_noret_decl(trf_3228)
static void C_fcall trf_3228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3228(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3228(t0,t1,t2,t3);}

C_noret_decl(trf_2262)
static void C_fcall trf_2262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2262(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2262(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3006)
static void C_fcall trf_3006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3006(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3006(t0,t1);}

C_noret_decl(trf_3032)
static void C_fcall trf_3032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3032(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3032(t0,t1);}

C_noret_decl(trf_2605)
static void C_fcall trf_2605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2605(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2605(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3219)
static void C_fcall trf_3219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3219(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3219(t0,t1);}

C_noret_decl(trf_3216)
static void C_fcall trf_3216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3216(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3216(t0,t1);}

C_noret_decl(trf_2874)
static void C_fcall trf_2874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2874(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2874(t0,t1,t2);}

C_noret_decl(trf_2787)
static void C_fcall trf_2787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2787(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2787(t0,t1,t2);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

C_noret_decl(tr9r)
static void C_fcall tr9r(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9r(C_proc9 k){
int n;
C_word *a,t9;
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
n=C_rest_count(0);
a=C_alloc(n*3);
t9=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

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

/* set-signal-handler! in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3777,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[131]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(*((C_word*)lf[132]+1),t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(*((C_word*)lf[132]+1),t2,t3));}}

/* current-user-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
/* posixwin.scm:1547: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[360],lf[0]);}

/* current-group-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5963,2,t0,t1);}
/* posixwin.scm:1546: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[359],lf[0]);}

/* k3201 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:502: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[96]+1)))(3,*((C_word*)lf[96]+1),((C_word*)t0)[2],t1);}

/* current-effective-user-name in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5957,2,t0,t1);}
/* posixwin.scm:1545: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[358],lf[0]);}

/* current-effective-user-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
/* posixwin.scm:1544: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[357],lf[0]);}

/* loop in $quote-args-list in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4968(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4968,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm:1177: ##sys#fast-reverse */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[300]+1)))(3,*((C_word*)lf[300]+1),t1,t3);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4994,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=t4;
t9=C_i_string_length(t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4939,a[2]=t10,a[3]=t8,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp);
t12=f_4939(t11,C_fix(0));
if(C_truep(t12)){
/* posixwin.scm:1182: string-append */
t13=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t7,lf[301],t4,lf[302]);}
else{
t13=C_a_i_cons(&a,2,t4,t3);
/* posixwin.scm:1179: loop */
t15=t1;
t16=t6;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}}

/* loop in get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3717,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3721,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub631(t5,t6);
/* posix-common.scm:636: ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k4874 in k4865 in k4862 in set-buffering-mode! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4876(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm:1142: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[288],lf[289],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3711,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3717,a[2]=t3,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3717(t5,t1,C_fix(0));}

/* a4479 in k4453 in with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[200]+1));
t3=C_mutate2((C_word*)lf[200]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* create-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4485(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_4485r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4485r(t0,t1,t2);}}

static void C_ccall f_4485r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_fixnum_or(*((C_word*)lf[149]+1),*((C_word*)lf[151]+1)):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4492,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_pipe(C_SCHEME_FALSE,t4);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:920: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t7);}
else{
/* posixwin.scm:922: values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k4992 in loop in $quote-args-list in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4994,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* posixwin.scm:1179: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4968(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k4865 in k4862 in set-buffering-mode! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4867(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4867,2,t0,t1);}
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[288]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(((C_word*)t0)[4],C_fix(7));
t6=C_eqp(lf[45],t5);
if(C_truep(t6)){
t7=C_setvbuf(((C_word*)t0)[4],t2,((C_word*)t0)[2]);
t8=t4;
f_4876(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
t7=t4;
f_4876(t7,C_SCHEME_TRUE);}}

/* k4862 in set-buffering-mode! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4864(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4864,NULL,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4867,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[290]);
if(C_truep(t5)){
t6=t4;
f_4867(2,t6,C_fix((C_word)_IOFBF));}
else{
t6=C_eqp(t3,lf[291]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;
f_4867(2,t8,t7);}
else{
t7=C_eqp(t3,lf[292]);
if(C_truep(t7)){
t8=t4;
f_4867(2,t8,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm:1136: ##sys#error */
t8=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t4,lf[288],lf[293],((C_word*)t0)[2],((C_word*)t0)[4]);}}}}

/* create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_2846r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2846r(t0,t1,t2,t3);}}

static void C_ccall f_2846r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t7=C_i_check_string_2(t2,lf[84]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2856,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_block_size(t2);
t10=C_eqp(C_fix(0),t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2862,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_2862(2,t12,t10);}
else{
/* posix-common.scm:455: file-exists? */
t12=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t2);}}

/* set-buffering-mode! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4858r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4858r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4858r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(5);
t5=t2;
t6=C_i_check_port_2(t5,C_fix(0),C_SCHEME_TRUE,lf[288]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4864,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_4864(t9,C_u_i_car(t8));}
else{
t8=t7;
f_4864(t8,C_fix((C_word)BUFSIZ));}}

/* k2734 in current-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=t1;
t3=C_curdir(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2739,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:418: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}

/* k2737 in k2734 in current-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:420: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(5,*((C_word*)lf[74]+1),((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2]);}
else{
/* posix-common.scm:421: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],lf[72],lf[75]);}}

/* k4848 in terminal-size in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm:1120: values */
C_values(4,0,((C_word*)t0)[2],C_fix(0),C_fix(0));}
else{
/* posixwin.scm:1121: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[286],lf[287],((C_word*)t0)[3]);}}

/* k2574 in mode in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2701 */
static void C_fcall f_2703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2703,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:406: posix-error */
t4=lf[2];
f_2244(6,t4,t3,lf[10],lf[70],lf[71],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k2704 in k2701 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* suffix-loop in loop in k4055 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4109,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4132,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:799: random */
t5=*((C_word*)lf[177]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2795 in g293 in k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2797,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[79]+1);
t3=*((C_word*)lf[79]+1);
/* posix-common.scm:438: g303 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:440: directory? */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k4265 in open-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:840: check */
f_4235(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* current-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2723r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2723r(t0,t1,t2);}}

static void C_ccall f_2723r(C_word t0,C_word t1,C_word t2){
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
t5=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2736,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),t5,C_fix(1024),C_make_character(32));}}

/* a5540 in k5528 in k5525 in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5541,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm:1314: values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm:1315: values */
C_values(5,0,t1,t2,t3,t4);}}

/* check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4688(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4688,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4692,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1058: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}

/* k5525 in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1311: chkstrlst */
t3=((C_word*)t0)[9];
f_5486(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_5530(2,t3,C_SCHEME_UNDEFINED);}}

/* k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
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
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word t182;
C_word t183;
C_word t184;
C_word t185;
C_word t186;
C_word t187;
C_word t188;
C_word t189;
C_word t190;
C_word t191;
C_word t192;
C_word t193;
C_word t194;
C_word t195;
C_word t196;
C_word t197;
C_word t198;
C_word t199;
C_word t200;
C_word t201;
C_word t202;
C_word t203;
C_word t204;
C_word t205;
C_word t206;
C_word t207;
C_word t208;
C_word t209;
C_word t210;
C_word t211;
C_word t212;
C_word t213;
C_word t214;
C_word t215;
C_word t216;
C_word t217;
C_word t218;
C_word t219;
C_word t220;
C_word t221;
C_word t222;
C_word t223;
C_word t224;
C_word t225;
C_word ab[342],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3792,2,t0,t1);}
t2=C_mutate2((C_word*)lf[133]+1 /* (set! signal-handler ...) */,t1);
t3=C_mutate2((C_word*)lf[134]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3794,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[135]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3800,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[139]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t6=C_mutate2((C_word*)lf[140]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t7=C_mutate2((C_word*)lf[141]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t8=C_mutate2((C_word*)lf[142]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t9=C_mutate2((C_word*)lf[143]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDWR));
t10=C_mutate2((C_word*)lf[144]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t11=C_mutate2((C_word*)lf[145]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t12=C_mutate2((C_word*)lf[146]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t13=C_mutate2((C_word*)lf[147]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t14=C_mutate2((C_word*)lf[148]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t15=C_mutate2((C_word*)lf[149]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t16=C_mutate2((C_word*)lf[150]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t17=C_mutate2((C_word*)lf[151]+1 /* (set! open/noinherit ...) */,C_fix((C_word)O_NOINHERIT));
t18=C_mutate2((C_word*)lf[152]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IREAD));
t19=C_mutate2((C_word*)lf[153]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWRITE));
t20=C_mutate2((C_word*)lf[154]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IEXEC));
t21=C_mutate2((C_word*)lf[155]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IREAD));
t22=C_mutate2((C_word*)lf[156]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWRITE));
t23=C_mutate2((C_word*)lf[157]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IEXEC));
t24=C_mutate2((C_word*)lf[158]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IREAD));
t25=C_mutate2((C_word*)lf[159]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWRITE));
t26=C_mutate2((C_word*)lf[160]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IEXEC));
t27=C_mutate2((C_word*)lf[161]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_mutate2((C_word*)lf[162]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=C_mutate2((C_word*)lf[163]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t30=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t31=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t30);
t32=t31;
t33=C_mutate2((C_word*)lf[164]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3897,a[2]=t32,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t34=C_mutate2((C_word*)lf[166]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[168]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3951,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[171]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[174]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4035,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[73]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4235,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
t40=C_mutate2((C_word*)lf[186]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4253,a[2]=t39,a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp));
t41=C_mutate2((C_word*)lf[190]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4293,a[2]=t39,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp));
t42=C_mutate2((C_word*)lf[191]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[193]+1 /* (set! close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[195]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[196]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4393,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[197]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4417,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[199]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4451,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[201]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4485,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[203]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t50=C_mutate2((C_word*)lf[204]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t51=C_mutate2((C_word*)lf[205]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t52=C_mutate2((C_word*)lf[206]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t53=C_mutate2((C_word*)lf[207]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t54=C_mutate2((C_word*)lf[208]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t55=C_mutate2((C_word*)lf[209]+1 /* (set! signal/break ...) */,C_fix((C_word)SIGBREAK));
t56=C_set_block_item(lf[210] /* signal/alrm */,0,C_fix(0));
t57=C_set_block_item(lf[211] /* signal/chld */,0,C_fix(0));
t58=C_set_block_item(lf[212] /* signal/cont */,0,C_fix(0));
t59=C_set_block_item(lf[213] /* signal/hup */,0,C_fix(0));
t60=C_set_block_item(lf[214] /* signal/io */,0,C_fix(0));
t61=C_set_block_item(lf[215] /* signal/kill */,0,C_fix(0));
t62=C_set_block_item(lf[216] /* signal/pipe */,0,C_fix(0));
t63=C_set_block_item(lf[217] /* signal/prof */,0,C_fix(0));
t64=C_set_block_item(lf[218] /* signal/quit */,0,C_fix(0));
t65=C_set_block_item(lf[219] /* signal/stop */,0,C_fix(0));
t66=C_set_block_item(lf[220] /* signal/trap */,0,C_fix(0));
t67=C_set_block_item(lf[221] /* signal/tstp */,0,C_fix(0));
t68=C_set_block_item(lf[222] /* signal/urg */,0,C_fix(0));
t69=C_set_block_item(lf[223] /* signal/usr1 */,0,C_fix(0));
t70=C_set_block_item(lf[224] /* signal/usr2 */,0,C_fix(0));
t71=C_set_block_item(lf[225] /* signal/vtalrm */,0,C_fix(0));
t72=C_set_block_item(lf[226] /* signal/winch */,0,C_fix(0));
t73=C_set_block_item(lf[227] /* signal/xcpu */,0,C_fix(0));
t74=C_set_block_item(lf[228] /* signal/xfsz */,0,C_fix(0));
t75=C_a_i_list7(&a,7,*((C_word*)lf[203]+1),*((C_word*)lf[204]+1),*((C_word*)lf[205]+1),*((C_word*)lf[206]+1),*((C_word*)lf[207]+1),*((C_word*)lf[208]+1),*((C_word*)lf[209]+1));
t76=C_mutate2((C_word*)lf[229]+1 /* (set! signals-list ...) */,t75);
t77=C_mutate2((C_word*)lf[230]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t78=C_mutate2((C_word*)lf[231]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t79=C_mutate2((C_word*)lf[232]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t80=C_mutate2((C_word*)lf[233]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t81=C_mutate2((C_word*)lf[234]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t82=C_mutate2((C_word*)lf[235]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t83=C_mutate2((C_word*)lf[236]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t84=C_mutate2((C_word*)lf[237]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t85=C_mutate2((C_word*)lf[238]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t86=C_mutate2((C_word*)lf[239]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t87=C_mutate2((C_word*)lf[240]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t88=C_mutate2((C_word*)lf[241]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t89=C_mutate2((C_word*)lf[242]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t90=C_mutate2((C_word*)lf[243]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t91=C_mutate2((C_word*)lf[244]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t92=C_mutate2((C_word*)lf[245]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t93=C_mutate2((C_word*)lf[246]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t94=C_mutate2((C_word*)lf[247]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t95=C_mutate2((C_word*)lf[248]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t96=C_mutate2((C_word*)lf[249]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t97=C_mutate2((C_word*)lf[250]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t98=C_mutate2((C_word*)lf[251]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t99=C_mutate2((C_word*)lf[252]+1 /* (set! errno/nxio ...) */,C_fix((C_word)ENXIO));
t100=C_mutate2((C_word*)lf[253]+1 /* (set! errno/2big ...) */,C_fix((C_word)E2BIG));
t101=C_mutate2((C_word*)lf[254]+1 /* (set! errno/xdev ...) */,C_fix((C_word)EXDEV));
t102=C_mutate2((C_word*)lf[255]+1 /* (set! errno/nodev ...) */,C_fix((C_word)ENODEV));
t103=C_mutate2((C_word*)lf[256]+1 /* (set! errno/nfile ...) */,C_fix((C_word)ENFILE));
t104=C_mutate2((C_word*)lf[257]+1 /* (set! errno/notty ...) */,C_fix((C_word)ENOTTY));
t105=C_mutate2((C_word*)lf[258]+1 /* (set! errno/fbig ...) */,C_fix((C_word)EFBIG));
t106=C_mutate2((C_word*)lf[259]+1 /* (set! errno/mlink ...) */,C_fix((C_word)EMLINK));
t107=C_mutate2((C_word*)lf[260]+1 /* (set! errno/dom ...) */,C_fix((C_word)EDOM));
t108=C_mutate2((C_word*)lf[261]+1 /* (set! errno/range ...) */,C_fix((C_word)ERANGE));
t109=C_mutate2((C_word*)lf[262]+1 /* (set! errno/deadlk ...) */,C_fix((C_word)EDEADLK));
t110=C_mutate2((C_word*)lf[263]+1 /* (set! errno/nametoolong ...) */,C_fix((C_word)ENAMETOOLONG));
t111=C_mutate2((C_word*)lf[264]+1 /* (set! errno/nolck ...) */,C_fix((C_word)ENOLCK));
t112=C_mutate2((C_word*)lf[265]+1 /* (set! errno/nosys ...) */,C_fix((C_word)ENOSYS));
t113=C_mutate2((C_word*)lf[266]+1 /* (set! errno/notempty ...) */,C_fix((C_word)ENOTEMPTY));
t114=C_mutate2((C_word*)lf[267]+1 /* (set! errno/ilseq ...) */,C_fix((C_word)EILSEQ));
t115=C_mutate2((C_word*)lf[268]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4584,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t116=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp);
t117=C_mutate2((C_word*)lf[270]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4630,a[2]=t116,a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp));
t118=C_mutate2((C_word*)lf[271]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4636,a[2]=t116,a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp));
t119=C_mutate2((C_word*)lf[272]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4642,a[2]=t116,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp));
t120=C_mutate2((C_word*)lf[49]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t121=C_mutate2((C_word*)lf[50]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t122=C_mutate2((C_word*)lf[51]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t123=C_SCHEME_UNDEFINED;
t124=(*a=C_VECTOR_TYPE|1,a[1]=t123,tmp=(C_word)a,a+=2,tmp);
t125=C_SCHEME_UNDEFINED;
t126=(*a=C_VECTOR_TYPE|1,a[1]=t125,tmp=(C_word)a,a+=2,tmp);
t127=C_set_block_item(t124,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4651,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t128=C_set_block_item(t126,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4688,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t129=C_mutate2((C_word*)lf[63]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4706,a[2]=t126,a[3]=t124,a[4]=((C_word)li110),tmp=(C_word)a,a+=5,tmp));
t130=C_mutate2((C_word*)lf[64]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4720,a[2]=t126,a[3]=t124,a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp));
t131=C_mutate2((C_word*)lf[65]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4734,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t132=C_mutate2((C_word*)lf[70]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t133=C_mutate2((C_word*)lf[283]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4798,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate2((C_word*)lf[284]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4811,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t135=C_mutate2((C_word*)lf[285]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4825,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t136=C_mutate2((C_word*)lf[286]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4843,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate2((C_word*)lf[288]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4858,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t138=C_mutate2((C_word*)lf[294]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t139=C_mutate2((C_word*)lf[295]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t140=C_mutate2((C_word*)lf[296]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t141=C_mutate2((C_word*)lf[297]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t142=C_mutate2((C_word*)lf[298]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t143=C_mutate2(&lf[299] /* (set! $quote-args-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4925,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t144=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
t145=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
t146=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
t147=C_mutate2(&lf[303] /* (set! $exec-setup ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5092,a[2]=t146,a[3]=t145,a[4]=t144,a[5]=((C_word)li126),tmp=(C_word)a,a+=6,tmp));
t148=C_mutate2(&lf[305] /* (set! $exec-teardown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5124,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t149=C_mutate2((C_word*)lf[306]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5139,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t150=C_mutate2((C_word*)lf[308]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5206,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t151=C_mutate2((C_word*)lf[310]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5273,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t152=C_mutate2((C_word*)lf[314]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5294,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t153=C_mutate2((C_word*)lf[316]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5300,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t154=C_mutate2((C_word*)lf[317]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5390,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t155=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5484,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t156=C_mutate2((C_word*)lf[322]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5568,a[2]=t155,a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp));
t157=C_mutate2((C_word*)lf[323]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5628,a[2]=t155,a[3]=((C_word)li141),tmp=(C_word)a,a+=4,tmp));
t158=C_mutate2((C_word*)lf[136]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5688,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t159=C_mutate2((C_word*)lf[324]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5700,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t160=C_mutate2((C_word*)lf[325]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5706,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t161=C_mutate2((C_word*)lf[327]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5718,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t162=C_mutate2((C_word*)lf[330]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5749,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t163=C_mutate2((C_word*)lf[332]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t164=C_mutate2((C_word*)lf[333]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t165=C_mutate2((C_word*)lf[334]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t166=C_mutate2((C_word*)lf[335]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t167=C_mutate2((C_word*)lf[336]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t168=C_mutate2((C_word*)lf[337]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t169=C_mutate2((C_word*)lf[338]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t170=C_mutate2((C_word*)lf[339]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t171=C_mutate2((C_word*)lf[340]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANONYMOUS));
t172=C_mutate2((C_word*)lf[341]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5811,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate2((C_word*)lf[346]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate2((C_word*)lf[348]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5900,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate2((C_word*)lf[349]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5909,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate2((C_word*)lf[350]+1 /* (set! change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5915,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate2((C_word*)lf[352]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5921,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t178=C_mutate2((C_word*)lf[353]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5927,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t179=C_mutate2((C_word*)lf[354]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5933,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate2((C_word*)lf[355]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5939,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t181=C_mutate2((C_word*)lf[356]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5945,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t182=C_mutate2((C_word*)lf[357]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5951,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t183=C_mutate2((C_word*)lf[358]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5957,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t184=C_mutate2((C_word*)lf[359]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5963,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t185=C_mutate2((C_word*)lf[360]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5969,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t186=C_mutate2((C_word*)lf[361]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5975,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t187=C_mutate2((C_word*)lf[362]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5981,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t188=C_mutate2((C_word*)lf[363]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5987,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t189=C_mutate2((C_word*)lf[364]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5993,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t190=C_mutate2((C_word*)lf[365]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5999,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t191=C_mutate2((C_word*)lf[366]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6005,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t192=C_mutate2((C_word*)lf[367]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6011,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t193=C_mutate2((C_word*)lf[368]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6017,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t194=C_mutate2((C_word*)lf[369]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6023,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t195=C_mutate2((C_word*)lf[370]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6029,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t196=C_mutate2((C_word*)lf[371]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6035,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t197=C_mutate2((C_word*)lf[372]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6041,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t198=C_mutate2((C_word*)lf[373]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6047,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t199=C_mutate2((C_word*)lf[374]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6053,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t200=C_mutate2((C_word*)lf[375]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6059,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t201=C_mutate2((C_word*)lf[376]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6065,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t202=C_mutate2((C_word*)lf[377]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6071,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t203=C_mutate2((C_word*)lf[378]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6077,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t204=C_mutate2((C_word*)lf[379]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6083,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t205=C_mutate2((C_word*)lf[380]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6089,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t206=C_mutate2((C_word*)lf[381]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6095,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t207=C_mutate2((C_word*)lf[382]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6101,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t208=C_mutate2((C_word*)lf[383]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6107,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t209=C_mutate2((C_word*)lf[384]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6113,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t210=C_mutate2((C_word*)lf[385]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6119,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t211=C_mutate2((C_word*)lf[386]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6125,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t212=C_mutate2((C_word*)lf[387]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6131,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t213=C_mutate2((C_word*)lf[388]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6137,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t214=C_mutate2((C_word*)lf[389]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6143,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t215=C_mutate2((C_word*)lf[390]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6149,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t216=C_set_block_item(lf[391] /* errno/wouldblock */,0,C_fix(0));
t217=C_mutate2((C_word*)lf[37]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6156,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t218=C_set_block_item(lf[392] /* open/fsync */,0,C_fix(0));
t219=C_set_block_item(lf[393] /* open/noctty */,0,C_fix(0));
t220=C_set_block_item(lf[394] /* open/nonblock */,0,C_fix(0));
t221=C_set_block_item(lf[395] /* open/sync */,0,C_fix(0));
t222=C_set_block_item(lf[396] /* perm/isgid */,0,C_fix(0));
t223=C_set_block_item(lf[397] /* perm/isuid */,0,C_fix(0));
t224=C_set_block_item(lf[398] /* perm/isvtx */,0,C_fix(0));
t225=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t225+1)))(2,t225,C_SCHEME_UNDEFINED);}

/* current-process-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3794,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fudge(C_fix(33)));}

/* k5159 in process-execute in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=C_execve(t1);
/* posixwin.scm:1222: $exec-teardown */
f_5124(((C_word*)t0)[3],lf[306],lf[307],((C_word*)t0)[4],t2);}
else{
t2=C_execvp(t1);
/* posixwin.scm:1222: $exec-teardown */
f_5124(((C_word*)t0)[3],lf[306],lf[307],((C_word*)t0)[4],t2);}}

/* k4657 in mode in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1048: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2905 in k2879 in loop in k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:460: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2874(t2,((C_word*)t0)[3],t1);}

/* mode in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4651(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4651,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4659,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[52]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posixwin.scm:1052: ##sys#error */
t10=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t5,lf[273],t7);}
else{
/* posixwin.scm:1048: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[274],t4);}}
else{
/* posixwin.scm:1053: ##sys#error */
t9=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[275],t7);}}
else{
if(C_truep(t2)){
/* posixwin.scm:1048: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[276],t4);}
else{
/* posixwin.scm:1048: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[277],t4);}}}

/* k2898 in k2882 in k2879 in loop in k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
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
t4=lf[2];
f_2244(6,t4,((C_word*)t0)[2],lf[10],lf[84],lf[85],((C_word*)t0)[3]);}}

/* k2912 in loop in k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2881(t2,C_i_not(t1));}

/* a2915 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2916,2,t0,t1);}
/* posix-common.scm:457: decompose-pathname */
t2=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a5534 in k5528 in k5525 in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
/* posixwin.scm:1312: ##sys#process */
t2=*((C_word*)lf[317]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}

/* k5528 in k5525 in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li137),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[6],a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1312: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[8],t2,t3);}

/* k2350 in file-size in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* a2921 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2922,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
/* posix-common.scm:458: make-pathname */
t5=*((C_word*)lf[88]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* file-type in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2354r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2354r(t0,t1,t2,t3);}}

static void C_ccall f_2354r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2373,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:270: ##sys#stat */
f_2262(t12,t2,t5,t9,lf[25]);}

/* with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4417r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4417r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4417r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4421,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[186]+1),t2,t4);}

/* k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3409,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3441,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(5,*((C_word*)lf[107]+1),t3,lf[110],((C_word*)t0)[4],t4);}

/* process-execute in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5139(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5139r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5139r(t0,t1,t2,t3);}}

static void C_ccall f_5139r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t18;
C_word *a=C_alloc(5);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5161,a[2]=t10,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1221: $exec-setup */
t18=lf[303];
f_5092(t18,t17,lf[306],t2,t5,t10,t14);}

/* find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3405r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3405r(t0,t1,t2,t3);}}

static void C_ccall f_3405r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3409,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(5,*((C_word*)lf[107]+1),t4,lf[111],t3,t5);}

/* k4410 in a4407 in k4395 in call-with-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a4445 in k4419 in with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4446,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[198]+1));
t3=C_mutate2((C_word*)lf[198]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4439 in a4436 in a4430 in k4419 in with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4690 in check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4692,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posixwin.scm:1060: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],lf[278],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1061: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(6,*((C_word*)lf[60]+1),t2,((C_word*)t0)[5],*((C_word*)lf[61]+1),lf[279],lf[45]);}}

/* k6261 in a6252 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub120(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3]));}

/* k2447 in regular-file? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[26],t1));}

/* k6271 in a6252 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:258: posix-error */
t2=lf[2];
f_2244(7,t2,((C_word*)t0)[2],lf[10],lf[404],lf[405],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* regular-file? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2441,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2449,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:282: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* a4425 in k4419 in with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4426,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[198]+1));
t3=C_mutate2((C_word*)lf[198]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4419 in with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4421,2,t0,t1);}
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4426,a[2]=t6,a[3]=t4,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4446,a[2]=t4,a[3]=t6,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:892: ##sys#dynamic-wind */
t10=*((C_word*)lf[102]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[3],t7,t8,t9);}

/* k4453 in with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4455,2,t0,t1);}
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4460,a[2]=t6,a[3]=t4,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4465,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=t4,a[3]=t6,a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:902: ##sys#dynamic-wind */
t10=*((C_word*)lf[102]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[3],t7,t8,t9);}

/* a3448 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3449,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3451,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));}

/* a3440 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3443,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));}

/* with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4451r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4451r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4451r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4455,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[190]+1),t2,t4);}

/* f_3443 in a3440 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3443,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* k5757 in current-user-name in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1363: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[330],lf[331]);}

/* k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3415,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(5,*((C_word*)lf[107]+1),t3,lf[108],((C_word*)t0)[6],t4);}

/* k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3418,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(5,*((C_word*)lf[107]+1),t3,lf[82],((C_word*)t0)[7],t4);}

/* k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3438,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(5,*((C_word*)lf[107]+1),t3,lf[109],((C_word*)t0)[5],t4);}

/* for-each-loop1337 in chkstrlst in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static C_word C_fcall f_5500(C_word t0,C_word t1){
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
t3=f_5491(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* a4436 in a4430 in k4419 in with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4437(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4437r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4437r(t0,t1,t2);}}

static void C_ccall f_4437r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4441,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:898: close-input-pipe */
t4=*((C_word*)lf[191]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2371 in file-type in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[26]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[27]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[28]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[29]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[31]);}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[32]:lf[26]));}}}}}}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3428 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3429,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a4430 in k4419 in with-input-from-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4437,a[2]=((C_word*)t0)[2],a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:895: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3421,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3429,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:547: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[107]+1)))(5,*((C_word*)lf[107]+1),t3,lf[83],((C_word*)t0)[8],t4);}

/* k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=t1;
t9=((C_word*)t0)[8];
t10=C_i_check_string_2(t3,lf[81]);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3216,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t9,a[6]=t2,a[7]=t6,a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
if(C_truep(C_fixnump(t7))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3399,a[2]=t12,a[3]=t7,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
t15=t13;
f_3216(t15,t14);}
else{
t14=t13;
f_3216(t14,t7);}}
else{
t14=t13;
f_3216(t14,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3391,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));}}

/* k4209 in k4200 in change-directory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:819: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[73],lf[183],((C_word*)t0)[3]);}

/* k4203 in k4200 in change-directory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4200 in change-directory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_chdir(t1);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4211,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:818: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}}

/* k2534 in k2516 in set-file-position! in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[45]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
f_2530(2,t5,t4);}
else{
t4=((C_word*)t0)[5];
f_2530(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_2530(2,t3,t2);}
else{
/* posix-common.scm:324: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[14],lf[43],lf[46],((C_word*)t0)[2]);}}}

/* k2528 in k2516 in set-file-position! in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
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
t2=lf[2];
f_2244(7,t2,((C_word*)t0)[2],lf[10],lf[43],lf[44],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k3479 in seconds->local-time in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[115]);
/* posix-common.scm:580: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[116]+1)))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* $exec-teardown in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5124(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5124,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5128,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:1213: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* k5126 in $exec-teardown in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_free_exec_args();
t3=C_free_exec_env();
t4=C_eqp(((C_word*)t0)[2],C_fix(-1));
if(C_truep(t4)){
/* posixwin.scm:1217: ##sys#error */
t5=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* ##sys#shell-command-arguments in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5294,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list2(&a,2,lf[315],t2));}

/* k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4048,2,t0,t1);}
t2=t1;
t3=C_block_size(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_fixnum_difference(t4,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4164,a[2]=t8,a[3]=t2,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4164(t10,t5,t6);}

/* k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4048,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:782: string-copy */
t4=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* open-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4253r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4253r(t0,t1,t2,t3);}}

static void C_ccall f_4253r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[186]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[187]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[187]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:843: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t9,t2,lf[186]);}
else{
t9=C_eqp(t6,lf[188]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:844: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t2,lf[186]);}
else{
/* posixwin.scm:828: ##sys#error */
t10=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[189],t6);}}}

/* k5113 in k5100 in k5097 in $exec-setup in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1207: build-exec-argvec */
f_5044(((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],C_fix(1));}

/* k4249 in k4237 in check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5287 in k5275 in shell-command in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1238: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[310],lf[311]);}

/* file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4035(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4035,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[174]);
t4=lf[175];
t5=C_block_size(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4045,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:781: * */
C_times(5,0,t7,t6,t6,t6);}

/* k5103 in k5100 in k5097 in $exec-setup in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1208: build-exec-argvec */
f_5044(t2,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* k5100 in k5097 in $exec-setup in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5115,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[9])){
/* posixwin.scm:1207: $quote-args-list */
f_4925(t3,((C_word*)t0)[9],((C_word*)t0)[10]);}
else{
/* posixwin.scm:1207: build-exec-argvec */
f_5044(t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[8],C_fix(1));}}

/* k5106 in k5103 in k5100 in k5097 in $exec-setup in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_flushall();
/* posixwin.scm:1210: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#shell-command in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5277,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1233: get-environment-variable */
t3=*((C_word*)lf[312]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[313]);}

/* k5275 in shell-command in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5277,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_shlcmd),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1237: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}}

/* k4237 in check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4239,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posixwin.scm:832: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],lf[184],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:833: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(6,*((C_word*)lf[60]+1),t2,((C_word*)t0)[5],*((C_word*)lf[61]+1),lf[185],lf[45]);}}

/* check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4235(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4235,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4239,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:830: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}

/* a6178 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6179(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_6179r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6179r(t0,t1,t2);}}

static void C_ccall f_6179r(C_word t0,C_word t1,C_word t2){
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
t5=(C_truep(t4)?C_i_check_exact_2(t4,lf[112]):C_SCHEME_UNDEFINED);
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

/* a6169 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6170,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[133]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(*((C_word*)lf[132]+1),t2));}

/* a4407 in k4395 in call-with-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4408r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4408r(t0,t1,t2);}}

static void C_ccall f_4408r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4412,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:888: close-output-pipe */
t4=*((C_word*)lf[193]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4169 in loop in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4171(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* posixwin.scm:787: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4164(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}}

/* seconds->utc-time in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3498r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3498r(t0,t1,t2);}}

static void C_ccall f_3498r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3502,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:582: current-seconds */
t4=*((C_word*)lf[117]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[118]);
/* posix-common.scm:584: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[116]+1)))(4,*((C_word*)lf[116]+1),t1,t4,C_SCHEME_TRUE);}}

/* a4401 in k4395 in call-with-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4402,2,t0,t1);}
/* posixwin.scm:886: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

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
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3124)){
C_save(t1);
C_rereclaim2(3124*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,407);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000/this function is not available on this platform");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],13,"string-append");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[6]=C_h_intern(&lf[6],17,"\003syspeek-c-string");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_h_intern(&lf[8],15,"\003sysposix-error");
lf[10]=C_h_intern(&lf[10],11,"\000file-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[12]=C_h_intern(&lf[12],17,"\003sysmake-c-string");
lf[13]=C_h_intern(&lf[13],27,"\003sysplatform-fixup-pathname");
lf[14]=C_h_intern(&lf[14],11,"\000type-error");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a fixnum or string");
lf[16]=C_h_intern(&lf[16],9,"file-stat");
lf[17]=C_h_intern(&lf[17],16,"_stat_st_blksize");
lf[18]=C_h_intern(&lf[18],15,"_stat_st_blocks");
lf[19]=C_h_intern(&lf[19],22,"file-modification-time");
lf[20]=C_h_intern(&lf[20],16,"file-access-time");
lf[21]=C_h_intern(&lf[21],16,"file-change-time");
lf[22]=C_h_intern(&lf[22],10,"file-owner");
lf[23]=C_h_intern(&lf[23],16,"file-permissions");
lf[24]=C_h_intern(&lf[24],9,"file-size");
lf[25]=C_h_intern(&lf[25],9,"file-type");
lf[26]=C_h_intern(&lf[26],12,"regular-file");
lf[27]=C_h_intern(&lf[27],13,"symbolic-link");
lf[28]=C_h_intern(&lf[28],9,"directory");
lf[29]=C_h_intern(&lf[29],16,"character-device");
lf[30]=C_h_intern(&lf[30],12,"block-device");
lf[31]=C_h_intern(&lf[31],4,"fifo");
lf[32]=C_h_intern(&lf[32],6,"socket");
lf[33]=C_h_intern(&lf[33],13,"regular-file\077");
lf[34]=C_h_intern(&lf[34],14,"symbolic-link\077");
lf[35]=C_h_intern(&lf[35],13,"block-device\077");
lf[36]=C_h_intern(&lf[36],17,"character-device\077");
lf[37]=C_h_intern(&lf[37],5,"fifo\077");
lf[38]=C_h_intern(&lf[38],7,"socket\077");
lf[39]=C_h_intern(&lf[39],10,"directory\077");
lf[40]=C_h_intern(&lf[40],8,"seek/set");
lf[41]=C_h_intern(&lf[41],8,"seek/end");
lf[42]=C_h_intern(&lf[42],8,"seek/cur");
lf[43]=C_h_intern(&lf[43],18,"set-file-position!");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[45]=C_h_intern(&lf[45],6,"stream");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[47]=C_h_intern(&lf[47],5,"port\077");
lf[48]=C_h_intern(&lf[48],13,"file-position");
lf[49]=C_h_intern(&lf[49],12,"fileno/stdin");
lf[50]=C_h_intern(&lf[50],13,"fileno/stdout");
lf[51]=C_h_intern(&lf[51],13,"fileno/stderr");
lf[52]=C_h_intern(&lf[52],7,"\000append");
lf[53]=C_h_intern(&lf[53],9,"\003syserror");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[60]=C_h_intern(&lf[60],13,"\003sysmake-port");
lf[61]=C_h_intern(&lf[61],21,"\003sysstream-port-class");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[63]=C_h_intern(&lf[63],16,"open-input-file\052");
lf[64]=C_h_intern(&lf[64],17,"open-output-file\052");
lf[65]=C_h_intern(&lf[65],12,"port->fileno");
lf[66]=C_h_intern(&lf[66],13,"\003sysport-data");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[69]=C_h_intern(&lf[69],25,"\003syspeek-unsigned-integer");
lf[70]=C_h_intern(&lf[70],16,"duplicate-fileno");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[72]=C_h_intern(&lf[72],17,"current-directory");
lf[73]=C_h_intern(&lf[73],16,"change-directory");
lf[74]=C_h_intern(&lf[74],13,"\003syssubstring");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[76]=C_h_intern(&lf[76],15,"\003sysmake-string");
lf[77]=C_h_intern(&lf[77],16,"delete-directory");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[79]=C_h_intern(&lf[79],11,"delete-file");
lf[80]=C_h_intern(&lf[80],8,"for-each");
lf[81]=C_h_intern(&lf[81],10,"find-files");
lf[82]=C_h_intern(&lf[82],9,"\000dotfiles");
lf[83]=C_h_intern(&lf[83],16,"\000follow-symlinks");
lf[84]=C_h_intern(&lf[84],16,"create-directory");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[86]=C_h_intern(&lf[86],18,"pathname-directory");
lf[87]=C_h_intern(&lf[87],18,"decompose-pathname");
lf[88]=C_h_intern(&lf[88],13,"make-pathname");
lf[89]=C_h_intern(&lf[89],12,"file-exists\077");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[91]=C_h_intern(&lf[91],16,"\003sysmake-pointer");
lf[92]=C_h_intern(&lf[92],4,"glob");
lf[93]=C_h_intern(&lf[93],23,"irregex-match-substring");
lf[94]=C_h_intern(&lf[94],13,"irregex-match");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[96]=C_h_intern(&lf[96],16,"\003sysglob->regexp");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\002\077\052");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[102]=C_h_intern(&lf[102],16,"\003sysdynamic-wind");
lf[103]=C_h_intern(&lf[103],13,"pathname-file");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\002\077\052");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[106]=C_h_intern(&lf[106],7,"irregex");
lf[107]=C_h_intern(&lf[107],15,"\003sysget-keyword");
lf[108]=C_h_intern(&lf[108],6,"\000limit");
lf[109]=C_h_intern(&lf[109],5,"\000seed");
lf[110]=C_h_intern(&lf[110],7,"\000action");
lf[111]=C_h_intern(&lf[111],5,"\000test");
lf[112]=C_h_intern(&lf[112],18,"file-creation-mode");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[115]=C_h_intern(&lf[115],19,"seconds->local-time");
lf[116]=C_h_intern(&lf[116],18,"\003sysdecode-seconds");
lf[117]=C_h_intern(&lf[117],15,"current-seconds");
lf[118]=C_h_intern(&lf[118],17,"seconds->utc-time");
lf[119]=C_h_intern(&lf[119],15,"seconds->string");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[121]=C_h_intern(&lf[121],19,"local-time->seconds");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[123]=C_h_intern(&lf[123],3,"fp=");
lf[124]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[125]=C_h_intern(&lf[125],12,"time->string");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[128]=C_h_intern(&lf[128],6,"setenv");
lf[129]=C_h_intern(&lf[129],8,"unsetenv");
lf[130]=C_h_intern(&lf[130],25,"get-environment-variables");
lf[131]=C_h_intern(&lf[131],19,"set-signal-handler!");
lf[132]=C_h_intern(&lf[132],17,"\003syssignal-vector");
lf[133]=C_h_intern(&lf[133],14,"signal-handler");
lf[134]=C_h_intern(&lf[134],18,"current-process-id");
lf[135]=C_h_intern(&lf[135],12,"process-wait");
lf[136]=C_h_intern(&lf[136],16,"\003sysprocess-wait");
lf[137]=C_h_intern(&lf[137],14,"\000process-error");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[139]=C_h_intern(&lf[139],8,"pipe/buf");
lf[140]=C_h_intern(&lf[140],11,"open/rdonly");
lf[141]=C_h_intern(&lf[141],11,"open/wronly");
lf[142]=C_h_intern(&lf[142],9,"open/rdwr");
lf[143]=C_h_intern(&lf[143],9,"open/read");
lf[144]=C_h_intern(&lf[144],10,"open/write");
lf[145]=C_h_intern(&lf[145],10,"open/creat");
lf[146]=C_h_intern(&lf[146],11,"open/append");
lf[147]=C_h_intern(&lf[147],9,"open/excl");
lf[148]=C_h_intern(&lf[148],10,"open/trunc");
lf[149]=C_h_intern(&lf[149],11,"open/binary");
lf[150]=C_h_intern(&lf[150],9,"open/text");
lf[151]=C_h_intern(&lf[151],14,"open/noinherit");
lf[152]=C_h_intern(&lf[152],10,"perm/irusr");
lf[153]=C_h_intern(&lf[153],10,"perm/iwusr");
lf[154]=C_h_intern(&lf[154],10,"perm/ixusr");
lf[155]=C_h_intern(&lf[155],10,"perm/irgrp");
lf[156]=C_h_intern(&lf[156],10,"perm/iwgrp");
lf[157]=C_h_intern(&lf[157],10,"perm/ixgrp");
lf[158]=C_h_intern(&lf[158],10,"perm/iroth");
lf[159]=C_h_intern(&lf[159],10,"perm/iwoth");
lf[160]=C_h_intern(&lf[160],10,"perm/ixoth");
lf[161]=C_h_intern(&lf[161],10,"perm/irwxu");
lf[162]=C_h_intern(&lf[162],10,"perm/irwxg");
lf[163]=C_h_intern(&lf[163],10,"perm/irwxo");
lf[164]=C_h_intern(&lf[164],9,"file-open");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[166]=C_h_intern(&lf[166],10,"file-close");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[168]=C_h_intern(&lf[168],9,"file-read");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[171]=C_h_intern(&lf[171],10,"file-write");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[174]=C_h_intern(&lf[174],12,"file-mkstemp");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000$0123456789abcdefghijklmnopqrstuvwxyz");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[177]=C_h_intern(&lf[177],6,"random");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid template");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\026non-existent directory");
lf[180]=C_h_intern(&lf[180],17,"directory-exists\077");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[182]=C_h_intern(&lf[182],11,"string-copy");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[186]=C_h_intern(&lf[186],15,"open-input-pipe");
lf[187]=C_h_intern(&lf[187],5,"\000text");
lf[188]=C_h_intern(&lf[188],7,"\000binary");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[190]=C_h_intern(&lf[190],16,"open-output-pipe");
lf[191]=C_h_intern(&lf[191],16,"close-input-pipe");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[193]=C_h_intern(&lf[193],17,"close-output-pipe");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[195]=C_h_intern(&lf[195],20,"call-with-input-pipe");
lf[196]=C_h_intern(&lf[196],21,"call-with-output-pipe");
lf[197]=C_h_intern(&lf[197],20,"with-input-from-pipe");
lf[198]=C_h_intern(&lf[198],18,"\003sysstandard-input");
lf[199]=C_h_intern(&lf[199],19,"with-output-to-pipe");
lf[200]=C_h_intern(&lf[200],19,"\003sysstandard-output");
lf[201]=C_h_intern(&lf[201],11,"create-pipe");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[203]=C_h_intern(&lf[203],11,"signal/term");
lf[204]=C_h_intern(&lf[204],10,"signal/int");
lf[205]=C_h_intern(&lf[205],10,"signal/fpe");
lf[206]=C_h_intern(&lf[206],10,"signal/ill");
lf[207]=C_h_intern(&lf[207],11,"signal/segv");
lf[208]=C_h_intern(&lf[208],11,"signal/abrt");
lf[209]=C_h_intern(&lf[209],12,"signal/break");
lf[210]=C_h_intern(&lf[210],11,"signal/alrm");
lf[211]=C_h_intern(&lf[211],11,"signal/chld");
lf[212]=C_h_intern(&lf[212],11,"signal/cont");
lf[213]=C_h_intern(&lf[213],10,"signal/hup");
lf[214]=C_h_intern(&lf[214],9,"signal/io");
lf[215]=C_h_intern(&lf[215],11,"signal/kill");
lf[216]=C_h_intern(&lf[216],11,"signal/pipe");
lf[217]=C_h_intern(&lf[217],11,"signal/prof");
lf[218]=C_h_intern(&lf[218],11,"signal/quit");
lf[219]=C_h_intern(&lf[219],11,"signal/stop");
lf[220]=C_h_intern(&lf[220],11,"signal/trap");
lf[221]=C_h_intern(&lf[221],11,"signal/tstp");
lf[222]=C_h_intern(&lf[222],10,"signal/urg");
lf[223]=C_h_intern(&lf[223],11,"signal/usr1");
lf[224]=C_h_intern(&lf[224],11,"signal/usr2");
lf[225]=C_h_intern(&lf[225],13,"signal/vtalrm");
lf[226]=C_h_intern(&lf[226],12,"signal/winch");
lf[227]=C_h_intern(&lf[227],11,"signal/xcpu");
lf[228]=C_h_intern(&lf[228],11,"signal/xfsz");
lf[229]=C_h_intern(&lf[229],12,"signals-list");
lf[230]=C_h_intern(&lf[230],10,"errno/perm");
lf[231]=C_h_intern(&lf[231],11,"errno/noent");
lf[232]=C_h_intern(&lf[232],10,"errno/srch");
lf[233]=C_h_intern(&lf[233],10,"errno/intr");
lf[234]=C_h_intern(&lf[234],8,"errno/io");
lf[235]=C_h_intern(&lf[235],12,"errno/noexec");
lf[236]=C_h_intern(&lf[236],10,"errno/badf");
lf[237]=C_h_intern(&lf[237],11,"errno/child");
lf[238]=C_h_intern(&lf[238],11,"errno/nomem");
lf[239]=C_h_intern(&lf[239],11,"errno/acces");
lf[240]=C_h_intern(&lf[240],11,"errno/fault");
lf[241]=C_h_intern(&lf[241],10,"errno/busy");
lf[242]=C_h_intern(&lf[242],11,"errno/exist");
lf[243]=C_h_intern(&lf[243],12,"errno/notdir");
lf[244]=C_h_intern(&lf[244],11,"errno/isdir");
lf[245]=C_h_intern(&lf[245],11,"errno/inval");
lf[246]=C_h_intern(&lf[246],11,"errno/mfile");
lf[247]=C_h_intern(&lf[247],11,"errno/nospc");
lf[248]=C_h_intern(&lf[248],11,"errno/spipe");
lf[249]=C_h_intern(&lf[249],10,"errno/pipe");
lf[250]=C_h_intern(&lf[250],11,"errno/again");
lf[251]=C_h_intern(&lf[251],10,"errno/rofs");
lf[252]=C_h_intern(&lf[252],10,"errno/nxio");
lf[253]=C_h_intern(&lf[253],10,"errno/2big");
lf[254]=C_h_intern(&lf[254],10,"errno/xdev");
lf[255]=C_h_intern(&lf[255],11,"errno/nodev");
lf[256]=C_h_intern(&lf[256],11,"errno/nfile");
lf[257]=C_h_intern(&lf[257],11,"errno/notty");
lf[258]=C_h_intern(&lf[258],10,"errno/fbig");
lf[259]=C_h_intern(&lf[259],11,"errno/mlink");
lf[260]=C_h_intern(&lf[260],9,"errno/dom");
lf[261]=C_h_intern(&lf[261],11,"errno/range");
lf[262]=C_h_intern(&lf[262],12,"errno/deadlk");
lf[263]=C_h_intern(&lf[263],17,"errno/nametoolong");
lf[264]=C_h_intern(&lf[264],11,"errno/nolck");
lf[265]=C_h_intern(&lf[265],11,"errno/nosys");
lf[266]=C_h_intern(&lf[266],14,"errno/notempty");
lf[267]=C_h_intern(&lf[267],11,"errno/ilseq");
lf[268]=C_h_intern(&lf[268],16,"change-file-mode");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[270]=C_h_intern(&lf[270],17,"file-read-access\077");
lf[271]=C_h_intern(&lf[271],18,"file-write-access\077");
lf[272]=C_h_intern(&lf[272],20,"file-execute-access\077");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file descriptor");
lf[283]=C_h_intern(&lf[283],27,"local-timezone-abbreviation");
lf[284]=C_h_intern(&lf[284],5,"_exit");
lf[285]=C_h_intern(&lf[285],14,"terminal-port\077");
lf[286]=C_h_intern(&lf[286],13,"terminal-size");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[288]=C_h_intern(&lf[288],19,"set-buffering-mode!");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[290]=C_h_intern(&lf[290],5,"\000full");
lf[291]=C_h_intern(&lf[291],5,"\000line");
lf[292]=C_h_intern(&lf[292],5,"\000none");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[294]=C_h_intern(&lf[294],13,"spawn/overlay");
lf[295]=C_h_intern(&lf[295],10,"spawn/wait");
lf[296]=C_h_intern(&lf[296],12,"spawn/nowait");
lf[297]=C_h_intern(&lf[297],13,"spawn/nowaito");
lf[298]=C_h_intern(&lf[298],12,"spawn/detach");
lf[300]=C_h_intern(&lf[300],16,"\003sysfast-reverse");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[304]=C_h_intern(&lf[304],24,"pathname-strip-directory");
lf[306]=C_h_intern(&lf[306],15,"process-execute");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[308]=C_h_intern(&lf[308],13,"process-spawn");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[310]=C_h_intern(&lf[310],17,"\003sysshell-command");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[312]=C_h_intern(&lf[312],24,"get-environment-variable");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[314]=C_h_intern(&lf[314],27,"\003sysshell-command-arguments");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[316]=C_h_intern(&lf[316],11,"process-run");
lf[317]=C_h_intern(&lf[317],11,"\003sysprocess");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[319]=C_h_intern(&lf[319],17,"\003sysmake-locative");
lf[320]=C_h_intern(&lf[320],8,"location");
lf[321]=C_h_intern(&lf[321],18,"string-intersperse");
lf[322]=C_h_intern(&lf[322],7,"process");
lf[323]=C_h_intern(&lf[323],8,"process\052");
lf[324]=C_h_intern(&lf[324],5,"sleep");
lf[325]=C_h_intern(&lf[325],13,"get-host-name");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[327]=C_h_intern(&lf[327],18,"system-information");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[330]=C_h_intern(&lf[330],17,"current-user-name");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[332]=C_h_intern(&lf[332],9,"prot/none");
lf[333]=C_h_intern(&lf[333],9,"prot/read");
lf[334]=C_h_intern(&lf[334],10,"prot/write");
lf[335]=C_h_intern(&lf[335],9,"prot/exec");
lf[336]=C_h_intern(&lf[336],8,"map/file");
lf[337]=C_h_intern(&lf[337],10,"map/shared");
lf[338]=C_h_intern(&lf[338],11,"map/private");
lf[339]=C_h_intern(&lf[339],9,"map/fixed");
lf[340]=C_h_intern(&lf[340],13,"map/anonymous");
lf[341]=C_h_intern(&lf[341],18,"map-file-to-memory");
lf[342]=C_h_intern(&lf[342],4,"mmap");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[345]=C_h_intern(&lf[345],16,"\003sysnull-pointer");
lf[346]=C_h_intern(&lf[346],22,"unmap-file-from-memory");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[348]=C_h_intern(&lf[348],26,"memory-mapped-file-pointer");
lf[349]=C_h_intern(&lf[349],19,"memory-mapped-file\077");
lf[350]=C_h_intern(&lf[350],17,"change-directory\052");
lf[351]=C_h_intern(&lf[351],5,"error");
lf[352]=C_h_intern(&lf[352],17,"change-file-owner");
lf[353]=C_h_intern(&lf[353],11,"create-fifo");
lf[354]=C_h_intern(&lf[354],14,"create-session");
lf[355]=C_h_intern(&lf[355],20,"create-symbolic-link");
lf[356]=C_h_intern(&lf[356],26,"current-effective-group-id");
lf[357]=C_h_intern(&lf[357],25,"current-effective-user-id");
lf[358]=C_h_intern(&lf[358],27,"current-effective-user-name");
lf[359]=C_h_intern(&lf[359],16,"current-group-id");
lf[360]=C_h_intern(&lf[360],15,"current-user-id");
lf[361]=C_h_intern(&lf[361],9,"file-link");
lf[362]=C_h_intern(&lf[362],9,"file-lock");
lf[363]=C_h_intern(&lf[363],18,"file-lock/blocking");
lf[364]=C_h_intern(&lf[364],11,"file-select");
lf[365]=C_h_intern(&lf[365],14,"file-test-lock");
lf[366]=C_h_intern(&lf[366],13,"file-truncate");
lf[367]=C_h_intern(&lf[367],11,"file-unlock");
lf[368]=C_h_intern(&lf[368],10,"get-groups");
lf[369]=C_h_intern(&lf[369],17,"group-information");
lf[370]=C_h_intern(&lf[370],17,"initialize-groups");
lf[371]=C_h_intern(&lf[371],17,"parent-process-id");
lf[372]=C_h_intern(&lf[372],12,"process-fork");
lf[373]=C_h_intern(&lf[373],16,"process-group-id");
lf[374]=C_h_intern(&lf[374],14,"process-signal");
lf[375]=C_h_intern(&lf[375],18,"read-symbolic-link");
lf[376]=C_h_intern(&lf[376],10,"set-alarm!");
lf[377]=C_h_intern(&lf[377],13,"set-group-id!");
lf[378]=C_h_intern(&lf[378],11,"set-groups!");
lf[379]=C_h_intern(&lf[379],21,"set-process-group-id!");
lf[380]=C_h_intern(&lf[380],19,"set-root-directory!");
lf[381]=C_h_intern(&lf[381],16,"set-signal-mask!");
lf[382]=C_h_intern(&lf[382],12,"set-user-id!");
lf[383]=C_h_intern(&lf[383],11,"signal-mask");
lf[384]=C_h_intern(&lf[384],12,"signal-mask!");
lf[385]=C_h_intern(&lf[385],14,"signal-masked\077");
lf[386]=C_h_intern(&lf[386],14,"signal-unmask!");
lf[387]=C_h_intern(&lf[387],13,"terminal-name");
lf[388]=C_h_intern(&lf[388],16,"user-information");
lf[389]=C_h_intern(&lf[389],17,"utc-time->seconds");
lf[390]=C_h_intern(&lf[390],12,"string->time");
lf[391]=C_h_intern(&lf[391],16,"errno/wouldblock");
lf[392]=C_h_intern(&lf[392],10,"open/fsync");
lf[393]=C_h_intern(&lf[393],11,"open/noctty");
lf[394]=C_h_intern(&lf[394],13,"open/nonblock");
lf[395]=C_h_intern(&lf[395],9,"open/sync");
lf[396]=C_h_intern(&lf[396],10,"perm/isgid");
lf[397]=C_h_intern(&lf[397],10,"perm/isuid");
lf[398]=C_h_intern(&lf[398],10,"perm/isvtx");
lf[399]=C_h_intern(&lf[399],18,"getter-with-setter");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[404]=C_h_intern(&lf[404],26,"set-file-modification-time");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,407,create_ptable());
t2=C_mutate2(&lf[0] /* (set! c1521 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2220,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* loop in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4164,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4171,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t4=C_i_string_ref(((C_word*)t0)[3],t2);
t5=t3;
f_4171(t5,C_eqp(t4,C_make_character(88)));}
else{
t4=t3;
f_4171(t4,C_SCHEME_FALSE);}}

/* change-directory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4195,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[73]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4202,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:816: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t2,lf[73]);}

/* change-file-owner in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5921(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5921,2,t0,t1);}
/* posixwin.scm:1539: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[352],lf[0]);}

/* seconds->local-time in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3477r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3477r(t0,t1,t2);}}

static void C_ccall f_3477r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3481,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:578: current-seconds */
t4=*((C_word*)lf[117]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[115]);
/* posix-common.scm:580: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[116]+1)))(4,*((C_word*)lf[116]+1),t1,t4,C_SCHEME_FALSE);}}

/* create-fifo in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5927,2,t0,t1);}
/* posixwin.scm:1540: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[353],lf[0]);}

/* set-alarm! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6065(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6065,2,t0,t1);}
/* posixwin.scm:1563: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[376],lf[0]);}

/* change-directory* in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5915(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5915,2,t0,t1);}
/* posixwin.scm:1538: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[350],lf[0]);}

/* terminal-size in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4843,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4850,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1119: terminal-port? */
t4=*((C_word*)lf[285]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* user-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6137(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6137,2,t0,t1);}
/* posixwin.scm:1575: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[388],lf[0]);}

/* terminal-name in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6131(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6131,2,t0,t1);}
/* posixwin.scm:1574: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[387],lf[0]);}

/* memory-mapped-file-pointer in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5900,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[342],lf[348]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* memory-mapped-file? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5909(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5909,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[342]));}

/* k4829 in terminal-port? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4831(C_word c,C_word t0,C_word t1){
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

/* string->time in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6149(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6149,2,t0,t1);}
/* posixwin.scm:1577: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[390],lf[0]);}

/* utc-time->seconds in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6143(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6143,2,t0,t1);}
/* posixwin.scm:1576: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[389],lf[0]);}

/* terminal-port? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4825,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[285]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4831,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1115: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(4,*((C_word*)lf[69]+1),t5,t2,C_fix(0));}

/* k4606 in change-file-mode in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4608,2,t0,t1);}
t2=C_chmod(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1017: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4598 in k4606 in change-file-mode in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1018: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[10],lf[268],lf[269],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* _exit in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_4811r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4811r(t0,t1,t2);}}

static void C_ccall f_4811r(C_word t0,C_word t1,C_word t2){
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
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub1071(C_SCHEME_UNDEFINED,t6));}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1071(C_SCHEME_UNDEFINED,t4));}}

/* file-open in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3897(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3897r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3897r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3897r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3901,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_3901(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3901(t6,((C_word*)t0)[2]);}}

/* current-effective-group-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5945(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5945,2,t0,t1);}
/* posixwin.scm:1543: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[356],lf[0]);}

/* k4003 in k4000 in file-write in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4005(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4005,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_exact_2(t2,lf[171]);
t4=C_write(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4011,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4017,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:772: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t7);}
else{
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t4);}}

/* k4000 in file-write in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4005(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4005(t3,C_block_size(((C_word*)t0)[3]));}}

/* create-session in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5933(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5933,2,t0,t1);}
/* posixwin.scm:1541: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[354],lf[0]);}

/* create-symbolic-link in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5939(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5939,2,t0,t1);}
/* posixwin.scm:1542: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[355],lf[0]);}

/* file-execute-access? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4642,3,t0,t1,t2);}
/* posixwin.scm:1032: check */
f_4610(t1,t2,C_fix((C_word)2),lf[272]);}

/* file-write-access? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4636,3,t0,t1,t2);}
/* posixwin.scm:1031: check */
f_4610(t1,t2,C_fix((C_word)4),lf[271]);}

/* file-read-access? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4630,3,t0,t1,t2);}
/* posixwin.scm:1030: check */
f_4610(t1,t2,C_fix((C_word)2),lf[270]);}

/* k4626 in check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4628,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(C_fix(0),t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4620,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}
else{
/* posixwin.scm:1028: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}}

/* k4618 in k4626 in check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5560 in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5562,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1310: ##sys#shell-command */
t4=*((C_word*)lf[310]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* g428 in k3157 in loop in k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3163,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3171,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3183,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:508: irregex-match-substring */
t5=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5568(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5568r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5568r(t0,t1,t2,t3);}}

static void C_ccall f_5568r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
if(C_truep(C_i_nullp(t11))){
/* posixwin.scm:1318: %process */
f_5484(t1,lf[322],C_SCHEME_FALSE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:1318: %process */
f_5484(t1,lf[322],C_SCHEME_FALSE,t2,t5,t9,t13);}}

/* k5564 in k5560 in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5527(2,t3,t2);}

/* check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4610(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4610,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4628,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1027: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,t4);}

/* k3537 in k3531 in seconds->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:592: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(5,*((C_word*)lf[74]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:593: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[119],lf[120],((C_word*)t0)[3]);}}

/* k3531 in seconds->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=t1;
t3=C_i_check_number_2(t2,lf[119]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t2);
t7=stub552(t5,t6);
/* posix-common.scm:587: ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,t7,C_fix(0));}

/* k3181 in g428 in k3157 in loop in k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:508: make-pathname */
t2=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4009 in k4003 in k4000 in file-write in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4015 in k4003 in k4000 in file-write in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:773: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[10],lf[171],lf[172],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2765 in rmdir in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
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
t4=lf[2];
f_2244(6,t4,((C_word*)t0)[2],lf[10],lf[77],lf[78],((C_word*)t0)[3]);}}

/* rmdir in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2763(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2763,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:428: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,t2);}

/* k5334 in k5330 in k5455 in k5451 in k5447 in k5443 in k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[4])?C_i_foreign_pointer_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[5])?C_i_foreign_pointer_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t7=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub1240(C_SCHEME_UNDEFINED,((C_word*)t0)[8],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6));}

/* k5330 in k5455 in k5451 in k5447 in k5443 in k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5332,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[8]);
/* posixwin.scm:1271: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t3,t4);}
else{
t4=t3;
f_5336(2,t4,C_SCHEME_FALSE);}}

/* k5319 in k5315 in k5302 in process-run in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1248: process-spawn */
t2=*((C_word*)lf[308]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[296]+1),((C_word*)t0)[3],t1);}

/* delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2757r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2757r(t0,t1,t2,t3);}}

static void C_ccall f_2757r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2763,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[77]);
if(C_truep(t5)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2786,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:433: find-files */
t9=*((C_word*)lf[81]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t8,t2,lf[82],C_SCHEME_TRUE,lf[83],C_SCHEME_FALSE);}
else{
/* posix-common.scm:445: rmdir */
f_2763(t1,t2);}}

/* k4395 in call-with-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4397,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4408,a[2]=t2,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:885: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}

/* call-with-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4393r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4393r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4393r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4397,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[190]+1),t2,t4);}

/* k5315 in k5302 in process-run in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5317,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1248: ##sys#shell-command-arguments */
t4=*((C_word*)lf[314]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k2943 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
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
t4=lf[2];
f_2244(6,t4,((C_word*)t0)[2],lf[10],lf[84],lf[85],((C_word*)t0)[3]);}}

/* k4386 in a4383 in k4371 in call-with-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a4383 in k4371 in call-with-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4384r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4384r(t0,t1,t2);}}

static void C_ccall f_4384r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4388,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:879: close-input-pipe */
t4=*((C_word*)lf[191]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* process-run in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5300(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5300r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5300r(t0,t1,t2,t3);}}

static void C_ccall f_5300r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5304,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_5304(t6,C_u_i_car(t5));}
else{
t5=t4;
f_5304(t5,C_SCHEME_FALSE);}}

/* k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3133,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
/* posix-common.scm:503: directory */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
/* posix-common.scm:503: directory */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[95],C_SCHEME_TRUE);}}

/* k5302 in process-run in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5304(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5304,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm:1247: process-spawn */
t2=*((C_word*)lf[308]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[296]+1),((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1248: ##sys#shell-command */
t3=*((C_word*)lf[310]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_check_string_2(t2,lf[28]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),t11,C_fix(256),C_make_character(32));}

/* directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2963r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2963r(t0,t1,t2);}}

static void C_ccall f_2963r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2967,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:466: current-directory */
t5=*((C_word*)lf[72]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_2967(2,t5,C_i_car(t3));}}

/* k3157 in loop in k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3159,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:500: g428 */
t3=t2;
f_3163(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* posix-common.scm:510: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3142(t4,((C_word*)t0)[5],t3);}}

/* a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3129,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3203,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t8=t3;
/* posix-common.scm:502: make-pathname */
t9=*((C_word*)lf[88]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,C_SCHEME_FALSE,t8,t4);}
else{
/* posix-common.scm:502: make-pathname */
t8=*((C_word*)lf[88]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,C_SCHEME_FALSE,lf[97],t4);}}

/* a3122 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
/* posix-common.scm:501: decompose-pathname */
t2=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* get-groups in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6017,2,t0,t1);}
/* posixwin.scm:1555: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[368],lf[0]);}

/* file-unlock in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6011(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6011,2,t0,t1);}
/* posixwin.scm:1554: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[367],lf[0]);}

/* k3173 in k3169 in g428 in k3157 in loop in k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3175,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3169 in g428 in k3157 in loop in k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:509: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3142(t5,t3,t4);}

/* k5226 in process-spawn in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=C_spawnvpe(((C_word*)t0)[3],t1);
/* posixwin.scm:1227: $exec-teardown */
f_5124(((C_word*)t0)[4],lf[308],lf[309],((C_word*)t0)[5],t2);}
else{
t2=C_spawnvp(((C_word*)t0)[3],t1);
/* posixwin.scm:1227: $exec-teardown */
f_5124(((C_word*)t0)[4],lf[308],lf[309],((C_word*)t0)[5],t2);}}

/* file-truncate in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6005,2,t0,t1);}
/* posixwin.scm:1553: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[366],lf[0]);}

/* k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3140,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li36),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3142(t5,((C_word*)t0)[6],t1);}

/* loop in k3138 in k3131 in a3128 in conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3142,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* posix-common.scm:504: conc-loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3108(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3159,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:505: irregex-match */
t5=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[6],t4);}}

/* initialize-groups in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6029,2,t0,t1);}
/* posixwin.scm:1557: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[370],lf[0]);}

/* k3915 in k3912 in k3899 in file-open in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* group-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6023(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6023,2,t0,t1);}
/* posixwin.scm:1556: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[369],lf[0]);}

/* k3912 in k3899 in file-open in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3914,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3917,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3923,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:739: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* process-spawn in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_5206r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5206r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5206r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(6);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5228,a[2]=t11,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1226: $exec-setup */
t19=lf[303];
f_5092(t19,t18,lf[308],t3,t6,t11,t15);}

/* k5872 in unmap-file-from-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5874(C_word t0,C_word t1){
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
t5=stub1471(C_SCHEME_UNDEFINED,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* posixwin.scm:1521: posix-error */
t7=lf[2];
f_2244(7,t7,((C_word*)t0)[3],lf[10],lf[346],lf[347],((C_word*)t0)[2],t1);}}

/* file-stat in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_2302r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2302r(t0,t1,t2,t3);}}

static void C_ccall f_2302r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2309,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:242: ##sys#stat */
f_2262(t6,t2,t5,C_SCHEME_TRUE,lf[16]);}

/* file-close in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3932,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[166]);
t4=C_close(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:747: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k2307 in file-stat in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2309,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),*((C_word*)lf[17]+1),*((C_word*)lf[18]+1)));}

/* k3899 in file-open in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3901,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[164]);
t4=C_i_check_exact_2(((C_word*)t0)[3],lf[164]);
t5=C_i_check_exact_2(t2,lf[164]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3914,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:737: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,((C_word*)t0)[2],lf[164]);}

/* k5451 in k5447 in k5443 in k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[8])?C_fix(0):C_fix(1));
t5=(C_truep(((C_word*)t0)[9])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[10])){
/* posixwin.scm:1284: + */
C_plus(5,0,t3,t4,t5,C_fix(0));}
else{
/* posixwin.scm:1284: + */
C_plus(5,0,t3,t4,t5,C_fix(4));}}

/* k2326 in file-access-time in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2322,2,t0,t1);}
t2=C_mutate2((C_word*)lf[19]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate2((C_word*)lf[20]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2324,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[21]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2330,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[22]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2336,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[23]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[24]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2348,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[25]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2354,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[33]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2441,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[34]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[35]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2461,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[36]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[37]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[38]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2491,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[39]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2501,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[40]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t17=C_mutate2((C_word*)lf[41]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t18=C_mutate2((C_word*)lf[42]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t19=C_mutate2((C_word*)lf[43]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2514,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6210,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:328: getter-with-setter */
t22=*((C_word*)lf[399]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t20,t21,*((C_word*)lf[43]+1),lf[403]);}

/* file-access-time in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2324,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2328,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:263: ##sys#stat */
f_2262(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[20]);}

/* k5443 in k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5445,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1283: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[319]+1)))(6,*((C_word*)lf[319]+1),t3,((C_word*)t0)[10],C_fix(0),C_SCHEME_FALSE,lf[320]);}

/* k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5441,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1283: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[319]+1)))(6,*((C_word*)lf[319]+1),t3,((C_word*)t0)[10],C_fix(0),C_SCHEME_FALSE,lf[320]);}

/* k2332 in file-change-time in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* k5455 in k5451 in k5447 in k5443 in k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5457,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=((C_word*)t0)[8];
t9=t1;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5332,a[2]=t5,a[3]=t6,a[4]=t7,a[5]=t8,a[6]=t9,a[7]=t2,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t11=C_i_foreign_string_argumentp(t3);
/* posixwin.scm:1271: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t10,t11);}
else{
t11=t10;
f_5332(2,t11,C_SCHEME_FALSE);}}

/* file-owner in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2336,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:265: ##sys#stat */
f_2262(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);}

/* file-change-time in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2330,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2334,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:264: ##sys#stat */
f_2262(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);}

/* k4750 in k4764 in port->fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1080: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[65],lf[281],((C_word*)t0)[3]);}

/* k5432 in k5402 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1293: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[137],((C_word*)t0)[3],lf[318],((C_word*)t0)[4]);}

/* file-permissions in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2342,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:266: ##sys#stat */
f_2262(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[23]);}

/* file-size in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2348,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2352,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:267: ##sys#stat */
f_2262(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);}

/* k5447 in k5443 in k5439 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5449,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1283: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[319]+1)))(6,*((C_word*)lf[319]+1),t3,((C_word*)t0)[10],C_fix(0),C_SCHEME_FALSE,lf[320]);}

/* k2344 in file-permissions in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* k2338 in file-owner in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* a4377 in k4371 in call-with-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4378,2,t0,t1);}
/* posixwin.scm:877: proc */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[3]);}

/* k4782 in k4773 in duplicate-fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1094: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[70],lf[282],((C_word*)t0)[3]);}

/* k4371 in call-with-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4373,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4378,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4384,a[2]=t2,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:876: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}

/* k3617 in time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3619,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[125]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:613: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,((C_word*)t0)[2],lf[125]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3666,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:615: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),t3,((C_word*)t0)[5],C_make_character(0));}}

/* time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_3612r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3612r(t0,t1,t2,t3);}}

static void C_ccall f_3612r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3619,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:609: check-time-vector */
f_3458(t7,lf[125],t2);}

/* k5420 in k5416 in k5412 in k5402 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1286: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5]))),t1);}

/* call-with-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4369r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4369r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4369r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4373,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t5,*((C_word*)lf[186]+1),t2,t4);}

/* k4776 in k4773 in duplicate-fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4773 in duplicate-fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4775(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4775,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4778,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4784,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1093: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k4359 in k4356 in close-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3626 in k3617 in time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posix-common.scm:614: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[125],lf[126],((C_word*)t0)[3]);}}

/* local-timezone-abbreviation in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4798,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1065(t2);
/* posixwin.scm:1101: ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,C_fix(0));}

/* k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2563,2,t0,t1);}
t2=C_mutate2((C_word*)lf[48]+1 /* (set! file-position ...) */,t1);
t3=C_mutate2((C_word*)lf[49]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t4=C_mutate2((C_word*)lf[50]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t5=C_mutate2((C_word*)lf[51]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2605,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[63]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2620,a[2]=t9,a[3]=t7,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate2((C_word*)lf[64]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2634,a[2]=t9,a[3]=t7,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate2((C_word*)lf[65]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[70]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[72]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[77]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2757,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[84]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[28]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[92]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[81]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3405,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6179,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6204,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:559: getter-with-setter */
t25=*((C_word*)lf[399]+1);
((C_proc5)(void*)(*((C_word*)t25+1)))(5,t25,t22,t23,t24,lf[400]);}

/* mode in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2568(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2568,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2576,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[52]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posix-common.scm:361: ##sys#error */
t10=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t5,lf[54],t7);}
else{
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[55],t4);}}
else{
/* posix-common.scm:362: ##sys#error */
t9=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,lf[56],t7);}}
else{
if(C_truep(t2)){
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[57],t4);}
else{
/* posix-common.scm:357: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t1,lf[58],t4);}}}

/* glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_3102r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3102r(t0,t1,t2);}}

static void C_ccall f_3102r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3108,a[2]=t4,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3108(t6,t1,t2);}

/* unmap-file-from-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5867(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5867r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5867r(t0,t1,t2,t3);}}

static void C_ccall f_5867r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_check_structure_2(t2,lf[342],lf[346]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5874,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_5874(t7,C_u_i_car(t6));}
else{
t6=t5;
f_5874(t6,C_slot(t2,C_fix(2)));}}

/* f_2696 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2696r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2696r(t0,t1,t2,t3);}}

static void C_ccall f_2696r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[70]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2703,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_2703(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[70]);
t8=t5;
f_2703(t8,C_dup2(t2,t6));}}

/* conc-loop in glob in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3108,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3123,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:500: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* k2688 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posix-common.scm:395: posix-error */
t2=lf[2];
f_2244(6,t2,((C_word*)t0)[2],lf[14],lf[65],lf[67],((C_word*)t0)[3]);}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:393: posix-error */
t4=lf[2];
f_2244(6,t4,t3,lf[10],lf[65],lf[68],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k3664 in k3617 in time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3666,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub581(t3,t2,t4);
/* posix-common.scm:605: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],t5,C_fix(0));}
else{
t4=stub581(t3,t2,C_SCHEME_FALSE);
/* posix-common.scm:605: ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,C_fix(0));}}

/* directory? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2501,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:300: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k3363 in k3356 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:544: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4764 in port->fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4766,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posixwin.scm:1082: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[14],lf[65],lf[280],((C_word*)t0)[3]);}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4752,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1079: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* duplicate-fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4768r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4768r(t0,t1,t2,t3);}}

static void C_ccall f_4768r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[70]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4775,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_4775(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[70]);
t8=t5;
f_4775(t8,C_dup2(t2,t6));}}

/* k2671 in k2688 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k2507 in directory? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[28],t1));}

/* k2516 in set-file-position! in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2518(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2518,NULL,2,t0,t1);}
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[43]);
t4=C_i_check_exact_2(t2,lf[43]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:318: port? */
t7=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* set-file-position! in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2514r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2514r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2514r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2518,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_2518(t7,C_u_i_car(t6));}
else{
t6=t5;
f_2518(t6,C_fix((C_word)SEEK_SET));}}

/* unsetenv in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3691(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3691,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[129]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3699,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:632: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t2,lf[129]);}

/* k3697 in unsetenv in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* for-each-loop292 in k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2814,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2824,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:433: g293 */
t5=((C_word*)t0)[3];
f_2787(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2822 in for-each-loop292 in k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2814(t3,((C_word*)t0)[4],t2);}

/* k5412 in k5402 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5414,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm:1288: open-output-file* */
t4=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[7]))));}
else{
t4=t3;
f_5418(2,t4,C_SCHEME_FALSE);}}

/* setenv in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3674(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3674,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[128]);
t5=C_i_check_string_2(t3,lf[128]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3685,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:627: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,lf[128]);}

/* k5402 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5404,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:1287: open-input-file* */
t3=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[9]))));}
else{
t3=t2;
f_5414(2,t3,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1292: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}

/* k5416 in k5412 in k5402 in k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5418,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1290: open-input-file* */
t4=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6]))));}
else{
/* posixwin.scm:1286: values */
C_values(6,0,((C_word*)t0)[2],((C_word*)t0)[3],t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))),C_SCHEME_FALSE);}}

/* k4312 in open-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixwin.scm:850: check */
f_4235(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* seconds->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3529r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3529r(t0,t1,t2);}}

static void C_ccall f_3529r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3533,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:588: current-seconds */
t4=*((C_word*)lf[117]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=t3;
f_3533(2,t4,C_i_car(t2));}}

/* k3687 in k3683 in setenv in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k3683 in setenv in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3685,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3689,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:627: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,((C_word*)t0)[3],lf[128]);}

/* k2879 in loop in k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2881,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:460: pathname-directory */
t4=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2882 in k2879 in loop in k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2884,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2900,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:448: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t3,lf[84]);}

/* k4305 in open-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:850: check */
f_4235(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* change-file-mode in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4584(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4584,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[268]);
t5=C_i_check_exact_2(t3,lf[268]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4608,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1016: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,lf[268]);}

/* close-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4333(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4333,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[191]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4340,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:860: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* k6224 in a6209 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[45]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
f_6214(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
f_6214(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];
f_6214(2,t3,t2);}
else{
/* posix-common.scm:337: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[48],lf[402],((C_word*)t0)[2]);}}}

/* close-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4351,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[193]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4358,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:868: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* k6249 in a6246 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6251,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* k4322 in open-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4324,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixwin.scm:850: check */
f_4235(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* doloop1147 in build-exec-argvec in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5056(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5056,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm:1198: argvec-setter */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5075,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixwin.scm:1201: argvec-setter */
t8=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t8))(5,t8,t6,t3,t4,t7);}}

/* a6252 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_6253,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[404]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6273,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=t5;
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6263,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=C_i_foreign_string_argumentp(t7);
/* posix-common.scm:255: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t9,t10);}
else{
t10=t6;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub120(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t8));}}

/* k4338 in close-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:862: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[10],lf[191],lf[192],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* process* in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5628(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_5628r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5628r(t0,t1,t2,t3);}}

static void C_ccall f_5628r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
if(C_truep(C_i_nullp(t11))){
/* posixwin.scm:1321: %process */
f_5484(t1,lf[323],C_SCHEME_TRUE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:1321: %process */
f_5484(t1,lf[323],C_SCHEME_TRUE,t2,t5,t9,t13);}}

/* k4356 in close-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:870: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[10],lf[193],lf[194],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* a6246 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6247(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6247,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6251,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:252: ##sys#stat */
f_2262(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);}

/* build-exec-argvec in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5044(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5044,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(t3)){
t6=C_i_check_list_2(t3,t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5056,a[2]=t4,a[3]=t2,a[4]=t8,a[5]=((C_word)li124),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_5056(t10,t1,t3,t5);}
else{
/* posixwin.scm:1202: argvec-setter */
t6=t4;
((C_proc5)C_fast_retrieve_proc(t6))(5,t6,t1,t5,C_SCHEME_FALSE,C_fix(0));}}

/* local-time->seconds in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3567,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3571,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:598: check-time-vector */
f_3458(t3,lf[121],t2);}

/* socket? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2491,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:297: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k4068 in k4064 in loop in k4055 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4070,2,t0,t1);}
t2=C_a_i_bitwise_ior(&a,2,C_a_i_bitwise_ior(&a,2,*((C_word*)lf[142]+1),*((C_word*)lf[145]+1)),*((C_word*)lf[147]+1));
t3=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IWRITE));
t4=C_open(t1,t2,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]))){
t6=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* posixwin.scm:807: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_4062(t7,((C_word*)t0)[5],t6);}
else{
/* posixwin.scm:808: posix-error */
t6=lf[2];
f_2244(6,t6,((C_word*)t0)[5],lf[10],lf[174],lf[176],((C_word*)t0)[6]);}}
else{
/* posixwin.scm:809: values */
C_values(4,0,((C_word*)t0)[5],t4,((C_word*)t0)[7]);}}

/* k4341 in k4338 in close-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5030 in setenv in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1136(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* f_2481 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2481,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:294: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2497 in socket? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[32],t1));}

/* loop in k4055 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4062,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4066,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4109,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=((C_word*)t0)[9],a[7]=((C_word)li76),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_4109(t8,t3,t4);}

/* k4064 in loop in k4055 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:802: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[7],lf[164]);}

/* k3500 in seconds->utc-time in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[118]);
/* posix-common.scm:584: ##sys#decode-seconds */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[116]+1)))(4,*((C_word*)lf[116]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k2457 in symbolic-link? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[27],t1));}

/* character-device? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2471,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2479,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:291: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* symbolic-link? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2451,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2459,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:285: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2487 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[31],t1));}

/* a6209 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6210(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6210,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6214,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6226,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:330: port? */
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4055 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4057,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li77),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_4062(t5,((C_word*)t0)[9],C_fix(1));}

/* k6212 in a6209 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6214,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6217,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
/* posix-common.scm:339: posix-error */
t4=lf[2];
f_2244(6,t4,t3,lf[10],lf[48],lf[401],((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k6215 in k6212 in a6209 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4054,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4151,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4155,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:789: pathname-directory */
t6=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}

/* k2467 in block-device? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[30],t1));}

/* block-device? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2461,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2469,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:288: file-type */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2477 in character-device? in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[29],t1));}

/* a6203 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6204(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6204,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[112]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_umask(t2));}

/* map-file-to-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7r,(void*)f_5811r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_5811r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_5811r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5815,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_5815(2,t10,t2);}
else{
/* posixwin.scm:1506: ##sys#null-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[345]+1)))(2,*((C_word*)lf[345]+1),t8);}}

/* k5813 in map-file-to-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5815,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t4=((C_word*)t0)[7];
t5=t3;
f_5818(t5,C_u_i_car(t4));}
else{
t4=t3;
f_5818(t4,C_fix(0));}}

/* k5395 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5397(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5397,2,t0,t1);}
t2=t1;
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=((*(int *)C_data_pointer(t3))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(1));
t6=((*(int *)C_data_pointer(t5))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t7=C_a_i_bytevector(&a,1,C_fix(1));
t8=((*(int *)C_data_pointer(t7))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t9=C_a_i_bytevector(&a,1,C_fix(1));
t10=((*(int *)C_data_pointer(t9))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5404,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=t7,a[10]=((C_word*)t0)[6],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5441,a[2]=t11,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=t9,a[9]=t7,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1282: ##sys#make-locative */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[319]+1)))(6,*((C_word*)lf[319]+1),t12,t3,C_fix(0),C_SCHEME_FALSE,lf[320]);}

/* ##sys#process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...){
C_word tmp;
C_word t9;
va_list v;
C_word *a,c2=c;
C_save_rest(t8,c2,9);
if(c<9) C_bad_min_argc_2(c,9,t0);
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr9r,(void*)f_5390r,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
else{
a=C_alloc((c-9)*3);
t9=C_restore_rest(a,C_rest_count(0));
f_5390r(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}}

static void C_ccall f_5390r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(14);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5397,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5473,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=C_a_i_cons(&a,2,t3,t4);
/* posixwin.scm:1277: $quote-args-list */
f_4925(t13,t14,t11);}

/* k5816 in k5813 in map-file-to-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5818(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5818,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_blockp(((C_word*)t0)[6]))){
if(C_truep(C_specialp(((C_word*)t0)[6]))){
t4=t3;
f_5821(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:1509: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[14],lf[341],lf[344],((C_word*)t0)[6]);}}
else{
/* posixwin.scm:1509: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[14],lf[341],lf[344],((C_word*)t0)[6]);}}

/* set-root-directory! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6089(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6089,2,t0,t1);}
/* posixwin.scm:1567: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[380],lf[0]);}

/* scan in k3719 in loop in get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3729(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3729,NULL,3,t0,t1,t2);}
t3=C_subchar(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(61),t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3755,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:643: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(5,*((C_word*)lf[74]+1),t4,((C_word*)t0)[2],C_fix(0),t2);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posix-common.scm:646: scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k3719 in loop in get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3721,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3729,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3729(t6,((C_word*)t0)[4],C_fix(0));}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}

/* set-process-group-id! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6083(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6083,2,t0,t1);}
/* posixwin.scm:1566: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[379],lf[0]);}

/* file-read in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3951r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3951r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3951r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[168]);
t6=C_i_check_exact_2(t3,lf[168]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3961,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_3961(2,t9,C_u_i_car(t8));}
else{
t8=t3;
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),t7,t8,C_make_character(32));}}

/* set-signal-mask! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6095(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6095,2,t0,t1);}
/* posixwin.scm:1568: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[381],lf[0]);}

/* k3921 in k3912 in k3899 in file-open in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:740: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[10],lf[164],lf[165],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3569 in local-time->seconds in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:599: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),t2,((C_word*)t0)[4],C_make_character(0));}

/* k3573 in k3569 in local-time->seconds in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:600: fp= */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[124],t2);}

/* open-input-file* in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4706(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4706r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4706r(t0,t1,t2,t3);}}

static void C_ccall f_4706r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[63]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4718,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1067: mode */
f_4651(t5,C_SCHEME_TRUE,t3,lf[63]);}

/* k4702 in k4690 in check in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5831 in k5819 in k5816 in k5813 in map-file-to-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5833,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm:1512: posix-error */
t2=lf[2];
f_2244(11,t2,((C_word*)t0)[2],lf[10],lf[341],lf[343],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[342],((C_word*)t0)[10],((C_word*)t0)[4]));}}

/* k3974 in k3962 in k3959 in file-read in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:760: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[10],lf[168],lf[169],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2630 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:375: check */
f_2605(((C_word*)t0)[4],lf[63],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3579 in k3573 in k3569 in local-time->seconds in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:601: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[121],lf[122],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* set-groups! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6077(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6077,2,t0,t1);}
/* posixwin.scm:1565: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[378],lf[0]);}

/* f_2634 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2634r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2634r(t0,t1,t2,t3);}}

static void C_ccall f_2634r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2646,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:379: mode */
f_2568(t5,C_SCHEME_FALSE,t3,lf[64]);}

/* k5009 in setarg in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub1126(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* set-group-id! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6071(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6071,2,t0,t1);}
/* posixwin.scm:1564: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[377],lf[0]);}

/* k5819 in k5816 in k5813 in map-file-to-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5821,2,t0,t1);}
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
t13=stub1438(t6,t7,t8,t9,t10,t11,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[8],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5833,a[2]=t15,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t14,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t14)){
t17=C_i_foreign_pointer_argumentp(t14);
t18=t16;
f_5833(t18,stub1450(C_SCHEME_UNDEFINED,t17));}
else{
t17=t16;
f_5833(t17,stub1450(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k5825 in k5819 in k5816 in k5813 in map-file-to-memory in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5827,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record3(&a,3,lf[342],((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3943 in file-close in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:748: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[10],lf[166],lf[167],((C_word*)t0)[3]);}

/* process-group-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6047(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6047,2,t0,t1);}
/* posixwin.scm:1560: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[373],lf[0]);}

/* k2644 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2646,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:379: check */
f_2605(((C_word*)t0)[4],lf[64],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* f_2648 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_2648,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[65]);
t5=C_slot(t2,C_fix(7));
t6=C_eqp(lf[32],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:389: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[66]+1)))(3,*((C_word*)lf[66]+1),t7,t2);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2690,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:390: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(4,*((C_word*)lf[69]+1),t7,t2,C_fix(0));}}

/* setenv in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5023,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5032,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* posixwin.scm:1190: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t8);}
else{
t8=C_i_foreign_fixnum_argumentp(t4);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub1136(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t8));}}

/* process-fork in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6041(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6041,2,t0,t1);}
/* posixwin.scm:1559: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[372],lf[0]);}

/* read-symbolic-link in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6059(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6059,2,t0,t1);}
/* posixwin.scm:1562: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[375],lf[0]);}

/* process-signal in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6053(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6053,2,t0,t1);}
/* posixwin.scm:1561: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[374],lf[0]);}

/* file-write in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3995r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3995r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3995r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[171]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4002,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_4002(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:767: ##sys#signal-hook */
t7=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[14],lf[171],lf[173],t3);}}
else{
/* posixwin.scm:767: ##sys#signal-hook */
t7=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[14],lf[171],lf[173],t3);}}

/* k4716 in open-input-file* in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4718,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posixwin.scm:1067: check */
f_4688(((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3965 in k3962 in k3959 in file-read in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3967,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3962 in k3959 in file-read in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3964,2,t0,t1);}
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3967,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3976,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:759: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t5);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list2(&a,2,((C_word*)t0)[3],t2));}}

/* k3959 in file-read in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3961,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t4=t3;
f_3964(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm:756: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[14],lf[168],lf[170],t2);}}
else{
/* posixwin.scm:756: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[14],lf[168],lf[170],t2);}}

/* k4730 in open-output-file* in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4732,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posixwin.scm:1071: check */
f_4688(((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* setarg in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5002,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5011,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* posixwin.scm:1189: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(3,*((C_word*)lf[12]+1),t7,t8);}
else{
t8=C_i_foreign_fixnum_argumentp(t4);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub1126(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t8));}}

/* k4744 in k4764 in port->fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* parent-process-id in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6035(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6035,2,t0,t1);}
/* posixwin.scm:1558: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[371],lf[0]);}

/* ##sys#process-wait in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5688,4,t0,t1,t2,t3);}
if(C_truep(C_process_wait(t2,t3))){
/* posixwin.scm:1327: values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm:1328: values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* port->fileno in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4734,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[65]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4766,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1076: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[69]+1)))(4,*((C_word*)lf[69]+1),t5,t2,C_fix(0));}

/* fifo? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6156(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6156,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* open-output-file* in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4720(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4720r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4720r(t0,t1,t2,t3);}}

static void C_ccall f_4720r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4732,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1071: mode */
f_4651(t5,C_SCHEME_FALSE,t3,lf[64]);}

/* loop in loop in $quote-args-list in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static C_word C_fcall f_4939(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t1);
if(C_truep(C_u_i_char_whitespacep(t3))){
return(C_SCHEME_TRUE);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* k3636 in k3617 in time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3638,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3642,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:613: ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[76]+1)))(4,*((C_word*)lf[76]+1),t3,((C_word*)t0)[4],C_make_character(0));}

/* $quote-args-list in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_4925(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4925,NULL,3,t1,t2,t3);}
if(C_truep(t3)){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4968,a[2]=t5,a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4968(t7,t1,t2,C_SCHEME_END_OF_LIST);}}

/* a3297 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in ... */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3306,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[7])){
/* posix-common.scm:541: make-pathname */
t4=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[100]);}
else{
/* posix-common.scm:541: make-pathname */
t4=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[101]);}}

/* a3292 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in ... */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3293,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3289 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in ... */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:539: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3640 in k3636 in k3617 in time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3642,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub591(t3,t2,((C_word*)t0)[3],t4);
/* posix-common.scm:606: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[4],t5,C_fix(0));}
else{
t4=stub591(t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);
/* posix-common.scm:606: ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],t4,C_fix(0));}}

/* k3643 in k3617 in time->string in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:617: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(5,*((C_word*)lf[74]+1),((C_word*)t0)[2],t1,C_fix(0),t3);}
else{
/* posix-common.scm:618: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[125],lf[127],((C_word*)t0)[3]);}}

/* k4499 in create-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:921: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[10],lf[201],lf[202]);}

/* k3270 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 in ... */
static void C_ccall f_3272(C_word c,C_word t0,C_word t1){
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
f_3228(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* $exec-setup in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5092,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t3,t2);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5099,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=t6,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1205: pathname-strip-directory */
t9=*((C_word*)lf[304]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}

/* k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 in ... */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3281,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3293,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3326,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:540: ##sys#dynamic-wind */
t11=*((C_word*)lf[102]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:543: pproc */
t4=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* k5097 in $exec-setup in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_block_size(t1);
/* posixwin.scm:1206: setarg */
t4=((C_word*)t0)[8];
f_5002(5,t4,t2,C_fix(0),t1,t3);}

/* k5073 in doloop1147 in build-exec-argvec in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1){
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
f_5056(t5,((C_word*)t0)[5],t3,t4);}

/* k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2982,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:469: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[91]+1)))(2,*((C_word*)lf[91]+1),t3);}

/* k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2985,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2988,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:470: ##sys#make-pointer */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[91]+1)))(2,*((C_word*)lf[91]+1),t3);}

/* k2986 in k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2988,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:473: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,((C_word*)t0)[4],lf[28]);}

/* k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3456,2,t0,t1);}
t2=C_mutate2((C_word*)lf[112]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate2(&lf[113] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[115]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[118]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[119]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3529,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t7=C_fix((C_word)sizeof(struct tm));
t8=C_mutate2((C_word*)lf[121]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3567,a[2]=t7,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t9=C_fix((C_word)sizeof(struct tm));
t10=C_mutate2((C_word*)lf[125]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3612,a[2]=t9,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate2((C_word*)lf[128]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3674,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[129]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3691,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[130]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3711,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[131]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6170,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:658: getter-with-setter */
t17=*((C_word*)lf[399]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t15,t16,*((C_word*)lf[131]+1));}

/* check-time-vector in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3458(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3458,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:576: ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[114],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5484(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5484,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5486,a[2]=t2,a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5527,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t10,a[8]=t1,a[9]=t11,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:1306: chkstrlst */
t14=t11;
f_5486(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5562,a[2]=t9,a[3]=t8,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1309: ##sys#shell-command-arguments */
t16=*((C_word*)lf[314]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,((C_word*)t8)[1]);}}

/* f_3451 in a3448 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3451,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* chkstrlst in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_5486(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5486,NULL,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[2],a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5500,a[2]=t4,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_5500(t6,t5));}

/* k5471 in process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1277: string-intersperse */
t2=*((C_word*)lf[321]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4130 in suffix-loop in loop in k4055 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_subchar(((C_word*)t0)[2],t1);
t3=C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixwin.scm:800: suffix-loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4109(t5,((C_word*)t0)[6],t4);}

/* k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3226,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3228,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li43),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3228(t5,((C_word*)t0)[8],t1,((C_word*)t0)[9]);}

/* loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3228(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3228,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3247,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t5,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* posix-common.scm:534: directory? */
t9=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}}

/* k2264 in stat in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:237: posix-error */
t2=lf[2];
f_2244(6,t2,((C_word*)t0)[3],lf[10],((C_word*)t0)[4],lf[11],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}}

/* ##sys#stat in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2262(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2262,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2266,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;
f_2266(2,t7,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2290,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2297,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:226: ##sys#platform-fixup-pathname */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t8,t2);}
else{
/* posix-common.scm:233: ##sys#signal-hook */
t7=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[14],t5,lf[15],t2);}}}

/* a3437 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3438,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* a3434 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3435,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a3431 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3432,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2990 in k2986 in k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2992,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posix-common.scm:475: posix-error */
t3=lf[2];
f_2244(6,t3,((C_word*)t0)[3],lf[10],lf[28],lf[90],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3006(t6,((C_word*)t0)[3]);}}

/* k2295 in stat in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:225: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2288 in stat in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2266(2,t2,(C_truep(((C_word*)t0)[3])?C_lstat(t1):C_stat(t1)));}

/* k4149 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
/* posixwin.scm:795: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],lf[10],lf[174],lf[178],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
f_4057(2,t4,t3);}}
else{
/* posixwin.scm:793: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[10],lf[174],lf[179],((C_word*)t0)[5]);}}

/* k4153 in k4052 in k4046 in k4043 in file-mkstemp in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* posixwin.scm:789: directory-exists? */
t3=*((C_word*)lf[180]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* posixwin.scm:789: directory-exists? */
t2=*((C_word*)lf[180]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[181]);}}

/* k5739 in k5735 in k5731 in k5727 in system-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5741,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,lf[328],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1));}

/* k5742 in system-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:1354: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[327],lf[329]);}

/* current-user-name in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5749,2,t0,t1);}
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_username),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5759,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1362: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}

/* loop in k2990 in k2986 in k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3006,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_block_size(((C_word*)t0)[4]);
t4=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3020,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:483: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(5,*((C_word*)lf[74]+1),t5,((C_word*)t0)[4],C_fix(0),t4);}}

/* k3267 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 in ... */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:537: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5731 in k5727 in system-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k5735 in k5731 in k5727 in system-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5737,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k3370 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:528: glob */
t2=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a4459 in k4453 in with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4460,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[200]+1));
t3=C_mutate2((C_word*)lf[200]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a4464 in k4453 in with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4471,a[2]=((C_word*)t0)[2],a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:905: ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[3],t2);}

/* k5727 in system-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5729,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k3380 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3382,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
f_3219(t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=t2,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));}

/* f_3383 in k3380 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3383,3,t0,t1,t2);}
/* posix-common.scm:527: irregex-match */
t3=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* posix-common.scm:535: pathname-file */
t3=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:544: pproc */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k4490 in create-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm:922: values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* k2616 in check in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_3391 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3391,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3399 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3399,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]));}

/* file-select in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5993,2,t0,t1);}
/* posixwin.scm:1551: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[364],lf[0]);}

/* file-test-lock in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5999,2,t0,t1);}
/* posixwin.scm:1552: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[365],lf[0]);}

/* k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=C_mutate2(&lf[2] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2244,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[8]+1 /* (set! ##sys#posix-error ...) */,lf[2]);
t4=C_mutate2(&lf[9] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[16]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2302,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6247,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6253,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:250: getter-with-setter */
t9=*((C_word*)lf[399]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t6,t7,t8,lf[406]);}

/* a3325 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in ... */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3326,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* get-host-name in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5706,2,t0,t1);}
if(C_truep(C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm:1343: ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[325],lf[326]);}}

/* sleep in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5700,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[324]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_sleep(t2));}

/* k3318 in a3297 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in ... */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:541: glob */
t2=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_2620 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2620r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2620r(t0,t1,t2,t3);}}

static void C_ccall f_2620r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[63]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2632,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:375: mode */
f_2568(t5,C_SCHEME_TRUE,t3,lf[63]);}

/* file-lock/blocking in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
/* posixwin.scm:1550: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[363],lf[0]);}

/* file-lock in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5981,2,t0,t1);}
/* posixwin.scm:1549: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[362],lf[0]);}

/* k3040 in k3030 in k3018 in loop in k2990 in k2986 in k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3042,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3337 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in ... */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
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
f_3228(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k3334 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in ... */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:543: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a4470 in a4464 in k4453 in with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4471(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4471r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4471r(t0,t1,t2);}}

static void C_ccall f_4471r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4475,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:908: close-output-pipe */
t4=*((C_word*)lf[193]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4473 in a4470 in a4464 in k4453 in with-output-to-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* file-link in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5975,2,t0,t1);}
/* posixwin.scm:1548: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[361],lf[0]);}

/* k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3345,2,t0,t1);}
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3272,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:537: pproc */
t5=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:538: lproc */
t4=((C_word*)t0)[12];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[7]);}}

/* k3018 in loop in k2990 in k2986 in k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3020,2,t0,t1);}
t2=t1;
t3=C_i_string_ref(t2,C_fix(0));
t4=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t5=(C_truep(t4)?C_subchar(t2,C_fix(1)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_make_character(46),t3);
if(C_truep(t7)){
t8=C_i_not(t5);
if(C_truep(t8)){
t9=t6;
f_3032(t9,t8);}
else{
t9=C_eqp(C_make_character(46),t5);
if(C_truep(t9)){
t10=C_eqp(C_fix(2),((C_word*)t0)[2]);
t11=t6;
f_3032(t11,(C_truep(t10)?t10:C_i_not(((C_word*)t0)[5])));}
else{
t10=t6;
f_3032(t10,C_i_not(((C_word*)t0)[5]));}}}
else{
t8=t6;
f_3032(t8,C_SCHEME_FALSE);}}

/* posix-error in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_2244r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2244r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2244r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2248,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:183: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t6);}

/* signal-unmask! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6125(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6125,2,t0,t1);}
/* posixwin.scm:1573: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[386],lf[0]);}

/* k2246 in posix-error in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2259,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub67(t4,t5);
/* posix-common.scm:180: ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k3356 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3358,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:544: action */
t3=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
/* posix-common.scm:545: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[98]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[99]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:535: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* posix-common.scm:536: symbolic-link? */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k3030 in k3018 in loop in k2990 in k2986 in k2983 in k2980 in k2965 in directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3032(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3032,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posix-common.scm:490: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3006(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:491: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3006(t3,t2);}}

/* k2662 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}

/* g1338 in chkstrlst in %process in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static C_word C_fcall f_5491(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* signal-mask in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6107(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6107,2,t0,t1);}
/* posixwin.scm:1570: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[383],lf[0]);}

/* k2221 in k2218 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* set-user-id! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6101(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6101,2,t0,t1);}
/* posixwin.scm:1569: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[382],lf[0]);}

/* k2224 in k2221 in k2218 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2218 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2253 in k2246 in posix-error in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[2],*((C_word*)lf[3]+1),((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k2257 in k2246 in posix-error in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:184: string-append */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[5],t1);}

/* k3304 in a3297 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in ... */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3306,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:542: pproc */
t5=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* open-output-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4293(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4293r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4293r(t0,t1,t2,t3);}}

static void C_ccall f_4293r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[190]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[187]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4307,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[187]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:853: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t9,t2,lf[190]);}
else{
t9=C_eqp(t6,lf[188]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:854: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t2,lf[190]);}
else{
/* posixwin.scm:828: ##sys#error */
t10=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[189],t6);}}}

/* check in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2605(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2605,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:368: posix-error */
t6=lf[2];
f_2244(6,t6,t1,lf[10],t2,lf[59],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2618,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:369: ##sys#make-port */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[60]+1)))(6,*((C_word*)lf[60]+1),t6,t4,*((C_word*)lf[61]+1),lf[62],lf[45]);}}

/* k2854 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3745 in k3757 in k3753 in scan in k3719 in loop in get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3747,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3311 in k3304 in a3297 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in ... */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
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
f_3228(t3,((C_word*)t0)[7],((C_word*)t0)[8],t2);}}

/* k4282 in open-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4284,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixwin.scm:840: check */
f_4235(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k3308 in k3304 in a3297 in k3279 in k3343 in k3350 in k3245 in loop in k3224 in k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in ... */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:541: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3228(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* system-information in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_5718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5718,2,t0,t1);}
if(C_truep(C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5729,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5744,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1353: ##sys#update-errno */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t2);}}

/* k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2862,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:457: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2945,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:448: ##sys#make-c-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t4,t3,lf[84]);}}}

/* a3823 in process-wait in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3824,2,t0,t1);}
/* posix-common.scm:674: ##sys#process-wait */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3217 in k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3219(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3219,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3372,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posix-common.scm:528: make-pathname */
t5=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[9],lf[104]);}
else{
/* posix-common.scm:528: make-pathname */
t5=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[9],lf[105]);}}

/* k3214 in k3422 in k3419 in k3416 in k3413 in k3410 in k3407 in find-files in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_3216(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3216,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t4=t3;
f_3219(t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3382,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:526: irregex */
t5=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}}

/* signal-masked? in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6119(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6119,2,t0,t1);}
/* posixwin.scm:1572: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[385],lf[0]);}

/* signal-mask! in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6113,2,t0,t1);}
/* posixwin.scm:1571: error */
t2=*((C_word*)lf[351]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[384],lf[0]);}

/* k3757 in k3753 in scan in k3719 in loop in get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3759,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3747,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* posix-common.scm:645: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3717(t6,t4,t5);}

/* k3753 in scan in k3719 in loop in get-environment-variables in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3755,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3759,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_block_size(((C_word*)t0)[6]);
/* posix-common.scm:644: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[74]+1)))(5,*((C_word*)lf[74]+1),t3,((C_word*)t0)[6],t4,t5);}

/* k4272 in open-input-pipe in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixwin.scm:840: check */
f_4235(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2874,a[2]=t3,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2874(t5,((C_word*)t0)[2],t1);}

/* loop in k2870 in k2860 in create-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2874(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2874,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2881,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2914,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:459: directory? */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t3;
f_2881(t4,C_SCHEME_FALSE);}}

/* a3829 in process-wait in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3830,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:676: posix-error */
t6=lf[2];
f_2244(6,t6,t1,lf[137],lf[135],lf[138],((C_word*)t0)[2]);}
else{
/* posix-common.scm:677: values */
C_values(5,0,t1,t2,t3,t4);}}

/* k2801 in k2795 in g293 in k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* posix-common.scm:438: g303 */
f_2763(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[79]+1);
t3=*((C_word*)lf[79]+1);
/* posix-common.scm:438: g303 */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2807 in k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posix-common.scm:444: rmdir */
f_2763(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* process-wait in k3790 in k3454 in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_3800(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_3800r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3800r(t0,t1,t2);}}

static void C_ccall f_3800r(C_word t0,C_word t1,C_word t2){
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
t14=C_i_check_exact_2(t13,lf[135]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3824,a[2]=t13,a[3]=t9,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3830,a[2]=t13,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:674: ##sys#call-with-values */
C_call_with_values(4,0,t1,t15,t16);}

/* k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[80]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2814,a[2]=t6,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2814(t8,t4,t1);}

/* g293 in k2784 in delete-directory in k2561 in k2320 in k2230 in k2227 in k2224 in k2221 in k2218 */
static void C_fcall f_2787(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2787,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2797,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:439: symbolic-link? */
t4=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[440] = {
{"f_3777:posixwin_2escm",(void*)f_3777},
{"f_5969:posixwin_2escm",(void*)f_5969},
{"f_5963:posixwin_2escm",(void*)f_5963},
{"f_3203:posixwin_2escm",(void*)f_3203},
{"f_5957:posixwin_2escm",(void*)f_5957},
{"f_5951:posixwin_2escm",(void*)f_5951},
{"f_4968:posixwin_2escm",(void*)f_4968},
{"f_3717:posixwin_2escm",(void*)f_3717},
{"f_4876:posixwin_2escm",(void*)f_4876},
{"f_3711:posixwin_2escm",(void*)f_3711},
{"f_4480:posixwin_2escm",(void*)f_4480},
{"f_4485:posixwin_2escm",(void*)f_4485},
{"f_4994:posixwin_2escm",(void*)f_4994},
{"f_4867:posixwin_2escm",(void*)f_4867},
{"f_4864:posixwin_2escm",(void*)f_4864},
{"f_2846:posixwin_2escm",(void*)f_2846},
{"f_4858:posixwin_2escm",(void*)f_4858},
{"f_2736:posixwin_2escm",(void*)f_2736},
{"f_2739:posixwin_2escm",(void*)f_2739},
{"f_4850:posixwin_2escm",(void*)f_4850},
{"f_2576:posixwin_2escm",(void*)f_2576},
{"f_2703:posixwin_2escm",(void*)f_2703},
{"f_2706:posixwin_2escm",(void*)f_2706},
{"f_4109:posixwin_2escm",(void*)f_4109},
{"f_2797:posixwin_2escm",(void*)f_2797},
{"f_4267:posixwin_2escm",(void*)f_4267},
{"f_2723:posixwin_2escm",(void*)f_2723},
{"f_5541:posixwin_2escm",(void*)f_5541},
{"f_4688:posixwin_2escm",(void*)f_4688},
{"f_5527:posixwin_2escm",(void*)f_5527},
{"f_3792:posixwin_2escm",(void*)f_3792},
{"f_3794:posixwin_2escm",(void*)f_3794},
{"f_5161:posixwin_2escm",(void*)f_5161},
{"f_4659:posixwin_2escm",(void*)f_4659},
{"f_2907:posixwin_2escm",(void*)f_2907},
{"f_4651:posixwin_2escm",(void*)f_4651},
{"f_2900:posixwin_2escm",(void*)f_2900},
{"f_2914:posixwin_2escm",(void*)f_2914},
{"f_2916:posixwin_2escm",(void*)f_2916},
{"f_5535:posixwin_2escm",(void*)f_5535},
{"f_5530:posixwin_2escm",(void*)f_5530},
{"f_2352:posixwin_2escm",(void*)f_2352},
{"f_2922:posixwin_2escm",(void*)f_2922},
{"f_2354:posixwin_2escm",(void*)f_2354},
{"f_4417:posixwin_2escm",(void*)f_4417},
{"f_3409:posixwin_2escm",(void*)f_3409},
{"f_5139:posixwin_2escm",(void*)f_5139},
{"f_3405:posixwin_2escm",(void*)f_3405},
{"f_4412:posixwin_2escm",(void*)f_4412},
{"f_4446:posixwin_2escm",(void*)f_4446},
{"f_4441:posixwin_2escm",(void*)f_4441},
{"f_4692:posixwin_2escm",(void*)f_4692},
{"f_6263:posixwin_2escm",(void*)f_6263},
{"f_2449:posixwin_2escm",(void*)f_2449},
{"f_6273:posixwin_2escm",(void*)f_6273},
{"f_2441:posixwin_2escm",(void*)f_2441},
{"f_4426:posixwin_2escm",(void*)f_4426},
{"f_4421:posixwin_2escm",(void*)f_4421},
{"f_4455:posixwin_2escm",(void*)f_4455},
{"f_3449:posixwin_2escm",(void*)f_3449},
{"f_3441:posixwin_2escm",(void*)f_3441},
{"f_4451:posixwin_2escm",(void*)f_4451},
{"f_3443:posixwin_2escm",(void*)f_3443},
{"f_5759:posixwin_2escm",(void*)f_5759},
{"f_3415:posixwin_2escm",(void*)f_3415},
{"f_3418:posixwin_2escm",(void*)f_3418},
{"f_3412:posixwin_2escm",(void*)f_3412},
{"f_5500:posixwin_2escm",(void*)f_5500},
{"f_4437:posixwin_2escm",(void*)f_4437},
{"f_2373:posixwin_2escm",(void*)f_2373},
{"f_3429:posixwin_2escm",(void*)f_3429},
{"f_4431:posixwin_2escm",(void*)f_4431},
{"f_3421:posixwin_2escm",(void*)f_3421},
{"f_3424:posixwin_2escm",(void*)f_3424},
{"f_4211:posixwin_2escm",(void*)f_4211},
{"f_4205:posixwin_2escm",(void*)f_4205},
{"f_4202:posixwin_2escm",(void*)f_4202},
{"f_2536:posixwin_2escm",(void*)f_2536},
{"f_2530:posixwin_2escm",(void*)f_2530},
{"f_3481:posixwin_2escm",(void*)f_3481},
{"f_5124:posixwin_2escm",(void*)f_5124},
{"f_5128:posixwin_2escm",(void*)f_5128},
{"f_5294:posixwin_2escm",(void*)f_5294},
{"f_4048:posixwin_2escm",(void*)f_4048},
{"f_4045:posixwin_2escm",(void*)f_4045},
{"f_4253:posixwin_2escm",(void*)f_4253},
{"f_5115:posixwin_2escm",(void*)f_5115},
{"f_4251:posixwin_2escm",(void*)f_4251},
{"f_5289:posixwin_2escm",(void*)f_5289},
{"f_4035:posixwin_2escm",(void*)f_4035},
{"f_5105:posixwin_2escm",(void*)f_5105},
{"f_5102:posixwin_2escm",(void*)f_5102},
{"f_5108:posixwin_2escm",(void*)f_5108},
{"f_5273:posixwin_2escm",(void*)f_5273},
{"f_5277:posixwin_2escm",(void*)f_5277},
{"f_4239:posixwin_2escm",(void*)f_4239},
{"f_4235:posixwin_2escm",(void*)f_4235},
{"f_6179:posixwin_2escm",(void*)f_6179},
{"f_6170:posixwin_2escm",(void*)f_6170},
{"f_4408:posixwin_2escm",(void*)f_4408},
{"f_4171:posixwin_2escm",(void*)f_4171},
{"f_3498:posixwin_2escm",(void*)f_3498},
{"f_4402:posixwin_2escm",(void*)f_4402},
{"toplevel:posixwin_2escm",(void*)C_posix_toplevel},
{"f_4164:posixwin_2escm",(void*)f_4164},
{"f_4195:posixwin_2escm",(void*)f_4195},
{"f_5921:posixwin_2escm",(void*)f_5921},
{"f_3477:posixwin_2escm",(void*)f_3477},
{"f_5927:posixwin_2escm",(void*)f_5927},
{"f_6065:posixwin_2escm",(void*)f_6065},
{"f_5915:posixwin_2escm",(void*)f_5915},
{"f_4843:posixwin_2escm",(void*)f_4843},
{"f_6137:posixwin_2escm",(void*)f_6137},
{"f_6131:posixwin_2escm",(void*)f_6131},
{"f_5900:posixwin_2escm",(void*)f_5900},
{"f_5909:posixwin_2escm",(void*)f_5909},
{"f_4831:posixwin_2escm",(void*)f_4831},
{"f_6149:posixwin_2escm",(void*)f_6149},
{"f_6143:posixwin_2escm",(void*)f_6143},
{"f_4825:posixwin_2escm",(void*)f_4825},
{"f_4608:posixwin_2escm",(void*)f_4608},
{"f_4600:posixwin_2escm",(void*)f_4600},
{"f_4811:posixwin_2escm",(void*)f_4811},
{"f_3897:posixwin_2escm",(void*)f_3897},
{"f_5945:posixwin_2escm",(void*)f_5945},
{"f_4005:posixwin_2escm",(void*)f_4005},
{"f_4002:posixwin_2escm",(void*)f_4002},
{"f_5933:posixwin_2escm",(void*)f_5933},
{"f_5939:posixwin_2escm",(void*)f_5939},
{"f_4642:posixwin_2escm",(void*)f_4642},
{"f_4636:posixwin_2escm",(void*)f_4636},
{"f_4630:posixwin_2escm",(void*)f_4630},
{"f_4628:posixwin_2escm",(void*)f_4628},
{"f_4620:posixwin_2escm",(void*)f_4620},
{"f_5562:posixwin_2escm",(void*)f_5562},
{"f_3163:posixwin_2escm",(void*)f_3163},
{"f_5568:posixwin_2escm",(void*)f_5568},
{"f_5566:posixwin_2escm",(void*)f_5566},
{"f_4610:posixwin_2escm",(void*)f_4610},
{"f_3539:posixwin_2escm",(void*)f_3539},
{"f_3533:posixwin_2escm",(void*)f_3533},
{"f_3183:posixwin_2escm",(void*)f_3183},
{"f_4011:posixwin_2escm",(void*)f_4011},
{"f_4017:posixwin_2escm",(void*)f_4017},
{"f_2767:posixwin_2escm",(void*)f_2767},
{"f_2763:posixwin_2escm",(void*)f_2763},
{"f_5336:posixwin_2escm",(void*)f_5336},
{"f_5332:posixwin_2escm",(void*)f_5332},
{"f_5321:posixwin_2escm",(void*)f_5321},
{"f_2757:posixwin_2escm",(void*)f_2757},
{"f_4397:posixwin_2escm",(void*)f_4397},
{"f_4393:posixwin_2escm",(void*)f_4393},
{"f_5317:posixwin_2escm",(void*)f_5317},
{"f_2945:posixwin_2escm",(void*)f_2945},
{"f_4388:posixwin_2escm",(void*)f_4388},
{"f_4384:posixwin_2escm",(void*)f_4384},
{"f_5300:posixwin_2escm",(void*)f_5300},
{"f_3133:posixwin_2escm",(void*)f_3133},
{"f_5304:posixwin_2escm",(void*)f_5304},
{"f_2967:posixwin_2escm",(void*)f_2967},
{"f_2963:posixwin_2escm",(void*)f_2963},
{"f_3159:posixwin_2escm",(void*)f_3159},
{"f_3129:posixwin_2escm",(void*)f_3129},
{"f_3123:posixwin_2escm",(void*)f_3123},
{"f_6017:posixwin_2escm",(void*)f_6017},
{"f_6011:posixwin_2escm",(void*)f_6011},
{"f_3175:posixwin_2escm",(void*)f_3175},
{"f_3171:posixwin_2escm",(void*)f_3171},
{"f_5228:posixwin_2escm",(void*)f_5228},
{"f_6005:posixwin_2escm",(void*)f_6005},
{"f_3140:posixwin_2escm",(void*)f_3140},
{"f_3142:posixwin_2escm",(void*)f_3142},
{"f_6029:posixwin_2escm",(void*)f_6029},
{"f_3917:posixwin_2escm",(void*)f_3917},
{"f_6023:posixwin_2escm",(void*)f_6023},
{"f_3914:posixwin_2escm",(void*)f_3914},
{"f_5206:posixwin_2escm",(void*)f_5206},
{"f_5874:posixwin_2escm",(void*)f_5874},
{"f_2302:posixwin_2escm",(void*)f_2302},
{"f_3932:posixwin_2escm",(void*)f_3932},
{"f_2309:posixwin_2escm",(void*)f_2309},
{"f_3901:posixwin_2escm",(void*)f_3901},
{"f_5453:posixwin_2escm",(void*)f_5453},
{"f_2328:posixwin_2escm",(void*)f_2328},
{"f_2322:posixwin_2escm",(void*)f_2322},
{"f_2324:posixwin_2escm",(void*)f_2324},
{"f_5445:posixwin_2escm",(void*)f_5445},
{"f_5441:posixwin_2escm",(void*)f_5441},
{"f_2334:posixwin_2escm",(void*)f_2334},
{"f_5457:posixwin_2escm",(void*)f_5457},
{"f_2336:posixwin_2escm",(void*)f_2336},
{"f_2330:posixwin_2escm",(void*)f_2330},
{"f_4752:posixwin_2escm",(void*)f_4752},
{"f_5434:posixwin_2escm",(void*)f_5434},
{"f_2342:posixwin_2escm",(void*)f_2342},
{"f_2348:posixwin_2escm",(void*)f_2348},
{"f_5449:posixwin_2escm",(void*)f_5449},
{"f_2346:posixwin_2escm",(void*)f_2346},
{"f_2340:posixwin_2escm",(void*)f_2340},
{"f_4378:posixwin_2escm",(void*)f_4378},
{"f_4784:posixwin_2escm",(void*)f_4784},
{"f_4373:posixwin_2escm",(void*)f_4373},
{"f_3619:posixwin_2escm",(void*)f_3619},
{"f_3612:posixwin_2escm",(void*)f_3612},
{"f_5422:posixwin_2escm",(void*)f_5422},
{"f_4369:posixwin_2escm",(void*)f_4369},
{"f_4778:posixwin_2escm",(void*)f_4778},
{"f_4775:posixwin_2escm",(void*)f_4775},
{"f_4361:posixwin_2escm",(void*)f_4361},
{"f_3628:posixwin_2escm",(void*)f_3628},
{"f_4798:posixwin_2escm",(void*)f_4798},
{"f_2563:posixwin_2escm",(void*)f_2563},
{"f_2568:posixwin_2escm",(void*)f_2568},
{"f_3102:posixwin_2escm",(void*)f_3102},
{"f_5867:posixwin_2escm",(void*)f_5867},
{"f_2696:posixwin_2escm",(void*)f_2696},
{"f_3108:posixwin_2escm",(void*)f_3108},
{"f_2690:posixwin_2escm",(void*)f_2690},
{"f_3666:posixwin_2escm",(void*)f_3666},
{"f_2501:posixwin_2escm",(void*)f_2501},
{"f_3365:posixwin_2escm",(void*)f_3365},
{"f_4766:posixwin_2escm",(void*)f_4766},
{"f_4768:posixwin_2escm",(void*)f_4768},
{"f_2673:posixwin_2escm",(void*)f_2673},
{"f_2509:posixwin_2escm",(void*)f_2509},
{"f_2518:posixwin_2escm",(void*)f_2518},
{"f_2514:posixwin_2escm",(void*)f_2514},
{"f_3691:posixwin_2escm",(void*)f_3691},
{"f_3699:posixwin_2escm",(void*)f_3699},
{"f_2814:posixwin_2escm",(void*)f_2814},
{"f_2824:posixwin_2escm",(void*)f_2824},
{"f_5414:posixwin_2escm",(void*)f_5414},
{"f_3674:posixwin_2escm",(void*)f_3674},
{"f_5404:posixwin_2escm",(void*)f_5404},
{"f_5418:posixwin_2escm",(void*)f_5418},
{"f_4314:posixwin_2escm",(void*)f_4314},
{"f_3529:posixwin_2escm",(void*)f_3529},
{"f_3689:posixwin_2escm",(void*)f_3689},
{"f_3685:posixwin_2escm",(void*)f_3685},
{"f_2881:posixwin_2escm",(void*)f_2881},
{"f_2884:posixwin_2escm",(void*)f_2884},
{"f_4307:posixwin_2escm",(void*)f_4307},
{"f_4584:posixwin_2escm",(void*)f_4584},
{"f_4333:posixwin_2escm",(void*)f_4333},
{"f_6226:posixwin_2escm",(void*)f_6226},
{"f_4351:posixwin_2escm",(void*)f_4351},
{"f_6251:posixwin_2escm",(void*)f_6251},
{"f_4324:posixwin_2escm",(void*)f_4324},
{"f_5056:posixwin_2escm",(void*)f_5056},
{"f_6253:posixwin_2escm",(void*)f_6253},
{"f_4340:posixwin_2escm",(void*)f_4340},
{"f_5628:posixwin_2escm",(void*)f_5628},
{"f_4358:posixwin_2escm",(void*)f_4358},
{"f_6247:posixwin_2escm",(void*)f_6247},
{"f_5044:posixwin_2escm",(void*)f_5044},
{"f_3567:posixwin_2escm",(void*)f_3567},
{"f_2491:posixwin_2escm",(void*)f_2491},
{"f_4070:posixwin_2escm",(void*)f_4070},
{"f_4343:posixwin_2escm",(void*)f_4343},
{"f_5032:posixwin_2escm",(void*)f_5032},
{"f_2481:posixwin_2escm",(void*)f_2481},
{"f_2499:posixwin_2escm",(void*)f_2499},
{"f_4062:posixwin_2escm",(void*)f_4062},
{"f_4066:posixwin_2escm",(void*)f_4066},
{"f_3502:posixwin_2escm",(void*)f_3502},
{"f_2459:posixwin_2escm",(void*)f_2459},
{"f_2471:posixwin_2escm",(void*)f_2471},
{"f_2451:posixwin_2escm",(void*)f_2451},
{"f_2489:posixwin_2escm",(void*)f_2489},
{"f_6210:posixwin_2escm",(void*)f_6210},
{"f_4057:posixwin_2escm",(void*)f_4057},
{"f_6214:posixwin_2escm",(void*)f_6214},
{"f_6217:posixwin_2escm",(void*)f_6217},
{"f_4054:posixwin_2escm",(void*)f_4054},
{"f_2469:posixwin_2escm",(void*)f_2469},
{"f_2461:posixwin_2escm",(void*)f_2461},
{"f_2479:posixwin_2escm",(void*)f_2479},
{"f_6204:posixwin_2escm",(void*)f_6204},
{"f_5811:posixwin_2escm",(void*)f_5811},
{"f_5815:posixwin_2escm",(void*)f_5815},
{"f_5397:posixwin_2escm",(void*)f_5397},
{"f_5390:posixwin_2escm",(void*)f_5390},
{"f_5818:posixwin_2escm",(void*)f_5818},
{"f_6089:posixwin_2escm",(void*)f_6089},
{"f_3729:posixwin_2escm",(void*)f_3729},
{"f_3721:posixwin_2escm",(void*)f_3721},
{"f_6083:posixwin_2escm",(void*)f_6083},
{"f_3951:posixwin_2escm",(void*)f_3951},
{"f_6095:posixwin_2escm",(void*)f_6095},
{"f_3923:posixwin_2escm",(void*)f_3923},
{"f_3571:posixwin_2escm",(void*)f_3571},
{"f_3575:posixwin_2escm",(void*)f_3575},
{"f_4706:posixwin_2escm",(void*)f_4706},
{"f_4704:posixwin_2escm",(void*)f_4704},
{"f_5833:posixwin_2escm",(void*)f_5833},
{"f_3976:posixwin_2escm",(void*)f_3976},
{"f_2632:posixwin_2escm",(void*)f_2632},
{"f_3581:posixwin_2escm",(void*)f_3581},
{"f_6077:posixwin_2escm",(void*)f_6077},
{"f_2634:posixwin_2escm",(void*)f_2634},
{"f_5011:posixwin_2escm",(void*)f_5011},
{"f_6071:posixwin_2escm",(void*)f_6071},
{"f_5821:posixwin_2escm",(void*)f_5821},
{"f_5827:posixwin_2escm",(void*)f_5827},
{"f_3945:posixwin_2escm",(void*)f_3945},
{"f_6047:posixwin_2escm",(void*)f_6047},
{"f_2646:posixwin_2escm",(void*)f_2646},
{"f_2648:posixwin_2escm",(void*)f_2648},
{"f_5023:posixwin_2escm",(void*)f_5023},
{"f_6041:posixwin_2escm",(void*)f_6041},
{"f_6059:posixwin_2escm",(void*)f_6059},
{"f_6053:posixwin_2escm",(void*)f_6053},
{"f_3995:posixwin_2escm",(void*)f_3995},
{"f_4718:posixwin_2escm",(void*)f_4718},
{"f_3967:posixwin_2escm",(void*)f_3967},
{"f_3964:posixwin_2escm",(void*)f_3964},
{"f_3961:posixwin_2escm",(void*)f_3961},
{"f_4732:posixwin_2escm",(void*)f_4732},
{"f_5002:posixwin_2escm",(void*)f_5002},
{"f_4746:posixwin_2escm",(void*)f_4746},
{"f_6035:posixwin_2escm",(void*)f_6035},
{"f_5688:posixwin_2escm",(void*)f_5688},
{"f_4734:posixwin_2escm",(void*)f_4734},
{"f_6156:posixwin_2escm",(void*)f_6156},
{"f_4720:posixwin_2escm",(void*)f_4720},
{"f_4939:posixwin_2escm",(void*)f_4939},
{"f_3638:posixwin_2escm",(void*)f_3638},
{"f_4925:posixwin_2escm",(void*)f_4925},
{"f_3298:posixwin_2escm",(void*)f_3298},
{"f_3293:posixwin_2escm",(void*)f_3293},
{"f_3291:posixwin_2escm",(void*)f_3291},
{"f_3642:posixwin_2escm",(void*)f_3642},
{"f_3645:posixwin_2escm",(void*)f_3645},
{"f_4501:posixwin_2escm",(void*)f_4501},
{"f_3272:posixwin_2escm",(void*)f_3272},
{"f_5092:posixwin_2escm",(void*)f_5092},
{"f_3281:posixwin_2escm",(void*)f_3281},
{"f_5099:posixwin_2escm",(void*)f_5099},
{"f_5075:posixwin_2escm",(void*)f_5075},
{"f_2982:posixwin_2escm",(void*)f_2982},
{"f_2985:posixwin_2escm",(void*)f_2985},
{"f_2988:posixwin_2escm",(void*)f_2988},
{"f_3456:posixwin_2escm",(void*)f_3456},
{"f_3458:posixwin_2escm",(void*)f_3458},
{"f_5484:posixwin_2escm",(void*)f_5484},
{"f_3451:posixwin_2escm",(void*)f_3451},
{"f_5486:posixwin_2escm",(void*)f_5486},
{"f_5473:posixwin_2escm",(void*)f_5473},
{"f_4132:posixwin_2escm",(void*)f_4132},
{"f_3226:posixwin_2escm",(void*)f_3226},
{"f_3228:posixwin_2escm",(void*)f_3228},
{"f_2266:posixwin_2escm",(void*)f_2266},
{"f_2262:posixwin_2escm",(void*)f_2262},
{"f_3438:posixwin_2escm",(void*)f_3438},
{"f_3435:posixwin_2escm",(void*)f_3435},
{"f_3432:posixwin_2escm",(void*)f_3432},
{"f_2992:posixwin_2escm",(void*)f_2992},
{"f_2297:posixwin_2escm",(void*)f_2297},
{"f_2290:posixwin_2escm",(void*)f_2290},
{"f_4151:posixwin_2escm",(void*)f_4151},
{"f_4155:posixwin_2escm",(void*)f_4155},
{"f_5741:posixwin_2escm",(void*)f_5741},
{"f_5744:posixwin_2escm",(void*)f_5744},
{"f_5749:posixwin_2escm",(void*)f_5749},
{"f_3006:posixwin_2escm",(void*)f_3006},
{"f_3269:posixwin_2escm",(void*)f_3269},
{"f_5733:posixwin_2escm",(void*)f_5733},
{"f_5737:posixwin_2escm",(void*)f_5737},
{"f_3372:posixwin_2escm",(void*)f_3372},
{"f_4460:posixwin_2escm",(void*)f_4460},
{"f_4465:posixwin_2escm",(void*)f_4465},
{"f_5729:posixwin_2escm",(void*)f_5729},
{"f_3382:posixwin_2escm",(void*)f_3382},
{"f_3383:posixwin_2escm",(void*)f_3383},
{"f_3247:posixwin_2escm",(void*)f_3247},
{"f_4492:posixwin_2escm",(void*)f_4492},
{"f_2618:posixwin_2escm",(void*)f_2618},
{"f_3391:posixwin_2escm",(void*)f_3391},
{"f_3399:posixwin_2escm",(void*)f_3399},
{"f_5993:posixwin_2escm",(void*)f_5993},
{"f_5999:posixwin_2escm",(void*)f_5999},
{"f_2232:posixwin_2escm",(void*)f_2232},
{"f_3326:posixwin_2escm",(void*)f_3326},
{"f_5706:posixwin_2escm",(void*)f_5706},
{"f_5700:posixwin_2escm",(void*)f_5700},
{"f_3320:posixwin_2escm",(void*)f_3320},
{"f_2620:posixwin_2escm",(void*)f_2620},
{"f_5987:posixwin_2escm",(void*)f_5987},
{"f_5981:posixwin_2escm",(void*)f_5981},
{"f_3042:posixwin_2escm",(void*)f_3042},
{"f_3339:posixwin_2escm",(void*)f_3339},
{"f_3336:posixwin_2escm",(void*)f_3336},
{"f_4471:posixwin_2escm",(void*)f_4471},
{"f_4475:posixwin_2escm",(void*)f_4475},
{"f_5975:posixwin_2escm",(void*)f_5975},
{"f_3345:posixwin_2escm",(void*)f_3345},
{"f_3020:posixwin_2escm",(void*)f_3020},
{"f_2244:posixwin_2escm",(void*)f_2244},
{"f_6125:posixwin_2escm",(void*)f_6125},
{"f_2248:posixwin_2escm",(void*)f_2248},
{"f_3358:posixwin_2escm",(void*)f_3358},
{"f_3352:posixwin_2escm",(void*)f_3352},
{"f_3032:posixwin_2escm",(void*)f_3032},
{"f_2664:posixwin_2escm",(void*)f_2664},
{"f_5491:posixwin_2escm",(void*)f_5491},
{"f_6107:posixwin_2escm",(void*)f_6107},
{"f_2223:posixwin_2escm",(void*)f_2223},
{"f_6101:posixwin_2escm",(void*)f_6101},
{"f_2226:posixwin_2escm",(void*)f_2226},
{"f_2229:posixwin_2escm",(void*)f_2229},
{"f_2220:posixwin_2escm",(void*)f_2220},
{"f_2255:posixwin_2escm",(void*)f_2255},
{"f_2259:posixwin_2escm",(void*)f_2259},
{"f_3306:posixwin_2escm",(void*)f_3306},
{"f_4293:posixwin_2escm",(void*)f_4293},
{"f_2605:posixwin_2escm",(void*)f_2605},
{"f_2856:posixwin_2escm",(void*)f_2856},
{"f_3747:posixwin_2escm",(void*)f_3747},
{"f_3313:posixwin_2escm",(void*)f_3313},
{"f_4284:posixwin_2escm",(void*)f_4284},
{"f_3310:posixwin_2escm",(void*)f_3310},
{"f_5718:posixwin_2escm",(void*)f_5718},
{"f_2862:posixwin_2escm",(void*)f_2862},
{"f_3824:posixwin_2escm",(void*)f_3824},
{"f_3219:posixwin_2escm",(void*)f_3219},
{"f_3216:posixwin_2escm",(void*)f_3216},
{"f_6119:posixwin_2escm",(void*)f_6119},
{"f_6113:posixwin_2escm",(void*)f_6113},
{"f_3759:posixwin_2escm",(void*)f_3759},
{"f_3755:posixwin_2escm",(void*)f_3755},
{"f_4274:posixwin_2escm",(void*)f_4274},
{"f_2872:posixwin_2escm",(void*)f_2872},
{"f_2874:posixwin_2escm",(void*)f_2874},
{"f_3830:posixwin_2escm",(void*)f_3830},
{"f_2803:posixwin_2escm",(void*)f_2803},
{"f_2809:posixwin_2escm",(void*)f_2809},
{"f_3800:posixwin_2escm",(void*)f_3800},
{"f_2786:posixwin_2escm",(void*)f_2786},
{"f_2787:posixwin_2escm",(void*)f_2787},
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
S|  for-each		2
o|eliminated procedure checks: 160 
o|specializations:
o|  1 (##sys#check-list (or pair list) *)
o|  4 (##sys#foreign-fixnum-argument fixnum)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  3 (cdr pair)
o|  2 (string-ref string fixnum)
o|  3 (string-length string)
o|  3 (make-string fixnum)
o|  4 (##sys#check-open-port * *)
o|  9 (eqv? * (not float))
o|  11 (car pair)
o|dropping redundant toplevel assignment: process 
o|dropping redundant toplevel assignment: process* 
o|safe globals: (file-stat ##sys#stat ##sys#posix-error posix-error c1521) 
o|Removed `not' forms: 8 
o|contracted procedure: "(posix-common.scm:184) strerror64" 
o|inlining procedure: k2267 
o|inlining procedure: k2267 
o|inlining procedure: k2282 
o|inlining procedure: k2282 
o|inlining procedure: k2368 
o|inlining procedure: k2380 
o|inlining procedure: k2380 
o|inlining procedure: k2392 
o|inlining procedure: k2392 
o|inlining procedure: k2404 
o|inlining procedure: k2404 
o|inlining procedure: k2368 
o|inlining procedure: k2525 
o|inlining procedure: k2525 
o|inlining procedure: k2537 
o|inlining procedure: k2537 
o|inlining procedure: k2547 
o|inlining procedure: k2547 
o|inlining procedure: k2574 
o|contracted procedure: k2590 
o|inlining procedure: k2587 
o|inlining procedure: k2587 
o|substituted constant variable: a2600 
o|inlining procedure: k2574 
o|inlining procedure: k2607 
o|inlining procedure: k2607 
o|substituted constant variable: a2651 
o|inlining procedure: k2652 
o|inlining procedure: k2652 
o|contracted procedure: k2668 
o|inlining procedure: k2671 
o|inlining procedure: k2671 
o|inlining procedure: k2704 
o|inlining procedure: k2704 
o|inlining procedure: k2728 
o|inlining procedure: k2728 
o|substituted constant variable: a2749 
o|inlining procedure: k2768 
o|inlining procedure: k2768 
o|inlining procedure: k2789 
o|propagated global variable: r27906323 delete-file 
o|inlining procedure: k2789 
o|inlining procedure: k2781 
o|inlining procedure: k2816 
o|inlining procedure: k2816 
o|inlining procedure: k2781 
o|inlining procedure: k2854 
o|inlining procedure: k2854 
o|inlining procedure: k2876 
o|contracted procedure: "(posix-common.scm:461) g336337" 
o|inlining procedure: k2887 
o|inlining procedure: k2887 
o|inlining procedure: k2876 
o|inlining procedure: k2924 
o|inlining procedure: k2924 
o|contracted procedure: "(posix-common.scm:462) g354355" 
o|inlining procedure: k2932 
o|inlining procedure: k2932 
o|inlining procedure: k2993 
o|inlining procedure: k2993 
o|inlining procedure: k3008 
o|inlining procedure: k3008 
o|inlining procedure: k3049 
o|inlining procedure: k3049 
o|substituted constant variable: a3071 
o|substituted constant variable: a3073 
o|inlining procedure: k3110 
o|inlining procedure: k3110 
o|inlining procedure: k3144 
o|inlining procedure: k3144 
o|inlining procedure: k3197 
o|inlining procedure: k3197 
o|inlining procedure: k3205 
o|inlining procedure: k3205 
o|contracted procedure: "(posix-common.scm:553) find-files" 
o|inlining procedure: k3230 
o|inlining procedure: k3230 
o|inlining procedure: k3248 
o|inlining procedure: k3248 
o|inlining procedure: k3267 
o|inlining procedure: k3267 
o|inlining procedure: k3276 
o|inlining procedure: k3308 
o|inlining procedure: k3308 
o|inlining procedure: k3322 
o|inlining procedure: k3322 
o|inlining procedure: k3276 
o|inlining procedure: k3334 
o|inlining procedure: k3334 
o|inlining procedure: k3353 
o|inlining procedure: k3353 
o|inlining procedure: k3374 
o|inlining procedure: k3374 
o|contracted procedure: k3388 
o|inlining procedure: k3393 
o|inlining procedure: k3393 
o|inlining procedure: k3463 
o|inlining procedure: k3463 
o|inlining procedure: k3540 
o|inlining procedure: k3540 
o|contracted procedure: "(posix-common.scm:590) ctime550" 
o|inlining procedure: k3576 
o|inlining procedure: k3576 
o|inlining procedure: k3620 
o|contracted procedure: "(posix-common.scm:613) strftime577" 
o|inlining procedure: k3606 
o|inlining procedure: k3606 
o|inlining procedure: k3620 
o|contracted procedure: "(posix-common.scm:615) asctime576" 
o|inlining procedure: k3593 
o|inlining procedure: k3593 
o|inlining procedure: k3722 
o|inlining procedure: k3731 
o|inlining procedure: k3731 
o|inlining procedure: k3722 
o|contracted procedure: "(posix-common.scm:639) get629" 
o|inlining procedure: k3832 
o|inlining procedure: k3832 
o|inlining procedure: k3915 
o|inlining procedure: k3915 
o|inlining procedure: k3937 
o|inlining procedure: k3937 
o|inlining procedure: k3965 
o|inlining procedure: k3965 
o|inlining procedure: k4009 
o|inlining procedure: k4009 
o|inlining procedure: k4079 
o|inlining procedure: k4079 
o|inlining procedure: k4111 
o|inlining procedure: k4111 
o|contracted procedure: k4133 
o|inlining procedure: k4139 
o|inlining procedure: k4139 
o|inlining procedure: k4156 
o|inlining procedure: k4156 
o|inlining procedure: k4166 
o|inlining procedure: k4166 
o|inlining procedure: k4203 
o|inlining procedure: k4203 
o|inlining procedure: k4219 
o|inlining procedure: k4219 
o|inlining procedure: k4240 
o|inlining procedure: k4240 
o|inlining procedure: k4265 
o|inlining procedure: k4265 
o|inlining procedure: "(posixwin.scm:845) badmode823" 
o|substituted constant variable: a4289 
o|substituted constant variable: a4291 
o|inlining procedure: k4305 
o|inlining procedure: k4305 
o|inlining procedure: "(posixwin.scm:855) badmode823" 
o|substituted constant variable: a4329 
o|substituted constant variable: a4331 
o|substituted constant variable: a4336 
o|substituted constant variable: a4337 
o|inlining procedure: k4341 
o|inlining procedure: k4341 
o|substituted constant variable: a4354 
o|substituted constant variable: a4355 
o|inlining procedure: k4359 
o|inlining procedure: k4359 
o|inlining procedure: k4490 
o|inlining procedure: k4490 
o|inlining procedure: k4592 
o|inlining procedure: k4592 
o|inlining procedure: k4618 
o|inlining procedure: k4618 
o|inlining procedure: k4657 
o|contracted procedure: k4673 
o|inlining procedure: k4670 
o|inlining procedure: k4670 
o|substituted constant variable: a4683 
o|inlining procedure: k4657 
o|inlining procedure: k4693 
o|inlining procedure: k4693 
o|substituted constant variable: a4737 
o|contracted procedure: k4741 
o|inlining procedure: k4738 
o|inlining procedure: k4738 
o|inlining procedure: k4776 
o|inlining procedure: k4776 
o|contracted procedure: "(posixwin.scm:1111) ex01069" 
o|substituted constant variable: a4828 
o|contracted procedure: k4835 
o|inlining procedure: k4832 
o|inlining procedure: k4832 
o|inlining procedure: k4845 
o|inlining procedure: k4845 
o|substituted constant variable: a4861 
o|inlining procedure: k4871 
o|inlining procedure: k4871 
o|inlining procedure: k4881 
o|inlining procedure: k4881 
o|inlining procedure: k4894 
o|inlining procedure: k4894 
o|substituted constant variable: a4910 
o|substituted constant variable: a4912 
o|substituted constant variable: a4914 
o|inlining procedure: k4927 
o|inlining procedure: k4927 
o|inlining procedure: k4970 
o|inlining procedure: k4970 
o|inlining procedure: k4992 
o|inlining procedure: k4992 
o|contracted procedure: "(posixwin.scm:1182) needs-quoting?1104" 
o|inlining procedure: k4941 
o|inlining procedure: k4941 
o|inlining procedure: k5046 
o|inlining procedure: k5058 
o|inlining procedure: k5058 
o|inlining procedure: k5046 
o|inlining procedure: k5113 
o|inlining procedure: k5113 
o|inlining procedure: k5129 
o|inlining procedure: k5129 
o|inlining procedure: k5166 
o|inlining procedure: k5166 
o|inlining procedure: k5233 
o|inlining procedure: k5233 
o|inlining procedure: k5278 
o|inlining procedure: k5278 
o|inlining procedure: k5305 
o|inlining procedure: k5305 
o|substituted constant variable: g128312841291 
o|substituted constant variable: g128312841291 
o|substituted constant variable: g128312841291 
o|substituted constant variable: g128512861292 
o|substituted constant variable: g128512861292 
o|substituted constant variable: g128512861292 
o|substituted constant variable: g128712881293 
o|substituted constant variable: g128712881293 
o|substituted constant variable: g128712881293 
o|substituted constant variable: g128912901294 
o|substituted constant variable: g128912901294 
o|substituted constant variable: g128912901294 
o|inlining procedure: k5405 
o|inlining procedure: k5420 
o|inlining procedure: k5420 
o|inlining procedure: k5405 
o|contracted procedure: "(posixwin.scm:1281) c-process1231" 
o|inlining procedure: k5467 
o|inlining procedure: k5467 
o|inlining procedure: k5502 
o|inlining procedure: k5502 
o|inlining procedure: k5543 
o|inlining procedure: k5543 
o|inlining procedure: k5690 
o|inlining procedure: k5690 
o|inlining procedure: k5708 
o|inlining procedure: k5708 
o|inlining procedure: k5720 
o|inlining procedure: k5720 
o|inlining procedure: k5751 
o|inlining procedure: k5751 
o|contracted procedure: "(posixwin.scm:1511) bad-mmap?1431" 
o|inlining procedure: k5805 
o|inlining procedure: k5805 
o|contracted procedure: "(posixwin.scm:1510) mmap1430" 
o|contracted procedure: k5847 
o|inlining procedure: k5875 
o|inlining procedure: k5875 
o|contracted procedure: "(posixwin.scm:1520) munmap1468" 
o|inlining procedure: k6191 
o|inlining procedure: k6191 
o|inlining procedure: k6215 
o|inlining procedure: k6215 
o|inlining procedure: k6227 
o|inlining procedure: k6227 
o|inlining procedure: k6237 
o|inlining procedure: k6237 
o|inlining procedure: k6274 
o|inlining procedure: k6274 
o|contracted procedure: "(posix-common.scm:255) g116117" 
o|inlining procedure: k6261 
o|inlining procedure: k6261 
o|replaced variables: 637 
o|removed binding forms: 449 
o|substituted constant variable: r22686284 
o|substituted constant variable: r23816288 
o|substituted constant variable: r23936290 
o|substituted constant variable: r24056292 
o|substituted constant variable: r23696294 
o|substituted constant variable: r25386298 
o|inlining procedure: k2574 
o|substituted constant variable: r25886304 
o|inlining procedure: k2574 
o|inlining procedure: k2574 
o|propagated global variable: g3033046324 delete-file 
o|inlining procedure: k2789 
o|inlining procedure: k2789 
o|propagated global variable: r27906620 delete-file 
o|propagated global variable: r27906620 delete-file 
o|converted assignments to bindings: (rmdir286) 
o|substituted constant variable: loc338 
o|substituted constant variable: loc338 
o|substituted constant variable: loc356 
o|substituted constant variable: loc356 
o|substituted constant variable: r30096351 
o|substituted constant variable: r31116355 
o|substituted constant variable: r31986361 
o|substituted constant variable: r31986361 
o|substituted constant variable: r32066365 
o|substituted constant variable: r32066365 
o|substituted constant variable: r33236380 
o|substituted constant variable: r33236380 
o|substituted constant variable: r33236382 
o|substituted constant variable: r33236382 
o|substituted constant variable: r33756391 
o|substituted constant variable: r33756391 
o|substituted constant variable: r33756393 
o|substituted constant variable: r33756393 
o|substituted constant variable: loc444 
o|substituted constant variable: r36076407 
o|substituted constant variable: r36076407 
o|substituted constant variable: r35946414 
o|substituted constant variable: r35946414 
o|substituted constant variable: r37236420 
o|substituted constant variable: r41576451 
o|substituted constant variable: r41576451 
o|substituted constant variable: r42206460 
o|removed side-effect free assignment to unused variable: badmode823 
o|inlining procedure: k4265 
o|inlining procedure: k4305 
o|inlining procedure: k4657 
o|substituted constant variable: r46716508 
o|inlining procedure: k4657 
o|inlining procedure: k4657 
o|inlining procedure: k4744 
o|substituted constant variable: r48336519 
o|substituted constant variable: r48826527 
o|substituted constant variable: r48826527 
o|folded constant expression: (fx< (quote -1) (quote 0)) 
o|substituted constant variable: r49426539 
o|substituted constant variable: r51146547 
o|substituted constant variable: r51146547 
o|substituted constant variable: r54216566 
o|substituted constant variable: r54216566 
o|substituted constant variable: c-pointer12341251 
o|substituted constant variable: c-pointer12341251 
o|substituted constant variable: c-pointer12341251 
o|substituted constant variable: r54686569 
o|substituted constant variable: r54686569 
o|substituted constant variable: r54686571 
o|substituted constant variable: r54686571 
o|inlining procedure: k5825 
o|substituted constant variable: r58066587 
o|substituted constant variable: r58066587 
o|converted assignments to bindings: (check1002) 
o|substituted constant variable: r62286600 
o|substituted constant variable: r62626607 
o|substituted constant variable: r62626607 
o|simplifications: ((let . 2)) 
o|replaced variables: 42 
o|removed binding forms: 661 
o|removed conditional forms: 1 
o|inlining procedure: k3052 
o|inlining procedure: k3783 
o|inlining procedure: k3783 
o|inlining procedure: k3980 
o|inlining procedure: k3980 
o|inlining procedure: k4028 
o|inlining procedure: k4028 
o|contracted procedure: k5338 
o|inlining procedure: k5585 
o|inlining procedure: k5645 
o|inlining procedure: k5837 
o|inlining procedure: k5837 
o|replaced variables: 18 
o|removed binding forms: 119 
o|substituted constant variable: r25756609 
o|substituted constant variable: r25756611 
o|substituted constant variable: r25756613 
o|substituted constant variable: r30536705 
o|substituted constant variable: r30536705 
o|substituted constant variable: r37846720 
o|substituted constant variable: r39816723 
o|substituted constant variable: r40296725 
o|substituted constant variable: r46586672 
o|substituted constant variable: r46586674 
o|substituted constant variable: r46586676 
o|substituted constant variable: r5339 
o|substituted constant variable: r58386743 
o|inlining procedure: k6188 
o|inlining procedure: k6188 
o|simplifications: ((let . 3)) 
o|replaced variables: 2 
o|removed binding forms: 19 
o|removed conditional forms: 4 
o|inlining procedure: k4817 
o|inlining procedure: k4817 
o|substituted constant variable: a5337 
o|substituted constant variable: r61896777 
o|replaced variables: 1 
o|removed binding forms: 15 
o|substituted constant variable: r48186807 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|simplifications: ((if . 57) (##core#call . 396)) 
o|  call simplifications:
o|    <
o|    ##sys#structure?
o|    ##sys#check-structure	2
o|    ##sys#make-structure	2
o|    +	2
o|    ##sys#foreign-pointer-argument	7
o|    ##sys#foreign-string-argument	5
o|    string-length
o|    char-whitespace?
o|    *
o|    fx>=	2
o|    string-set!
o|    bitwise-ior	2
o|    fxior	3
o|    list	5
o|    values	11
o|    ##sys#fudge
o|    vector-set!	2
o|    char=?
o|    ##sys#foreign-block-argument	2
o|    ##sys#foreign-integer-argument	4
o|    fx-	6
o|    ##sys#check-number	4
o|    ##sys#check-vector
o|    procedure?
o|    member
o|    fx+	8
o|    string-ref	3
o|    fx>
o|    cons	8
o|    ##sys#size	11
o|    ##sys#call-with-values	8
o|    not	5
o|    ##sys#check-string	19
o|    ##sys#check-list	3
o|    fx=	10
o|    zero?	2
o|    ##sys#null-pointer?	5
o|    pair?	14
o|    ##sys#check-exact	25
o|    ##sys#slot	16
o|    eq?	32
o|    cdr	20
o|    ##sys#eqv?	7
o|    null?	54
o|    car	35
o|    vector
o|    fixnum?	4
o|    string?
o|    fx<	13
o|    ##sys#foreign-fixnum-argument	12
o|    apply	9
o|contracted procedure: k2241 
o|contracted procedure: k2270 
o|contracted procedure: k2279 
o|contracted procedure: k2285 
o|contracted procedure: k2313 
o|contracted procedure: k2304 
o|contracted procedure: k2434 
o|contracted procedure: k2356 
o|contracted procedure: k2428 
o|contracted procedure: k2359 
o|contracted procedure: k2422 
o|contracted procedure: k2362 
o|contracted procedure: k2416 
o|contracted procedure: k2365 
o|contracted procedure: k2377 
o|contracted procedure: k2383 
o|contracted procedure: k2389 
o|contracted procedure: k2395 
o|contracted procedure: k2401 
o|contracted procedure: k2407 
o|contracted procedure: k2413 
o|contracted procedure: k2519 
o|contracted procedure: k2522 
o|contracted procedure: k2544 
o|contracted procedure: k2540 
o|contracted procedure: k2550 
o|contracted procedure: k2556 
o|contracted procedure: k2577 
o|contracted procedure: k2584 
o|contracted procedure: k2610 
o|contracted procedure: k2622 
o|contracted procedure: k2636 
o|contracted procedure: k2692 
o|contracted procedure: k2655 
o|contracted procedure: k2684 
o|contracted procedure: k2674 
o|contracted procedure: k2698 
o|contracted procedure: k2707 
o|contracted procedure: k2713 
o|contracted procedure: k2716 
o|contracted procedure: k2719 
o|contracted procedure: k2750 
o|contracted procedure: k2725 
o|contracted procedure: k2839 
o|contracted procedure: k2759 
o|contracted procedure: k2771 
o|contracted procedure: k2778 
o|contracted procedure: k2804 
o|contracted procedure: k2819 
o|contracted procedure: k2829 
o|contracted procedure: k2833 
o|contracted procedure: k2956 
o|contracted procedure: k2848 
o|contracted procedure: k2851 
o|contracted procedure: k2953 
o|contracted procedure: k2857 
o|contracted procedure: k2890 
o|contracted procedure: k2935 
o|contracted procedure: k3086 
o|contracted procedure: k2968 
o|contracted procedure: k3080 
o|contracted procedure: k2971 
o|contracted procedure: k3074 
o|contracted procedure: k2974 
o|contracted procedure: k2977 
o|contracted procedure: k2996 
o|contracted procedure: k3011 
o|contracted procedure: k3015 
o|contracted procedure: k3021 
o|contracted procedure: k3067 
o|contracted procedure: k3024 
o|contracted procedure: k3043 
o|contracted procedure: k3046 
o|contracted procedure: k3061 
o|contracted procedure: k3052 
o|contracted procedure: k3092 
o|contracted procedure: k3113 
o|contracted procedure: k3116 
o|contracted procedure: k3147 
o|contracted procedure: k3154 
o|contracted procedure: k3177 
o|contracted procedure: k3193 
o|contracted procedure: k3211 
o|contracted procedure: k3233 
o|contracted procedure: k3236 
o|contracted procedure: k3239 
o|contracted procedure: k3251 
o|contracted procedure: k3260 
o|contracted procedure: k3286 
o|contracted procedure: k3377 
o|contracted procedure: k3396 
o|contracted procedure: k3460 
o|contracted procedure: k3473 
o|contracted procedure: k3466 
o|contracted procedure: k3482 
o|contracted procedure: k3488 
o|contracted procedure: k3503 
o|contracted procedure: k3509 
o|contracted procedure: k3534 
o|contracted procedure: k3551 
o|contracted procedure: k3547 
o|contracted procedure: k3526 
o|contracted procedure: k3557 
o|contracted procedure: k3667 
o|contracted procedure: k3614 
o|contracted procedure: k3623 
o|contracted procedure: k3606 
o|contracted procedure: k3657 
o|contracted procedure: k3653 
o|contracted procedure: k3593 
o|contracted procedure: k3676 
o|contracted procedure: k3679 
o|contracted procedure: k3693 
o|contracted procedure: k3734 
o|contracted procedure: k3741 
o|contracted procedure: k3749 
o|contracted procedure: k3761 
o|contracted procedure: k3765 
o|contracted procedure: k3772 
o|contracted procedure: k3708 
o|contracted procedure: k3779 
o|contracted procedure: k3862 
o|contracted procedure: k3802 
o|contracted procedure: k3856 
o|contracted procedure: k3805 
o|contracted procedure: k3850 
o|contracted procedure: k3808 
o|contracted procedure: k3844 
o|contracted procedure: k3811 
o|contracted procedure: k3814 
o|contracted procedure: k3817 
o|contracted procedure: k3835 
o|contracted procedure: k6166 
o|contracted procedure: k3894 
o|contracted procedure: k3902 
o|contracted procedure: k3905 
o|contracted procedure: k3908 
o|contracted procedure: k3918 
o|contracted procedure: k3927 
o|contracted procedure: k3934 
o|contracted procedure: k3940 
o|contracted procedure: k3953 
o|contracted procedure: k3956 
o|contracted procedure: k3971 
o|contracted procedure: k3986 
o|contracted procedure: k3997 
o|contracted procedure: k4006 
o|contracted procedure: k4012 
o|contracted procedure: k4021 
o|contracted procedure: k4037 
o|contracted procedure: k4040 
o|contracted procedure: k4049 
o|contracted procedure: k4072 
o|contracted procedure: k4076 
o|contracted procedure: k4082 
o|contracted procedure: k4088 
o|contracted procedure: k4095 
o|contracted procedure: k4105 
o|contracted procedure: k4114 
o|contracted procedure: k4117 
o|contracted procedure: k4124 
o|contracted procedure: k4142 
o|contracted procedure: k4160 
o|contracted procedure: k4176 
o|contracted procedure: k4182 
o|contracted procedure: k4189 
o|contracted procedure: k4197 
o|contracted procedure: k4206 
o|contracted procedure: k4222 
o|contracted procedure: k4243 
o|contracted procedure: k4255 
o|contracted procedure: k4268 
o|contracted procedure: k4278 
o|contracted procedure: k4295 
o|contracted procedure: k4308 
o|contracted procedure: k4318 
o|contracted procedure: k4344 
o|contracted procedure: k4362 
o|contracted procedure: k4506 
o|contracted procedure: k4487 
o|contracted procedure: k4496 
o|contracted procedure: k4542 
o|contracted procedure: k4586 
o|contracted procedure: k4589 
o|contracted procedure: k4595 
o|contracted procedure: k4612 
o|contracted procedure: k4615 
o|contracted procedure: k4660 
o|contracted procedure: k4667 
o|contracted procedure: k4696 
o|contracted procedure: k4708 
o|contracted procedure: k4722 
o|contracted procedure: k4760 
o|contracted procedure: k4747 
o|contracted procedure: k4770 
o|contracted procedure: k4779 
o|contracted procedure: k4788 
o|contracted procedure: k4791 
o|contracted procedure: k4794 
o|contracted procedure: k4820 
o|contracted procedure: k48086806 
o|contracted procedure: k48086811 
o|contracted procedure: k4839 
o|contracted procedure: k4868 
o|contracted procedure: k4888 
o|contracted procedure: k4884 
o|contracted procedure: k4891 
o|contracted procedure: k4897 
o|contracted procedure: k4903 
o|contracted procedure: k4915 
o|contracted procedure: k4973 
o|contracted procedure: k4979 
o|inlining procedure: k4988 
o|inlining procedure: k4988 
o|contracted procedure: k4932 
o|contracted procedure: k4944 
o|contracted procedure: k4961 
o|contracted procedure: k4950 
o|contracted procedure: k4957 
o|contracted procedure: k5005 
o|contracted procedure: k5013 
o|contracted procedure: k5020 
o|contracted procedure: k5026 
o|contracted procedure: k5034 
o|contracted procedure: k5041 
o|contracted procedure: k5049 
o|contracted procedure: k5061 
o|contracted procedure: k5067 
o|contracted procedure: k5070 
o|contracted procedure: k5082 
o|contracted procedure: k5086 
o|contracted procedure: k5094 
o|contracted procedure: k5120 
o|contracted procedure: k5132 
o|contracted procedure: k5199 
o|contracted procedure: k5141 
o|contracted procedure: k5193 
o|contracted procedure: k5144 
o|contracted procedure: k5187 
o|contracted procedure: k5147 
o|contracted procedure: k5181 
o|contracted procedure: k5150 
o|contracted procedure: k5175 
o|contracted procedure: k5153 
o|contracted procedure: k5169 
o|contracted procedure: k5156 
o|contracted procedure: k5266 
o|contracted procedure: k5208 
o|contracted procedure: k5260 
o|contracted procedure: k5211 
o|contracted procedure: k5254 
o|contracted procedure: k5214 
o|contracted procedure: k5248 
o|contracted procedure: k5217 
o|contracted procedure: k5242 
o|contracted procedure: k5220 
o|contracted procedure: k5236 
o|contracted procedure: k5223 
o|contracted procedure: k5322 
o|contracted procedure: k5478 
o|contracted procedure: k5392 
o|contracted procedure: k5342 
o|contracted procedure: k5346 
o|contracted procedure: k5350 
o|contracted procedure: k5354 
o|contracted procedure: k5358 
o|contracted procedure: k5380 
o|contracted procedure: k5387 
o|contracted procedure: k5459 
o|contracted procedure: k5463 
o|contracted procedure: k5475 
o|contracted procedure: k5488 
o|contracted procedure: k5505 
o|contracted procedure: k5515 
o|contracted procedure: k5519 
o|contracted procedure: k5522 
o|contracted procedure: k5621 
o|contracted procedure: k5570 
o|contracted procedure: k5615 
o|contracted procedure: k5573 
o|contracted procedure: k5609 
o|contracted procedure: k5576 
o|contracted procedure: k5603 
o|contracted procedure: k5579 
o|contracted procedure: k5597 
o|contracted procedure: k5582 
o|contracted procedure: k5591 
o|contracted procedure: k5585 
o|contracted procedure: k5681 
o|contracted procedure: k5630 
o|contracted procedure: k5675 
o|contracted procedure: k5633 
o|contracted procedure: k5669 
o|contracted procedure: k5636 
o|contracted procedure: k5663 
o|contracted procedure: k5639 
o|contracted procedure: k5657 
o|contracted procedure: k5642 
o|contracted procedure: k5651 
o|contracted procedure: k5645 
o|contracted procedure: k5702 
o|contracted procedure: k5805 
o|contracted procedure: k5776 
o|contracted procedure: k5780 
o|contracted procedure: k5784 
o|contracted procedure: k5788 
o|contracted procedure: k5792 
o|contracted procedure: k5796 
o|contracted procedure: k5843 
o|contracted procedure: k5869 
o|contracted procedure: k5878 
o|contracted procedure: k5889 
o|contracted procedure: k5857 
o|contracted procedure: k5861 
o|contracted procedure: k5892 
o|contracted procedure: k5902 
o|contracted procedure: k6172 
o|contracted procedure: k6197 
o|contracted procedure: k6181 
o|contracted procedure: k6184 
o|contracted procedure: k6206 
o|contracted procedure: k6218 
o|contracted procedure: k6234 
o|contracted procedure: k6230 
o|contracted procedure: k6240 
o|contracted procedure: k6255 
o|contracted procedure: k6277 
o|contracted procedure: k6268 
o|simplifications: ((if . 1) (let . 62)) 
o|removed binding forms: 326 
o|inlining procedure: k3479 
o|inlining procedure: k3500 
o|inlining procedure: "(posixwin.scm:839) mode822" 
o|inlining procedure: "(posixwin.scm:849) mode822" 
o|inlining procedure: k5009 
o|inlining procedure: k5030 
o|replaced variables: 191 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: mode822 
o|substituted constant variable: r50107011 
o|substituted constant variable: r50107011 
o|substituted constant variable: r50317014 
o|substituted constant variable: r50317014 
o|replaced variables: 10 
o|removed binding forms: 92 
o|contracted procedure: k5822 
o|contracted procedure: k5885 
o|converted assignments to bindings: (check824) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 14 
o|contracted procedure: k4258 
o|contracted procedure: k4298 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop1107 0 
o|direct leaf routine/allocation: g13381345 0 
o|contracted procedure: k4995 
o|converted assignments to bindings: (loop1107) 
o|contracted procedure: "(posixwin.scm:1303) k5508" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|replaced variables: 3 
o|removed binding forms: 1 
o|direct leaf routine/allocation: for-each-loop13371355 0 
o|converted assignments to bindings: (for-each-loop13371355) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k5872 k5816 k5831 %process1326 chkstrlst1333 k5302 $exec-setup $exec-teardown $quote-args-list build-exec-argvec1122 doloop11471148 loop1114 k4862 k4874 k4773 mode1018 check1019 check1002 check824 k4169 loop794 suffix-loop807 loop805 k4003 k3899 scan638 loop635 check-time-vector k3214 k3217 loop456 g428429 loop420 conc-loop401 k3030 loop380 k2879 loop333 g293300 for-each-loop292309 rmdir286 k2701 mode206 check207 k2516 ##sys#stat) 
o|calls to known targets: 165 
o|unused rest argument: _452 f_3399 
o|unused rest argument: _451 f_3391 
o|unused rest argument: _491 f_3451 
o|identified direct recursive calls: f_3729 1 
o|identified direct recursive calls: f_4939 1 
o|identified direct recursive calls: f_4968 1 
o|identified direct recursive calls: f_5500 1 
o|unused rest argument: _15161520 f_5915 
o|unused rest argument: _15231527 f_5921 
o|unused rest argument: _15291533 f_5927 
o|unused rest argument: _15351539 f_5933 
o|unused rest argument: _15411545 f_5939 
o|unused rest argument: _15471551 f_5945 
o|unused rest argument: _15531557 f_5951 
o|unused rest argument: _15591563 f_5957 
o|unused rest argument: _15651569 f_5963 
o|unused rest argument: _15711575 f_5969 
o|unused rest argument: _15771581 f_5975 
o|unused rest argument: _15831587 f_5981 
o|unused rest argument: _15891593 f_5987 
o|unused rest argument: _15951599 f_5993 
o|unused rest argument: _16011605 f_5999 
o|unused rest argument: _16071611 f_6005 
o|unused rest argument: _16131617 f_6011 
o|unused rest argument: _16191623 f_6017 
o|unused rest argument: _16251629 f_6023 
o|unused rest argument: _16311635 f_6029 
o|unused rest argument: _16371641 f_6035 
o|unused rest argument: _16431647 f_6041 
o|unused rest argument: _16491653 f_6047 
o|unused rest argument: _16551659 f_6053 
o|unused rest argument: _16611665 f_6059 
o|unused rest argument: _16671671 f_6065 
o|unused rest argument: _16731677 f_6071 
o|unused rest argument: _16791683 f_6077 
o|unused rest argument: _16851689 f_6083 
o|unused rest argument: _16911695 f_6089 
o|unused rest argument: _16971701 f_6095 
o|unused rest argument: _17031707 f_6101 
o|unused rest argument: _17091713 f_6107 
o|unused rest argument: _17151719 f_6113 
o|unused rest argument: _17211725 f_6119 
o|unused rest argument: _17271731 f_6125 
o|unused rest argument: _17331737 f_6131 
o|unused rest argument: _17391743 f_6137 
o|unused rest argument: _17451749 f_6143 
o|unused rest argument: _17511755 f_6149 
o|fast box initializations: 17 
o|fast global references: 75 
o|fast global assignments: 7 
o|dropping unused closure argument: f_4688 
o|dropping unused closure argument: f_4651 
o|dropping unused closure argument: f_5124 
o|dropping unused closure argument: f_4235 
o|dropping unused closure argument: f_4610 
o|dropping unused closure argument: f_2763 
o|dropping unused closure argument: f_2568 
o|dropping unused closure argument: f_5044 
o|dropping unused closure argument: f_4925 
o|dropping unused closure argument: f_3458 
o|dropping unused closure argument: f_5484 
o|dropping unused closure argument: f_2262 
o|dropping unused closure argument: f_2605 
*/
/* end of file */
