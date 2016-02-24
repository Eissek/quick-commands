/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file tcp.c
   unit: tcp
*/

#include "chicken.h"

#ifdef _WIN32
# include <winsock2.h>
# include <ws2tcpip.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t	 int
static WSADATA wsa;
# ifndef SHUT_RD
#  define SHUT_RD	  SD_RECEIVE
# endif
# ifndef SHUT_WR
#  define SHUT_WR	  SD_SEND
# endif

# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  C_return(C_mk_bool(ioctlsocket(fd, FIONBIO, (void *)&fd) != SOCKET_ERROR)) ;
}

/* This is a bit of a hack, but it keeps things simple */
static C_TLS char *last_wsa_errorstring = NULL;

static char *errormsg_from_code(int code) {
  int bufsize;
  if (last_wsa_errorstring != NULL) {
    LocalFree(last_wsa_errorstring);
    last_wsa_errorstring = NULL;
  }
  bufsize = FormatMessage(
	FORMAT_MESSAGE_ALLOCATE_BUFFER |
	FORMAT_MESSAGE_FROM_SYSTEM |
	FORMAT_MESSAGE_IGNORE_INSERTS,
	NULL, code, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
	(LPTSTR) &last_wsa_errorstring, 0, NULL);
  if (bufsize == 0) return "ERROR WHILE FETCHING ERROR";
  return last_wsa_errorstring;
}

# define get_last_socket_error()  WSAGetLastError()
# define should_retry_call()      (WSAGetLastError() == WSAEWOULDBLOCK)
/* Not EINPROGRESS in winsock.  Nonblocking connect returns EWOULDBLOCK... */
# define call_in_progress()       (WSAGetLastError() == WSAEWOULDBLOCK)
# define call_was_interrupted()   (WSAGetLastError() == WSAEINTR) /* ? */

#else
# include <errno.h>
# include <fcntl.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define SOCKET_ERROR    -1
# define typecorrect_getsockopt getsockopt

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  int val = fcntl(fd, F_GETFL, 0);
  if(val == -1) C_return(C_SCHEME_FALSE);
  C_return(C_mk_bool(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1));
}

# define get_last_socket_error()  errno
# define errormsg_from_code(e)    strerror(e)

# define should_retry_call()      (errno == EAGAIN || errno == EWOULDBLOCK)
# define call_was_interrupted()   (errno == EINTR)
# define call_in_progress()       (errno == EINPROGRESS)
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static int C_set_socket_options(int socket)
{
  int yes = 1; 
  int r;

  r = setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int));
  
  if(r != 0) return r;

#ifdef SO_NOSIGPIPE
  /*
   * Avoid SIGPIPE (iOS uses *only* SIGPIPE otherwise, not returning EPIPE).
   * For consistency we do this everywhere the option is supported.
   */
  r = setsockopt(socket, SOL_SOCKET, SO_NOSIGPIPE, (const char *)&yes, sizeof(int));
#endif

  return r;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,53),40,35,35,110,101,116,35,103,101,116,104,111,115,116,97,100,100,114,32,115,97,100,100,114,50,49,57,50,50,54,32,104,111,115,116,50,50,48,50,50,55,32,112,111,114,116,50,50,49,50,50,56,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,32),40,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,51,56,48,32,46,32,116,109,112,51,55,57,51,56,49,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,52,48,55,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,19),40,116,99,112,45,99,108,111,115,101,32,116,99,112,108,52,49,48,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,57,51,32,120,52,50,51,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,14),40,99,104,101,99,107,32,108,111,99,52,50,50,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,56,48,55,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,30),40,108,111,111,112,32,108,101,110,53,51,54,32,111,102,102,115,101,116,53,51,55,32,100,108,119,53,51,56,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,111,117,116,112,117,116,32,115,53,51,51,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,102,95,49,57,57,48,32,115,53,54,52,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,49,48,32,115,53,54,55,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,97,49,57,48,51,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,102,95,49,57,55,52,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,50,48,50,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,50,48,52,55,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,97,50,48,56,57,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,50,49,51,57,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,52,57,53,32,109,52,57,54,32,115,116,97,114,116,52,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,34),40,97,50,49,53,55,32,112,52,57,48,32,110,52,57,49,32,100,101,115,116,52,57,50,32,115,116,97,114,116,52,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,14),40,97,50,50,53,48,32,112,111,115,53,49,52,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,50,50,52,48,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,37),40,97,50,50,57,54,32,110,101,120,116,53,50,50,32,108,105,110,101,53,50,51,32,102,117,108,108,45,108,105,110,101,63,53,50,52,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,21),40,97,50,50,50,50,32,112,53,48,56,32,108,105,109,105,116,53,48,57,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,12),40,97,50,51,52,53,32,112,53,50,57,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,29),40,35,35,110,101,116,35,105,111,45,112,111,114,116,115,32,108,111,99,52,51,50,32,102,100,52,51,51,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,53,56,54,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,54,48,54,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,51,51,57,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,50,55,57,49,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,29),40,97,50,55,57,55,32,104,111,115,116,54,50,57,54,51,49,32,112,111,114,116,54,51,48,54,51,50,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,31),40,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,54,49,56,32,46,32,109,111,114,101,54,49,57,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,54,56,55,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,54,57,48,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,55,48,52,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,55,49,54,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,55,50,52,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,26),40,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,55,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub614(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub614(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == SOCKET_ERROR)  C_return(SOCKET_ERROR);C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub350(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub350(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons(port);addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub222(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub222(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);struct sockaddr_in *addr = (struct sockaddr_in *)saddr;if(he == NULL) C_return(0);memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons((short)port);addr->sin_addr = *((struct in_addr *)he->h_addr);C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub210(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub210(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) C_return(0);
     else C_return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub205(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub205(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     C_return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     C_return(1);
#endif
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub200(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub200(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((socklen_t *)&len)) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub195(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub195(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub190(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub190(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub184(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub184(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub173(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub173(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
C_return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k1123 */
static C_word C_fcall stub164(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub164(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_set_socket_options(t0));
return C_r;}

/* from k1116 */
static C_word C_fcall stub159(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub159(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

/* from k1106 */
static C_word C_fcall stub150(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub150(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k1091 */
static C_word C_fcall stub142(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub142(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k1077 */
static C_word C_fcall stub131(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub131(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k1058 */
static C_word C_fcall stub123(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub123(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k1045 */
static C_word C_fcall stub112(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub112(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k1030 */
static C_word C_fcall stub104(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub104(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k1016 */
static C_word C_fcall stub94(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub94(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k1001 */
static C_word C_fcall stub85(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub85(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

/* from ##net#interrupted? */
static C_word C_fcall stub79(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub79(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_was_interrupted());
return C_r;}

/* from ##net#in-progress? */
static C_word C_fcall stub76(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub76(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_in_progress());
return C_r;}

/* from ##net#retry? */
static C_word C_fcall stub73(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub73(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(should_retry_call());
return C_r;}

/* from k977 */
static C_word C_fcall stub68(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub68(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)errormsg_from_code(t0));
return C_r;}

/* from ##net#last-error-code */
static C_word C_fcall stub64(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub64(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)get_last_socket_error());
return C_r;}

C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_fcall f_2402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1921)
static void C_fcall f_1921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1958)
static void C_fcall f_1958(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_fcall f_1622(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_fcall f_2544(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_fcall f_1639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_fcall f_1638(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1646)
static void C_fcall f_1646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1220)
static void C_fcall f_1220(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1254)
static void C_fcall f_1254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_fcall f_1912(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_fcall f_1915(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_fcall f_2236(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_fcall f_2164(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1737)
static void C_fcall f_1737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_fcall f_1752(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1754)
static void C_fcall f_1754(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1591)
static void C_fcall f_1591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_fcall f_2104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_fcall f_2098(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2402)
static void C_fcall trf_2402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2402(t0,t1);}

C_noret_decl(trf_1921)
static void C_fcall trf_1921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1921(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1921(t0,t1);}

C_noret_decl(trf_1958)
static void C_fcall trf_1958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1958(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1958(t0,t1);}

C_noret_decl(trf_1622)
static void C_fcall trf_1622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1622(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1622(t0,t1,t2,t3);}

C_noret_decl(trf_2544)
static void C_fcall trf_2544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2544(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2544(t0,t1);}

C_noret_decl(trf_1639)
static void C_fcall trf_1639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1639(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1639(t0,t1);}

C_noret_decl(trf_1638)
static void C_fcall trf_1638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1638(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1638(t0,t1);}

C_noret_decl(trf_1646)
static void C_fcall trf_1646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1646(t0,t1);}

C_noret_decl(trf_1220)
static void C_fcall trf_1220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1220(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1220(t0,t1,t2,t3);}

C_noret_decl(trf_1254)
static void C_fcall trf_1254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1254(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1254(t0,t1,t2);}

C_noret_decl(trf_1912)
static void C_fcall trf_1912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1912(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1912(t0,t1);}

C_noret_decl(trf_1915)
static void C_fcall trf_1915(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1915(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1915(t0,t1);}

C_noret_decl(trf_2236)
static void C_fcall trf_2236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2236(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2236(t0,t1);}

C_noret_decl(trf_2164)
static void C_fcall trf_2164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2164(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2164(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1737)
static void C_fcall trf_1737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1737(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1737(t0,t1,t2);}

C_noret_decl(trf_1752)
static void C_fcall trf_1752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1752(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1752(t0,t1);}

C_noret_decl(trf_1754)
static void C_fcall trf_1754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1754(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1754(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1591)
static void C_fcall trf_1591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1591(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1591(t0,t1);}

C_noret_decl(trf_2104)
static void C_fcall trf_2104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2104(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2104(t0,t1);}

C_noret_decl(trf_2098)
static void C_fcall trf_2098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2098(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2098(t0,t1);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

/* loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2411,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:546: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t2,*((C_word*)lf[28]+1),((C_word*)t0)[6]);}
else{
t3=t2;
f_2411(2,t3,C_SCHEME_UNDEFINED);}}

/* k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_2402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2402,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word)li27),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2407(2,t6,((C_word*)t0)[5]);}

/* loop in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2637,2,t0,t1);}
t2=C_fix((C_word)sizeof(struct sockaddr_in));
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub150(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
if(C_truep(stub76(C_SCHEME_UNDEFINED))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2653,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* tcp.scm:601: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t8,*((C_word*)lf[28]+1),((C_word*)t0)[4]);}
else{
t9=t8;
f_2653(2,t9,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
/* tcp.scm:605: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t1,((C_word*)((C_word*)t0)[5])[1]);}
else{
t8=stub64(C_SCHEME_UNDEFINED);
t9=t8;
t10=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t11=stub123(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2684,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2688,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t13,lf[67],lf[10]);}}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1435r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1435r(t0,t1,t2,t3);}}

static void C_ccall f_1435r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(6);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(100):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_check_exact(t2);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1454,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
t16=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t16)){
if(C_truep(t16)){
/* tcp.scm:318: ##sys#signal-hook */
t17=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t17+1)))(6,t17,t15,lf[17],lf[2],lf[18],t2);}
else{
t17=t15;
f_1454(2,t17,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(65535)))){
/* tcp.scm:318: ##sys#signal-hook */
t17=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t17+1)))(6,t17,t15,lf[17],lf[2],lf[18],t2);}
else{
t17=t15;
f_1454(2,t17,C_SCHEME_UNDEFINED);}}}

/* k1425 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1345(2,t3,t2);}
else{
/* tcp.scm:299: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[5],lf[2],lf[15],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2631 in k2627 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:614: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2418 in k2415 in k2412 in k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub112(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(t4)){
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
/* tcp.scm:558: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t6,lf[60],lf[10]);}}
else{
/* tcp.scm:556: ##net#io-ports */
t5=lf[27];
f_1622(t5,((C_word*)t0)[3],lf[59],t3);}}

/* k3001 in k2997 in tcp-listener-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:648: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2415 in k2412 in k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_slot(*((C_word*)lf[28]+1),C_fix(13)))){
/* tcp.scm:550: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[29],lf[59],lf[61],((C_word*)t0)[6],((C_word*)t0)[2]);}
else{
t3=t2;
f_2420(2,t3,C_SCHEME_UNDEFINED);}}

/* k2412 in k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:548: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(2,*((C_word*)lf[31]+1),t2);}

/* k1705 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:388: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],C_SCHEME_FALSE,t1,((C_word*)t0)[3]);}

/* k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:547: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(5,*((C_word*)lf[32]+1),t2,*((C_word*)lf[28]+1),((C_word*)t0)[2],lf[33]);}

/* k2654 in k2651 in loop in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:603: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(2,*((C_word*)lf[31]+1),((C_word*)t0)[2]);}

/* tcp-abandon-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3011,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[88]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3021,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:654: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t5,t2);}

/* k1671 in k1668 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:379: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(2,*((C_word*)lf[31]+1),t2);}

/* k1668 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1670,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:378: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(5,*((C_word*)lf[32]+1),t2,*((C_word*)lf[28]+1),((C_word*)t0)[5],lf[33]);}

/* k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1454,2,t0,t1);}
t2=C_i_check_exact(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1460,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=C_fix((C_word)SOCK_STREAM);
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[4];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1342,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:296: make-string */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k2651 in loop in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:602: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(5,*((C_word*)lf[32]+1),t2,*((C_word*)lf[28]+1),((C_word*)t0)[3],lf[39]);}

/* k3019 in tcp-abandon-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_set_i_slot(t1,C_fix(1),C_SCHEME_TRUE):C_i_set_i_slot(t1,C_fix(2),C_SCHEME_TRUE)));}

/* k1677 in k1674 in k1671 in k1668 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 in ... */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:384: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1651(2,t2,((C_word*)t0)[3]);}

/* k1674 in k1671 in k1668 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[28]+1),C_fix(13)))){
/* tcp.scm:381: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[29],lf[30],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* tcp.scm:384: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1651(2,t3,((C_word*)t0)[3]);}}

/* k1713 in k1709 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:388: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1709 in loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1711(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1711,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2993 in tcp-listener-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:648: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[5],lf[86],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2997 in tcp-listener-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2999,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k1930 in k1919 in k1913 in k1910 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1932(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1932,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1936,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* tcp-listener-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2972,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[86]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_i_foreign_fixnum_argumentp(t5);
t7=stub190(C_SCHEME_UNDEFINED,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2985,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_eqp(C_fix(-1),t8);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2995,a[2]=t9,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t12,lf[87],lf[10]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t8);}}

/* k1934 in k1930 in k1919 in k1913 in k1910 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:525: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2983 in tcp-listener-port in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1919 in k1913 in k1910 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1921(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1921,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1932,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t3,lf[46],lf[10]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1926 in k1919 in k1913 in k1910 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:525: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],C_SCHEME_FALSE,t1,((C_word*)t0)[3]);}

/* tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2834,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[80]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2840,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:625: ##sys#tcp-port->fileno */
t6=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k1956 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1958(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1958,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:521: output */
t3=((C_word*)t0)[4];
f_1737(t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[3];
f_1912(t2,C_SCHEME_UNDEFINED);}}

/* k2818 in tcp-port->fileno in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(t1,C_fix(0)));}
else{
/* tcp.scm:621: error */
t2=*((C_word*)lf[77]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[76],lf[78],((C_word*)t0)[3]);}}

/* k2763 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2767 in k2763 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:592: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2759 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:592: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[5],lf[64],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k2855 in k2852 in k2848 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:626: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2852 in k2848 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* tcp.scm:626: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2864,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2868,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t4,lf[81],lf[10]);}}

/* k2848 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2850,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2854,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t6=stub200(t4,t5);
/* tcp.scm:209: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k960 in k957 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_965,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:145: register-feature! */
t3=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[93]);}

/* k963 in k960 in k957 */
static void C_ccall f_965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub205(C_SCHEME_UNDEFINED))){
t3=t2;
f_1193(2,t3,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm:230: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[5],lf[91]);}}

/* k2743 in k2739 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:594: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2739 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2745,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1608,2,t0,t1);}
t2=C_mutate2((C_word*)lf[23]+1 /* (set! tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:350: check */
f_1591(t4,lf[24]);}

/* k1890 in k1875 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:536: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(4,*((C_word*)lf[44]+1),t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1893 in k1890 in k1875 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:537: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2735 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:594: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[64],t1,((C_word*)t0)[3]);}

/* k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[57]+1)))(4,*((C_word*)lf[57]+1),t2,C_fix(1024),C_make_character(32));}

/* ##net#io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1622(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1622,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1626,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(make_socket_nonblocking(t3))){
t5=t4;
f_1626(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=stub64(C_SCHEME_UNDEFINED);
t6=t5;
t7=t3;
t8=C_i_foreign_fixnum_argumentp(t7);
t9=stub123(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2377,a[2]=t4,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2381,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t11,lf[58],lf[10]);}}

/* k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1620(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1620,2,t0,t1);}
t2=C_mutate2((C_word*)lf[26]+1 /* (set! tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[22]+1);
t4=C_mutate2(&lf[27] /* (set! ##net#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1622,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate2((C_word*)lf[59]+1 /* (set! tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[62]+1 /* (set! tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2484,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[64]+1 /* (set! tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[76]+1 /* (set! ##sys#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[80]+1 /* (set! tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2834,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[83]+1 /* (set! tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2901,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[86]+1 /* (set! tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2972,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[88]+1 /* (set! tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[89]+1 /* (set! tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_UNDEFINED);}

/* k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=C_i_check_exact(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2778,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:588: ##net#gethostaddr */
f_1220(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2901,3,t0,t1,t2);}
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[83]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2907,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:634: ##sys#tcp-port->fileno */
t6=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=stub164(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t5)){
t6=stub64(C_SCHEME_UNDEFINED);
t7=t6;
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t9=stub123(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2741,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t11,lf[69],lf[10]);}
else{
t6=t2;
f_2568(2,t6,C_SCHEME_UNDEFINED);}}

/* k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(make_socket_nonblocking(((C_word*)t0)[2]))){
t3=t2;
f_2571(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=stub64(C_SCHEME_UNDEFINED);
t4=t3;
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t6=stub123(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2711,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2715,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t8,lf[68],lf[10]);}}

/* k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1616,2,t0,t1);}
t2=C_mutate2((C_word*)lf[25]+1 /* (set! tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3041,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:352: check */
f_1591(t4,lf[26]);}

/* k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1612,2,t0,t1);}
t2=C_mutate2((C_word*)lf[24]+1 /* (set! tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:351: check */
f_1591(t4,lf[25]);}

/* k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1629,2,t0,t1);}
t2=t1;
t3=C_a_i_vector5(&a,5,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t2,C_fix(0));
t4=t3;
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1635,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t12,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:365: tbs */
t14=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t14))(2,t14,t13);}

/* k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2808,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:581: current-milliseconds */
t5=*((C_word*)lf[37]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2544(t4,C_SCHEME_FALSE);}}

/* k2914 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2932,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t5,lf[84],lf[10]);}
else{
/* tcp.scm:641: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2917 in k2914 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:641: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2559,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_fix((C_word)SOCK_STREAM);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub85(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2565,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(C_fix((C_word)INVALID_SOCKET),t8);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2761,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2765,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t12,lf[70],lf[10]);}
else{
t11=t9;
f_2565(2,t11,C_SCHEME_UNDEFINED);}}

/* k2806 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2544(t2,C_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(t1);
t3=stub190(C_SCHEME_UNDEFINED,t2);
t4=t3;
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub195(C_SCHEME_UNDEFINED,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=C_eqp(C_fix(-1),t4);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2956,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t11,lf[85],lf[10]);}
else{
t10=t8;
f_2916(2,t10,C_SCHEME_UNDEFINED);}}

/* k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1635,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=C_fixnum_greaterp(t2,C_fix(0));
t5=t3;
f_1638(t5,(C_truep(t4)?lf[56]:C_SCHEME_FALSE));}
else{
t4=t3;
f_1638(t4,C_SCHEME_FALSE);}}

/* k2958 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2960,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
t2=t1;
t3=C_i_check_string(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=t4;
f_2553(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2784,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:585: ##sys#call-with-values */
C_call_with_values(4,0,t5,t6,t7);}}

/* k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_2544(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2544,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:582: make-string */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1639,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:369: tcp-read-timeout */
t3=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1638(C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1638,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2048,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2090,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:394: make-input-port */
t13=*((C_word*)lf[55]+1);
((C_proc9)(void*)(*((C_word*)t13+1)))(9,t13,t5,t6,t7,t8,t9,t10,t11,t12);}

/* k1191 in k963 in k960 in k957 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1193,2,t0,t1);}
t2=C_mutate2(&lf[0] /* (set! ##net#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1220,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[2]+1 /* (set! tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1435,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[19]+1 /* (set! tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1534,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[20]+1 /* (set! tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1543,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:338: make-parameter */
t7=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_SCHEME_FALSE);}

/* tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_2534r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2534r(t0,t1,t2,t3);}}

static void C_ccall f_2534r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t3));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2541,a[2]=t4,a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:580: tcp-connect-timeout */
t10=*((C_word*)lf[25]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}

/* k2509 in tcp-accept-ready? in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2962 in k2958 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:638: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop in k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1651,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(t2);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(C_fix(1024));
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub131(C_SCHEME_UNDEFINED,t3,t4,t5,t6);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t8)){
if(C_truep(stub73(C_SCHEME_UNDEFINED))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:376: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t9,*((C_word*)lf[28]+1),((C_word*)t0)[6]);}
else{
t10=t9;
f_1670(2,t10,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
/* tcp.scm:386: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t1,((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1711,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t10,lf[36],lf[10]);}}}
else{
t9=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t7);
t10=C_i_set_i_slot(((C_word*)t0)[8],C_fix(4),t7);
t11=C_set_block_item(((C_word*)t0)[9],0,C_fix(0));
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}

/* k2446 in k2418 in k2415 in k2412 in k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:560: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[59],t1,((C_word*)t0)[3]);}

/* k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_2850(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2885,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t4,lf[82],lf[10]);}}

/* k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2840,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub184(t4,t5);
/* tcp.scm:185: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1817 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:499: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],C_SCHEME_FALSE,t1,((C_word*)t0)[3]);}

/* f_1990 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1990,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:510: ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t3,((C_word*)((C_word*)t0)[2])[1],t2);}

/* a1807 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1808,2,t0,t1);}
/* tcp.scm:497: g556 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1754(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1993 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1995,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:512: output */
t5=((C_word*)t0)[5];
f_1737(t5,t4,((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2454 in k2450 in k2418 in k2415 in k2412 in k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:560: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1982 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[48]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2450 in k2418 in k2415 in k2412 in k2409 in loop in k2400 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2452,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* tcp-listener-fileno in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3030,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[89]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* ##sys#tcp-port->fileno in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2816,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2820,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:618: ##sys#port-data */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[79]+1)))(3,*((C_word*)lf[79]+1),t3,t2);}

/* k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1643,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1733,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:370: current-milliseconds */
t5=*((C_word*)lf[37]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_1646(t4,C_SCHEME_FALSE);}}

/* k1644 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1646,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li6),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_1651(2,t6,((C_word*)t0)[8]);}

/* k3047 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:350: make-parameter */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(60000),t1);}

/* k1198 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1200,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
/* tcp.scm:233: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub210(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE));}}

/* k3039 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:352: make-parameter */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k1202 in k1198 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub210(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));}

/* k3043 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:351: make-parameter */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k3051 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:349: make-parameter */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(60000),t1);}

/* ##net#gethostaddr in k1191 in k963 in k960 in k957 */
static void C_fcall f_1220(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1220,NULL,4,t1,t2,t3,t4);}
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1229,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* tcp.scm:239: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t7,t8);}
else{
t8=C_i_foreign_fixnum_argumentp(t4);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub222(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t8));}}

/* loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1254,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* tcp.scm:275: values */
C_values(4,0,t1,((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t3=C_subchar(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1277,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:279: substring */
t6=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t5,((C_word*)t0)[2]);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:285: loop */
t8=t1;
t9=t4;
t1=t8;
t2=t9;
goto loop;}}}

/* k1227 in gethostaddr in k1191 in k963 in k960 in k957 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub222(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2));}

/* k2225 in a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2227,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_2236(t4,t2);}
else{
t4=C_fudge(C_fix(21));
t5=t3;
f_2236(t5,C_fixnum_difference(t4,((C_word*)((C_word*)t0)[2])[1]));}}}

/* k1875 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1877,2,t0,t1);}
t2=t1;
t3=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[41]);
t4=C_i_setslot(t2,C_fix(3),lf[42]);
t5=C_i_setslot(((C_word*)t0)[2],C_fix(7),lf[43]);
t6=C_i_setslot(t2,C_fix(7),lf[43]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:535: ##sys#set-port-data! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[44]+1)))(4,*((C_word*)lf[44]+1),t7,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1872 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1874,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1752(t2,C_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2223,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:439: read-input */
t5=((C_word*)t0)[5];
f_1639(t5,t4);}
else{
t5=t4;
f_2227(2,t5,C_SCHEME_UNDEFINED);}}

/* k1865 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1867,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:501: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1754(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k2210 in loop in a2157 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* tcp.scm:436: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2164(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k1910 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1912(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1912,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t3=t2;
f_1915(t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[3];
t4=C_fix((C_word)SHUT_WR);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t2;
f_1915(t7,stub142(C_SCHEME_UNDEFINED,t5,t6));}}

/* k1913 in k1910 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1915(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1915,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub123(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1921(t6,C_eqp(C_fix((C_word)SOCKET_ERROR),t5));}
else{
t3=t2;
f_1921(t3,C_SCHEME_FALSE);}}

/* a2240 in k2234 in k2225 in a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:444: ##sys#scan-buffer-line */
((C_proc6)C_fast_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),t1,((C_word*)t0)[5],t3,((C_word*)((C_word*)t0)[2])[1],t4);}

/* k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1277,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:280: substring */
t4=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}

/* k2234 in k2225 in a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_2236(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2236,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:442: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[7],t4,t5);}

/* tcp-close in k1191 in k963 in k960 in k957 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1543,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[3]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub123(C_SCHEME_UNDEFINED,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1563,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1567,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t9,lf[21],lf[10]);}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1904,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1912,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=C_block_size(((C_word*)((C_word*)t0)[6])[1]);
t6=t4;
f_1958(t6,C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1958(t5,C_SCHEME_FALSE);}}}

/* k2686 in loop in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2688,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2692,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2682 in loop in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:607: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[5],lf[64],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]);}

/* loop in a2157 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_2164(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_2164,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(0));
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
/* tcp.scm:431: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:433: read-input */
t7=((C_word*)t0)[7];
f_1639(t7,t6);}}}

/* k2265 in a2250 in a2240 in k2234 in k2225 in a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_fixnum_min(((C_word*)((C_word*)t0)[5])[1],t4);
/* tcp.scm:455: values */
C_values(5,0,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)((C_word*)t0)[4])[1],t5);}
else{
/* tcp.scm:458: values */
C_values(5,0,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_FALSE);}}

/* tcp-listener? in k1191 in k963 in k960 in k957 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1534,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[3]):C_SCHEME_FALSE));}

/* a2139 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:419: read-input */
t3=((C_word*)t0)[5];
f_1639(t3,t2);}
else{
t3=t2;
f_2144(2,t3,C_SCHEME_UNDEFINED);}}

/* k1379 in k1375 in k1352 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:310: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a2157 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2158,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word)li19),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_2164(t9,t1,t3,C_fix(0),t5);}

/* k1561 in tcp-close in k1191 in k963 in k960 in k957 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:333: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[20],t1,((C_word*)t0)[3]);}

/* k1565 in tcp-close in k1191 in k963 in k960 in k957 */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1567,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* a2250 in a2240 in k2234 in k2225 in a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2251,3,t0,t1,t2);}
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
t4=t3;
if(C_truep(C_fixnum_greater_or_equal_p(t4,((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:451: values */
C_values(5,0,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:452: read-input */
t6=((C_word*)t0)[6];
f_1639(t6,t5);}}

/* k1299 in k1282 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1305,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k1371 in k1352 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:310: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[5],lf[2],t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1303 in k1299 in k1282 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:283: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1375 in k1352 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1377,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2142 in a2139 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1585,2,t0,t1);}
t2=C_mutate2((C_word*)lf[22]+1 /* (set! tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[23] /* tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[24] /* tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[25] /* tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[26] /* tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:349: check */
f_1591(t9,lf[23]);}

/* k2690 in k2686 in loop in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:607: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1569 in k1565 in tcp-close in k1191 in k963 in k960 in k957 */
static void C_ccall f_1571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:333: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k957 */
static void C_ccall f_959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1395 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:308: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[2],t1,((C_word*)t0)[3]);}

/* f_1974 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1974,2,t0,t1);}
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:529: output */
t4=((C_word*)t0)[3];
f_1737(t4,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2578 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:615: ##net#io-ports */
t2=lf[27];
f_1622(t2,((C_word*)t0)[2],lf[64],((C_word*)t0)[3]);}

/* k1959 in k1956 in a1903 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[47]);
t3=((C_word*)t0)[3];
f_1912(t3,t2);}

/* k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1345,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_i_foreign_fixnum_argumentp(t2);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=stub85(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1351,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_eqp(C_fix((C_word)INVALID_SOCKET),t7);
if(C_truep(t9)){
/* tcp.scm:305: ##sys#error */
t10=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,lf[14]);}
else{
t10=t8;
f_1351(2,t10,C_SCHEME_UNDEFINED);}}

/* k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1342,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1427,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:298: ##net#gethostaddr */
f_1220(t4,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t4=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t6=t3;
f_1345(2,t6,stub350(C_SCHEME_UNDEFINED,t4,t5));}}

/* k2597 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:611: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[64],t1,((C_word*)t0)[3]);}

/* a2345 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2346,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[53]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:471: ##sys#substring */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[54]+1)))(5,*((C_word*)lf[54]+1),t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}}

/* k2883 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:627: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[80],t1,((C_word*)t0)[3]);}

/* k2887 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2605 in k2601 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:611: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2601 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2375 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:358: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2574,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub614(C_SCHEME_UNDEFINED,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t6)){
t7=stub64(C_SCHEME_UNDEFINED);
t8=t7;
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=stub123(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2599,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2603,a[2]=t11,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t12,lf[65],lf[10]);}
else{
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t8=stub123(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2629,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t10,lf[66],lf[10]);}
else{
/* tcp.scm:615: ##net#io-ports */
t7=lf[27];
f_1622(t7,((C_word*)t0)[3],lf[64],((C_word*)t0)[2]);}}}

/* k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_2637(2,t6,t2);}

/* k1352 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=(C_truep(((C_word*)t0)[4])?C_i_foreign_block_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub94(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t8)){
t9=stub64(C_SCHEME_UNDEFINED);
t10=t9;
t11=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t12=stub123(C_SCHEME_UNDEFINED,t11);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1373,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1377,a[2]=t13,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t14,lf[11],lf[10]);}
else{
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)t0)[3]);}}

/* k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=stub164(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1397,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t7,lf[12],lf[10]);}
else{
t6=t2;
f_1354(2,t6,C_SCHEME_UNDEFINED);}}

/* k1355 in k1352 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1741,2,t0,t1);}
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1752,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1874,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:480: current-milliseconds */
t7=*((C_word*)lf[37]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t5;
f_1752(t6,C_SCHEME_FALSE);}}

/* a2797 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2798,4,t0,t1,t2,t3);}
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_block_size(t2);
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1254,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1254(t8,t1,C_fix(0));}

/* k2627 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2623 in k2572 in k2569 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:614: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[5],lf[64],t1);}

/* k2354 in a2345 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k1731 in k1641 in read-input in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1733,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1646(t2,C_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1736,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=((C_word*)t0)[2],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1877,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2010,a[2]=t3,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word)li13),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:507: make-output-port */
t8=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t4,t5,t6,t7);}
else{
/* tcp.scm:507: make-output-port */
t7=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,t5,t6,C_SCHEME_FALSE);}}

/* output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1737,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1741,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:477: tcp-write-timeout */
t4=*((C_word*)lf[24]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1281,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=lf[74];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1200,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t7=C_i_foreign_string_argumentp(t2);
/* tcp.scm:233: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t6,t7);}
else{
t7=t6;
f_1200(2,t7,C_SCHEME_FALSE);}}

/* k1282 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1284,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1297,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1301,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t6,lf[73],lf[10]);}
else{
/* tcp.scm:278: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t2);}}

/* k2782 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2553(2,t3,t2);}
else{
/* tcp.scm:586: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[17],lf[64],lf[72],((C_word*)((C_word*)t0)[4])[1]);}}

/* k1295 in k1282 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:283: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[64],t1,((C_word*)t0)[3]);}

/* k2002 in k1993 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[45]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2776 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_2559(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm:589: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[64],lf[71],((C_word*)((C_word*)t0)[3])[1]);}}

/* k1285 in k1282 in k1279 in k1275 in loop in a2791 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:278: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1752(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1752,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1754(t5,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0),t1);}

/* loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1754(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1754,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_fixnum_min(C_fix(8192),t2);
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
t8=t3;
t9=C_i_foreign_fixnum_argumentp(t6);
t10=(C_truep(t7)?C_i_foreign_block_argumentp(t7):C_SCHEME_FALSE);
t11=C_i_foreign_fixnum_argumentp(t8);
t12=C_i_foreign_fixnum_argumentp(t5);
t13=C_i_foreign_fixnum_argumentp(C_fix(0));
t14=stub173(C_SCHEME_UNDEFINED,t9,t10,t11,t12,t13);
t15=C_eqp(C_fix((C_word)SOCKET_ERROR),t14);
if(C_truep(t15)){
if(C_truep(stub73(C_SCHEME_UNDEFINED))){
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1776,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
/* tcp.scm:486: ##sys#thread-block-for-timeout! */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[34]+1)))(4,*((C_word*)lf[34]+1),t16,*((C_word*)lf[28]+1),t4);}
else{
t17=t16;
f_1776(2,t17,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:496: ##sys#dispatch-interrupt */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t1,t16);}
else{
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1819,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1823,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t17,lf[40],lf[10]);}}}
else{
if(C_truep(C_fixnum_lessp(t14,t2))){
t16=C_fixnum_difference(t2,t14);
t17=t16;
t18=C_fixnum_plus(t3,t14);
t19=t18;
t20=C_eqp(t14,C_fix(0));
if(C_truep(t20)){
/* tcp.scm:501: loop */
t27=t1;
t28=t17;
t29=t19;
t30=((C_word*)t0)[5];
t1=t27;
t2=t28;
t3=t29;
t4=t30;
goto loop;}
else{
if(C_truep(((C_word*)t0)[5])){
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1867,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t17,a[6]=t19,tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:505: current-milliseconds */
t22=*((C_word*)lf[37]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
/* tcp.scm:501: loop */
t27=t1;
t28=t17;
t29=t19;
t30=C_SCHEME_FALSE;
t1=t27;
t2=t28;
t3=t29;
t4=t30;
goto loop;}}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}}}

/* k2870 in k2866 in k2852 in k2848 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:629: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1488 in k1484 in k1458 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:322: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2028 in a2025 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=C_subchar(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* check in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_1591(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1591,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1593,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));}

/* f_1593 in check in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1593,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_check_exact_2(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2862 in k2852 in k2848 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:629: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[80],t1,((C_word*)t0)[3]);}

/* k2866 in k2852 in k2848 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k1484 in k1458 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1486,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2934 in k2914 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2930 in k2914 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:640: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[83],t1,((C_word*)t0)[3]);}

/* a2025 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:397: read-input */
t3=((C_word*)t0)[5];
f_1639(t3,t2);}
else{
t3=t2;
f_2030(2,t3,C_SCHEME_UNDEFINED);}}

/* k1480 in k1458 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:322: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[5],lf[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2513 in k2509 in tcp-accept-ready? in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:567: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a2296 in k2234 in k2225 in a2222 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_2297,5,t0,t1,t2,t3,t4);}
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

/* k2891 in k2887 in k2845 in k2838 in tcp-addresses in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:627: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2505 in tcp-accept-ready? in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:567: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[62],t1,((C_word*)t0)[3]);}

/* k2080 in k2076 in a2047 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:409: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a2047 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2048,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[4];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub159(C_SCHEME_UNDEFINED,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2061,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2074,a[2]=t7,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2078,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t10,lf[50],lf[10]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(t6,C_fix(1)));}}}

/* k2076 in a2047 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2078(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2078,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2072 in a2047 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:409: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],C_SCHEME_FALSE,t1,((C_word*)t0)[3]);}

/* k2109 in k2102 in k2096 in a2089 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:416: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],C_SCHEME_FALSE,t1,((C_word*)t0)[3]);}

/* tcp-accept-ready? in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2484,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],lf[62]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub159(C_SCHEME_UNDEFINED,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2494,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2507,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2511,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t11,lf[63],lf[10]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_eqp(C_fix(1),t7));}}

/* k2480 in k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2402(t2,C_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* k2717 in k2713 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:596: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2713 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2715,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2709 in k2566 in k2563 in k2557 in k2551 in k2545 in k2542 in k2539 in tcp-connect in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:596: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[64],t1,((C_word*)t0)[3]);}

/* k2059 in a2047 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_fix(1)));}

/* k2938 in k2934 in k2914 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:640: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2113 in k2102 in k2096 in a2089 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2115,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2119,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2117 in k2113 in k2102 in k2096 in a2089 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:416: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_2010 in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2010,3,t0,t1,t2);}
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm:516: output */
t4=((C_word*)t0)[2];
f_1737(t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2954 in k2905 in tcp-port-numbers in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:638: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[5],lf[83],t1,((C_word*)t0)[3]);}

/* k2102 in k2096 in a2089 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_2104(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2104,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2115,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t3,lf[51],lf[10]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k2383 in k2379 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:358: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1780 in k1777 in k1774 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 in ... */
static void C_ccall f_1782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(*((C_word*)lf[28]+1),C_fix(13)))){
/* tcp.scm:491: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[29],lf[38],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
/* tcp.scm:494: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1754(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2389,3,t0,t1,t2);}
t3=C_i_check_structure(t2,lf[3]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2399,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:542: tcp-accept-timeout */
t7=*((C_word*)lf[26]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k2379 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2385,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2492 in tcp-accept-ready? in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(C_fix(1),((C_word*)t0)[3]));}

/* k1783 in k1780 in k1777 in k1774 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in ... */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:494: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1754(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1777 in k1774 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:489: ##sys#thread-yield! */
((C_proc2)C_fast_retrieve_proc(*((C_word*)lf[31]+1)))(2,*((C_word*)lf[31]+1),t2);}

/* k1774 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:488: ##sys#thread-block-for-i/o! */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[32]+1)))(5,*((C_word*)lf[32]+1),t2,*((C_word*)lf[28]+1),((C_word*)t0)[8],lf[39]);}

/* k1403 in k1399 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:308: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1399 in k1349 in k1343 in k1340 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2096 in a2089 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_fcall f_2098(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2098,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub123(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_2104(t6,C_eqp(C_fix((C_word)SOCKET_ERROR),t5));}
else{
t3=t2;
f_2104(t3,C_SCHEME_FALSE);}}

/* a2089 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2090,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2098,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(1)))){
t4=t3;
f_2098(t4,C_SCHEME_UNDEFINED);}
else{
t4=((C_word*)t0)[3];
t5=C_fix((C_word)SHUT_RD);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_2098(t8,stub142(C_SCHEME_UNDEFINED,t6,t7));}}}

/* k2397 in tcp-accept in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2399,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:543: current-milliseconds */
t5=*((C_word*)lf[37]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2402(t4,C_SCHEME_FALSE);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(490)){
C_save(t1);
C_rereclaim2(490*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[1]=C_h_intern(&lf[1],17,"\003sysmake-c-string");
lf[2]=C_h_intern(&lf[2],10,"tcp-listen");
lf[3]=C_h_intern(&lf[3],12,"tcp-listener");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_h_intern(&lf[5],14,"\000network-error");
lf[6]=C_h_intern(&lf[6],13,"string-append");
lf[7]=C_h_intern(&lf[7],17,"\003syspeek-c-string");
lf[8]=C_h_intern(&lf[8],17,"\003sysstring-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot listen on socket");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot bind to socket");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\035error while setting up socket");
lf[13]=C_h_intern(&lf[13],9,"\003syserror");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\037getting listener host IP failed");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],13,"\000domain-error");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid port number");
lf[19]=C_h_intern(&lf[19],13,"tcp-listener\077");
lf[20]=C_h_intern(&lf[20],9,"tcp-close");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot close TCP socket");
lf[22]=C_h_intern(&lf[22],15,"tcp-buffer-size");
lf[23]=C_h_intern(&lf[23],16,"tcp-read-timeout");
lf[24]=C_h_intern(&lf[24],17,"tcp-write-timeout");
lf[25]=C_h_intern(&lf[25],19,"tcp-connect-timeout");
lf[26]=C_h_intern(&lf[26],18,"tcp-accept-timeout");
lf[28]=C_h_intern(&lf[28],18,"\003syscurrent-thread");
lf[29]=C_h_intern(&lf[29],22,"\000network-timeout-error");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\030read operation timed out");
lf[31]=C_h_intern(&lf[31],17,"\003systhread-yield!");
lf[32]=C_h_intern(&lf[32],25,"\003systhread-block-for-i/o!");
lf[33]=C_h_intern(&lf[33],6,"\000input");
lf[34]=C_h_intern(&lf[34],29,"\003systhread-block-for-timeout!");
lf[35]=C_h_intern(&lf[35],22,"\003sysdispatch-interrupt");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot read from socket");
lf[37]=C_h_intern(&lf[37],20,"current-milliseconds");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\031write operation timed out");
lf[39]=C_h_intern(&lf[39],7,"\000output");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot write to socket");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[43]=C_h_intern(&lf[43],6,"socket");
lf[44]=C_h_intern(&lf[44],18,"\003sysset-port-data!");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot close socket output port");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_h_intern(&lf[49],16,"make-output-port");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot check socket for input");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\036cannot close socket input port");
lf[52]=C_h_intern(&lf[52],20,"\003sysscan-buffer-line");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[54]=C_h_intern(&lf[54],13,"\003syssubstring");
lf[55]=C_h_intern(&lf[55],15,"make-input-port");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[57]=C_h_intern(&lf[57],15,"\003sysmake-string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create TCP ports");
lf[59]=C_h_intern(&lf[59],10,"tcp-accept");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\036could not accept from listener");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\032accept operation timed out");
lf[62]=C_h_intern(&lf[62],17,"tcp-accept-ready\077");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot check socket for input");
lf[64]=C_h_intern(&lf[64],11,"tcp-connect");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\023getsockopt() failed");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot connect to socket");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\016fcntl() failed");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\035error while setting up socket");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot find host address");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\021no port specified");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000 cannot compute port from service");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\003tcp");
lf[75]=C_h_intern(&lf[75],9,"substring");
lf[76]=C_h_intern(&lf[76],20,"\003systcp-port->fileno");
lf[77]=C_h_intern(&lf[77],5,"error");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000)argument does not appear to be a TCP port");
lf[79]=C_h_intern(&lf[79],13,"\003sysport-data");
lf[80]=C_h_intern(&lf[80],13,"tcp-addresses");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot compute remote address");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot compute local address");
lf[83]=C_h_intern(&lf[83],16,"tcp-port-numbers");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot compute remote port");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot compute local port");
lf[86]=C_h_intern(&lf[86],17,"tcp-listener-port");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot obtain listener port");
lf[88]=C_h_intern(&lf[88],16,"tcp-abandon-port");
lf[89]=C_h_intern(&lf[89],19,"tcp-listener-fileno");
lf[90]=C_h_intern(&lf[90],14,"make-parameter");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot initialize Winsock");
lf[92]=C_h_intern(&lf[92],17,"register-feature!");
lf[93]=C_h_intern(&lf[93],3,"tcp");
C_register_lf2(lf,94,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_959,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1825 in k1821 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm:499: string-append */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1458 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1460,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1463,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub104(C_SCHEME_UNDEFINED,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
t8=stub64(C_SCHEME_UNDEFINED);
t9=t8;
t10=C_i_foreign_fixnum_argumentp(t2);
t11=stub123(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1482,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1486,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[8]+1)))(4,*((C_word*)lf[8]+1),t13,lf[9],lf[10]);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record2(&a,2,lf[3],t2));}}

/* k1461 in k1458 in k1452 in tcp-listen in k1191 in k963 in k960 in k957 */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1463,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record2(&a,2,lf[3],((C_word*)t0)[3]));}

/* k1821 in loop in k1750 in k1739 in output in k1734 in k1636 in k1633 in k1627 in k1624 in io-ports in k1618 in k1614 in k1610 in k1606 in k1583 in k1191 in k963 in k960 in k957 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[219] = {
{"f_2407:tcp_2escm",(void*)f_2407},
{"f_2402:tcp_2escm",(void*)f_2402},
{"f_2637:tcp_2escm",(void*)f_2637},
{"f_1435:tcp_2escm",(void*)f_1435},
{"f_1427:tcp_2escm",(void*)f_1427},
{"f_2633:tcp_2escm",(void*)f_2633},
{"f_2420:tcp_2escm",(void*)f_2420},
{"f_3003:tcp_2escm",(void*)f_3003},
{"f_2417:tcp_2escm",(void*)f_2417},
{"f_2414:tcp_2escm",(void*)f_2414},
{"f_1707:tcp_2escm",(void*)f_1707},
{"f_2411:tcp_2escm",(void*)f_2411},
{"f_2656:tcp_2escm",(void*)f_2656},
{"f_3011:tcp_2escm",(void*)f_3011},
{"f_1673:tcp_2escm",(void*)f_1673},
{"f_1670:tcp_2escm",(void*)f_1670},
{"f_1454:tcp_2escm",(void*)f_1454},
{"f_2653:tcp_2escm",(void*)f_2653},
{"f_3021:tcp_2escm",(void*)f_3021},
{"f_1679:tcp_2escm",(void*)f_1679},
{"f_1676:tcp_2escm",(void*)f_1676},
{"f_1715:tcp_2escm",(void*)f_1715},
{"f_1711:tcp_2escm",(void*)f_1711},
{"f_2995:tcp_2escm",(void*)f_2995},
{"f_2999:tcp_2escm",(void*)f_2999},
{"f_1932:tcp_2escm",(void*)f_1932},
{"f_2972:tcp_2escm",(void*)f_2972},
{"f_1936:tcp_2escm",(void*)f_1936},
{"f_2985:tcp_2escm",(void*)f_2985},
{"f_1921:tcp_2escm",(void*)f_1921},
{"f_1928:tcp_2escm",(void*)f_1928},
{"f_2834:tcp_2escm",(void*)f_2834},
{"f_1958:tcp_2escm",(void*)f_1958},
{"f_2820:tcp_2escm",(void*)f_2820},
{"f_2765:tcp_2escm",(void*)f_2765},
{"f_2769:tcp_2escm",(void*)f_2769},
{"f_2761:tcp_2escm",(void*)f_2761},
{"f_2857:tcp_2escm",(void*)f_2857},
{"f_2854:tcp_2escm",(void*)f_2854},
{"f_2850:tcp_2escm",(void*)f_2850},
{"f_962:tcp_2escm",(void*)f_962},
{"f_965:tcp_2escm",(void*)f_965},
{"f_2745:tcp_2escm",(void*)f_2745},
{"f_2741:tcp_2escm",(void*)f_2741},
{"f_1608:tcp_2escm",(void*)f_1608},
{"f_1892:tcp_2escm",(void*)f_1892},
{"f_1895:tcp_2escm",(void*)f_1895},
{"f_2737:tcp_2escm",(void*)f_2737},
{"f_1626:tcp_2escm",(void*)f_1626},
{"f_1622:tcp_2escm",(void*)f_1622},
{"f_1620:tcp_2escm",(void*)f_1620},
{"f_2553:tcp_2escm",(void*)f_2553},
{"f_2901:tcp_2escm",(void*)f_2901},
{"f_2565:tcp_2escm",(void*)f_2565},
{"f_2568:tcp_2escm",(void*)f_2568},
{"f_1616:tcp_2escm",(void*)f_1616},
{"f_1612:tcp_2escm",(void*)f_1612},
{"f_1629:tcp_2escm",(void*)f_1629},
{"f_2541:tcp_2escm",(void*)f_2541},
{"f_2916:tcp_2escm",(void*)f_2916},
{"f_2919:tcp_2escm",(void*)f_2919},
{"f_2559:tcp_2escm",(void*)f_2559},
{"f_2808:tcp_2escm",(void*)f_2808},
{"f_2907:tcp_2escm",(void*)f_2907},
{"f_1635:tcp_2escm",(void*)f_1635},
{"f_2960:tcp_2escm",(void*)f_2960},
{"f_2547:tcp_2escm",(void*)f_2547},
{"f_2544:tcp_2escm",(void*)f_2544},
{"f_1639:tcp_2escm",(void*)f_1639},
{"f_1638:tcp_2escm",(void*)f_1638},
{"f_1193:tcp_2escm",(void*)f_1193},
{"f_2534:tcp_2escm",(void*)f_2534},
{"f_2511:tcp_2escm",(void*)f_2511},
{"f_2964:tcp_2escm",(void*)f_2964},
{"f_1651:tcp_2escm",(void*)f_1651},
{"f_2448:tcp_2escm",(void*)f_2448},
{"f_2847:tcp_2escm",(void*)f_2847},
{"f_2840:tcp_2escm",(void*)f_2840},
{"f_1819:tcp_2escm",(void*)f_1819},
{"f_1990:tcp_2escm",(void*)f_1990},
{"f_1808:tcp_2escm",(void*)f_1808},
{"f_1995:tcp_2escm",(void*)f_1995},
{"f_2456:tcp_2escm",(void*)f_2456},
{"f_1984:tcp_2escm",(void*)f_1984},
{"f_2452:tcp_2escm",(void*)f_2452},
{"f_3030:tcp_2escm",(void*)f_3030},
{"f_2816:tcp_2escm",(void*)f_2816},
{"f_1643:tcp_2escm",(void*)f_1643},
{"f_1646:tcp_2escm",(void*)f_1646},
{"f_3049:tcp_2escm",(void*)f_3049},
{"f_1200:tcp_2escm",(void*)f_1200},
{"f_3041:tcp_2escm",(void*)f_3041},
{"f_1204:tcp_2escm",(void*)f_1204},
{"f_3045:tcp_2escm",(void*)f_3045},
{"f_3053:tcp_2escm",(void*)f_3053},
{"f_1220:tcp_2escm",(void*)f_1220},
{"f_1254:tcp_2escm",(void*)f_1254},
{"f_1229:tcp_2escm",(void*)f_1229},
{"f_2227:tcp_2escm",(void*)f_2227},
{"f_1877:tcp_2escm",(void*)f_1877},
{"f_1874:tcp_2escm",(void*)f_1874},
{"f_2223:tcp_2escm",(void*)f_2223},
{"f_1867:tcp_2escm",(void*)f_1867},
{"f_2212:tcp_2escm",(void*)f_2212},
{"f_1912:tcp_2escm",(void*)f_1912},
{"f_1915:tcp_2escm",(void*)f_1915},
{"f_2241:tcp_2escm",(void*)f_2241},
{"f_1277:tcp_2escm",(void*)f_1277},
{"f_2236:tcp_2escm",(void*)f_2236},
{"f_1543:tcp_2escm",(void*)f_1543},
{"f_1904:tcp_2escm",(void*)f_1904},
{"f_2688:tcp_2escm",(void*)f_2688},
{"f_2684:tcp_2escm",(void*)f_2684},
{"f_2164:tcp_2escm",(void*)f_2164},
{"f_2267:tcp_2escm",(void*)f_2267},
{"f_1534:tcp_2escm",(void*)f_1534},
{"f_2140:tcp_2escm",(void*)f_2140},
{"f_1381:tcp_2escm",(void*)f_1381},
{"f_2158:tcp_2escm",(void*)f_2158},
{"f_1563:tcp_2escm",(void*)f_1563},
{"f_1567:tcp_2escm",(void*)f_1567},
{"f_2251:tcp_2escm",(void*)f_2251},
{"f_1301:tcp_2escm",(void*)f_1301},
{"f_1373:tcp_2escm",(void*)f_1373},
{"f_1305:tcp_2escm",(void*)f_1305},
{"f_1377:tcp_2escm",(void*)f_1377},
{"f_2144:tcp_2escm",(void*)f_2144},
{"f_1585:tcp_2escm",(void*)f_1585},
{"f_2692:tcp_2escm",(void*)f_2692},
{"f_1571:tcp_2escm",(void*)f_1571},
{"f_959:tcp_2escm",(void*)f_959},
{"f_1397:tcp_2escm",(void*)f_1397},
{"f_1974:tcp_2escm",(void*)f_1974},
{"f_2580:tcp_2escm",(void*)f_2580},
{"f_1961:tcp_2escm",(void*)f_1961},
{"f_1345:tcp_2escm",(void*)f_1345},
{"f_1342:tcp_2escm",(void*)f_1342},
{"f_2599:tcp_2escm",(void*)f_2599},
{"f_2346:tcp_2escm",(void*)f_2346},
{"f_2885:tcp_2escm",(void*)f_2885},
{"f_2889:tcp_2escm",(void*)f_2889},
{"f_2607:tcp_2escm",(void*)f_2607},
{"f_2603:tcp_2escm",(void*)f_2603},
{"f_2377:tcp_2escm",(void*)f_2377},
{"f_2574:tcp_2escm",(void*)f_2574},
{"f_2571:tcp_2escm",(void*)f_2571},
{"f_1354:tcp_2escm",(void*)f_1354},
{"f_1351:tcp_2escm",(void*)f_1351},
{"f_1357:tcp_2escm",(void*)f_1357},
{"f_1741:tcp_2escm",(void*)f_1741},
{"f_2798:tcp_2escm",(void*)f_2798},
{"f_2792:tcp_2escm",(void*)f_2792},
{"f_2629:tcp_2escm",(void*)f_2629},
{"f_2625:tcp_2escm",(void*)f_2625},
{"f_2356:tcp_2escm",(void*)f_2356},
{"f_1733:tcp_2escm",(void*)f_1733},
{"f_1736:tcp_2escm",(void*)f_1736},
{"f_1737:tcp_2escm",(void*)f_1737},
{"f_1281:tcp_2escm",(void*)f_1281},
{"f_1284:tcp_2escm",(void*)f_1284},
{"f_2784:tcp_2escm",(void*)f_2784},
{"f_1297:tcp_2escm",(void*)f_1297},
{"f_2004:tcp_2escm",(void*)f_2004},
{"f_2778:tcp_2escm",(void*)f_2778},
{"f_1287:tcp_2escm",(void*)f_1287},
{"f_1752:tcp_2escm",(void*)f_1752},
{"f_1754:tcp_2escm",(void*)f_1754},
{"f_2872:tcp_2escm",(void*)f_2872},
{"f_1490:tcp_2escm",(void*)f_1490},
{"f_2030:tcp_2escm",(void*)f_2030},
{"f_1591:tcp_2escm",(void*)f_1591},
{"f_1593:tcp_2escm",(void*)f_1593},
{"f_2864:tcp_2escm",(void*)f_2864},
{"f_2868:tcp_2escm",(void*)f_2868},
{"f_1486:tcp_2escm",(void*)f_1486},
{"f_2936:tcp_2escm",(void*)f_2936},
{"f_2932:tcp_2escm",(void*)f_2932},
{"f_2026:tcp_2escm",(void*)f_2026},
{"f_1482:tcp_2escm",(void*)f_1482},
{"f_2515:tcp_2escm",(void*)f_2515},
{"f_2297:tcp_2escm",(void*)f_2297},
{"f_2893:tcp_2escm",(void*)f_2893},
{"f_2507:tcp_2escm",(void*)f_2507},
{"f_2082:tcp_2escm",(void*)f_2082},
{"f_2048:tcp_2escm",(void*)f_2048},
{"f_2078:tcp_2escm",(void*)f_2078},
{"f_2074:tcp_2escm",(void*)f_2074},
{"f_2111:tcp_2escm",(void*)f_2111},
{"f_2484:tcp_2escm",(void*)f_2484},
{"f_2482:tcp_2escm",(void*)f_2482},
{"f_2719:tcp_2escm",(void*)f_2719},
{"f_2715:tcp_2escm",(void*)f_2715},
{"f_2711:tcp_2escm",(void*)f_2711},
{"f_2061:tcp_2escm",(void*)f_2061},
{"f_2940:tcp_2escm",(void*)f_2940},
{"f_2115:tcp_2escm",(void*)f_2115},
{"f_2119:tcp_2escm",(void*)f_2119},
{"f_2010:tcp_2escm",(void*)f_2010},
{"f_2956:tcp_2escm",(void*)f_2956},
{"f_2104:tcp_2escm",(void*)f_2104},
{"f_2385:tcp_2escm",(void*)f_2385},
{"f_1782:tcp_2escm",(void*)f_1782},
{"f_2389:tcp_2escm",(void*)f_2389},
{"f_2381:tcp_2escm",(void*)f_2381},
{"f_2494:tcp_2escm",(void*)f_2494},
{"f_1785:tcp_2escm",(void*)f_1785},
{"f_1779:tcp_2escm",(void*)f_1779},
{"f_1776:tcp_2escm",(void*)f_1776},
{"f_1405:tcp_2escm",(void*)f_1405},
{"f_1401:tcp_2escm",(void*)f_1401},
{"f_2098:tcp_2escm",(void*)f_2098},
{"f_2090:tcp_2escm",(void*)f_2090},
{"f_2399:tcp_2escm",(void*)f_2399},
{"toplevel:tcp_2escm",(void*)C_tcp_toplevel},
{"f_1827:tcp_2escm",(void*)f_1827},
{"f_1460:tcp_2escm",(void*)f_1460},
{"f_1463:tcp_2escm",(void*)f_1463},
{"f_1823:tcp_2escm",(void*)f_1823},
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
o|eliminated procedure checks: 166 
o|specializations:
o|  3 (##sys#check-open-port * *)
o|  1 (make-string fixnum)
o|  24 (string-append string string)
o|Removed `not' forms: 1 
o|inlining procedure: k1256 
o|inlining procedure: k1256 
o|inlining procedure: k1285 
o|inlining procedure: "(tcp.scm:283) last-error-code" 
o|substituted constant variable: a1310 
o|substituted constant variable: a1311 
o|inlining procedure: k1285 
o|contracted procedure: "(tcp.scm:281) getservbyname" 
o|inlining procedure: k1202 
o|inlining procedure: k1202 
o|inlining procedure: k1461 
o|substituted constant variable: a1491 
o|substituted constant variable: a1492 
o|inlining procedure: "(tcp.scm:322) close" 
o|inlining procedure: "(tcp.scm:322) last-error-code" 
o|inlining procedure: k1461 
o|contracted procedure: "(tcp.scm:321) listen" 
o|contracted procedure: "(tcp.scm:320) bind-socket" 
o|inlining procedure: k1355 
o|substituted constant variable: a1382 
o|substituted constant variable: a1383 
o|inlining procedure: "(tcp.scm:310) close" 
o|inlining procedure: "(tcp.scm:310) last-error-code" 
o|inlining procedure: k1355 
o|contracted procedure: "(tcp.scm:309) bind" 
o|inlining procedure: "(tcp.scm:308) last-error-code" 
o|substituted constant variable: a1410 
o|substituted constant variable: a1411 
o|inlining procedure: "(tcp.scm:307) set-socket-options" 
o|inlining procedure: k1422 
o|inlining procedure: k1422 
o|contracted procedure: "(tcp.scm:302) fresh-addr" 
o|inlining procedure: k1536 
o|inlining procedure: k1536 
o|inlining procedure: k1551 
o|inlining procedure: "(tcp.scm:333) last-error-code" 
o|substituted constant variable: a1576 
o|substituted constant variable: a1577 
o|inlining procedure: k1551 
o|inlining procedure: "(tcp.scm:332) close" 
o|inlining procedure: k1595 
o|inlining procedure: k1595 
o|inlining procedure: k1656 
o|inlining procedure: k1677 
o|inlining procedure: k1677 
o|inlining procedure: k1692 
o|inlining procedure: k1692 
o|inlining procedure: "(tcp.scm:388) last-error-code" 
o|substituted constant variable: a1720 
o|substituted constant variable: a1721 
o|inlining procedure: "(tcp.scm:385) interrupted?" 
o|inlining procedure: "(tcp.scm:374) retry?" 
o|inlining procedure: k1656 
o|contracted procedure: "(tcp.scm:372) recv" 
o|inlining procedure: k1762 
o|inlining procedure: k1798 
o|inlining procedure: k1798 
o|inlining procedure: "(tcp.scm:499) last-error-code" 
o|substituted constant variable: a1832 
o|substituted constant variable: a1833 
o|inlining procedure: "(tcp.scm:495) interrupted?" 
o|inlining procedure: "(tcp.scm:484) retry?" 
o|inlining procedure: k1762 
o|inlining procedure: k1852 
o|inlining procedure: k1852 
o|contracted procedure: "(tcp.scm:482) send" 
o|inlining procedure: k1906 
o|inlining procedure: k1906 
o|inlining procedure: "(tcp.scm:525) last-error-code" 
o|substituted constant variable: a1941 
o|substituted constant variable: a1942 
o|inlining procedure: "(tcp.scm:524) close" 
o|inlining procedure: k1971 
o|inlining procedure: k1976 
o|inlining procedure: k1976 
o|inlining procedure: k1971 
o|inlining procedure: k1996 
o|inlining procedure: k1996 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2031 
o|inlining procedure: k2031 
o|inlining procedure: k2053 
o|inlining procedure: k2053 
o|inlining procedure: "(tcp.scm:409) last-error-code" 
o|substituted constant variable: a2087 
o|substituted constant variable: a2088 
o|inlining procedure: "(tcp.scm:407) check-fd-ready" 
o|inlining procedure: k2092 
o|inlining procedure: k2092 
o|inlining procedure: "(tcp.scm:416) last-error-code" 
o|substituted constant variable: a2124 
o|substituted constant variable: a2125 
o|inlining procedure: "(tcp.scm:415) close" 
o|inlining procedure: k2145 
o|inlining procedure: k2145 
o|inlining procedure: k2166 
o|inlining procedure: k2166 
o|inlining procedure: k2213 
o|inlining procedure: k2213 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2256 
o|inlining procedure: k2256 
o|inlining procedure: k2299 
o|inlining procedure: k2299 
o|inlining procedure: k2348 
o|inlining procedure: k2348 
o|inlining procedure: k2358 
o|inlining procedure: k2358 
o|substituted constant variable: a2364 
o|substituted constant variable: a2386 
o|substituted constant variable: a2387 
o|inlining procedure: "(tcp.scm:358) close" 
o|inlining procedure: "(tcp.scm:358) last-error-code" 
o|contracted procedure: k2427 
o|inlining procedure: k2424 
o|inlining procedure: "(tcp.scm:560) last-error-code" 
o|substituted constant variable: a2461 
o|substituted constant variable: a2462 
o|inlining procedure: "(tcp.scm:557) interrupted?" 
o|inlining procedure: k2424 
o|contracted procedure: "(tcp.scm:554) accept" 
o|inlining procedure: k1045 
o|inlining procedure: k1045 
o|inlining procedure: k2492 
o|inlining procedure: "(tcp.scm:567) last-error-code" 
o|substituted constant variable: a2520 
o|substituted constant variable: a2521 
o|inlining procedure: k2492 
o|inlining procedure: "(tcp.scm:565) check-fd-ready" 
o|inlining procedure: k2578 
o|substituted constant variable: a2608 
o|substituted constant variable: a2609 
o|inlining procedure: "(tcp.scm:611) close" 
o|inlining procedure: "(tcp.scm:611) last-error-code" 
o|inlining procedure: k2578 
o|substituted constant variable: a2634 
o|substituted constant variable: a2635 
o|inlining procedure: "(tcp.scm:613) close" 
o|contracted procedure: "(tcp.scm:609) get-socket-error" 
o|inlining procedure: k2639 
o|inlining procedure: k2663 
o|inlining procedure: k2663 
o|substituted constant variable: a2693 
o|substituted constant variable: a2694 
o|inlining procedure: "(tcp.scm:607) close" 
o|inlining procedure: "(tcp.scm:607) last-error-code" 
o|inlining procedure: "(tcp.scm:604) interrupted?" 
o|contracted procedure: "(tcp.scm:599) in-progress?" 
o|inlining procedure: k2639 
o|contracted procedure: "(tcp.scm:598) connect" 
o|substituted constant variable: a2720 
o|substituted constant variable: a2721 
o|inlining procedure: "(tcp.scm:596) close" 
o|inlining procedure: "(tcp.scm:596) last-error-code" 
o|substituted constant variable: a2746 
o|substituted constant variable: a2747 
o|inlining procedure: "(tcp.scm:594) close" 
o|inlining procedure: "(tcp.scm:594) last-error-code" 
o|inlining procedure: "(tcp.scm:593) set-socket-options" 
o|inlining procedure: "(tcp.scm:592) last-error-code" 
o|substituted constant variable: a2774 
o|substituted constant variable: a2775 
o|inlining procedure: k2785 
o|inlining procedure: k2785 
o|inlining procedure: k2821 
o|inlining procedure: k2821 
o|substituted constant variable: a2837 
o|inlining procedure: k2855 
o|inlining procedure: k2855 
o|inlining procedure: "(tcp.scm:629) last-error-code" 
o|substituted constant variable: a2877 
o|substituted constant variable: a2878 
o|contracted procedure: "(tcp.scm:629) getpeername" 
o|inlining procedure: "(tcp.scm:627) last-error-code" 
o|substituted constant variable: a2898 
o|substituted constant variable: a2899 
o|contracted procedure: "(tcp.scm:627) getsockname" 
o|substituted constant variable: a2904 
o|inlining procedure: k2917 
o|inlining procedure: "(tcp.scm:640) last-error-code" 
o|substituted constant variable: a2945 
o|substituted constant variable: a2946 
o|inlining procedure: k2917 
o|inlining procedure: "(tcp.scm:638) last-error-code" 
o|substituted constant variable: a2969 
o|substituted constant variable: a2970 
o|contracted procedure: "(tcp.scm:636) getpeerport" 
o|inlining procedure: "(tcp.scm:635) getsockport" 
o|inlining procedure: k2983 
o|inlining procedure: "(tcp.scm:648) last-error-code" 
o|substituted constant variable: a3008 
o|substituted constant variable: a3009 
o|inlining procedure: k2983 
o|inlining procedure: "(tcp.scm:646) getsockport" 
o|substituted constant variable: a3014 
o|inlining procedure: k3023 
o|inlining procedure: k3023 
o|folded constant expression: (fx* (quote 60) (quote 1000)) 
o|contracted procedure: "(tcp.scm:229) startup" 
o|replaced variables: 303 
o|removed binding forms: 146 
o|removed side-effect free assignment to unused variable: ##net#last-error-code 
o|removed side-effect free assignment to unused variable: ##net#retry? 
o|removed side-effect free assignment to unused variable: ##net#interrupted? 
o|removed side-effect free assignment to unused variable: ##net#close 
o|removed side-effect free assignment to unused variable: ##net#check-fd-ready 
o|removed side-effect free assignment to unused variable: ##net#set-socket-options 
o|removed side-effect free assignment to unused variable: ##net#getsockport 
o|substituted constant variable: r15373111 
o|contracted procedure: k1602 
o|substituted constant variable: int130137 
o|substituted constant variable: int129136 
o|inlining procedure: k1852 
o|substituted constant variable: flags172180 
o|substituted constant variable: r19723166 
o|substituted constant variable: r19723166 
o|substituted constant variable: r20323172 
o|inlining procedure: k2059 
o|substituted constant variable: r21463193 
o|substituted constant variable: r22293198 
o|substituted constant variable: r23493210 
o|substituted constant variable: r23593212 
o|substituted constant variable: r23593213 
o|substituted constant variable: c-pointer110117 
o|substituted constant variable: c-pointer111118 
o|substituted constant variable: c-pointer111118 
o|substituted constant variable: c-pointer111118 
o|substituted constant variable: r10463227 
o|substituted constant variable: r10463227 
o|substituted constant variable: c-pointer110117 
o|substituted constant variable: c-pointer110117 
o|inlining procedure: k2578 
o|contracted procedure: "(tcp.scm:585) parse-host" 
o|substituted constant variable: r12033071 
o|substituted constant variable: r12033071 
o|substituted constant variable: r30243341 
o|substituted constant variable: r30243341 
o|substituted constant variable: r30243343 
o|substituted constant variable: r30243343 
o|replaced variables: 94 
o|removed binding forms: 366 
o|removed conditional forms: 2 
o|inlining procedure: k1407 
o|inlining procedure: k1500 
o|inlining procedure: k1573 
o|substituted constant variable: r1603 
o|inlining procedure: k1717 
o|inlining procedure: k1783 
o|inlining procedure: k1829 
o|substituted constant variable: r18533349 
o|inlining procedure: k1938 
o|inlining procedure: k2084 
o|inlining procedure: k2121 
o|inlining procedure: k2458 
o|contracted procedure: k1041 
o|inlining procedure: k2517 
o|inlining procedure: k2771 
o|inlining procedure: k1307 
o|substituted constant variable: proto336 
o|inlining procedure: k2874 
o|inlining procedure: k2895 
o|inlining procedure: k2942 
o|inlining procedure: k2966 
o|inlining procedure: k3005 
o|inlining procedure: k3054 
o|replaced variables: 6 
o|removed binding forms: 134 
o|contracted procedure: k1470 
o|contracted procedure: k1361 
o|contracted procedure: k1665 
o|contracted procedure: k1695 
o|contracted procedure: k1771 
o|contracted procedure: k1801 
o|contracted procedure: k2365 
o|contracted procedure: k2436 
o|substituted constant variable: r1042 
o|substituted constant variable: r1042 
o|contracted procedure: k2587 
o|contracted procedure: k2648 
o|contracted procedure: k2666 
o|contracted procedure: k2672 
o|contracted procedure: k2699 
o|contracted procedure: k2725 
o|substituted constant variable: minute421 
o|substituted constant variable: minute421 
o|simplifications: ((let . 8)) 
o|replaced variables: 1 
o|removed binding forms: 40 
o|removed side-effect free assignment to unused variable: minute421 
o|removed binding forms: 3 
o|converted assignments to bindings: (check420) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|simplifications: ((if . 16) (##core#call . 198)) 
o|  call simplifications:
o|    vector?
o|    ##sys#check-string
o|    char=?
o|    vector
o|    ##sys#fudge
o|    ##sys#call-with-values	2
o|    fx>=	9
o|    ##sys#setslot	4
o|    values	11
o|    ##sys#size	7
o|    fxmin	3
o|    fx-	6
o|    fx+	12
o|    fx=
o|    +	5
o|    ##sys#setislot	6
o|    ##sys#check-structure	5
o|    ##sys#slot	14
o|    ##sys#structure?
o|    car	3
o|    null?	5
o|    cdr	2
o|    fx<	7
o|    fx>	6
o|    ##sys#check-exact	4
o|    eq?	26
o|    ##sys#make-structure	2
o|    ##sys#foreign-block-argument	6
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-fixnum-argument	43
o|contracted procedure: k977 
o|contracted procedure: k993 
o|contracted procedure: k997 
o|contracted procedure: k1001 
o|contracted procedure: k1087 
o|contracted procedure: k1091 
o|contracted procedure: k1223 
o|contracted procedure: k1231 
o|contracted procedure: k1238 
o|contracted procedure: k1527 
o|contracted procedure: k1437 
o|contracted procedure: k1521 
o|contracted procedure: k1440 
o|contracted procedure: k1515 
o|contracted procedure: k1443 
o|contracted procedure: k1509 
o|contracted procedure: k1446 
o|contracted procedure: k1449 
o|contracted procedure: k1455 
o|contracted procedure: k1467 
o|contracted procedure: k10583083 
o|contracted procedure: k1026 
o|contracted procedure: k1030 
o|contracted procedure: k1358 
o|contracted procedure: k10583097 
o|contracted procedure: k1008 
o|contracted procedure: k1012 
o|contracted procedure: k1016 
o|contracted procedure: k1388 
o|contracted procedure: k11233107 
o|contracted procedure: k1416 
o|contracted procedure: k1327 
o|contracted procedure: k1331 
o|contracted procedure: k1497 
o|contracted procedure: k1500 
o|contracted procedure: k1545 
o|contracted procedure: k1548 
o|contracted procedure: k1554 
o|contracted procedure: k10583120 
o|contracted procedure: k1595 
o|contracted procedure: k1630 
o|contracted procedure: k1659 
o|contracted procedure: k1683 
o|contracted procedure: k1723 
o|contracted procedure: k1065 
o|contracted procedure: k1069 
o|contracted procedure: k1073 
o|contracted procedure: k1077 
o|contracted procedure: k1746 
o|contracted procedure: k1756 
o|contracted procedure: k1765 
o|contracted procedure: k1789 
o|contracted procedure: k1837 
o|contracted procedure: k1844 
o|contracted procedure: k1848 
o|contracted procedure: k1855 
o|contracted procedure: k1852 
o|contracted procedure: k1130 
o|contracted procedure: k1134 
o|contracted procedure: k1138 
o|contracted procedure: k1142 
o|contracted procedure: k1146 
o|contracted procedure: k1878 
o|contracted procedure: k1881 
o|contracted procedure: k1884 
o|contracted procedure: k1887 
o|contracted procedure: k1900 
o|contracted procedure: k2007 
o|contracted procedure: k1999 
o|contracted procedure: k2022 
o|contracted procedure: k2015 
o|contracted procedure: k10583161 
o|contracted procedure: k1950 
o|contracted procedure: k1967 
o|contracted procedure: k1987 
o|contracted procedure: k1979 
o|contracted procedure: k2034 
o|contracted procedure: k2038 
o|contracted procedure: k2041 
o|contracted procedure: k2050 
o|contracted procedure: k2065 
o|contracted procedure: k11163182 
o|contracted procedure: k10583191 
o|contracted procedure: k2133 
o|contracted procedure: k2148 
o|contracted procedure: k2151 
o|contracted procedure: k2169 
o|contracted procedure: k2175 
o|contracted procedure: k2178 
o|contracted procedure: k2207 
o|contracted procedure: k2181 
o|contracted procedure: k2185 
o|contracted procedure: k2189 
o|contracted procedure: k2196 
o|contracted procedure: k2200 
o|contracted procedure: k2204 
o|contracted procedure: k2216 
o|contracted procedure: k2231 
o|contracted procedure: k2293 
o|contracted procedure: k2247 
o|contracted procedure: k2253 
o|contracted procedure: k2259 
o|contracted procedure: k2269 
o|contracted procedure: k2275 
o|contracted procedure: k2286 
o|contracted procedure: k2282 
o|contracted procedure: k2314 
o|contracted procedure: k2310 
o|contracted procedure: k2303 
o|inlining procedure: k2299 
o|contracted procedure: k2325 
o|contracted procedure: k2329 
o|contracted procedure: k2321 
o|inlining procedure: k2299 
o|contracted procedure: k2336 
o|contracted procedure: k2339 
o|contracted procedure: k2351 
o|contracted procedure: k2361 
o|contracted procedure: k10583219 
o|contracted procedure: k2391 
o|contracted procedure: k2394 
o|contracted procedure: k2464 
o|contracted procedure: k1037 
o|contracted procedure: k2467 
o|contracted procedure: k2486 
o|contracted procedure: k2498 
o|contracted procedure: k2523 
o|contracted procedure: k11163245 
o|contracted procedure: k2809 
o|contracted procedure: k2536 
o|contracted procedure: k2548 
o|contracted procedure: k2554 
o|contracted procedure: k2584 
o|contracted procedure: k10583256 
o|contracted procedure: k2613 
o|contracted procedure: k10583268 
o|contracted procedure: k2530 
o|contracted procedure: k2642 
o|contracted procedure: k10583277 
o|contracted procedure: k1098 
o|contracted procedure: k1102 
o|contracted procedure: k1106 
o|contracted procedure: k10583286 
o|contracted procedure: k2722 
o|contracted procedure: k10583293 
o|contracted procedure: k11233300 
o|contracted procedure: k2752 
o|contracted procedure: k1247 
o|contracted procedure: k1259 
o|contracted procedure: k1268 
o|contracted procedure: k1288 
o|contracted procedure: k1209 
o|contracted procedure: k1216 
o|contracted procedure: k1313 
o|contracted procedure: k1320 
o|contracted procedure: k2824 
o|contracted procedure: k1185 
o|contracted procedure: k1160 
o|contracted procedure: k2923 
o|contracted procedure: k2947 
o|contracted procedure: k1174 
o|contracted procedure: k11673329 
o|contracted procedure: k2974 
o|contracted procedure: k2977 
o|contracted procedure: k2986 
o|contracted procedure: k11673340 
o|contracted procedure: k3026 
o|contracted procedure: k3032 
o|simplifications: ((let . 24)) 
o|removed binding forms: 166 
o|inlining procedure: k1227 
o|inlining procedure: "(tcp.scm:322) error-code->message" 
o|inlining procedure: "(tcp.scm:310) error-code->message" 
o|inlining procedure: "(tcp.scm:308) error-code->message" 
o|inlining procedure: "(tcp.scm:333) error-code->message" 
o|inlining procedure: "(tcp.scm:388) error-code->message" 
o|inlining procedure: "(tcp.scm:499) error-code->message" 
o|inlining procedure: "(tcp.scm:525) error-code->message" 
o|inlining procedure: "(tcp.scm:523) shutdown" 
o|inlining procedure: "(tcp.scm:409) error-code->message" 
o|inlining procedure: "(tcp.scm:416) error-code->message" 
o|inlining procedure: "(tcp.scm:414) shutdown" 
o|inlining procedure: "(tcp.scm:358) error-code->message" 
o|inlining procedure: "(tcp.scm:560) error-code->message" 
o|inlining procedure: "(tcp.scm:567) error-code->message" 
o|inlining procedure: "(tcp.scm:611) error-code->message" 
o|inlining procedure: "(tcp.scm:614) error-code->message" 
o|inlining procedure: "(tcp.scm:607) error-code->message" 
o|inlining procedure: "(tcp.scm:596) error-code->message" 
o|inlining procedure: "(tcp.scm:594) error-code->message" 
o|inlining procedure: "(tcp.scm:592) error-code->message" 
o|inlining procedure: "(tcp.scm:283) error-code->message" 
o|inlining procedure: "(tcp.scm:629) error-code->message" 
o|inlining procedure: "(tcp.scm:627) error-code->message" 
o|inlining procedure: "(tcp.scm:640) error-code->message" 
o|inlining procedure: "(tcp.scm:638) error-code->message" 
o|inlining procedure: "(tcp.scm:648) error-code->message" 
o|replaced variables: 93 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: ##net#error-code->message 
o|removed side-effect free assignment to unused variable: ##net#shutdown 
o|substituted constant variable: r12283486 
o|substituted constant variable: r12283486 
o|inlining procedure: k1947 
o|inlining procedure: k2130 
o|replaced variables: 52 
o|removed binding forms: 67 
o|contracted procedure: k1494 
o|contracted procedure: k1473 
o|contracted procedure: k1385 
o|contracted procedure: k1364 
o|contracted procedure: k1413 
o|inlining procedure: "(tcp.scm:303) socket" 
o|contracted procedure: k1579 
o|contracted procedure: k1653 
o|contracted procedure: k1759 
o|contracted procedure: k2056 
o|contracted procedure: k2368 
o|contracted procedure: k2421 
o|contracted procedure: k2489 
o|contracted procedure: k2575 
o|contracted procedure: k2590 
o|contracted procedure: k2616 
o|contracted procedure: k2696 
o|contracted procedure: k2675 
o|contracted procedure: k2702 
o|contracted procedure: k2749 
o|contracted procedure: k2728 
o|inlining procedure: "(tcp.scm:590) socket" 
o|contracted procedure: k2908 
o|contracted procedure: k2911 
o|contracted procedure: k2980 
o|removed binding forms: 81 
o|removed side-effect free assignment to unused variable: ##net#socket 
o|substituted constant variable: int84893650 
o|substituted constant variable: int84893667 
o|replaced variables: 5 
o|removed binding forms: 7 
o|contracted procedure: k1346 
o|contracted procedure: k2560 
o|removed binding forms: 2 
o|customizable procedures: (check420 k2542 loop338 k2400 ##net#io-ports k1636 k2234 loop494 k2096 k2102 read-input450 k1956 k1910 k1913 k1919 output532 k1750 loop535 k1644 ##net#gethostaddr) 
o|calls to known targets: 84 
o|identified direct recursive calls: f_1754 2 
o|identified direct recursive calls: f_2164 1 
o|identified direct recursive calls: f_1254 1 
o|fast box initializations: 6 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1220 
o|dropping unused closure argument: f_1591 
*/
/* end of file */
