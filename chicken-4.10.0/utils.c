/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: utils.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file utils.c
   unit: utils
*/

#include "chicken.h"


#if defined(_WIN32) && !defined(__CYGWIN__)
# include <windows.h>
# define C_HAS_MESSAGE_BOX 1
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort)
{
  int d = 0, r;
  int t = abort ? MB_YESNOCANCEL : MB_YESNO;

  switch(def) {
  case 0: d = MB_DEFBUTTON1; break;
  case 1: d = MB_DEFBUTTON2; break;
  case 2: d = MB_DEFBUTTON3;
  }

  r = MessageBox(NULL, msg, caption, t | MB_ICONQUESTION | d);

  switch(r) {
  case IDYES: return 1;
  case IDNO: return 0;
  default: return -1;
  }
}
#else
# define C_HAS_MESSAGE_BOX 0
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort) { return -1; }
#endif


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[89];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,115,121,115,116,101,109,42,32,102,115,116,114,54,52,32,46,32,97,114,103,115,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,53,57,50,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,97,108,108,32,46,32,102,105,108,101,54,57,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,103,49,48,51,32,99,49,49,52,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,57,55,32,103,49,48,57,49,50,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,113,115,32,115,116,114,56,54,32,46,32,116,109,112,56,53,56,55,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,97,56,50,48,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,97,56,49,52,32,101,120,50,48,50,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,56,52,50,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,116,109,112,50,53,51,48,32,97,114,103,115,49,57,54,50,48,53,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,56,50,57,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,97,56,48,56,32,107,49,57,53,50,48,49,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,56,55,57,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,12),40,97,56,55,51,32,101,120,49,56,57,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,53,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,97,56,57,53,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,20),40,116,109,112,50,53,50,56,32,97,114,103,115,49,56,51,49,57,48,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,97,56,56,50,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,14),40,97,56,54,55,32,107,49,56,50,49,56,56,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,56,53,56,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,57,54,49,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,38),40,99,111,109,112,105,108,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,49,51,56,32,46,32,116,109,112,49,51,55,49,51,57,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,19),40,102,95,49,48,48,55,32,103,50,50,57,50,51,48,50,51,51,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,36),40,115,99,97,110,45,105,110,112,117,116,45,108,105,110,101,115,32,114,120,50,49,52,32,46,32,116,109,112,50,49,51,50,49,53,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,103,101,116,45,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,50,52,54,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,31),40,121,101,115,45,111,114,45,110,111,63,32,115,116,114,50,54,50,32,46,32,116,109,112,50,54,49,50,54,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k1030 */
static C_word C_fcall stub247(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub247(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_truep(C_a3);
C_r=C_fix((C_word)C_confirmation_dialog(t0,t1,t2,t3));
return C_r;}

C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_ccall f_718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_715)
static void C_ccall f_715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_560)
static void C_ccall f_560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_868)
static void C_ccall f_868(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_542)
static void C_ccall f_542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_548)
static void C_ccall f_548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_fcall f_1062(C_word t0,C_word t1) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_fcall f_1060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_885)
static void C_fcall f_885(C_word t0,C_word t1) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_fcall f_1120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_fcall f_890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_fcall f_972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_fcall f_977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1130)
static void C_fcall f_1130(C_word t0,C_word t1) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_837)
static void C_fcall f_837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_830)
static void C_ccall f_830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_fcall f_832(C_word t0,C_word t1) C_noret;
C_noret_decl(f_815)
static void C_ccall f_815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_632)
static void C_fcall f_632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1093)
static void C_fcall f_1093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_654)
static void C_ccall f_654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_659)
static void C_fcall f_659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_605)
static void C_ccall f_605(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_605)
static void C_ccall f_605r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_774)
static void C_ccall f_774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_756)
static void C_ccall f_756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1062)
static void C_fcall trf_1062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1062(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1062(t0,t1);}

C_noret_decl(trf_1060)
static void C_fcall trf_1060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1060(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1060(t0,t1);}

C_noret_decl(trf_885)
static void C_fcall trf_885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_885(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_885(t0,t1);}

C_noret_decl(trf_1120)
static void C_fcall trf_1120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1120(t0,t1);}

C_noret_decl(trf_890)
static void C_fcall trf_890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_890(t0,t1,t2);}

C_noret_decl(trf_972)
static void C_fcall trf_972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_972(t0,t1);}

C_noret_decl(trf_977)
static void C_fcall trf_977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_977(t0,t1);}

C_noret_decl(trf_1130)
static void C_fcall trf_1130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1130(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1130(t0,t1);}

C_noret_decl(trf_837)
static void C_fcall trf_837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_837(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_837(t0,t1,t2);}

C_noret_decl(trf_832)
static void C_fcall trf_832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_832(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_832(t0,t1);}

C_noret_decl(trf_632)
static void C_fcall trf_632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_632(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_632(t0,t1,t2);}

C_noret_decl(trf_1093)
static void C_fcall trf_1093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1093(t0,t1);}

C_noret_decl(trf_659)
static void C_fcall trf_659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_659(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_659(t0,t1,t2);}

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

/* k925 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in ... */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[27]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[3])){
t5=t4;
f_741(2,t5,C_SCHEME_FALSE);}
else{
/* utils.scm:85: create-temporary-file */
t5=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[47]);}}

/* k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_747,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[4]);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
/* utils.scm:87: ##sys#print */
t6=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[43],C_SCHEME_FALSE,t3);}
else{
/* utils.scm:87: ##sys#print */
t6=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[44],C_SCHEME_FALSE,t3);}}

/* k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_741,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:86: build-platform */
t4=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_1007 in k1004 in scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1007(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1007,3,t0,t1,t2);}
/* utils.scm:120: g225226 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[3],t2);}

/* k1004 in scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1006,2,t0,t1);}
t2=t1;
t3=*((C_word*)lf[54]+1);
t4=((C_word*)t0)[2];
f_972(t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1007,a[2]=t3,a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));}

/* k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_718,2,t0,t1);}
t2=t1;
t3=C_mutate2((C_word*)lf[23]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_719,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate2((C_word*)lf[52]+1 /* (set! scan-input-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_965,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[56]+1 /* (set! yes-or-no? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1047,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_719r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_719r(t0,t1,t2,t3);}}

static void C_ccall f_719r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t4=C_i_get_keyword(lf[24],t3,C_SCHEME_FALSE);
t5=t4;
t6=C_i_get_keyword(lf[25],t3,C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_729,a[2]=t3,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t5,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_962,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:80: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t8,lf[51],t3,t9);}

/* k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_711,2,t0,t1);}
t2=C_mutate2((C_word*)lf[21]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_715,2,t0,t1);}
t2=t1;
t3=*((C_word*)lf[22]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_718,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_mk_bool(C_HAS_MESSAGE_BOX))){
t4=C_fudge(C_fix(4));
t5=t3;
f_1060(t5,C_i_not(t4));}
else{
t4=t3;
f_1060(t4,C_SCHEME_FALSE);}}

/* k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_729,2,t0,t1);}
t2=t1;
t3=C_i_get_keyword(lf[26],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_735,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_960,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:84: make-pathname */
t7=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k1026 in k1022 in k1091 in get-input in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub247(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]));}

/* k1022 in k1091 in get-input in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1024,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[5]);
/* utils.scm:168: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(3,*((C_word*)lf[63]+1),t3,t4);}
else{
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub247(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,t4,((C_word*)t0)[4]));}}

/* k686 in map-loop97 in k652 in k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_688(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_688,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_659(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_659(t6,((C_word*)t0)[5],t5);}}

/* k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[81],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_554,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_556,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[5]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_575,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[11]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_605,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:77: make-parameter */
t6=*((C_word*)lf[85]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[86]);}

/* system* in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_556(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_556r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_556r(t0,t1,t2,t3);}}

static void C_ccall f_556r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_560,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[4]+1),t2,t3);}

/* k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:36: register-feature! */
t3=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[88]);}

/* k1208 in k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[79],C_SCHEME_FALSE,((C_word*)t0)[4]);}
else{
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[80],C_SCHEME_FALSE,((C_word*)t0)[4]);}}

/* k1217 in k1214 in k1211 in k1208 in k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:190: flush-output */
t2=*((C_word*)lf[76]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1211 in k1208 in k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[78],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k1214 in k1211 in k1208 in k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=*((C_word*)lf[70]+1);
t4=*((C_word*)lf[70]+1);
t5=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1228,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm:189: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t6,C_make_character(91),*((C_word*)lf[70]+1));}
else{
/* utils.scm:190: flush-output */
t3=*((C_word*)lf[76]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k561 in k558 in system* in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* utils.scm:46: ##sys#error */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[2],((C_word*)t0)[3],t1);}}

/* k558 in system* in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_560,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_563,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:44: system */
t4=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k861 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in ... */
static void C_ccall f_863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:101: g186 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_1047r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1047r(t0,t1,t2,t3);}}

static void C_ccall f_1047r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t4=C_i_get_keyword(lf[57],t3,C_SCHEME_FALSE);
t5=t4;
t6=C_i_get_keyword(lf[58],t3,C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1057,a[2]=t7,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1247,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:168: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t8,lf[83],t3,t9);}

/* k1226 in k1214 in k1211 in k1208 in k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:189: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in ... */
static void C_ccall f_868(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_868,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_874,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_883,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:101: with-exception-handler */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k534 */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k537 in k534 */
static void C_ccall f_539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a873 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in ... */
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_874,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_880,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:101: k182 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k1229 in k1226 in k1214 in k1211 in k1208 in k1205 in k1202 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:189: ##sys#print */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[77],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k543 in k540 in k537 in k534 */
static void C_ccall f_545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k540 in k537 in k534 */
static void C_ccall f_542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* get-input in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_1062(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1062,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1069,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:lf[62]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1093,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(C_i_string_ci_equal_p(((C_word*)t0)[6],lf[64]))){
t6=t5;
f_1093(t6,C_fix(0));}
else{
t6=C_i_string_ci_equal_p(((C_word*)t0)[6],lf[65]);
t7=t5;
f_1093(t7,(C_truep(t6)?C_fix(1):C_fix(2)));}}
else{
t6=t5;
f_1093(t6,C_fix(3));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1115,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:185: read-line */
t3=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a882 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in ... */
static void C_ccall f_883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[3],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_907,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1527 */
t5=t2;
f_885(t5,t4);}

/* k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_1060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1060,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1062,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li26),tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1120,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word)li27),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_1120(t7,((C_word*)t0)[6]);}

/* tmp1527 in a882 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_fcall f_885(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_885,NULL,2,t0,t1);}
/* utils.scm:102: delete-file* */
t2=*((C_word*)lf[29]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a879 in a873 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_ccall f_880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_880,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k1067 in get-input in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[59]);}
else{
t3=C_eqp(t1,C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[60]:lf[61]));}}

/* k1113 in get-input in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:185: string-trim-both */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a1246 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1247,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[82]+1));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_utils_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("utils_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(576)){
C_save(t1);
C_rereclaim2(576*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,89);
lf[0]=C_h_intern(&lf[0],7,"system\052");
lf[1]=C_h_intern(&lf[1],9,"\003syserror");
lf[2]=C_decode_literal(C_heaptop,"\376B\000\0003shell invocation failed with non-zero return status");
lf[3]=C_h_intern(&lf[3],6,"system");
lf[4]=C_h_intern(&lf[4],7,"sprintf");
lf[5]=C_h_intern(&lf[5],8,"read-all");
lf[6]=C_h_intern(&lf[6],18,"\003sysstandard-input");
lf[7]=C_h_intern(&lf[7],20,"\003sysread-string/port");
lf[8]=C_h_intern(&lf[8],20,"with-input-from-file");
lf[9]=C_h_intern(&lf[9],7,"\000binary");
lf[10]=C_h_intern(&lf[10],5,"port\077");
lf[11]=C_h_intern(&lf[11],2,"qs");
lf[12]=C_h_intern(&lf[12],7,"mingw32");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\002\042\042");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\004\047\134\047\047");
lf[15]=C_h_intern(&lf[15],13,"string-append");
lf[16]=C_h_intern(&lf[16],5,"error");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\0004NUL character can not be represented in shell string");
lf[18]=C_h_intern(&lf[18],18,"string-concatenate");
lf[19]=C_h_intern(&lf[19],16,"\003sysstring->list");
lf[20]=C_h_intern(&lf[20],14,"build-platform");
lf[21]=C_h_intern(&lf[21],20,"compile-file-options");
lf[22]=C_h_intern(&lf[22],4,"load");
lf[23]=C_h_intern(&lf[23],12,"compile-file");
lf[24]=C_h_intern(&lf[24],8,"\000options");
lf[25]=C_h_intern(&lf[25],12,"\000output-file");
lf[26]=C_h_intern(&lf[26],8,"\000verbose");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[28]=C_h_intern(&lf[28],5,"abort");
lf[29]=C_h_intern(&lf[29],12,"delete-file\052");
lf[30]=C_h_intern(&lf[30],22,"with-exception-handler");
lf[31]=C_h_intern(&lf[31],30,"call-with-current-continuation");
lf[32]=C_h_intern(&lf[32],7,"on-exit");
lf[33]=C_h_intern(&lf[33],5,"print");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[35]=C_h_intern(&lf[35],17,"get-output-string");
lf[36]=C_h_intern(&lf[36],9,"\003sysprint");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\004 -o ");
lf[40]=C_h_intern(&lf[40],16,"\003syswrite-char-0");
lf[41]=C_h_intern(&lf[41],18,"string-intersperse");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\004 -s ");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[45]=C_h_intern(&lf[45],18,"open-output-string");
lf[46]=C_h_intern(&lf[46],21,"create-temporary-file");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[48]=C_h_intern(&lf[48],12,"file-exists\077");
lf[49]=C_h_intern(&lf[49],13,"make-pathname");
lf[50]=C_h_intern(&lf[50],15,"\003sysget-keyword");
lf[51]=C_h_intern(&lf[51],5,"\000load");
lf[52]=C_h_intern(&lf[52],16,"scan-input-lines");
lf[53]=C_h_intern(&lf[53],9,"read-line");
lf[54]=C_h_intern(&lf[54],14,"irregex-search");
lf[55]=C_h_intern(&lf[55],7,"irregex");
lf[56]=C_h_intern(&lf[56],10,"yes-or-no\077");
lf[57]=C_h_intern(&lf[57],8,"\000default");
lf[58]=C_h_intern(&lf[58],6,"\000title");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN Runtime");
lf[63]=C_h_intern(&lf[63],17,"\003sysmake-c-string");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[66]=C_h_intern(&lf[66],16,"string-trim-both");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[70]=C_h_intern(&lf[70],19,"\003sysstandard-output");
lf[71]=C_h_intern(&lf[71],6,"printf");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000$Please enter \042yes\042, \042no\042 or \042abort\042.");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\033Please enter \042yes\042 or \042no\042.");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[76]=C_h_intern(&lf[76],12,"flush-output");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\006/abort");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\010 (yes/no");
lf[82]=C_h_intern(&lf[82],5,"reset");
lf[83]=C_h_intern(&lf[83],6,"\000abort");
lf[84]=C_h_intern(&lf[84],17,"\003syspeek-c-string");
lf[85]=C_h_intern(&lf[85],14,"make-parameter");
lf[86]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016");
lf[87]=C_h_intern(&lf[87],17,"register-feature!");
lf[88]=C_h_intern(&lf[88],5,"utils");
C_register_lf2(lf,89,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_536,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* a592 in k583 in read-all in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_593,2,t0,t1);}
/* read-string/port */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_SCHEME_FALSE,*((C_word*)lf[6]+1));}

/* loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_1120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1120,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1124,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;
f_1124(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[70]+1);
t4=*((C_word*)lf[70]+1);
t5=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1204,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* utils.scm:188: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t6,C_make_character(10),*((C_word*)lf[70]+1));}}

/* tmp2528 in a882 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_fcall f_890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_890,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_896,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:101: k182 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* a895 in tmp2528 in a882 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in ... */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1127,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1130,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,lf[74]);
t6=t4;
f_1130(t6,t5);}
else{
if(C_truep(((C_word*)t0)[5])){
if(C_truep(C_i_string_equal_p(lf[75],((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,((C_word*)t0)[5]);
t6=t4;
f_1130(t6,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1130(t6,t5);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1130(t6,t5);}}}

/* k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:191: get-input */
t3=((C_word*)t0)[6];
f_1062(t3,t2);}

/* k970 in scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_972,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_977,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_977(t6,((C_word*)t0)[3]);}

/* loop in k970 in scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_977,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_981,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm:122: read-line */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1128 in k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_1130(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1130,NULL,2,t0,t1);}
if(C_truep(C_i_string_ci_equal_p(lf[67],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_string_ci_equal_p(lf[68],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_truep(((C_word*)t0)[4])?C_i_string_ci_equal_p(lf[69],((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_FALSE);
if(C_truep(t2)){
/* utils.scm:196: abort */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1154,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[70]+1);
t5=*((C_word*)lf[70]+1);
t6=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1163,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:199: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t7,C_make_character(10),*((C_word*)lf[70]+1));}
else{
t4=*((C_word*)lf[70]+1);
t5=*((C_word*)lf[70]+1);
t6=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1175,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:200: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t7,C_make_character(10),*((C_word*)lf[70]+1));}}}}}

/* a820 in a814 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_ccall f_821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_825,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:107: delete-file* */
t3=*((C_word*)lf[29]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in ... */
static void C_ccall f_809(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_809,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_815,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
/* utils.scm:104: with-exception-handler */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k823 in a820 in a814 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in ... */
static void C_ccall f_825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:108: abort */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k802 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in ... */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:104: g199 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k979 in loop in k970 in scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_981,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:124: rx */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* read-all in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_575(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_575r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_575r(t0,t1,t2);}}

static void C_ccall f_575r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[6]+1):C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_585,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:53: port? */
t7=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* tmp2530 in a829 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_fcall f_837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_837,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_843,a[2]=t2,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:104: k195 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k834 in tmp1529 in a829 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in ... */
static void C_ccall f_836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* a829 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in ... */
static void C_ccall f_830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_837,a[2]=((C_word*)t0)[4],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_854,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1529 */
t5=t2;
f_832(t5,t4);}

/* tmp1529 in a829 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_fcall f_832(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_832,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_836,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:109: load-file */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* a814 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in ... */
static void C_ccall f_815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_815,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_821,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:104: k195 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k624 in k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_626,2,t0,t1);}
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* utils.scm:63: string-append */
t3=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);}

/* k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_950,2,t0,t1);}
t2=C_eqp(t1,lf[12]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* utils.scm:87: open-output-string */
t5=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k583 in read-all in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_585,2,t0,t1);}
if(C_truep(t1)){
/* read-string/port */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:55: with-input-from-file */
t3=*((C_word*)lf[8]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,lf[9]);}}

/* k1152 in k1128 in k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:201: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1120(t2,((C_word*)t0)[3]);}

/* a842 in tmp2530 in a829 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in ... */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_843,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* g103 in k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_632,NULL,3,t0,t1,t2);}
if(C_truep(C_i_char_equalp(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_char_equalp(t2,C_make_character(0)))){
/* utils.scm:69: error */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[11],lf[17],((C_word*)t0)[4]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,1,t2));}}}

/* scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_965(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_965r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_965r(t0,t1,t2,t3);}}

static void C_ccall f_965r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[6]+1):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_972,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(t2))){
t8=t7;
f_972(t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1006,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:120: irregex */
t9=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}}

/* k958 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:84: file-exists? */
t2=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a961 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_962,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k852 in a829 in a808 in k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_ccall f_854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_854,2,t0,t1);}
/* tmp2530 */
t2=((C_word*)t0)[2];
f_837(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k1161 in k1128 in k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:199: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[72],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k1164 in k1161 in k1128 in k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:199: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in ... */
static void C_ccall f_859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_863,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_868,a[2]=((C_word*)t0)[2],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:101: call-with-current-continuation */
t4=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k1091 in get-input in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_1093(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1093,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=t1;
t6=((C_word*)t0)[5];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1024,a[2]=t5,a[3]=t2,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* utils.scm:168: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[63]+1)))(3,*((C_word*)lf[63]+1),t7,t8);}
else{
t8=t7;
f_1024(2,t8,C_SCHEME_FALSE);}}

/* k652 in k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_659,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li4),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_659(t6,t2,t1);}

/* k655 in k652 in k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:65: string-concatenate */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop97 in k652 in k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_fcall f_659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_659,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_688,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* utils.scm:66: g103 */
t5=((C_word*)t0)[5];
f_632(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k988 in k979 in loop in k970 in scan-input-lines in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* utils.scm:125: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_977(t2,((C_word*)t0)[2]);}}

/* k905 in a882 in a867 in a858 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in ... */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_907,2,t0,t1);}
/* tmp2528 */
t2=((C_word*)t0)[2];
f_890(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k793 in k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in ... */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[4]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_809,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:104: call-with-current-continuation */
t6=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_605(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_605r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_605r(t0,t1,t2,t3);}}

static void C_ccall f_605r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_609,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* utils.scm:60: build-platform */
t5=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_609(2,t5,C_i_car(t3));}}

/* k607 in qs in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_609(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_609,2,t0,t1);}
t2=C_eqp(t1,lf[12]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=t3;
t5=C_eqp(t1,lf[12]);
t6=(C_truep(t5)?lf[13]:lf[14]);
t7=t6;
t8=C_a_i_string(&a,1,t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_626,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_632,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_654,a[2]=t10,a[3]=t14,a[4]=t12,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* string->list */
t17=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,((C_word*)t0)[3]);}

/* k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in ... */
static void C_ccall f_774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[37],C_SCHEME_FALSE,((C_word*)t0)[10]);}
else{
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[38],C_SCHEME_FALSE,((C_word*)t0)[10]);}}

/* k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in ... */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_919,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* utils.scm:94: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
/* utils.scm:94: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}}

/* k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in ... */
static void C_ccall f_777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* utils.scm:87: get-output-string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k929 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k933 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:90: string-intersperse */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in ... */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* utils.scm:97: system */
t3=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k784 in k781 in k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in ... */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_786,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_795(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_859,a[2]=((C_word*)t0)[4],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:100: on-exit */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k778 in k775 in k772 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in ... */
static void C_ccall f_780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_780,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* utils.scm:96: print */
t4=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[34],t2);}
else{
t4=t3;
f_783(2,t4,C_SCHEME_UNDEFINED);}}

/* k940 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[42],C_SCHEME_FALSE,((C_word*)t0)[10]);}

/* k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_942,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:89: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}

/* k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_931,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[12])){
/* utils.scm:90: string-intersperse */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[12]);}
else{
/* utils.scm:92: compile-file-options */
t5=*((C_word*)lf[21]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1176 in k1173 in k1128 in k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:200: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k1173 in k1128 in k1125 in k1122 in loop in k1058 in k1055 in yes-or-no? in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:200: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[73],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k917 in k769 in k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in ... */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_927,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:93: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[11]);}

/* k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* utils.scm:87: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t2,C_make_character(32),((C_word*)t0)[10]);}

/* k766 in k763 in k760 in k757 in k754 in k751 in k745 in k948 in k739 in k733 in k727 in compile-file in k716 in k713 in k709 in k552 in k549 in k546 in k543 in k540 in k537 in k534 in ... */
static void C_ccall f_768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[39],C_SCHEME_FALSE,((C_word*)t0)[10]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[107] = {
{"f_927:utils_2escm",(void*)f_927},
{"f_735:utils_2escm",(void*)f_735},
{"f_747:utils_2escm",(void*)f_747},
{"f_741:utils_2escm",(void*)f_741},
{"f_1007:utils_2escm",(void*)f_1007},
{"f_1006:utils_2escm",(void*)f_1006},
{"f_718:utils_2escm",(void*)f_718},
{"f_719:utils_2escm",(void*)f_719},
{"f_711:utils_2escm",(void*)f_711},
{"f_715:utils_2escm",(void*)f_715},
{"f_1057:utils_2escm",(void*)f_1057},
{"f_729:utils_2escm",(void*)f_729},
{"f_1028:utils_2escm",(void*)f_1028},
{"f_1024:utils_2escm",(void*)f_1024},
{"f_688:utils_2escm",(void*)f_688},
{"f_1207:utils_2escm",(void*)f_1207},
{"f_1204:utils_2escm",(void*)f_1204},
{"f_554:utils_2escm",(void*)f_554},
{"f_556:utils_2escm",(void*)f_556},
{"f_551:utils_2escm",(void*)f_551},
{"f_1210:utils_2escm",(void*)f_1210},
{"f_1219:utils_2escm",(void*)f_1219},
{"f_1213:utils_2escm",(void*)f_1213},
{"f_1216:utils_2escm",(void*)f_1216},
{"f_563:utils_2escm",(void*)f_563},
{"f_560:utils_2escm",(void*)f_560},
{"f_863:utils_2escm",(void*)f_863},
{"f_1047:utils_2escm",(void*)f_1047},
{"f_1228:utils_2escm",(void*)f_1228},
{"f_868:utils_2escm",(void*)f_868},
{"f_536:utils_2escm",(void*)f_536},
{"f_539:utils_2escm",(void*)f_539},
{"f_874:utils_2escm",(void*)f_874},
{"f_1231:utils_2escm",(void*)f_1231},
{"f_545:utils_2escm",(void*)f_545},
{"f_542:utils_2escm",(void*)f_542},
{"f_548:utils_2escm",(void*)f_548},
{"f_1062:utils_2escm",(void*)f_1062},
{"f_883:utils_2escm",(void*)f_883},
{"f_1060:utils_2escm",(void*)f_1060},
{"f_885:utils_2escm",(void*)f_885},
{"f_880:utils_2escm",(void*)f_880},
{"f_1069:utils_2escm",(void*)f_1069},
{"f_1115:utils_2escm",(void*)f_1115},
{"f_1247:utils_2escm",(void*)f_1247},
{"toplevel:utils_2escm",(void*)C_utils_toplevel},
{"f_593:utils_2escm",(void*)f_593},
{"f_1120:utils_2escm",(void*)f_1120},
{"f_890:utils_2escm",(void*)f_890},
{"f_896:utils_2escm",(void*)f_896},
{"f_1127:utils_2escm",(void*)f_1127},
{"f_1124:utils_2escm",(void*)f_1124},
{"f_972:utils_2escm",(void*)f_972},
{"f_977:utils_2escm",(void*)f_977},
{"f_1130:utils_2escm",(void*)f_1130},
{"f_821:utils_2escm",(void*)f_821},
{"f_809:utils_2escm",(void*)f_809},
{"f_825:utils_2escm",(void*)f_825},
{"f_804:utils_2escm",(void*)f_804},
{"f_981:utils_2escm",(void*)f_981},
{"f_575:utils_2escm",(void*)f_575},
{"f_837:utils_2escm",(void*)f_837},
{"f_836:utils_2escm",(void*)f_836},
{"f_830:utils_2escm",(void*)f_830},
{"f_832:utils_2escm",(void*)f_832},
{"f_815:utils_2escm",(void*)f_815},
{"f_626:utils_2escm",(void*)f_626},
{"f_950:utils_2escm",(void*)f_950},
{"f_585:utils_2escm",(void*)f_585},
{"f_1154:utils_2escm",(void*)f_1154},
{"f_843:utils_2escm",(void*)f_843},
{"f_632:utils_2escm",(void*)f_632},
{"f_965:utils_2escm",(void*)f_965},
{"f_960:utils_2escm",(void*)f_960},
{"f_962:utils_2escm",(void*)f_962},
{"f_854:utils_2escm",(void*)f_854},
{"f_1163:utils_2escm",(void*)f_1163},
{"f_1166:utils_2escm",(void*)f_1166},
{"f_859:utils_2escm",(void*)f_859},
{"f_1093:utils_2escm",(void*)f_1093},
{"f_654:utils_2escm",(void*)f_654},
{"f_657:utils_2escm",(void*)f_657},
{"f_659:utils_2escm",(void*)f_659},
{"f_990:utils_2escm",(void*)f_990},
{"f_907:utils_2escm",(void*)f_907},
{"f_795:utils_2escm",(void*)f_795},
{"f_605:utils_2escm",(void*)f_605},
{"f_609:utils_2escm",(void*)f_609},
{"f_774:utils_2escm",(void*)f_774},
{"f_771:utils_2escm",(void*)f_771},
{"f_777:utils_2escm",(void*)f_777},
{"f_931:utils_2escm",(void*)f_931},
{"f_935:utils_2escm",(void*)f_935},
{"f_783:utils_2escm",(void*)f_783},
{"f_786:utils_2escm",(void*)f_786},
{"f_780:utils_2escm",(void*)f_780},
{"f_942:utils_2escm",(void*)f_942},
{"f_756:utils_2escm",(void*)f_756},
{"f_753:utils_2escm",(void*)f_753},
{"f_759:utils_2escm",(void*)f_759},
{"f_1178:utils_2escm",(void*)f_1178},
{"f_1175:utils_2escm",(void*)f_1175},
{"f_919:utils_2escm",(void*)f_919},
{"f_765:utils_2escm",(void*)f_765},
{"f_762:utils_2escm",(void*)f_762},
{"f_768:utils_2escm",(void*)f_768},
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
S|  printf		4
S|  sprintf		1
S|  map		1
o|eliminated procedure checks: 31 
o|specializations:
o|  2 (eqv? (not float) *)
o|  2 (##sys#call-with-values (procedure () *) *)
o|  5 (##sys#check-output-port * * *)
o|  1 (##sys#check-list (or pair list) *)
o|  2 (zero? fixnum)
o|Removed `not' forms: 3 
o|inlining procedure: k564 
o|inlining procedure: k564 
o|inlining procedure: k580 
o|inlining procedure: k580 
o|inlining procedure: k634 
o|inlining procedure: k634 
o|inlining procedure: k661 
o|inlining procedure: k661 
o|substituted constant variable: a749 
o|substituted constant variable: a750 
o|inlining procedure: k787 
o|merged explicitly consed rest parameter: args196205 
o|consed rest parameter at call site: tmp2530 1 
o|merged explicitly consed rest parameter: args183190 
o|consed rest parameter at call site: tmp2528 1 
o|inlining procedure: k787 
o|inlining procedure: k913 
o|inlining procedure: k913 
o|inlining procedure: k921 
o|inlining procedure: k921 
o|inlining procedure: k933 
o|inlining procedure: k933 
o|inlining procedure: k944 
o|inlining procedure: k944 
o|contracted procedure: k951 
o|contracted procedure: k985 
o|inlining procedure: k982 
o|inlining procedure: k982 
o|inlining procedure: k1064 
o|inlining procedure: k1076 
o|inlining procedure: k1076 
o|substituted constant variable: a1083 
o|substituted constant variable: a1085 
o|contracted procedure: "(utils.scm:173) dialog242" 
o|contracted procedure: k1094 
o|inlining procedure: k1097 
o|inlining procedure: k1097 
o|inlining procedure: k1064 
o|inlining procedure: k1131 
o|inlining procedure: k1131 
o|inlining procedure: k1143 
o|inlining procedure: k1143 
o|propagated global variable: out316320 ##sys#standard-output 
o|substituted constant variable: a1159 
o|substituted constant variable: a1160 
o|propagated global variable: out316320 ##sys#standard-output 
o|propagated global variable: out324328 ##sys#standard-output 
o|substituted constant variable: a1171 
o|substituted constant variable: a1172 
o|propagated global variable: out324328 ##sys#standard-output 
o|inlining procedure: k1189 
o|inlining procedure: k1189 
o|propagated global variable: out285289 ##sys#standard-output 
o|substituted constant variable: a1200 
o|substituted constant variable: a1201 
o|propagated global variable: out295299 ##sys#standard-output 
o|substituted constant variable: a1224 
o|substituted constant variable: a1225 
o|inlining procedure: k1217 
o|propagated global variable: out295299 ##sys#standard-output 
o|inlining procedure: k1217 
o|inlining procedure: k1236 
o|inlining procedure: k1236 
o|propagated global variable: out285289 ##sys#standard-output 
o|replaced variables: 116 
o|removed binding forms: 54 
o|substituted constant variable: r7881258 
o|substituted constant variable: r9141259 
o|substituted constant variable: r9141259 
o|substituted constant variable: r9141261 
o|substituted constant variable: r9141261 
o|substituted constant variable: r9451271 
o|substituted constant variable: r9451271 
o|substituted constant variable: r9451273 
o|substituted constant variable: r9451273 
o|substituted constant variable: r9831275 
o|substituted constant variable: r10771278 
o|substituted constant variable: r10771279 
o|substituted constant variable: r10981280 
o|substituted constant variable: r11321283 
o|propagated global variable: out316320 ##sys#standard-output 
o|propagated global variable: out324328 ##sys#standard-output 
o|propagated global variable: out285289 ##sys#standard-output 
o|propagated global variable: out295299 ##sys#standard-output 
o|substituted constant variable: r12371299 
o|substituted constant variable: r12371299 
o|substituted constant variable: r12371301 
o|substituted constant variable: r12371301 
o|converted assignments to bindings: (get-input269) 
o|simplifications: ((let . 1)) 
o|replaced variables: 13 
o|removed binding forms: 121 
o|replaced variables: 1 
o|removed binding forms: 31 
o|inlining procedure: k1192 
o|removed binding forms: 1 
o|substituted constant variable: r11931324 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 10) (##core#call . 48)) 
o|  call simplifications:
o|    ##sys#fudge
o|    not
o|    string=?
o|    string-ci=?	5
o|    ##sys#foreign-string-argument	2
o|    ##sys#foreign-fixnum-argument
o|    procedure?
o|    eof-object?	2
o|    ##sys#get-keyword	5
o|    ##sys#apply	2
o|    string->list
o|    pair?
o|    cons
o|    ##sys#setslot
o|    ##sys#slot	2
o|    char=?	2
o|    string	3
o|    null?	3
o|    car	3
o|    read-string	2
o|    apply
o|    eq?	7
o|contracted procedure: k567 
o|contracted procedure: k598 
o|contracted procedure: k577 
o|contracted procedure: k696 
o|contracted procedure: k610 
o|contracted procedure: k693 
o|contracted procedure: k613 
o|contracted procedure: k620 
o|contracted procedure: k628 
o|contracted procedure: k637 
o|contracted procedure: k643 
o|contracted procedure: k664 
o|contracted procedure: k667 
o|contracted procedure: k678 
o|contracted procedure: k690 
o|contracted procedure: k699 
o|contracted procedure: k721 
o|contracted procedure: k724 
o|contracted procedure: k730 
o|contracted procedure: k736 
o|contracted procedure: k742 
o|contracted procedure: k790 
o|contracted procedure: k799 
o|contracted procedure: k1012 
o|contracted procedure: k967 
o|contracted procedure: k998 
o|contracted procedure: k1001 
o|contracted procedure: k1049 
o|contracted procedure: k1052 
o|contracted procedure: k1073 
o|contracted procedure: k1079 
o|contracted procedure: k1087 
o|contracted procedure: k1030 
o|contracted procedure: k1037 
o|contracted procedure: k1044 
o|contracted procedure: k1100 
o|contracted procedure: k1106 
o|contracted procedure: k1134 
o|contracted procedure: k1140 
o|contracted procedure: k1146 
o|contracted procedure: k1185 
o|contracted procedure: k1192 
o|contracted procedure: k1243 
o|simplifications: ((let . 11)) 
o|removed binding forms: 43 
o|inlining procedure: k670 
o|inlining procedure: k670 
o|inlining procedure: k1026 
o|replaced variables: 16 
o|substituted constant variable: r10271369 
o|substituted constant variable: r10271369 
o|removed binding forms: 11 
o|replaced variables: 4 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|customizable procedures: (k1058 get-input269 k1128 loop284 k1091 k970 loop234 tmp1527 tmp2528 tmp1529 tmp2530 g103112 map-loop97119) 
o|calls to known targets: 30 
o|fast box initializations: 5 
*/
/* end of file */
