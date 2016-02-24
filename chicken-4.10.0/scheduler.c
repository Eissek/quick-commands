/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
/* TODO: Winsock select() only works for sockets */
# include <winsock2.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <sys/time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif

#ifdef NO_POSIX_POLL

/* Shouldn't we include <sys/select.h> here? */
static fd_set C_fdset_input, C_fdset_output;

#define C_fd_input_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_output_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

C_inline int C_ready_fds_timeout(int to, double tm) {
  struct timeval timeout;
  timeout.tv_sec = tm / 1000;
  timeout.tv_usec = fmod(tm, 1000) * 1000;
  /* we use FD_SETSIZE, but really should use max fd */
  return select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL);
}

C_inline void C_prepare_fdset(int length) {
  FD_ZERO(&C_fdset_input);
  FD_ZERO(&C_fdset_output);
}

C_inline void C_fdset_add(int fd, int input, int output) {
  if (input) FD_SET(fd, &C_fdset_input);
  if (output) FD_SET(fd, &C_fdset_output);
}

#else
#  include <poll.h>
#  include <assert.h>

static int C_fdset_nfds;
static struct pollfd *C_fdset_set = NULL;

C_inline int C_fd_ready(int fd, int pos, int what) {
  assert(fd == C_fdset_set[pos].fd); /* Must match position in ##sys#fd-list! */
  return(C_fdset_set[pos].revents & what);
}

#define C_fd_input_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLIN|POLLERR|POLLHUP|POLLNVAL))
#define C_fd_output_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLOUT|POLLERR|POLLHUP|POLLNVAL))

C_inline int C_ready_fds_timeout(int to, double tm) {
  return poll(C_fdset_set, C_fdset_nfds, to ? (int)tm : -1);
}

C_inline void C_prepare_fdset(int length) {
  /* TODO: Only realloc when needed? */
  C_fdset_set = realloc(C_fdset_set, sizeof(struct pollfd) * length);
  if (C_fdset_set == NULL)
    C_halt(C_SCHEME_FALSE); /* Ugly: no message */
  C_fdset_nfds = 0;
}

/* This *must* be called in order, so position will match ##sys#fd-list */
C_inline void C_fdset_add(int fd, int input, int output) {
  C_fdset_set[C_fdset_nfds].events = ((input ? POLLIN : 0) | (output ? POLLOUT : 0));
  C_fdset_set[C_fdset_nfds++].fd = fd;
}
#endif

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[64];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,116,104,114,101,97,100,115,53,48,53,32,107,101,101,112,53,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,52,57,49,32,112,111,115,52,57,50,32,108,115,116,52,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,103,51,54,51,32,116,51,55,50,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,54,50,32,103,51,54,57,51,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,53,56,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,51,56,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,49,55,50,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,50,53,54,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,50,48,51,32,115,116,97,116,101,50,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,118,50,49,51,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,50,49,48,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,116,108,50,51,51,32,112,114,101,118,50,51,52,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,50,49,56,32,116,109,50,49,57,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,50,52,52,32,116,50,50,52,53,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,12),40,103,51,48,55,32,116,50,51,49,54,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,54,32,103,51,49,51,51,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,50,32,103,50,55,57,50,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,56,32,103,50,54,53,50,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,50,57,54,32,115,50,57,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,51,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,54,55,53,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,51,51,53,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,54,49,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,52,53,55,32,102,100,52,53,56,32,105,47,111,52,53,57,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,53,51,57,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,53,51,54,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,39),40,102,95,50,52,54,50,32,113,117,101,117,101,53,54,52,32,97,114,103,53,54,53,32,118,97,108,53,54,54,32,105,110,105,116,53,54,55,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,53,55,56,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,56,49,32,105,53,56,50,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,55,52,32,105,53,55,53,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,55,49,32,105,53,55,50,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,116,109,112,53,53,52,53,53,53,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,53,57,51,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,53,57,56,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,9),40,115,117,115,112,101,110,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,6),40,103,54,49,52,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,6),40,103,54,51,49,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,107,105,108,108,45,111,116,104,101,114,45,116,104,114,101,97,100,115,32,116,104,117,110,107,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from g475 */
static C_word C_fcall stub479(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub479(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
double t1=(double )C_c_double(C_a1);
C_r=C_fix((C_word)C_ready_fds_timeout(t0,t1));
return C_r;}

/* from fdset-add! */
static C_word C_fcall stub388(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub388(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_truep(C_a1);
int t2=(int )C_truep(C_a2);
C_fdset_add(t0,t1,t2);
return C_r;}

/* from g351 */
static C_word C_fcall stub354(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub354(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_prepare_fdset(t0);
return C_r;}

C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_fcall f_1700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2274)
static void C_fcall f_2274(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1329)
static void C_fcall f_1329(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_fcall f_1586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_966)
static void C_fcall f_966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_962)
static void C_fcall f_962(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2510)
static void C_fcall f_2510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2561)
static C_word C_fcall f_2561(C_word t0,C_word t1);
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_fcall f_1711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_fcall f_950(C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static C_word C_fcall f_2535(C_word t0,C_word t1);
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1477)
static void C_fcall f_1477(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_fcall f_1997(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static C_word C_fcall f_2593(C_word t0,C_word t1);
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static C_word C_fcall f_2574(C_word t0,C_word t1);
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2052)
static void C_fcall f_2052(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_fcall f_1738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1503)
static void C_fcall f_1503(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_fcall f_1072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_fcall f_2023(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2392)
static void C_fcall f_2392(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2616)
static C_word C_fcall f_2616(C_word t0,C_word t1);
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2368)
static void C_fcall f_2368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2345)
static void C_fcall f_2345(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_fcall f_2417(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1023)
static void C_fcall f_1023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2258)
static void C_fcall f_2258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1536)
static void C_fcall f_1536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_fcall f_1567(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1309)
static void C_fcall f_1309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1243)
static void C_ccall f_1243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_fcall f_1339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1270)
static C_word C_fcall f_1270(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1700)
static void C_fcall trf_1700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1700(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1700(t0,t1,t2);}

C_noret_decl(trf_2274)
static void C_fcall trf_2274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2274(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2274(t0,t1,t2);}

C_noret_decl(trf_1329)
static void C_fcall trf_1329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1329(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1329(t0,t1,t2,t3);}

C_noret_decl(trf_1586)
static void C_fcall trf_1586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1586(t0,t1,t2);}

C_noret_decl(trf_966)
static void C_fcall trf_966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_966(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_966(t0,t1);}

C_noret_decl(trf_962)
static void C_fcall trf_962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_962(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_962(t0,t1);}

C_noret_decl(trf_2510)
static void C_fcall trf_2510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2510(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2510(t0,t1);}

C_noret_decl(trf_1711)
static void C_fcall trf_1711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1711(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1711(t0,t1,t2);}

C_noret_decl(trf_1940)
static void C_fcall trf_1940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1940(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1940(t0,t1,t2);}

C_noret_decl(trf_950)
static void C_fcall trf_950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_950(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_950(t0,t1);}

C_noret_decl(trf_1477)
static void C_fcall trf_1477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1477(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1477(t0,t1,t2);}

C_noret_decl(trf_1997)
static void C_fcall trf_1997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1997(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1997(t0,t1);}

C_noret_decl(trf_2052)
static void C_fcall trf_2052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2052(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2052(t0,t1,t2,t3);}

C_noret_decl(trf_1738)
static void C_fcall trf_1738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1738(t0,t1,t2);}

C_noret_decl(trf_1503)
static void C_fcall trf_1503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1503(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1503(t0,t1,t2);}

C_noret_decl(trf_1072)
static void C_fcall trf_1072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1072(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1072(t0,t1);}

C_noret_decl(trf_2023)
static void C_fcall trf_2023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2023(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2023(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2392)
static void C_fcall trf_2392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2392(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2392(t0,t1,t2);}

C_noret_decl(trf_2368)
static void C_fcall trf_2368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2368(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2368(t0,t1,t2,t3);}

C_noret_decl(trf_2345)
static void C_fcall trf_2345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2345(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2345(t0,t1,t2,t3);}

C_noret_decl(trf_2417)
static void C_fcall trf_2417(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2417(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2417(t0,t1,t2,t3);}

C_noret_decl(trf_1023)
static void C_fcall trf_1023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1023(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1023(t0,t1,t2);}

C_noret_decl(trf_2258)
static void C_fcall trf_2258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2258(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2258(t0,t1);}

C_noret_decl(trf_1536)
static void C_fcall trf_1536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1536(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1536(t0,t1);}

C_noret_decl(trf_1567)
static void C_fcall trf_1567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1567(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1567(t0,t1,t2);}

C_noret_decl(trf_1309)
static void C_fcall trf_1309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1309(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1309(t0,t1);}

C_noret_decl(trf_1339)
static void C_fcall trf_1339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1339(t0,t1);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* k2130 in k2127 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:482: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2052(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k1386 in k1380 in thread-block-for-timeout! */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:291: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[5]);}

/* k1380 in thread-block-for-timeout! */
static void C_ccall f_1382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1382,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:291: ##sys#print */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[42],C_SCHEME_FALSE,t3);}

/* k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1763,2,t0,t1);}
t2=stub354(C_SCHEME_UNDEFINED,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1700,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1700(t6,((C_word*)t0)[2],*((C_word*)lf[11]+1));}

/* k943 in schedule */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_945,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_950,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_950(t5,((C_word*)t0)[3]);}

/* k2166 in k2163 in k2160 in k2157 in k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:484: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[4]);}

/* k2163 in k2160 in k2157 in k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:484: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k2160 in k2157 in k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:484: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[30],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_fcall f_1700(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1700,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1711,a[2]=t4,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1731,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1738,a[2]=t11,a[3]=t5,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_1738(t13,t9,t8);}}

/* loop in clear-i/o-state-for-thread! */
static void C_fcall f_2274(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2274,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_u_i_car(t2);
t4=t3;
t5=C_u_i_car(t4);
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2296,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_u_i_cdr(t4);
/* scheduler.scm:506: ##sys#delq */
t9=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[3],t8);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2315,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:511: loop */
t13=t7;
t14=t9;
t1=t13;
t2=t14;
goto loop;}}}

/* k2270 in clear-i/o-state-for-thread! */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1988,2,t0,t1);}
t2=C_i_pairp(lf[10]);
t3=t2;
t4=C_i_pairp(lf[13]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1997,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(t3)?C_i_not(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_u_i_caar(lf[10]);
t9=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t10=C_a_i_flonum_difference(&a,2,t8,t9);
t11=t6;
f_1997(t11,C_i_flonum_max(lf[32],t10));}
else{
t8=t6;
f_1997(t8,lf[32]);}}

/* k1678 in a1675 in default-exception-handler */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:373: ptx */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* ##sys#interrupt-hook */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1239,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1243,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1257,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(*((C_word*)lf[1]+1),C_fix(1),t7);
/* scheduler.scm:270: ##sys#schedule */
t9=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t4);}
else{
/* scheduler.scm:271: oldhook */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t3);}}

/* loop in k1307 in thread-block-for-timeout! */
static void C_fcall f_1329(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1329,NULL,4,t0,t1,t2,t3);}
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1339,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_1339(t6,t4);}
else{
t6=C_u_i_caar(t2);
t7=t5;
f_1339(t7,C_flonum_lessp(((C_word*)t0)[2],t6));}}

/* k2227 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1632 in k1528 in thread-kill! */
static void C_ccall f_1634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1536(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* for-each-loop306 in k1540 in k1537 in k1534 in k1528 in thread-kill! */
static void C_fcall f_1586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1586,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1596,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:348: g307 */
t5=((C_word*)t0)[3];
f_1567(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k964 in loop2 in k955 in k952 in loop1 in k943 in schedule */
static void C_fcall f_966(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(3));
t3=C_eqp(t2,lf[8]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=t1;
t6=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#current-thread ...) */,t5);
t7=C_i_setslot(t5,C_fix(3),lf[9]);
t8=C_slot(t5,C_fix(5));
t9=C_slot(t8,C_fix(0));
t10=C_mutate2((C_word*)lf[2]+1 /* (set! ##sys#dynamic-winds ...) */,t9);
t11=C_slot(t8,C_fix(1));
t12=C_mutate2((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,t11);
t13=C_slot(t8,C_fix(2));
t14=C_mutate2((C_word*)lf[4]+1 /* (set! ##sys#standard-output ...) */,t13);
t15=C_slot(t8,C_fix(3));
t16=C_mutate2((C_word*)lf[5]+1 /* (set! ##sys#standard-error ...) */,t15);
t17=C_slot(t8,C_fix(4));
t18=C_mutate2((C_word*)lf[6]+1 /* (set! ##sys#current-exception-handler ...) */,t17);
t19=C_slot(t8,C_fix(5));
t20=C_mutate2((C_word*)lf[7]+1 /* (set! ##sys#current-parameter-vector ...) */,t19);
t21=C_slot(t5,C_fix(9));
t22=C_set_initial_timer_interrupt_period(t21);
t23=C_slot(t5,C_fix(1));
/* scheduler.scm:151: g122 */
t24=t23;
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,t4);}
else{
/* scheduler.scm:218: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_962(t4,((C_word*)t0)[2]);}}
else{
if(C_truep(C_i_nullp(lf[10]))){
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_halt(lf[12]));}
else{
/* scheduler.scm:216: loop1 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_950(t2,((C_word*)t0)[2]);}}
else{
/* scheduler.scm:216: loop1 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_950(t2,((C_word*)t0)[2]);}}}

/* ##sys#thread-kill! */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1526,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1530,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(8));
if(C_truep(C_i_nullp(t6))){
t7=C_SCHEME_UNDEFINED;
t8=t4;
f_1530(2,t8,t7);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1503,a[2]=t8,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1503(t10,t4,t6);}}

/* loop2 in k955 in k952 in loop1 in k943 in schedule */
static void C_fcall f_962(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_962,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_966,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=lf[13];
if(C_truep(C_i_nullp(lf[13]))){
t4=t2;
f_966(t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(1));
t5=C_mutate2(&lf[13] /* (set! ready-queue-head ...) */,t4);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
t7=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=C_u_i_car(t3);
t9=t2;
f_966(t9,t8);}
else{
t7=C_u_i_car(t3);
t8=t2;
f_966(t8,t7);}}}

/* ##sys#thread-block-for-termination! */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1396,4,t0,t1,t2,t3);}
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[44]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[45]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[41]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_setslot(t2,C_fix(11),t3));}}

/* k1389 in k1386 in k1380 in thread-block-for-timeout! */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1394,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:291: get-output-string */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1392 in k1389 in k1386 in k1380 in thread-block-for-timeout! */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1309(t2,C_halt(t1));}

/* k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:416: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:416: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[27],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2294 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_setslot(((C_word*)t0)[4],C_fix(1),t1);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1886 in k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:416: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k2127 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:481: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1511 in for-each-loop258 in thread-kill! */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1503(t3,((C_word*)t0)[4],t2);}

/* k2514 in k2511 in k2508 in thread-unblock! */
static void C_ccall f_2516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:565: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2508 in thread-unblock! */
static void C_fcall f_2510(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2510,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:563: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_halt(t1));}

/* k2511 in k2508 in thread-unblock! */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:564: ##sys#clear-i/o-state-for-thread! */
f_2258(t2,((C_word*)t0)[3]);}

/* k2169 in k2166 in k2163 in k2160 in k2157 in k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:484: get-output-string */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* g614 in kill-other-threads */
static C_word C_fcall f_2561(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
t2=C_slot(t1,C_fix(1));
return(f_2535(((C_word*)t0)[2],t2));}

/* k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* scheduler.scm:416: ##sys#print */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[28],C_SCHEME_FALSE,t3);}

/* g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_fcall f_1711(C_word t0,C_word t1,C_word t2){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1711,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t3);
t5=t1;
t6=((C_word*)t0)[2];
t7=t4;
t8=C_eqp(t7,C_SCHEME_TRUE);
t9=(C_truep(t8)?t8:C_eqp(t7,lf[19]));
if(C_truep(t9)){
t10=t5;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub388(C_SCHEME_UNDEFINED,t6,C_SCHEME_TRUE,C_SCHEME_FALSE));}
else{
t10=C_eqp(t7,C_SCHEME_FALSE);
t11=(C_truep(t10)?t10:C_eqp(t7,lf[20]));
if(C_truep(t11)){
t12=t5;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub388(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,C_SCHEME_TRUE));}
else{
t12=C_eqp(t7,lf[21]);
if(C_truep(t12)){
t13=t5;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,stub388(C_SCHEME_UNDEFINED,t6,C_SCHEME_TRUE,C_SCHEME_TRUE));}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1805,a[2]=t5,a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:408: open-output-string */
t14=*((C_word*)lf[29]+1);
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2153,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:484: ##sys#print */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[31],C_SCHEME_FALSE,t3);}

/* k2157 in k2151 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_car(((C_word*)t0)[6]);
/* scheduler.scm:484: ##sys#print */
t4=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k1654 in default-exception-handler */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1656,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:378: ##sys#thread-kill! */
t4=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[45]);}

/* ##sys#default-exception-handler */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)tr3,(void*)f_1652,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1656,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[15]+1);
t6=C_slot(*((C_word*)lf[15]+1),C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1676,a[2]=t7,a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp);
t9=C_i_setslot(*((C_word*)lf[15]+1),C_fix(1),t8);
/* scheduler.scm:374: ##sys#thread-unblock! */
t10=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t4,*((C_word*)lf[15]+1));}
else{
/* scheduler.scm:376: ##sys#show-exception-warning */
t5=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,lf[53],*((C_word*)lf[1]+1));}}

/* loop in thread-block-for-i/o! */
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1940,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate2((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_u_i_cdr(t3);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_setslot(t3,C_fix(1),t7));}
else{
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:429: loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* ##sys#thread-basic-unblock! */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1640,3,t0,t1,t2);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:360: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}

/* k952 in loop1 in k943 in schedule */
static void C_ccall f_954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_set_i_slot(*((C_word*)lf[15]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:223: ##sys#thread-unblock! */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,*((C_word*)lf[15]+1));}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_957(2,t4,t3);}
else{
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1988,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:387: ##sys#length */
t7=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[11]+1));}}}

/* loop1 in k943 in schedule */
static void C_fcall f_950(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_950,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_954,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[10]))){
t3=t2;
f_954(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1023,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1023(t7,t2,lf[10]);}}

/* k955 in k952 in loop1 in k943 in schedule */
static void C_ccall f_957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_957,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_962,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_962(t5,((C_word*)t0)[3]);}

/* k1889 in k1886 in k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:416: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[26],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1892 in k1889 in k1886 in k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:416: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k1895 in k1892 in k1889 in k1886 in k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:416: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[4]);}

/* suspend in kill-other-threads */
static C_word C_fcall f_2535(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
t2=C_eqp(t1,((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_UNDEFINED:C_i_setslot(t1,C_fix(3),lf[63]));
t4=C_i_set_i_slot(t1,C_fix(11),C_SCHEME_FALSE);
return(C_i_set_i_slot(t1,C_fix(12),C_SCHEME_END_OF_LIST));}

/* ##sys#kill-other-threads */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t20;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2532,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2535,a[2]=t3,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t5=C_mutate2((C_word*)lf[15]+1 /* (set! ##sys#primordial-thread ...) */,*((C_word*)lf[1]+1));
t6=C_a_i_list1(&a,1,*((C_word*)lf[1]+1));
t7=C_mutate2(&lf[13] /* (set! ready-queue-head ...) */,t6);
t8=C_mutate2(&lf[14] /* (set! ready-queue-tail ...) */,lf[13]);
t9=f_2535(t4,*((C_word*)lf[1]+1));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2561,a[2]=t4,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t11=lf[10];
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2616,a[2]=t10,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t13=f_2616(t12,lf[10]);
t14=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2574,a[2]=t4,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t16=*((C_word*)lf[11]+1);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=t15,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t18=f_2593(t17,*((C_word*)lf[11]+1));
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:591: thunk */
t20=t2;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t19);}

/* for-each-loop272 in for-each-loop258 in thread-kill! */
static void C_fcall f_1477(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1477,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1487,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:326: ##sys#thread-unblock! */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1660 in k1654 in default-exception-handler */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:379: ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_fcall f_1997(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1997,NULL,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?stub479(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1):stub479(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_i_set_i_slot(*((C_word*)lf[15]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:223: ##sys#thread-unblock! */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[4],*((C_word*)lf[15]+1));}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2021,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=t6,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2023(t8,t4,t2,C_fix(0),*((C_word*)lf[11]+1));}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}}

/* for-each-loop630 in kill-other-threads */
static C_word C_fcall f_2593(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_2574(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k2586 in kill-other-threads */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:592: exit */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* g631 in kill-other-threads */
static C_word C_fcall f_2574(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
t2=C_slot(t1,C_fix(1));
return(f_2535(((C_word*)t0)[2],t2));}

/* ##sys#fetch-and-clear-threads */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=C_a_i_vector4(&a,4,lf[13],lf[14],*((C_word*)lf[11]+1),lf[10]);
t3=lf[13] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* k1459 in for-each-loop258 in thread-kill! */
static void C_ccall f_1461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),C_SCHEME_END_OF_LIST));}

/* f_2462 in all-threads */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2462,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,t4,t5));}

/* k2313 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2315,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1058 in k1055 in loop in loop1 in k943 in schedule */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:186: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1023(t4,((C_word*)t0)[4],t3);}

/* k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1805,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1811,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:408: ##sys#print */
t6=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],C_SCHEME_FALSE,t3);}

/* a1675 in default-exception-handler */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:372: ##sys#signal */
t3=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1746 in for-each-loop362 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1738(t3,((C_word*)t0)[4],t2);}

/* loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_fcall f_2052(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2052,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:467: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2023(t7,t1,t4,t5,t6);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2091,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t8=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t9=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:469: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_2023(t10,t6,t7,t8,t9);}}
else{
t4=C_u_i_car(t2);
t5=t4;
t6=C_slot(t5,C_fix(11));
t7=t6;
if(C_truep(C_slot(t5,C_fix(13)))){
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:475: loop2 */
t36=t1;
t37=t9;
t38=t3;
t1=t36;
t2=t37;
t3=t38;
goto loop;}
else{
if(C_truep(C_i_pairp(t7))){
t8=C_u_i_car(t7);
t9=C_eqp(((C_word*)t0)[6],t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2182,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t11=C_u_i_cdr(t7);
t12=t10;
t13=((C_word*)t0)[8];
t14=((C_word*)t0)[9];
t15=t11;
t16=C_eqp(t15,C_SCHEME_TRUE);
t17=(C_truep(t16)?t16:C_eqp(t15,lf[19]));
if(C_truep(t17)){
t18=t12;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t13);}
else{
t18=C_eqp(t15,C_SCHEME_FALSE);
t19=(C_truep(t18)?t18:C_eqp(t15,lf[20]));
if(C_truep(t19)){
t20=t12;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t14);}
else{
t20=C_eqp(t15,lf[21]);
if(C_truep(t20)){
t21=t12;
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,(C_truep(t13)?t13:t14));}
else{
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1876,a[2]=t12,a[3]=t14,a[4]=t13,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:416: open-output-string */
t22=*((C_word*)lf[29]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}}}}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2153,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:484: open-output-string */
t11=*((C_word*)lf[29]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2129,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t5,C_fix(4)))){
/* scheduler.scm:480: ##sys#remove-from-timeout-list */
t9=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}
else{
t9=t8;
f_2129(2,t9,C_SCHEME_UNDEFINED);}}}}}

/* k1485 in for-each-loop272 in for-each-loop258 in thread-kill! */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1477(t3,((C_word*)t0)[4],t2);}

/* k1055 in loop in loop1 in k943 in schedule */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:185: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1615 in k1528 in thread-kill! */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1536(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* k2431 in loop in loop in loop in all-threads */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:534: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2417(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_halt(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 in k1874 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:416: get-output-string */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1729 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:397: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1700(t4,((C_word*)t0)[4],t3);}

/* for-each-loop362 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_fcall f_1738(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1738,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1748,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:390: g363 */
t5=((C_word*)t0)[3];
f_1711(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#restore-threads */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2481,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate2(&lf[13] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate2(&lf[14] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate2((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate2(&lf[10] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* k1821 in k1818 in k1815 in k1812 in k1809 in k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:408: get-output-string */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1824 in k1821 in k1818 in k1815 in k1812 in k1809 in k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_halt(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* for-each-loop258 in thread-kill! */
static void C_fcall f_1503(C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1503,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1513,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_set_i_slot(t6,C_fix(2),C_SCHEME_FALSE);
t8=C_i_set_i_slot(t6,C_fix(4),C_SCHEME_TRUE);
t9=C_i_set_i_slot(t6,C_fix(5),C_SCHEME_FALSE);
t10=C_slot(t6,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1461,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t10))){
t12=t5;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_set_i_slot(t6,C_fix(3),C_SCHEME_END_OF_LIST));}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1477,a[2]=t13,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_1477(t15,t11,t10);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1818 in k1815 in k1812 in k1809 in k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:408: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[4]);}

/* k1070 in loop in loop1 in k943 in schedule */
static void C_fcall f_1072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1072,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_caar(lf[10]);
t3=C_a_i_flonum_difference(&a,2,t2,((C_word*)t0)[2]);
t4=C_quickflonumtruncate(t3);
t5=C_i_fixnum_max(C_fix(0),t4);
if(C_truep(C_msleep(t5))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_mk_bool(C_signal_interrupted_p);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k2089 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1923 in thread-block-for-i/o! */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1925,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[41]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(((C_word*)t0)[2],C_fix(11),t4));}

/* ##sys#thread-block-for-i/o! */
static void C_ccall f_1921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1921,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1925,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1940,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1940(t9,t5,*((C_word*)lf[11]+1));}

/* k1812 in k1809 in k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:408: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[33],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1815 in k1812 in k1809 in k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:408: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k1809 in k1803 in g363 in loop in k1761 in k952 in loop1 in k943 in schedule */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:408: ##sys#print */
t3=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k2019 in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_fcall f_2023(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2023,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_zerop(t2);
t6=(C_truep(t5)?t5:C_i_nullp(t4));
if(C_truep(t6)){
t7=t4;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_u_i_car(t4);
t8=t7;
t9=C_u_i_car(t8);
t10=t9;
t11=C_fd_input_ready(t10,t3);
t12=C_fd_output_ready(t10,t3);
t13=(C_truep(t11)?t11:t12);
if(C_truep(t13)){
t14=C_u_i_cdr(t8);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2052,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t10,a[7]=t16,a[8]=t11,a[9]=t12,a[10]=((C_word)li1),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_2052(t18,t1,t14,C_SCHEME_END_OF_LIST);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2229,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t15=C_a_i_plus(&a,2,t3,C_fix(1));
t16=t4;
t17=C_u_i_cdr(t16);
/* scheduler.scm:491: loop */
t24=t14;
t25=t2;
t26=t15;
t27=t17;
t1=t24;
t2=t25;
t3=t26;
t4=t27;
goto loop;}}}

/* loop in loop in loop in all-threads */
static void C_fcall f_2392(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2392,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:531: loop */
t10=t5;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}

/* for-each-loop613 in kill-other-threads */
static C_word C_fcall f_2616(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=f_2561(((C_word*)t0)[2],t2);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k2385 in loop in loop in all-threads */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:527: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2368(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#add-to-ready-queue */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1140,3,t0,t1,t2);}
t3=C_i_setslot(t2,C_fix(3),lf[8]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[13]);
if(C_truep(t5)){
t6=C_mutate2(&lf[13] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate2(&lf[14] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=C_i_setslot(lf[14],C_fix(1),t4);
t7=C_mutate2(&lf[14] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* loop in loop in all-threads */
static void C_fcall f_2368(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2368,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_caar(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=C_u_i_cdr(t10);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2392,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t13,a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2392(t15,t8,t11);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2417,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2417(t7,t1,lf[10],t3);}}

/* k2359 in loop in all-threads */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:524: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2345(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#schedule */
static void C_ccall f_915(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_915,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(*((C_word*)lf[1]+1),C_fix(3));
t6=C_slot(*((C_word*)lf[1]+1),C_fix(5));
t7=C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_945,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:C_eqp(t5,lf[8]));
if(C_truep(t15)){
t16=C_i_set_i_slot(*((C_word*)lf[1]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:168: ##sys#add-to-ready-queue */
t17=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t13,*((C_word*)lf[1]+1));}
else{
t16=t13;
f_945(2,t16,C_SCHEME_UNDEFINED);}}

/* loop in all-threads */
static void C_fcall f_2345(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2345,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* scheduler.scm:524: cns */
t9=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t6,lf[8],C_SCHEME_FALSE,t8,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2368,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2368(t7,t1,*((C_word*)lf[11]+1),t3);}}

/* ##sys#ready-queue */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[13]);}

/* k2408 in loop in loop in loop in all-threads */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:531: cns */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[56],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in loop in loop in all-threads */
static void C_fcall f_2417(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2417,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* scheduler.scm:534: cns */
t11=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t6,lf[57],t7,t10,t3);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* ##sys#all-threads */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_2327r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2327r(t0,t1,t2);}}

static void C_ccall f_2327r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(10);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2462,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp):C_u_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_slot(t2,C_fix(1)));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_u_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_slot(t7,C_fix(1)));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2345,a[2]=t13,a[3]=t5,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2345(t15,t1,lf[13],t9);}

/* k1594 in for-each-loop306 in k1540 in k1537 in k1534 in k1528 in thread-kill! */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1586(t3,((C_word*)t0)[4],t2);}

/* k1540 in k1537 in k1534 in k1528 in thread-kill! */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1542,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[2],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1567,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1586,a[2]=t10,a[3]=t8,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1586(t12,t7,t6);}}

/* loop in loop1 in k943 in schedule */
static void C_fcall f_1023(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1023,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_u_i_caar(t2);
t4=t2;
t5=C_u_i_car(t4);
t6=C_u_i_cdr(t5);
t7=C_slot(t6,C_fix(4));
if(C_truep(C_i_equalp(t3,t7))){
if(C_truep(C_flonum_greater_or_equal_p(((C_word*)t0)[2],t3))){
t8=C_i_set_i_slot(t6,C_fix(13),C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1057,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:184: ##sys#clear-i/o-state-for-thread! */
f_2258(t9,t6);}
else{
t8=C_mutate2(&lf[10] /* (set! ##sys#timeout-list ...) */,t2);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[13]))){
t10=C_i_nullp(*((C_word*)lf[11]+1));
t11=t9;
f_1072(t11,(C_truep(t10)?C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t10=t9;
f_1072(t10,C_SCHEME_FALSE);}}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:204: loop */
t17=t1;
t18=t9;
t1=t17;
t2=t18;
goto loop;}}}

/* ##sys#clear-i/o-state-for-thread! */
static void C_fcall f_2258(C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2258,NULL,2,t1,t2);}
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2272,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2274,a[2]=t6,a[3]=t2,a[4]=t9,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2274(t11,t7,*((C_word*)lf[11]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1534 in k1528 in thread-kill! */
static void C_fcall f_1536(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1536,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:340: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1528 in thread-kill! */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1530,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(11));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t3,lf[47]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1617,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t3,C_fix(2));
/* scheduler.scm:337: ##sys#delq */
t7=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
if(C_truep(C_i_structurep(t3,lf[49]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1634,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t3,C_fix(12));
/* scheduler.scm:339: ##sys#delq */
t7=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1536(t6,t5);}}}

/* k1537 in k1534 in k1528 in thread-kill! */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:341: ##sys#clear-i/o-state-for-thread! */
f_2258(t2,((C_word*)t0)[2]);}

/* k1558 in k1540 in k1537 in k1534 in k1528 in thread-kill! */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST));}

/* g307 in k1540 in k1537 in k1534 in k1528 in thread-kill! */
static void C_fcall f_1567(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1567,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:352: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(53);
if(!C_demand(53)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(494)){
C_save(t1);
C_rereclaim2(494*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(53);
C_initialize_lf(lf,64);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[11]=C_h_intern(&lf[11],11,"\003sysfd-list");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\010deadlock");
lf[15]=C_h_intern(&lf[15],21,"\003sysprimordial-thread");
lf[16]=C_h_intern(&lf[16],19,"\003systhread-unblock!");
lf[17]=C_h_intern(&lf[17],25,"\003systhread-basic-unblock!");
lf[18]=C_h_intern(&lf[18],28,"\003sysremove-from-timeout-list");
lf[19]=C_h_intern(&lf[19],6,"\000input");
lf[20]=C_h_intern(&lf[20],7,"\000output");
lf[21]=C_h_intern(&lf[21],4,"\000all");
lf[22]=C_h_intern(&lf[22],7,"sprintf");
lf[23]=C_h_intern(&lf[23],17,"get-output-string");
lf[24]=C_h_intern(&lf[24],16,"\003syswrite-char-0");
lf[25]=C_h_intern(&lf[25],9,"\003sysprint");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\006, o = ");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\006 (i = ");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000#fdset-test: invalid i/o direction: ");
lf[29]=C_h_intern(&lf[29],18,"open-output-string");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\013 (expected ");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\0009thread is registered for I/O on unknown file-descriptor: ");
lf[32]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\007 (fd = ");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\042fdset-set: invalid i/o direction: ");
lf[35]=C_h_intern(&lf[35],10,"\003syslength");
lf[37]=C_h_intern(&lf[37],22,"\003sysadd-to-ready-queue");
lf[38]=C_h_intern(&lf[38],15,"\003sysready-queue");
lf[39]=C_h_intern(&lf[39],18,"\003sysinterrupt-hook");
lf[40]=C_h_intern(&lf[40],29,"\003systhread-block-for-timeout!");
lf[41]=C_h_intern(&lf[41],7,"blocked");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\0002##sys#thread-block-for-timeout!: invalid timeout: ");
lf[43]=C_h_intern(&lf[43],33,"\003systhread-block-for-termination!");
lf[44]=C_h_intern(&lf[44],4,"dead");
lf[45]=C_h_intern(&lf[45],10,"terminated");
lf[46]=C_h_intern(&lf[46],16,"\003systhread-kill!");
lf[47]=C_h_intern(&lf[47],18,"condition-variable");
lf[48]=C_h_intern(&lf[48],8,"\003sysdelq");
lf[49]=C_h_intern(&lf[49],6,"thread");
lf[50]=C_h_intern(&lf[50],29,"\003sysdefault-exception-handler");
lf[51]=C_h_intern(&lf[51],10,"\003syssignal");
lf[52]=C_h_intern(&lf[52],26,"\003sysshow-exception-warning");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\011in thread");
lf[54]=C_h_intern(&lf[54],25,"\003systhread-block-for-i/o!");
lf[55]=C_h_intern(&lf[55],15,"\003sysall-threads");
lf[56]=C_h_intern(&lf[56],3,"i/o");
lf[57]=C_h_intern(&lf[57],7,"timeout");
lf[58]=C_h_intern(&lf[58],27,"\003sysfetch-and-clear-threads");
lf[59]=C_h_intern(&lf[59],19,"\003sysrestore-threads");
lf[60]=C_h_intern(&lf[60],8,"sleeping");
lf[61]=C_h_intern(&lf[61],4,"exit");
lf[62]=C_h_intern(&lf[62],22,"\003syskill-other-threads");
lf[63]=C_h_intern(&lf[63],9,"suspended");
C_register_lf2(lf,64,create_ptable());
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t3=lf[13] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[14] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_mutate2((C_word*)lf[38]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1137,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[37]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[39]+1);
t8=C_mutate2((C_word*)lf[39]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1239,a[2]=t7,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t9=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t10=C_mutate2((C_word*)lf[18]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[40]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1305,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[43]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1396,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[46]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1526,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[17]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1640,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[50]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t17=C_mutate2((C_word*)lf[54]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1921,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[36] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2258,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[55]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2327,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[58]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[59]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[16]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2500,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t23=*((C_word*)lf[61]+1);
t24=C_mutate2((C_word*)lf[62]+1 /* (set! ##sys#kill-other-threads ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2532,a[2]=t23,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t25=t1;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,C_SCHEME_UNDEFINED);}

/* k1307 in thread-block-for-timeout! */
static void C_fcall f_1309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1309,NULL,2,t0,t1);}
if(C_truep(C_flonum_greaterp(((C_word*)t0)[2],lf[32]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1329(t6,t2,lf[10],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#thread-block-for-timeout! */
static void C_ccall f_1305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1305,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1309,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_flonump(t3))){
t5=t4;
f_1309(t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1382,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:291: open-output-string */
t6=*((C_word*)lf[29]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a1256 in interrupt-hook */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1257,2,t0,t1);}
/* scheduler.scm:269: oldhook */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1241 in interrupt-hook */
static void C_ccall f_1243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm:271: oldhook */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1337 in loop in k1307 in thread-block-for-timeout! */
static void C_fcall f_1339(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1339,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[2],C_fix(1),t3));}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=C_mutate2(&lf[10] /* (set! ##sys#timeout-list ...) */,t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:299: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1329(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);}}

/* loop in remove-from-timeout-list */
static C_word C_fcall f_1270(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_truep(C_i_nullp(t1))){
t3=t1;
return(t3);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_slot(t3,C_fix(1));
t6=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return(C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate2(&lf[10] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t10=t4;
t11=t1;
t1=t10;
t2=t11;
goto loop;}}}

/* k1316 in k1307 in thread-block-for-timeout! */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[41]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_setslot(((C_word*)t0)[2],C_fix(4),((C_word*)t0)[4]));}

/* ##sys#remove-from-timeout-list */
static void C_ccall f_1264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1264,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1270,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1270(t3,lf[10],C_SCHEME_FALSE));}

/* k2183 in k2180 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:488: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* ##sys#thread-unblock! */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2500,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[41],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2510,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2510(t6,t4);}
else{
t6=C_slot(t2,C_fix(3));
t7=t5;
f_2510(t7,C_eqp(lf[60],t6));}}

/* k2186 in k2183 in k2180 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:489: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2052(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k2180 in loop2 in loop in k1995 in k1986 in k952 in loop1 in k943 in schedule */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(4)))){
/* scheduler.scm:487: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_2185(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* scheduler.scm:490: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2052(t5,((C_word*)t0)[4],t3,t4);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[124] = {
{"f_2132:scheduler_2escm",(void*)f_2132},
{"f_1388:scheduler_2escm",(void*)f_1388},
{"f_1382:scheduler_2escm",(void*)f_1382},
{"f_1763:scheduler_2escm",(void*)f_1763},
{"f_945:scheduler_2escm",(void*)f_945},
{"f_2168:scheduler_2escm",(void*)f_2168},
{"f_2165:scheduler_2escm",(void*)f_2165},
{"f_2162:scheduler_2escm",(void*)f_2162},
{"f_1700:scheduler_2escm",(void*)f_1700},
{"f_2274:scheduler_2escm",(void*)f_2274},
{"f_2272:scheduler_2escm",(void*)f_2272},
{"f_1988:scheduler_2escm",(void*)f_1988},
{"f_1680:scheduler_2escm",(void*)f_1680},
{"f_1239:scheduler_2escm",(void*)f_1239},
{"f_1329:scheduler_2escm",(void*)f_1329},
{"f_2229:scheduler_2escm",(void*)f_2229},
{"f_1634:scheduler_2escm",(void*)f_1634},
{"f_1586:scheduler_2escm",(void*)f_1586},
{"f_966:scheduler_2escm",(void*)f_966},
{"f_1526:scheduler_2escm",(void*)f_1526},
{"f_962:scheduler_2escm",(void*)f_962},
{"f_1396:scheduler_2escm",(void*)f_1396},
{"f_1391:scheduler_2escm",(void*)f_1391},
{"f_1394:scheduler_2escm",(void*)f_1394},
{"f_1882:scheduler_2escm",(void*)f_1882},
{"f_1885:scheduler_2escm",(void*)f_1885},
{"f_2296:scheduler_2escm",(void*)f_2296},
{"f_1888:scheduler_2escm",(void*)f_1888},
{"f_2129:scheduler_2escm",(void*)f_2129},
{"f_1513:scheduler_2escm",(void*)f_1513},
{"f_2516:scheduler_2escm",(void*)f_2516},
{"f_2510:scheduler_2escm",(void*)f_2510},
{"f_2174:scheduler_2escm",(void*)f_2174},
{"f_2513:scheduler_2escm",(void*)f_2513},
{"f_2171:scheduler_2escm",(void*)f_2171},
{"f_2561:scheduler_2escm",(void*)f_2561},
{"f_1876:scheduler_2escm",(void*)f_1876},
{"f_1711:scheduler_2escm",(void*)f_1711},
{"f_2153:scheduler_2escm",(void*)f_2153},
{"f_2159:scheduler_2escm",(void*)f_2159},
{"f_1656:scheduler_2escm",(void*)f_1656},
{"f_1652:scheduler_2escm",(void*)f_1652},
{"f_1940:scheduler_2escm",(void*)f_1940},
{"f_1640:scheduler_2escm",(void*)f_1640},
{"f_954:scheduler_2escm",(void*)f_954},
{"f_950:scheduler_2escm",(void*)f_950},
{"f_957:scheduler_2escm",(void*)f_957},
{"f_1891:scheduler_2escm",(void*)f_1891},
{"f_1894:scheduler_2escm",(void*)f_1894},
{"f_1897:scheduler_2escm",(void*)f_1897},
{"f_2535:scheduler_2escm",(void*)f_2535},
{"f_2532:scheduler_2escm",(void*)f_2532},
{"f_1477:scheduler_2escm",(void*)f_1477},
{"f_1662:scheduler_2escm",(void*)f_1662},
{"f_1997:scheduler_2escm",(void*)f_1997},
{"f_2593:scheduler_2escm",(void*)f_2593},
{"f_2588:scheduler_2escm",(void*)f_2588},
{"f_2574:scheduler_2escm",(void*)f_2574},
{"f_2471:scheduler_2escm",(void*)f_2471},
{"f_1461:scheduler_2escm",(void*)f_1461},
{"f_2462:scheduler_2escm",(void*)f_2462},
{"f_2315:scheduler_2escm",(void*)f_2315},
{"f_1060:scheduler_2escm",(void*)f_1060},
{"f_1805:scheduler_2escm",(void*)f_1805},
{"f_1676:scheduler_2escm",(void*)f_1676},
{"f_1748:scheduler_2escm",(void*)f_1748},
{"f_2052:scheduler_2escm",(void*)f_2052},
{"f_1487:scheduler_2escm",(void*)f_1487},
{"f_1057:scheduler_2escm",(void*)f_1057},
{"f_1617:scheduler_2escm",(void*)f_1617},
{"f_2433:scheduler_2escm",(void*)f_2433},
{"f_1903:scheduler_2escm",(void*)f_1903},
{"f_1900:scheduler_2escm",(void*)f_1900},
{"f_1731:scheduler_2escm",(void*)f_1731},
{"f_1738:scheduler_2escm",(void*)f_1738},
{"f_2481:scheduler_2escm",(void*)f_2481},
{"f_1823:scheduler_2escm",(void*)f_1823},
{"f_1826:scheduler_2escm",(void*)f_1826},
{"f_1503:scheduler_2escm",(void*)f_1503},
{"f_1820:scheduler_2escm",(void*)f_1820},
{"f_1072:scheduler_2escm",(void*)f_1072},
{"f_2091:scheduler_2escm",(void*)f_2091},
{"f_1925:scheduler_2escm",(void*)f_1925},
{"f_1921:scheduler_2escm",(void*)f_1921},
{"f_1814:scheduler_2escm",(void*)f_1814},
{"f_1817:scheduler_2escm",(void*)f_1817},
{"f_1811:scheduler_2escm",(void*)f_1811},
{"f_2021:scheduler_2escm",(void*)f_2021},
{"f_2023:scheduler_2escm",(void*)f_2023},
{"f_2392:scheduler_2escm",(void*)f_2392},
{"f_2616:scheduler_2escm",(void*)f_2616},
{"f_2387:scheduler_2escm",(void*)f_2387},
{"f_1140:scheduler_2escm",(void*)f_1140},
{"f_2368:scheduler_2escm",(void*)f_2368},
{"f_2361:scheduler_2escm",(void*)f_2361},
{"f_915:scheduler_2escm",(void*)f_915},
{"f_2345:scheduler_2escm",(void*)f_2345},
{"f_1137:scheduler_2escm",(void*)f_1137},
{"f_2410:scheduler_2escm",(void*)f_2410},
{"f_2417:scheduler_2escm",(void*)f_2417},
{"f_2327:scheduler_2escm",(void*)f_2327},
{"f_1596:scheduler_2escm",(void*)f_1596},
{"f_1542:scheduler_2escm",(void*)f_1542},
{"f_1023:scheduler_2escm",(void*)f_1023},
{"f_2258:scheduler_2escm",(void*)f_2258},
{"f_1536:scheduler_2escm",(void*)f_1536},
{"f_1530:scheduler_2escm",(void*)f_1530},
{"f_1539:scheduler_2escm",(void*)f_1539},
{"f_1560:scheduler_2escm",(void*)f_1560},
{"f_1567:scheduler_2escm",(void*)f_1567},
{"toplevel:scheduler_2escm",(void*)C_scheduler_toplevel},
{"f_1309:scheduler_2escm",(void*)f_1309},
{"f_1305:scheduler_2escm",(void*)f_1305},
{"f_1257:scheduler_2escm",(void*)f_1257},
{"f_1243:scheduler_2escm",(void*)f_1243},
{"f_1339:scheduler_2escm",(void*)f_1339},
{"f_1270:scheduler_2escm",(void*)f_1270},
{"f_1318:scheduler_2escm",(void*)f_1318},
{"f_1264:scheduler_2escm",(void*)f_1264},
{"f_2185:scheduler_2escm",(void*)f_2185},
{"f_2500:scheduler_2escm",(void*)f_2500},
{"f_2188:scheduler_2escm",(void*)f_2188},
{"f_2182:scheduler_2escm",(void*)f_2182},
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
S|  for-each		5
S|  ##sys#for-each		1
S|  sprintf		4
o|eliminated procedure checks: 125 
o|specializations:
o|  1 (fpmax float float)
o|  10 (eqv? * (not float))
o|  4 (##sys#check-output-port * * *)
o|  3 (car pair)
o|  20 (cdr pair)
o|  4 (cdar (pair pair *))
o|Removed `not' forms: 5 
o|contracted procedure: k970 
o|inlining procedure: k967 
o|contracted procedure: "(scheduler.scm:217) switch120" 
o|contracted procedure: "(scheduler.scm:156) restore-thread-state-buffer" 
o|inlining procedure: k967 
o|contracted procedure: "(scheduler.scm:212) remove-from-ready-queue" 
o|contracted procedure: k1165 
o|inlining procedure: k1162 
o|inlining procedure: k1162 
o|propagated global variable: first-pair181 ready-queue-head 
o|inlining procedure: k1007 
o|inlining procedure: k1007 
o|contracted procedure: "(scheduler.scm:209) unblock-threads-for-i/o" 
o|inlining procedure: k2003 
o|inlining procedure: k2003 
o|inlining procedure: k2025 
o|inlining procedure: k2025 
o|inlining procedure: k2054 
o|inlining procedure: k2054 
o|contracted procedure: k2124 
o|inlining procedure: k2121 
o|contracted procedure: k2147 
o|inlining procedure: k2177 
o|inlining procedure: k2177 
o|contracted procedure: "(scheduler.scm:485) fdset-test" 
o|inlining procedure: k1846 
o|inlining procedure: k1846 
o|inlining procedure: k1864 
o|substituted constant variable: a1878 
o|substituted constant variable: a1879 
o|inlining procedure: k1864 
o|substituted constant variable: a1905 
o|substituted constant variable: a1910 
o|substituted constant variable: a1912 
o|substituted constant variable: a1917 
o|substituted constant variable: a1919 
o|substituted constant variable: a2155 
o|substituted constant variable: a2156 
o|inlining procedure: k2121 
o|contracted procedure: "(scheduler.scm:445) g475476" 
o|substituted constant variable: a2249 
o|contracted procedure: "(scheduler.scm:436) create-fdset" 
o|inlining procedure: k1702 
o|inlining procedure: k1716 
o|contracted procedure: "(scheduler.scm:395) fdset-set" 
o|inlining procedure: k1769 
o|inlining procedure: "(scheduler.scm:403) fdset-add!384" 
o|inlining procedure: k1769 
o|inlining procedure: "(scheduler.scm:404) fdset-add!384" 
o|inlining procedure: k1793 
o|inlining procedure: "(scheduler.scm:405) fdset-add!384" 
o|substituted constant variable: a1807 
o|substituted constant variable: a1808 
o|inlining procedure: k1793 
o|substituted constant variable: a1828 
o|substituted constant variable: a1833 
o|substituted constant variable: a1835 
o|substituted constant variable: a1840 
o|substituted constant variable: a1842 
o|inlining procedure: k1716 
o|inlining procedure: k1702 
o|inlining procedure: k1740 
o|inlining procedure: k1740 
o|contracted procedure: "(scheduler.scm:386) g351352" 
o|inlining procedure: k1025 
o|inlining procedure: k1025 
o|inlining procedure: k1046 
o|inlining procedure: k1046 
o|contracted procedure: k1080 
o|inlining procedure: k1077 
o|inlining procedure: k1077 
o|inlining procedure: k1096 
o|inlining procedure: k1096 
o|contracted procedure: "(scheduler.scm:164) update-thread-state-buffer" 
o|propagated global variable: ct128 ##sys#current-thread 
o|inlining procedure: k1148 
o|inlining procedure: k1148 
o|inlining procedure: k1241 
o|propagated global variable: ct205 ##sys#current-thread 
o|inlining procedure: k1241 
o|inlining procedure: k1272 
o|inlining procedure: k1272 
o|inlining procedure: k1290 
o|inlining procedure: k1290 
o|inlining procedure: k1310 
o|inlining procedure: k1331 
o|inlining procedure: k1331 
o|inlining procedure: k1310 
o|substituted constant variable: a1384 
o|substituted constant variable: a1385 
o|inlining procedure: k1401 
o|inlining procedure: k1401 
o|inlining procedure: k1558 
o|inlining procedure: k1569 
o|inlining procedure: k1569 
o|inlining procedure: k1558 
o|inlining procedure: k1588 
o|inlining procedure: k1588 
o|inlining procedure: k1622 
o|inlining procedure: k1622 
o|contracted procedure: "(scheduler.scm:333) abandon-mutexes" 
o|inlining procedure: k1439 
o|inlining procedure: k1439 
o|inlining procedure: k1505 
o|contracted procedure: "(scheduler.scm:316) g259266" 
o|inlining procedure: k1459 
o|inlining procedure: k1459 
o|inlining procedure: k1479 
o|contracted procedure: "(scheduler.scm:323) g273280" 
o|inlining procedure: k1479 
o|inlining procedure: k1505 
o|propagated global variable: pt342 ##sys#primordial-thread 
o|propagated global variable: ct336 ##sys#current-thread 
o|inlining procedure: k1942 
o|inlining procedure: k1942 
o|inlining procedure: k2260 
o|inlining procedure: k2276 
o|inlining procedure: k2276 
o|inlining procedure: k2297 
o|inlining procedure: k2297 
o|inlining procedure: k2260 
o|inlining procedure: k2347 
o|inlining procedure: k2347 
o|inlining procedure: k2370 
o|inlining procedure: k2394 
o|inlining procedure: k2394 
o|inlining procedure: k2370 
o|inlining procedure: k2419 
o|inlining procedure: k2419 
o|inlining procedure: k2502 
o|inlining procedure: k2502 
o|propagated global variable: primordial606 ##sys#current-thread 
o|inlining procedure: k2595 
o|inlining procedure: k2595 
o|propagated global variable: g637639 ##sys#fd-list 
o|inlining procedure: k2618 
o|inlining procedure: k2618 
o|propagated global variable: g620622 ##sys#timeout-list 
o|propagated global variable: primordial606 ##sys#current-thread 
o|replaced variables: 260 
o|removed binding forms: 174 
o|substituted constant variable: r11632640 
o|inlining procedure: k1172 
o|inlining procedure: k1172 
o|inlining procedure: k2240 
o|inlining procedure: k2240 
o|substituted constant variable: bool3863912663 
o|substituted constant variable: bool3873922664 
o|substituted constant variable: bool3863912668 
o|substituted constant variable: bool3873922669 
o|substituted constant variable: bool3863912673 
o|substituted constant variable: bool3873922674 
o|substituted constant variable: r10782684 
o|substituted constant variable: r10972689 
o|substituted constant variable: r22772751 
o|converted assignments to bindings: (suspend607) 
o|simplifications: ((let . 1)) 
o|replaced variables: 23 
o|removed binding forms: 290 
o|inlining procedure: k976 
o|replaced variables: 14 
o|removed binding forms: 42 
o|substituted constant variable: r9772855 
o|contracted procedure: k1693 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 15 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 17) (##core#call . 231)) 
o|  call simplifications:
o|    vector
o|    list	2
o|    ##sys#structure?	2
o|    flonum?
o|    fp>
o|    fp<
o|    fx=	2
o|    set-cdr!	3
o|    equal?
o|    fp>=
o|    fxmax
o|    ##sys#setislot	18
o|    not
o|    caar	7
o|    fp-	2
o|    fx>
o|    zero?
o|    pair?	15
o|    car	12
o|    cons	15
o|    sub1	2
o|    add1	3
o|    cdr	8
o|    null?	25
o|    eq?	25
o|    ##sys#setslot	29
o|    ##sys#slot	51
o|contracted procedure: k937 
o|contracted procedure: k1001 
o|contracted procedure: k991 
o|contracted procedure: k921 
o|contracted procedure: k928 
o|contracted procedure: k931 
o|contracted procedure: k1211 
o|contracted procedure: k1215 
o|contracted procedure: k1219 
o|contracted procedure: k1223 
o|contracted procedure: k1227 
o|contracted procedure: k1231 
o|contracted procedure: k1235 
o|contracted procedure: k982 
o|contracted procedure: k976 
o|contracted procedure: k1181 
o|contracted procedure: k1168 
o|contracted procedure: k1176 
o|inlining procedure: "(scheduler.scm:207) force-primordial" 
o|contracted procedure: k1010 
o|contracted procedure: k1989 
o|contracted procedure: k1992 
o|contracted procedure: k2000 
o|contracted procedure: k2006 
o|inlining procedure: "(scheduler.scm:450) force-primordial" 
o|contracted procedure: k2015 
o|contracted procedure: k2028 
o|contracted procedure: k2031 
o|contracted procedure: k2034 
o|contracted procedure: k2037 
o|contracted procedure: k2043 
o|contracted procedure: k2057 
o|contracted procedure: k2063 
o|contracted procedure: k2070 
o|contracted procedure: k2074 
o|contracted procedure: k2078 
o|contracted procedure: k2085 
o|contracted procedure: k2093 
o|contracted procedure: k2097 
o|contracted procedure: k2101 
o|contracted procedure: k2104 
o|contracted procedure: k2107 
o|contracted procedure: k2113 
o|contracted procedure: k2220 
o|contracted procedure: k2216 
o|contracted procedure: k2212 
o|contracted procedure: k2194 
o|contracted procedure: k2206 
o|contracted procedure: k1849 
o|contracted procedure: k1852 
o|contracted procedure: k1858 
o|contracted procedure: k1861 
o|contracted procedure: k1867 
o|contracted procedure: k2138 
o|contracted procedure: k2231 
o|contracted procedure: k2243 
o|contracted procedure: k2246 
o|contracted procedure: k2251 
o|contracted procedure: k1705 
o|contracted procedure: k1708 
o|contracted procedure: k1713 
o|contracted procedure: k1719 
o|contracted procedure: k1772 
o|contracted procedure: k1775 
o|contracted procedure: k1784 
o|contracted procedure: k1787 
o|contracted procedure: k1796 
o|contracted procedure: k1743 
o|contracted procedure: k1753 
o|contracted procedure: k1757 
o|contracted procedure: k1016 
o|contracted procedure: k1028 
o|contracted procedure: k1032 
o|contracted procedure: k1037 
o|contracted procedure: k1043 
o|contracted procedure: k1049 
o|contracted procedure: k1052 
o|contracted procedure: k1073 
o|contracted procedure: k1090 
o|contracted procedure: k1085 
o|contracted procedure: k1093 
o|contracted procedure: k1099 
o|contracted procedure: k1110 
o|contracted procedure: k1113 
o|contracted procedure: k1116 
o|contracted procedure: k1187 
o|propagated global variable: ct128 ##sys#current-thread 
o|contracted procedure: k1190 
o|contracted procedure: k1193 
o|contracted procedure: k1196 
o|contracted procedure: k1199 
o|contracted procedure: k1202 
o|contracted procedure: k1128 
o|contracted procedure: k1142 
o|contracted procedure: k1145 
o|contracted procedure: k1152 
o|contracted procedure: k1148 
o|contracted procedure: k1247 
o|contracted procedure: k1250 
o|contracted procedure: k1275 
o|contracted procedure: k1278 
o|contracted procedure: k1281 
o|contracted procedure: k1301 
o|contracted procedure: k1287 
o|contracted procedure: k1313 
o|contracted procedure: k1319 
o|contracted procedure: k1322 
o|contracted procedure: k1334 
o|contracted procedure: k1351 
o|contracted procedure: k1347 
o|contracted procedure: k1359 
o|contracted procedure: k1355 
o|contracted procedure: k1366 
o|contracted procedure: k1373 
o|contracted procedure: k1376 
o|contracted procedure: k1398 
o|contracted procedure: k1404 
o|contracted procedure: k1407 
o|contracted procedure: k1427 
o|contracted procedure: k1423 
o|contracted procedure: k1410 
o|contracted procedure: k1413 
o|contracted procedure: k1416 
o|contracted procedure: k1531 
o|contracted procedure: k1543 
o|contracted procedure: k1546 
o|contracted procedure: k1549 
o|contracted procedure: k1552 
o|contracted procedure: k1555 
o|contracted procedure: k1564 
o|contracted procedure: k1579 
o|contracted procedure: k1572 
o|contracted procedure: k1591 
o|contracted procedure: k1601 
o|contracted procedure: k1605 
o|contracted procedure: k1608 
o|contracted procedure: k1619 
o|contracted procedure: k1625 
o|contracted procedure: k1636 
o|contracted procedure: k1436 
o|contracted procedure: k1442 
o|contracted procedure: k1508 
o|contracted procedure: k1518 
o|contracted procedure: k1522 
o|contracted procedure: k1447 
o|contracted procedure: k1450 
o|contracted procedure: k1453 
o|contracted procedure: k1456 
o|contracted procedure: k1465 
o|contracted procedure: k1482 
o|contracted procedure: k1492 
o|contracted procedure: k1496 
o|contracted procedure: k1642 
o|contracted procedure: k1645 
o|contracted procedure: k1657 
o|contracted procedure: k1666 
o|contracted procedure: k1669 
o|propagated global variable: pt342 ##sys#primordial-thread 
o|propagated global variable: pt342 ##sys#primordial-thread 
o|contracted procedure: k1926 
o|contracted procedure: k1929 
o|contracted procedure: k1936 
o|contracted procedure: k1945 
o|contracted procedure: k1953 
o|contracted procedure: k1949 
o|contracted procedure: k1956 
o|contracted procedure: k1980 
o|contracted procedure: k1962 
o|contracted procedure: k1969 
o|contracted procedure: k2323 
o|contracted procedure: k2263 
o|contracted procedure: k2319 
o|contracted procedure: k2266 
o|contracted procedure: k2279 
o|contracted procedure: k2282 
o|contracted procedure: k2285 
o|contracted procedure: k2291 
o|contracted procedure: k2300 
o|contracted procedure: k2304 
o|contracted procedure: k2459 
o|contracted procedure: k2329 
o|contracted procedure: k2453 
o|contracted procedure: k2332 
o|contracted procedure: k2447 
o|contracted procedure: k2335 
o|contracted procedure: k2441 
o|contracted procedure: k2338 
o|contracted procedure: k2350 
o|contracted procedure: k2373 
o|contracted procedure: k2382 
o|contracted procedure: k2397 
o|contracted procedure: k2404 
o|contracted procedure: k2422 
o|contracted procedure: k2435 
o|contracted procedure: k2473 
o|contracted procedure: k2484 
o|contracted procedure: k2488 
o|contracted procedure: k2492 
o|contracted procedure: k2496 
o|contracted procedure: k2528 
o|contracted procedure: k2505 
o|contracted procedure: k2524 
o|contracted procedure: k2546 
o|contracted procedure: k2537 
o|contracted procedure: k2540 
o|contracted procedure: k2554 
o|contracted procedure: k2567 
o|contracted procedure: k2580 
o|contracted procedure: k2598 
o|contracted procedure: k2608 
o|contracted procedure: k2612 
o|contracted procedure: k2621 
o|contracted procedure: k2631 
o|contracted procedure: k2635 
o|propagated global variable: primordial606 ##sys#current-thread 
o|simplifications: ((let . 40)) 
o|removed binding forms: 209 
o|inlining procedure: "(scheduler.scm:207) force-primordial" 
o|inlining procedure: "(scheduler.scm:450) force-primordial" 
o|replaced variables: 73 
o|inlining procedure: k924 
o|removed side-effect free assignment to unused variable: ##sys#force-primordial 
o|replaced variables: 2 
o|removed binding forms: 28 
o|contracted procedure: k940 
o|propagated global variable: ct128 ##sys#current-thread 
o|propagated global variable: ct128 ##sys#current-thread 
o|removed binding forms: 6 
o|replaced variables: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop211 0 
o|direct leaf routine/allocation: suspend607 0 
o|direct leaf routine/allocation: g614621 0 
o|direct leaf routine/allocation: g631638 0 
o|converted assignments to bindings: (loop211) 
o|contracted procedure: "(scheduler.scm:583) k2558" 
o|contracted procedure: "(scheduler.scm:588) k2601" 
o|contracted procedure: "(scheduler.scm:584) k2624" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|direct leaf routine/allocation: for-each-loop630641 0 
o|direct leaf routine/allocation: for-each-loop613624 0 
o|contracted procedure: k2570 
o|contracted procedure: k2583 
o|converted assignments to bindings: (for-each-loop630641) 
o|converted assignments to bindings: (for-each-loop613624) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 2 
o|customizable procedures: (k2508 loop580 loop577 loop573 loop570 loop538 loop460 for-each-loop272283 for-each-loop258291 k1534 g307314 for-each-loop306317 k1307 k1337 loop232 k1070 ##sys#clear-i/o-state-for-thread! loop137 g363370 for-each-loop362374 loop357 k1995 loop2504 loop490 k964 loop1135 loop2152) 
o|calls to known targets: 68 
o|identified direct recursive calls: f_2052 1 
o|identified direct recursive calls: f_2023 1 
o|identified direct recursive calls: f_1023 1 
o|identified direct recursive calls: f_1270 1 
o|identified direct recursive calls: f_1940 1 
o|identified direct recursive calls: f_2274 1 
o|identified direct recursive calls: f_2392 1 
o|identified direct recursive calls: f_2616 1 
o|identified direct recursive calls: f_2593 1 
o|fast box initializations: 17 
o|fast global references: 27 
o|fast global assignments: 22 
o|dropping unused closure argument: f_2258 
*/
/* end of file */
