/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: c-backend.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file c-backend.c
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[871];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2152(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2152(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2148(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2148(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);

#ifdef C_SIXTY_FOUR
return((C_header_bits(lit) >> (24 + 32)) & 0xff);
#else
return((C_header_bits(lit) >> 24) & 0xff);
#endif

C_ret:
#undef return

return C_r;}

C_noret_decl(f_10498)
static void C_ccall f_10498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10492)
static void C_ccall f_10492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6730)
static void C_fcall f_6730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5522)
static void C_fcall f_5522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_fcall f_5545(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10468)
static void C_ccall f_10468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10456)
static void C_ccall f_10456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10453)
static void C_ccall f_10453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10450)
static void C_ccall f_10450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10480)
static void C_ccall f_10480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6766)
static void C_ccall f_6766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8199)
static void C_ccall f_8199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10721)
static void C_ccall f_10721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5584)
static void C_fcall f_5584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5587)
static void C_fcall f_5587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10444)
static void C_ccall f_10444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static void C_fcall f_4841(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4839)
static void C_ccall f_4839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8603)
static void C_fcall f_8603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8706)
static void C_ccall f_8706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8708)
static void C_fcall f_8708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10783)
static void C_ccall f_10783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4870)
static void C_fcall f_4870(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_fcall f_5098(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9557)
static void C_fcall f_9557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7285)
static void C_ccall f_7285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6817)
static void C_ccall f_6817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10730)
static C_word C_fcall f_10730(C_word *a,C_word t0);
C_noret_decl(f_7270)
static void C_ccall f_7270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7279)
static void C_ccall f_7279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6807)
static void C_fcall f_6807(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6805)
static void C_fcall f_6805(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7263)
static void C_fcall f_7263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7267)
static void C_ccall f_7267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10092)
static void C_ccall f_10092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10089)
static void C_ccall f_10089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10086)
static void C_ccall f_10086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10080)
static void C_ccall f_10080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8751)
static void C_fcall f_8751(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8768)
static void C_fcall f_8768(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8125)
static void C_ccall f_8125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8775)
static void C_ccall f_8775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5031)
static void C_ccall f_5031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_fcall f_5036(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10056)
static void C_ccall f_10056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10053)
static void C_fcall f_10053(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7291)
static void C_ccall f_7291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7294)
static void C_ccall f_7294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8785)
static void C_fcall f_8785(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7297)
static void C_ccall f_7297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7205)
static void C_ccall f_7205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8792)
static void C_ccall f_8792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_fcall f_5013(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5802)
static void C_fcall f_5802(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8642)
static void C_fcall f_8642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10068)
static void C_ccall f_10068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8659)
static void C_fcall f_8659(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10062)
static void C_ccall f_10062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10065)
static void C_ccall f_10065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8653)
static void C_ccall f_8653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6138)
static void C_fcall f_6138(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10017)
static void C_ccall f_10017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10005)
static void C_ccall f_10005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7248)
static void C_ccall f_7248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10035)
static void C_ccall f_10035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10038)
static void C_ccall f_10038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_fcall f_2604(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9566)
static void C_fcall f_9566(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7238)
static void C_fcall f_7238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7078)
static void C_fcall f_7078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10029)
static void C_ccall f_10029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5365)
static void C_fcall f_5365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7224)
static void C_ccall f_7224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7227)
static void C_ccall f_7227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7218)
static void C_ccall f_7218(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5927)
static void C_fcall f_5927(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_fcall f_2637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5920)
static void C_fcall f_5920(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7088)
static void C_ccall f_7088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7560)
static void C_fcall f_7560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7038)
static void C_ccall f_7038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5326)
static void C_fcall f_5326(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5329)
static void C_fcall f_5329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10209)
static void C_ccall f_10209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8737)
static void C_ccall f_8737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10392)
static void C_ccall f_10392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_fcall f_5065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3188)
static void C_ccall f_3188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10389)
static void C_ccall f_10389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10386)
static void C_ccall f_10386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10380)
static void C_ccall f_10380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8687)
static void C_ccall f_8687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8691)
static void C_ccall f_8691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5989)
static void C_ccall f_5989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3141)
static void C_fcall f_3141(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10368)
static void C_ccall f_10368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10365)
static void C_ccall f_10365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10362)
static void C_ccall f_10362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5392)
static void C_ccall f_5392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5398)
static void C_ccall f_5398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10356)
static void C_ccall f_10356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8676)
static void C_fcall f_8676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8670)
static void C_ccall f_8670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10341)
static void C_ccall f_10341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10344)
static void C_ccall f_10344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_fcall f_3113(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_fcall f_3900(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7598)
static void C_ccall f_7598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7595)
static void C_ccall f_7595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10338)
static void C_ccall f_10338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7592)
static void C_ccall f_7592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7589)
static void C_ccall f_7589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7585)
static void C_fcall f_7585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10320)
static void C_ccall f_10320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6999)
static void C_ccall f_6999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5342)
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2567)
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10293)
static void C_fcall f_10293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6145)
static void C_ccall f_6145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_ccall f_6974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7552)
static void C_ccall f_7552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3417)
static void C_fcall f_3417(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6956)
static void C_ccall f_6956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6950)
static void C_ccall f_6950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_fcall f_5889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3470)
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5860)
static void C_ccall f_5860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6968)
static void C_ccall f_6968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3423)
static void C_fcall f_3423(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10221)
static void C_ccall f_10221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7049)
static void C_fcall f_7049(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6946)
static void C_ccall f_6946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10215)
static void C_ccall f_10215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10218)
static void C_ccall f_10218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_10242)
static void C_ccall f_10242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10245)
static void C_ccall f_10245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6253)
static void C_ccall f_6253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6256)
static void C_ccall f_6256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6259)
static void C_ccall f_6259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10233)
static void C_ccall f_10233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10239)
static void C_ccall f_10239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10997)
static void C_ccall f_10997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10999)
static void C_ccall f_10999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6247)
static void C_ccall f_6247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10266)
static void C_ccall f_10266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10985)
static void C_ccall f_10985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8443)
static void C_fcall f_8443(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7004)
static void C_ccall f_7004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7008)
static void C_ccall f_7008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6229)
static void C_fcall f_6229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6226)
static void C_ccall f_6226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6220)
static void C_ccall f_6220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6210)
static void C_ccall f_6210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10270)
static void C_fcall f_10270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10955)
static void C_ccall f_10955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6204)
static void C_fcall f_6204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7324)
static void C_ccall f_7324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8464)
static void C_fcall f_8464(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10916)
static void C_ccall f_10916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7357)
static void C_ccall f_7357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10903)
static void C_ccall f_10903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7372)
static void C_ccall f_7372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_fcall f_3972(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7347)
static void C_ccall f_7347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6298)
static void C_fcall f_6298(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9679)
static void C_ccall f_9679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6292)
static void C_ccall f_6292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7300)
static void C_ccall f_7300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7318)
static void C_ccall f_7318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6912)
static void C_ccall f_6912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6354)
static void C_ccall f_6354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6265)
static void C_ccall f_6265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_fcall f_3935(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6348)
static void C_ccall f_6348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6336)
static void C_ccall f_6336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6330)
static void C_fcall f_6330(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6313)
static void C_ccall f_6313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7363)
static void C_ccall f_7363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6093)
static void C_fcall f_6093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6310)
static void C_ccall f_6310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7393)
static void C_ccall f_7393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7390)
static void C_ccall f_7390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6301)
static void C_ccall f_6301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_fcall f_2857(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7384)
static void C_ccall f_7384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6072)
static void C_ccall f_6072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6062)
static void C_fcall f_6062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6077)
static void C_fcall f_6077(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8229)
static void C_ccall f_8229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5159)
static void C_ccall f_5159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8225)
static void C_ccall f_8225(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6397)
static void C_ccall f_6397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6387)
static void C_fcall f_6387(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5147)
static void C_ccall f_5147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6363)
static void C_ccall f_6363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6369)
static void C_ccall f_6369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8244)
static void C_ccall f_8244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8205)
static void C_ccall f_8205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5120)
static void C_fcall f_5120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8217)
static void C_ccall f_8217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11044)
static void C_ccall f_11044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11048)
static void C_ccall f_11048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11041)
static void C_ccall f_11041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8265)
static void C_fcall f_8265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5116)
static void C_fcall f_5116(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11052)
static void C_ccall f_11052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8260)
static void C_fcall f_8260(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11056)
static void C_ccall f_11056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9602)
static void C_fcall f_9602(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11029)
static void C_ccall f_11029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11023)
static void C_ccall f_11023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11038)
static void C_ccall f_11038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11035)
static void C_ccall f_11035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11032)
static void C_ccall f_11032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5633)
static void C_fcall f_5633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7159)
static void C_ccall f_7159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6022)
static void C_ccall f_6022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7143)
static void C_ccall f_7143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7161)
static void C_ccall f_7161(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6019)
static void C_ccall f_6019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_fcall f_6016(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_fcall f_3636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7625)
static void C_fcall f_7625(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7616)
static void C_fcall f_7616(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9938)
static void C_fcall f_9938(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6416)
static void C_ccall f_6416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_fcall f_4709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5680)
static void C_fcall f_5680(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6450)
static void C_ccall f_6450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5674)
static void C_fcall f_5674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7659)
static void C_fcall f_7659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7655)
static void C_ccall f_7655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4428)
static void C_ccall f_4428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7649)
static void C_fcall f_7649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7637)
static void C_fcall f_7637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6422)
static void C_ccall f_6422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6438)
static void C_ccall f_6438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7692)
static void C_fcall f_7692(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4418)
static void C_fcall f_4418(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8335)
static void C_fcall f_8335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6441)
static void C_ccall f_6441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7135)
static void C_ccall f_7135(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7129)
static void C_ccall f_7129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7604)
static void C_ccall f_7604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7606)
static void C_ccall f_7606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6573)
static void C_ccall f_6573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6576)
static void C_ccall f_6576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6570)
static void C_ccall f_6570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6564)
static void C_ccall f_6564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6525)
static void C_ccall f_6525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6522)
static void C_ccall f_6522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6591)
static void C_fcall f_6591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4780)
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8819)
static void C_fcall f_8819(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8826)
static void C_ccall f_8826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6558)
static void C_ccall f_6558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8802)
static void C_fcall f_8802(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8809)
static void C_ccall f_8809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8836)
static void C_fcall f_8836(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_fcall f_4937(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10501)
static void C_ccall f_10501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8572)
static void C_fcall f_8572(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10504)
static void C_ccall f_10504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8843)
static void C_ccall f_8843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11835)
static void C_ccall f11835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8894)
static void C_ccall f_8894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8584)
static void C_fcall f_8584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8896)
static void C_fcall f_8896(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8070)
static void C_ccall f_8070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8599)
static void C_ccall f_8599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8872)
static void C_ccall f_8872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8876)
static void C_ccall f_8876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8085)
static void C_ccall f_8085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8088)
static void C_ccall f_8088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11827)
static void C_ccall f11827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8061)
static void C_ccall f_8061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8064)
static void C_ccall f_8064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5284)
static void C_ccall f_5284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9305)
static void C_ccall f_9305(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8091)
static void C_ccall f_8091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8094)
static void C_ccall f_8094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9307)
static void C_fcall f_9307(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7414)
static void C_ccall f_7414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5450)
static void C_ccall f_5450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10134)
static void C_ccall f_10134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7411)
static void C_ccall f_7411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7417)
static void C_ccall f_7417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9362)
static void C_fcall f_9362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7470)
static void C_fcall f_7470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5274)
static void C_fcall f_5274(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7477)
static void C_fcall f_7477(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8853)
static void C_fcall f_8853(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4990)
static void C_fcall f_4990(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9335)
static void C_fcall f_9335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5203)
static void C_fcall f_5203(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7423)
static void C_ccall f_7423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7480)
static void C_ccall f_7480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5446)
static void C_fcall f_5446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4920)
static void C_ccall f_4920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4910)
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7195)
static void C_fcall f_7195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6670)
static void C_fcall f_6670(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5499)
static void C_fcall f_5499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_fcall f_3511(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4633)
static void C_fcall f_4633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7448)
static void C_ccall f_7448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4630)
static void C_fcall f_4630(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8925)
static void C_ccall f_8925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6631)
static void C_ccall f_6631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10197)
static void C_ccall f_10197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10194)
static void C_ccall f_10194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10191)
static void C_ccall f_10191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6640)
static void C_ccall f_6640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10185)
static void C_ccall f_10185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3770)
static void C_fcall f_3770(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10167)
static void C_ccall f_10167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10164)
static void C_ccall f_10164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10158)
static void C_ccall f_10158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10146)
static void C_ccall f_10146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10140)
static void C_ccall f_10140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10143)
static void C_ccall f_10143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10410)
static void C_ccall f_10410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10413)
static void C_ccall f_10413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10416)
static void C_ccall f_10416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_fcall f_3548(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6721)
static void C_ccall f_6721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10116)
static void C_ccall f_10116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10113)
static void C_ccall f_10113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10119)
static void C_ccall f_10119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8164)
static void C_ccall f_8164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6879)
static void C_ccall f_6879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6876)
static void C_ccall f_6876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10107)
static void C_ccall f_10107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8172)
static void C_fcall f_8172(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6780)
static void C_fcall f_6780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10170)
static void C_ccall f_10170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8182)
static void C_ccall f_8182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10404)
static void C_ccall f_10404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8113)
static void C_ccall f_8113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8115)
static void C_fcall f_8115(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6845)
static void C_fcall f_6845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10477)
static void C_ccall f_10477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10474)
static void C_ccall f_10474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_6730)
static void C_fcall trf_6730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6730(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6730(t0,t1);}

C_noret_decl(trf_5522)
static void C_fcall trf_5522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5522(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5522(t0,t1,t2);}

C_noret_decl(trf_5545)
static void C_fcall trf_5545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5545(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5545(t0,t1,t2);}

C_noret_decl(trf_5584)
static void C_fcall trf_5584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5584(t0,t1);}

C_noret_decl(trf_5587)
static void C_fcall trf_5587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5587(t0,t1);}

C_noret_decl(trf_4841)
static void C_fcall trf_4841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4841(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4841(t0,t1);}

C_noret_decl(trf_8603)
static void C_fcall trf_8603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8603(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8603(t0,t1,t2);}

C_noret_decl(trf_8708)
static void C_fcall trf_8708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8708(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8708(t0,t1,t2);}

C_noret_decl(trf_4870)
static void C_fcall trf_4870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4870(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4870(t0,t1,t2,t3);}

C_noret_decl(trf_5098)
static void C_fcall trf_5098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5098(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5098(t0,t1);}

C_noret_decl(trf_9557)
static void C_fcall trf_9557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9557(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9557(t0,t1);}

C_noret_decl(trf_6807)
static void C_fcall trf_6807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6807(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6807(t0,t1,t2,t3);}

C_noret_decl(trf_6805)
static void C_fcall trf_6805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6805(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6805(t0,t1);}

C_noret_decl(trf_7263)
static void C_fcall trf_7263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7263(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7263(t0,t1,t2);}

C_noret_decl(trf_8751)
static void C_fcall trf_8751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8751(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8751(t0,t1);}

C_noret_decl(trf_8768)
static void C_fcall trf_8768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8768(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8768(t0,t1);}

C_noret_decl(trf_5036)
static void C_fcall trf_5036(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5036(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5036(t0,t1,t2);}

C_noret_decl(trf_10053)
static void C_fcall trf_10053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10053(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10053(t0,t1);}

C_noret_decl(trf_8785)
static void C_fcall trf_8785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8785(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8785(t0,t1);}

C_noret_decl(trf_5013)
static void C_fcall trf_5013(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5013(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5013(t0,t1);}

C_noret_decl(trf_5802)
static void C_fcall trf_5802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5802(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5802(t0,t1,t2);}

C_noret_decl(trf_8642)
static void C_fcall trf_8642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8642(t0,t1);}

C_noret_decl(trf_8659)
static void C_fcall trf_8659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8659(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8659(t0,t1);}

C_noret_decl(trf_6138)
static void C_fcall trf_6138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6138(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6138(t0,t1,t2,t3);}

C_noret_decl(trf_2604)
static void C_fcall trf_2604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2604(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2604(t0,t1,t2);}

C_noret_decl(trf_9566)
static void C_fcall trf_9566(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9566(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9566(t0,t1);}

C_noret_decl(trf_7238)
static void C_fcall trf_7238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7238(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7238(t0,t1,t2);}

C_noret_decl(trf_7078)
static void C_fcall trf_7078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7078(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7078(t0,t1);}

C_noret_decl(trf_5365)
static void C_fcall trf_5365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5365(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5365(t0,t1,t2);}

C_noret_decl(trf_5927)
static void C_fcall trf_5927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5927(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5927(t0,t1);}

C_noret_decl(trf_2637)
static void C_fcall trf_2637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2637(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2637(t0,t1,t2);}

C_noret_decl(trf_5920)
static void C_fcall trf_5920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5920(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5920(t0,t1,t2,t3);}

C_noret_decl(trf_7560)
static void C_fcall trf_7560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7560(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7560(t0,t1,t2);}

C_noret_decl(trf_5326)
static void C_fcall trf_5326(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5326(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5326(t0,t1);}

C_noret_decl(trf_5329)
static void C_fcall trf_5329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5329(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5329(t0,t1);}

C_noret_decl(trf_5065)
static void C_fcall trf_5065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5065(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5065(t0,t1,t2);}

C_noret_decl(trf_3141)
static void C_fcall trf_3141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3141(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3141(t0,t1,t2,t3);}

C_noret_decl(trf_8676)
static void C_fcall trf_8676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8676(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8676(t0,t1);}

C_noret_decl(trf_2649)
static void C_fcall trf_2649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2649(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2649(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3113)
static void C_fcall trf_3113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3113(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3113(t0,t1,t2,t3);}

C_noret_decl(trf_3900)
static void C_fcall trf_3900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3900(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3900(t0,t1,t2,t3);}

C_noret_decl(trf_2652)
static void C_fcall trf_2652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2652(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2652(t0,t1,t2,t3);}

C_noret_decl(trf_7585)
static void C_fcall trf_7585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7585(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7585(t0,t1,t2);}

C_noret_decl(trf_5342)
static void C_fcall trf_5342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5342(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5342(t0,t1,t2,t3);}

C_noret_decl(trf_2567)
static void C_fcall trf_2567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2567(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2567(t0,t1,t2);}

C_noret_decl(trf_10293)
static void C_fcall trf_10293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10293(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10293(t0,t1);}

C_noret_decl(trf_3417)
static void C_fcall trf_3417(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3417(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3417(t0,t1);}

C_noret_decl(trf_5889)
static void C_fcall trf_5889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5889(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5889(t0,t1,t2,t3);}

C_noret_decl(trf_3470)
static void C_fcall trf_3470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3470(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3470(t0,t1,t2,t3);}

C_noret_decl(trf_3423)
static void C_fcall trf_3423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3423(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3423(t0,t1);}

C_noret_decl(trf_7049)
static void C_fcall trf_7049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7049(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7049(t0,t1,t2);}

C_noret_decl(trf_8443)
static void C_fcall trf_8443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8443(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8443(t0,t1);}

C_noret_decl(trf_6229)
static void C_fcall trf_6229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6229(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6229(t0,t1);}

C_noret_decl(trf_10270)
static void C_fcall trf_10270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10270(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10270(t0,t1,t2);}

C_noret_decl(trf_6204)
static void C_fcall trf_6204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6204(t0,t1);}

C_noret_decl(trf_8464)
static void C_fcall trf_8464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8464(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8464(t0,t1);}

C_noret_decl(trf_3972)
static void C_fcall trf_3972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3972(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3972(t0,t1,t2,t3);}

C_noret_decl(trf_6298)
static void C_fcall trf_6298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6298(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6298(t0,t1);}

C_noret_decl(trf_3935)
static void C_fcall trf_3935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3935(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3935(t0,t1,t2,t3);}

C_noret_decl(trf_6330)
static void C_fcall trf_6330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6330(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6330(t0,t1);}

C_noret_decl(trf_6093)
static void C_fcall trf_6093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6093(t0,t1);}

C_noret_decl(trf_2857)
static void C_fcall trf_2857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2857(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2857(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6062)
static void C_fcall trf_6062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6062(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6062(t0,t1,t2);}

C_noret_decl(trf_6077)
static void C_fcall trf_6077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6077(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6077(t0,t1,t2,t3);}

C_noret_decl(trf_4598)
static void C_fcall trf_4598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4598(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4598(t0,t1,t2,t3);}

C_noret_decl(trf_6387)
static void C_fcall trf_6387(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6387(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6387(t0,t1,t2,t3);}

C_noret_decl(trf_5120)
static void C_fcall trf_5120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5120(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5120(t0,t1,t2);}

C_noret_decl(trf_8265)
static void C_fcall trf_8265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8265(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8265(t0,t1,t2);}

C_noret_decl(trf_5116)
static void C_fcall trf_5116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5116(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5116(t0,t1);}

C_noret_decl(trf_8260)
static void C_fcall trf_8260(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8260(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8260(t0,t1);}

C_noret_decl(trf_9602)
static void C_fcall trf_9602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9602(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9602(t0,t1);}

C_noret_decl(trf_5633)
static void C_fcall trf_5633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5633(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5633(t0,t1);}

C_noret_decl(trf_6016)
static void C_fcall trf_6016(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6016(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6016(t0,t1);}

C_noret_decl(trf_3636)
static void C_fcall trf_3636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3636(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3636(t0,t1);}

C_noret_decl(trf_7625)
static void C_fcall trf_7625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7625(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7625(t0,t1);}

C_noret_decl(trf_7616)
static void C_fcall trf_7616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7616(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7616(t0,t1);}

C_noret_decl(trf_9938)
static void C_fcall trf_9938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9938(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9938(t0,t1);}

C_noret_decl(trf_4709)
static void C_fcall trf_4709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4709(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4709(t0,t1,t2);}

C_noret_decl(trf_5680)
static void C_fcall trf_5680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5680(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5680(t0,t1,t2,t3);}

C_noret_decl(trf_5674)
static void C_fcall trf_5674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5674(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5674(t0,t1);}

C_noret_decl(trf_7659)
static void C_fcall trf_7659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7659(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7659(t0,t1,t2);}

C_noret_decl(trf_7649)
static void C_fcall trf_7649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7649(t0,t1);}

C_noret_decl(trf_7637)
static void C_fcall trf_7637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7637(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7637(t0,t1);}

C_noret_decl(trf_7692)
static void C_fcall trf_7692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7692(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7692(t0,t1);}

C_noret_decl(trf_4418)
static void C_fcall trf_4418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4418(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4418(t0,t1,t2,t3);}

C_noret_decl(trf_8335)
static void C_fcall trf_8335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8335(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8335(t0,t1);}

C_noret_decl(trf_6591)
static void C_fcall trf_6591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6591(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6591(t0,t1);}

C_noret_decl(trf_4780)
static void C_fcall trf_4780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4780(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4780(t0,t1,t2);}

C_noret_decl(trf_8819)
static void C_fcall trf_8819(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8819(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8819(t0,t1);}

C_noret_decl(trf_8802)
static void C_fcall trf_8802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8802(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8802(t0,t1);}

C_noret_decl(trf_8836)
static void C_fcall trf_8836(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8836(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8836(t0,t1);}

C_noret_decl(trf_4937)
static void C_fcall trf_4937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4937(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4937(t0,t1,t2);}

C_noret_decl(trf_8572)
static void C_fcall trf_8572(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8572(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8572(t0,t1);}

C_noret_decl(trf_8584)
static void C_fcall trf_8584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8584(t0,t1);}

C_noret_decl(trf_8896)
static void C_fcall trf_8896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8896(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8896(t0,t1,t2);}

C_noret_decl(trf_9307)
static void C_fcall trf_9307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9307(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9307(t0,t1);}

C_noret_decl(trf_9362)
static void C_fcall trf_9362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9362(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9362(t0,t1);}

C_noret_decl(trf_7470)
static void C_fcall trf_7470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7470(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7470(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5274)
static void C_fcall trf_5274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5274(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5274(t0,t1,t2);}

C_noret_decl(trf_7477)
static void C_fcall trf_7477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7477(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7477(t0,t1);}

C_noret_decl(trf_8853)
static void C_fcall trf_8853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8853(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8853(t0,t1);}

C_noret_decl(trf_4990)
static void C_fcall trf_4990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4990(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4990(t0,t1,t2);}

C_noret_decl(trf_9335)
static void C_fcall trf_9335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9335(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9335(t0,t1);}

C_noret_decl(trf_5203)
static void C_fcall trf_5203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5203(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5203(t0,t1);}

C_noret_decl(trf_5446)
static void C_fcall trf_5446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5446(t0,t1,t2);}

C_noret_decl(trf_4910)
static void C_fcall trf_4910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4910(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4910(t0,t1,t2);}

C_noret_decl(trf_7195)
static void C_fcall trf_7195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7195(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7195(t0,t1,t2);}

C_noret_decl(trf_6670)
static void C_fcall trf_6670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6670(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6670(t0,t1);}

C_noret_decl(trf_5499)
static void C_fcall trf_5499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5499(t0,t1,t2);}

C_noret_decl(trf_3511)
static void C_fcall trf_3511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3511(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3511(t0,t1,t2,t3);}

C_noret_decl(trf_4633)
static void C_fcall trf_4633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4633(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4633(t0,t1);}

C_noret_decl(trf_4630)
static void C_fcall trf_4630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4630(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4630(t0,t1);}

C_noret_decl(trf_3770)
static void C_fcall trf_3770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3770(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3770(t0,t1);}

C_noret_decl(trf_3548)
static void C_fcall trf_3548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3548(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3548(t0,t1,t2,t3);}

C_noret_decl(trf_8172)
static void C_fcall trf_8172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8172(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8172(t0,t1,t2);}

C_noret_decl(trf_6780)
static void C_fcall trf_6780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6780(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6780(t0,t1,t2);}

C_noret_decl(trf_8115)
static void C_fcall trf_8115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8115(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8115(t0,t1,t2,t3);}

C_noret_decl(trf_6845)
static void C_fcall trf_6845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6845(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6845(t0,t1);}

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

/* k10496 in k10490 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1362: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10490 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10492,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10498,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1362: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[852],C_SCHEME_FALSE,t3);}

/* k4261 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4263,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:395: foreign-argument-conversion */
t4=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k4265 in k4261 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:395: gen */
t2=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],C_make_character(40),((C_word*)t0)[3],lf[173],((C_word*)t0)[4],C_make_character(41),t1);}

/* k6728 in k6716 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_fcall f_6730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:858: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[464]);}
else{
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:859: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[463]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
f_6628(2,t3,t2);}}}

/* for-each-loop798 in k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5522(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5522,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5532,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:660: g799 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4248 in k4245 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:397: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[172]);}

/* for-each-loop775 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5545(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5545,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5555,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:650: g776 */
t5=((C_word*)t0)[3];
f_5446(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10466 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10468,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10474,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1361: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[851],C_SCHEME_FALSE,t3);}

/* k5530 in for-each-loop798 in k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5522(t3,((C_word*)t0)[4],t2);}

/* k10454 in k10451 in k10448 in k10442 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1360: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k10451 in k10448 in k10442 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1360: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[848],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10448 in k10442 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1360: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k6626 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_ccall f_6628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6670,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=*((C_word*)lf[135]+1);
if(C_truep(*((C_word*)lf[135]+1))){
t5=t3;
f_6670(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[441]+1);
t6=t3;
f_6670(t6,(C_truep(*((C_word*)lf[441]+1))?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[9])));}}
else{
t4=t3;
f_6670(t4,C_SCHEME_FALSE);}}

/* a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5568,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5572,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:629: lambda-literal-argument-count */
t5=*((C_word*)lf[288]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k10478 in k10475 in k10472 in k10466 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1361: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6764 in for-each-loop980 in k6755 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_car(((C_word*)t0)[2]);
/* c-backend.scm:806: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,((C_word*)t0)[3],C_SCHEME_TRUE,t1,C_make_character(32),t2,C_make_character(59));}

/* k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8199,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1135: foreign-callback-stub-qualifiers */
t4=*((C_word*)lf[671]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* ##compiler#generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8195,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8199,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1134: foreign-callback-stub-name */
t5=*((C_word*)lf[672]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* ##compiler#encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10721(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10721,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10730,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10783,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t5)){
t6=t1;
t7=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1390: string-append */
t8=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,lf[853]);}
else{
t6=C_eqp(C_SCHEME_FALSE,t2);
if(C_truep(t6)){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1390: string-append */
t9=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[854]);}
else{
if(C_truep(C_charp(t2))){
t7=C_fix(C_character_code(t2));
t8=f_10730(C_a_i(&a,24),t7);
/* ##sys#string-append */
t9=*((C_word*)lf[205]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,lf[855],t8);}
else{
if(C_truep(C_i_nullp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1390: string-append */
t9=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[856]);}
else{
if(C_truep(C_eofp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1390: string-append */
t9=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[857]);}
else{
t7=*((C_word*)lf[354]+1);
t8=C_eqp(*((C_word*)lf[354]+1),t2);
if(C_truep(t8)){
t9=t1;
t10=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1390: string-append */
t11=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[858]);}
else{
if(C_truep(C_fixnump(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10903,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1399: big-fixnum? */
t10=*((C_word*)lf[367]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10916,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1408: number->string */
t10=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t9=C_slot(t2,C_fix(1));
t10=C_i_string_length(t9);
t11=f_10730(C_a_i(&a,24),t10);
/* c-backend.scm:1411: string-append */
t12=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t4,lf[865],t11,t9);}
else{
if(C_truep(C_immp(t2))){
/* c-backend.scm:1416: bomb */
t9=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,lf[866],t2);}
else{
if(C_truep(C_byteblockp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10955,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=stub2148(C_SCHEME_UNDEFINED,t10);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,1,t12);
t14=t2;
t15=stub2152(C_SCHEME_UNDEFINED,t14);
t16=f_10730(C_a_i(&a,24),t15);
/* ##sys#string-append */
t17=*((C_word*)lf[205]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t9,t13,t16);}
else{
t9=t2;
t10=stub2152(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10985,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=t2;
t13=stub2148(C_SCHEME_UNDEFINED,t12);
t14=C_make_character(C_unfix(t13));
t15=C_a_i_string(&a,1,t14);
t16=t15;
t17=f_10730(C_a_i(&a,24),t10);
t18=t17;
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10997,a[2]=t11,a[3]=t16,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1429: list-tabulate */
t21=*((C_word*)lf[546]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t19,t10,t20);}}}}}}}}}}}}

/* k5553 in for-each-loop775 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5545(t3,((C_word*)t0)[4],t2);}

/* k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5584,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=t2;
f_5587(t5,t4);}
else{
t3=t2;
f_5587(t3,C_SCHEME_UNDEFINED);}}

/* k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5587,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:635: lambda-literal-direct */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[11]);}

/* k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5581,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5584,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5672,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:633: lambda-literal-closure-size */
t5=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[10]);}
else{
t4=t3;
f_5584(t4,C_SCHEME_FALSE);}}

/* k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5572,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:630: lambda-literal-rest-argument */
t5=*((C_word*)lf[284]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}

/* k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5578,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:632: lambda-literal-customizable */
t4=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5575,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:631: lambda-literal-rest-argument-mode */
t4=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* k10442 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10444,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10450,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1360: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[849],C_SCHEME_FALSE,t3);}

/* k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5593,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:637: gen */
t3=*((C_word*)lf[1]+1);
((C_proc11)(void*)(*((C_word*)t3+1)))(11,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[332],((C_word*)t0)[5],lf[333],C_SCHEME_TRUE,lf[334],((C_word*)t0)[5],lf[335]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=t2;
f_5627(2,t3,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5661,a[2]=t2,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:645: lambda-literal-allocated */
t4=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[11]);}}}}

/* k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:639: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[330],((C_word*)t0)[4],lf[331]);}

/* k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4848(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4848,2,t0,t1);}
t2=*((C_word*)lf[217]+1);
t3=C_i_check_list_2(*((C_word*)lf[217]+1),lf[57]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4990,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4990(t8,t4,*((C_word*)lf[217]+1));}

/* declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4841(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4841,NULL,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4848,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:505: gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[246]);}

/* k4837 in k6972 in k6969 in k6966 in k6963 in k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:497: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4833 in k6972 in k6969 in k6966 in k6963 in k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:496: gen */
t2=*((C_word*)lf[1]+1);
((C_proc11)(void*)(*((C_word*)t2+1)))(11,t2,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[509],C_SCHEME_TRUE,t1,lf[510],C_SCHEME_TRUE,lf[511],C_SCHEME_TRUE);}

/* g1654 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8603,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1190: foreign-type-declaration */
t4=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1190: foreign-type-declaration */
t4=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}}

/* k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4865,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4870(t5,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);}

/* k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:513: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[239]);}

/* k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t3)){
t4=t2;
f_4862(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:512: gen */
t4=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[240],((C_word*)t0)[4],lf[241]);}}

/* k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4937(t6,t2,C_fix(0));}

/* k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=t1;
t3=C_i_string_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=C_a_i_arithmetic_shift(&a,2,t4,C_fix(-16));
t7=C_a_i_arithmetic_shift(&a,2,t4,C_fix(-8));
t8=C_a_i_bitwise_and(&a,2,C_fix(255),t7);
t9=C_fixnum_and(C_fix(255),t4);
/* c-backend.scm:519: gen */
t10=*((C_word*)lf[1]+1);
((C_proc12)(void*)(*((C_word*)t10+1)))(12,t10,t5,C_SCHEME_TRUE,lf[236],((C_word*)t0)[2],lf[237],t6,C_make_character(44),t8,C_make_character(44),t9,C_make_character(41));}

/* k8704 in k8685 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1209: string-intersperse */
t2=*((C_word*)lf[225]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[728]);}

/* k4887 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(7));
t4=C_a_i_bitwise_and(&a,2,C_fix(16777208),t3);
t5=C_a_i_minus(&a,2,t4,((C_word*)t0)[6]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4910,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4910(t9,t2,t5);}

/* map-loop1667 in k8685 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8708(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8708,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8737,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[175]+1);
/* c-backend.scm:1210: g1690 */
t6=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[729]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10781 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10783,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1390: string-append */
t4=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7282,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1017: foreign-stub-name */
t4=*((C_word*)lf[592]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4870(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4870,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4880,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* c-backend.scm:517: ##sys#lambda-info->string */
t6=*((C_word*)lf[238]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5095,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5324,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:539: lambda-literal-closure-size */
t5=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t3;
f_5098(t4,C_SCHEME_FALSE);}}

/* k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5098(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5098,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:540: make-variable-list */
t5=*((C_word*)lf[285]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[286]);}
else{
/* c-backend.scm:540: make-variable-list */
t4=*((C_word*)lf[285]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[286]);}}

/* k9555 in k9360 in k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9557(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9557,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[799]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[605]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9566(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[619]);
if(C_truep(t4)){
t5=t3;
f_9566(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[620]);
if(C_truep(t5)){
t6=t3;
f_9566(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[621]);
t7=t3;
f_9566(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[622])));}}}}}

/* k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5092,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:538: lambda-literal-customizable */
t4=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7285,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1018: foreign-stub-body */
t4=*((C_word*)lf[591]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7288,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1019: foreign-stub-argument-names */
t4=*((C_word*)lf[590]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* k6815 in doloop972 in k6803 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6817,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6807(t4,((C_word*)t0)[5],t2,t3);}

/* encode-size in encode-literal in k2627 in k2542 in k2539 in k2536 */
static C_word C_fcall f_10730(C_word *a,C_word t1){
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
C_stack_overflow_check;
t2=C_a_i_arithmetic_shift(&a,2,t1,C_fix(-16));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,t1,C_fix(-8));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_bitwise_and(&a,2,C_fix(255),t1);
t9=C_make_character(C_unfix(t8));
return(C_a_i_string(&a,3,t4,t7,t9));}

/* k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7270,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1013: foreign-stub-argument-types */
t4=*((C_word*)lf[596]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7273,2,t0,t1);}
t2=t1;
t3=C_i_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7279,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7552,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1015: make-variable-list */
t7=*((C_word*)lf[285]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,lf[595]);}

/* a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5088,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5092,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:537: lambda-literal-argument-count */
t5=*((C_word*)lf[288]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7279,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1016: foreign-stub-return-type */
t4=*((C_word*)lf[593]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* doloop972 in k6803 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_fcall f_6807(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6807,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6817,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:803: gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,C_SCHEME_TRUE,lf[478],t2,C_make_character(59));}}

/* k6803 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in ... */
static void C_fcall f_6805(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6805,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6807,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6807(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##compiler#generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7261,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7263,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[57]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7560,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7560(t9,t1,t2);}

/* k6716 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_ccall f_6718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6730,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[135]+1);
t5=t3;
f_6730(t5,(C_truep(*((C_word*)lf[135]+1))?C_SCHEME_FALSE:C_i_not(*((C_word*)lf[427]+1))));}
else{
t4=t3;
f_6730(t4,C_SCHEME_FALSE);}}

/* k4890 in k4887 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:530: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[234]);}

/* g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7263(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7263,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7267,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1011: foreign-stub-id */
t4=*((C_word*)lf[598]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4893 in k4890 in k4887 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4895,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4870(t5,((C_word*)t0)[5],t2,t4);}

/* k5073 in for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5065(t3,((C_word*)t0)[4],t2);}

/* k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7267,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7270,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1012: real-name2 */
t4=*((C_word*)lf[597]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[4]);}

/* k10090 in k10087 in k10084 in k10078 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1333: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k10087 in k10084 in k10078 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1333: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[827],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10084 in k10078 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1333: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10078 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10080,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10086,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1333: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[828],C_SCHEME_FALSE,t3);}

/* k8756 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1214: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[731],t1);}

/* k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8751(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8751,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:1214: foreign-type-declaration */
t4=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=t2;
f_8768(t5,C_eqp(lf[753],t4));}
else{
t4=t2;
f_8768(t4,C_SCHEME_FALSE);}}}

/* k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8768(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8768,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1216: ->string */
t4=*((C_word*)lf[734]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8785(t5,C_eqp(lf[752],t4));}
else{
t4=t2;
f_8785(t4,C_SCHEME_FALSE);}}}

/* k5044 in for-each-loop695 in k5026 in k5023 in for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5036(t3,((C_word*)t0)[4],t2);}

/* k8123 in for-each-loop1494 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_8115(t4,((C_word*)t0)[5],t2,t3);}

/* k8773 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1216: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[732],t1,lf[733],((C_word*)t0)[3]);}

/* k5029 in k5026 in k5023 in for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:590: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[247]);}

/* for-each-loop695 in k5026 in k5023 in for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5036(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5036,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5046,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:589: g696 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10054 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10056,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1332: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[826],C_SCHEME_FALSE,t3);}

/* k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_10053(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10053,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1332: open-output-string */
t3=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[611]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1333: open-output-string */
t4=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[630]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1334: open-output-string */
t6=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[636]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[635]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1335: open-output-string */
t8=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[633]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1336: open-output-string */
t9=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[627]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[628]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1337: open-output-string */
t11=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1338: open-output-string */
t12=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1339: open-output-string */
t13=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[12]);
if(C_truep(t12)){
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[836]);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[562]);
t14=(C_truep(t13)?t13:C_eqp(((C_word*)t0)[4],lf[642]));
if(C_truep(t14)){
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[837]);}
else{
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
/* c-backend.scm:1343: ##sys#hash-table-ref */
t16=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,*((C_word*)lf[618]+1),((C_word*)t0)[5]);}
else{
t16=t15;
f_10266(2,t16,C_SCHEME_FALSE);}}}}}}}}}}}}

/* k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_7294(2,t3,t1);}
else{
/* c-backend.scm:1019: make-list */
t3=*((C_word*)lf[248]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE);}}

/* k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7294,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7297,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:1020: foreign-result-conversion */
t4=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[589]);}

/* k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8785(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8785,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1218: ->string */
t4=*((C_word*)lf[734]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8802(t5,C_eqp(lf[751],t4));}
else{
t4=t2;
f_8802(t4,C_SCHEME_FALSE);}}}

/* k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5020,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[57]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5065(t7,((C_word*)t0)[3],t2);}

/* k5026 in k5023 in for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5036,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5036(t6,t2,t1);}

/* k5023 in for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5025,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5028,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:589: make-list */
t4=*((C_word*)lf[248]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[249]);}

/* k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7297,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1021: foreign-stub-cps */
t4=*((C_word*)lf[588]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[12]);}

/* k10039 in k10036 in k10033 in k10027 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1328: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7203 in for-each-loop1166 in k7163 in generate-external-variables in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7195(t3,((C_word*)t0)[4],t2);}

/* k8790 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1218: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[735],t1,lf[736],((C_word*)t0)[3]);}

/* k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:535: ##sys#hash-table-for-each */
t4=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5013(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5013,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5017,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:534: gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}

/* map-loop862 in k5795 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5802(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5802,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:678: g868 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5798 in k5795 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:678: reduce */
t2=*((C_word*)lf[344]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[345]+1),C_fix(0),t1);}

/* k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8642,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8653,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1199: string-append */
t5=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[723],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(C_fix(2),((C_word*)t0)[7]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
f_8659(t5,C_eqp(lf[608],t4));}
else{
t4=t2;
f_8659(t4,C_SCHEME_FALSE);}}}

/* k4998 in for-each-loop580 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4990(t3,((C_word*)t0)[4],t2);}

/* k10066 in k10063 in k10060 in k10054 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1332: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8659(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8659,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8670,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1202: string-append */
t5=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[724],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8676,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[7],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[2]);
t4=t2;
f_8676(t4,C_eqp(lf[754],t3));}
else{
t3=t2;
f_8676(t3,C_SCHEME_FALSE);}}}

/* k10060 in k10054 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1332: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10063 in k10060 in k10054 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1332: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[825],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k8651 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1199: foreign-type-declaration */
t2=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* string-like-substring in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6138(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6138,NULL,4,t1,t2,t3,t4);}
t5=C_a_i_minus(&a,2,t4,t3);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6145,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:731: make-string */
t8=*((C_word*)lf[370]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}

/* k10012 in k10009 in k10003 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1327: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k10009 in k10003 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1327: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10015 in k10012 in k10009 in k10003 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1327: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6130 in doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:727: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10003 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10005,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10011,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1327: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[823],C_SCHEME_FALSE,t3);}

/* k7246 in for-each-loop1190 in generate-foreign-callback-stub-prototypes in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7238(t3,((C_word*)t0)[4],t2);}

/* k10033 in k10027 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1328: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10036 in k10033 in k10027 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1328: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k5369 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:609: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[310],((C_word*)t0)[3],lf[311]);}

/* k5375 in k5372 in k5369 */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:611: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(118));}
else{
t3=t2;
f_5380(2,t3,C_SCHEME_UNDEFINED);}}

/* k5372 in k5369 */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:610: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[309],((C_word*)t0)[3],C_make_character(114));}

/* for-each-loop47 in k2597 in gen-list in k2542 in k2539 in k2536 */
static void C_fcall f_2604(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2604,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2614,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:49: display */
t5=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[0]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9564 in k9555 in k9360 in k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9566(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9566,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[800]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[12]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[801]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* c-backend.scm:1292: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[618]+1),((C_word*)t0)[4]);}
else{
t4=t3;
f_9575(2,t4,C_SCHEME_FALSE);}}}}

/* for-each-loop1190 in generate-foreign-callback-stub-prototypes in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7238,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7248,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7224,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1003: gen */
t8=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7076 in loop in cleanup in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7078(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7078,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],C_make_character(126));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7049(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:966: string-copy */
t3=*((C_word*)lf[544]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[7]);
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7049(t4,((C_word*)t0)[5],t3);}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7049(t3,((C_word*)t0)[5],t2);}}}

/* k10027 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10029,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10035,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1328: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[824],C_SCHEME_FALSE,t3);}

/* f_5367 in emitter in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5367,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5371,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[2])?C_make_character(118):lf[312]);
t5=(C_truep(((C_word*)t0)[2])?C_make_character(118):lf[313]);
/* c-backend.scm:607: gen */
t6=*((C_word*)lf[1]+1);
((C_proc14)(void*)(*((C_word*)t6+1)))(14,t6,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[314],t2,C_make_character(114),t4,lf[315],C_SCHEME_TRUE,lf[316],t2,C_make_character(114),t5);}

/* emitter in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5365(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5365,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5367,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));}

/* k2612 in for-each-loop47 in k2597 in gen-list in k2542 in k2539 in k2536 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2604(t3,((C_word*)t0)[4],t2);}

/* k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=C_mutate2((C_word*)lf[6]+1 /* (set! ##compiler#unique-id ...) */,t1);
t3=C_mutate2((C_word*)lf[7]+1 /* (set! ##compiler#generate-code ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2631,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[513]+1 /* (set! emit-procedure-table-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6983,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[499]+1 /* (set! ##compiler#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7040,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[285]+1 /* (set! ##compiler#make-variable-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7129,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[296]+1 /* (set! ##compiler#make-argument-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7145,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[517]+1 /* (set! ##compiler#generate-external-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7161,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2((C_word*)lf[208]+1 /* (set! ##compiler#generate-foreign-callback-stub-prototypes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7218,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2((C_word*)lf[515]+1 /* (set! ##compiler#generate-foreign-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7261,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2((C_word*)lf[514]+1 /* (set! generate-foreign-callback-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7583,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[549]+1 /* (set! ##compiler#generate-foreign-callback-header ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8195,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[175]+1 /* (set! ##compiler#foreign-type-declaration ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8258,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[174]+1 /* (set! ##compiler#foreign-argument-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9305,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[169]+1 /* (set! ##compiler#foreign-result-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9936,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[365]+1 /* (set! ##compiler#encode-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10721,tmp=(C_word)a,a+=2,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* k7222 in for-each-loop1190 in generate-foreign-callback-stub-prototypes in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1004: generate-foreign-callback-header */
t3=*((C_word*)lf[549]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[550],((C_word*)t0)[3]);}

/* k7225 in k7222 in for-each-loop1190 in generate-foreign-callback-stub-prototypes in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1005: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k9573 in k9564 in k9555 in k9360 in k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_9575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9575,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
/* c-backend.scm:1294: foreign-argument-conversion */
t5=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}
else{
/* c-backend.scm:1294: foreign-argument-conversion */
t4=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=((C_word*)t0)[3];
t4=C_u_i_length(t3);
t5=t2;
f_9602(t5,C_fixnum_greater_or_equal_p(t4,C_fix(2)));}
else{
t3=t2;
f_9602(t3,C_SCHEME_FALSE);}}}

/* k5308 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:540: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* ##compiler#generate-foreign-callback-stub-prototypes in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7218(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7218,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[57]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7238,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7238(t7,t1,t2);}

/* k7568 in for-each-loop1213 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7560(t3,((C_word*)t0)[4],t2);}

/* k5300 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5116(t3,t2);}

/* ##compiler#generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_2631,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2635,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=t8,a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t10=C_a_i_plus(&a,2,*((C_word*)lf[521]+1),C_fix(1));
/* c-backend.scm:64: flonum-print-precision */
t11=*((C_word*)lf[522]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}

/* k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t27=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t28=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4841,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t30=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t32=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5674,a[2]=t19,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t33=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5730,a[2]=t17,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5920,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6062,a[2]=t23,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6138,tmp=(C_word)a,a+=2,tmp));
t37=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6204,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t15,a[5]=t17,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp));
t38=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6946,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t25,a[7]=t13,a[8]=((C_word*)t0)[6],a[9]=t11,a[10]=t9,a[11]=t7,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:914: debugging */
t39=*((C_word*)lf[500]+1);
((C_proc4)(void*)(*((C_word*)t39+1)))(4,t39,t38,lf[519],lf[520]);}

/* k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5927(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5927,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:694: gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],lf[352],((C_word*)t0)[4],lf[353]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:695: block-variable-literal? */
t3=*((C_word*)lf[350]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* find-lambda in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_2637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2637,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2641,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:70: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5920(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5920,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5927,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6060,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:693: big-fixnum? */
t6=*((C_word*)lf[367]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t4;
f_5927(t5,C_SCHEME_FALSE);}}

/* k7086 in k7076 in loop in cleanup in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7088,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],C_make_character(126));
t4=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7049(t5,((C_word*)t0)[5],t4);}

/* for-each-loop1213 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7560(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7560,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7570,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1008: g1214 */
t5=((C_word*)t0)[3];
f_7263(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5331 in restore in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:603: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[290],((C_word*)t0)[3],lf[291]);}

/* k5909 in loop in k5858 in k5840 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5911,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],t1);
/* c-backend.scm:688: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5889(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k7028 in a7003 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:935: gen */
t2=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[537],((C_word*)t0)[3],C_make_character(58),t1,lf[538]);}

/* k7036 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7038,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,C_fix(1));
/* c-backend.scm:931: gen */
t3=*((C_word*)lf[1]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[540],C_SCHEME_TRUE,lf[541],t2,lf[542]);}

/* k5322 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5098(t2,C_i_zerop(t1));}

/* trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5326(C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5326,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5329,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5365,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5445,a[2]=t7,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5568,a[2]=t7,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:627: ##sys#hash-table-for-each */
t14=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,((C_word*)t0)[2]);}

/* restore in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5329(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5329,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5333,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_minus(&a,2,t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5342,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5342(t8,t3,t4,C_fix(0));}

/* k10207 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10209,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10215,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1338: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[834],C_SCHEME_FALSE,t3);}

/* k8735 in map-loop1667 in k8685 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8737(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8737,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8708(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8708(t6,((C_word*)t0)[5],t5);}}

/* k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5933(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5933,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=*((C_word*)lf[354]+1);
t3=C_eqp(((C_word*)t0)[3],*((C_word*)lf[354]+1));
if(C_truep(t3)){
/* c-backend.scm:697: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],lf[355]);}
else{
if(C_truep(C_booleanp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:699: gen */
t4=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(61),lf[356],C_make_character(59));}
else{
/* c-backend.scm:699: gen */
t4=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(61),lf[357],C_make_character(59));}}
else{
if(C_truep(C_charp(((C_word*)t0)[3]))){
t4=C_fix(C_character_code(((C_word*)t0)[3]));
/* c-backend.scm:701: gen */
t5=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],lf[358],t4,lf[359]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5983,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:704: c-ify-string */
t7=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* c-backend.scm:709: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],lf[363]);}
else{
t4=C_immp(((C_word*)t0)[3]);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_lambdainfop(((C_word*)t0)[3]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_fixnump(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_6016(t8,t6);}
else{
t8=C_immp(((C_word*)t0)[3]);
t9=t7;
f_6016(t9,C_i_not(t8));}}}}}}}}}

/* k10390 in k10387 in k10384 in k10378 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1355: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop682 in k5018 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5065(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5065,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5075,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5025,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:588: gen */
t8=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,C_SCHEME_TRUE,lf[250],t6,lf[251]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3186 in k3183 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:176: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[63]);}

/* k3183 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:175: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k10387 in k10384 in k10378 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1355: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[844],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10384 in k10378 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1355: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10378 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10380,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10386,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1355: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[845],C_SCHEME_FALSE,t3);}

/* k8681 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1205: str */
t2=((C_word*)t0)[2];
f_8265(t2,((C_word*)t0)[3],t1);}

/* k8685 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8687(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8687,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8691,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_cddr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[727]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8706,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8708,a[2]=t7,a[3]=t12,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_8708(t14,t10,t8);}

/* k3130 in k3124 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3132,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* c-backend.scm:171: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[58],t2,lf[59]);}

/* k8689 in k8685 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1206: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[725],t1,lf[726]);}

/* k5987 in k5981 in k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:707: gen */
t2=*((C_word*)lf[1]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[2],lf[360],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[5],lf[361]);}

/* for-each-loop182 in k3124 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3141(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3141,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3151,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:165: g183 */
t9=((C_word*)t0)[3];
f_3113(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k10366 in k10363 in k10360 in k10354 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1353: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5981 in k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5983,2,t0,t1);}
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5989,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:706: gen */
t6=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,C_SCHEME_TRUE,((C_word*)t0)[4],lf[362]);}

/* k10363 in k10360 in k10354 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1353: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[842],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10360 in k10354 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1353: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:621: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[300]);}
else{
t3=t2;
f_5398(2,t3,C_SCHEME_UNDEFINED);}}

/* k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:620: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],lf[301]);}

/* k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:622: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[299]);}

/* k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3126,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:170: iota */
t5=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(1),C_fix(1));}

/* k10354 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10356,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10362,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1353: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[843],C_SCHEME_FALSE,t3);}

/* k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8676,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8687,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1207: foreign-type-declaration */
t5=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[730]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8751(t5,C_eqp(lf[610],t4));}
else{
t4=t2;
f_8751(t4,C_SCHEME_FALSE);}}}

/* k8668 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1202: foreign-type-declaration */
t2=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:615: restore */
f_5329(t2,((C_word*)t0)[3]);}

/* k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:618: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[302]);}
else{
/* c-backend.scm:619: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[303]);}}

/* k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:616: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[304]);}

/* k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:612: gen */
t3=*((C_word*)lf[1]+1);
((C_proc11)(void*)(*((C_word*)t3+1)))(11,t3,t2,lf[305],((C_word*)t0)[3],lf[306],C_SCHEME_TRUE,lf[307],C_SCHEME_TRUE,lf[308],((C_word*)t0)[3],C_make_character(59));}

/* k3118 in k3115 in g183 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:169: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(44));}

/* expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2649,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2652,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
/* c-backend.scm:459: expr */
t11=((C_word*)t6)[1];
f_2652(t11,t1,t2,t3);}

/* k4327 in k4310 in k4307 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:409: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[185],t1);}

/* k10339 in k10336 in k10330 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1351: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[840],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10342 in k10339 in k10336 in k10330 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1351: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3115 in g183 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:168: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* g183 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3113(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3113,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3117,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:167: gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[55],t3,lf[56]);}

/* k3922 in k3914 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3924,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3930,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3935,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3935(t7,t3,((C_word*)t0)[2],t1);}

/* k2639 in find-lambda in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* c-backend.scm:71: bomb */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[9],((C_word*)t0)[3]);}}

/* k4310 in k4307 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:409: foreign-argument-conversion */
t4=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* g380 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3900(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3900,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3904,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:329: gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7598,2,t0,t1);}
t2=t1;
t3=C_i_length(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1083: make-argument-list */
t6=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,lf[665]);}

/* k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7595,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7598,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1081: foreign-callback-stub-argument-types */
t4=*((C_word*)lf[666]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k4313 in k4310 in k4307 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:410: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k4316 in k4313 in k4310 in k4307 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:411: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[184]);}

/* k10330 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10332,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10338,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1351: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[841],C_SCHEME_FALSE,t3);}

/* k10336 in k10330 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1351: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7592,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1080: foreign-callback-stub-return-type */
t4=*((C_word*)lf[667]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k3124 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3126,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3141,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3141(t7,t3,((C_word*)t0)[2],t1);}

/* expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2652,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=C_eqp(t11,lf[11]);
if(C_truep(t12)){
t13=C_i_car(t9);
t14=C_eqp(t13,lf[12]);
if(C_truep(t14)){
if(C_truep(C_i_cadr(t9))){
/* c-backend.scm:83: gen */
t15=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t1,lf[13]);}
else{
/* c-backend.scm:83: gen */
t15=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t1,lf[14]);}}
else{
t15=C_eqp(t13,lf[15]);
if(C_truep(t15)){
t16=C_i_cadr(t9);
t17=C_fix(C_character_code(t16));
/* c-backend.scm:84: gen */
t18=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t1,lf[16],t17,C_make_character(41));}
else{
t16=C_eqp(t13,lf[17]);
if(C_truep(t16)){
/* c-backend.scm:85: gen */
t17=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t1,lf[18]);}
else{
t17=C_eqp(t13,lf[19]);
if(C_truep(t17)){
t18=C_i_cadr(t9);
/* c-backend.scm:86: gen */
t19=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t1,lf[20],t18,C_make_character(41));}
else{
t18=C_eqp(t13,lf[21]);
if(C_truep(t18)){
/* c-backend.scm:87: gen */
t19=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t1,lf[22]);}
else{
/* c-backend.scm:88: bomb */
t19=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t1,lf[23]);}}}}}}
else{
t13=C_eqp(t11,lf[24]);
if(C_truep(t13)){
t14=C_i_car(t9);
if(C_truep(C_i_vectorp(t14))){
t15=C_i_vector_ref(t14,C_fix(0));
/* c-backend.scm:93: gen */
t16=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t1,lf[25],t15,lf[26]);}
else{
t15=C_u_i_car(t9);
/* c-backend.scm:94: gen */
t16=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t1,lf[27],t15,C_make_character(93));}}
else{
t14=C_eqp(t11,lf[28]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2799,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:97: gen */
t16=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,C_SCHEME_TRUE,lf[31]);}
else{
t15=C_eqp(t11,lf[32]);
if(C_truep(t15)){
t16=C_i_car(t9);
/* c-backend.scm:106: gen */
t17=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t1,lf[33],t16);}
else{
t16=C_eqp(t11,lf[34]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2857,a[2]=t19,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t21=((C_word*)t19)[1];
f_2857(t21,t1,t6,t3,t17);}
else{
t17=C_eqp(t11,lf[35]);
if(C_truep(t17)){
t18=C_i_car(t9);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2909,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:119: gen */
t20=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t20+1)))(5,t20,t19,C_SCHEME_TRUE,t18,C_make_character(61));}
else{
t18=C_eqp(t11,lf[36]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2935,a[2]=t9,a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:125: gen */
t20=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t20+1)))(3,t20,t19,lf[38]);}
else{
t19=C_eqp(t11,lf[39]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2962,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:130: gen */
t21=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t20,lf[41]);}
else{
t20=C_eqp(t11,lf[42]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2981,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:135: gen */
t22=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,lf[43]);}
else{
t21=C_eqp(t11,lf[44]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3014,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:142: gen */
t23=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t23+1)))(3,t23,t22,lf[47]);}
else{
t22=C_eqp(t11,lf[48]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3051,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:149: gen */
t24=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t24+1)))(3,t24,t23,lf[50]);}
else{
t23=C_eqp(t11,lf[51]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3080,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:156: gen */
t25=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t25+1)))(3,t25,t24,lf[53]);}
else{
t24=C_eqp(t11,lf[54]);
if(C_truep(t24)){
t25=C_i_car(t9);
t26=t25;
t27=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t6,a[5]=t26,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:164: gen */
t28=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t28+1)))(5,t28,t27,lf[61],t26,C_make_character(44));}
else{
t25=C_eqp(t11,lf[62]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3185,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:174: gen */
t27=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[64]);}
else{
t26=C_eqp(t11,lf[65]);
if(C_truep(t26)){
t27=C_i_car(t9);
/* c-backend.scm:178: gen */
t28=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t28+1)))(4,t28,t1,C_make_character(116),t27);}
else{
t27=C_eqp(t11,lf[66]);
if(C_truep(t27)){
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3217,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t29=C_i_car(t9);
/* c-backend.scm:181: gen */
t30=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t30+1)))(5,t30,t28,C_make_character(116),t29,C_make_character(61));}
else{
t28=C_eqp(t11,lf[67]);
if(C_truep(t28)){
t29=C_i_car(t9);
t30=t29;
t31=C_i_cadr(t9);
if(C_truep(C_i_caddr(t9))){
if(C_truep(t31)){
/* c-backend.scm:190: gen */
t32=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t32+1)))(5,t32,t1,lf[68],t30,lf[69]);}
else{
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3259,a[2]=t1,a[3]=t30,tmp=(C_word)a,a+=4,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3263,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
t34=C_i_cadddr(t9);
/* c-backend.scm:192: ##sys#symbol->qualified-string */
t35=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t35+1)))(3,t35,t33,t34);}}
else{
if(C_truep(t31)){
/* c-backend.scm:194: gen */
t32=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t32+1)))(5,t32,t1,lf[74],t30,lf[75]);}
else{
/* c-backend.scm:195: gen */
t32=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t32+1)))(5,t32,t1,lf[76],t30,lf[77]);}}}
else{
t29=C_eqp(t11,lf[78]);
if(C_truep(t29)){
t30=C_i_car(t9);
t31=C_i_cadr(t9);
t32=C_i_caddr(t9);
t33=t32;
t34=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3294,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t33,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t31)){
/* c-backend.scm:202: gen */
t35=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t35+1)))(5,t35,t34,lf[82],t30,lf[83]);}
else{
/* c-backend.scm:203: gen */
t35=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t35+1)))(5,t35,t34,lf[84],t30,lf[85]);}}
else{
t30=C_eqp(t11,lf[86]);
if(C_truep(t30)){
t31=C_i_car(t9);
t32=t31;
t33=C_i_cadr(t9);
t34=C_i_caddr(t9);
if(C_truep(t33)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3342,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t36=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3356,a[2]=t35,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3360,a[2]=t36,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:214: ##sys#symbol->qualified-string */
t38=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t38+1)))(3,t38,t37,t34);}
else{
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3363,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t36=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=t35,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=t36,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:219: ##sys#symbol->qualified-string */
t38=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t38+1)))(3,t38,t37,t34);}}
else{
t31=C_eqp(t11,lf[93]);
if(C_truep(t31)){
/* c-backend.scm:223: gen */
t32=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t32+1)))(3,t32,t1,lf[94]);}
else{
t32=C_eqp(t11,lf[95]);
if(C_truep(t32)){
t33=C_i_cdr(t6);
t34=t33;
t35=C_i_length(t34);
t36=t35;
t37=t3;
t38=C_a_i_plus(&a,2,t36,C_fix(1));
t39=t38;
t40=C_i_cdr(t9);
t41=C_i_pairp(t40);
t42=t41;
t43=(C_truep(t42)?C_i_cadr(t9):C_SCHEME_FALSE);
t44=t43;
t45=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3414,a[2]=t9,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t34,a[7]=t3,a[8]=t39,a[9]=((C_word*)t0)[2],a[10]=t36,a[11]=((C_word*)t0)[4],a[12]=t37,a[13]=t44,a[14]=((C_word*)t0)[5],a[15]=t42,tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:232: source-info->string */
t46=*((C_word*)lf[150]+1);
((C_proc3)(void*)(*((C_word*)t46+1)))(3,t46,t45,t44);}
else{
t33=C_eqp(t11,lf[151]);
if(C_truep(t33)){
t34=C_i_length(t6);
t35=t34;
t36=C_a_i_plus(&a,2,t35,C_fix(1));
t37=t36;
t38=C_i_car(t9);
t39=t38;
t40=C_i_cadr(t9);
t41=t40;
t42=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4030,a[2]=t39,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,a[6]=t35,a[7]=t6,a[8]=t37,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[3],a[11]=t41,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:323: lambda-literal-closure-size */
t43=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t43+1)))(3,t43,t42,((C_word*)t0)[4]);}
else{
t34=C_eqp(t11,lf[155]);
if(C_truep(t34)){
t35=C_i_cdr(t6);
t36=t35;
t37=C_i_length(t36);
t38=C_a_i_plus(&a,2,t37,C_fix(1));
t39=C_i_caddr(t9);
t40=t39;
t41=C_i_cadddr(t9);
t42=t41;
t43=C_i_zerop(t42);
t44=C_i_not(t43);
t45=t44;
t46=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4113,a[2]=t6,a[3]=t1,a[4]=t36,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t45,a[9]=t42,a[10]=t40,tmp=(C_word)a,a+=11,tmp);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=t46,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:351: find-lambda */
t48=((C_word*)((C_word*)t0)[5])[1];
f_2637(t48,t47,t40);}
else{
t35=C_eqp(t11,lf[157]);
if(C_truep(t35)){
t36=C_i_length(t6);
t37=C_a_i_plus(&a,2,t36,C_fix(1));
t38=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4136,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t39=C_i_car(t9);
/* c-backend.scm:368: gen */
t40=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t40+1)))(8,t40,t38,C_SCHEME_TRUE,lf[159],t39,lf[160],t37,lf[161]);}
else{
t36=C_eqp(t11,lf[162]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4155,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:373: gen */
t38=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t38+1)))(4,t38,t37,C_SCHEME_TRUE,lf[164]);}
else{
t37=C_eqp(t11,lf[165]);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4174,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t39=C_i_car(t9);
/* c-backend.scm:378: gen */
t40=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t40+1)))(4,t40,t38,t39,C_make_character(40));}
else{
t38=C_eqp(t11,lf[166]);
if(C_truep(t38)){
t39=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4193,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t40=C_i_car(t9);
t41=C_i_length(t6);
/* c-backend.scm:383: gen */
t42=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t42+1)))(5,t42,t39,t40,lf[167],t41);}
else{
t39=C_eqp(t11,lf[168]);
if(C_truep(t39)){
t40=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4229,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t41=C_i_cadr(t9);
/* c-backend.scm:391: foreign-result-conversion */
t42=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t42+1)))(4,t42,t40,t41,lf[170]);}
else{
t40=C_eqp(t11,lf[171]);
if(C_truep(t40)){
t41=C_i_cadr(t9);
t42=t41;
t43=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4247,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t44=C_u_i_car(t9);
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4263,a[2]=t43,a[3]=t44,a[4]=t42,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:395: foreign-type-declaration */
t46=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t46+1)))(4,t46,t45,t42,lf[176]);}
else{
t41=C_eqp(t11,lf[177]);
if(C_truep(t41)){
t42=C_i_car(t9);
t43=t42;
t44=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4279,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t45=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4293,a[2]=t44,a[3]=t43,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:401: foreign-result-conversion */
t46=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t46+1)))(4,t46,t45,t43,lf[182]);}
else{
t42=C_eqp(t11,lf[183]);
if(C_truep(t42)){
t43=C_i_car(t9);
t44=t43;
t45=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4309,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t44,tmp=(C_word)a,a+=7,tmp);
t46=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4337,a[2]=t45,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:407: foreign-type-declaration */
t47=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t47+1)))(4,t47,t46,t44,lf[188]);}
else{
t43=C_eqp(t11,lf[189]);
if(C_truep(t43)){
t44=C_i_car(t9);
/* c-backend.scm:414: gen */
t45=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t45+1)))(3,t45,t1,t44);}
else{
t44=C_eqp(t11,lf[190]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4359,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t46=C_i_car(t9);
/* c-backend.scm:417: gen */
t47=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t47+1)))(5,t47,t45,lf[192],t46,C_make_character(61));}
else{
t45=C_eqp(t11,lf[193]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4382,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t47=C_i_car(t9);
/* c-backend.scm:422: gen */
t48=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t48+1)))(4,t48,t46,t47,lf[194]);}
else{
t46=C_eqp(t11,lf[195]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4401,a[2]=t9,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:427: gen */
t48=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t48+1)))(4,t48,t47,C_SCHEME_TRUE,lf[199]);}
else{
t47=C_eqp(t11,lf[200]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4482,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:442: gen */
t49=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t49+1)))(3,t49,t48,lf[202]);}
else{
t48=t2;
t49=C_slot(t48,C_fix(1));
/* c-backend.scm:450: bomb */
t50=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t50+1)))(4,t50,t1,lf[203],t49);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7589,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7592,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1079: real-name2 */
t4=*((C_word*)lf[597]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[4]);}

/* g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7585,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7589,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1078: foreign-callback-stub-id */
t4=*((C_word*)lf[668]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k10318 in k10315 in k10312 in k10306 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1349: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7583,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7585,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[57]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8172,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_8172(t9,t1,t2);}

/* k5350 in doloop725 in restore in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5352,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5342(t4,((C_word*)t0)[5],t2,t3);}

/* k3905 in k3902 in g380 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:331: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3902 in g380 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:330: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4335 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:407: gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[186],t1,lf[187]);}

/* k10312 in k10306 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1349: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10315 in k10312 in k10306 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1349: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[838],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k6991 in k6988 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:943: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[531]);}

/* k6994 in k6991 in k6988 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:944: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[530]);}

/* k6997 in k6994 in k6991 in k6988 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:945: gen */
t2=*((C_word*)lf[1]+1);
((C_proc15)(void*)(*((C_word*)t2+1)))(15,t2,((C_word*)t0)[2],lf[523],C_SCHEME_TRUE,lf[524],C_SCHEME_TRUE,lf[525],C_SCHEME_TRUE,lf[526],C_SCHEME_TRUE,lf[527],C_SCHEME_TRUE,lf[528],C_SCHEME_TRUE,lf[529]);}

/* doloop725 in restore in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5342,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_negativep(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5352,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:602: gen */
t5=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t4,C_SCHEME_TRUE,lf[292],t2,lf[293],t3,lf[294]);}}

/* for-each-loop27 in gen in k2542 in k2539 in k2536 */
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2567,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2577,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(C_SCHEME_TRUE,t4);
if(C_truep(t5)){
/* c-backend.scm:43: newline */
t6=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,*((C_word*)lf[0]+1));}
else{
/* c-backend.scm:44: display */
t6=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,*((C_word*)lf[0]+1));}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6988 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:942: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[532]);}

/* k4360 in k4357 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:419: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[191]);}

/* k10306 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10308,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10314,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1349: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[839],C_SCHEME_FALSE,t3);}

/* k6111 in doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6113,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(80));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6077(t4,((C_word*)t0)[5],t2,t3);}

/* k2575 in for-each-loop27 in gen in k2542 in k2539 in k2536 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2567(t3,((C_word*)t0)[4],t2);}

/* k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_10293(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10293,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[612]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[613]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1349: open-output-string */
t6=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[608]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1351: open-output-string */
t7=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[615]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10356,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1353: open-output-string */
t8=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[616]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10380,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1355: open-output-string */
t9=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[617]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10404,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1357: open-output-string */
t10=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[610]);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1358: foreign-result-conversion */
t11=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,((C_word*)t0)[3],t10,((C_word*)t0)[4]);}
else{
t10=C_eqp(t2,lf[472]);
t11=(C_truep(t10)?t10:C_eqp(t2,lf[611]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10444,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1360: open-output-string */
t13=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=C_eqp(t2,lf[614]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10468,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1361: open-output-string */
t14=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t13=C_eqp(t2,lf[751]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10492,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1362: open-output-string */
t15=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
/* c-backend.scm:1363: err */
t14=((C_word*)t0)[5];
f_9938(t14,((C_word*)t0)[3]);}}}}}}}}}}
else{
/* c-backend.scm:1364: err */
t2=((C_word*)t0)[5];
f_9938(t2,((C_word*)t0)[3]);}}

/* k4357 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:418: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k6146 in k6143 in string-like-substring in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k6143 in string-like-substring in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6145,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6148,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:732: ##sys#copy-bytes */
t4=*((C_word*)lf[369]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* k6972 in k6969 in k6966 in k6963 in k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6974,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4835,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4839,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:498: get-output-string */
t5=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,*((C_word*)lf[512]+1));}

/* k7550 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7552,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[594],t1);
/* c-backend.scm:1015: intersperse */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_make_character(44));}

/* k6969 in k6966 in k6963 in k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:924: emit-procedure-table-info */
t3=*((C_word*)lf[513]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4307 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:408: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3414,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t2,a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[15])){
t4=C_i_cddr(((C_word*)t0)[2]);
t5=C_i_pairp(t4);
t6=t3;
f_3417(t6,(C_truep(t5)?C_i_caddr(((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t4=t3;
f_3417(t4,C_SCHEME_FALSE);}}

/* k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3417(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3417,NULL,2,t0,t1);}
t2=t1;
t3=(C_truep(t2)?C_i_cadddr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3846,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:235: find-lambda */
t8=((C_word*)((C_word*)t0)[15])[1];
f_2637(t8,t7,t2);}
else{
t6=t5;
f_3423(t6,C_SCHEME_FALSE);}}

/* k7539 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1025: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[585],t1,lf[586]);}

/* k6126 in doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:727: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:920: prototypes */
t3=((C_word*)((C_word*)t0)[8])[1];
f_5013(t3,t2);}

/* k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:919: generate-foreign-stubs */
t3=*((C_word*)lf[515]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[516]+1),((C_word*)t0)[7]);}

/* k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:918: generate-external-variables */
t3=*((C_word*)lf[517]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[518]+1));}

/* k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:917: declarations */
t3=((C_word*)((C_word*)t0)[9])[1];
f_4841(t3,t2);}

/* k3475 in k3472 in g272 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:255: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3472 in g272 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:254: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* loop in k5858 in k5840 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5889(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5889,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_a_i_plus(&a,2,t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5911,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(((C_word*)t0)[4],t2);
/* c-backend.scm:688: literal-size */
t8=((C_word*)((C_word*)t0)[5])[1];
f_5730(3,t8,t6,t7);}}

/* g272 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3470,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:253: gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6983,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6987,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7038,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:932: ##sys#hash-table-size */
t6=*((C_word*)lf[543]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7004,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:933: ##sys#hash-table-for-each */
t4=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k2536 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3445 in k3442 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:245: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[96]);}

/* k3442 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:244: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6102 in k6091 in doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:726: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6098 in k6091 in doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:726: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5858 in k5840 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5860(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5860,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* c-backend.scm:682: words */
t4=*((C_word*)lf[348]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_plus(&a,2,C_fix(2),t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5889,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5889(t8,((C_word*)t0)[2],C_fix(0),t4);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* c-backend.scm:670: bomb */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[347],t3);}}}

/* ##compiler#gen-list in k2542 in k2539 in k2536 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2590,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2599,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:50: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_make_character(32));}

/* k5865 in k5858 in k5840 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5867,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_plus(&a,2,C_fix(2),t1));}

/* k6963 in k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:922: trampolines */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5326(t3,t2);}

/* k6966 in k6963 in k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:923: procedures */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6204(t3,t2);}

/* k6960 in k6957 in k6954 in k6951 in k6948 in k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:921: generate-foreign-callback-stubs */
t3=*((C_word*)lf[514]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[209]+1),((C_word*)t0)[7]);}

/* k2597 in gen-list in k2542 in k2539 in k2536 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2599,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2604,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2604(t5,((C_word*)t0)[2],t1);}

/* k3149 in for-each-loop182 in k3124 in k3110 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3141(t4,((C_word*)t0)[5],t2,t3);}

/* k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3427(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3427,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_eqp(lf[32],t2);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[2],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t4);
/* c-backend.scm:243: gen */
t7=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t5,C_SCHEME_TRUE,t6,C_make_character(40),((C_word*)t0)[7],lf[97]);}
else{
if(C_truep(((C_word*)t0)[8])){
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3463,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[2],tmp=(C_word)a,a+=15,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:247: lambda-literal-id */
t6=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[12]);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=C_eqp(lf[67],t5);
if(C_truep(t6)){
t7=*((C_word*)lf[135]+1);
if(C_truep(*((C_word*)lf[135]+1))){
t8=t4;
f_3636(t8,C_SCHEME_FALSE);}
else{
t8=*((C_word*)lf[140]+1);
if(C_truep(*((C_word*)lf[140]+1))){
t9=t4;
f_3636(t9,C_SCHEME_FALSE);}
else{
t9=C_u_i_car(((C_word*)t0)[15]);
t10=t4;
f_3636(t10,C_i_not(t9));}}}
else{
t7=t4;
f_3636(t7,C_SCHEME_FALSE);}}}}

/* k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3423(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3423,NULL,2,t0,t1);}
t2=t1;
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3427,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[15])){
if(C_truep(*((C_word*)lf[143]+1))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3828,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:239: slashify */
t6=*((C_word*)lf[146]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[16]);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3835,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:240: uncommentify */
t6=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[16]);}}
else{
t5=t4;
f_3427(2,t5,C_SCHEME_UNDEFINED);}}

/* k10219 in k10216 in k10213 in k10207 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1338: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5840 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5842,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_immp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* c-backend.scm:670: bomb */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[347],t3);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:682: ##sys#bytevector? */
t3=*((C_word*)lf[349]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}}}

/* ##compiler#cleanup in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7040(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_7040,3,t0,t1,t2);}
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_string_length(t2);
t6=t5;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7049,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7049(t10,t1,C_fix(0));}

/* loop in cleanup in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7049(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7049,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:((C_word*)t0)[4]));}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=t3;
t5=C_i_char_lessp(t4,C_make_character(32));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7078,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_7078(t7,t5);}
else{
t7=C_i_char_greaterp(t4,C_make_character(126));
if(C_truep(t7)){
t8=t6;
f_7078(t8,t7);}
else{
if(C_truep(C_i_char_equalp(t4,C_make_character(42)))){
t8=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_lessp(t2,t8))){
t9=C_a_i_plus(&a,2,t2,C_fix(1));
t10=C_i_string_ref(((C_word*)t0)[4],t9);
t11=t6;
f_7078(t11,C_i_char_equalp(C_make_character(47),t10));}
else{
t9=t6;
f_7078(t9,C_SCHEME_FALSE);}}
else{
t8=t6;
f_7078(t8,C_SCHEME_FALSE);}}}}}

/* k6944 in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6946,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#output ...) */,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:916: header */
t4=((C_word*)((C_word*)t0)[11])[1];
f_4630(t4,t3);}

/* k6941 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6229(t2,C_i_zerop(t1));}

/* k10213 in k10207 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1338: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10216 in k10213 in k10207 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10218,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1338: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k3484 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3486,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3494,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:259: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],C_fix(1),C_fix(1));}

/* k5829 in map-loop862 in k5795 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5831,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5802(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5802(t6,((C_word*)t0)[5],t5);}}

/* k2542 in k2539 in k2536 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2544,2,t0,t1);}
t2=C_set_block_item(lf[0] /* ##compiler#output */,0,C_SCHEME_FALSE);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##compiler#gen ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2547,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[4]+1 /* (set! ##compiler#gen-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2590,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11023,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: open-output-string */
t7=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k2539 in k2536 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* ##compiler#gen in k2542 in k2539 in k2536 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2547r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2547r(t0,t1,t2);}}

static void C_ccall f_2547r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2567(t6,t1,t2);}

/* k10240 in k10237 in k10231 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1339: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k10243 in k10240 in k10237 in k10231 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1339: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4383 in k4380 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:424: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4380 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:423: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6253,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* c-backend.scm:762: lambda-literal-rest-argument-mode */
t4=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k3492 in k3484 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3494,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3511,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3511(t7,t3,((C_word*)t0)[2],t1);}

/* k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_6256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6256,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t2,a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
/* c-backend.scm:763: lambda-literal-temporaries */
t4=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in ... */
static void C_ccall f_6259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6259,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm:764: lambda-literal-unboxed-temporaries */
t4=*((C_word*)lf[505]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6250,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_6253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* c-backend.scm:761: lambda-literal-direct */
t4=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k10231 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10233,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10239,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1339: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[835],C_SCHEME_FALSE,t3);}

/* k10237 in k10231 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1339: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10995 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1426: cons* */
t2=*((C_word*)lf[868]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a10998 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10999,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[2],t2);
/* c-backend.scm:1429: encode-literal */
t4=*((C_word*)lf[365]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3469,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_list_2(t2,lf[57]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3486,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3548(t9,t5,((C_word*)t0)[8],t2);}

/* k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[6]);
/* c-backend.scm:250: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[7],t3,C_fix(1));}

/* k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3463,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:249: lambda-literal-temporaries */
t3=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=t2;
f_3590(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3614,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:264: gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[12],C_make_character(61));}}}

/* k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6244,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* c-backend.scm:759: lambda-literal-external */
t4=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6247,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
/* c-backend.scm:760: lambda-literal-looping */
t4=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6241,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[14])){
t4=C_i_cdr(((C_word*)t0)[16]);
/* c-backend.scm:758: intersperse */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_make_character(44));}
else{
/* c-backend.scm:758: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[16],C_make_character(44));}}

/* k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10266,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1343: g2021 */
t3=t2;
f_10270(t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10293,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_length(t3);
t5=t2;
f_10293(t5,C_fixnum_greater_or_equal_p(t4,C_fix(2)));}
else{
t3=t2;
f_10293(t3,C_SCHEME_FALSE);}}}

/* k10983 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1425: string-intersperse */
t2=*((C_word*)lf[225]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[867]);}

/* k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8443(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8443,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1171: str */
t2=((C_word*)t0)[2];
f_8265(t2,((C_word*)t0)[3],lf[692]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[637]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[638]));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[693]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[694]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_8464(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[756]);
if(C_truep(t6)){
t7=t5;
f_8464(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[757]);
t8=t5;
f_8464(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[4],lf[758])));}}}}}

/* k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6238,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t2,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[14])){
t4=C_i_cdr(((C_word*)t0)[16]);
/* c-backend.scm:757: intersperse */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_make_character(44));}
else{
/* c-backend.scm:757: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[16],C_make_character(44));}}

/* k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6235,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t2,tmp=(C_word)a,a+=17,tmp);
/* c-backend.scm:756: make-argument-list */
t4=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[506]);}

/* a7003 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7004,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7008,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7030,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:935: string->c-identifier */
t6=*((C_word*)lf[539]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k7006 in a7003 in k6985 in emit-procedure-table-info in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(lf[266],((C_word*)t0)[2]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[215]+1))){
/* c-backend.scm:938: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[533],*((C_word*)lf[215]+1),lf[534]);}
else{
/* c-backend.scm:939: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],lf[535]);}}
else{
/* c-backend.scm:940: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[536]);}}

/* k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6229(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6229,NULL,2,t0,t1);}
t2=t1;
t3=(C_truep(t2)?C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1)):C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(0)));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t2,a[15]=((C_word*)t0)[13],tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:755: make-variable-list */
t6=*((C_word*)lf[285]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],lf[507]);}

/* k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6226,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6943,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:753: lambda-literal-closure-size */
t5=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t3;
f_6229(t4,C_SCHEME_FALSE);}}

/* k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6223,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:752: lambda-literal-customizable */
t5=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6220,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:751: lambda-literal-rest-argument */
t4=*((C_word*)lf[284]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6217,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:750: lambda-literal-allocated */
t4=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6214,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6217,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:749: real-name */
t4=*((C_word*)lf[508]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[9]);}

/* a6209 in procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6210,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6214,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:748: lambda-literal-argument-count */
t5=*((C_word*)lf[288]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* g2021 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_10270(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10270,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1345: foreign-result-conversion */
t4=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1345: foreign-result-conversion */
t4=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}}

/* k10953 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1418: ##sys#string-append */
t2=*((C_word*)lf[205]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* procedures in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6204,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:746: ##sys#hash-table-for-each */
t3=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[7]);}

/* k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in ... */
static void C_ccall f_7324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1038: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[572]);}

/* k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in ... */
static void C_ccall f_7321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[12]);}

/* k7337 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7339,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7343,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1046: foreign-type-declaration */
t4=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[569]);}

/* k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8464(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8464,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1173: str */
t2=((C_word*)t0)[2];
f_8265(t2,((C_word*)t0)[3],lf[695]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[696]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[697]));
if(C_truep(t3)){
/* c-backend.scm:1174: str */
t4=((C_word*)t0)[2];
f_8265(t4,((C_word*)t0)[3],lf[698]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[699]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[700]));
if(C_truep(t5)){
/* c-backend.scm:1175: str */
t6=((C_word*)t0)[2];
f_8265(t6,((C_word*)t0)[3],lf[701]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[702]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[703]));
if(C_truep(t7)){
/* c-backend.scm:1176: str */
t8=((C_word*)t0)[2];
f_8265(t8,((C_word*)t0)[3],lf[704]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[705]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[706]));
if(C_truep(t9)){
/* c-backend.scm:1177: str */
t10=((C_word*)t0)[2];
f_8265(t10,((C_word*)t0)[3],lf[707]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[708]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[4],lf[709]));
if(C_truep(t11)){
/* c-backend.scm:1178: str */
t12=((C_word*)t0)[2];
f_8265(t12,((C_word*)t0)[3],lf[710]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[711]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[4],lf[712]));
if(C_truep(t13)){
/* c-backend.scm:1179: str */
t14=((C_word*)t0)[2];
f_8265(t14,((C_word*)t0)[3],lf[713]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[714]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[715]));
if(C_truep(t15)){
/* c-backend.scm:1180: str */
t16=((C_word*)t0)[2];
f_8265(t16,((C_word*)t0)[3],lf[716]);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[717]);
t17=(C_truep(t16)?t16:C_eqp(((C_word*)t0)[4],lf[718]));
if(C_truep(t17)){
/* c-backend.scm:1181: str */
t18=((C_word*)t0)[2];
f_8265(t18,((C_word*)t0)[3],lf[719]);}
else{
t18=C_eqp(((C_word*)t0)[4],lf[605]);
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t18)){
t20=t19;
f_8572(t20,t18);}
else{
t20=C_eqp(((C_word*)t0)[4],lf[601]);
if(C_truep(t20)){
t21=t19;
f_8572(t21,t20);}
else{
t21=C_eqp(((C_word*)t0)[4],lf[619]);
if(C_truep(t21)){
t22=t19;
f_8572(t22,t21);}
else{
t22=C_eqp(((C_word*)t0)[4],lf[623]);
t23=t19;
f_8572(t23,(C_truep(t22)?t22:C_eqp(((C_word*)t0)[4],lf[622])));}}}}}}}}}}}}}

/* k7349 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1043: foreign-type-declaration */
t2=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in ... */
static void C_ccall f_7327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1039: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[571]);}

/* k10914 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1408: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[863],t1,lf[864]);}

/* k7341 in k7337 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in ... */
static void C_ccall f_7343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7343,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1047: foreign-argument-conversion */
t4=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k7355 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7357,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7363,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1045: ##sys#write-char-0 */
t6=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(116),t3);}

/* k10901 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10903(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10903,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* ##sys#fixnum->string */
t4=*((C_word*)lf[861]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-24));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-16));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-8));
t9=C_a_i_bitwise_and(&a,2,C_fix(255),t8);
t10=C_make_character(C_unfix(t9));
t11=((C_word*)t0)[3];
t12=C_fixnum_and(C_fix(255),t11);
t13=C_make_character(C_unfix(t12));
t14=C_a_i_string(&a,4,t4,t7,t10,t13);
/* ##sys#string-append */
t15=*((C_word*)lf[205]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,((C_word*)t0)[2],lf[862],t14);}}

/* k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in ... */
static void C_ccall f_7372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7372,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7470,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7470(t7,t3,((C_word*)t0)[11],t1,((C_word*)t0)[2]);}

/* for-each-loop379 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3972(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3972,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3982,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:325: g380 */
t9=((C_word*)t0)[3];
f_3900(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7345 in k7341 in k7337 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in ... */
static void C_ccall f_7347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1042: gen */
t2=*((C_word*)lf[1]+1);
((C_proc11)(void*)(*((C_word*)t2+1)))(11,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],lf[566],((C_word*)t0)[4],C_make_character(41),t1,lf[567],((C_word*)t0)[5],lf[568]);}

/* k3980 in for-each-loop379 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3972(t4,((C_word*)t0)[5],t2,t3);}

/* k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_7315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[12]);}

/* k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[7])){
/* c-backend.scm:1030: gen */
t3=*((C_word*)lf[1]+1);
((C_proc10)(void*)(*((C_word*)t3+1)))(10,t3,t2,C_SCHEME_TRUE,lf[578],((C_word*)t0)[13],lf[579],C_SCHEME_TRUE,lf[580],((C_word*)t0)[13],lf[581]);}
else{
/* c-backend.scm:1032: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[582],((C_word*)t0)[13],C_make_character(40));}}

/* k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in ... */
static void C_ccall f_6295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(((C_word*)t0)[22],lf[255]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t5=t2;
f_6298(t5,t4);}
else{
t4=t2;
f_6298(t4,C_SCHEME_UNDEFINED);}}

/* k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in ... */
static void C_fcall f_6298(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6298,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:796: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[479]);}

/* k9677 in k9600 in k9573 in k9564 in k9555 in k9360 in k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_9679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1307: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[810],t1,lf[811]);}

/* k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in ... */
static void C_ccall f_6292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:794: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[480]);}

/* k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7303,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* c-backend.scm:1023: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7541,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1025: cleanup */
t4=*((C_word*)lf[499]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[14]);}
else{
t3=t2;
f_7309(2,t3,C_SCHEME_UNDEFINED);}}

/* k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7300,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1022: foreign-stub-callback */
t4=*((C_word*)lf[587]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}

/* k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in ... */
static void C_ccall f_6289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* c-backend.scm:793: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[481]);}
else{
t3=t2;
f_6292(2,t3,C_SCHEME_UNDEFINED);}}

/* k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in ... */
static void C_ccall f_6286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[9]);}

/* k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in ... */
static void C_ccall f_7318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[7])){
/* c-backend.scm:1035: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[573],C_SCHEME_TRUE,lf[574],((C_word*)t0)[13],lf[575]);}
else{
/* c-backend.scm:1036: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[576],C_SCHEME_TRUE,lf[577],((C_word*)t0)[13],C_make_character(40));}}

/* k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in ... */
static void C_ccall f_6283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6845,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[14])){
t4=C_i_zerop(((C_word*)t0)[7]);
t5=t3;
f_6845(t5,C_i_not(t4));}
else{
t4=t3;
f_6845(t4,C_SCHEME_FALSE);}}

/* k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in ... */
static void C_ccall f_6280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[13])){
t3=t2;
f_6283(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:788: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[483]);}}

/* k6910 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in ... */
static void C_ccall f_6912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:770: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[497],t1,lf[498],C_SCHEME_TRUE);}

/* k3928 in k3922 in k3914 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:336: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[152]);}

/* k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in ... */
static void C_ccall f_7330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7330,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1048: iota */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in ... */
static void C_ccall f_6274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(lf[266],((C_word*)t0)[10]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6895,a[2]=t2,a[3]=((C_word*)t0)[18],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:779: gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[491]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6873,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:772: gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[496]);}}

/* k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in k7265 in g1214 in generate-foreign-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:1027: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[583],((C_word*)t0)[11],lf[584]);}
else{
t3=t2;
f_7312(2,t3,C_SCHEME_UNDEFINED);}}

/* k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in ... */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:787: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(40));}

/* k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in ... */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6912,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:770: cleanup */
t4=*((C_word*)lf[499]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[24]);}

/* k2800 in k2797 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:99: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in ... */
static void C_ccall f_6354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:885: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[380],((C_word*)t0)[4],lf[381]);}

/* k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in ... */
static void C_ccall f_6357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:887: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[378],((C_word*)t0)[7],lf[379]);}

/* k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in ... */
static void C_ccall f_6351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6412,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6416,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:884: make-argument-list */
t5=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],lf[382]);}

/* k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in ... */
static void C_ccall f_6265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6265,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t2,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[19])){
/* c-backend.scm:768: debugging */
t4=*((C_word*)lf[500]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[501],lf[502],((C_word*)t0)[10]);}
else{
t4=t3;
f_6268(2,t4,C_SCHEME_UNDEFINED);}}

/* k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in k2627 in k2542 in ... */
static void C_ccall f_6262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6262,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t2,a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[215]+1))){
/* c-backend.scm:766: string-append */
t4=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[215]+1),lf[503]);}
else{
t4=t3;
f_6265(2,t4,lf[504]);}}

/* k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in procedures in k2633 in generate-code in ... */
static void C_ccall f_6268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
/* c-backend.scm:769: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* for-each-loop405 in k3922 in k3914 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3935(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3935,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3945,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:334: gen */
t9=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t9+1)))(8,t9,t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[153],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2806 in k2803 in k2800 in k2797 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:101: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_make_character(125),C_SCHEME_TRUE,lf[29]);}

/* k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in ... */
static void C_ccall f_6342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:879: gen */
t3=*((C_word*)lf[1]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[386],C_SCHEME_TRUE,lf[387],C_SCHEME_TRUE,lf[388],((C_word*)t0)[4],lf[389]);}

/* k2803 in k2800 in k2797 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:100: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in ... */
static void C_ccall f_6345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:882: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[384],((C_word*)t0)[4],lf[385]);}

/* k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in ... */
static void C_ccall f_6348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:883: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[7],lf[383]);}

/* k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in ... */
static void C_ccall f_6339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[8],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6422,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:877: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_make_character(44),((C_word*)t0)[8],C_make_character(44));}
else{
t3=t2;
f_6342(2,t3,C_SCHEME_UNDEFINED);}}

/* k3943 in for-each-loop405 in k3922 in k3914 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3935(t4,((C_word*)t0)[5],t2,t3);}

/* k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:875: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[390],((C_word*)t0)[7],lf[391]);}

/* k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_fcall f_6330(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6330,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[9],C_fix(0)))){
/* c-backend.scm:874: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,C_SCHEME_TRUE,lf[392],lf[393],((C_word*)t0)[5],C_make_character(114));}
else{
/* c-backend.scm:874: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,C_SCHEME_TRUE,lf[394],lf[393],((C_word*)t0)[5],C_make_character(114));}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[9],C_fix(0)))){
/* c-backend.scm:897: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,lf[398],lf[399]);}
else{
/* c-backend.scm:897: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,lf[400],lf[399]);}}}
else{
t2=((C_word*)t0)[4];
f_6310(2,t2,C_SCHEME_UNDEFINED);}}

/* k3914 in k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3916,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3924,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:335: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],C_fix(1),C_fix(1));}

/* k6318 in k6308 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6320,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:905: expression */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2649(t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}
else{
/* c-backend.scm:905: expression */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2649(t2,((C_word*)t0)[5],t1,((C_word*)t0)[3],((C_word*)t0)[6]);}}

/* k6311 in k6308 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:911: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k7361 in k7355 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in ... */
static void C_ccall f_7363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1045: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5]);}

/* k6091 in doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6093(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6093,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6100,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6104,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:726: string-like-substring */
f_6138(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k6308 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6320,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:906: lambda-literal-body */
t4=*((C_word*)lf[371]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in ... */
static void C_ccall f_7378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1049: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[565]);}
else{
t3=t2;
f_7381(2,t3,C_SCHEME_UNDEFINED);}}

/* k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_ccall f_6307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t4=C_eqp(lf[266],((C_word*)t0)[10]);
if(C_truep(t4)){
t5=t3;
f_6330(t5,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[14])){
t5=t3;
f_6330(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)((C_word*)t0)[3])[1];
t6=t3;
f_6330(t6,(C_truep(t5)?t5:(C_truep(((C_word*)t0)[15])?((C_word*)t0)[15]:C_i_greaterp(((C_word*)t0)[7],C_fix(0)))));}}}

/* k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in ... */
static void C_ccall f_6304(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=C_eqp(lf[266],((C_word*)t0)[10]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6494,a[2]=((C_word*)t0)[16],a[3]=t2,a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[18],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[19],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:809: fold */
t6=*((C_word*)lf[433]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,C_fix(0),((C_word*)t0)[16]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6564,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[20],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:837: gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_SCHEME_TRUE,lf[447]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6628,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[21],a[6]=t2,a[7]=((C_word*)t0)[22],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
t5=(C_truep(((C_word*)t0)[14])?C_SCHEME_FALSE:C_i_greaterp(((C_word*)t0)[7],C_fix(0)));
if(C_truep(t5)){
if(C_truep(((C_word*)t0)[21])){
/* c-backend.scm:851: gen */
t6=*((C_word*)lf[1]+1);
((C_proc10)(void*)(*((C_word*)t6+1)))(10,t6,t4,C_SCHEME_TRUE,lf[457],C_SCHEME_TRUE,lf[458],C_SCHEME_TRUE,lf[459],((C_word*)t0)[7],lf[460]);}
else{
/* c-backend.scm:854: gen */
t6=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,C_SCHEME_TRUE,lf[461],((C_word*)t0)[7],lf[462]);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6718,a[2]=((C_word*)t0)[21],a[3]=t4,a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[14])){
t7=t6;
f_6718(2,t7,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:856: gen */
t7=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_SCHEME_TRUE,lf[465]);}}}}}

/* k7391 in k7388 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in ... */
static void C_ccall f_7393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1055: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[551],C_SCHEME_TRUE,lf[552]);}
else{
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1057: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[553]);}
else{
/* c-backend.scm:1058: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[554]);}}}

/* k7388 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1053: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,lf[555],C_SCHEME_TRUE);}

/* k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in ... */
static void C_ccall f_6301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* c-backend.scm:798: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[466],((C_word*)t0)[4],C_make_character(59));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[23],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6805,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[21])){
t5=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t6=t4;
f_6805(t6,C_a_i_plus(&a,2,((C_word*)t0)[8],t5));}
else{
t5=t4;
f_6805(t5,((C_word*)t0)[8]);}}}

/* k7364 in k7361 in k7355 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in ... */
static void C_ccall f_7366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1045: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_2857(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2857,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2867,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:111: gen */
t6=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}
else{
t5=C_i_car(t2);
/* c-backend.scm:115: expr */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2652(t6,t1,t5,t3);}}

/* k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in ... */
static void C_ccall f_7381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7390,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1051: gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_SCHEME_TRUE,((C_word*)t0)[3],C_SCHEME_TRUE,lf[556]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7411,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=C_eqp(((C_word*)t0)[6],lf[562]);
if(C_truep(t4)){
/* c-backend.scm:1062: gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,C_SCHEME_TRUE);}
else{
/* c-backend.scm:1061: gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_SCHEME_TRUE,lf[564],((C_word*)t0)[9]);}}}

/* k7382 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1072: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6072,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_6077(t6,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0));}

/* k2871 in k2868 in k2865 in loop in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2873,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t5=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:114: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2857(t6,((C_word*)t0)[6],t3,t4,t5);}

/* k2868 in k2865 in loop in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:113: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(59));}

/* k2865 in loop in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:112: expr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2652(t4,t2,t3,((C_word*)t0)[3]);}

/* gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6062,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=t3;
t5=C_fixnum_divide(t4,C_fix(80));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6072,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:721: modulo */
t8=*((C_word*)lf[368]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t4,C_fix(80));}

/* k6058 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5927(t2,C_i_not(t1));}

/* doloop918 in k6070 in gen-string-constant in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6077(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6077,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t2))){
t4=C_eqp(((C_word*)t0)[2],C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6093,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_6093(t6,t4);}
else{
t6=C_u_i_zerop(((C_word*)t0)[5]);
t7=t5;
f_6093(t7,C_i_not(t6));}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6113,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6128,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6132,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_plus(&a,2,t3,C_fix(80));
/* c-backend.scm:727: string-like-substring */
f_6138(t6,((C_word*)t0)[4],t3,t7);}}

/* k5163 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in ... */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5165,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[255]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:576: gen */
t4=*((C_word*)lf[1]+1);
((C_proc10)(void*)(*((C_word*)t4+1)))(10,t4,t3,C_SCHEME_TRUE,lf[258],((C_word*)t0)[6],lf[259],C_SCHEME_TRUE,lf[260],((C_word*)t0)[6],lf[261]);}}

/* k2809 in k2806 in k2803 in k2800 in k2797 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* c-backend.scm:102: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k2812 in k2809 in k2806 in k2803 in k2800 in k2797 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:103: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k8218 in k8215 in k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1146: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in ... */
static void C_ccall f_5153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_i_zerop(((C_word*)t0)[9]);
t5=t3;
f_5203(t5,C_i_not(t4));}
else{
t4=t3;
f_5203(t4,C_SCHEME_FALSE);}}

/* k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in ... */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=t2;
f_5153(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:567: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[265]);}}

/* k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in ... */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[6]);}

/* expr-args in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4598,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:453: pair-for-each */
t5=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* k8227 in a8224 in k8215 in k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* c-backend.scm:1144: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],C_make_character(44));}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in ... */
static void C_ccall f_5159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5159,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:573: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[262]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:581: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(41));}}

/* a8224 in k8215 in k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8225(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8225,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8229,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8244,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(t3);
t7=C_i_car(t2);
/* c-backend.scm:1143: foreign-type-declaration */
t8=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t6,t7);}

/* k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5101,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:541: lambda-literal-rest-argument */
t4=*((C_word*)lf[284]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5107,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:543: lambda-literal-direct */
t4=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5104,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5107,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:542: lambda-literal-rest-argument-mode */
t4=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* k6395 in doloop1056 in k6367 in k6364 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in ... */
static void C_ccall f_6397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6397,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6387(t4,((C_word*)t0)[5],t2,t3);}

/* doloop1056 in k6367 in k6364 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in ... */
static void C_fcall f_6387(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6387,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6397,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:894: gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,C_SCHEME_TRUE,lf[374],t2,C_make_character(59));}}

/* k2907 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:120: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k6370 in k6367 in k6364 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in ... */
static void C_ccall f_6372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_greaterp(((C_word*)t0)[2],C_fix(0)))){
/* c-backend.scm:895: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[372],((C_word*)t0)[2],lf[373]);}
else{
t2=((C_word*)t0)[3];
f_6310(2,t2,C_SCHEME_UNDEFINED);}}

/* k2913 in k2910 in k2907 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:122: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* k2910 in k2907 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:121: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(59));}

/* k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_eqp(lf[266],((C_word*)t0)[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5256,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[215]+1))){
/* c-backend.scm:562: string-append */
t5=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[215]+1),lf[271]);}
else{
t5=t4;
f_5256(2,t5,lf[272]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5231,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:554: gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[278],((C_word*)t0)[7],lf[279],C_SCHEME_TRUE);}}

/* k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_5147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:566: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(40));}

/* k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in ... */
static void C_ccall f_6363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:889: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[376],((C_word*)t0)[4],lf[377]);}

/* k6367 in k6364 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in ... */
static void C_ccall f_6369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6387,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6387(t7,t2,t3,((C_word*)t0)[5]);}

/* k6364 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in ... */
static void C_ccall f_6366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:890: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[375]);}

/* k6358 in k6355 in k6352 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in ... */
static void C_ccall f_6360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[6]);}

/* k8242 in a8224 in k8215 in k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1143: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5129 in g636 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5138,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5274,a[2]=t5,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5274(t7,t3,t1);}

/* ##compiler#foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8258,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8260,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8265,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=C_eqp(t6,lf[642]);
if(C_truep(t7)){
/* c-backend.scm:1155: str */
t8=t5;
f_8265(t8,t1,lf[676]);}
else{
t8=C_eqp(t6,lf[15]);
t9=(C_truep(t8)?t8:C_eqp(t6,lf[646]));
if(C_truep(t9)){
/* c-backend.scm:1156: str */
t10=t5;
f_8265(t10,t1,lf[677]);}
else{
t10=C_eqp(t6,lf[643]);
t11=(C_truep(t10)?t10:C_eqp(t6,lf[647]));
if(C_truep(t11)){
/* c-backend.scm:1157: str */
t12=t5;
f_8265(t12,t1,lf[678]);}
else{
t12=C_eqp(t6,lf[644]);
t13=(C_truep(t12)?t12:C_eqp(t6,lf[627]));
if(C_truep(t13)){
/* c-backend.scm:1158: str */
t14=t5;
f_8265(t14,t1,lf[679]);}
else{
t14=C_eqp(t6,lf[645]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[628]));
if(C_truep(t15)){
/* c-backend.scm:1159: str */
t16=t5;
f_8265(t16,t1,lf[680]);}
else{
t16=C_eqp(t6,lf[474]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8335,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_8335(t18,t16);}
else{
t18=C_eqp(t6,lf[630]);
t19=t17;
f_8335(t19,(C_truep(t18)?t18:C_eqp(t6,lf[12])));}}}}}}}

/* k8254 in k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1140: gen */
t2=*((C_word*)lf[1]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(32),t1,((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[5],C_make_character(40));}

/* k5175 in k5172 in k5163 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in ... */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5177,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* c-backend.scm:579: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[256],t2,lf[257]);}

/* k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8202,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1136: foreign-callback-stub-return-type */
t4=*((C_word*)lf[667]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k5172 in k5163 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in ... */
static void C_ccall f_5174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[4]);}

/* k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8208,2,t0,t1);}
t2=t1;
t3=C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8214,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1139: make-argument-list */
t5=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,lf[670]);}

/* k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8205,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1137: foreign-callback-stub-argument-types */
t4=*((C_word*)lf[666]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* g636 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5120,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,*((C_word*)lf[252]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:551: lset-adjoin */
t5=*((C_word*)lf[253]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[254]+1),((C_word*)((C_word*)t0)[2])[1],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8215 in k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8225,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:1141: pair-for-each */
t4=*((C_word*)lf[204]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k11042 in k11039 in k11036 in k11033 in k11030 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:56: string->c-identifier */
t2=*((C_word*)lf[539]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8212 in k8206 in k8203 in k8200 in k8197 in generate-foreign-callback-header in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8214,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8217,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8256,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1140: foreign-type-declaration */
t5=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[7],lf[669]);}

/* k11046 in k11033 in k11030 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:57: ##sys#print */
t2=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5705 in doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:667: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[341],C_SCHEME_FALSE,t3);}

/* k11039 in k11036 in k11033 in k11030 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: get-output-string */
t3=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5110,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:544: lambda-literal-allocated */
t4=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* str in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8265(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8265,NULL,3,t0,t1,t2);}
/* c-backend.scm:1153: string-append */
t3=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,lf[675],((C_word*)t0)[2]);}

/* k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:552: lambda-literal-callee-signatures */
t4=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[12]);}

/* k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5116,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:547: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5113,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[6],*((C_word*)lf[252]+1)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5302,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* c-backend.scm:546: lset-adjoin */
t6=*((C_word*)lf[253]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,*((C_word*)lf[254]+1),((C_word*)((C_word*)t0)[2])[1],t5);}
else{
t4=t3;
f_5116(t4,C_SCHEME_UNDEFINED);}}

/* k11050 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:57: ##sys#print */
t2=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* err in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8260(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8260,NULL,2,t0,t1);}
/* c-backend.scm:1152: quit */
t2=*((C_word*)lf[673]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[674],((C_word*)t0)[2]);}

/* k11054 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:57: number->string */
t2=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(16));}

/* k9600 in k9573 in k9564 in k9555 in k9360 in k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9602(C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9602,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[611]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[802]);}
else{
t4=C_eqp(t2,lf[613]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[803]);}
else{
t5=C_eqp(t2,lf[615]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[804]);}
else{
t6=C_eqp(t2,lf[616]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[805]);}
else{
t7=C_eqp(t2,lf[759]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[806]);}
else{
t8=C_eqp(t2,lf[760]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[807]);}
else{
t9=C_eqp(t2,lf[614]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[808]);}
else{
t10=C_eqp(t2,lf[610]);
if(C_truep(t10)){
t11=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1304: foreign-argument-conversion */
t12=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,((C_word*)t0)[3],t11);}
else{
t11=C_eqp(t2,lf[751]);
if(C_truep(t11)){
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[809]);}
else{
t12=C_eqp(t2,lf[608]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9679,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t14=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1307: foreign-type-declaration */
t15=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,lf[812]);}
else{
t13=C_eqp(t2,lf[617]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1310: string-append */
t15=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,((C_word*)t0)[3],lf[813],t14,lf[814]);}
else{
/* c-backend.scm:1311: err */
t14=((C_word*)t0)[4];
f_9307(t14,((C_word*)t0)[3]);}}}}}}}}}}}}
else{
/* c-backend.scm:1312: err */
t2=((C_word*)t0)[4];
f_9307(t2,((C_word*)t0)[3]);}}

/* k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11052,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11056,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: random */
t5=*((C_word*)lf[869]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(16777216));}

/* k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11023,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11029,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:57: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[870],C_SCHEME_FALSE,t3);}

/* k5720 in k5717 in k5714 in k5711 in k5705 in doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:667: gen-lit */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5920(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11036 in k11033 in k11030 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:57: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[4]);}

/* k11033 in k11030 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11048,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:57: current-seconds */
t4=*((C_word*)lf[233]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k7185 in for-each-loop1166 in k7163 in generate-external-variables in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:994: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],t1,C_make_character(59));}

/* k11030 in k11027 in k11021 in k2542 in k2539 in k2536 */
static void C_ccall f_11032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:57: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[4]);}

/* k5639 in k5631 in k5625 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5631 in k5625 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5633(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5633,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:647: lset-adjoin */
t3=*((C_word*)lf[253]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[254]+1),((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5641,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:648: lset-adjoin */
t3=*((C_word*)lf[253]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[254]+1),((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);}}

/* k5635 in k5631 in k5625 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3600 in k3597 in k3594 in k3591 in k3588 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:271: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[102]);}

/* k7157 in a7150 in make-argument-list in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:982: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3615 in k3612 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:266: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3612 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:265: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5619 in k5609 in k5606 in k5603 in k5600 in k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5625 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5627,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_eqp(((C_word*)t0)[7],lf[255]);
t4=t2;
f_5633(t4,C_i_not(t3));}
else{
t3=t2;
f_5633(t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a7150 in make-argument-list in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7151(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7151,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7159,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:982: number->string */
t4=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3663 in k3660 in k3657 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:305: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[105]);}

/* k6020 in k6017 in k6014 in k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:715: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[364]);}

/* k5609 in k5606 in k5603 in k5600 in k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5621,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:643: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_make_character(44));}

/* k3660 in k3657 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:304: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:644: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[328]);}

/* k7141 in a7134 in make-variable-list in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:977: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[545],((C_word*)t0)[3],t1);}

/* ##compiler#make-argument-list in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7145,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7151,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:980: list-tabulate */
t5=*((C_word*)lf[546]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* k5600 in k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:640: restore */
f_5329(t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k5603 in k5600 in k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:641: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(40));}

/* k3670 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:287: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[108],((C_word*)((C_word*)t0)[2])[1],lf[109]);}

/* k5606 in k5603 in k5600 in k5597 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:642: make-argument-list */
t3=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[3])[1],lf[329]);}

/* k6027 in k6017 in k6014 in k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:714: gen-string-constant */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6062(t2,((C_word*)t0)[3],t1);}

/* k5192 in k5189 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in ... */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:584: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k5189 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in ... */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:584: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_make_character(59));}
else{
/* c-backend.scm:583: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[263]);}}

/* ##compiler#generate-external-variables in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7161(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7161,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7165,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:988: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k6017 in k6014 in k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_6019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6029,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:714: encode-literal */
t4=*((C_word*)lf[365]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k7163 in generate-external-variables in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7165,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[57]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7195,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7195(t7,((C_word*)t0)[3],t2);}

/* k6014 in k5931 in k5925 in gen-lit in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_6016(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6016,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:713: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[5],lf[366]);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
/* c-backend.scm:670: bomb */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[347],t3);}}

/* k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3636(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3636,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_i_car(t3);
t5=t4;
t6=C_i_cadr(t3);
t7=t6;
t8=C_i_caddr(t3);
t9=t8;
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t11,a[8]=t9,a[9]=t5,a[10]=t7,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:281: gen */
t13=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t12,C_SCHEME_TRUE,lf[130],((C_word*)t0)[7],lf[131]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3749,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:307: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[8],C_make_character(61));}}

/* k7623 in k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7625,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1094: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[600]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[601]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7637(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t4)){
t5=t3;
f_7637(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[624]);
if(C_truep(t5)){
t6=t3;
f_7637(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[624]);
t7=t3;
f_7637(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[625])));}}}}}

/* k3628 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* c-backend.scm:248: lambda-literal-looping */
t3=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_3463(2,t3,C_SCHEME_FALSE);}}

/* k3680 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:285: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],t1,lf[112]);}

/* k3687 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:286: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[114],t1,lf[115]);}

/* k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7616(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7616,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[599]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7625,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7625(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[626]);
if(C_truep(t4)){
t5=t3;
f_7625(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[611]);
if(C_truep(t5)){
t6=t3;
f_7625(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[627]);
if(C_truep(t6)){
t7=t3;
f_7625(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[628]);
if(C_truep(t7)){
t8=t3;
f_7625(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t8)){
t9=t3;
f_7625(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[630]);
if(C_truep(t9)){
t10=t3;
f_7625(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[631]);
if(C_truep(t10)){
t11=t3;
f_7625(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t11)){
t12=t3;
f_7625(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[633]);
if(C_truep(t12)){
t13=t3;
f_7625(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[613]);
if(C_truep(t13)){
t14=t3;
f_7625(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[634]);
if(C_truep(t14)){
t15=t3;
f_7625(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[635]);
if(C_truep(t15)){
t16=t3;
f_7625(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[636]);
if(C_truep(t16)){
t17=t3;
f_7625(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[637]);
t18=t3;
f_7625(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[638])));}}}}}}}}}}}}}}}}

/* k3694 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3696,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:291: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[116],((C_word*)((C_word*)t0)[2])[1],lf[117]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3713,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadddr(((C_word*)t0)[5]);
/* c-backend.scm:293: ##sys#symbol->qualified-string */
t6=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* ##compiler#foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_9936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9936,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9938,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_eqp(t5,lf[15]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[643]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[816]);}
else{
t8=C_eqp(t5,lf[474]);
t9=(C_truep(t8)?t8:C_eqp(t5,lf[639]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[817]);}
else{
t10=C_eqp(t5,lf[644]);
t11=(C_truep(t10)?t10:C_eqp(t5,lf[645]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[818]);}
else{
t12=C_eqp(t5,lf[640]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[819]);}
else{
t13=C_eqp(t5,lf[641]);
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[820]);}
else{
t14=C_eqp(t5,lf[646]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[821]);}
else{
t15=C_eqp(t5,lf[647]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[822]);}
else{
t16=C_eqp(t5,lf[599]);
t17=(C_truep(t16)?t16:C_eqp(t5,lf[626]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10005,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1327: open-output-string */
t19=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t18=C_eqp(t5,lf[634]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10029,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1328: open-output-string */
t20=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t19);}
else{
t19=C_eqp(t5,lf[605]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10053,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_10053(t21,t19);}
else{
t21=C_eqp(t5,lf[601]);
if(C_truep(t21)){
t22=t20;
f_10053(t22,t21);}
else{
t22=C_eqp(t5,lf[613]);
if(C_truep(t22)){
t23=t20;
f_10053(t23,t22);}
else{
t23=C_eqp(t5,lf[623]);
if(C_truep(t23)){
t24=t20;
f_10053(t24,t23);}
else{
t24=C_eqp(t5,lf[619]);
if(C_truep(t24)){
t25=t20;
f_10053(t25,t24);}
else{
t25=C_eqp(t5,lf[624]);
if(C_truep(t25)){
t26=t20;
f_10053(t26,t25);}
else{
t26=C_eqp(t5,lf[625]);
if(C_truep(t26)){
t27=t20;
f_10053(t27,t26);}
else{
t27=C_eqp(t5,lf[620]);
if(C_truep(t27)){
t28=t20;
f_10053(t28,t27);}
else{
t28=C_eqp(t5,lf[621]);
if(C_truep(t28)){
t29=t20;
f_10053(t29,t28);}
else{
t29=C_eqp(t5,lf[622]);
if(C_truep(t29)){
t30=t20;
f_10053(t30,t29);}
else{
t30=C_eqp(t5,lf[637]);
t31=t20;
f_10053(t31,(C_truep(t30)?t30:C_eqp(t5,lf[638])));}}}}}}}}}}}}}}}}}}}}

/* err in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9938(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9938,NULL,2,t0,t1);}
/* c-backend.scm:1318: quit */
t2=*((C_word*)lf[673]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[815],((C_word*)t0)[2]);}

/* k6414 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in ... */
static void C_ccall f_6416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:884: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* for-each-loop552 in k4697 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4709(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4709,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4719,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:491: gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_SCHEME_TRUE,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5688 in doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5690,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_5680(t5,((C_word*)t0)[5],t2,t4);}

/* k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:428: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4407,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4418,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4418(t7,((C_word*)t0)[6],t2,t3);}

/* k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:429: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[198]);}

/* doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5680(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5680,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5690,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5707,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t6,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:667: open-output-string */
t8=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k4429 in k4426 in doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:435: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k6448 in k6436 in k6433 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in ... */
static void C_ccall f_6450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k5670 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5584(t2,C_i_zerop(t1));}

/* literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5674(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5674,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5680,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5680(t5,t1,C_fix(0),((C_word*)t0)[3]);}

/* k2982 in k2979 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* c-backend.scm:137: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,C_make_character(44),t3,C_make_character(44));}

/* g1458 in k7653 in k7647 in k7635 in k7623 in k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7659,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1102: compute-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7606(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t3=t2;
/* c-backend.scm:1102: compute-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7606(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2979 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:136: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k7653 in k7647 in k7635 in k7623 in k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7655(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7655,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1100: g1458 */
t3=t2;
f_7659(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t2=((C_word*)t0)[6];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[608]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7692,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_7692(t6,t4);}
else{
t6=C_eqp(t3,lf[472]);
if(C_truep(t6)){
t7=t5;
f_7692(t7,t6);}
else{
t7=C_eqp(t3,lf[611]);
if(C_truep(t7)){
t8=t5;
f_7692(t8,t7);}
else{
t8=C_eqp(t3,lf[612]);
if(C_truep(t8)){
t9=t5;
f_7692(t9,t8);}
else{
t9=C_eqp(t3,lf[613]);
if(C_truep(t9)){
t10=t5;
f_7692(t10,t9);}
else{
t10=C_eqp(t3,lf[614]);
if(C_truep(t10)){
t11=t5;
f_7692(t11,t10);}
else{
t11=C_eqp(t3,lf[615]);
if(C_truep(t11)){
t12=t5;
f_7692(t12,t11);}
else{
t12=C_eqp(t3,lf[616]);
t13=t5;
f_7692(t13,(C_truep(t12)?t12:C_eqp(t3,lf[617])));}}}}}}}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}}

/* k4426 in doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:434: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k2985 in k2982 in k2979 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:138: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3657 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:303: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[106],((C_word*)t0)[6],C_make_character(44),((C_word*)((C_word*)t0)[7])[1],C_make_character(44));}

/* k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[107]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3682,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:285: number->string */
t5=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:286: number->string */
t5=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}}
else{
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:289: number->string */
t5=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}
else{
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3735,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:297: number->string */
t5=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3746,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:301: number->string */
t5=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}}}}

/* k4717 in for-each-loop552 in k4697 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4709(t3,((C_word*)t0)[4],t2);}

/* k5659 in k5591 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in a5567 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_greaterp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_5627(2,t3,t2);}
else{
/* c-backend.scm:645: lambda-literal-external */
t3=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7647 in k7635 in k7623 in k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7649,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1098: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[606],((C_word*)t0)[4],lf[607]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7655,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* c-backend.scm:1100: ##sys#hash-table-ref */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[618]+1),((C_word*)t0)[6]);}
else{
t3=t2;
f_7655(2,t3,C_SCHEME_FALSE);}}}

/* k2988 in k2985 in k2982 in k2979 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:139: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2963 in k2960 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:132: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[40]);}

/* k4442 in k4439 in doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:438: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(58));}

/* k4439 in doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:437: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2652(t4,t2,t3,((C_word*)t0)[7]);}

/* k2960 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:131: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k7635 in k7623 in k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7637,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1096: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[602],((C_word*)t0)[4],lf[603],((C_word*)t0)[4],lf[604]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[605]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7649(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[619]);
if(C_truep(t4)){
t5=t3;
f_7649(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[620]);
if(C_truep(t5)){
t6=t3;
f_7649(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[621]);
t7=t3;
f_7649(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[622])));}}}}}

/* k4445 in k4442 in k4439 in doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:439: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2652(t4,t2,t3,((C_word*)t0)[7]);}

/* k5791 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:678: + */
C_plus(5,0,((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3],t1);}

/* k5795 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5802(t6,t2,t1);}

/* k6420 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in ... */
static void C_ccall f_6422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k6436 in k6433 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in ... */
static void C_ccall f_6438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6450,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:902: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
/* c-backend.scm:904: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],lf[395]);}}

/* k6433 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:899: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],lf[396]);}
else{
/* c-backend.scm:900: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],lf[397],((C_word*)t0)[6]);}}

/* k7690 in k7653 in k7647 in k7635 in k7623 in k7614 in compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7692(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:1107: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[609]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[610]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:1108: compute-size */
t4=((C_word*)((C_word*)t0)[6])[1];
f_7606(5,t4,((C_word*)t0)[2],t3,((C_word*)t0)[7],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}}

/* k6410 in k6349 in k6346 in k6343 in k6340 in k6337 in k6334 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in ... */
static void C_ccall f_6412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4418(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4418,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4428,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:433: gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_SCHEME_TRUE,lf[196]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4441,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:436: gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_SCHEME_TRUE,lf[197]);}}

/* k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(*((C_word*)lf[427]+1))){
/* c-backend.scm:815: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[428]);}
else{
t3=t2;
f_6501(2,t3,C_SCHEME_UNDEFINED);}}

/* k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6494,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6498,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:811: gen */
t6=*((C_word*)lf[1]+1);
((C_proc10)(void*)(*((C_word*)t6+1)))(10,t6,t5,C_SCHEME_TRUE,lf[429],C_SCHEME_TRUE,lf[430],C_SCHEME_TRUE,lf[431],((C_word*)t0)[6],lf[432]);}

/* k4486 in k4483 in k4480 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:445: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k4483 in k4480 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:444: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[201]);}

/* k4480 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:443: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k2933 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:126: expr */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2652(t4,t2,t3,((C_word*)t0)[6]);}

/* k2936 in k2933 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2938,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:127: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[37],t3,C_make_character(93));}

/* k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8335(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8335,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1160: str */
t2=((C_word*)t0)[2];
f_8265(t2,((C_word*)t0)[3],lf[681]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[633]);
if(C_truep(t2)){
/* c-backend.scm:1161: str */
t3=((C_word*)t0)[2];
f_8265(t3,((C_word*)t0)[3],lf[682]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[639]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t4)){
/* c-backend.scm:1162: str */
t5=((C_word*)t0)[2];
f_8265(t5,((C_word*)t0)[3],lf[683]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[636]);
if(C_truep(t5)){
/* c-backend.scm:1163: str */
t6=((C_word*)t0)[2];
f_8265(t6,((C_word*)t0)[3],lf[684]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[635]);
if(C_truep(t6)){
/* c-backend.scm:1164: str */
t7=((C_word*)t0)[2];
f_8265(t7,((C_word*)t0)[3],lf[685]);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[640]);
if(C_truep(t7)){
/* c-backend.scm:1165: str */
t8=((C_word*)t0)[2];
f_8265(t8,((C_word*)t0)[3],lf[686]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t8)){
/* c-backend.scm:1166: str */
t9=((C_word*)t0)[2];
f_8265(t9,((C_word*)t0)[3],lf[687]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[641]);
if(C_truep(t9)){
/* c-backend.scm:1167: str */
t10=((C_word*)t0)[2];
f_8265(t10,((C_word*)t0)[3],lf[688]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t10)){
/* c-backend.scm:1168: str */
t11=((C_word*)t0)[2];
f_8265(t11,((C_word*)t0)[3],lf[689]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[599]);
if(C_truep(t11)){
/* c-backend.scm:1169: str */
t12=((C_word*)t0)[2];
f_8265(t12,((C_word*)t0)[3],lf[690]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[626]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[4],lf[634]));
if(C_truep(t13)){
/* c-backend.scm:1170: str */
t14=((C_word*)t0)[2];
f_8265(t14,((C_word*)t0)[3],lf[691]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[611]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_8443(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[613]);
if(C_truep(t16)){
t17=t15;
f_8443(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[759]);
t18=t15;
f_8443(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[760])));}}}}}}}}}}}}}}

/* k5770 in k5766 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:677: + */
C_plus(5,0,((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3],t1);}

/* k4080 in k4062 in k4059 in k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:359: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_4067(2,t3,t2);}}

/* k6439 in k6436 in k6433 in k6328 in k6305 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in ... */
static void C_ccall f_6441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:904: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[395]);}

/* k4448 in k4445 in k4442 in k4439 in doloop475 in k4405 in k4402 in k4399 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4450,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_i_cddr(((C_word*)t0)[3]);
t4=((C_word*)((C_word*)t0)[4])[1];
f_4418(t4,((C_word*)t0)[5],t2,t3);}

/* k4068 in k4065 in k4062 in k4059 in k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:361: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3833 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:240: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[147],t1,lf[148]);}

/* k5711 in k5705 in doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:667: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k5717 in k5714 in k5711 in k5705 in doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:667: get-output-string */
t3=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5714 in k5711 in k5705 in doloop835 in literal-frame in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:667: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[6]);}

/* k3840 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3423(t2,C_i_zerop(t1));}

/* k3844 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:235: lambda-literal-closure-size */
t2=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* a7134 in make-variable-list in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7135(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7135,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7143,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:977: number->string */
t4=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* ##compiler#make-variable-list in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7129,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7135,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:975: list-tabulate */
t5=*((C_word*)lf[546]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* k4092 in k4059 in k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_not(((C_word*)t0)[2]);
if(C_truep(t2)){
if(C_truep(t2)){
/* c-backend.scm:356: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_4064(2,t4,t3);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
/* c-backend.scm:356: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_4064(2,t4,t3);}}}

/* k6511 in k6508 in k6505 in k6502 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in ... */
static void C_ccall f_6513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6513,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_6307(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6522,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:833: gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_SCHEME_TRUE,lf[403],((C_word*)t0)[2],lf[404]);}}

/* k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5737,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
t2=*((C_word*)lf[343]+1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[343]+1));}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(10));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* c-backend.scm:677: literal-size */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5730(3,t5,t2,t4);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_block_size(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5793,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)((C_word*)t0)[4])[1];
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5797,a[2]=t5,a[3]=t9,a[4]=t7,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:678: vector->list */
t12=*((C_word*)lf[346]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:679: block-variable-literal? */
t3=*((C_word*)lf[350]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}}}}}}

/* literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5730(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5730,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5737,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:673: immediate? */
t4=*((C_word*)lf[351]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6508 in k6505 in k6502 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in ... */
static void C_ccall f_6510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:831: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[405],((C_word*)t0)[5],lf[406]);}

/* k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7604,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7606,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1112: fold */
t7=*((C_word*)lf[433]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,((C_word*)t4)[1],lf[664],((C_word*)t0)[6],t2);}

/* compute-size in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_7606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7606,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=C_eqp(t5,lf[15]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7616,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_7616(t8,t6);}
else{
t8=C_eqp(t5,lf[474]);
if(C_truep(t8)){
t9=t7;
f_7616(t9,t8);}
else{
t9=C_eqp(t5,lf[639]);
if(C_truep(t9)){
t10=t7;
f_7616(t10,t9);}
else{
t10=C_eqp(t5,lf[640]);
if(C_truep(t10)){
t11=t7;
f_7616(t11,t10);}
else{
t11=C_eqp(t5,lf[12]);
if(C_truep(t11)){
t12=t7;
f_7616(t12,t11);}
else{
t12=C_eqp(t5,lf[562]);
if(C_truep(t12)){
t13=t7;
f_7616(t13,t12);}
else{
t13=C_eqp(t5,lf[641]);
if(C_truep(t13)){
t14=t7;
f_7616(t14,t13);}
else{
t14=C_eqp(t5,lf[642]);
if(C_truep(t14)){
t15=t7;
f_7616(t15,t14);}
else{
t15=C_eqp(t5,lf[643]);
if(C_truep(t15)){
t16=t7;
f_7616(t16,t15);}
else{
t16=C_eqp(t5,lf[644]);
if(C_truep(t16)){
t17=t7;
f_7616(t17,t16);}
else{
t17=C_eqp(t5,lf[645]);
if(C_truep(t17)){
t18=t7;
f_7616(t18,t17);}
else{
t18=C_eqp(t5,lf[646]);
t19=t7;
f_7616(t19,(C_truep(t18)?t18:C_eqp(t5,lf[647])));}}}}}}}}}}}}

/* k4495 in k4492 in k4489 in k4486 in k4483 in k4480 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:448: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3826 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:239: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[144],t1,lf[145]);}

/* k4489 in k4486 in k4483 in k4480 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:446: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_make_character(58));}

/* k6505 in k6502 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in ... */
static void C_ccall f_6507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:827: gen */
t3=*((C_word*)lf[1]+1);
((C_proc14)(void*)(*((C_word*)t3+1)))(14,t3,t2,C_SCHEME_TRUE,lf[407],((C_word*)t0)[6],lf[408],C_SCHEME_TRUE,lf[409],C_SCHEME_TRUE,lf[410],((C_word*)t0)[6],lf[411],C_SCHEME_TRUE,lf[412]);}

/* k4492 in k4489 in k4486 in k4483 in k4480 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* c-backend.scm:447: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k6502 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in ... */
static void C_ccall f_6504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:822: gen */
t3=*((C_word*)lf[1]+1);
((C_proc16)(void*)(*((C_word*)t3+1)))(16,t3,t2,C_SCHEME_TRUE,lf[413],((C_word*)t0)[5],lf[414],C_SCHEME_TRUE,lf[415],((C_word*)t0)[5],lf[416],C_SCHEME_TRUE,lf[417],C_SCHEME_TRUE,lf[418],C_SCHEME_TRUE,lf[419]);}

/* k5766 in k5735 in literal-size in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5768,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5772,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* c-backend.scm:677: literal-size */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5730(3,t6,t3,t5);}

/* k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(*((C_word*)lf[215]+1))){
t3=t2;
f_6504(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6536,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[423]+1))){
/* c-backend.scm:818: gen */
t4=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,C_SCHEME_TRUE,lf[424],*((C_word*)lf[423]+1),lf[425],C_SCHEME_TRUE,lf[426]);}
else{
t4=t3;
f_6536(2,t4,C_SCHEME_UNDEFINED);}}}

/* k6571 in k6568 in k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in ... */
static void C_ccall f_6573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:843: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[442],((C_word*)t0)[4],lf[443]);}

/* k6574 in k6571 in k6568 in k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in ... */
static void C_ccall f_6576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6591,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=*((C_word*)lf[135]+1);
if(C_truep(*((C_word*)lf[135]+1))){
t5=t3;
f_6591(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[441]+1);
if(C_truep(*((C_word*)lf[441]+1))){
t6=t3;
f_6591(t6,C_SCHEME_FALSE);}
else{
t6=C_i_greaterp(((C_word*)t0)[4],C_fix(2));
t7=t3;
f_6591(t7,(C_truep(t6)?C_i_not(((C_word*)t0)[5]):C_SCHEME_FALSE));}}}

/* k6577 in k6574 in k6571 in k6568 in k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in ... */
static void C_ccall f_6579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[436]+1))){
/* c-backend.scm:846: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[437]);}
else{
/* c-backend.scm:847: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[434],((C_word*)t0)[3],lf[435]);}}

/* k6568 in k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t3=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:841: gen */
t4=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_make_character(116),t3);}
else{
/* c-backend.scm:842: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[444]);}}

/* k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_ccall f_6564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:838: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[446]);}

/* k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:839: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[445]);}

/* k6534 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in ... */
static void C_ccall f_6536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(*((C_word*)lf[420]+1))){
/* c-backend.scm:821: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[421],*((C_word*)lf[420]+1),lf[422]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6504(2,t3,t2);}}

/* k4018 in k4015 in k4012 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:341: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4737 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:485: gen-list */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[217]+1));}

/* k3055 in k3052 in k3049 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:152: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3052 in k3049 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3054,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:151: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[49]);}

/* k6523 in k6520 in k6511 in k6508 in k6505 in k6502 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in ... */
static void C_ccall f_6525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:835: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[401],((C_word*)t0)[3],lf[402]);}

/* k3049 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:150: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k4012 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:340: expr-args */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4598(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* c-backend.scm:339: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[154]);}}

/* k4764 in k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:472: gen */
t2=*((C_word*)lf[1]+1);
((C_proc21)(void*)(*((C_word*)t2+1)))(21,t2,((C_word*)t0)[2],lf[220],((C_word*)t0)[3],lf[221],C_SCHEME_TRUE,lf[222],C_SCHEME_TRUE,lf[223],((C_word*)t0)[4],C_make_character(45),((C_word*)t0)[5],C_make_character(45),((C_word*)t0)[6],C_make_character(32),((C_word*)t0)[7],C_make_character(58),((C_word*)t0)[8],C_SCHEME_TRUE,t1,lf[224]);}

/* k4015 in k4012 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:340: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6520 in k6511 in k6508 in k6505 in k6502 in k6499 in k6496 in k6492 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in ... */
static void C_ccall f_6522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:834: literal-frame */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5674(t3,t2);}

/* k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4775,a[2]=t3,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4817,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:477: chicken-version */
t10=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_SCHEME_TRUE);}

/* k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[7]);
/* c-backend.scm:326: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[5],t3,C_fix(1));}

/* k3897 in k3894 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3899,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_list_2(t2,lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3916,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3972,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3972(t9,t5,((C_word*)t0)[6],t2);}

/* k3058 in k3055 in k3052 in k3049 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:153: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k6589 in k6574 in k6571 in k6568 in k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in ... */
static void C_fcall f_6591(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:845: gen */
t2=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[438],((C_word*)t0)[3],lf[439],((C_word*)t0)[3],lf[440]);}
else{
t2=((C_word*)t0)[2];
f_6579(2,t2,C_SCHEME_UNDEFINED);}}

/* k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4754,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:474: pad0 */
f_4633(t3,((C_word*)t0)[8]);}

/* k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4750,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:474: pad0 */
f_4633(t3,((C_word*)t0)[8]);}

/* k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4758,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:474: pad0 */
f_4633(t3,((C_word*)t0)[8]);}

/* k3313 in k3292 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:204: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6580 in k6577 in k6574 in k6571 in k6568 in k6565 in k6562 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in ... */
static void C_ccall f_6582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:847: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[434],((C_word*)t0)[3],lf[435]);}

/* k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=C_i_zerop(t1);
t3=t2;
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3896,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:325: lambda-literal-temporaries */
t5=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:338: gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[11],C_make_character(40));}}

/* map-loop514 in k4773 in k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4780,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4809,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:476: g537 */
t5=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[227],t4,lf[228]);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3309 in k3292 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:204: gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[79],t1,lf[80]);}

/* k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8819(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8819,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1222: ->string */
t4=*((C_word*)lf[734]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8836(t5,C_eqp(lf[617],t4));}
else{
t4=t2;
f_8836(t4,C_SCHEME_FALSE);}}}

/* k4059 in k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4094,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:355: gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[156],((C_word*)t0)[10],C_make_character(41));}
else{
t3=t2;
f_4064(2,t3,C_SCHEME_UNDEFINED);}}

/* k4062 in k4059 in k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;
f_4067(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:358: expr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2652(t4,t3,((C_word*)t0)[8],((C_word*)t0)[5]);}}

/* k4065 in k4062 in k4059 in k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm:360: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4598(t3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
/* c-backend.scm:361: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_make_character(41));}}

/* k4773 in k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4780(t6,t2,t1);}

/* k4776 in k4773 in k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:475: string-intersperse */
t2=*((C_word*)lf[225]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[226]);}

/* k8824 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1222: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[739],((C_word*)t0)[3]);}

/* k6556 in a6549 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6558,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* a6549 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_ccall f_6550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6550,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6558,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:809: literal-size */
t5=((C_word*)((C_word*)t0)[2])[1];
f_5730(3,t5,t4,t2);}

/* k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8802(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8802,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1220: ->string */
t4=*((C_word*)lf[734]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8819(t5,C_u_i_memq(t4,lf[750]));}
else{
t4=t2;
f_8819(t4,C_SCHEME_FALSE);}}}

/* k3298 in k3295 in k3292 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:206: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k8807 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1220: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[737],t1,lf[738],((C_word*)t0)[3]);}

/* k3354 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:213: gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[87],((C_word*)t0)[3],lf[88],t1,lf[89]);}

/* k3087 in k3084 in k3081 in k3078 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:160: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3084 in k3081 in k3078 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:159: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3081 in k3078 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:158: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k3078 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:157: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3364 in k3361 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:221: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3361 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:220: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3358 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:214: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8836(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8836,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1224: ->string */
t4=*((C_word*)lf[734]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8853,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[6],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8853(t4,C_eqp(lf[614],t3));}
else{
t3=t2;
f_8853(t3,C_SCHEME_FALSE);}}}

/* doloop602 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4937(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4937,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4947,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_string_ref(((C_word*)t0)[4],t2);
t5=C_fix(C_character_code(t4));
/* c-backend.scm:526: gen */
t6=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,C_make_character(44),t5);}}

/* k3343 in k3340 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:216: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k10499 in k10496 in k10490 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1362: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8572(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8572,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1183: str */
t2=((C_word*)t0)[2];
f_8265(t2,((C_word*)t0)[3],lf[720]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[620]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_8584(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t4)){
t5=t3;
f_8584(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[624]);
t6=t3;
f_8584(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[625])));}}}}

/* k10502 in k10499 in k10496 in k10490 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1362: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3340 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:215: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k8841 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1224: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[740],((C_word*)t0)[3]);}

/* f11835 in k4012 in k4028 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f11835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:341: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k8892 in k8870 in k8851 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in ... */
static void C_ccall f_8894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1233: string-intersperse */
t2=*((C_word*)lf[225]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[745]);}

/* k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8584,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1185: str */
t2=((C_word*)t0)[2];
f_8265(t2,((C_word*)t0)[3],lf[721]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[562]);
if(C_truep(t2)){
/* c-backend.scm:1186: str */
t3=((C_word*)t0)[2];
f_8265(t3,((C_word*)t0)[3],lf[722]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8599,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* c-backend.scm:1188: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[618]+1),((C_word*)t0)[6]);}
else{
t4=t3;
f_8599(2,t4,C_SCHEME_FALSE);}}}}

/* map-loop1715 in k8870 in k8851 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in ... */
static void C_fcall f_8896(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8896,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8925,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(lf[746],t4);
if(C_truep(t5)){
t6=t3;
f_8925(2,t6,lf[747]);}
else{
/* c-backend.scm:1237: foreign-type-declaration */
t6=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,lf[748]);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8115,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8115(t6,t2,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1119: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[655]);}

/* k3015 in k3012 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[6]);
t4=C_a_i_plus(&a,2,t3,C_fix(1));
/* c-backend.scm:144: gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[45],t4,lf[46]);}

/* k3012 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:143: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3375 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:218: gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[90],((C_word*)t0)[3],lf[91],t1,lf[92]);}

/* k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8599,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1188: g1654 */
t3=t2;
f_8603(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
/* c-backend.scm:1191: str */
t2=((C_word*)t0)[5];
f_8265(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8642,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=C_eqp(C_fix(2),t3);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[4]);
t7=t4;
f_8642(t7,C_u_i_memq(t6,lf[755]));}
else{
t6=t4;
f_8642(t6,C_SCHEME_FALSE);}}
else{
/* c-backend.scm:1242: err */
t2=((C_word*)t0)[6];
f_8260(t2,((C_word*)t0)[3]);}}}}

/* k8870 in k8851 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8872(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8872,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8876,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[5],lf[727]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8894,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8896,a[2]=t7,a[3]=t11,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8896(t13,t9,((C_word*)t0)[5]);}

/* k8874 in k8870 in k8851 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in ... */
static void C_ccall f_8876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1229: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[742],((C_word*)t0)[5],lf[743],t1,lf[744]);}

/* k8080 in for-each-loop1494 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1122: gen */
t2=*((C_word*)lf[1]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[651],t1,((C_word*)t0)[3],lf[652],C_SCHEME_TRUE,lf[653]);}

/* k8083 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[562],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;
f_8088(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8113,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1127: foreign-argument-conversion */
t5=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k3021 in k3018 in k3015 in k3012 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:146: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k8086 in k8083 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1128: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[649],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[5],C_make_character(41));}

/* f11827 in k3594 in k3591 in k3588 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f11827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:271: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[102]);}

/* k3018 in k3015 in k3012 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:145: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3379 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:219: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8058,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1113: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8164,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1115: cleanup */
t4=*((C_word*)lf[499]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}
else{
t3=t2;
f_8064(2,t3,C_SCHEME_UNDEFINED);}}

/* k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1116: generate-foreign-callback-header */
t3=*((C_word*)lf[549]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[661],((C_word*)t0)[9]);}

/* k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_string_equal_p(lf[656],((C_word*)t0)[8]))){
/* c-backend.scm:1117: gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,C_make_character(123),C_SCHEME_TRUE,lf[657],((C_word*)t0)[8],lf[658],lf[659]);}
else{
/* c-backend.scm:1117: gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,C_make_character(123),C_SCHEME_TRUE,lf[657],((C_word*)t0)[8],lf[658],lf[660]);}}

/* k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:623: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[298]);}

/* k5405 in k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:625: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[295]);}

/* k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5418,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:624: make-argument-list */
t6=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,lf[297]);}

/* k5282 in for-each-loop635 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_5284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5274(t3,((C_word*)t0)[4],t2);}

/* k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:660: emitter */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5365(t3,t2,C_SCHEME_FALSE);}

/* ##compiler#foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_9305(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9305,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9307,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=C_eqp(t4,lf[642]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[762]);}
else{
t6=C_eqp(t4,lf[15]);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[643]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[763]);}
else{
t8=C_eqp(t4,lf[646]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9335,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_9335(t10,t8);}
else{
t10=C_eqp(t4,lf[474]);
if(C_truep(t10)){
t11=t9;
f_9335(t11,t10);}
else{
t11=C_eqp(t4,lf[639]);
if(C_truep(t11)){
t12=t9;
f_9335(t12,t11);}
else{
t12=C_eqp(t4,lf[644]);
if(C_truep(t12)){
t13=t9;
f_9335(t13,t12);}
else{
t13=C_eqp(t4,lf[645]);
t14=t9;
f_9335(t14,(C_truep(t13)?t13:C_eqp(t4,lf[647])));}}}}}}}

/* k5471 in k5457 in k5454 in k5451 in k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:657: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k8089 in k8086 in k8083 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(lf[562],((C_word*)t0)[3]);
if(C_truep(t3)){
/* c-backend.scm:1130: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],lf[648]);}
else{
/* c-backend.scm:1129: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,C_make_character(41));}}

/* k8092 in k8089 in k8086 in k8083 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1130: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[648]);}

/* err in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9307(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9307,NULL,2,t0,t1);}
/* c-backend.scm:1248: quit */
t2=*((C_word*)lf[673]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[761],((C_word*)t0)[2]);}

/* k5460 in k5457 in k5454 in k5451 in k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:658: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[317]);}

/* k5467 in k5457 in k5454 in k5451 in k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k7412 in k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in ... */
static void C_ccall f_7414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7448,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7452,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1064: make-argument-list */
t5=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[6],lf[563]);}

/* k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:654: gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,C_SCHEME_TRUE,lf[320],((C_word*)t0)[3],lf[321],((C_word*)t0)[3],lf[322]);}

/* k10132 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10134,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10140,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1335: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[830],C_SCHEME_FALSE,t3);}

/* k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1063: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],C_make_character(40));}

/* k5457 in k5454 in k5451 in k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5469,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5473,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:657: make-argument-list */
t5=*((C_word*)lf[296]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],lf[318]);}

/* k5454 in k5451 in k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:656: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[319],((C_word*)t0)[3],C_make_character(44));}

/* k5451 in k5448 in g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:655: restore */
f_5329(t2,((C_word*)t0)[3]);}

/* k7415 in k7412 in k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in ... */
static void C_ccall f_7417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[5],lf[562]);
if(C_truep(t3)){
t4=t2;
f_7420(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:1065: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,C_make_character(41));}}

/* k9360 in k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9362(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9362,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[768]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[630]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[631]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[769]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[636]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[770]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[633]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[771]);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[635]);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[772]);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[629]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[773]);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[627]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[3],lf[628]));
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[774]);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[759]);
if(C_truep(t10)){
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[775]);}
else{
t11=C_eqp(((C_word*)t0)[3],lf[760]);
if(C_truep(t11)){
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[776]);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[611]);
if(C_truep(t12)){
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[777]);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[613]);
if(C_truep(t13)){
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[778]);}
else{
t14=C_eqp(((C_word*)t0)[3],lf[694]);
if(C_truep(t14)){
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[779]);}
else{
t15=C_eqp(((C_word*)t0)[3],lf[756]);
if(C_truep(t15)){
t16=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[780]);}
else{
t16=C_eqp(((C_word*)t0)[3],lf[757]);
if(C_truep(t16)){
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[781]);}
else{
t17=C_eqp(((C_word*)t0)[3],lf[758]);
if(C_truep(t17)){
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[782]);}
else{
t18=C_eqp(((C_word*)t0)[3],lf[696]);
if(C_truep(t18)){
t19=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[783]);}
else{
t19=C_eqp(((C_word*)t0)[3],lf[697]);
if(C_truep(t19)){
t20=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[784]);}
else{
t20=C_eqp(((C_word*)t0)[3],lf[702]);
if(C_truep(t20)){
t21=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,lf[785]);}
else{
t21=C_eqp(((C_word*)t0)[3],lf[703]);
if(C_truep(t21)){
t22=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[786]);}
else{
t22=C_eqp(((C_word*)t0)[3],lf[699]);
if(C_truep(t22)){
t23=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[787]);}
else{
t23=C_eqp(((C_word*)t0)[3],lf[700]);
if(C_truep(t23)){
t24=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[788]);}
else{
t24=C_eqp(((C_word*)t0)[3],lf[705]);
if(C_truep(t24)){
t25=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,lf[789]);}
else{
t25=C_eqp(((C_word*)t0)[3],lf[706]);
if(C_truep(t25)){
t26=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[790]);}
else{
t26=C_eqp(((C_word*)t0)[3],lf[708]);
if(C_truep(t26)){
t27=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t27+1)))(2,t27,lf[791]);}
else{
t27=C_eqp(((C_word*)t0)[3],lf[709]);
if(C_truep(t27)){
t28=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[792]);}
else{
t28=C_eqp(((C_word*)t0)[3],lf[711]);
if(C_truep(t28)){
t29=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,lf[793]);}
else{
t29=C_eqp(((C_word*)t0)[3],lf[712]);
if(C_truep(t29)){
t30=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,lf[794]);}
else{
t30=C_eqp(((C_word*)t0)[3],lf[714]);
if(C_truep(t30)){
t31=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t31+1)))(2,t31,lf[795]);}
else{
t31=C_eqp(((C_word*)t0)[3],lf[715]);
if(C_truep(t31)){
t32=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,lf[796]);}
else{
t32=C_eqp(((C_word*)t0)[3],lf[717]);
if(C_truep(t32)){
t33=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t33+1)))(2,t33,lf[797]);}
else{
t33=C_eqp(((C_word*)t0)[3],lf[718]);
if(C_truep(t33)){
t34=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t34+1)))(2,t34,lf[798]);}
else{
t34=C_eqp(((C_word*)t0)[3],lf[601]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_9557(t36,t34);}
else{
t36=C_eqp(((C_word*)t0)[3],lf[623]);
if(C_truep(t36)){
t37=t35;
f_9557(t37,t36);}
else{
t37=C_eqp(((C_word*)t0)[3],lf[624]);
t38=t35;
f_9557(t38,(C_truep(t37)?t37:C_eqp(((C_word*)t0)[3],lf[625])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in k7268 in ... */
static void C_fcall f_7470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7470,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7477,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_7477(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_7477(t6,C_SCHEME_FALSE);}}

/* for-each-loop635 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5274(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5274,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5284,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:548: g636 */
t5=((C_word*)t0)[3];
f_5120(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in k7271 in ... */
static void C_fcall f_7477(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7477,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(0));
t4=C_slot(((C_word*)t0)[3],C_fix(0));
t5=C_slot(((C_word*)t0)[4],C_fix(0));
t6=t2;
t7=t3;
t8=t4;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7339,a[2]=t6,a[3]=t8,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7351,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* c-backend.scm:1045: symbol->string */
t11=*((C_word*)lf[570]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t5);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7357,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1045: open-output-string */
t12=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3295 in k3292 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:205: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3292 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3315,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:204: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}

/* k8851 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8853(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8853,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=t3;
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[741]:C_i_car(t8));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8872,a[2]=((C_word*)t0)[3],a[3]=t11,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1230: foreign-type-declaration */
t13=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,t2,lf[749]);}
else{
/* c-backend.scm:1241: err */
t2=((C_word*)t0)[5];
f_8260(t2,((C_word*)t0)[3]);}}

/* for-each-loop580 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4990(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4990,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5000,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:508: gen */
t5=*((C_word*)lf[1]+1);
((C_proc10)(void*)(*((C_word*)t5+1)))(10,t5,t3,C_SCHEME_TRUE,lf[242],t4,lf[243],C_SCHEME_TRUE,lf[244],t4,lf[245]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5412 in k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5416 in k5402 in k5399 in k5396 in k5393 in k5390 in k5387 in k5384 in k5381 in k5378 in k5375 in k5372 in k5369 */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:624: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k5254 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5259,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:563: gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[269],t2,lf[270],C_SCHEME_TRUE);}

/* k5257 in k5254 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in ... */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:564: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[268]);}

/* k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5482(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5482,2,t0,t1);}
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_check_list_2(t3,lf[57]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5522,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5522(t9,t5,t3);}

/* k5486 in k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:661: emitter */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5365(t3,t2,C_SCHEME_TRUE);}

/* k9333 in foreign-argument-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_9335(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9335,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[764]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[640]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[765]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[641]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[766]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[632]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[767]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[626]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_9362(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[634]);
t8=t6;
f_9362(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[599])));}}}}}}

/* k5201 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in ... */
static void C_fcall f_5203(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5203,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:569: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[264]);}
else{
t2=((C_word*)t0)[3];
f_5156(2,t2,C_SCHEME_UNDEFINED);}}

/* k5204 in k5201 in k5151 in k5148 in k5145 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in ... */
static void C_ccall f_5206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:570: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_5156(2,t3,t2);}}

/* k5229 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:555: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[277]);}

/* k5232 in k5229 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in k2539 in ... */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:556: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[275]);}
else{
/* c-backend.scm:556: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[276]);}}

/* k5235 in k5232 in k5229 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in ... */
static void C_ccall f_5237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:558: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[273]);}
else{
/* c-backend.scm:559: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[274]);}}

/* k3257 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:191: gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[70],((C_word*)t0)[3],lf[71],t1,C_make_character(41));}

/* k7421 in k7418 in k7415 in k7412 in k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in ... */
static void C_ccall f_7423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1068: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[557],C_SCHEME_TRUE,lf[558]);}
else{
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1070: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[559]);}
else{
/* c-backend.scm:1071: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[560]);}}}

/* k7418 in k7415 in k7412 in k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in ... */
static void C_ccall f_7420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1066: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[561]);}

/* k5260 in k5257 in k5254 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in k2542 in ... */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:565: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[267],((C_word*)t0)[3]);}

/* k2797 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:98: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* a4603 in expr-args in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4604(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4604,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4608,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_car(t2);
/* c-backend.scm:456: expr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2652(t6,t1,t5,((C_word*)t0)[3]);}
else{
/* c-backend.scm:455: gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,C_make_character(44));}}

/* k4606 in a4603 in expr-args in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:456: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* k7478 in k7475 in for-each-loop1241 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in k7280 in k7277 in ... */
static void C_ccall f_7480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[5])[1];
f_7470(t5,((C_word*)t0)[6],t2,t3,t4);}

/* g776 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5446,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5450,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:652: gen */
t4=*((C_word*)lf[1]+1);
((C_proc13)(void*)(*((C_word*)t4+1)))(13,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[323],t2,lf[324],C_SCHEME_TRUE,lf[325],t2,lf[326],t2,lf[327]);}

/* k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5446,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5479,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5545,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5545(t9,t5,t3);}

/* k4918 in doloop607 in k4887 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4920,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4910(t3,((C_word*)t0)[4],t2);}

/* k3215 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:182: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2652(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* doloop607 in k4887 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4910,NULL,3,t0,t1,t2);}
if(C_truep(C_i_zerop(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4920,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:529: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[235]);}}

/* for-each-loop1166 in k7163 in generate-external-variables in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_7195(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7195,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7205,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_vector_ref(t4,C_fix(0));
t7=C_i_vector_ref(t4,C_fix(1));
t8=C_i_vector_ref(t4,C_fix(2));
t9=(C_truep(t8)?lf[547]:lf[548]);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7187,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:994: foreign-type-declaration */
t12=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,t7,t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7450 in k7412 in k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in ... */
static void C_ccall f_7452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1064: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k6668 in k6626 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_fcall f_6670(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],lf[255]);
if(C_truep(t2)){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(2)))){
/* c-backend.scm:863: gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,((C_word*)t0)[4],C_SCHEME_TRUE,lf[451],((C_word*)t0)[3],lf[452],((C_word*)t0)[3],lf[453]);}
else{
t3=((C_word*)t0)[4];
f_6631(2,t3,C_SCHEME_UNDEFINED);}}
else{
/* c-backend.scm:864: gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,((C_word*)t0)[4],C_SCHEME_TRUE,lf[454],((C_word*)t0)[3],lf[455],((C_word*)t0)[3],lf[456]);}}
else{
t2=((C_word*)t0)[4];
f_6631(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop815 in k5489 in k5486 in k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_5499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5499,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5509,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:661: g816 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5489 in k5486 in k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5491,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=C_i_check_list_2(t3,lf[57]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5499,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5499(t8,((C_word*)t0)[2],t3);}

/* k4646 in pad0 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
t2=*((C_word*)lf[205]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[206],t1);}

/* k4945 in doloop602 in k4884 in k4878 in doloop596 in k4863 in k4860 in k4857 in k4846 in declarations in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4947,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4937(t3,((C_word*)t0)[4],t2);}

/* for-each-loop297 in k3492 in k3484 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3511(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3511,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3521,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:258: gen */
t9=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t9+1)))(8,t9,t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[100],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4175 in k4172 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:380: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4172 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:379: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* pad0 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4633(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4633,NULL,2,t1,t2);}
if(C_truep(C_i_lessp(t2,C_fix(10)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:464: number->string */
t4=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7446 in k7412 in k7409 in k7379 in k7376 in k7370 in k7328 in k7325 in k7322 in k7319 in k7316 in k7313 in k7310 in k7307 in k7304 in k7301 in k7298 in k7295 in k7292 in k7289 in k7286 in k7283 in ... */
static void C_ccall f_7448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_4630(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4630,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4633,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4651,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4825,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:466: current-seconds */
t5=*((C_word*)lf[233]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3707 in k3694 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:292: gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[118],((C_word*)((C_word*)t0)[3])[1],lf[119],t1,C_make_character(41));}

/* k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:480: gen-list */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[219]+1));}

/* k4194 in k4191 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:388: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4191 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:386: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_make_character(44));}
else{
/* c-backend.scm:388: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_make_character(41));}}

/* k8923 in map-loop1715 in k8870 in k8851 in k8834 in k8817 in k8800 in k8783 in k8766 in k8749 in k8674 in k8657 in k8640 in k8597 in k8582 in k8570 in k8462 in k8441 in k8333 in foreign-type-declaration in k2627 in k2542 in ... */
static void C_ccall f_8925(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8925,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8896(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8896(t6,((C_word*)t0)[5],t5);}}

/* k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4651(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4651,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(1));
t3=t2;
t4=C_i_vector_ref(t1,C_fix(2));
t5=t4;
t6=C_i_vector_ref(t1,C_fix(3));
t7=t6;
t8=C_i_vector_ref(t1,C_fix(4));
t9=C_i_vector_ref(t1,C_fix(5));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=C_a_i_plus(&a,2,C_fix(1900),t9);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4750,a[2]=t10,a[3]=((C_word*)t0)[3],a[4]=t12,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t5,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t14=C_a_i_plus(&a,2,t8,C_fix(1));
/* c-backend.scm:474: pad0 */
f_4633(t13,t14);}

/* k6629 in k6626 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6631,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_SCHEME_FALSE:(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_i_greaterp(((C_word*)t0)[4],C_fix(0))));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6640,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[436]+1))){
/* c-backend.scm:866: gen */
t4=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_SCHEME_TRUE,lf[450]);}
else{
t4=t3;
f_6640(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=((C_word*)t0)[6];
f_6307(2,t3,C_SCHEME_UNDEFINED);}}

/* k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(*((C_word*)lf[207]+1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* c-backend.scm:493: generate-foreign-callback-stub-prototypes */
t2=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[209]+1));}}

/* k4679 in k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[207]+1))){
/* c-backend.scm:488: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[209]+1));}
else{
t3=t2;
f_4684(2,t3,C_SCHEME_UNDEFINED);}}

/* k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[210]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:490: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}
else{
if(C_truep(*((C_word*)lf[207]+1))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* c-backend.scm:493: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[209]+1));}}}

/* k3733 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:297: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[124],t1,lf[125]);}

/* k3737 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:302: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[126],((C_word*)t0)[4],lf[127]);}

/* k5238 in k5235 in k5232 in k5229 in k5142 in k5136 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in a5087 in k5015 in prototypes in k2633 in generate-code in k2627 in ... */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:560: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[215]+1))){
/* c-backend.scm:482: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[216],*((C_word*)lf[215]+1));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:484: gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[218]);}}

/* k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:481: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:486: gen */
t3=*((C_word*)lf[1]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,C_SCHEME_TRUE,lf[211],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[212],*((C_word*)lf[213]+1),lf[214]);}

/* k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:308: expr */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2652(t3,t2,((C_word*)t0)[10],((C_word*)t0)[5]);}

/* k3744 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:301: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[128],t1,lf[129]);}

/* k3519 in for-each-loop297 in k3492 in k3484 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3511(t4,((C_word*)t0)[5],t2,t3);}

/* k10195 in k10192 in k10189 in k10183 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1337: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k10192 in k10189 in k10183 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1337: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k10189 in k10183 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1337: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3711 in k3694 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:293: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4280 in k4277 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:403: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[178]);}

/* k6638 in k6629 in k6626 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in ... */
static void C_ccall f_6640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
/* c-backend.scm:868: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[448]);}
else{
/* c-backend.scm:869: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[449]);}}
else{
/* c-backend.scm:869: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[449]);}}

/* k10183 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10185,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10191,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1337: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[833],C_SCHEME_FALSE,t3);}

/* k4697 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4699,2,t0,t1);}
t2=*((C_word*)lf[210]+1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4709,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4709(t6,((C_word*)t0)[2],*((C_word*)lf[210]+1));}

/* k4277 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:402: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k3726 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:298: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[122],((C_word*)((C_word*)t0)[2])[1],lf[123]);}

/* k3501 in k3498 in k3492 in k3484 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:261: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[98]);}

/* k3719 in k3654 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:289: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[120],t1,lf[121]);}

/* k3498 in k3492 in k3484 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:261: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[98]);}
else{
/* c-backend.scm:260: gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_SCHEME_TRUE,lf[99],((C_word*)t0)[4],C_make_character(59));}}

/* k10896 in k10901 in encode-literal in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1406: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[859],t1,lf[860]);}

/* k3261 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:192: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3588 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:267: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[10],C_make_character(40));}

/* k3768 in k3753 in k3750 in k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3770(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:312: gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[136],((C_word*)t0)[3],lf[137]);}
else{
/* c-backend.scm:313: gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[138],((C_word*)t0)[3],lf[139]);}}

/* k10165 in k10162 in k10156 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1336: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[831],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10162 in k10156 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1336: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k4295 in k4291 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:401: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[179],t1,lf[180]);}

/* k4291 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4293,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:401: foreign-type-declaration */
t4=*((C_word*)lf[175]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[181]);}

/* k10156 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10158,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10164,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1336: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[832],C_SCHEME_FALSE,t3);}

/* k3756 in k3753 in k3750 in k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:314: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[133],((C_word*)t0)[6],lf[134],((C_word*)t0)[7],C_make_character(44));}

/* k3591 in k3588 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;
f_3596(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:268: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],C_make_character(44));}}

/* k3597 in k3594 in k3591 in k3588 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:270: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3753 in k3750 in k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=*((C_word*)lf[135]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3770,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[135]+1))){
t5=t4;
f_3770(t5,*((C_word*)lf[135]+1));}
else{
t5=*((C_word*)lf[140]+1);
if(C_truep(*((C_word*)lf[140]+1))){
t6=*((C_word*)lf[140]+1);
t7=t4;
f_3770(t7,*((C_word*)lf[140]+1));}
else{
t6=C_u_i_car(((C_word*)t0)[8]);
t7=t4;
f_3770(t7,t6);}}}

/* k3594 in k3591 in k3588 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:270: expr-args */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4598(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* c-backend.scm:269: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,C_make_character(116),((C_word*)t0)[7],C_make_character(44));}}

/* k4111 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4113,2,t0,t1);}
t2=C_i_zerop(t1);
t3=t2;
t4=C_u_i_car(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:353: gen */
t6=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[10],C_make_character(40));}

/* k3750 in k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:309: gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,C_make_character(59),C_SCHEME_TRUE,lf[141],((C_word*)t0)[6],lf[142]);}

/* k4115 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:351: lambda-literal-closure-size */
t2=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10144 in k10141 in k10138 in k10132 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1335: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k10138 in k10132 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1335: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10141 in k10138 in k10132 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1335: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k4807 in map-loop514 in k4773 in k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4809,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4780(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4780(t6,((C_word*)t0)[5],t5);}}

/* k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:316: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[132]);}

/* k3759 in k3756 in k3753 in k3750 in k3747 in k3634 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:315: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k10408 in k10402 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1357: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10411 in k10408 in k10402 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1357: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[846],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10414 in k10411 in k10408 in k10402 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1357: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4134 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:369: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4137 in k4134 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:370: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[158]);}

/* k6893 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in ... */
static void C_ccall f_6895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[215]+1))){
t3=t2;
f_6898(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:781: gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_SCHEME_TRUE,lf[490]);}}

/* k6896 in k6893 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in ... */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:782: gen */
t2=*((C_word*)lf[1]+1);
((C_proc16)(void*)(*((C_word*)t2+1)))(16,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[484],C_SCHEME_TRUE,lf[485],C_SCHEME_TRUE,lf[486],C_SCHEME_TRUE,lf[487],((C_word*)t0)[3],lf[488],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[489],((C_word*)t0)[3]);}

/* for-each-loop271 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_3548(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3548,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3558,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:249: g272 */
t9=((C_word*)t0)[3];
f_3470(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4823 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:466: ##sys#decode-seconds */
t2=*((C_word*)lf[232]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k6719 in k6716 in k6302 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:859: gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[463]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_6628(2,t3,t2);}}

/* k10114 in k10111 in k10105 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1334: ##sys#write-char-0 */
t3=*((C_word*)lf[339]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k10111 in k10105 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1334: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10117 in k10114 in k10111 in k10105 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1334: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3556 in for-each-loop271 in k3467 in k3464 in k3461 in k3425 in k3421 in k3415 in k3412 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_3558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3548(t4,((C_word*)t0)[5],t2,t3);}

/* k8162 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1115: gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[662],t1,lf[663]);}

/* k4815 in k4760 in k4756 in k4752 in k4748 in k4649 in header in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:477: string-split */
t2=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[230]);}

/* k4203 in k4191 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:387: expr-args */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4598(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6788 in for-each-loop980 in k6755 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in ... */
static void C_ccall f_6790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6780(t3,((C_word*)t0)[4],t2);}

/* k4153 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:374: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* k4156 in k4153 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:375: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[163]);}

/* k6871 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in a6209 in ... */
static void C_ccall f_6873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:773: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[494]);}
else{
/* c-backend.scm:773: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[495]);}}

/* k6877 in k6874 in k6871 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in ... */
static void C_ccall f_6879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:777: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6874 in k6871 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in k6215 in k6212 in ... */
static void C_ccall f_6876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:775: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[492]);}
else{
/* c-backend.scm:776: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[493]);}}

/* k10105 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10107,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10113,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1334: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[829],C_SCHEME_FALSE,t3);}

/* for-each-loop1319 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8172(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8172,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8182,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1075: g1320 */
t5=((C_word*)t0)[3];
f_7585(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop980 in k6755 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in ... */
static void C_fcall f_6780(C_word t0,C_word t1,C_word t2){
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
C_word t21;
C_word t22;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6780,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6790,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6766,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t6);
t9=C_eqp(t8,lf[467]);
if(C_truep(t9)){
t10=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t11=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t11+1)))(7,t11,t5,C_SCHEME_TRUE,lf[468],C_make_character(32),t10,C_make_character(59));}
else{
t10=C_eqp(t8,lf[469]);
if(C_truep(t10)){
t11=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t12=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t12+1)))(7,t12,t5,C_SCHEME_TRUE,lf[470],C_make_character(32),t11,C_make_character(59));}
else{
t11=C_eqp(t8,lf[15]);
if(C_truep(t11)){
t12=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t13=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t13+1)))(7,t13,t5,C_SCHEME_TRUE,lf[471],C_make_character(32),t12,C_make_character(59));}
else{
t12=C_eqp(t8,lf[472]);
if(C_truep(t12)){
t13=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t14=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t14+1)))(7,t14,t5,C_SCHEME_TRUE,lf[473],C_make_character(32),t13,C_make_character(59));}
else{
t13=C_eqp(t8,lf[474]);
if(C_truep(t13)){
t14=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t15=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t15+1)))(7,t15,t5,C_SCHEME_TRUE,lf[475],C_make_character(32),t14,C_make_character(59));}
else{
t14=C_eqp(t8,lf[12]);
if(C_truep(t14)){
t15=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t16=*((C_word*)lf[1]+1);
((C_proc7)(void*)(*((C_word*)t16+1)))(7,t16,t5,C_SCHEME_TRUE,lf[476],C_make_character(32),t15,C_make_character(59));}
else{
/* c-backend.scm:743: bomb */
t15=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t7,lf[477],t8);}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10168 in k10165 in k10162 in k10156 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1336: get-output-string */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k8180 in for-each-loop1319 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8172(t3,((C_word*)t0)[4],t2);}

/* k4227 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_car(((C_word*)t0)[2]);
/* c-backend.scm:391: gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t1,t2,C_make_character(41));}

/* k10402 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10404,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[337]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10410,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1357: ##sys#print */
t6=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[847],C_SCHEME_FALSE,t3);}

/* k8111 in k8083 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_8113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1127: gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[650],t1);}

/* for-each-loop1494 in k8071 in k8068 in k8065 in k8062 in k8059 in k8056 in k7602 in k7596 in k7593 in k7590 in k7587 in g1320 in generate-foreign-callback-stubs in k2627 in k2542 in k2539 in k2536 */
static void C_fcall f_8115(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8115,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8125,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
t9=t6;
t10=t7;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8082,a[2]=t9,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1122: foreign-result-conversion */
t12=*((C_word*)lf[169]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,t8,lf[654]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6846 in k6843 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in ... */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:791: gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_6286(2,t3,t2);}}

/* k6843 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6227 in k6224 in k6221 in k6218 in ... */
static void C_fcall f_6845(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6845,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:790: gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[482]);}
else{
t2=((C_word*)t0)[3];
f_6286(2,t2,C_SCHEME_UNDEFINED);}}

/* k10475 in k10472 in k10466 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1361: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[850],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k10472 in k10466 in k10291 in k10264 in k10051 in foreign-result-conversion in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_10474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1361: ##sys#print */
t3=*((C_word*)lf[340]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k6755 in k6299 in k6296 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in k6263 in k6260 in k6257 in k6254 in k6251 in k6248 in k6245 in k6242 in k6239 in ... */
static void C_ccall f_6757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6757,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6780,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6780(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4245 in expr in expression in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:396: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2652(t4,t2,t3,((C_word*)t0)[5]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_backend_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2554)){
C_save(t1);
C_rereclaim2(2554*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,871);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],7,"newline");
lf[3]=C_h_intern(&lf[3],7,"display");
lf[4]=C_h_intern(&lf[4],17,"\010compilergen-list");
lf[5]=C_h_intern(&lf[5],11,"intersperse");
lf[6]=C_h_intern(&lf[6],18,"\010compilerunique-id");
lf[7]=C_h_intern(&lf[7],22,"\010compilergenerate-code");
lf[8]=C_h_intern(&lf[8],13,"\010compilerbomb");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\021can\047t find lambda");
lf[10]=C_h_intern(&lf[10],18,"\003syshash-table-ref");
lf[11]=C_h_intern(&lf[11],14,"\004coreimmediate");
lf[12]=C_h_intern(&lf[12],4,"bool");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[15]=C_h_intern(&lf[15],4,"char");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\021C_make_character(");
lf[17]=C_h_intern(&lf[17],3,"nil");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_LIST");
lf[19]=C_h_intern(&lf[19],3,"fix");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fix(");
lf[21]=C_h_intern(&lf[21],3,"eof");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_FILE");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\015bad immediate");
lf[24]=C_h_intern(&lf[24],12,"\004coreliteral");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\013((C_word)li");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[28]=C_h_intern(&lf[28],2,"if");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\013if(C_truep(");
lf[32]=C_h_intern(&lf[32],9,"\004coreproc");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[34]=C_h_intern(&lf[34],9,"\004corebind");
lf[35]=C_h_intern(&lf[35],16,"\004corelet_unboxed");
lf[36]=C_h_intern(&lf[36],8,"\004coreref");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\002)[");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word\052)");
lf[39]=C_h_intern(&lf[39],10,"\004coreunbox");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\004)[1]");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word\052)");
lf[42]=C_h_intern(&lf[42],13,"\004coreupdate_i");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[44]=C_h_intern(&lf[44],11,"\004coreupdate");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002)+");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate2(((C_word \052)");
lf[48]=C_h_intern(&lf[48],16,"\004coreupdatebox_i");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[51]=C_h_intern(&lf[51],14,"\004coreupdatebox");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\004)+1,");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate2(((C_word \052)");
lf[54]=C_h_intern(&lf[54],12,"\004coreclosure");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002a[");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[57]=C_h_intern(&lf[57],8,"for-each");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\021tmp=(C_word)a,a+=");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005,tmp)");
lf[60]=C_h_intern(&lf[60],4,"iota");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\023(\052a=C_CLOSURE_TYPE|");
lf[62]=C_h_intern(&lf[62],8,"\004corebox");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\030,tmp=(C_word)a,a+=2,tmp)");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\031(\052a=C_VECTOR_TYPE|1,a[1]=");
lf[65]=C_h_intern(&lf[65],10,"\004corelocal");
lf[66]=C_h_intern(&lf[66],13,"\004coresetlocal");
lf[67]=C_h_intern(&lf[67],11,"\004coreglobal");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\017C_retrieve2(lf[");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002],");
lf[72]=C_h_intern(&lf[72],21,"\010compilerc-ify-string");
lf[73]=C_h_intern(&lf[73],28,"\003syssymbol->qualified-string");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fast_retrieve(lf[");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[78]=C_h_intern(&lf[78],14,"\004coresetglobal");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\012 /\052 (set! ");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\011 ...) \052/,");
lf[81]=C_h_intern(&lf[81],21,"\010compileruncommentify");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\016C_mutate2(&lf[");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\026C_mutate2((C_word\052)lf[");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\003]+1");
lf[86]=C_h_intern(&lf[86],16,"\004coresetglobal_i");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\005] /\052 ");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\005 \052/ =");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\024C_set_block_item(lf[");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\005] /\052 ");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\006 \052/,0,");
lf[93]=C_h_intern(&lf[93],14,"\004coreundefined");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[95]=C_h_intern(&lf[95],9,"\004corecall");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\002c=");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[101]=C_h_intern(&lf[101],26,"lambda-literal-temporaries");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[103]=C_h_intern(&lf[103],22,"lambda-literal-looping");
lf[104]=C_h_intern(&lf[104],17,"lambda-literal-id");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[107]=C_h_intern(&lf[107],35,"\010compilerno-global-procedure-checks");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\024(void\052)(\052((C_word\052)(");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\005)+1))");
lf[110]=C_h_intern(&lf[110],13,"string-append");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[113]=C_h_intern(&lf[113],14,"number->string");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\030C_retrieve2_symbol_proc(");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\037C_fast_retrieve_symbol_proc(lf[");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[135]=C_h_intern(&lf[135],6,"unsafe");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\024(void\052)(\052((C_word\052)t");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\004+1))");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\026C_fast_retrieve_proc(t");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[140]=C_h_intern(&lf[140],28,"\010compilerno-procedure-checks");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[143]=C_h_intern(&lf[143],24,"\010compileremit-trace-info");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\011C_trace(\042");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\003\042);");
lf[146]=C_h_intern(&lf[146],17,"\010compilerslashify");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[149]=C_h_intern(&lf[149],27,"lambda-literal-closure-size");
lf[150]=C_h_intern(&lf[150],28,"\010compilersource-info->string");
lf[151]=C_h_intern(&lf[151],12,"\004corerecurse");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\003t0,");
lf[155]=C_h_intern(&lf[155],16,"\004coredirect_call");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i(&a,");
lf[157]=C_h_intern(&lf[157],13,"\004corecallunit");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel(");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\024,C_SCHEME_UNDEFINED,");
lf[162]=C_h_intern(&lf[162],11,"\004corereturn");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\007return(");
lf[165]=C_h_intern(&lf[165],11,"\004coreinline");
lf[166]=C_h_intern(&lf[166],20,"\004coreinline_allocate");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\004(&a,");
lf[168]=C_h_intern(&lf[168],15,"\004coreinline_ref");
lf[169]=C_h_intern(&lf[169],34,"\010compilerforeign-result-conversion");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[171]=C_h_intern(&lf[171],18,"\004coreinline_update");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[174]=C_h_intern(&lf[174],36,"\010compilerforeign-argument-conversion");
lf[175]=C_h_intern(&lf[175],33,"\010compilerforeign-type-declaration");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[177]=C_h_intern(&lf[177],19,"\004coreinline_loc_ref");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\003\052((");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_data_pointer(");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[183]=C_h_intern(&lf[183],22,"\004coreinline_loc_update");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\003))=");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\004((\052(");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_data_pointer(");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[189]=C_h_intern(&lf[189],16,"\004coreunboxed_ref");
lf[190]=C_h_intern(&lf[190],17,"\004coreunboxed_set!");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\002((");
lf[193]=C_h_intern(&lf[193],19,"\004coreinline_unboxed");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[195]=C_h_intern(&lf[195],11,"\004coreswitch");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\010default:");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\005case ");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\007switch(");
lf[200]=C_h_intern(&lf[200],9,"\004corecond");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\002)\077");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\011(C_truep(");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\010bad form");
lf[204]=C_h_intern(&lf[204],13,"pair-for-each");
lf[205]=C_h_intern(&lf[205],17,"\003sysstring-append");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[207]=C_h_intern(&lf[207],30,"\010compilerexternal-protos-first");
lf[208]=C_h_intern(&lf[208],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[209]=C_h_intern(&lf[209],22,"foreign-callback-stubs");
lf[210]=C_h_intern(&lf[210],29,"\010compilerforeign-declarations");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\002\052/");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\012#include \042");
lf[213]=C_h_intern(&lf[213],28,"\010compilertarget-include-file");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[215]=C_h_intern(&lf[215],18,"\010compilerunit-name");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\011   unit: ");
lf[217]=C_h_intern(&lf[217],19,"\010compilerused-units");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\017   used units: ");
lf[219]=C_h_intern(&lf[219],27,"\010compilercompiler-arguments");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\022/\052 Generated from ");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\030 by the CHICKEN compiler");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\031   http://www.call-cc.org");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\021   command line: ");
lf[225]=C_h_intern(&lf[225],18,"string-intersperse");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[229]=C_h_intern(&lf[229],12,"string-split");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[231]=C_h_intern(&lf[231],15,"chicken-version");
lf[232]=C_h_intern(&lf[232],18,"\003sysdecode-seconds");
lf[233]=C_h_intern(&lf[233],15,"current-seconds");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\002};");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\002,0");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_char C_TLS li");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\026[] C_aligned={C_lihdr(");
lf[238]=C_h_intern(&lf[238],23,"\003syslambda-info->string");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000)static double C_possibly_force_alignment;");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\027static C_TLS C_word lf[");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel)");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\036C_externimport void C_ccall C_");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000._toplevel(C_word c,C_word d,C_word k) C_noret;");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000+static C_PTABLE_ENTRY \052create_ptable(void);");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[248]=C_h_intern(&lf[248],9,"make-list");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\007,C_word");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\025typedef void (\052C_proc");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\010)(C_word");
lf[252]=C_h_intern(&lf[252],21,"small-parameter-limit");
lf[253]=C_h_intern(&lf[253],11,"lset-adjoin");
lf[254]=C_h_intern(&lf[254],1,"=");
lf[255]=C_h_intern(&lf[255],4,"none");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\016,...) C_noret;");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\010 C_noret");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word \052a");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[266]=C_h_intern(&lf[266],8,"toplevel");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\034C_externexport void C_ccall ");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[280]=C_h_intern(&lf[280],32,"lambda-literal-callee-signatures");
lf[281]=C_h_intern(&lf[281],24,"lambda-literal-allocated");
lf[282]=C_h_intern(&lf[282],21,"lambda-literal-direct");
lf[283]=C_h_intern(&lf[283],33,"lambda-literal-rest-argument-mode");
lf[284]=C_h_intern(&lf[284],28,"lambda-literal-rest-argument");
lf[285]=C_h_intern(&lf[285],27,"\010compilermake-variable-list");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[287]=C_h_intern(&lf[287],27,"lambda-literal-customizable");
lf[288]=C_h_intern(&lf[288],29,"lambda-literal-argument-count");
lf[289]=C_h_intern(&lf[289],23,"\003syshash-table-for-each");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\020C_adjust_stack(-");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\010=C_pick(");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[296]=C_h_intern(&lf[296],27,"\010compilermake-argument-list");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\006(a,n);");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\007_vector");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\017=C_restore_rest");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n+1);");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n\0523);");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\022n=C_rest_count(0);");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\006int n;");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word \052a,t");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\016(void \052dummy){");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000 (void \052dummy) C_regparm C_noret;");
lf[336]=C_h_intern(&lf[336],23,"lambda-literal-external");
lf[337]=C_h_intern(&lf[337],7,"sprintf");
lf[338]=C_h_intern(&lf[338],17,"get-output-string");
lf[339]=C_h_intern(&lf[339],16,"\003syswrite-char-0");
lf[340]=C_h_intern(&lf[340],9,"\003sysprint");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[342]=C_h_intern(&lf[342],18,"open-output-string");
lf[343]=C_h_intern(&lf[343],25,"\010compilerwords-per-flonum");
lf[344]=C_h_intern(&lf[344],6,"reduce");
lf[345]=C_h_intern(&lf[345],1,"+");
lf[346]=C_h_intern(&lf[346],12,"vector->list");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\035type of literal not supported");
lf[348]=C_h_intern(&lf[348],14,"\010compilerwords");
lf[349]=C_h_intern(&lf[349],15,"\003sysbytevector\077");
lf[350]=C_h_intern(&lf[350],32,"\010compilerblock-variable-literal\077");
lf[351]=C_h_intern(&lf[351],19,"\010compilerimmediate\077");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\007=C_fix(");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[354]=C_h_intern(&lf[354],19,"\003sysundefined-value");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\024=C_SCHEME_UNDEFINED;");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\022=C_make_character(");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\014C_h_intern(&");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\001=");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\026=C_SCHEME_END_OF_LIST;");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[365]=C_h_intern(&lf[365],23,"\010compilerencode-literal");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\034=C_decode_literal(C_heaptop,");
lf[367]=C_h_intern(&lf[367],20,"\010compilerbig-fixnum\077");
lf[368]=C_h_intern(&lf[368],6,"modulo");
lf[369]=C_h_intern(&lf[369],14,"\003syscopy-bytes");
lf[370]=C_h_intern(&lf[370],11,"make-string");
lf[371]=C_h_intern(&lf[371],19,"lambda-literal-body");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\022C_word \052a=C_alloc(");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\004);}}");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000#=C_restore_rest(a,C_rest_count(0));");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\015a=C_alloc((c-");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\005)\0523);");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\012((void\052)tr");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\005,NULL");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\012((void\052)tr");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\022C_register_lf2(lf,");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\022,create_ptable());");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\023C_initialize_lf(lf,");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\017if(!C_demand_2(");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\015C_rereclaim2(");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\024\052sizeof(C_word), 1);");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\016t1=C_restore;}");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\030C_check_nursery_minimum(");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\015if(!C_demand(");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000,C_reclaim((void\052)toplevel_trampoline,NULL);}");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\027toplevel_initialized=1;");
lf[420]=C_h_intern(&lf[420],26,"\010compilertarget-stack-size");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\017C_resize_stack(");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[423]=C_h_intern(&lf[423],25,"\010compilertarget-heap-size");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\027C_heap_size_is_fixed=1;");
lf[427]=C_h_intern(&lf[427],40,"\010compilerdisable-stack-overflow-checking");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\033C_disable_overflow_check=1;");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000;if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\036else C_toplevel_entry(C_text(\042");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\004\042));");
lf[433]=C_h_intern(&lf[433],4,"fold");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\035if(!C_demand(c\052C_SIZEOF_PAIR+");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[436]=C_h_intern(&lf[436],28,"\010compilerinsert-timer-checks");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[441]=C_h_intern(&lf[441],23,"\010compilerno-argc-checks");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\004,c2,");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\014C_save_rest(");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\017C_word \052a,c2=c;");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\012va_list v;");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\026if(!C_stack_probe(a)){");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\027if(!C_stack_probe(&a)){");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\006if(c!=");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\021) C_bad_argc_2(c,");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word ab[");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\010],\052a=ab;");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\027C_stack_overflow_check;");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[467]=C_h_intern(&lf[467],6,"fixnum");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[469]=C_h_intern(&lf[469],6,"flonum");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[471]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[472]=C_h_intern(&lf[472],7,"pointer");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\006void \052");
lf[474]=C_h_intern(&lf[474],3,"int");
lf[475]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[476]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[477]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[478]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[480]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[481]=C_decode_literal(C_heaptop,"\376B\000\000\004,...");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word \052a");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000!C_noret_decl(toplevel_trampoline)");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000Gstatic void C_fcall toplevel_trampoline(void \052dummy) C_regparm C_noret;");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000\077C_regparm static void C_fcall toplevel_trampoline(void \052dummy){");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\042(2,C_SCHEME_UNDEFINED,C_restore);}");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\017void C_ccall C_");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\022C_main_entry_point");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000(static C_TLS int toplevel_initialized=0;");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[499]=C_h_intern(&lf[499],16,"\010compilercleanup");
lf[500]=C_h_intern(&lf[500],18,"\010compilerdebugging");
lf[501]=C_h_intern(&lf[501],1,"o");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000 dropping unused closure argument");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[505]=C_h_intern(&lf[505],34,"lambda-literal-unboxed-temporaries");
lf[506]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[507]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[508]=C_h_intern(&lf[508],18,"\010compilerreal-name");
lf[509]=C_decode_literal(C_heaptop,"\376B\000\000\002/\052");
lf[510]=C_decode_literal(C_heaptop,"\376B\000\000\002\052/");
lf[511]=C_decode_literal(C_heaptop,"\376B\000\000\021/\052 end of file \052/");
lf[512]=C_h_intern(&lf[512],35,"\010compilercollected-debugging-output");
lf[513]=C_h_intern(&lf[513],25,"emit-procedure-table-info");
lf[514]=C_h_intern(&lf[514],31,"generate-foreign-callback-stubs");
lf[515]=C_h_intern(&lf[515],31,"\010compilergenerate-foreign-stubs");
lf[516]=C_h_intern(&lf[516],29,"\010compilerforeign-lambda-stubs");
lf[517]=C_h_intern(&lf[517],36,"\010compilergenerate-external-variables");
lf[518]=C_h_intern(&lf[518],27,"\010compilerexternal-variables");
lf[519]=C_h_intern(&lf[519],1,"p");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\030code generation phase...");
lf[521]=C_h_intern(&lf[521],31,"flonum-maximum-decimal-exponent");
lf[522]=C_h_intern(&lf[522],22,"flonum-print-precision");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\016return ptable;");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\005#else");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\014return NULL;");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\052static C_PTABLE_ENTRY \052create_ptable(void)");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[532]=C_decode_literal(C_heaptop,"\376B\000\000\015{NULL,NULL}};");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\013_toplevel},");
lf[535]=C_decode_literal(C_heaptop,"\376B\000\000\014C_toplevel},");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[537]=C_decode_literal(C_heaptop,"\376B\000\000\002{\042");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\011\042,(void\052)");
lf[539]=C_h_intern(&lf[539],29,"\010compilerstring->c-identifier");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\035static C_PTABLE_ENTRY ptable[");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\005] = {");
lf[543]=C_h_intern(&lf[543],19,"\003syshash-table-size");
lf[544]=C_h_intern(&lf[544],11,"string-copy");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[546]=C_h_intern(&lf[546],13,"list-tabulate");
lf[547]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[549]=C_h_intern(&lf[549],41,"\010compilergenerate-foreign-callback-header");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\017C_externexport ");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[552]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\015#undef return");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ret:");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[562]=C_h_intern(&lf[562],4,"void");
lf[563]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\004C_r=");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\0003int C_level=C_save_callback_continuation(&C_a,C_k);");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[570]=C_h_intern(&lf[570],14,"symbol->string");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\0002C_word C_r=C_SCHEME_UNDEFINED,\052C_a=(C_word\052)C_buf;");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[574]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000\014) C_regparm;");
lf[577]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static C_word C_fcall ");
lf[578]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[580]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[582]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_word C_fcall ");
lf[583]=C_decode_literal(C_heaptop,"\376B\000\000\042#define return(x) C_cblock C_r = (");
lf[584]=C_decode_literal(C_heaptop,"\376B\000\000\036(x))); goto C_ret; C_cblockend");
lf[585]=C_decode_literal(C_heaptop,"\376B\000\000\010/\052 from ");
lf[586]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[587]=C_h_intern(&lf[587],21,"foreign-stub-callback");
lf[588]=C_h_intern(&lf[588],16,"foreign-stub-cps");
lf[589]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[590]=C_h_intern(&lf[590],27,"foreign-stub-argument-names");
lf[591]=C_h_intern(&lf[591],17,"foreign-stub-body");
lf[592]=C_h_intern(&lf[592],17,"foreign-stub-name");
lf[593]=C_h_intern(&lf[593],24,"foreign-stub-return-type");
lf[594]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word C_buf");
lf[595]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[596]=C_h_intern(&lf[596],27,"foreign-stub-argument-types");
lf[597]=C_h_intern(&lf[597],19,"\010compilerreal-name2");
lf[598]=C_h_intern(&lf[598],15,"foreign-stub-id");
lf[599]=C_h_intern(&lf[599],5,"float");
lf[600]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[601]=C_h_intern(&lf[601],8,"c-string");
lf[602]=C_decode_literal(C_heaptop,"\376B\000\000\004+2+(");
lf[603]=C_decode_literal(C_heaptop,"\376B\000\000!==NULL\0771:C_bytestowords(C_strlen(");
lf[604]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[605]=C_h_intern(&lf[605],16,"nonnull-c-string");
lf[606]=C_decode_literal(C_heaptop,"\376B\000\000\033+2+C_bytestowords(C_strlen(");
lf[607]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[608]=C_h_intern(&lf[608],3,"ref");
lf[609]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[610]=C_h_intern(&lf[610],5,"const");
lf[611]=C_h_intern(&lf[611],9,"c-pointer");
lf[612]=C_h_intern(&lf[612],15,"nonnull-pointer");
lf[613]=C_h_intern(&lf[613],17,"nonnull-c-pointer");
lf[614]=C_h_intern(&lf[614],8,"function");
lf[615]=C_h_intern(&lf[615],8,"instance");
lf[616]=C_h_intern(&lf[616],16,"nonnull-instance");
lf[617]=C_h_intern(&lf[617],12,"instance-ref");
lf[618]=C_h_intern(&lf[618],27,"\010compilerforeign-type-table");
lf[619]=C_h_intern(&lf[619],17,"nonnull-c-string\052");
lf[620]=C_h_intern(&lf[620],25,"nonnull-unsigned-c-string");
lf[621]=C_h_intern(&lf[621],26,"nonnull-unsigned-c-string\052");
lf[622]=C_h_intern(&lf[622],6,"symbol");
lf[623]=C_h_intern(&lf[623],9,"c-string\052");
lf[624]=C_h_intern(&lf[624],17,"unsigned-c-string");
lf[625]=C_h_intern(&lf[625],18,"unsigned-c-string\052");
lf[626]=C_h_intern(&lf[626],6,"double");
lf[627]=C_h_intern(&lf[627],16,"unsigned-integer");
lf[628]=C_h_intern(&lf[628],18,"unsigned-integer32");
lf[629]=C_h_intern(&lf[629],4,"long");
lf[630]=C_h_intern(&lf[630],7,"integer");
lf[631]=C_h_intern(&lf[631],9,"integer32");
lf[632]=C_h_intern(&lf[632],13,"unsigned-long");
lf[633]=C_h_intern(&lf[633],6,"size_t");
lf[634]=C_h_intern(&lf[634],6,"number");
lf[635]=C_h_intern(&lf[635],18,"unsigned-integer64");
lf[636]=C_h_intern(&lf[636],9,"integer64");
lf[637]=C_h_intern(&lf[637],13,"c-string-list");
lf[638]=C_h_intern(&lf[638],14,"c-string-list\052");
lf[639]=C_h_intern(&lf[639],5,"int32");
lf[640]=C_h_intern(&lf[640],5,"short");
lf[641]=C_h_intern(&lf[641],14,"unsigned-short");
lf[642]=C_h_intern(&lf[642],13,"scheme-object");
lf[643]=C_h_intern(&lf[643],13,"unsigned-char");
lf[644]=C_h_intern(&lf[644],12,"unsigned-int");
lf[645]=C_h_intern(&lf[645],14,"unsigned-int32");
lf[646]=C_h_intern(&lf[646],4,"byte");
lf[647]=C_h_intern(&lf[647],13,"unsigned-byte");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\002;}");
lf[649]=C_decode_literal(C_heaptop,"\376B\000\000\033C_callback_wrapper((void \052)");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\007return ");
lf[651]=C_decode_literal(C_heaptop,"\376B\000\000\002x=");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[653]=C_decode_literal(C_heaptop,"\376B\000\000\012C_save(x);");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\035C_callback_adjust_stack(a,s);");
lf[656]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[657]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word x,s=");
lf[658]=C_decode_literal(C_heaptop,"\376B\000\000\004,\052a=");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\020C_stack_pointer;");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\013C_alloc(s);");
lf[661]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[662]=C_decode_literal(C_heaptop,"\376B\000\000\010/\052 from ");
lf[663]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[664]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[665]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[666]=C_h_intern(&lf[666],36,"foreign-callback-stub-argument-types");
lf[667]=C_h_intern(&lf[667],33,"foreign-callback-stub-return-type");
lf[668]=C_h_intern(&lf[668],24,"foreign-callback-stub-id");
lf[669]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[671]=C_h_intern(&lf[671],32,"foreign-callback-stub-qualifiers");
lf[672]=C_h_intern(&lf[672],26,"foreign-callback-stub-name");
lf[673]=C_h_intern(&lf[673],13,"\010compilerquit");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal foreign type `~A\047");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\006C_word");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\006C_char");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned C_char");
lf[679]=C_decode_literal(C_heaptop,"\376B\000\000\014unsigned int");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u32");
lf[681]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\006size_t");
lf[683]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s32");
lf[684]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s64");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u64");
lf[686]=C_decode_literal(C_heaptop,"\376B\000\000\005short");
lf[687]=C_decode_literal(C_heaptop,"\376B\000\000\004long");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned short");
lf[689]=C_decode_literal(C_heaptop,"\376B\000\000\015unsigned long");
lf[690]=C_decode_literal(C_heaptop,"\376B\000\000\005float");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[692]=C_decode_literal(C_heaptop,"\376B\000\000\006void \052");
lf[693]=C_decode_literal(C_heaptop,"\376B\000\000\011C_char \052\052");
lf[694]=C_h_intern(&lf[694],4,"blob");
lf[695]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char \052");
lf[696]=C_h_intern(&lf[696],9,"u16vector");
lf[697]=C_h_intern(&lf[697],17,"nonnull-u16vector");
lf[698]=C_decode_literal(C_heaptop,"\376B\000\000\020unsigned short \052");
lf[699]=C_h_intern(&lf[699],8,"s8vector");
lf[700]=C_h_intern(&lf[700],16,"nonnull-s8vector");
lf[701]=C_decode_literal(C_heaptop,"\376B\000\000\015signed char \052");
lf[702]=C_h_intern(&lf[702],9,"u32vector");
lf[703]=C_h_intern(&lf[703],17,"nonnull-u32vector");
lf[704]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned int \052");
lf[705]=C_h_intern(&lf[705],9,"s16vector");
lf[706]=C_h_intern(&lf[706],17,"nonnull-s16vector");
lf[707]=C_decode_literal(C_heaptop,"\376B\000\000\007short \052");
lf[708]=C_h_intern(&lf[708],9,"s32vector");
lf[709]=C_h_intern(&lf[709],17,"nonnull-s32vector");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\005int \052");
lf[711]=C_h_intern(&lf[711],9,"f32vector");
lf[712]=C_h_intern(&lf[712],17,"nonnull-f32vector");
lf[713]=C_decode_literal(C_heaptop,"\376B\000\000\007float \052");
lf[714]=C_h_intern(&lf[714],9,"f64vector");
lf[715]=C_h_intern(&lf[715],17,"nonnull-f64vector");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\010double \052");
lf[717]=C_h_intern(&lf[717],14,"pointer-vector");
lf[718]=C_h_intern(&lf[718],22,"nonnull-pointer-vector");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\007void \052\052");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\006char \052");
lf[721]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char \052");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\004void");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[724]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\001<");
lf[726]=C_decode_literal(C_heaptop,"\376B\000\000\002> ");
lf[727]=C_h_intern(&lf[727],3,"map");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[730]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\006const ");
lf[732]=C_decode_literal(C_heaptop,"\376B\000\000\007struct ");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[734]=C_h_intern(&lf[734],8,"->string");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\006union ");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\005enum ");
lf[738]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[740]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[742]=C_decode_literal(C_heaptop,"\376B\000\000\003 (\052");
lf[743]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[744]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[746]=C_h_intern(&lf[746],3,"...");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[748]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[749]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[750]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\020nonnull-instance\376\377\016");
lf[751]=C_h_intern(&lf[751],4,"enum");
lf[752]=C_h_intern(&lf[752],5,"union");
lf[753]=C_h_intern(&lf[753],6,"struct");
lf[754]=C_h_intern(&lf[754],8,"template");
lf[755]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\017nonnull-pointer\376\003\000\000\002\376\001\000\000\011c-pointer\376\003\000\000\002\376\001\000\000\016scheme-po"
"inter\376\003\000\000\002\376\001\000\000\026nonnull-scheme-pointer\376\003\000\000\002\376\001\000\000\021nonnull-c-pointer\376\377\016");
lf[756]=C_h_intern(&lf[756],12,"nonnull-blob");
lf[757]=C_h_intern(&lf[757],8,"u8vector");
lf[758]=C_h_intern(&lf[758],16,"nonnull-u8vector");
lf[759]=C_h_intern(&lf[759],14,"scheme-pointer");
lf[760]=C_h_intern(&lf[760],22,"nonnull-scheme-pointer");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\042illegal foreign argument type `~A\047");
lf[762]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\031C_character_code((C_word)");
lf[764]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[766]=C_decode_literal(C_heaptop,"\376B\000\000\030(unsigned short)C_unfix(");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\027C_num_to_unsigned_long(");
lf[768]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_double(");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[770]=C_decode_literal(C_heaptop,"\376B\000\000\017C_num_to_int64(");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\025(size_t)C_num_to_int(");
lf[772]=C_decode_literal(C_heaptop,"\376B\000\000\020C_num_to_uint64(");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\016C_num_to_long(");
lf[774]=C_decode_literal(C_heaptop,"\376B\000\000\026C_num_to_unsigned_int(");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[776]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[778]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[780]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_u8vector_or_null(");
lf[782]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_u8vector(");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u16vector_or_null(");
lf[784]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u16vector(");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u32vector_or_null(");
lf[786]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u32vector(");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_s8vector_or_null(");
lf[788]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_s8vector(");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s16vector_or_null(");
lf[790]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s16vector(");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s32vector_or_null(");
lf[792]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s32vector(");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f32vector_or_null(");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f32vector(");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f64vector_or_null(");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f64vector(");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\033C_c_pointer_vector_or_null(");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\023C_c_pointer_vector(");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000\021C_string_or_null(");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_string(");
lf[801]=C_decode_literal(C_heaptop,"\376B\000\000\010C_truep(");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[803]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000\002\052(");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\020)C_c_pointer_nn(");
lf[812]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\002\052(");
lf[814]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_c_pointer_nn(");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000 illegal foreign return type `~A\047");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\031C_make_character((C_word)");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fix((C_word)");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000%C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fix((short)");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fix(0xffff&(C_word)");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fix((char)");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fix(0xff&(C_word)");
lf[823]=C_decode_literal(C_heaptop,"\376B\000\000\012C_flonum(&");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\012C_number(&");
lf[825]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[827]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[829]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_double_to_num(&");
lf[831]=C_decode_literal(C_heaptop,"\376B\000\000\006,(int)");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[833]=C_decode_literal(C_heaptop,"\376B\000\000\027C_unsigned_int_to_num(&");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\017C_long_to_num(&");
lf[835]=C_decode_literal(C_heaptop,"\376B\000\000\030C_unsigned_long_to_num(&");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\012C_mk_bool(");
lf[837]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_word)");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[839]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void\052)&");
lf[841]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[843]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void\052)&");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[848]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[850]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[852]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\001");
lf[854]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\000");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\012");
lf[856]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\016");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\002\377>");
lf[858]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\036");
lf[859]=C_decode_literal(C_heaptop,"\376B\000\000\002\377U");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[861]=C_h_intern(&lf[861],18,"\003sysfixnum->string");
lf[862]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\001");
lf[863]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[864]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[865]=C_decode_literal(C_heaptop,"\376B\000\000\001\001");
lf[866]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid literal - cannot encode");
lf[867]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[868]=C_h_intern(&lf[868],5,"cons\052");
lf[869]=C_h_intern(&lf[869],6,"random");
lf[870]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
C_register_lf2(lf,871,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k5507 in for-each-loop815 in k5489 in k5486 in k5480 in k5477 in k5443 in trampolines in k2633 in generate-code in k2627 in k2542 in k2539 in k2536 */
static void C_ccall f_5509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5499(t3,((C_word*)t0)[4],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[788] = {
{"f_10498:c_2dbackend_2escm",(void*)f_10498},
{"f_10492:c_2dbackend_2escm",(void*)f_10492},
{"f_4263:c_2dbackend_2escm",(void*)f_4263},
{"f_4267:c_2dbackend_2escm",(void*)f_4267},
{"f_6730:c_2dbackend_2escm",(void*)f_6730},
{"f_5522:c_2dbackend_2escm",(void*)f_5522},
{"f_4250:c_2dbackend_2escm",(void*)f_4250},
{"f_5545:c_2dbackend_2escm",(void*)f_5545},
{"f_10468:c_2dbackend_2escm",(void*)f_10468},
{"f_5532:c_2dbackend_2escm",(void*)f_5532},
{"f_10456:c_2dbackend_2escm",(void*)f_10456},
{"f_10453:c_2dbackend_2escm",(void*)f_10453},
{"f_10450:c_2dbackend_2escm",(void*)f_10450},
{"f_6628:c_2dbackend_2escm",(void*)f_6628},
{"f_5568:c_2dbackend_2escm",(void*)f_5568},
{"f_10480:c_2dbackend_2escm",(void*)f_10480},
{"f_6766:c_2dbackend_2escm",(void*)f_6766},
{"f_8199:c_2dbackend_2escm",(void*)f_8199},
{"f_8195:c_2dbackend_2escm",(void*)f_8195},
{"f_10721:c_2dbackend_2escm",(void*)f_10721},
{"f_5555:c_2dbackend_2escm",(void*)f_5555},
{"f_5584:c_2dbackend_2escm",(void*)f_5584},
{"f_5587:c_2dbackend_2escm",(void*)f_5587},
{"f_5581:c_2dbackend_2escm",(void*)f_5581},
{"f_5572:c_2dbackend_2escm",(void*)f_5572},
{"f_5578:c_2dbackend_2escm",(void*)f_5578},
{"f_5575:c_2dbackend_2escm",(void*)f_5575},
{"f_10444:c_2dbackend_2escm",(void*)f_10444},
{"f_5593:c_2dbackend_2escm",(void*)f_5593},
{"f_5599:c_2dbackend_2escm",(void*)f_5599},
{"f_4848:c_2dbackend_2escm",(void*)f_4848},
{"f_4841:c_2dbackend_2escm",(void*)f_4841},
{"f_4839:c_2dbackend_2escm",(void*)f_4839},
{"f_4835:c_2dbackend_2escm",(void*)f_4835},
{"f_8603:c_2dbackend_2escm",(void*)f_8603},
{"f_4865:c_2dbackend_2escm",(void*)f_4865},
{"f_4862:c_2dbackend_2escm",(void*)f_4862},
{"f_4859:c_2dbackend_2escm",(void*)f_4859},
{"f_4886:c_2dbackend_2escm",(void*)f_4886},
{"f_4880:c_2dbackend_2escm",(void*)f_4880},
{"f_8706:c_2dbackend_2escm",(void*)f_8706},
{"f_4889:c_2dbackend_2escm",(void*)f_4889},
{"f_8708:c_2dbackend_2escm",(void*)f_8708},
{"f_10783:c_2dbackend_2escm",(void*)f_10783},
{"f_7282:c_2dbackend_2escm",(void*)f_7282},
{"f_4870:c_2dbackend_2escm",(void*)f_4870},
{"f_5095:c_2dbackend_2escm",(void*)f_5095},
{"f_5098:c_2dbackend_2escm",(void*)f_5098},
{"f_9557:c_2dbackend_2escm",(void*)f_9557},
{"f_5092:c_2dbackend_2escm",(void*)f_5092},
{"f_7285:c_2dbackend_2escm",(void*)f_7285},
{"f_7288:c_2dbackend_2escm",(void*)f_7288},
{"f_6817:c_2dbackend_2escm",(void*)f_6817},
{"f_10730:c_2dbackend_2escm",(void*)f_10730},
{"f_7270:c_2dbackend_2escm",(void*)f_7270},
{"f_7273:c_2dbackend_2escm",(void*)f_7273},
{"f_5088:c_2dbackend_2escm",(void*)f_5088},
{"f_7279:c_2dbackend_2escm",(void*)f_7279},
{"f_6807:c_2dbackend_2escm",(void*)f_6807},
{"f_6805:c_2dbackend_2escm",(void*)f_6805},
{"f_7261:c_2dbackend_2escm",(void*)f_7261},
{"f_6718:c_2dbackend_2escm",(void*)f_6718},
{"f_4892:c_2dbackend_2escm",(void*)f_4892},
{"f_7263:c_2dbackend_2escm",(void*)f_7263},
{"f_4895:c_2dbackend_2escm",(void*)f_4895},
{"f_5075:c_2dbackend_2escm",(void*)f_5075},
{"f_7267:c_2dbackend_2escm",(void*)f_7267},
{"f_10092:c_2dbackend_2escm",(void*)f_10092},
{"f_10089:c_2dbackend_2escm",(void*)f_10089},
{"f_10086:c_2dbackend_2escm",(void*)f_10086},
{"f_10080:c_2dbackend_2escm",(void*)f_10080},
{"f_8758:c_2dbackend_2escm",(void*)f_8758},
{"f_8751:c_2dbackend_2escm",(void*)f_8751},
{"f_8768:c_2dbackend_2escm",(void*)f_8768},
{"f_5046:c_2dbackend_2escm",(void*)f_5046},
{"f_8125:c_2dbackend_2escm",(void*)f_8125},
{"f_8775:c_2dbackend_2escm",(void*)f_8775},
{"f_5031:c_2dbackend_2escm",(void*)f_5031},
{"f_5036:c_2dbackend_2escm",(void*)f_5036},
{"f_10056:c_2dbackend_2escm",(void*)f_10056},
{"f_10053:c_2dbackend_2escm",(void*)f_10053},
{"f_7291:c_2dbackend_2escm",(void*)f_7291},
{"f_7294:c_2dbackend_2escm",(void*)f_7294},
{"f_8785:c_2dbackend_2escm",(void*)f_8785},
{"f_5020:c_2dbackend_2escm",(void*)f_5020},
{"f_5028:c_2dbackend_2escm",(void*)f_5028},
{"f_5025:c_2dbackend_2escm",(void*)f_5025},
{"f_7297:c_2dbackend_2escm",(void*)f_7297},
{"f_10041:c_2dbackend_2escm",(void*)f_10041},
{"f_7205:c_2dbackend_2escm",(void*)f_7205},
{"f_8792:c_2dbackend_2escm",(void*)f_8792},
{"f_5017:c_2dbackend_2escm",(void*)f_5017},
{"f_5013:c_2dbackend_2escm",(void*)f_5013},
{"f_5802:c_2dbackend_2escm",(void*)f_5802},
{"f_5800:c_2dbackend_2escm",(void*)f_5800},
{"f_8642:c_2dbackend_2escm",(void*)f_8642},
{"f_5000:c_2dbackend_2escm",(void*)f_5000},
{"f_10068:c_2dbackend_2escm",(void*)f_10068},
{"f_8659:c_2dbackend_2escm",(void*)f_8659},
{"f_10062:c_2dbackend_2escm",(void*)f_10062},
{"f_10065:c_2dbackend_2escm",(void*)f_10065},
{"f_8653:c_2dbackend_2escm",(void*)f_8653},
{"f_6138:c_2dbackend_2escm",(void*)f_6138},
{"f_10014:c_2dbackend_2escm",(void*)f_10014},
{"f_10011:c_2dbackend_2escm",(void*)f_10011},
{"f_10017:c_2dbackend_2escm",(void*)f_10017},
{"f_6132:c_2dbackend_2escm",(void*)f_6132},
{"f_10005:c_2dbackend_2escm",(void*)f_10005},
{"f_7248:c_2dbackend_2escm",(void*)f_7248},
{"f_10035:c_2dbackend_2escm",(void*)f_10035},
{"f_10038:c_2dbackend_2escm",(void*)f_10038},
{"f_5371:c_2dbackend_2escm",(void*)f_5371},
{"f_5377:c_2dbackend_2escm",(void*)f_5377},
{"f_5374:c_2dbackend_2escm",(void*)f_5374},
{"f_2604:c_2dbackend_2escm",(void*)f_2604},
{"f_9566:c_2dbackend_2escm",(void*)f_9566},
{"f_7238:c_2dbackend_2escm",(void*)f_7238},
{"f_7078:c_2dbackend_2escm",(void*)f_7078},
{"f_10029:c_2dbackend_2escm",(void*)f_10029},
{"f_5367:c_2dbackend_2escm",(void*)f_5367},
{"f_5365:c_2dbackend_2escm",(void*)f_5365},
{"f_2614:c_2dbackend_2escm",(void*)f_2614},
{"f_2629:c_2dbackend_2escm",(void*)f_2629},
{"f_7224:c_2dbackend_2escm",(void*)f_7224},
{"f_7227:c_2dbackend_2escm",(void*)f_7227},
{"f_9575:c_2dbackend_2escm",(void*)f_9575},
{"f_5310:c_2dbackend_2escm",(void*)f_5310},
{"f_7218:c_2dbackend_2escm",(void*)f_7218},
{"f_7570:c_2dbackend_2escm",(void*)f_7570},
{"f_5302:c_2dbackend_2escm",(void*)f_5302},
{"f_2631:c_2dbackend_2escm",(void*)f_2631},
{"f_2635:c_2dbackend_2escm",(void*)f_2635},
{"f_5927:c_2dbackend_2escm",(void*)f_5927},
{"f_2637:c_2dbackend_2escm",(void*)f_2637},
{"f_5920:c_2dbackend_2escm",(void*)f_5920},
{"f_7088:c_2dbackend_2escm",(void*)f_7088},
{"f_7560:c_2dbackend_2escm",(void*)f_7560},
{"f_5333:c_2dbackend_2escm",(void*)f_5333},
{"f_5911:c_2dbackend_2escm",(void*)f_5911},
{"f_7030:c_2dbackend_2escm",(void*)f_7030},
{"f_7038:c_2dbackend_2escm",(void*)f_7038},
{"f_5324:c_2dbackend_2escm",(void*)f_5324},
{"f_5326:c_2dbackend_2escm",(void*)f_5326},
{"f_5329:c_2dbackend_2escm",(void*)f_5329},
{"f_10209:c_2dbackend_2escm",(void*)f_10209},
{"f_8737:c_2dbackend_2escm",(void*)f_8737},
{"f_5933:c_2dbackend_2escm",(void*)f_5933},
{"f_10392:c_2dbackend_2escm",(void*)f_10392},
{"f_5065:c_2dbackend_2escm",(void*)f_5065},
{"f_3188:c_2dbackend_2escm",(void*)f_3188},
{"f_3185:c_2dbackend_2escm",(void*)f_3185},
{"f_10389:c_2dbackend_2escm",(void*)f_10389},
{"f_10386:c_2dbackend_2escm",(void*)f_10386},
{"f_10380:c_2dbackend_2escm",(void*)f_10380},
{"f_8683:c_2dbackend_2escm",(void*)f_8683},
{"f_8687:c_2dbackend_2escm",(void*)f_8687},
{"f_3132:c_2dbackend_2escm",(void*)f_3132},
{"f_8691:c_2dbackend_2escm",(void*)f_8691},
{"f_5989:c_2dbackend_2escm",(void*)f_5989},
{"f_3141:c_2dbackend_2escm",(void*)f_3141},
{"f_10368:c_2dbackend_2escm",(void*)f_10368},
{"f_5983:c_2dbackend_2escm",(void*)f_5983},
{"f_10365:c_2dbackend_2escm",(void*)f_10365},
{"f_10362:c_2dbackend_2escm",(void*)f_10362},
{"f_5395:c_2dbackend_2escm",(void*)f_5395},
{"f_5392:c_2dbackend_2escm",(void*)f_5392},
{"f_5398:c_2dbackend_2escm",(void*)f_5398},
{"f_3112:c_2dbackend_2escm",(void*)f_3112},
{"f_10356:c_2dbackend_2escm",(void*)f_10356},
{"f_8676:c_2dbackend_2escm",(void*)f_8676},
{"f_8670:c_2dbackend_2escm",(void*)f_8670},
{"f_5383:c_2dbackend_2escm",(void*)f_5383},
{"f_5389:c_2dbackend_2escm",(void*)f_5389},
{"f_5386:c_2dbackend_2escm",(void*)f_5386},
{"f_5380:c_2dbackend_2escm",(void*)f_5380},
{"f_3120:c_2dbackend_2escm",(void*)f_3120},
{"f_2649:c_2dbackend_2escm",(void*)f_2649},
{"f_4329:c_2dbackend_2escm",(void*)f_4329},
{"f_10341:c_2dbackend_2escm",(void*)f_10341},
{"f_10344:c_2dbackend_2escm",(void*)f_10344},
{"f_3117:c_2dbackend_2escm",(void*)f_3117},
{"f_3113:c_2dbackend_2escm",(void*)f_3113},
{"f_3924:c_2dbackend_2escm",(void*)f_3924},
{"f_2641:c_2dbackend_2escm",(void*)f_2641},
{"f_4312:c_2dbackend_2escm",(void*)f_4312},
{"f_3900:c_2dbackend_2escm",(void*)f_3900},
{"f_7598:c_2dbackend_2escm",(void*)f_7598},
{"f_7595:c_2dbackend_2escm",(void*)f_7595},
{"f_4315:c_2dbackend_2escm",(void*)f_4315},
{"f_4318:c_2dbackend_2escm",(void*)f_4318},
{"f_10332:c_2dbackend_2escm",(void*)f_10332},
{"f_10338:c_2dbackend_2escm",(void*)f_10338},
{"f_7592:c_2dbackend_2escm",(void*)f_7592},
{"f_3126:c_2dbackend_2escm",(void*)f_3126},
{"f_2652:c_2dbackend_2escm",(void*)f_2652},
{"f_7589:c_2dbackend_2escm",(void*)f_7589},
{"f_7585:c_2dbackend_2escm",(void*)f_7585},
{"f_10320:c_2dbackend_2escm",(void*)f_10320},
{"f_7583:c_2dbackend_2escm",(void*)f_7583},
{"f_5352:c_2dbackend_2escm",(void*)f_5352},
{"f_3907:c_2dbackend_2escm",(void*)f_3907},
{"f_3904:c_2dbackend_2escm",(void*)f_3904},
{"f_4337:c_2dbackend_2escm",(void*)f_4337},
{"f_10314:c_2dbackend_2escm",(void*)f_10314},
{"f_10317:c_2dbackend_2escm",(void*)f_10317},
{"f_6993:c_2dbackend_2escm",(void*)f_6993},
{"f_6996:c_2dbackend_2escm",(void*)f_6996},
{"f_6999:c_2dbackend_2escm",(void*)f_6999},
{"f_5342:c_2dbackend_2escm",(void*)f_5342},
{"f_2567:c_2dbackend_2escm",(void*)f_2567},
{"f_6990:c_2dbackend_2escm",(void*)f_6990},
{"f_4362:c_2dbackend_2escm",(void*)f_4362},
{"f_10308:c_2dbackend_2escm",(void*)f_10308},
{"f_6113:c_2dbackend_2escm",(void*)f_6113},
{"f_2577:c_2dbackend_2escm",(void*)f_2577},
{"f_10293:c_2dbackend_2escm",(void*)f_10293},
{"f_4359:c_2dbackend_2escm",(void*)f_4359},
{"f_6148:c_2dbackend_2escm",(void*)f_6148},
{"f_6145:c_2dbackend_2escm",(void*)f_6145},
{"f_6974:c_2dbackend_2escm",(void*)f_6974},
{"f_7552:c_2dbackend_2escm",(void*)f_7552},
{"f_6971:c_2dbackend_2escm",(void*)f_6971},
{"f_4309:c_2dbackend_2escm",(void*)f_4309},
{"f_3414:c_2dbackend_2escm",(void*)f_3414},
{"f_3417:c_2dbackend_2escm",(void*)f_3417},
{"f_7541:c_2dbackend_2escm",(void*)f_7541},
{"f_6128:c_2dbackend_2escm",(void*)f_6128},
{"f_6959:c_2dbackend_2escm",(void*)f_6959},
{"f_6956:c_2dbackend_2escm",(void*)f_6956},
{"f_6953:c_2dbackend_2escm",(void*)f_6953},
{"f_6950:c_2dbackend_2escm",(void*)f_6950},
{"f_3477:c_2dbackend_2escm",(void*)f_3477},
{"f_3474:c_2dbackend_2escm",(void*)f_3474},
{"f_5889:c_2dbackend_2escm",(void*)f_5889},
{"f_3470:c_2dbackend_2escm",(void*)f_3470},
{"f_6983:c_2dbackend_2escm",(void*)f_6983},
{"f_6987:c_2dbackend_2escm",(void*)f_6987},
{"f_2538:c_2dbackend_2escm",(void*)f_2538},
{"f_3447:c_2dbackend_2escm",(void*)f_3447},
{"f_3444:c_2dbackend_2escm",(void*)f_3444},
{"f_6104:c_2dbackend_2escm",(void*)f_6104},
{"f_6100:c_2dbackend_2escm",(void*)f_6100},
{"f_5860:c_2dbackend_2escm",(void*)f_5860},
{"f_2590:c_2dbackend_2escm",(void*)f_2590},
{"f_5867:c_2dbackend_2escm",(void*)f_5867},
{"f_6965:c_2dbackend_2escm",(void*)f_6965},
{"f_6968:c_2dbackend_2escm",(void*)f_6968},
{"f_6962:c_2dbackend_2escm",(void*)f_6962},
{"f_2599:c_2dbackend_2escm",(void*)f_2599},
{"f_3151:c_2dbackend_2escm",(void*)f_3151},
{"f_3427:c_2dbackend_2escm",(void*)f_3427},
{"f_3423:c_2dbackend_2escm",(void*)f_3423},
{"f_10221:c_2dbackend_2escm",(void*)f_10221},
{"f_5842:c_2dbackend_2escm",(void*)f_5842},
{"f_7040:c_2dbackend_2escm",(void*)f_7040},
{"f_7049:c_2dbackend_2escm",(void*)f_7049},
{"f_6946:c_2dbackend_2escm",(void*)f_6946},
{"f_6943:c_2dbackend_2escm",(void*)f_6943},
{"f_10215:c_2dbackend_2escm",(void*)f_10215},
{"f_10218:c_2dbackend_2escm",(void*)f_10218},
{"f_3486:c_2dbackend_2escm",(void*)f_3486},
{"f_5831:c_2dbackend_2escm",(void*)f_5831},
{"f_2544:c_2dbackend_2escm",(void*)f_2544},
{"f_2541:c_2dbackend_2escm",(void*)f_2541},
{"f_2547:c_2dbackend_2escm",(void*)f_2547},
{"f_10242:c_2dbackend_2escm",(void*)f_10242},
{"f_10245:c_2dbackend_2escm",(void*)f_10245},
{"f_4385:c_2dbackend_2escm",(void*)f_4385},
{"f_4382:c_2dbackend_2escm",(void*)f_4382},
{"f_6253:c_2dbackend_2escm",(void*)f_6253},
{"f_3494:c_2dbackend_2escm",(void*)f_3494},
{"f_6256:c_2dbackend_2escm",(void*)f_6256},
{"f_6259:c_2dbackend_2escm",(void*)f_6259},
{"f_6250:c_2dbackend_2escm",(void*)f_6250},
{"f_10233:c_2dbackend_2escm",(void*)f_10233},
{"f_10239:c_2dbackend_2escm",(void*)f_10239},
{"f_10997:c_2dbackend_2escm",(void*)f_10997},
{"f_10999:c_2dbackend_2escm",(void*)f_10999},
{"f_3469:c_2dbackend_2escm",(void*)f_3469},
{"f_3466:c_2dbackend_2escm",(void*)f_3466},
{"f_3463:c_2dbackend_2escm",(void*)f_3463},
{"f_6244:c_2dbackend_2escm",(void*)f_6244},
{"f_6247:c_2dbackend_2escm",(void*)f_6247},
{"f_6241:c_2dbackend_2escm",(void*)f_6241},
{"f_10266:c_2dbackend_2escm",(void*)f_10266},
{"f_10985:c_2dbackend_2escm",(void*)f_10985},
{"f_8443:c_2dbackend_2escm",(void*)f_8443},
{"f_6238:c_2dbackend_2escm",(void*)f_6238},
{"f_6235:c_2dbackend_2escm",(void*)f_6235},
{"f_7004:c_2dbackend_2escm",(void*)f_7004},
{"f_7008:c_2dbackend_2escm",(void*)f_7008},
{"f_6229:c_2dbackend_2escm",(void*)f_6229},
{"f_6226:c_2dbackend_2escm",(void*)f_6226},
{"f_6223:c_2dbackend_2escm",(void*)f_6223},
{"f_6220:c_2dbackend_2escm",(void*)f_6220},
{"f_6217:c_2dbackend_2escm",(void*)f_6217},
{"f_6214:c_2dbackend_2escm",(void*)f_6214},
{"f_6210:c_2dbackend_2escm",(void*)f_6210},
{"f_10270:c_2dbackend_2escm",(void*)f_10270},
{"f_10955:c_2dbackend_2escm",(void*)f_10955},
{"f_6204:c_2dbackend_2escm",(void*)f_6204},
{"f_7324:c_2dbackend_2escm",(void*)f_7324},
{"f_7321:c_2dbackend_2escm",(void*)f_7321},
{"f_7339:c_2dbackend_2escm",(void*)f_7339},
{"f_8464:c_2dbackend_2escm",(void*)f_8464},
{"f_7351:c_2dbackend_2escm",(void*)f_7351},
{"f_7327:c_2dbackend_2escm",(void*)f_7327},
{"f_10916:c_2dbackend_2escm",(void*)f_10916},
{"f_7343:c_2dbackend_2escm",(void*)f_7343},
{"f_7357:c_2dbackend_2escm",(void*)f_7357},
{"f_10903:c_2dbackend_2escm",(void*)f_10903},
{"f_7372:c_2dbackend_2escm",(void*)f_7372},
{"f_3972:c_2dbackend_2escm",(void*)f_3972},
{"f_7347:c_2dbackend_2escm",(void*)f_7347},
{"f_3982:c_2dbackend_2escm",(void*)f_3982},
{"f_7315:c_2dbackend_2escm",(void*)f_7315},
{"f_7312:c_2dbackend_2escm",(void*)f_7312},
{"f_6295:c_2dbackend_2escm",(void*)f_6295},
{"f_6298:c_2dbackend_2escm",(void*)f_6298},
{"f_9679:c_2dbackend_2escm",(void*)f_9679},
{"f_6292:c_2dbackend_2escm",(void*)f_6292},
{"f_7303:c_2dbackend_2escm",(void*)f_7303},
{"f_7306:c_2dbackend_2escm",(void*)f_7306},
{"f_7300:c_2dbackend_2escm",(void*)f_7300},
{"f_6289:c_2dbackend_2escm",(void*)f_6289},
{"f_6286:c_2dbackend_2escm",(void*)f_6286},
{"f_7318:c_2dbackend_2escm",(void*)f_7318},
{"f_6283:c_2dbackend_2escm",(void*)f_6283},
{"f_6280:c_2dbackend_2escm",(void*)f_6280},
{"f_6912:c_2dbackend_2escm",(void*)f_6912},
{"f_3930:c_2dbackend_2escm",(void*)f_3930},
{"f_7330:c_2dbackend_2escm",(void*)f_7330},
{"f_6274:c_2dbackend_2escm",(void*)f_6274},
{"f_7309:c_2dbackend_2escm",(void*)f_7309},
{"f_6277:c_2dbackend_2escm",(void*)f_6277},
{"f_6271:c_2dbackend_2escm",(void*)f_6271},
{"f_2802:c_2dbackend_2escm",(void*)f_2802},
{"f_6354:c_2dbackend_2escm",(void*)f_6354},
{"f_6357:c_2dbackend_2escm",(void*)f_6357},
{"f_6351:c_2dbackend_2escm",(void*)f_6351},
{"f_6265:c_2dbackend_2escm",(void*)f_6265},
{"f_6262:c_2dbackend_2escm",(void*)f_6262},
{"f_6268:c_2dbackend_2escm",(void*)f_6268},
{"f_3935:c_2dbackend_2escm",(void*)f_3935},
{"f_2808:c_2dbackend_2escm",(void*)f_2808},
{"f_6342:c_2dbackend_2escm",(void*)f_6342},
{"f_2805:c_2dbackend_2escm",(void*)f_2805},
{"f_6345:c_2dbackend_2escm",(void*)f_6345},
{"f_6348:c_2dbackend_2escm",(void*)f_6348},
{"f_6339:c_2dbackend_2escm",(void*)f_6339},
{"f_3945:c_2dbackend_2escm",(void*)f_3945},
{"f_6336:c_2dbackend_2escm",(void*)f_6336},
{"f_6330:c_2dbackend_2escm",(void*)f_6330},
{"f_3916:c_2dbackend_2escm",(void*)f_3916},
{"f_6320:c_2dbackend_2escm",(void*)f_6320},
{"f_6313:c_2dbackend_2escm",(void*)f_6313},
{"f_7363:c_2dbackend_2escm",(void*)f_7363},
{"f_6093:c_2dbackend_2escm",(void*)f_6093},
{"f_6310:c_2dbackend_2escm",(void*)f_6310},
{"f_7378:c_2dbackend_2escm",(void*)f_7378},
{"f_6307:c_2dbackend_2escm",(void*)f_6307},
{"f_6304:c_2dbackend_2escm",(void*)f_6304},
{"f_7393:c_2dbackend_2escm",(void*)f_7393},
{"f_7390:c_2dbackend_2escm",(void*)f_7390},
{"f_6301:c_2dbackend_2escm",(void*)f_6301},
{"f_7366:c_2dbackend_2escm",(void*)f_7366},
{"f_2857:c_2dbackend_2escm",(void*)f_2857},
{"f_7381:c_2dbackend_2escm",(void*)f_7381},
{"f_7384:c_2dbackend_2escm",(void*)f_7384},
{"f_6072:c_2dbackend_2escm",(void*)f_6072},
{"f_2873:c_2dbackend_2escm",(void*)f_2873},
{"f_2870:c_2dbackend_2escm",(void*)f_2870},
{"f_2867:c_2dbackend_2escm",(void*)f_2867},
{"f_6062:c_2dbackend_2escm",(void*)f_6062},
{"f_6060:c_2dbackend_2escm",(void*)f_6060},
{"f_6077:c_2dbackend_2escm",(void*)f_6077},
{"f_5165:c_2dbackend_2escm",(void*)f_5165},
{"f_2811:c_2dbackend_2escm",(void*)f_2811},
{"f_2814:c_2dbackend_2escm",(void*)f_2814},
{"f_8220:c_2dbackend_2escm",(void*)f_8220},
{"f_5153:c_2dbackend_2escm",(void*)f_5153},
{"f_5150:c_2dbackend_2escm",(void*)f_5150},
{"f_5156:c_2dbackend_2escm",(void*)f_5156},
{"f_4598:c_2dbackend_2escm",(void*)f_4598},
{"f_8229:c_2dbackend_2escm",(void*)f_8229},
{"f_5159:c_2dbackend_2escm",(void*)f_5159},
{"f_8225:c_2dbackend_2escm",(void*)f_8225},
{"f_5101:c_2dbackend_2escm",(void*)f_5101},
{"f_5107:c_2dbackend_2escm",(void*)f_5107},
{"f_5104:c_2dbackend_2escm",(void*)f_5104},
{"f_6397:c_2dbackend_2escm",(void*)f_6397},
{"f_6387:c_2dbackend_2escm",(void*)f_6387},
{"f_2909:c_2dbackend_2escm",(void*)f_2909},
{"f_6372:c_2dbackend_2escm",(void*)f_6372},
{"f_2915:c_2dbackend_2escm",(void*)f_2915},
{"f_2912:c_2dbackend_2escm",(void*)f_2912},
{"f_5144:c_2dbackend_2escm",(void*)f_5144},
{"f_5147:c_2dbackend_2escm",(void*)f_5147},
{"f_6363:c_2dbackend_2escm",(void*)f_6363},
{"f_6369:c_2dbackend_2escm",(void*)f_6369},
{"f_6366:c_2dbackend_2escm",(void*)f_6366},
{"f_6360:c_2dbackend_2escm",(void*)f_6360},
{"f_8244:c_2dbackend_2escm",(void*)f_8244},
{"f_5131:c_2dbackend_2escm",(void*)f_5131},
{"f_5138:c_2dbackend_2escm",(void*)f_5138},
{"f_8258:c_2dbackend_2escm",(void*)f_8258},
{"f_8256:c_2dbackend_2escm",(void*)f_8256},
{"f_5177:c_2dbackend_2escm",(void*)f_5177},
{"f_8202:c_2dbackend_2escm",(void*)f_8202},
{"f_5174:c_2dbackend_2escm",(void*)f_5174},
{"f_8208:c_2dbackend_2escm",(void*)f_8208},
{"f_8205:c_2dbackend_2escm",(void*)f_8205},
{"f_5120:c_2dbackend_2escm",(void*)f_5120},
{"f_8217:c_2dbackend_2escm",(void*)f_8217},
{"f_11044:c_2dbackend_2escm",(void*)f_11044},
{"f_8214:c_2dbackend_2escm",(void*)f_8214},
{"f_11048:c_2dbackend_2escm",(void*)f_11048},
{"f_5707:c_2dbackend_2escm",(void*)f_5707},
{"f_11041:c_2dbackend_2escm",(void*)f_11041},
{"f_5110:c_2dbackend_2escm",(void*)f_5110},
{"f_8265:c_2dbackend_2escm",(void*)f_8265},
{"f_5119:c_2dbackend_2escm",(void*)f_5119},
{"f_5116:c_2dbackend_2escm",(void*)f_5116},
{"f_5113:c_2dbackend_2escm",(void*)f_5113},
{"f_11052:c_2dbackend_2escm",(void*)f_11052},
{"f_8260:c_2dbackend_2escm",(void*)f_8260},
{"f_11056:c_2dbackend_2escm",(void*)f_11056},
{"f_9602:c_2dbackend_2escm",(void*)f_9602},
{"f_11029:c_2dbackend_2escm",(void*)f_11029},
{"f_11023:c_2dbackend_2escm",(void*)f_11023},
{"f_5722:c_2dbackend_2escm",(void*)f_5722},
{"f_11038:c_2dbackend_2escm",(void*)f_11038},
{"f_11035:c_2dbackend_2escm",(void*)f_11035},
{"f_7187:c_2dbackend_2escm",(void*)f_7187},
{"f_11032:c_2dbackend_2escm",(void*)f_11032},
{"f_5641:c_2dbackend_2escm",(void*)f_5641},
{"f_5633:c_2dbackend_2escm",(void*)f_5633},
{"f_5637:c_2dbackend_2escm",(void*)f_5637},
{"f_3602:c_2dbackend_2escm",(void*)f_3602},
{"f_7159:c_2dbackend_2escm",(void*)f_7159},
{"f_3617:c_2dbackend_2escm",(void*)f_3617},
{"f_3614:c_2dbackend_2escm",(void*)f_3614},
{"f_5621:c_2dbackend_2escm",(void*)f_5621},
{"f_5627:c_2dbackend_2escm",(void*)f_5627},
{"f_7151:c_2dbackend_2escm",(void*)f_7151},
{"f_3665:c_2dbackend_2escm",(void*)f_3665},
{"f_6022:c_2dbackend_2escm",(void*)f_6022},
{"f_5611:c_2dbackend_2escm",(void*)f_5611},
{"f_3662:c_2dbackend_2escm",(void*)f_3662},
{"f_5614:c_2dbackend_2escm",(void*)f_5614},
{"f_7143:c_2dbackend_2escm",(void*)f_7143},
{"f_7145:c_2dbackend_2escm",(void*)f_7145},
{"f_5602:c_2dbackend_2escm",(void*)f_5602},
{"f_5605:c_2dbackend_2escm",(void*)f_5605},
{"f_3672:c_2dbackend_2escm",(void*)f_3672},
{"f_5608:c_2dbackend_2escm",(void*)f_5608},
{"f_6029:c_2dbackend_2escm",(void*)f_6029},
{"f_5194:c_2dbackend_2escm",(void*)f_5194},
{"f_5191:c_2dbackend_2escm",(void*)f_5191},
{"f_7161:c_2dbackend_2escm",(void*)f_7161},
{"f_6019:c_2dbackend_2escm",(void*)f_6019},
{"f_7165:c_2dbackend_2escm",(void*)f_7165},
{"f_6016:c_2dbackend_2escm",(void*)f_6016},
{"f_3636:c_2dbackend_2escm",(void*)f_3636},
{"f_7625:c_2dbackend_2escm",(void*)f_7625},
{"f_3630:c_2dbackend_2escm",(void*)f_3630},
{"f_3682:c_2dbackend_2escm",(void*)f_3682},
{"f_3689:c_2dbackend_2escm",(void*)f_3689},
{"f_7616:c_2dbackend_2escm",(void*)f_7616},
{"f_3696:c_2dbackend_2escm",(void*)f_3696},
{"f_9936:c_2dbackend_2escm",(void*)f_9936},
{"f_9938:c_2dbackend_2escm",(void*)f_9938},
{"f_6416:c_2dbackend_2escm",(void*)f_6416},
{"f_4709:c_2dbackend_2escm",(void*)f_4709},
{"f_5690:c_2dbackend_2escm",(void*)f_5690},
{"f_4401:c_2dbackend_2escm",(void*)f_4401},
{"f_4407:c_2dbackend_2escm",(void*)f_4407},
{"f_4404:c_2dbackend_2escm",(void*)f_4404},
{"f_5680:c_2dbackend_2escm",(void*)f_5680},
{"f_4431:c_2dbackend_2escm",(void*)f_4431},
{"f_6450:c_2dbackend_2escm",(void*)f_6450},
{"f_5672:c_2dbackend_2escm",(void*)f_5672},
{"f_5674:c_2dbackend_2escm",(void*)f_5674},
{"f_2984:c_2dbackend_2escm",(void*)f_2984},
{"f_7659:c_2dbackend_2escm",(void*)f_7659},
{"f_2981:c_2dbackend_2escm",(void*)f_2981},
{"f_7655:c_2dbackend_2escm",(void*)f_7655},
{"f_4428:c_2dbackend_2escm",(void*)f_4428},
{"f_2987:c_2dbackend_2escm",(void*)f_2987},
{"f_3659:c_2dbackend_2escm",(void*)f_3659},
{"f_3656:c_2dbackend_2escm",(void*)f_3656},
{"f_4719:c_2dbackend_2escm",(void*)f_4719},
{"f_5661:c_2dbackend_2escm",(void*)f_5661},
{"f_7649:c_2dbackend_2escm",(void*)f_7649},
{"f_2990:c_2dbackend_2escm",(void*)f_2990},
{"f_2965:c_2dbackend_2escm",(void*)f_2965},
{"f_4444:c_2dbackend_2escm",(void*)f_4444},
{"f_4441:c_2dbackend_2escm",(void*)f_4441},
{"f_2962:c_2dbackend_2escm",(void*)f_2962},
{"f_7637:c_2dbackend_2escm",(void*)f_7637},
{"f_4447:c_2dbackend_2escm",(void*)f_4447},
{"f_5793:c_2dbackend_2escm",(void*)f_5793},
{"f_5797:c_2dbackend_2escm",(void*)f_5797},
{"f_6422:c_2dbackend_2escm",(void*)f_6422},
{"f_6438:c_2dbackend_2escm",(void*)f_6438},
{"f_6435:c_2dbackend_2escm",(void*)f_6435},
{"f_7692:c_2dbackend_2escm",(void*)f_7692},
{"f_6412:c_2dbackend_2escm",(void*)f_6412},
{"f_4418:c_2dbackend_2escm",(void*)f_4418},
{"f_6498:c_2dbackend_2escm",(void*)f_6498},
{"f_6494:c_2dbackend_2escm",(void*)f_6494},
{"f_4488:c_2dbackend_2escm",(void*)f_4488},
{"f_4485:c_2dbackend_2escm",(void*)f_4485},
{"f_4482:c_2dbackend_2escm",(void*)f_4482},
{"f_2935:c_2dbackend_2escm",(void*)f_2935},
{"f_2938:c_2dbackend_2escm",(void*)f_2938},
{"f_8335:c_2dbackend_2escm",(void*)f_8335},
{"f_5772:c_2dbackend_2escm",(void*)f_5772},
{"f_4082:c_2dbackend_2escm",(void*)f_4082},
{"f_6441:c_2dbackend_2escm",(void*)f_6441},
{"f_4450:c_2dbackend_2escm",(void*)f_4450},
{"f_4070:c_2dbackend_2escm",(void*)f_4070},
{"f_3835:c_2dbackend_2escm",(void*)f_3835},
{"f_5713:c_2dbackend_2escm",(void*)f_5713},
{"f_5719:c_2dbackend_2escm",(void*)f_5719},
{"f_5716:c_2dbackend_2escm",(void*)f_5716},
{"f_3842:c_2dbackend_2escm",(void*)f_3842},
{"f_3846:c_2dbackend_2escm",(void*)f_3846},
{"f_7135:c_2dbackend_2escm",(void*)f_7135},
{"f_7129:c_2dbackend_2escm",(void*)f_7129},
{"f_4094:c_2dbackend_2escm",(void*)f_4094},
{"f_6513:c_2dbackend_2escm",(void*)f_6513},
{"f_5737:c_2dbackend_2escm",(void*)f_5737},
{"f_5730:c_2dbackend_2escm",(void*)f_5730},
{"f_6510:c_2dbackend_2escm",(void*)f_6510},
{"f_7604:c_2dbackend_2escm",(void*)f_7604},
{"f_7606:c_2dbackend_2escm",(void*)f_7606},
{"f_4497:c_2dbackend_2escm",(void*)f_4497},
{"f_3828:c_2dbackend_2escm",(void*)f_3828},
{"f_4491:c_2dbackend_2escm",(void*)f_4491},
{"f_6507:c_2dbackend_2escm",(void*)f_6507},
{"f_4494:c_2dbackend_2escm",(void*)f_4494},
{"f_6504:c_2dbackend_2escm",(void*)f_6504},
{"f_5768:c_2dbackend_2escm",(void*)f_5768},
{"f_6501:c_2dbackend_2escm",(void*)f_6501},
{"f_6573:c_2dbackend_2escm",(void*)f_6573},
{"f_6576:c_2dbackend_2escm",(void*)f_6576},
{"f_6579:c_2dbackend_2escm",(void*)f_6579},
{"f_6570:c_2dbackend_2escm",(void*)f_6570},
{"f_6564:c_2dbackend_2escm",(void*)f_6564},
{"f_6567:c_2dbackend_2escm",(void*)f_6567},
{"f_6536:c_2dbackend_2escm",(void*)f_6536},
{"f_4020:c_2dbackend_2escm",(void*)f_4020},
{"f_4739:c_2dbackend_2escm",(void*)f_4739},
{"f_3057:c_2dbackend_2escm",(void*)f_3057},
{"f_3054:c_2dbackend_2escm",(void*)f_3054},
{"f_6525:c_2dbackend_2escm",(void*)f_6525},
{"f_3051:c_2dbackend_2escm",(void*)f_3051},
{"f_4014:c_2dbackend_2escm",(void*)f_4014},
{"f_4766:c_2dbackend_2escm",(void*)f_4766},
{"f_4017:c_2dbackend_2escm",(void*)f_4017},
{"f_6522:c_2dbackend_2escm",(void*)f_6522},
{"f_4762:c_2dbackend_2escm",(void*)f_4762},
{"f_3896:c_2dbackend_2escm",(void*)f_3896},
{"f_3899:c_2dbackend_2escm",(void*)f_3899},
{"f_3060:c_2dbackend_2escm",(void*)f_3060},
{"f_6591:c_2dbackend_2escm",(void*)f_6591},
{"f_4754:c_2dbackend_2escm",(void*)f_4754},
{"f_4750:c_2dbackend_2escm",(void*)f_4750},
{"f_4758:c_2dbackend_2escm",(void*)f_4758},
{"f_3315:c_2dbackend_2escm",(void*)f_3315},
{"f_6582:c_2dbackend_2escm",(void*)f_6582},
{"f_4030:c_2dbackend_2escm",(void*)f_4030},
{"f_4780:c_2dbackend_2escm",(void*)f_4780},
{"f_3311:c_2dbackend_2escm",(void*)f_3311},
{"f_8819:c_2dbackend_2escm",(void*)f_8819},
{"f_4061:c_2dbackend_2escm",(void*)f_4061},
{"f_4064:c_2dbackend_2escm",(void*)f_4064},
{"f_4067:c_2dbackend_2escm",(void*)f_4067},
{"f_4775:c_2dbackend_2escm",(void*)f_4775},
{"f_4778:c_2dbackend_2escm",(void*)f_4778},
{"f_8826:c_2dbackend_2escm",(void*)f_8826},
{"f_6558:c_2dbackend_2escm",(void*)f_6558},
{"f_6550:c_2dbackend_2escm",(void*)f_6550},
{"f_8802:c_2dbackend_2escm",(void*)f_8802},
{"f_3300:c_2dbackend_2escm",(void*)f_3300},
{"f_8809:c_2dbackend_2escm",(void*)f_8809},
{"f_3356:c_2dbackend_2escm",(void*)f_3356},
{"f_3089:c_2dbackend_2escm",(void*)f_3089},
{"f_3086:c_2dbackend_2escm",(void*)f_3086},
{"f_3083:c_2dbackend_2escm",(void*)f_3083},
{"f_3080:c_2dbackend_2escm",(void*)f_3080},
{"f_3366:c_2dbackend_2escm",(void*)f_3366},
{"f_3363:c_2dbackend_2escm",(void*)f_3363},
{"f_3360:c_2dbackend_2escm",(void*)f_3360},
{"f_8836:c_2dbackend_2escm",(void*)f_8836},
{"f_4937:c_2dbackend_2escm",(void*)f_4937},
{"f_3345:c_2dbackend_2escm",(void*)f_3345},
{"f_10501:c_2dbackend_2escm",(void*)f_10501},
{"f_8572:c_2dbackend_2escm",(void*)f_8572},
{"f_10504:c_2dbackend_2escm",(void*)f_10504},
{"f_3342:c_2dbackend_2escm",(void*)f_3342},
{"f_8843:c_2dbackend_2escm",(void*)f_8843},
{"f11835:c_2dbackend_2escm",(void*)f11835},
{"f_8894:c_2dbackend_2escm",(void*)f_8894},
{"f_8584:c_2dbackend_2escm",(void*)f_8584},
{"f_8896:c_2dbackend_2escm",(void*)f_8896},
{"f_8073:c_2dbackend_2escm",(void*)f_8073},
{"f_8070:c_2dbackend_2escm",(void*)f_8070},
{"f_3017:c_2dbackend_2escm",(void*)f_3017},
{"f_3014:c_2dbackend_2escm",(void*)f_3014},
{"f_3377:c_2dbackend_2escm",(void*)f_3377},
{"f_8599:c_2dbackend_2escm",(void*)f_8599},
{"f_8872:c_2dbackend_2escm",(void*)f_8872},
{"f_8876:c_2dbackend_2escm",(void*)f_8876},
{"f_8082:c_2dbackend_2escm",(void*)f_8082},
{"f_8085:c_2dbackend_2escm",(void*)f_8085},
{"f_3023:c_2dbackend_2escm",(void*)f_3023},
{"f_8088:c_2dbackend_2escm",(void*)f_8088},
{"f11827:c_2dbackend_2escm",(void*)f11827},
{"f_3020:c_2dbackend_2escm",(void*)f_3020},
{"f_3381:c_2dbackend_2escm",(void*)f_3381},
{"f_8058:c_2dbackend_2escm",(void*)f_8058},
{"f_8061:c_2dbackend_2escm",(void*)f_8061},
{"f_8064:c_2dbackend_2escm",(void*)f_8064},
{"f_8067:c_2dbackend_2escm",(void*)f_8067},
{"f_5401:c_2dbackend_2escm",(void*)f_5401},
{"f_5407:c_2dbackend_2escm",(void*)f_5407},
{"f_5404:c_2dbackend_2escm",(void*)f_5404},
{"f_5284:c_2dbackend_2escm",(void*)f_5284},
{"f_5479:c_2dbackend_2escm",(void*)f_5479},
{"f_9305:c_2dbackend_2escm",(void*)f_9305},
{"f_5473:c_2dbackend_2escm",(void*)f_5473},
{"f_8091:c_2dbackend_2escm",(void*)f_8091},
{"f_8094:c_2dbackend_2escm",(void*)f_8094},
{"f_9307:c_2dbackend_2escm",(void*)f_9307},
{"f_5462:c_2dbackend_2escm",(void*)f_5462},
{"f_5469:c_2dbackend_2escm",(void*)f_5469},
{"f_7414:c_2dbackend_2escm",(void*)f_7414},
{"f_5450:c_2dbackend_2escm",(void*)f_5450},
{"f_10134:c_2dbackend_2escm",(void*)f_10134},
{"f_7411:c_2dbackend_2escm",(void*)f_7411},
{"f_5459:c_2dbackend_2escm",(void*)f_5459},
{"f_5456:c_2dbackend_2escm",(void*)f_5456},
{"f_5453:c_2dbackend_2escm",(void*)f_5453},
{"f_7417:c_2dbackend_2escm",(void*)f_7417},
{"f_9362:c_2dbackend_2escm",(void*)f_9362},
{"f_7470:c_2dbackend_2escm",(void*)f_7470},
{"f_5274:c_2dbackend_2escm",(void*)f_5274},
{"f_7477:c_2dbackend_2escm",(void*)f_7477},
{"f_3297:c_2dbackend_2escm",(void*)f_3297},
{"f_3294:c_2dbackend_2escm",(void*)f_3294},
{"f_8853:c_2dbackend_2escm",(void*)f_8853},
{"f_4990:c_2dbackend_2escm",(void*)f_4990},
{"f_5414:c_2dbackend_2escm",(void*)f_5414},
{"f_5418:c_2dbackend_2escm",(void*)f_5418},
{"f_5256:c_2dbackend_2escm",(void*)f_5256},
{"f_5259:c_2dbackend_2escm",(void*)f_5259},
{"f_5482:c_2dbackend_2escm",(void*)f_5482},
{"f_5488:c_2dbackend_2escm",(void*)f_5488},
{"f_9335:c_2dbackend_2escm",(void*)f_9335},
{"f_5203:c_2dbackend_2escm",(void*)f_5203},
{"f_5206:c_2dbackend_2escm",(void*)f_5206},
{"f_5231:c_2dbackend_2escm",(void*)f_5231},
{"f_5234:c_2dbackend_2escm",(void*)f_5234},
{"f_5237:c_2dbackend_2escm",(void*)f_5237},
{"f_3259:c_2dbackend_2escm",(void*)f_3259},
{"f_7423:c_2dbackend_2escm",(void*)f_7423},
{"f_7420:c_2dbackend_2escm",(void*)f_7420},
{"f_5262:c_2dbackend_2escm",(void*)f_5262},
{"f_2799:c_2dbackend_2escm",(void*)f_2799},
{"f_4604:c_2dbackend_2escm",(void*)f_4604},
{"f_4608:c_2dbackend_2escm",(void*)f_4608},
{"f_7480:c_2dbackend_2escm",(void*)f_7480},
{"f_5446:c_2dbackend_2escm",(void*)f_5446},
{"f_5445:c_2dbackend_2escm",(void*)f_5445},
{"f_4920:c_2dbackend_2escm",(void*)f_4920},
{"f_3217:c_2dbackend_2escm",(void*)f_3217},
{"f_4910:c_2dbackend_2escm",(void*)f_4910},
{"f_7195:c_2dbackend_2escm",(void*)f_7195},
{"f_7452:c_2dbackend_2escm",(void*)f_7452},
{"f_6670:c_2dbackend_2escm",(void*)f_6670},
{"f_5499:c_2dbackend_2escm",(void*)f_5499},
{"f_5491:c_2dbackend_2escm",(void*)f_5491},
{"f_4648:c_2dbackend_2escm",(void*)f_4648},
{"f_4947:c_2dbackend_2escm",(void*)f_4947},
{"f_3511:c_2dbackend_2escm",(void*)f_3511},
{"f_4177:c_2dbackend_2escm",(void*)f_4177},
{"f_4174:c_2dbackend_2escm",(void*)f_4174},
{"f_4633:c_2dbackend_2escm",(void*)f_4633},
{"f_7448:c_2dbackend_2escm",(void*)f_7448},
{"f_4630:c_2dbackend_2escm",(void*)f_4630},
{"f_3709:c_2dbackend_2escm",(void*)f_3709},
{"f_4669:c_2dbackend_2escm",(void*)f_4669},
{"f_4196:c_2dbackend_2escm",(void*)f_4196},
{"f_4193:c_2dbackend_2escm",(void*)f_4193},
{"f_8925:c_2dbackend_2escm",(void*)f_8925},
{"f_4651:c_2dbackend_2escm",(void*)f_4651},
{"f_6631:c_2dbackend_2escm",(void*)f_6631},
{"f_4687:c_2dbackend_2escm",(void*)f_4687},
{"f_4681:c_2dbackend_2escm",(void*)f_4681},
{"f_4684:c_2dbackend_2escm",(void*)f_4684},
{"f_3735:c_2dbackend_2escm",(void*)f_3735},
{"f_3739:c_2dbackend_2escm",(void*)f_3739},
{"f_5240:c_2dbackend_2escm",(void*)f_5240},
{"f_4675:c_2dbackend_2escm",(void*)f_4675},
{"f_4672:c_2dbackend_2escm",(void*)f_4672},
{"f_4678:c_2dbackend_2escm",(void*)f_4678},
{"f_3749:c_2dbackend_2escm",(void*)f_3749},
{"f_3746:c_2dbackend_2escm",(void*)f_3746},
{"f_3521:c_2dbackend_2escm",(void*)f_3521},
{"f_10197:c_2dbackend_2escm",(void*)f_10197},
{"f_10194:c_2dbackend_2escm",(void*)f_10194},
{"f_10191:c_2dbackend_2escm",(void*)f_10191},
{"f_3713:c_2dbackend_2escm",(void*)f_3713},
{"f_4282:c_2dbackend_2escm",(void*)f_4282},
{"f_6640:c_2dbackend_2escm",(void*)f_6640},
{"f_10185:c_2dbackend_2escm",(void*)f_10185},
{"f_4699:c_2dbackend_2escm",(void*)f_4699},
{"f_4279:c_2dbackend_2escm",(void*)f_4279},
{"f_3728:c_2dbackend_2escm",(void*)f_3728},
{"f_3503:c_2dbackend_2escm",(void*)f_3503},
{"f_3721:c_2dbackend_2escm",(void*)f_3721},
{"f_3500:c_2dbackend_2escm",(void*)f_3500},
{"f_10898:c_2dbackend_2escm",(void*)f_10898},
{"f_3263:c_2dbackend_2escm",(void*)f_3263},
{"f_3590:c_2dbackend_2escm",(void*)f_3590},
{"f_3770:c_2dbackend_2escm",(void*)f_3770},
{"f_10167:c_2dbackend_2escm",(void*)f_10167},
{"f_10164:c_2dbackend_2escm",(void*)f_10164},
{"f_4297:c_2dbackend_2escm",(void*)f_4297},
{"f_4293:c_2dbackend_2escm",(void*)f_4293},
{"f_10158:c_2dbackend_2escm",(void*)f_10158},
{"f_3758:c_2dbackend_2escm",(void*)f_3758},
{"f_3593:c_2dbackend_2escm",(void*)f_3593},
{"f_3599:c_2dbackend_2escm",(void*)f_3599},
{"f_3755:c_2dbackend_2escm",(void*)f_3755},
{"f_3596:c_2dbackend_2escm",(void*)f_3596},
{"f_4113:c_2dbackend_2escm",(void*)f_4113},
{"f_3752:c_2dbackend_2escm",(void*)f_3752},
{"f_4117:c_2dbackend_2escm",(void*)f_4117},
{"f_10146:c_2dbackend_2escm",(void*)f_10146},
{"f_10140:c_2dbackend_2escm",(void*)f_10140},
{"f_10143:c_2dbackend_2escm",(void*)f_10143},
{"f_4809:c_2dbackend_2escm",(void*)f_4809},
{"f_3764:c_2dbackend_2escm",(void*)f_3764},
{"f_3761:c_2dbackend_2escm",(void*)f_3761},
{"f_10410:c_2dbackend_2escm",(void*)f_10410},
{"f_10413:c_2dbackend_2escm",(void*)f_10413},
{"f_10416:c_2dbackend_2escm",(void*)f_10416},
{"f_4136:c_2dbackend_2escm",(void*)f_4136},
{"f_4139:c_2dbackend_2escm",(void*)f_4139},
{"f_6895:c_2dbackend_2escm",(void*)f_6895},
{"f_6898:c_2dbackend_2escm",(void*)f_6898},
{"f_3548:c_2dbackend_2escm",(void*)f_3548},
{"f_4825:c_2dbackend_2escm",(void*)f_4825},
{"f_6721:c_2dbackend_2escm",(void*)f_6721},
{"f_10116:c_2dbackend_2escm",(void*)f_10116},
{"f_10113:c_2dbackend_2escm",(void*)f_10113},
{"f_10119:c_2dbackend_2escm",(void*)f_10119},
{"f_3558:c_2dbackend_2escm",(void*)f_3558},
{"f_8164:c_2dbackend_2escm",(void*)f_8164},
{"f_4817:c_2dbackend_2escm",(void*)f_4817},
{"f_4205:c_2dbackend_2escm",(void*)f_4205},
{"f_6790:c_2dbackend_2escm",(void*)f_6790},
{"f_4155:c_2dbackend_2escm",(void*)f_4155},
{"f_4158:c_2dbackend_2escm",(void*)f_4158},
{"f_6873:c_2dbackend_2escm",(void*)f_6873},
{"f_6879:c_2dbackend_2escm",(void*)f_6879},
{"f_6876:c_2dbackend_2escm",(void*)f_6876},
{"f_10107:c_2dbackend_2escm",(void*)f_10107},
{"f_8172:c_2dbackend_2escm",(void*)f_8172},
{"f_6780:c_2dbackend_2escm",(void*)f_6780},
{"f_10170:c_2dbackend_2escm",(void*)f_10170},
{"f_8182:c_2dbackend_2escm",(void*)f_8182},
{"f_4229:c_2dbackend_2escm",(void*)f_4229},
{"f_10404:c_2dbackend_2escm",(void*)f_10404},
{"f_8113:c_2dbackend_2escm",(void*)f_8113},
{"f_8115:c_2dbackend_2escm",(void*)f_8115},
{"f_6848:c_2dbackend_2escm",(void*)f_6848},
{"f_6845:c_2dbackend_2escm",(void*)f_6845},
{"f_10477:c_2dbackend_2escm",(void*)f_10477},
{"f_10474:c_2dbackend_2escm",(void*)f_10474},
{"f_6757:c_2dbackend_2escm",(void*)f_6757},
{"f_4247:c_2dbackend_2escm",(void*)f_4247},
{"toplevel:c_2dbackend_2escm",(void*)C_backend_toplevel},
{"f_5509:c_2dbackend_2escm",(void*)f_5509},
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
S|  map		4
S|  sprintf		21
S|  for-each		22
o|eliminated procedure checks: 136 
o|specializations:
o|  1 (number->string fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  3 (>= fixnum fixnum)
o|  1 (> fixnum fixnum)
o|  2 (memq * list)
o|  8 (= fixnum fixnum)
o|  4 (length list)
o|  1 (zero? number)
o|  1 (vector-length vector)
o|  2 (bitwise-and fixnum fixnum)
o|  3 (zero? fixnum)
o|  4 (string-append string string)
o|  5 (car pair)
o|  6 (cdr pair)
o|  5 (first pair)
o|  273 (eqv? * (not float))
o|  21 (##sys#check-output-port * * *)
o|  15 (##sys#check-list (or pair list) *)
o|safe globals: (##compiler#gen-list ##compiler#gen ##compiler#output) 
o|Removed `not' forms: 19 
o|inlining procedure: k2569 
o|contracted procedure: "(c-backend.scm:39) g2835" 
o|inlining procedure: k2551 
o|inlining procedure: k2551 
o|inlining procedure: k2569 
o|inlining procedure: k2606 
o|contracted procedure: "(c-backend.scm:47) g4855" 
o|inlining procedure: k2606 
o|inlining procedure: k2642 
o|inlining procedure: k2642 
o|inlining procedure: k2678 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
o|inlining procedure: k2703 
o|inlining procedure: k2703 
o|inlining procedure: k2729 
o|inlining procedure: k2729 
o|substituted constant variable: a2755 
o|substituted constant variable: a2757 
o|substituted constant variable: a2759 
o|substituted constant variable: a2761 
o|substituted constant variable: a2763 
o|inlining procedure: k2678 
o|inlining procedure: k2773 
o|inlining procedure: k2773 
o|inlining procedure: k2791 
o|inlining procedure: k2791 
o|inlining procedure: k2843 
o|inlining procedure: k2859 
o|inlining procedure: k2859 
o|inlining procedure: k2843 
o|inlining procedure: k2927 
o|inlining procedure: k2927 
o|inlining procedure: k2973 
o|inlining procedure: k2973 
o|inlining procedure: k3043 
o|inlining procedure: k3043 
o|inlining procedure: k3101 
o|inlining procedure: k3143 
o|inlining procedure: k3143 
o|inlining procedure: k3101 
o|inlining procedure: k3196 
o|inlining procedure: k3196 
o|inlining procedure: k3229 
o|inlining procedure: k3247 
o|inlining procedure: k3247 
o|inlining procedure: k3268 
o|inlining procedure: k3268 
o|inlining procedure: k3229 
o|inlining procedure: k3322 
o|inlining procedure: k3322 
o|inlining procedure: k3391 
o|contracted procedure: "(c-backend.scm:242) g257258" 
o|inlining procedure: k3455 
o|inlining procedure: k3501 
o|inlining procedure: k3501 
o|inlining procedure: k3513 
o|contracted procedure: "(c-backend.scm:257) g298306" 
o|inlining procedure: k3513 
o|inlining procedure: k3550 
o|inlining procedure: k3550 
o|inlining procedure: k3455 
o|inlining procedure: k3690 
o|inlining procedure: k3690 
o|contracted procedure: "(c-backend.scm:276) g336337" 
o|propagated global variable: tmp354356 unsafe 
o|propagated global variable: tmp354356 unsafe 
o|propagated global variable: tmp357359 ##compiler#no-procedure-checks 
o|inlining procedure: k3777 
o|propagated global variable: tmp357359 ##compiler#no-procedure-checks 
o|inlining procedure: k3777 
o|contracted procedure: k3787 
o|propagated global variable: r3788 unsafe 
o|inlining procedure: k3784 
o|inlining procedure: k3784 
o|contracted procedure: k3793 
o|propagated global variable: r3794 ##compiler#no-procedure-checks 
o|contracted procedure: "(c-backend.scm:272) g330331" 
o|contracted procedure: "(c-backend.scm:241) g253254" 
o|inlining procedure: k3819 
o|inlining procedure: k3819 
o|inlining procedure: k3850 
o|inlining procedure: k3850 
o|inlining procedure: k3391 
o|inlining procedure: k3891 
o|inlining procedure: k3937 
o|contracted procedure: "(c-backend.scm:333) g406414" 
o|inlining procedure: k3937 
o|inlining procedure: k3974 
o|inlining procedure: k3974 
o|inlining procedure: k3891 
o|inlining procedure: k4031 
o|inlining procedure: k4083 
o|inlining procedure: k4083 
o|inlining procedure: k4095 
o|inlining procedure: k4095 
o|inlining procedure: k4031 
o|inlining procedure: k4147 
o|inlining procedure: k4147 
o|inlining procedure: k4185 
o|inlining procedure: k4185 
o|inlining procedure: k4236 
o|inlining procedure: k4236 
o|inlining procedure: k4298 
o|inlining procedure: k4298 
o|inlining procedure: k4351 
o|inlining procedure: k4351 
o|inlining procedure: k4393 
o|inlining procedure: k4420 
o|inlining procedure: k4420 
o|inlining procedure: k4393 
o|contracted procedure: "(c-backend.scm:450) g495496" 
o|substituted constant variable: a4526 
o|substituted constant variable: a4528 
o|substituted constant variable: a4530 
o|substituted constant variable: a4532 
o|substituted constant variable: a4534 
o|substituted constant variable: a4536 
o|substituted constant variable: a4538 
o|substituted constant variable: a4540 
o|substituted constant variable: a4542 
o|substituted constant variable: a4544 
o|substituted constant variable: a4546 
o|substituted constant variable: a4548 
o|substituted constant variable: a4550 
o|substituted constant variable: a4552 
o|substituted constant variable: a4554 
o|substituted constant variable: a4556 
o|substituted constant variable: a4558 
o|substituted constant variable: a4560 
o|substituted constant variable: a4562 
o|substituted constant variable: a4564 
o|substituted constant variable: a4566 
o|substituted constant variable: a4568 
o|substituted constant variable: a4570 
o|substituted constant variable: a4572 
o|substituted constant variable: a4574 
o|substituted constant variable: a4576 
o|substituted constant variable: a4578 
o|substituted constant variable: a4580 
o|substituted constant variable: a4582 
o|substituted constant variable: a4584 
o|substituted constant variable: a4586 
o|substituted constant variable: a4588 
o|substituted constant variable: a4590 
o|substituted constant variable: a4592 
o|substituted constant variable: a4594 
o|substituted constant variable: a4596 
o|contracted procedure: "(c-backend.scm:79) g127128" 
o|contracted procedure: "(c-backend.scm:78) g118119" 
o|contracted procedure: "(c-backend.scm:77) g115116" 
o|contracted procedure: k4616 
o|inlining procedure: k4635 
o|substituted constant variable: a4644 
o|inlining procedure: k4635 
o|inlining procedure: k4688 
o|inlining procedure: k4688 
o|inlining procedure: k4711 
o|contracted procedure: "(c-backend.scm:491) g553560" 
o|inlining procedure: k4711 
o|propagated global variable: g559561 ##compiler#foreign-declarations 
o|inlining procedure: k4782 
o|contracted procedure: "(c-backend.scm:476) g520529" 
o|inlining procedure: k4782 
o|inlining procedure: k4872 
o|inlining procedure: k4872 
o|inlining procedure: k4912 
o|inlining procedure: k4912 
o|inlining procedure: k4939 
o|inlining procedure: k4939 
o|substituted constant variable: a4972 
o|inlining procedure: k4992 
o|contracted procedure: "(c-backend.scm:506) g581588" 
o|inlining procedure: k4992 
o|propagated global variable: g587589 ##compiler#used-units 
o|inlining procedure: k5067 
o|contracted procedure: "(c-backend.scm:586) g683690" 
o|inlining procedure: k5038 
o|inlining procedure: k5038 
o|inlining procedure: k5067 
o|inlining procedure: k5122 
o|inlining procedure: k5122 
o|inlining procedure: k5160 
o|contracted procedure: k5169 
o|inlining procedure: k5160 
o|inlining procedure: k5207 
o|inlining procedure: k5207 
o|contracted procedure: k5226 
o|inlining procedure: k5238 
o|inlining procedure: k5238 
o|inlining procedure: k5251 
o|inlining procedure: k5251 
o|inlining procedure: k5276 
o|inlining procedure: k5276 
o|inlining procedure: k5312 
o|inlining procedure: k5312 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|substituted constant variable: nsrv721 
o|inlining procedure: k5501 
o|inlining procedure: k5501 
o|inlining procedure: k5524 
o|inlining procedure: k5524 
o|inlining procedure: k5547 
o|inlining procedure: k5547 
o|inlining procedure: k5588 
o|inlining procedure: k5588 
o|inlining procedure: k5622 
o|inlining procedure: k5622 
o|inlining procedure: k5652 
o|inlining procedure: k5652 
o|inlining procedure: k5682 
o|inlining procedure: k5682 
o|substituted constant variable: a5709 
o|substituted constant variable: a5710 
o|inlining procedure: k5732 
o|inlining procedure: k5732 
o|inlining procedure: k5744 
o|propagated global variable: r574511221 ##compiler#words-per-flonum 
o|inlining procedure: k5744 
o|inlining procedure: k5756 
o|inlining procedure: k5756 
o|inlining procedure: k5804 
o|inlining procedure: k5804 
o|inlining procedure: k5837 
o|inlining procedure: k5837 
o|inlining procedure: "(c-backend.scm:680) bad-literal95" 
o|inlining procedure: k5852 
o|inlining procedure: k5852 
o|inlining procedure: k5872 
o|inlining procedure: k5891 
o|inlining procedure: k5891 
o|inlining procedure: k5872 
o|inlining procedure: "(c-backend.scm:689) bad-literal95" 
o|inlining procedure: k5922 
o|inlining procedure: k5922 
o|inlining procedure: k5937 
o|inlining procedure: k5937 
o|inlining procedure: k5956 
o|inlining procedure: k5956 
o|inlining procedure: k5959 
o|inlining procedure: k5959 
o|inlining procedure: k5993 
o|inlining procedure: k5993 
o|inlining procedure: k6008 
o|inlining procedure: k6008 
o|inlining procedure: "(c-backend.scm:716) bad-literal95" 
o|contracted procedure: k6040 
o|inlining procedure: k6079 
o|inlining procedure: k6079 
o|inlining procedure: k6322 
o|inlining procedure: k6322 
o|inlining procedure: k6331 
o|inlining procedure: k6389 
o|inlining procedure: k6389 
o|inlining procedure: k6427 
o|inlining procedure: k6427 
o|inlining procedure: k6331 
o|inlining procedure: k6461 
o|inlining procedure: k6461 
o|contracted procedure: k6467 
o|contracted procedure: k6473 
o|inlining procedure: k6470 
o|inlining procedure: k6470 
o|inlining procedure: k6479 
o|inlining procedure: k6479 
o|contracted procedure: k6517 
o|inlining procedure: k6514 
o|inlining procedure: k6514 
o|inlining procedure: k6537 
o|inlining procedure: k6537 
o|inlining procedure: k6559 
o|contracted procedure: k6595 
o|propagated global variable: r6596 unsafe 
o|contracted procedure: k6601 
o|propagated global variable: r6602 ##compiler#no-argc-checks 
o|inlining procedure: k6598 
o|inlining procedure: k6598 
o|inlining procedure: k6559 
o|inlining procedure: k6641 
o|inlining procedure: k6641 
o|contracted procedure: k6659 
o|inlining procedure: k6662 
o|inlining procedure: k6662 
o|inlining procedure: k6671 
o|inlining procedure: k6671 
o|contracted procedure: k6692 
o|propagated global variable: r6693 unsafe 
o|inlining procedure: k6689 
o|inlining procedure: k6689 
o|contracted procedure: k6698 
o|propagated global variable: r6699 ##compiler#no-argc-checks 
o|inlining procedure: k6707 
o|inlining procedure: k6707 
o|inlining procedure: k6722 
o|inlining procedure: k6722 
o|contracted procedure: k6737 
o|propagated global variable: r6738 unsafe 
o|inlining procedure: k6734 
o|inlining procedure: k6734 
o|contracted procedure: k6746 
o|contracted procedure: "(c-backend.scm:806) utype100" 
o|inlining procedure: k6152 
o|inlining procedure: k6152 
o|inlining procedure: k6164 
o|inlining procedure: k6164 
o|inlining procedure: k6176 
o|inlining procedure: k6176 
o|substituted constant variable: a6192 
o|substituted constant variable: a6194 
o|substituted constant variable: a6196 
o|substituted constant variable: a6198 
o|substituted constant variable: a6200 
o|substituted constant variable: a6202 
o|inlining procedure: k6782 
o|inlining procedure: k6782 
o|inlining procedure: k6809 
o|inlining procedure: k6809 
o|inlining procedure: k6830 
o|inlining procedure: k6830 
o|inlining procedure: k6849 
o|inlining procedure: k6849 
o|contracted procedure: k6868 
o|inlining procedure: k6877 
o|inlining procedure: k6877 
o|inlining procedure: k6890 
o|inlining procedure: k6890 
o|inlining procedure: k6920 
o|inlining procedure: k6920 
o|inlining procedure: k6927 
o|inlining procedure: k6927 
o|inlining procedure: k6934 
o|inlining procedure: k6934 
o|contracted procedure: "(c-backend.scm:925) trailer90" 
o|inlining procedure: k7009 
o|inlining procedure: k7009 
o|inlining procedure: k7051 
o|inlining procedure: k7051 
o|inlining procedure: k7089 
o|inlining procedure: k7089 
o|inlining procedure: k7098 
o|inlining procedure: k7098 
o|inlining procedure: k7107 
o|inlining procedure: k7107 
o|inlining procedure: k7197 
o|contracted procedure: "(c-backend.scm:989) g11671174" 
o|inlining procedure: k7197 
o|inlining procedure: k7240 
o|contracted procedure: "(c-backend.scm:1000) g11911198" 
o|inlining procedure: k7240 
o|inlining procedure: k7382 
o|inlining procedure: k7400 
o|inlining procedure: k7400 
o|inlining procedure: k7382 
o|inlining procedure: k7430 
o|inlining procedure: k7430 
o|contracted procedure: k7453 
o|inlining procedure: k7472 
o|contracted procedure: "(c-backend.scm:1040) g12421251" 
o|inlining procedure: k7349 
o|substituted constant variable: a7359 
o|substituted constant variable: a7360 
o|inlining procedure: k7349 
o|inlining procedure: k7472 
o|inlining procedure: k7511 
o|inlining procedure: k7511 
o|inlining procedure: k7562 
o|inlining procedure: k7562 
o|inlining procedure: k7608 
o|inlining procedure: k7608 
o|inlining procedure: k7629 
o|inlining procedure: k7629 
o|inlining procedure: k7665 
o|inlining procedure: k7665 
o|inlining procedure: k7656 
o|inlining procedure: k7656 
o|inlining procedure: k7684 
o|inlining procedure: k7684 
o|substituted constant variable: a7710 
o|inlining procedure: k7714 
o|inlining procedure: k7714 
o|inlining procedure: k7726 
o|inlining procedure: k7726 
o|inlining procedure: k7738 
o|inlining procedure: k7738 
o|inlining procedure: k7750 
o|inlining procedure: k7750 
o|substituted constant variable: a7757 
o|substituted constant variable: a7759 
o|substituted constant variable: a7761 
o|substituted constant variable: a7763 
o|substituted constant variable: a7765 
o|substituted constant variable: a7767 
o|substituted constant variable: a7769 
o|substituted constant variable: a7771 
o|substituted constant variable: a7773 
o|inlining procedure: k7783 
o|inlining procedure: k7783 
o|inlining procedure: k7795 
o|inlining procedure: k7795 
o|substituted constant variable: a7802 
o|substituted constant variable: a7804 
o|substituted constant variable: a7806 
o|substituted constant variable: a7808 
o|substituted constant variable: a7810 
o|inlining procedure: k7814 
o|inlining procedure: k7814 
o|inlining procedure: k7826 
o|inlining procedure: k7826 
o|substituted constant variable: a7833 
o|substituted constant variable: a7835 
o|substituted constant variable: a7837 
o|substituted constant variable: a7839 
o|substituted constant variable: a7841 
o|inlining procedure: k7845 
o|inlining procedure: k7845 
o|inlining procedure: k7857 
o|inlining procedure: k7857 
o|inlining procedure: k7869 
o|inlining procedure: k7869 
o|inlining procedure: k7881 
o|inlining procedure: k7881 
o|inlining procedure: k7893 
o|inlining procedure: k7893 
o|inlining procedure: k7905 
o|inlining procedure: k7905 
o|inlining procedure: k7917 
o|inlining procedure: k7917 
o|substituted constant variable: a7930 
o|substituted constant variable: a7932 
o|substituted constant variable: a7934 
o|substituted constant variable: a7936 
o|substituted constant variable: a7938 
o|substituted constant variable: a7940 
o|substituted constant variable: a7942 
o|substituted constant variable: a7944 
o|substituted constant variable: a7946 
o|substituted constant variable: a7948 
o|substituted constant variable: a7950 
o|substituted constant variable: a7952 
o|substituted constant variable: a7954 
o|substituted constant variable: a7956 
o|substituted constant variable: a7958 
o|substituted constant variable: a7960 
o|inlining procedure: k7964 
o|inlining procedure: k7964 
o|inlining procedure: k7976 
o|inlining procedure: k7976 
o|inlining procedure: k7988 
o|inlining procedure: k7988 
o|inlining procedure: k8000 
o|inlining procedure: k8000 
o|inlining procedure: k8012 
o|inlining procedure: k8012 
o|inlining procedure: k8024 
o|inlining procedure: k8024 
o|substituted constant variable: a8031 
o|substituted constant variable: a8033 
o|substituted constant variable: a8035 
o|substituted constant variable: a8037 
o|substituted constant variable: a8039 
o|substituted constant variable: a8041 
o|substituted constant variable: a8043 
o|substituted constant variable: a8045 
o|substituted constant variable: a8047 
o|substituted constant variable: a8049 
o|substituted constant variable: a8051 
o|substituted constant variable: a8053 
o|substituted constant variable: a8055 
o|inlining procedure: k8092 
o|inlining procedure: k8092 
o|inlining procedure: k8117 
o|contracted procedure: "(c-backend.scm:1120) g14951503" 
o|inlining procedure: k8117 
o|inlining procedure: k8152 
o|inlining procedure: k8152 
o|inlining procedure: k8174 
o|inlining procedure: k8174 
o|inlining procedure: k8230 
o|inlining procedure: k8230 
o|inlining procedure: k8270 
o|inlining procedure: k8270 
o|inlining procedure: k8291 
o|inlining procedure: k8291 
o|inlining procedure: k8315 
o|inlining procedure: k8315 
o|inlining procedure: k8339 
o|inlining procedure: k8339 
o|inlining procedure: k8360 
o|inlining procedure: k8360 
o|inlining procedure: k8378 
o|inlining procedure: k8378 
o|inlining procedure: k8396 
o|inlining procedure: k8396 
o|inlining procedure: k8414 
o|inlining procedure: k8414 
o|inlining procedure: k8435 
o|inlining procedure: k8435 
o|inlining procedure: k8456 
o|inlining procedure: k8456 
o|inlining procedure: k8480 
o|inlining procedure: k8480 
o|inlining procedure: k8504 
o|inlining procedure: k8504 
o|inlining procedure: k8528 
o|inlining procedure: k8528 
o|inlining procedure: k8552 
o|inlining procedure: k8552 
o|inlining procedure: k8576 
o|inlining procedure: k8576 
o|inlining procedure: k8609 
o|inlining procedure: k8609 
o|inlining procedure: k8600 
o|inlining procedure: k8600 
o|inlining procedure: k8630 
o|inlining procedure: k8654 
o|inlining procedure: k8654 
o|inlining procedure: k8710 
o|contracted procedure: "(c-backend.scm:1210) g16731682" 
o|propagated global variable: g16901691 ##compiler#foreign-type-declaration 
o|inlining procedure: k8710 
o|inlining procedure: k8746 
o|inlining procedure: k8746 
o|inlining procedure: k8780 
o|inlining procedure: k8780 
o|inlining procedure: k8814 
o|inlining procedure: k8814 
o|inlining procedure: k8848 
o|inlining procedure: k8898 
o|contracted procedure: "(c-backend.scm:1234) g17211730" 
o|inlining procedure: k8880 
o|inlining procedure: k8880 
o|inlining procedure: k8898 
o|inlining procedure: k8848 
o|substituted constant variable: a8950 
o|substituted constant variable: a8962 
o|substituted constant variable: a8970 
o|substituted constant variable: a8972 
o|substituted constant variable: a8984 
o|substituted constant variable: a8996 
o|substituted constant variable: a9008 
o|substituted constant variable: a9020 
o|substituted constant variable: a9032 
o|substituted constant variable: a9043 
o|substituted constant variable: a9052 
o|substituted constant variable: a9053 
o|inlining procedure: k8630 
o|substituted constant variable: a9065 
o|inlining procedure: k9069 
o|inlining procedure: k9069 
o|substituted constant variable: a9082 
o|substituted constant variable: a9084 
o|substituted constant variable: a9086 
o|substituted constant variable: a9088 
o|inlining procedure: k9092 
o|inlining procedure: k9092 
o|inlining procedure: k9104 
o|inlining procedure: k9104 
o|substituted constant variable: a9111 
o|substituted constant variable: a9113 
o|substituted constant variable: a9115 
o|substituted constant variable: a9117 
o|substituted constant variable: a9119 
o|substituted constant variable: a9124 
o|substituted constant variable: a9126 
o|substituted constant variable: a9131 
o|substituted constant variable: a9133 
o|substituted constant variable: a9138 
o|substituted constant variable: a9140 
o|substituted constant variable: a9145 
o|substituted constant variable: a9147 
o|substituted constant variable: a9152 
o|substituted constant variable: a9154 
o|substituted constant variable: a9159 
o|substituted constant variable: a9161 
o|substituted constant variable: a9166 
o|substituted constant variable: a9168 
o|substituted constant variable: a9173 
o|substituted constant variable: a9175 
o|inlining procedure: k9179 
o|inlining procedure: k9179 
o|substituted constant variable: a9192 
o|substituted constant variable: a9194 
o|substituted constant variable: a9196 
o|substituted constant variable: a9198 
o|substituted constant variable: a9203 
o|substituted constant variable: a9205 
o|inlining procedure: k9209 
o|inlining procedure: k9209 
o|substituted constant variable: a9222 
o|substituted constant variable: a9224 
o|substituted constant variable: a9226 
o|substituted constant variable: a9228 
o|substituted constant variable: a9233 
o|substituted constant variable: a9235 
o|substituted constant variable: a9237 
o|substituted constant variable: a9239 
o|substituted constant variable: a9241 
o|substituted constant variable: a9243 
o|substituted constant variable: a9245 
o|substituted constant variable: a9247 
o|substituted constant variable: a9249 
o|substituted constant variable: a9254 
o|substituted constant variable: a9256 
o|substituted constant variable: a9258 
o|inlining procedure: k9262 
o|inlining procedure: k9262 
o|substituted constant variable: a9269 
o|substituted constant variable: a9271 
o|substituted constant variable: a9273 
o|substituted constant variable: a9278 
o|substituted constant variable: a9280 
o|substituted constant variable: a9285 
o|substituted constant variable: a9287 
o|substituted constant variable: a9292 
o|substituted constant variable: a9294 
o|substituted constant variable: a9299 
o|substituted constant variable: a9301 
o|substituted constant variable: a9303 
o|inlining procedure: k9312 
o|inlining procedure: k9312 
o|inlining procedure: k9327 
o|inlining procedure: k9327 
o|inlining procedure: k9342 
o|inlining procedure: k9342 
o|inlining procedure: k9354 
o|inlining procedure: k9354 
o|inlining procedure: k9372 
o|inlining procedure: k9372 
o|inlining procedure: k9384 
o|inlining procedure: k9384 
o|inlining procedure: k9396 
o|inlining procedure: k9396 
o|inlining procedure: k9411 
o|inlining procedure: k9411 
o|inlining procedure: k9423 
o|inlining procedure: k9423 
o|inlining procedure: k9435 
o|inlining procedure: k9435 
o|inlining procedure: k9447 
o|inlining procedure: k9447 
o|inlining procedure: k9459 
o|inlining procedure: k9459 
o|inlining procedure: k9471 
o|inlining procedure: k9471 
o|inlining procedure: k9483 
o|inlining procedure: k9483 
o|inlining procedure: k9495 
o|inlining procedure: k9495 
o|inlining procedure: k9507 
o|inlining procedure: k9507 
o|inlining procedure: k9519 
o|inlining procedure: k9519 
o|inlining procedure: k9531 
o|inlining procedure: k9531 
o|inlining procedure: k9543 
o|inlining procedure: k9543 
o|inlining procedure: k9558 
o|inlining procedure: k9558 
o|inlining procedure: k9576 
o|contracted procedure: "(c-backend.scm:1292) g18071808" 
o|inlining procedure: k9585 
o|inlining procedure: k9585 
o|inlining procedure: k9576 
o|inlining procedure: k9606 
o|inlining procedure: k9606 
o|inlining procedure: k9618 
o|inlining procedure: k9618 
o|inlining procedure: k9630 
o|inlining procedure: k9630 
o|inlining procedure: k9642 
o|inlining procedure: k9642 
o|inlining procedure: k9661 
o|inlining procedure: k9661 
o|inlining procedure: k9684 
o|inlining procedure: k9684 
o|substituted constant variable: a9701 
o|substituted constant variable: a9703 
o|substituted constant variable: a9705 
o|substituted constant variable: a9707 
o|substituted constant variable: a9709 
o|substituted constant variable: a9711 
o|substituted constant variable: a9713 
o|substituted constant variable: a9715 
o|substituted constant variable: a9717 
o|substituted constant variable: a9719 
o|substituted constant variable: a9721 
o|substituted constant variable: a9733 
o|substituted constant variable: a9741 
o|inlining procedure: k9745 
o|inlining procedure: k9745 
o|inlining procedure: k9757 
o|inlining procedure: k9757 
o|substituted constant variable: a9764 
o|substituted constant variable: a9766 
o|substituted constant variable: a9768 
o|substituted constant variable: a9770 
o|substituted constant variable: a9772 
o|inlining procedure: k9776 
o|inlining procedure: k9776 
o|substituted constant variable: a9789 
o|substituted constant variable: a9791 
o|substituted constant variable: a9793 
o|substituted constant variable: a9795 
o|substituted constant variable: a9797 
o|substituted constant variable: a9799 
o|substituted constant variable: a9801 
o|substituted constant variable: a9803 
o|substituted constant variable: a9805 
o|substituted constant variable: a9807 
o|substituted constant variable: a9809 
o|substituted constant variable: a9811 
o|substituted constant variable: a9813 
o|substituted constant variable: a9815 
o|substituted constant variable: a9817 
o|substituted constant variable: a9819 
o|substituted constant variable: a9821 
o|substituted constant variable: a9823 
o|substituted constant variable: a9825 
o|substituted constant variable: a9827 
o|substituted constant variable: a9829 
o|substituted constant variable: a9831 
o|substituted constant variable: a9833 
o|substituted constant variable: a9835 
o|substituted constant variable: a9837 
o|substituted constant variable: a9839 
o|substituted constant variable: a9841 
o|substituted constant variable: a9843 
o|substituted constant variable: a9848 
o|substituted constant variable: a9850 
o|substituted constant variable: a9852 
o|substituted constant variable: a9854 
o|substituted constant variable: a9856 
o|substituted constant variable: a9858 
o|substituted constant variable: a9863 
o|substituted constant variable: a9865 
o|inlining procedure: k9869 
o|inlining procedure: k9869 
o|substituted constant variable: a9876 
o|substituted constant variable: a9878 
o|substituted constant variable: a9880 
o|substituted constant variable: a9882 
o|substituted constant variable: a9884 
o|substituted constant variable: a9886 
o|inlining procedure: k9890 
o|inlining procedure: k9890 
o|inlining procedure: k9902 
o|inlining procedure: k9902 
o|substituted constant variable: a9915 
o|substituted constant variable: a9917 
o|substituted constant variable: a9919 
o|substituted constant variable: a9921 
o|substituted constant variable: a9923 
o|substituted constant variable: a9925 
o|substituted constant variable: a9930 
o|substituted constant variable: a9932 
o|substituted constant variable: a9934 
o|inlining procedure: k9943 
o|inlining procedure: k9943 
o|inlining procedure: k9961 
o|inlining procedure: k9961 
o|inlining procedure: k9976 
o|inlining procedure: k9976 
o|inlining procedure: k9988 
o|inlining procedure: k9988 
o|substituted constant variable: a10007 
o|substituted constant variable: a10008 
o|substituted constant variable: a10031 
o|substituted constant variable: a10032 
o|inlining procedure: k10021 
o|inlining procedure: k10021 
o|substituted constant variable: a10058 
o|substituted constant variable: a10059 
o|substituted constant variable: a10082 
o|substituted constant variable: a10083 
o|inlining procedure: k10072 
o|inlining procedure: k10072 
o|substituted constant variable: a10109 
o|substituted constant variable: a10110 
o|substituted constant variable: a10136 
o|substituted constant variable: a10137 
o|inlining procedure: k10123 
o|inlining procedure: k10123 
o|substituted constant variable: a10160 
o|substituted constant variable: a10161 
o|substituted constant variable: a10187 
o|substituted constant variable: a10188 
o|inlining procedure: k10174 
o|inlining procedure: k10174 
o|substituted constant variable: a10211 
o|substituted constant variable: a10212 
o|substituted constant variable: a10235 
o|substituted constant variable: a10236 
o|inlining procedure: k10225 
o|inlining procedure: k10225 
o|inlining procedure: k10255 
o|inlining procedure: k10255 
o|inlining procedure: k10276 
o|inlining procedure: k10276 
o|inlining procedure: k10288 
o|substituted constant variable: a10310 
o|substituted constant variable: a10311 
o|substituted constant variable: a10334 
o|substituted constant variable: a10335 
o|inlining procedure: k10324 
o|inlining procedure: k10324 
o|substituted constant variable: a10358 
o|substituted constant variable: a10359 
o|substituted constant variable: a10382 
o|substituted constant variable: a10383 
o|inlining procedure: k10372 
o|inlining procedure: k10372 
o|substituted constant variable: a10406 
o|substituted constant variable: a10407 
o|inlining procedure: k10420 
o|inlining procedure: k10420 
o|substituted constant variable: a10446 
o|substituted constant variable: a10447 
o|substituted constant variable: a10470 
o|substituted constant variable: a10471 
o|inlining procedure: k10460 
o|inlining procedure: k10460 
o|substituted constant variable: a10494 
o|substituted constant variable: a10495 
o|substituted constant variable: a10512 
o|substituted constant variable: a10514 
o|substituted constant variable: a10519 
o|substituted constant variable: a10521 
o|substituted constant variable: a10523 
o|substituted constant variable: a10525 
o|substituted constant variable: a10527 
o|substituted constant variable: a10529 
o|substituted constant variable: a10531 
o|substituted constant variable: a10536 
o|substituted constant variable: a10538 
o|inlining procedure: k10288 
o|substituted constant variable: a10550 
o|substituted constant variable: a10561 
o|substituted constant variable: a10563 
o|substituted constant variable: a10565 
o|substituted constant variable: a10567 
o|substituted constant variable: a10569 
o|substituted constant variable: a10574 
o|substituted constant variable: a10576 
o|substituted constant variable: a10578 
o|substituted constant variable: a10583 
o|substituted constant variable: a10585 
o|substituted constant variable: a10590 
o|substituted constant variable: a10592 
o|substituted constant variable: a10594 
o|inlining procedure: k10598 
o|inlining procedure: k10598 
o|inlining procedure: k10610 
o|inlining procedure: k10610 
o|inlining procedure: k10622 
o|inlining procedure: k10622 
o|inlining procedure: k10634 
o|inlining procedure: k10634 
o|inlining procedure: k10646 
o|inlining procedure: k10646 
o|substituted constant variable: a10659 
o|substituted constant variable: a10661 
o|substituted constant variable: a10663 
o|substituted constant variable: a10665 
o|substituted constant variable: a10667 
o|substituted constant variable: a10669 
o|substituted constant variable: a10671 
o|substituted constant variable: a10673 
o|substituted constant variable: a10675 
o|substituted constant variable: a10677 
o|substituted constant variable: a10679 
o|substituted constant variable: a10681 
o|substituted constant variable: a10683 
o|substituted constant variable: a10688 
o|substituted constant variable: a10690 
o|substituted constant variable: a10692 
o|substituted constant variable: a10694 
o|substituted constant variable: a10696 
o|substituted constant variable: a10698 
o|substituted constant variable: a10703 
o|substituted constant variable: a10705 
o|substituted constant variable: a10710 
o|substituted constant variable: a10712 
o|substituted constant variable: a10717 
o|substituted constant variable: a10719 
o|contracted procedure: "(c-backend.scm:1391) finish2146" 
o|inlining procedure: k10787 
o|inlining procedure: k10787 
o|substituted constant variable: a10802 
o|inlining procedure: k10811 
o|inlining procedure: k10811 
o|inlining procedure: k10823 
o|inlining procedure: k10823 
o|contracted procedure: k10838 
o|inlining procedure: k10835 
o|inlining procedure: k10835 
o|substituted constant variable: a10844 
o|substituted constant variable: a10866 
o|inlining procedure: k10904 
o|inlining procedure: k10904 
o|inlining procedure: k10937 
o|inlining procedure: k10937 
o|inlining procedure: "(c-backend.scm:1421) getsize2144" 
o|inlining procedure: "(c-backend.scm:1420) getbits2143" 
o|inlining procedure: "(c-backend.scm:1427) getbits2143" 
o|inlining procedure: "(c-backend.scm:1424) getsize2144" 
o|substituted constant variable: a11025 
o|substituted constant variable: a11026 
o|replaced variables: 2017 
o|removed binding forms: 594 
o|substituted constant variable: r269811066 
o|substituted constant variable: r269811066 
o|substituted constant variable: r269811068 
o|substituted constant variable: r269811068 
o|propagated global variable: r377811122 ##compiler#no-procedure-checks 
o|substituted constant variable: r378511124 
o|substituted constant variable: r385111129 
o|inlining procedure: k4068 
o|inlining procedure: k4194 
o|converted assignments to bindings: (pad0504) 
o|inlining procedure: k5192 
o|substituted constant variable: r525211193 
o|substituted constant variable: r525211193 
o|substituted constant variable: r525211195 
o|substituted constant variable: r525211195 
o|removed side-effect free assignment to unused variable: bad-literal95 
o|substituted constant variable: r573311219 
o|substituted constant variable: r583811227 
o|substituted constant variable: r585311234 
o|substituted constant variable: r595711249 
o|substituted constant variable: r595711249 
o|substituted constant variable: r595711251 
o|substituted constant variable: r595711251 
o|substituted constant variable: r642811273 
o|substituted constant variable: r642811273 
o|substituted constant variable: r642811275 
o|substituted constant variable: r642811275 
o|inlining procedure: k6439 
o|substituted constant variable: r646211278 
o|substituted constant variable: r646211278 
o|substituted constant variable: r646211280 
o|substituted constant variable: r646211280 
o|substituted constant variable: r647111282 
o|substituted constant variable: r659911291 
o|substituted constant variable: r669011300 
o|substituted constant variable: r673511306 
o|contracted procedure: "(c-backend.scm:804) g981988" 
o|substituted constant variable: r615311308 
o|substituted constant variable: r616511310 
o|substituted constant variable: r617711312 
o|substituted constant variable: r683111320 
o|substituted constant variable: r683111320 
o|substituted constant variable: r689111334 
o|substituted constant variable: r689111334 
o|substituted constant variable: r689111336 
o|substituted constant variable: r689111336 
o|substituted constant variable: r693511346 
o|substituted constant variable: r693511346 
o|substituted constant variable: r693511348 
o|substituted constant variable: r693511348 
o|inlining procedure: k7079 
o|inlining procedure: k7079 
o|substituted constant variable: r710811359 
o|substituted constant variable: r751211385 
o|substituted constant variable: r815311454 
o|substituted constant variable: r815311454 
o|substituted constant variable: r815311456 
o|substituted constant variable: r815311456 
o|substituted constant variable: r888111511 
o|substituted constant variable: r931311528 
o|substituted constant variable: r932811530 
o|substituted constant variable: r934311532 
o|substituted constant variable: r935511534 
o|substituted constant variable: r937311536 
o|substituted constant variable: r938511538 
o|substituted constant variable: r939711540 
o|substituted constant variable: r941211542 
o|substituted constant variable: r942411544 
o|substituted constant variable: r943611546 
o|substituted constant variable: r944811548 
o|substituted constant variable: r946011550 
o|substituted constant variable: r947211552 
o|substituted constant variable: r948411554 
o|substituted constant variable: r949611556 
o|substituted constant variable: r950811558 
o|substituted constant variable: r952011560 
o|substituted constant variable: r953211562 
o|substituted constant variable: r954411564 
o|substituted constant variable: r955911566 
o|substituted constant variable: r960711574 
o|substituted constant variable: r961911576 
o|substituted constant variable: r963111578 
o|substituted constant variable: r964311580 
o|substituted constant variable: r966211582 
o|substituted constant variable: r994411598 
o|substituted constant variable: r996211600 
o|substituted constant variable: r997711602 
o|substituted constant variable: r998911604 
o|substituted constant variable: r1025611616 
o|removed side-effect free assignment to unused variable: getbits2143 
o|removed side-effect free assignment to unused variable: getsize2144 
o|substituted constant variable: r1078811642 
o|substituted constant variable: r1081211644 
o|substituted constant variable: r1082411646 
o|simplifications: ((let . 1)) 
o|replaced variables: 34 
o|removed binding forms: 2022 
o|inlining procedure: k3597 
o|inlining procedure: k4015 
o|inlining procedure: k4101 
o|inlining procedure: k4606 
o|inlining procedure: k4685 
o|inlining procedure: k6580 
o|inlining procedure: k6644 
o|inlining procedure: k6719 
o|inlining procedure: k7063 
o|inlining procedure: k10965 
o|inlining procedure: k10973 
o|inlining procedure: k11013 
o|converted assignments to bindings: (encode-size2145) 
o|simplifications: ((let . 1)) 
o|replaced variables: 36 
o|removed binding forms: 137 
o|substituted constant variable: r664511884 
o|contracted procedure: k10976 
o|removed binding forms: 45 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 60) (##core#call . 832)) 
o|  call simplifications:
o|    eof-object?
o|    integer->char	9
o|    string	5
o|    list?	3
o|    fx>
o|    fx>=	3
o|    string=?
o|    char<?
o|    char>?
o|    char=?	2
o|    string-set!	3
o|    fx/
o|    void	2
o|    boolean?
o|    char?	2
o|    fixnum?	3
o|    string?	2
o|    number?	2
o|    symbol?	7
o|    ##sys#immediate?	4
o|    ##sys#generic-structure?
o|    ##sys#size	5
o|    negative?
o|    apply	13
o|    null?	5
o|    string-length	3
o|    arithmetic-shift	7
o|    >=	5
o|    string-ref	3
o|    bitwise-and	8
o|    -	8
o|    cons	5
o|    ##sys#setslot	4
o|    <	2
o|    length	9
o|    cdr	6
o|    cddr	3
o|    zero?	14
o|    not	12
o|    third	7
o|    fourth	4
o|    ##sys#check-list	19
o|    +	23
o|    >	14
o|    add1	18
o|    sub1	9
o|    car	35
o|    cadr	21
o|    caddr	2
o|    vector?	6
o|    vector-ref	13
o|    first	34
o|    char->integer	4
o|    second	14
o|    pair?	46
o|    eq?	315
o|    ##sys#slot	80
o|contracted procedure: k2572 
o|contracted procedure: k2582 
o|contracted procedure: k2586 
o|contracted procedure: k2554 
o|contracted procedure: k2609 
o|contracted procedure: k2619 
o|contracted procedure: k2623 
o|contracted procedure: k2659 
o|contracted procedure: k2667 
o|contracted procedure: k2675 
o|contracted procedure: k2681 
o|contracted procedure: k2684 
o|contracted procedure: k2690 
o|contracted procedure: k2700 
o|contracted procedure: k2706 
o|contracted procedure: k2717 
o|contracted procedure: k2713 
o|contracted procedure: k2723 
o|contracted procedure: k2732 
o|contracted procedure: k2739 
o|contracted procedure: k2745 
o|contracted procedure: k2767 
o|contracted procedure: k2770 
o|contracted procedure: k2776 
o|contracted procedure: k2783 
o|contracted procedure: k2794 
o|contracted procedure: k2819 
o|contracted procedure: k2823 
o|contracted procedure: k2827 
o|contracted procedure: k2833 
o|contracted procedure: k2840 
o|contracted procedure: k2846 
o|contracted procedure: k2853 
o|contracted procedure: k2862 
o|contracted procedure: k2880 
o|contracted procedure: k2884 
o|contracted procedure: k2888 
o|contracted procedure: k2895 
o|contracted procedure: k2901 
o|contracted procedure: k2904 
o|contracted procedure: k2920 
o|contracted procedure: k2924 
o|contracted procedure: k2930 
o|contracted procedure: k2947 
o|contracted procedure: k2943 
o|contracted procedure: k2951 
o|contracted procedure: k2957 
o|contracted procedure: k2970 
o|contracted procedure: k2976 
o|contracted procedure: k2995 
o|contracted procedure: k2999 
o|contracted procedure: k3003 
o|contracted procedure: k3009 
o|contracted procedure: k3028 
o|contracted procedure: k3036 
o|contracted procedure: k3032 
o|contracted procedure: k3040 
o|contracted procedure: k3046 
o|contracted procedure: k3065 
o|contracted procedure: k3069 
o|contracted procedure: k3075 
o|contracted procedure: k3094 
o|contracted procedure: k3098 
o|contracted procedure: k3104 
o|contracted procedure: k3107 
o|contracted procedure: k3127 
o|contracted procedure: k3137 
o|contracted procedure: k3171 
o|contracted procedure: k3146 
o|contracted procedure: k3156 
o|contracted procedure: k3160 
o|contracted procedure: k3164 
o|contracted procedure: k3168 
o|contracted procedure: k3180 
o|contracted procedure: k3193 
o|contracted procedure: k3199 
o|contracted procedure: k3206 
o|contracted procedure: k3212 
o|contracted procedure: k3222 
o|contracted procedure: k3226 
o|contracted procedure: k3232 
o|contracted procedure: k3235 
o|contracted procedure: k3238 
o|contracted procedure: k3241 
o|contracted procedure: k3265 
o|contracted procedure: k3280 
o|contracted procedure: k3283 
o|contracted procedure: k3286 
o|contracted procedure: k3289 
o|contracted procedure: k3305 
o|contracted procedure: k3325 
o|contracted procedure: k3328 
o|contracted procedure: k3331 
o|contracted procedure: k3334 
o|contracted procedure: k3350 
o|contracted procedure: k3371 
o|contracted procedure: k3385 
o|contracted procedure: k3394 
o|contracted procedure: k3397 
o|contracted procedure: k3400 
o|contracted procedure: k3403 
o|contracted procedure: k3867 
o|contracted procedure: k3406 
o|contracted procedure: k3409 
o|contracted procedure: k3418 
o|contracted procedure: k3816 
o|contracted procedure: k3431 
o|contracted procedure: k3439 
o|contracted procedure: k3452 
o|contracted procedure: k3481 
o|contracted procedure: k3495 
o|contracted procedure: k3541 
o|contracted procedure: k3516 
o|contracted procedure: k3526 
o|contracted procedure: k3530 
o|contracted procedure: k3534 
o|contracted procedure: k3538 
o|contracted procedure: k3578 
o|contracted procedure: k3553 
o|contracted procedure: k3563 
o|contracted procedure: k3567 
o|contracted procedure: k3571 
o|contracted procedure: k3575 
o|contracted procedure: k3585 
o|contracted procedure: k3621 
o|contracted procedure: k3642 
o|contracted procedure: k3645 
o|contracted procedure: k3648 
o|contracted procedure: k3651 
o|contracted procedure: k3715 
o|contracted procedure: k3807 
o|contracted procedure: k3781 
o|contracted procedure: k3860 
o|contracted procedure: k3853 
o|contracted procedure: k3873 
o|contracted procedure: k3876 
o|contracted procedure: k3879 
o|contracted procedure: k3882 
o|contracted procedure: k3885 
o|contracted procedure: k3888 
o|contracted procedure: k3911 
o|contracted procedure: k3925 
o|contracted procedure: k3965 
o|contracted procedure: k3940 
o|contracted procedure: k3950 
o|contracted procedure: k3954 
o|contracted procedure: k3958 
o|contracted procedure: k3962 
o|contracted procedure: k4002 
o|contracted procedure: k3977 
o|contracted procedure: k3987 
o|contracted procedure: k3991 
o|contracted procedure: k3995 
o|contracted procedure: k3999 
o|contracted procedure: k4009 
o|contracted procedure: k4034 
o|contracted procedure: k4037 
o|contracted procedure: k4040 
o|contracted procedure: k4043 
o|contracted procedure: k4046 
o|contracted procedure: k4049 
o|contracted procedure: k4119 
o|contracted procedure: k4052 
o|contracted procedure: k4055 
o|contracted procedure: k4074 
o|contracted procedure: k4086 
o|contracted procedure: k4098 
o|contracted procedure: k4101 
o|contracted procedure: k4125 
o|contracted procedure: k4128 
o|contracted procedure: k4131 
o|contracted procedure: k4144 
o|contracted procedure: k4150 
o|contracted procedure: k4163 
o|contracted procedure: k4169 
o|contracted procedure: k4182 
o|contracted procedure: k4188 
o|contracted procedure: k4200 
o|contracted procedure: k4210 
o|contracted procedure: k4214 
o|contracted procedure: k4220 
o|contracted procedure: k4233 
o|contracted procedure: k4239 
o|contracted procedure: k4242 
o|contracted procedure: k4255 
o|contracted procedure: k4271 
o|contracted procedure: k4274 
o|contracted procedure: k4287 
o|contracted procedure: k4301 
o|contracted procedure: k4304 
o|contracted procedure: k4323 
o|contracted procedure: k4331 
o|contracted procedure: k4341 
o|contracted procedure: k4348 
o|contracted procedure: k4354 
o|contracted procedure: k4367 
o|contracted procedure: k4371 
o|contracted procedure: k4377 
o|contracted procedure: k4390 
o|contracted procedure: k4396 
o|contracted procedure: k4412 
o|contracted procedure: k4423 
o|contracted procedure: k4436 
o|contracted procedure: k4455 
o|contracted procedure: k4459 
o|contracted procedure: k4463 
o|contracted procedure: k4467 
o|contracted procedure: k4471 
o|contracted procedure: k4477 
o|contracted procedure: k4502 
o|contracted procedure: k4506 
o|contracted procedure: k4510 
o|contracted procedure: k4522 
o|contracted procedure: k4613 
o|contracted procedure: k4623 
o|contracted procedure: k461311844 
o|contracted procedure: k4638 
o|contracted procedure: k4652 
o|contracted procedure: k4655 
o|contracted procedure: k4658 
o|contracted procedure: k4661 
o|contracted procedure: k4664 
o|contracted procedure: k4694 
o|contracted procedure: k4714 
o|contracted procedure: k4724 
o|contracted procedure: k4728 
o|contracted procedure: k4744 
o|contracted procedure: k4785 
o|contracted procedure: k4788 
o|contracted procedure: k4799 
o|contracted procedure: k4811 
o|contracted procedure: k4819 
o|contracted procedure: k4843 
o|contracted procedure: k4854 
o|contracted procedure: k4875 
o|contracted procedure: k4881 
o|contracted procedure: k4900 
o|contracted procedure: k4933 
o|contracted procedure: k4929 
o|contracted procedure: k4906 
o|contracted procedure: k4915 
o|contracted procedure: k4925 
o|contracted procedure: k4942 
o|contracted procedure: k4952 
o|contracted procedure: k4960 
o|contracted procedure: k4956 
o|contracted procedure: k4964 
o|contracted procedure: k4975 
o|contracted procedure: k4968 
o|contracted procedure: k4979 
o|contracted procedure: k4982 
o|contracted procedure: k4995 
o|contracted procedure: k5005 
o|contracted procedure: k5009 
o|propagated global variable: g587589 ##compiler#used-units 
o|contracted procedure: k5058 
o|contracted procedure: k5070 
o|contracted procedure: k5080 
o|contracted procedure: k5084 
o|contracted procedure: k5041 
o|contracted procedure: k5051 
o|contracted procedure: k5055 
o|contracted procedure: k5125 
o|contracted procedure: k5133 
o|contracted procedure: k5139 
o|contracted procedure: k5186 
o|contracted procedure: k5182 
o|contracted procedure: k5210 
o|contracted procedure: k5220 
o|contracted procedure: k5270 
o|contracted procedure: k5279 
o|contracted procedure: k5289 
o|contracted procedure: k5293 
o|contracted procedure: k5296 
o|contracted procedure: k5304 
o|contracted procedure: k5312 
o|contracted procedure: k5338 
o|contracted procedure: k5347 
o|contracted procedure: k5357 
o|contracted procedure: k5361 
o|contracted procedure: k5420 
o|contracted procedure: k5436 
o|contracted procedure: k5440 
o|contracted procedure: k5474 
o|contracted procedure: k5483 
o|contracted procedure: k5492 
o|contracted procedure: k5504 
o|contracted procedure: k5514 
o|contracted procedure: k5518 
o|contracted procedure: k5527 
o|contracted procedure: k5537 
o|contracted procedure: k5541 
o|contracted procedure: k5550 
o|contracted procedure: k5560 
o|contracted procedure: k5564 
o|contracted procedure: k5646 
o|contracted procedure: k5649 
o|contracted procedure: k5663 
o|contracted procedure: k5685 
o|contracted procedure: k5695 
o|contracted procedure: k5701 
o|contracted procedure: k5741 
o|contracted procedure: k5747 
o|contracted procedure: k5753 
o|contracted procedure: k5759 
o|contracted procedure: k5780 
o|contracted procedure: k5787 
o|contracted procedure: k5807 
o|contracted procedure: k5810 
o|contracted procedure: k5821 
o|contracted procedure: k5833 
o|contracted procedure: k5846 
o|contracted procedure: k5869 
o|contracted procedure: k5875 
o|contracted procedure: k5878 
o|contracted procedure: k5885 
o|contracted procedure: k5894 
o|contracted procedure: k5901 
o|contracted procedure: k5905 
o|contracted procedure: k5913 
o|contracted procedure: k6048 
o|contracted procedure: k5940 
o|propagated global variable: r6049 ##sys#undefined-value 
o|contracted procedure: k5949 
o|contracted procedure: k5962 
o|contracted procedure: k5969 
o|contracted procedure: k5975 
o|contracted procedure: k5978 
o|contracted procedure: k5984 
o|contracted procedure: k5996 
o|contracted procedure: k6044 
o|contracted procedure: k6002 
o|contracted procedure: k6011 
o|contracted procedure: k6037 
o|contracted procedure: k6051 
o|contracted procedure: k6064 
o|contracted procedure: k6067 
o|contracted procedure: k6082 
o|contracted procedure: k6088 
o|contracted procedure: k6118 
o|contracted procedure: k6122 
o|contracted procedure: k6134 
o|contracted procedure: k6140 
o|contracted procedure: k6230 
o|contracted procedure: k6322 
o|contracted procedure: k6376 
o|contracted procedure: k6383 
o|contracted procedure: k6392 
o|contracted procedure: k6402 
o|contracted procedure: k6406 
o|contracted procedure: k6417 
o|contracted procedure: k6430 
o|contracted procedure: k6445 
o|contracted procedure: k6464 
o|contracted procedure: k6486 
o|contracted procedure: k6489 
o|contracted procedure: k6530 
o|contracted procedure: k6607 
o|contracted procedure: k6613 
o|contracted procedure: k6620 
o|contracted procedure: k6635 
o|contracted procedure: k6644 
o|contracted procedure: k6674 
o|contracted procedure: k6680 
o|contracted procedure: k6704 
o|contracted procedure: k6773 
o|contracted procedure: k6785 
o|contracted procedure: k6795 
o|contracted procedure: k6799 
o|contracted procedure: k6770 
o|contracted procedure: k6155 
o|contracted procedure: k6161 
o|contracted procedure: k6167 
o|contracted procedure: k6173 
o|contracted procedure: k6179 
o|contracted procedure: k6185 
o|contracted procedure: k6812 
o|contracted procedure: k6822 
o|contracted procedure: k6826 
o|contracted procedure: k6830 
o|contracted procedure: k6836 
o|contracted procedure: k6852 
o|contracted procedure: k6862 
o|contracted procedure: k6906 
o|contracted procedure: k6920 
o|contracted procedure: k6927 
o|contracted procedure: k6979 
o|contracted procedure: k7012 
o|contracted procedure: k7032 
o|contracted procedure: k7042 
o|contracted procedure: k7054 
o|contracted procedure: k7060 
o|contracted procedure: k7070 
o|contracted procedure: k7073 
o|contracted procedure: k707011894 
o|contracted procedure: k7095 
o|contracted procedure: k7104 
o|contracted procedure: k7125 
o|contracted procedure: k7110 
o|contracted procedure: k7121 
o|contracted procedure: k7117 
o|contracted procedure: k7188 
o|contracted procedure: k7200 
o|contracted procedure: k7210 
o|contracted procedure: k7214 
o|contracted procedure: k7168 
o|contracted procedure: k7171 
o|contracted procedure: k7174 
o|contracted procedure: k7181 
o|contracted procedure: k7231 
o|contracted procedure: k7243 
o|contracted procedure: k7253 
o|contracted procedure: k7257 
o|contracted procedure: k7274 
o|contracted procedure: k7373 
o|contracted procedure: k7439 
o|contracted procedure: k7463 
o|contracted procedure: k7485 
o|contracted procedure: k7489 
o|contracted procedure: k7493 
o|contracted procedure: k7497 
o|contracted procedure: k7501 
o|contracted procedure: k7505 
o|contracted procedure: k7508 
o|contracted procedure: k7514 
o|contracted procedure: k7546 
o|contracted procedure: k7553 
o|contracted procedure: k7565 
o|contracted procedure: k7575 
o|contracted procedure: k7579 
o|contracted procedure: k7599 
o|contracted procedure: k7611 
o|contracted procedure: k7620 
o|contracted procedure: k7632 
o|contracted procedure: k7644 
o|contracted procedure: k7668 
o|contracted procedure: k7665 
o|contracted procedure: k7680 
o|contracted procedure: k7687 
o|contracted procedure: k7699 
o|contracted procedure: k7706 
o|contracted procedure: k7711 
o|contracted procedure: k7717 
o|contracted procedure: k7723 
o|contracted procedure: k7729 
o|contracted procedure: k7735 
o|contracted procedure: k7741 
o|contracted procedure: k7747 
o|contracted procedure: k7774 
o|contracted procedure: k7780 
o|contracted procedure: k7786 
o|contracted procedure: k7792 
o|contracted procedure: k7811 
o|contracted procedure: k7817 
o|contracted procedure: k7823 
o|contracted procedure: k7842 
o|contracted procedure: k7848 
o|contracted procedure: k7854 
o|contracted procedure: k7860 
o|contracted procedure: k7866 
o|contracted procedure: k7872 
o|contracted procedure: k7878 
o|contracted procedure: k7884 
o|contracted procedure: k7890 
o|contracted procedure: k7896 
o|contracted procedure: k7902 
o|contracted procedure: k7908 
o|contracted procedure: k7914 
o|contracted procedure: k7920 
o|contracted procedure: k7961 
o|contracted procedure: k7967 
o|contracted procedure: k7973 
o|contracted procedure: k7979 
o|contracted procedure: k7985 
o|contracted procedure: k7991 
o|contracted procedure: k7997 
o|contracted procedure: k8003 
o|contracted procedure: k8009 
o|contracted procedure: k8015 
o|contracted procedure: k8021 
o|contracted procedure: k8098 
o|contracted procedure: k8104 
o|contracted procedure: k8145 
o|contracted procedure: k8120 
o|contracted procedure: k8130 
o|contracted procedure: k8134 
o|contracted procedure: k8138 
o|contracted procedure: k8142 
o|contracted procedure: k8155 
o|contracted procedure: k8165 
o|contracted procedure: k8177 
o|contracted procedure: k8187 
o|contracted procedure: k8191 
o|contracted procedure: k8209 
o|contracted procedure: k8233 
o|contracted procedure: k8246 
o|contracted procedure: k8250 
o|contracted procedure: k8273 
o|contracted procedure: k8282 
o|contracted procedure: k8285 
o|contracted procedure: k8294 
o|contracted procedure: k8297 
o|contracted procedure: k8306 
o|contracted procedure: k8309 
o|contracted procedure: k8318 
o|contracted procedure: k8321 
o|contracted procedure: k8330 
o|contracted procedure: k8342 
o|contracted procedure: k8351 
o|contracted procedure: k8354 
o|contracted procedure: k8363 
o|contracted procedure: k8372 
o|contracted procedure: k8381 
o|contracted procedure: k8390 
o|contracted procedure: k8399 
o|contracted procedure: k8408 
o|contracted procedure: k8417 
o|contracted procedure: k8426 
o|contracted procedure: k8429 
o|contracted procedure: k8438 
o|contracted procedure: k8450 
o|contracted procedure: k8453 
o|contracted procedure: k8459 
o|contracted procedure: k8471 
o|contracted procedure: k8474 
o|contracted procedure: k8483 
o|contracted procedure: k8486 
o|contracted procedure: k8495 
o|contracted procedure: k8498 
o|contracted procedure: k8507 
o|contracted procedure: k8510 
o|contracted procedure: k8519 
o|contracted procedure: k8522 
o|contracted procedure: k8531 
o|contracted procedure: k8534 
o|contracted procedure: k8543 
o|contracted procedure: k8546 
o|contracted procedure: k8555 
o|contracted procedure: k8558 
o|contracted procedure: k8567 
o|contracted procedure: k8579 
o|contracted procedure: k8591 
o|contracted procedure: k8612 
o|contracted procedure: k8609 
o|contracted procedure: k8624 
o|contracted procedure: k8633 
o|contracted procedure: k8647 
o|contracted procedure: k8664 
o|contracted procedure: k8698 
o|contracted procedure: k8701 
o|contracted procedure: k8713 
o|contracted procedure: k8716 
o|contracted procedure: k8727 
o|contracted procedure: k8739 
o|contracted procedure: k8743 
o|contracted procedure: k8760 
o|contracted procedure: k8777 
o|contracted procedure: k8794 
o|contracted procedure: k8811 
o|contracted procedure: k8828 
o|contracted procedure: k8845 
o|contracted procedure: k8854 
o|contracted procedure: k8857 
o|contracted procedure: k8930 
o|contracted procedure: k8863 
o|contracted procedure: k8889 
o|contracted procedure: k8901 
o|contracted procedure: k8904 
o|contracted procedure: k8915 
o|contracted procedure: k8927 
o|contracted procedure: k8883 
o|contracted procedure: k8939 
o|contracted procedure: k8946 
o|contracted procedure: k8951 
o|contracted procedure: k8958 
o|contracted procedure: k8963 
o|contracted procedure: k8967 
o|contracted procedure: k8973 
o|contracted procedure: k8980 
o|contracted procedure: k8985 
o|contracted procedure: k8992 
o|contracted procedure: k8997 
o|contracted procedure: k9004 
o|contracted procedure: k9009 
o|contracted procedure: k9016 
o|contracted procedure: k9021 
o|contracted procedure: k9028 
o|contracted procedure: k9033 
o|contracted procedure: k9040 
o|contracted procedure: k9045 
o|contracted procedure: k9049 
o|contracted procedure: k9058 
o|contracted procedure: k9066 
o|contracted procedure: k9072 
o|contracted procedure: k9089 
o|contracted procedure: k9095 
o|contracted procedure: k9101 
o|contracted procedure: k9176 
o|contracted procedure: k9182 
o|contracted procedure: k9206 
o|contracted procedure: k9212 
o|contracted procedure: k9259 
o|contracted procedure: k9315 
o|contracted procedure: k9321 
o|contracted procedure: k9324 
o|contracted procedure: k9330 
o|contracted procedure: k9339 
o|contracted procedure: k9345 
o|contracted procedure: k9351 
o|contracted procedure: k9357 
o|contracted procedure: k9366 
o|contracted procedure: k9369 
o|contracted procedure: k9375 
o|contracted procedure: k9381 
o|contracted procedure: k9387 
o|contracted procedure: k9393 
o|contracted procedure: k9399 
o|contracted procedure: k9402 
o|contracted procedure: k9408 
o|contracted procedure: k9414 
o|contracted procedure: k9420 
o|contracted procedure: k9426 
o|contracted procedure: k9432 
o|contracted procedure: k9438 
o|contracted procedure: k9444 
o|contracted procedure: k9450 
o|contracted procedure: k9456 
o|contracted procedure: k9462 
o|contracted procedure: k9468 
o|contracted procedure: k9474 
o|contracted procedure: k9480 
o|contracted procedure: k9486 
o|contracted procedure: k9492 
o|contracted procedure: k9498 
o|contracted procedure: k9504 
o|contracted procedure: k9510 
o|contracted procedure: k9516 
o|contracted procedure: k9522 
o|contracted procedure: k9528 
o|contracted procedure: k9534 
o|contracted procedure: k9540 
o|contracted procedure: k9546 
o|contracted procedure: k9552 
o|contracted procedure: k9561 
o|contracted procedure: k9570 
o|contracted procedure: k9588 
o|contracted procedure: k9585 
o|contracted procedure: k9603 
o|contracted procedure: k9609 
o|contracted procedure: k9615 
o|contracted procedure: k9621 
o|contracted procedure: k9627 
o|contracted procedure: k9633 
o|contracted procedure: k9639 
o|contracted procedure: k9645 
o|contracted procedure: k9651 
o|contracted procedure: k9658 
o|contracted procedure: k9664 
o|contracted procedure: k9670 
o|contracted procedure: k9681 
o|contracted procedure: k9687 
o|contracted procedure: k9694 
o|contracted procedure: k9725 
o|contracted procedure: k9734 
o|contracted procedure: k9742 
o|contracted procedure: k9748 
o|contracted procedure: k9754 
o|contracted procedure: k9773 
o|contracted procedure: k9779 
o|contracted procedure: k9866 
o|contracted procedure: k9887 
o|contracted procedure: k9893 
o|contracted procedure: k9899 
o|contracted procedure: k9905 
o|contracted procedure: k9946 
o|contracted procedure: k9949 
o|contracted procedure: k9955 
o|contracted procedure: k9958 
o|contracted procedure: k9964 
o|contracted procedure: k9967 
o|contracted procedure: k9973 
o|contracted procedure: k9979 
o|contracted procedure: k9985 
o|contracted procedure: k9991 
o|contracted procedure: k9997 
o|contracted procedure: k10000 
o|contracted procedure: k10024 
o|contracted procedure: k10048 
o|contracted procedure: k10075 
o|contracted procedure: k10099 
o|contracted procedure: k10102 
o|contracted procedure: k10126 
o|contracted procedure: k10129 
o|contracted procedure: k10153 
o|contracted procedure: k10177 
o|contracted procedure: k10180 
o|contracted procedure: k10204 
o|contracted procedure: k10228 
o|contracted procedure: k10252 
o|contracted procedure: k10258 
o|contracted procedure: k10261 
o|contracted procedure: k10279 
o|contracted procedure: k10276 
o|contracted procedure: k10294 
o|contracted procedure: k10300 
o|contracted procedure: k10303 
o|contracted procedure: k10327 
o|contracted procedure: k10351 
o|contracted procedure: k10375 
o|contracted procedure: k10399 
o|contracted procedure: k10423 
o|contracted procedure: k10430 
o|contracted procedure: k10436 
o|contracted procedure: k10439 
o|contracted procedure: k10463 
o|contracted procedure: k10487 
o|contracted procedure: k10542 
o|contracted procedure: k10551 
o|contracted procedure: k10595 
o|contracted procedure: k10601 
o|contracted procedure: k10607 
o|contracted procedure: k10613 
o|contracted procedure: k10619 
o|contracted procedure: k10625 
o|contracted procedure: k10631 
o|contracted procedure: k10637 
o|contracted procedure: k10643 
o|contracted procedure: k10649 
o|contracted procedure: k10764 
o|contracted procedure: k10760 
o|contracted procedure: k10736 
o|contracted procedure: k10756 
o|contracted procedure: k10752 
o|contracted procedure: k10740 
o|contracted procedure: k10748 
o|contracted procedure: k10744 
o|contracted procedure: k10774 
o|contracted procedure: k10784 
o|contracted procedure: k10790 
o|contracted procedure: k10796 
o|contracted procedure: k10808 
o|contracted procedure: k10814 
o|contracted procedure: k10820 
o|contracted procedure: k11017 
o|contracted procedure: k10826 
o|propagated global variable: r11018 ##sys#undefined-value 
o|contracted procedure: k10832 
o|contracted procedure: k10889 
o|contracted procedure: k10885 
o|contracted procedure: k10850 
o|contracted procedure: k10881 
o|contracted procedure: k10877 
o|contracted procedure: k10854 
o|contracted procedure: k10873 
o|contracted procedure: k10869 
o|contracted procedure: k10858 
o|contracted procedure: k10862 
o|contracted procedure: k10846 
o|contracted procedure: k10907 
o|contracted procedure: k10920 
o|contracted procedure: k10923 
o|contracted procedure: k10934 
o|contracted procedure: k10940 
o|contracted procedure: k10969 
o|contracted procedure: k10957 
o|contracted procedure: k11009 
o|contracted procedure: k10987 
o|contracted procedure: k11005 
o|simplifications: ((let . 91)) 
o|removed binding forms: 765 
o|inlining procedure: k4791 
o|inlining procedure: k4791 
o|inlining procedure: k5813 
o|inlining procedure: k5813 
o|inlining procedure: k7063 
o|inlining procedure: k7063 
o|inlining procedure: k7063 
o|inlining procedure: k8719 
o|inlining procedure: k8719 
o|inlining procedure: k8907 
o|inlining procedure: k8907 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|replaced variables: 208 
o|inlining procedure: k6764 
o|inlining procedure: k6764 
o|inlining procedure: k6764 
o|inlining procedure: k6764 
o|inlining procedure: k6764 
o|inlining procedure: k6764 
o|substituted constant variable: r1078212417 
o|substituted constant variable: r1078212417 
o|substituted constant variable: r1078212421 
o|substituted constant variable: r1078212421 
o|substituted constant variable: r1078212425 
o|substituted constant variable: r1078212425 
o|substituted constant variable: r1078212429 
o|substituted constant variable: r1078212429 
o|substituted constant variable: r1078212433 
o|substituted constant variable: r1078212433 
o|simplifications: ((if . 8)) 
o|removed binding forms: 122 
o|substituted constant variable: r676512491 
o|substituted constant variable: r676512493 
o|substituted constant variable: r676512495 
o|substituted constant variable: r676512497 
o|substituted constant variable: r676512499 
o|substituted constant variable: r676512501 
o|replaced variables: 16 
o|removed binding forms: 10 
o|removed binding forms: 10 
o|direct leaf routine/allocation: encode-size2145 24 
o|contracted procedure: "(c-backend.scm:1394) k10804" 
o|contracted procedure: "(c-backend.scm:1413) k10930" 
o|contracted procedure: "(c-backend.scm:1421) k10961" 
o|contracted procedure: "(c-backend.scm:1428) k10991" 
o|removed binding forms: 4 
o|replaced variables: 5 
o|removed binding forms: 3 
o|customizable procedures: (k10051 k10291 err1820 g20212022 k9333 k9360 k9555 k9564 k9600 err1742 k8333 k8441 k8462 k8570 k8582 k8640 k8657 k8674 k8749 k8766 k8783 k8800 k8817 k8834 k8851 err1548 map-loop17151733 map-loop16671692 g16541655 str1549 g13201327 for-each-loop13191526 for-each-loop14941508 k7614 k7623 k7635 k7647 k7690 g14581459 g12141221 for-each-loop12131309 k7475 for-each-loop12411270 for-each-loop11901203 for-each-loop11661180 k7076 loop1137 header89 declarations91 prototypes92 trampolines93 procedures101 k6227 k6843 k6296 k6803 doloop972973 for-each-loop980991 k6728 k6668 k6589 literal-frame94 k6328 doloop10561057 expression88 doloop918919 k6091 string-like-substring99 k5925 k6014 gen-string-constant98 loop887 map-loop862879 gen-lit97 doloop835836 k5582 k5585 k5631 g776783 for-each-loop775791 for-each-loop798808 emitter723 for-each-loop815825 restore722 doloop725726 k5096 k5114 g636643 for-each-loop635646 k5201 for-each-loop695705 for-each-loop682712 for-each-loop580591 doloop602603 doloop607608 doloop596597 pad0504 map-loop514539 for-each-loop552563 doloop475476 g380388 for-each-loop379395 for-each-loop405419 k3415 find-lambda87 k3421 k3634 k3768 g272280 for-each-loop271287 for-each-loop297311 expr-args110 g183191 for-each-loop182198 loop143 expr109 for-each-loop4758 for-each-loop2738) 
o|calls to known targets: 432 
o|fast box initializations: 55 
o|dropping unused closure argument: f_10730 
o|dropping unused closure argument: f_6138 
o|dropping unused closure argument: f_5329 
o|dropping unused closure argument: f_4633 
*/
/* end of file */
