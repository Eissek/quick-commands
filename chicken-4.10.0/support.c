/* Generated from support.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file support.c
   unit: support
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[565];
static double C_possibly_force_alignment;


/* from k5541 */
static C_word C_fcall stub347(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub347(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k5534 */
static C_word C_fcall stub342(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub342(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6013)
static void C_ccall f_6013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11558)
static void C_ccall f_11558(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10676)
static void C_ccall f_10676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6027)
static void C_ccall f_6027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6023)
static void C_fcall f_6023(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14655)
static void C_ccall f_14655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11542)
static void C_ccall f_11542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10687)
static void C_ccall f_10687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9460)
static void C_fcall f_9460(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11564)
static void C_ccall f_11564(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15566)
static void C_ccall f_15566(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9490)
static void C_ccall f_9490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4850)
static void C_fcall f_4850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4852)
static void C_fcall f_4852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5398)
static void C_ccall f_5398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15535)
static void C_ccall f_15535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15551)
static void C_ccall f_15551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15554)
static void C_ccall f_15554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15008)
static void C_ccall f_15008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12613)
static void C_ccall f_12613(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9486)
static void C_ccall f_9486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15003)
static void C_ccall f_15003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12619)
static void C_ccall f_12619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5932)
static void C_fcall f_5932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15012)
static void C_ccall f_15012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10916)
static void C_ccall f_10916(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10910)
static void C_ccall f_10910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15518)
static void C_ccall f_15518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4730)
static void C_fcall f_4730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15514)
static void C_ccall f_15514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6852)
static void C_ccall f_6852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10809)
static void C_fcall f_10809(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11595)
static void C_fcall f_11595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14363)
static void C_ccall f_14363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6778)
static void C_ccall f_6778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14361)
static void C_ccall f_14361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6772)
static void C_fcall f_6772(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8943)
static void C_ccall f_8943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9454)
static void C_ccall f_9454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11378)
static void C_fcall f_11378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15096)
static void C_ccall f_15096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15541)
static void C_ccall f_15541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15068)
static void C_ccall f_15068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15064)
static void C_ccall f_15064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14030)
static void C_fcall f_14030(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_ccall f_6712(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15078)
static void C_ccall f_15078(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14008)
static void C_fcall f_14008(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11515)
static void C_ccall f_11515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15801)
static void C_ccall f_15801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15044)
static void C_ccall f_15044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11507)
static void C_ccall f_11507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11504)
static void C_ccall f_11504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11500)
static void C_ccall f_11500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15818)
static void C_fcall f_15818(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15813)
static void C_ccall f_15813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15026)
static void C_ccall f_15026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15020)
static void C_ccall f_15020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11521)
static void C_ccall f_11521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15039)
static void C_ccall f_15039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15036)
static void C_ccall f_15036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15033)
static void C_ccall f_15033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15747)
static void C_ccall f_15747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15741)
static void C_ccall f_15741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6703)
static void C_ccall f_6703(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6707)
static void C_fcall f_6707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8675)
static void C_ccall f_8675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15758)
static void C_ccall f_15758(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6731)
static void C_ccall f_6731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14357)
static void C_ccall f_14357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11570)
static void C_fcall f_11570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14901)
static void C_ccall f_14901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14907)
static void C_ccall f_14907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8646)
static void C_fcall f_8646(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8644)
static void C_ccall f_8644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11047)
static void C_ccall f_11047(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8634)
static void C_fcall f_8634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5346)
static void C_fcall f_5346(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10840)
static void C_ccall f_10840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8600)
static void C_ccall f_8600(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10791)
static void C_ccall f_10791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14624)
static void C_ccall f_14624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14999)
static void C_ccall f_14999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14992)
static void C_ccall f_14992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10942)
static void C_fcall f_10942(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15469)
static void C_fcall f_15469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14988)
static void C_ccall f_14988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10956)
static void C_ccall f_10956(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14699)
static void C_fcall f_14699(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10964)
static void C_ccall f_10964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14973)
static void C_ccall f_14973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_14395)
static void C_fcall f_14395(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15449)
static void C_ccall f_15449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14960)
static void C_ccall f_14960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10269)
static void C_ccall f_10269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10271)
static void C_fcall f_10271(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9649)
static void C_ccall f_9649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14950)
static void C_ccall f_14950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15452)
static void C_ccall f_15452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5754)
static void C_ccall f_5754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_15428)
static void C_ccall f_15428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15425)
static void C_ccall f_15425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12595)
static void C_ccall f_12595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11019)
static void C_ccall f_11019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14604)
static void C_ccall f_14604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10560)
static void C_fcall f_10560(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14934)
static void C_ccall f_14934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14936)
static void C_fcall f_14936(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10222)
static void C_ccall f_10222(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10228)
static void C_ccall f_10228(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13791)
static void C_ccall f_13791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13795)
static void C_ccall f_13795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15407)
static void C_ccall f_15407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9673)
static void C_fcall f_9673(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9609)
static void C_ccall f_9609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15413)
static void C_ccall f_15413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4907)
static void C_fcall f_4907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10557)
static void C_ccall f_10557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14613)
static void C_ccall f_14613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7396)
static void C_ccall f_7396(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9665)
static void C_ccall f_9665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7399)
static void C_ccall f_7399(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4961)
static void C_ccall f_4961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12582)
static void C_ccall f_12582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14467)
static void C_fcall f_14467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6467)
static void C_ccall f_6467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_14459)
static void C_fcall f_14459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14403)
static void C_fcall f_14403(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6403)
static void C_ccall f_6403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6403)
static void C_ccall f_6403r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15436)
static void C_fcall f_15436(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15431)
static void C_ccall f_15431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14427)
static void C_fcall f_14427(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14413)
static void C_ccall f_14413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13112)
static void C_fcall f_13112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13124)
static void C_fcall f_13124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8060)
static void C_ccall f_8060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15372)
static void C_ccall f_15372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15381)
static void C_ccall f_15381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15387)
static void C_ccall f_15387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5663)
static void C_fcall f_5663(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15384)
static void C_ccall f_15384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13102)
static void C_ccall f_13102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15390)
static void C_ccall f_15390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15397)
static void C_fcall f_15397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15393)
static void C_ccall f_15393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15396)
static void C_ccall f_15396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8981)
static void C_ccall f_8981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8989)
static void C_fcall f_8989(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13167)
static void C_fcall f_13167(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8977)
static void C_ccall f_8977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15609)
static void C_ccall f_15609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8254)
static void C_fcall f_8254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_fcall f_4795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11156)
static void C_ccall f_11156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11153)
static void C_fcall f_11153(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15661)
static void C_ccall f_15661(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10523)
static void C_fcall f_10523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11146)
static void C_ccall f_11146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11140)
static void C_ccall f_11140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4772)
static void C_fcall f_4772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11179)
static void C_ccall f_11179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11801)
static void C_fcall f_11801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9620)
static void C_fcall f_9620(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15621)
static void C_ccall f_15621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15624)
static void C_ccall f_15624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11828)
static void C_fcall f_11828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10890)
static void C_ccall f_10890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5617)
static void C_fcall f_5617(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15637)
static void C_ccall f_15637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15632)
static void C_ccall f_15632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5005)
static void C_fcall f_5005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13130)
static void C_ccall f_13130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15681)
static void C_ccall f_15681(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13134)
static void C_fcall f_13134(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10884)
static void C_ccall f_10884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13819)
static void C_fcall f_13819(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6362)
static void C_fcall f_6362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7003)
static void C_fcall f_7003(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12707)
static void C_fcall f_12707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7348)
static void C_ccall f_7348(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12713)
static void C_ccall f_12713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12717)
static void C_fcall f_12717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11197)
static void C_ccall f_11197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11194)
static void C_fcall f_11194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8031)
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6668)
static void C_fcall f_6668(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11187)
static void C_ccall f_11187(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11181)
static void C_ccall f_11181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8029)
static void C_ccall f_8029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6650)
static void C_ccall f_6650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13671)
static void C_ccall f_13671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f17235)
static void C_ccall f17235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10306)
static void C_ccall f_10306(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10300)
static void C_ccall f_10300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10312)
static void C_ccall f_10312(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13643)
static void C_fcall f_13643(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8353)
static void C_ccall f_8353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8359)
static void C_ccall f_8359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10338)
static void C_ccall f_10338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8229)
static void C_fcall f_8229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8381)
static void C_fcall f_8381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10340)
static void C_fcall f_10340(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13517)
static void C_ccall f_13517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6603)
static void C_fcall f_6603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6607)
static void C_fcall f_6607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6600)
static void C_ccall f_6600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8379)
static void C_ccall f_8379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13523)
static void C_ccall f_13523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13527)
static void C_ccall f_13527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8699)
static void C_ccall f_8699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11858)
static void C_ccall f_11858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11855)
static void C_fcall f_11855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5804)
static void C_fcall f_5804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6640)
static void C_ccall f_6640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8541)
static void C_ccall f_8541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8543)
static void C_fcall f_8543(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8572)
static void C_ccall f_8572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11899)
static void C_fcall f_11899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_fcall f_6339(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6316)
static void C_fcall f_6316(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15570)
static void C_ccall f_15570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15579)
static void C_ccall f_15579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15575)
static void C_fcall f_15575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6924)
static void C_fcall f_6924(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15597)
static void C_ccall f_15597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11736)
static void C_ccall f_11736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11733)
static void C_fcall f_11733(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10369)
static void C_ccall f_10369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6900)
static void C_fcall f_6900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10153)
static void C_ccall f_10153(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10159)
static void C_fcall f_10159(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10177)
static void C_ccall f_10177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10173)
static void C_ccall f_10173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14477)
static void C_ccall f_14477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10635)
static void C_ccall f_10635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5678)
static void C_ccall f_5678(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10637)
static void C_ccall f_10637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7808)
static void C_ccall f_7808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10643)
static void C_ccall f_10643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10649)
static void C_fcall f_10649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5400)
static void C_fcall f_5400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10653)
static void C_ccall f_10653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7829)
static void C_ccall f_7829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5429)
static void C_fcall f_5429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5422)
static void C_fcall f_5422(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9763)
static void C_ccall f_9763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8315)
static void C_fcall f_8315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8313)
static void C_ccall f_8313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10187)
static void C_ccall f_10187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10183)
static void C_ccall f_10183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12545)
static void C_ccall f_12545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10193)
static void C_ccall f_10193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10190)
static void C_ccall f_10190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9796)
static void C_ccall f_9796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9790)
static void C_ccall f_9790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12564)
static void C_ccall f_12564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4977)
static void C_ccall f_4977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9787)
static void C_ccall f_9787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12098)
static void C_ccall f_12098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_fcall f_4983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4987)
static void C_fcall f_4987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10576)
static void C_ccall f_10576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7871)
static void C_ccall f_7871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11751)
static void C_fcall f_11751(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11775)
static void C_fcall f_11775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9062)
static void C_fcall f_9062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10104)
static void C_fcall f_10104(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10117)
static void C_fcall f_10117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8151)
static void C_ccall f_8151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14713)
static void C_fcall f_14713(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9174)
static void C_fcall f_9174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8188)
static void C_ccall f_8188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8446)
static void C_ccall f_8446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14701)
static void C_fcall f_14701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8432)
static void C_ccall f_8432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5570)
static void C_fcall f_5570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8122)
static void C_fcall f_8122(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9579)
static void C_ccall f_9579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8425)
static void C_ccall f_8425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8422)
static void C_ccall f_8422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10602)
static void C_ccall f_10602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8816)
static void C_fcall f_8816(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8814)
static void C_ccall f_8814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8810)
static void C_ccall f_8810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9091)
static void C_ccall f_9091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12551)
static void C_ccall f_12551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11277)
static void C_ccall f_11277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8806)
static void C_ccall f_8806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8418)
static void C_fcall f_8418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8410)
static void C_ccall f_8410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15926)
static void C_ccall f_15926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15920)
static void C_ccall f_15920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15923)
static void C_ccall f_15923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7465)
static void C_fcall f_7465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7463)
static void C_ccall f_7463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11265)
static void C_ccall f_11265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11267)
static void C_ccall f_11267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9559)
static void C_ccall f_9559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9555)
static void C_fcall f_9555(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9731)
static void C_ccall f_9731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9734)
static void C_ccall f_9734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11299)
static C_word C_fcall f_11299(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_11297)
static void C_ccall f_11297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11292)
static void C_ccall f_11292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8865)
static void C_fcall f_8865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9724)
static void C_ccall f_9724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9299)
static void C_ccall f_9299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9192)
static void C_ccall f_9192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6930)
static void C_ccall f_6930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9272)
static void C_ccall f_9272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11237)
static void C_ccall f_11237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11224)
static void C_ccall f_11224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15300)
static void C_fcall f_15300(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9504)
static void C_ccall f_9504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7851)
static void C_ccall f_7851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8829)
static void C_fcall f_8829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9241)
static void C_ccall f_9241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9243)
static void C_fcall f_9243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9233)
static void C_ccall f_9233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8192)
static void C_ccall f_8192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15339)
static void C_ccall f_15339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15335)
static void C_ccall f_15335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14778)
static void C_fcall f_14778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7863)
static void C_ccall f_7863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15344)
static void C_fcall f_15344(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7494)
static void C_ccall f_7494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11218)
static void C_ccall f_11218(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11216)
static void C_ccall f_11216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14769)
static void C_ccall f_14769(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13990)
static void C_fcall f_13990(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11288)
static void C_ccall f_11288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9534)
static void C_ccall f_9534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14752)
static void C_fcall f_14752(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6188)
static void C_ccall f_6188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14742)
static void C_ccall f_14742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9529)
static void C_ccall f_9529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9526)
static void C_ccall f_9526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6192)
static void C_ccall f_6192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14568)
static void C_ccall f_14568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9510)
static void C_ccall f_9510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14737)
static void C_ccall f_14737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9516)
static void C_ccall f_9516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14723)
static void C_ccall f_14723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14549)
static void C_fcall f_14549(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_12695)
static void C_fcall f_12695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13969)
static void C_fcall f_13969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10404)
static void C_fcall f_10404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12683)
static void C_fcall f_12683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10414)
static void C_ccall f_10414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14515)
static void C_fcall f_14515(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14512)
static void C_ccall f_14512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12674)
static void C_fcall f_12674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12664)
static void C_ccall f_12664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12652)
static void C_ccall f_12652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12658)
static void C_ccall f_12658(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10442)
static void C_ccall f_10442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9040)
static void C_ccall f_9040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10446)
static void C_ccall f_10446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8586)
static void C_ccall f_8586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9028)
static void C_ccall f_9028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12623)
static void C_ccall f_12623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12627)
static void C_fcall f_12627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9013)
static void C_ccall f_9013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10375)
static void C_ccall f_10375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10379)
static void C_ccall f_10379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9146)
static void C_ccall f_9146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10382)
static void C_ccall f_10382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10388)
static void C_ccall f_10388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8797)
static void C_ccall f_8797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8794)
static void C_ccall f_8794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10396)
static void C_ccall f_10396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9226)
static void C_fcall f_9226(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9215)
static void C_ccall f_9215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9117)
static void C_fcall f_9117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8594)
static void C_ccall f_8594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6583)
static void C_ccall f_6583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7613)
static void C_ccall f_7613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15479)
static void C_ccall f_15479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15881)
static void C_ccall f_15881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15899)
static void C_ccall f_15899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7621)
static void C_ccall f_7621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15896)
static void C_ccall f_15896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14811)
static void C_ccall f_14811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7623)
static void C_fcall f_7623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15892)
static void C_ccall f_15892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7658)
static void C_fcall f_7658(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15865)
static void C_ccall f_15865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15867)
static void C_ccall f_15867(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_15867)
static void C_ccall f_15867r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_15861)
static void C_ccall f_15861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14817)
static void C_ccall f_14817(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15874)
static void C_ccall f_15874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15849)
static void C_ccall f_15849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15843)
static void C_ccall f_15843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15858)
static void C_ccall f_15858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15855)
static void C_ccall f_15855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15852)
static void C_ccall f_15852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15492)
static void C_ccall f_15492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_15828)
static void C_ccall f_15828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15499)
static void C_fcall f_15499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15496)
static void C_ccall f_15496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10457)
static void C_ccall f_10457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10451)
static void C_ccall f_10451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10054)
static void C_ccall f_10054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10056)
static void C_fcall f_10056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14574)
static void C_ccall f_14574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10465)
static void C_fcall f_10465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14578)
static void C_ccall f_14578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10460)
static void C_ccall f_10460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10730)
static void C_fcall f_10730(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15232)
static void C_ccall f_15232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10026)
static void C_ccall f_10026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15247)
static void C_ccall f_15247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15241)
static void C_ccall f_15241(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_15241)
static void C_ccall f_15241r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_15215)
static void C_ccall f_15215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10042)
static void C_ccall f_10042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10044)
static void C_fcall f_10044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9816)
static void C_ccall f_9816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10704)
static C_word C_fcall f_10704(C_word t0,C_word t1);
C_noret_decl(f_15206)
static void C_ccall f_15206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10085)
static void C_ccall f_10085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_fcall f_5144(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7946)
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9920)
static void C_ccall f_9920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9928)
static void C_ccall f_9928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9857)
static void C_ccall f_9857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9854)
static void C_ccall f_9854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5123)
static void C_fcall f_5123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9961)
static void C_fcall f_9961(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7975)
static void C_ccall f_7975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9883)
static void C_fcall f_9883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9881)
static void C_ccall f_9881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9871)
static void C_fcall f_9871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15263)
static void C_ccall f_15263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15265)
static void C_fcall f_15265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9997)
static void C_fcall f_9997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6574)
static void C_ccall f_6574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_15904)
static void C_ccall f_15904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10475)
static void C_ccall f_10475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15910)
static void C_ccall f_15910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15917)
static void C_ccall f_15917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10490)
static void C_ccall f_10490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10492)
static void C_ccall f_10492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10499)
static void C_ccall f_10499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12024)
static void C_fcall f_12024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12027)
static void C_ccall f_12027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9848)
static void C_ccall f_9848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9841)
static void C_fcall f_9841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9845)
static void C_ccall f_9845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9839)
static void C_ccall f_9839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10752)
static void C_ccall f_10752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11917)
static void C_fcall f_11917(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10769)
static void C_fcall f_10769(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8701)
static void C_fcall f_8701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11902)
static void C_ccall f_11902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7517)
static void C_fcall f_7517(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9379)
static void C_ccall f_9379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9946)
static void C_ccall f_9946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9948)
static void C_fcall f_9948(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9350)
static void C_fcall f_9350(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7935)
static void C_fcall f_7935(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9330)
static void C_ccall f_9330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14866)
static void C_ccall f_14866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14862)
static void C_ccall f_14862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11407)
static void C_ccall f_11407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11401)
static void C_ccall f_11401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8894)
static void C_ccall f_8894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12062)
static void C_ccall f_12062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14895)
static void C_ccall f_14895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14891)
static void C_fcall f_14891(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14888)
static void C_ccall f_14888(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_14888)
static void C_ccall f_14888r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_14881)
static void C_ccall f_14881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11429)
static void C_ccall f_11429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11426)
static void C_ccall f_11426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11420)
static void C_ccall f_11420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6093)
static C_word C_fcall f_6093(C_word t0,C_word t1);
C_noret_decl(f_15103)
static void C_ccall f_15103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7596)
static void C_fcall f_7596(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7594)
static void C_ccall f_7594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11413)
static void C_ccall f_11413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14823)
static void C_ccall f_14823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7587)
static void C_ccall f_7587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11447)
static void C_ccall f_11447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11444)
static void C_ccall f_11444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6523)
static void C_ccall f_6523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6526)
static void C_fcall f_6526(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14855)
static void C_ccall f_14855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14852)
static void C_ccall f_14852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14858)
static void C_ccall f_14858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11438)
static void C_ccall f_11438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11435)
static void C_ccall f_11435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11432)
static void C_ccall f_11432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15779)
static void C_ccall f_15779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15773)
static void C_ccall f_15773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_14849)
static void C_ccall f_14849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14846)
static void C_ccall f_14846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14840)
static void C_ccall f_14840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15785)
static void C_ccall f_15785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11693)
static void C_fcall f_11693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13084)
static void C_ccall f_13084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14870)
static void C_ccall f_14870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15797)
static void C_ccall f_15797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5085)
static void C_fcall f_5085(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11480)
static void C_ccall f_11480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11486)
static void C_ccall f_11486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11483)
static void C_ccall f_11483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6064)
static void C_fcall f_6064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15726)
static void C_ccall f_15726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_15726)
static void C_ccall f_15726r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5228)
static void C_fcall f_5228(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13090)
static void C_ccall f_13090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11471)
static void C_ccall f_11471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15165)
static void C_ccall f_15165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11474)
static void C_ccall f_11474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15160)
static void C_ccall f_15160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13894)
static void C_fcall f_13894(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7291)
static void C_ccall f_7291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7297)
static void C_ccall f_7297(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15177)
static void C_ccall f_15177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15171)
static void C_ccall f_15171(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11492)
static void C_ccall f_11492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14832)
static void C_ccall f_14832(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_14832)
static void C_ccall f_14832r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_11495)
static void C_ccall f_11495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15185)
static void C_ccall f_15185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15187)
static void C_ccall f_15187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15193)
static void C_ccall f_15193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15769)
static void C_ccall f_15769(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7785)
static void C_fcall f_7785(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10696)
static void C_fcall f_10696(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10693)
static void C_ccall f_10693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7527)
static void C_ccall f_7527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11628)
static void C_ccall f_11628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15133)
static void C_ccall f_15133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_15701)
static void C_ccall f_15701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15705)
static void C_ccall f_15705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11610)
static void C_fcall f_11610(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_fcall f_5194(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6809)
static void C_fcall f_6809(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15154)
static void C_ccall f_15154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5902)
static void C_ccall f_5902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11991)
static void C_fcall f_11991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8919)
static void C_ccall f_8919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5908)
static void C_fcall f_5908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6815)
static void C_ccall f_6815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9341)
static void C_ccall f_9341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11987)
static void C_ccall f_11987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6846)
static void C_fcall f_6846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9348)
static void C_ccall f_9348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11678)
static void C_ccall f_11678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11468)
static void C_ccall f_11468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11462)
static void C_ccall f_11462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11944)
static void C_fcall f_11944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11456)
static void C_ccall f_11456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11459)
static void C_ccall f_11459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9301)
static void C_fcall f_9301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11450)
static void C_ccall f_11450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8730)
static void C_ccall f_8730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14643)
static void C_ccall f_14643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11532)
static void C_fcall f_11532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5985)
static void C_ccall f_5985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5980)
static void C_ccall f_5980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4884)
static void C_fcall f_4884(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_6023)
static void C_fcall trf_6023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6023(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6023(t0,t1);}

C_noret_decl(trf_9460)
static void C_fcall trf_9460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9460(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9460(t0,t1,t2);}

C_noret_decl(trf_4850)
static void C_fcall trf_4850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4850(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4850(t0,t1,t2);}

C_noret_decl(trf_4852)
static void C_fcall trf_4852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4852(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4852(t0,t1,t2);}

C_noret_decl(trf_5932)
static void C_fcall trf_5932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5932(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5932(t0,t1);}

C_noret_decl(trf_4730)
static void C_fcall trf_4730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4730(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4730(t0,t1);}

C_noret_decl(trf_10809)
static void C_fcall trf_10809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10809(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10809(t0,t1,t2,t3);}

C_noret_decl(trf_11595)
static void C_fcall trf_11595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11595(t0,t1);}

C_noret_decl(trf_6772)
static void C_fcall trf_6772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6772(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6772(t0,t1);}

C_noret_decl(trf_11378)
static void C_fcall trf_11378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11378(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11378(t0,t1,t2);}

C_noret_decl(trf_14030)
static void C_fcall trf_14030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14030(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14030(t0,t1);}

C_noret_decl(trf_14008)
static void C_fcall trf_14008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14008(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14008(t0,t1);}

C_noret_decl(trf_15818)
static void C_fcall trf_15818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15818(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_15818(t0,t1,t2);}

C_noret_decl(trf_6707)
static void C_fcall trf_6707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6707(t0,t1);}

C_noret_decl(trf_11570)
static void C_fcall trf_11570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11570(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11570(t0,t1,t2);}

C_noret_decl(trf_8646)
static void C_fcall trf_8646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8646(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8646(t0,t1,t2);}

C_noret_decl(trf_8634)
static void C_fcall trf_8634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8634(t0,t1);}

C_noret_decl(trf_5346)
static void C_fcall trf_5346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5346(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5346(t0,t1,t2,t3);}

C_noret_decl(trf_10942)
static void C_fcall trf_10942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10942(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10942(t0,t1);}

C_noret_decl(trf_15469)
static void C_fcall trf_15469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15469(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_15469(t0,t1,t2);}

C_noret_decl(trf_14699)
static void C_fcall trf_14699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14699(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_14699(t0,t1,t2,t3);}

C_noret_decl(trf_14395)
static void C_fcall trf_14395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14395(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14395(t0,t1);}

C_noret_decl(trf_10271)
static void C_fcall trf_10271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10271(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10271(t0,t1,t2);}

C_noret_decl(trf_10560)
static void C_fcall trf_10560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10560(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10560(t0,t1);}

C_noret_decl(trf_14936)
static void C_fcall trf_14936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14936(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_14936(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9673)
static void C_fcall trf_9673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9673(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9673(t0,t1,t2,t3);}

C_noret_decl(trf_4907)
static void C_fcall trf_4907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4907(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4907(t0,t1,t2);}

C_noret_decl(trf_14467)
static void C_fcall trf_14467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14467(t0,t1,t2);}

C_noret_decl(trf_14459)
static void C_fcall trf_14459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14459(t0,t1);}

C_noret_decl(trf_14403)
static void C_fcall trf_14403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14403(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14403(t0,t1,t2);}

C_noret_decl(trf_15436)
static void C_fcall trf_15436(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15436(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_15436(t0,t1,t2);}

C_noret_decl(trf_14427)
static void C_fcall trf_14427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14427(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14427(t0,t1);}

C_noret_decl(trf_13112)
static void C_fcall trf_13112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13112(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13112(t0,t1);}

C_noret_decl(trf_13124)
static void C_fcall trf_13124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13124(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13124(t0,t1);}

C_noret_decl(trf_5663)
static void C_fcall trf_5663(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5663(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5663(t0,t1,t2,t3);}

C_noret_decl(trf_15397)
static void C_fcall trf_15397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_15397(t0,t1,t2);}

C_noret_decl(trf_8989)
static void C_fcall trf_8989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8989(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8989(t0,t1,t2,t3);}

C_noret_decl(trf_13167)
static void C_fcall trf_13167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13167(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13167(t0,t1);}

C_noret_decl(trf_8254)
static void C_fcall trf_8254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8254(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8254(t0,t1,t2);}

C_noret_decl(trf_4795)
static void C_fcall trf_4795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4795(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4795(t0,t1,t2);}

C_noret_decl(trf_11153)
static void C_fcall trf_11153(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11153(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11153(t0,t1);}

C_noret_decl(trf_10523)
static void C_fcall trf_10523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10523(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10523(t0,t1);}

C_noret_decl(trf_4772)
static void C_fcall trf_4772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4772(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4772(t0,t1,t2);}

C_noret_decl(trf_11801)
static void C_fcall trf_11801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11801(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11801(t0,t1);}

C_noret_decl(trf_9620)
static void C_fcall trf_9620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9620(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9620(t0,t1,t2);}

C_noret_decl(trf_11828)
static void C_fcall trf_11828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11828(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11828(t0,t1);}

C_noret_decl(trf_5617)
static void C_fcall trf_5617(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5617(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5617(t0,t1,t2);}

C_noret_decl(trf_5005)
static void C_fcall trf_5005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5005(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5005(t0,t1,t2);}

C_noret_decl(trf_13134)
static void C_fcall trf_13134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13134(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13134(t0,t1,t2);}

C_noret_decl(trf_13819)
static void C_fcall trf_13819(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13819(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13819(t0,t1);}

C_noret_decl(trf_6362)
static void C_fcall trf_6362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6362(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6362(t0,t1,t2);}

C_noret_decl(trf_7003)
static void C_fcall trf_7003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7003(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7003(t0,t1);}

C_noret_decl(trf_12707)
static void C_fcall trf_12707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12707(t0,t1);}

C_noret_decl(trf_12717)
static void C_fcall trf_12717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12717(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12717(t0,t1,t2);}

C_noret_decl(trf_11194)
static void C_fcall trf_11194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11194(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11194(t0,t1);}

C_noret_decl(trf_8031)
static void C_fcall trf_8031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8031(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8031(t0,t1,t2);}

C_noret_decl(trf_6668)
static void C_fcall trf_6668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6668(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6668(t0,t1,t2);}

C_noret_decl(trf_13643)
static void C_fcall trf_13643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13643(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13643(t0,t1);}

C_noret_decl(trf_8229)
static void C_fcall trf_8229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8229(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8229(t0,t1);}

C_noret_decl(trf_8381)
static void C_fcall trf_8381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8381(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8381(t0,t1,t2);}

C_noret_decl(trf_10340)
static void C_fcall trf_10340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10340(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10340(t0,t1,t2);}

C_noret_decl(trf_6603)
static void C_fcall trf_6603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6603(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6603(t0,t1);}

C_noret_decl(trf_6607)
static void C_fcall trf_6607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6607(t0,t1,t2);}

C_noret_decl(trf_11855)
static void C_fcall trf_11855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11855(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11855(t0,t1);}

C_noret_decl(trf_5804)
static void C_fcall trf_5804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5804(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5804(t0,t1);}

C_noret_decl(trf_8543)
static void C_fcall trf_8543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8543(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8543(t0,t1,t2);}

C_noret_decl(trf_11899)
static void C_fcall trf_11899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11899(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11899(t0,t1);}

C_noret_decl(trf_6339)
static void C_fcall trf_6339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6339(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6339(t0,t1,t2);}

C_noret_decl(trf_6316)
static void C_fcall trf_6316(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6316(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6316(t0,t1,t2);}

C_noret_decl(trf_15575)
static void C_fcall trf_15575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15575(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_15575(t0,t1);}

C_noret_decl(trf_6924)
static void C_fcall trf_6924(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6924(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6924(t0,t1);}

C_noret_decl(trf_11733)
static void C_fcall trf_11733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11733(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11733(t0,t1);}

C_noret_decl(trf_6900)
static void C_fcall trf_6900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6900(t0,t1,t2);}

C_noret_decl(trf_10159)
static void C_fcall trf_10159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10159(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10159(t0,t1,t2);}

C_noret_decl(trf_10649)
static void C_fcall trf_10649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10649(t0,t1);}

C_noret_decl(trf_5400)
static void C_fcall trf_5400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5400(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5400(t0,t1,t2);}

C_noret_decl(trf_5429)
static void C_fcall trf_5429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5429(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5429(t0,t1);}

C_noret_decl(trf_5422)
static void C_fcall trf_5422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5422(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5422(t0,t1);}

C_noret_decl(trf_8315)
static void C_fcall trf_8315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8315(t0,t1,t2);}

C_noret_decl(trf_4983)
static void C_fcall trf_4983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4983(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4983(t0,t1);}

C_noret_decl(trf_4987)
static void C_fcall trf_4987(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4987(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4987(t0,t1,t2);}

C_noret_decl(trf_11751)
static void C_fcall trf_11751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11751(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11751(t0,t1);}

C_noret_decl(trf_11775)
static void C_fcall trf_11775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11775(t0,t1);}

C_noret_decl(trf_9062)
static void C_fcall trf_9062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9062(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9062(t0,t1,t2);}

C_noret_decl(trf_10104)
static void C_fcall trf_10104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10104(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10104(t0,t1,t2,t3);}

C_noret_decl(trf_10117)
static void C_fcall trf_10117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10117(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10117(t0,t1);}

C_noret_decl(trf_14713)
static void C_fcall trf_14713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14713(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14713(t0,t1,t2);}

C_noret_decl(trf_9174)
static void C_fcall trf_9174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9174(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9174(t0,t1,t2,t3,t4);}

C_noret_decl(trf_14701)
static void C_fcall trf_14701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14701(t0,t1,t2);}

C_noret_decl(trf_5570)
static void C_fcall trf_5570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5570(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5570(t0,t1);}

C_noret_decl(trf_8122)
static void C_fcall trf_8122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8122(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8122(t0,t1,t2);}

C_noret_decl(trf_8816)
static void C_fcall trf_8816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8816(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8816(t0,t1,t2,t3);}

C_noret_decl(trf_8418)
static void C_fcall trf_8418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8418(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8418(t0,t1);}

C_noret_decl(trf_7465)
static void C_fcall trf_7465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7465(t0,t1,t2);}

C_noret_decl(trf_9555)
static void C_fcall trf_9555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9555(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9555(t0,t1);}

C_noret_decl(trf_8865)
static void C_fcall trf_8865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8865(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8865(t0,t1,t2);}

C_noret_decl(trf_15300)
static void C_fcall trf_15300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15300(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_15300(t0,t1,t2);}

C_noret_decl(trf_8829)
static void C_fcall trf_8829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8829(t0,t1);}

C_noret_decl(trf_9243)
static void C_fcall trf_9243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9243(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9243(t0,t1,t2);}

C_noret_decl(trf_14778)
static void C_fcall trf_14778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14778(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14778(t0,t1,t2);}

C_noret_decl(trf_15344)
static void C_fcall trf_15344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15344(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_15344(t0,t1,t2,t3);}

C_noret_decl(trf_13990)
static void C_fcall trf_13990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13990(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13990(t0,t1);}

C_noret_decl(trf_14752)
static void C_fcall trf_14752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14752(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14752(t0,t1);}

C_noret_decl(trf_14549)
static void C_fcall trf_14549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14549(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14549(t0,t1);}

C_noret_decl(trf_12695)
static void C_fcall trf_12695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12695(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12695(t0,t1);}

C_noret_decl(trf_13969)
static void C_fcall trf_13969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13969(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13969(t0,t1);}

C_noret_decl(trf_10404)
static void C_fcall trf_10404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10404(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10404(t0,t1,t2);}

C_noret_decl(trf_12683)
static void C_fcall trf_12683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12683(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12683(t0,t1);}

C_noret_decl(trf_14515)
static void C_fcall trf_14515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14515(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_14515(t0,t1,t2,t3);}

C_noret_decl(trf_12674)
static void C_fcall trf_12674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12674(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12674(t0,t1);}

C_noret_decl(trf_12627)
static void C_fcall trf_12627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12627(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12627(t0,t1,t2);}

C_noret_decl(trf_9226)
static void C_fcall trf_9226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9226(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9226(t0,t1);}

C_noret_decl(trf_9117)
static void C_fcall trf_9117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9117(t0,t1,t2);}

C_noret_decl(trf_7623)
static void C_fcall trf_7623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7623(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7623(t0,t1,t2);}

C_noret_decl(trf_7658)
static void C_fcall trf_7658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7658(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7658(t0,t1,t2);}

C_noret_decl(trf_15499)
static void C_fcall trf_15499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15499(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_15499(t0,t1);}

C_noret_decl(trf_10056)
static void C_fcall trf_10056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10056(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10056(t0,t1,t2);}

C_noret_decl(trf_10465)
static void C_fcall trf_10465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10465(t0,t1,t2);}

C_noret_decl(trf_10730)
static void C_fcall trf_10730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10730(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10730(t0,t1,t2,t3);}

C_noret_decl(trf_10044)
static void C_fcall trf_10044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10044(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10044(t0,t1,t2);}

C_noret_decl(trf_5144)
static void C_fcall trf_5144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5144(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5144(t0,t1,t2,t3);}

C_noret_decl(trf_7946)
static void C_fcall trf_7946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7946(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7946(t0,t1,t2);}

C_noret_decl(trf_5123)
static void C_fcall trf_5123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5123(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5123(t0,t1);}

C_noret_decl(trf_9961)
static void C_fcall trf_9961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9961(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9961(t0,t1);}

C_noret_decl(trf_9883)
static void C_fcall trf_9883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9883(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9883(t0,t1,t2);}

C_noret_decl(trf_9871)
static void C_fcall trf_9871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9871(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9871(t0,t1,t2);}

C_noret_decl(trf_15265)
static void C_fcall trf_15265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_15265(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_15265(t0,t1,t2);}

C_noret_decl(trf_9997)
static void C_fcall trf_9997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9997(t0,t1,t2);}

C_noret_decl(trf_12024)
static void C_fcall trf_12024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12024(t0,t1);}

C_noret_decl(trf_9841)
static void C_fcall trf_9841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9841(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9841(t0,t1,t2);}

C_noret_decl(trf_11917)
static void C_fcall trf_11917(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11917(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11917(t0,t1);}

C_noret_decl(trf_10769)
static void C_fcall trf_10769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10769(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10769(t0,t1,t2,t3);}

C_noret_decl(trf_8701)
static void C_fcall trf_8701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8701(t0,t1,t2);}

C_noret_decl(trf_7517)
static void C_fcall trf_7517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7517(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7517(t0,t1);}

C_noret_decl(trf_9948)
static void C_fcall trf_9948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9948(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9948(t0,t1,t2,t3);}

C_noret_decl(trf_9350)
static void C_fcall trf_9350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9350(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9350(t0,t1,t2);}

C_noret_decl(trf_7935)
static void C_fcall trf_7935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7935(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7935(t0,t1);}

C_noret_decl(trf_14891)
static void C_fcall trf_14891(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14891(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14891(t0,t1);}

C_noret_decl(trf_7596)
static void C_fcall trf_7596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7596(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7596(t0,t1,t2);}

C_noret_decl(trf_6526)
static void C_fcall trf_6526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6526(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6526(t0,t1);}

C_noret_decl(trf_11693)
static void C_fcall trf_11693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11693(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11693(t0,t1);}

C_noret_decl(trf_5085)
static void C_fcall trf_5085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5085(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5085(t0,t1,t2);}

C_noret_decl(trf_6064)
static void C_fcall trf_6064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6064(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6064(t0,t1,t2);}

C_noret_decl(trf_5228)
static void C_fcall trf_5228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5228(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5228(t0,t1,t2,t3);}

C_noret_decl(trf_13894)
static void C_fcall trf_13894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13894(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13894(t0,t1);}

C_noret_decl(trf_7785)
static void C_fcall trf_7785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7785(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7785(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10696)
static void C_fcall trf_10696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10696(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10696(t0,t1,t2,t3);}

C_noret_decl(trf_11610)
static void C_fcall trf_11610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11610(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11610(t0,t1);}

C_noret_decl(trf_5194)
static void C_fcall trf_5194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5194(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5194(t0,t1,t2,t3);}

C_noret_decl(trf_6809)
static void C_fcall trf_6809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6809(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6809(t0,t1);}

C_noret_decl(trf_11991)
static void C_fcall trf_11991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11991(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11991(t0,t1,t2);}

C_noret_decl(trf_5908)
static void C_fcall trf_5908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5908(t0,t1,t2);}

C_noret_decl(trf_6846)
static void C_fcall trf_6846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6846(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6846(t0,t1);}

C_noret_decl(trf_11944)
static void C_fcall trf_11944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11944(t0,t1);}

C_noret_decl(trf_9301)
static void C_fcall trf_9301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9301(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9301(t0,t1,t2);}

C_noret_decl(trf_11532)
static void C_fcall trf_11532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11532(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11532(t0,t1,t2);}

C_noret_decl(trf_4884)
static void C_fcall trf_4884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4884(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4884(t0,t1,t2);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

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

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

/* a6048 in tmp14308 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6055,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6063,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:312: read */
t4=*((C_word*)lf[118]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4815 in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4817,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:72: display */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6011 in a6001 in a5995 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:308: exn-msg */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* support.scm:309: ->string */
t2=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* ##compiler#foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11558(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11558,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11564,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12545,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1014: follow-without-loop */
t6=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t3,t4,t5);}

/* k10674 in k10651 in loop in a10642 in load-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:824: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10649(t2,((C_word*)t0)[3]);}

/* k6025 in tmp14308 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6027,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[116]);}
else{
t2=C_i_cdr(t1);
t3=C_i_nullp(t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_u_i_car(t1):C_a_i_cons(&a,2,lf[117],t1)));}}

/* tmp14308 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6023(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6023,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6027,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6049,tmp=(C_word)a,a+=2,tmp);
/* support.scm:310: with-input-from-string */
t4=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6081,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp14308 */
t5=t2;
f_6023(t5,t4);}

/* k14653 in a14642 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1367: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14515(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11540 in for-each-loop2548 in a11514 in k11502 in pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11532(t3,((C_word*)t0)[4],t2);}

/* k10685 in k10651 in loop in a10642 in load-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10687,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[312],C_SCHEME_TRUE);}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[312],t3);}}

/* k4803 in k4800 in dump in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:57: ##sys#print */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* fold in fold-boolean in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9460(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9460,NULL,3,t0,t1,t2);}
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
C_apply(4,0,t1,((C_word*)t0)[2],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9486,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_i_cadr(t2);
/* support.scm:679: proc */
t8=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,t6,t7);}}

/* k4800 in dump in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:57: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(124),((C_word*)t0)[4]);}

/* ##compiler#c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5382,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5394,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5398,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* string->list */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11564(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11564,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11570,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_11570(t7,t1,t2);}

/* k4857 in g102 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:85: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(124),((C_word*)t0)[3]);}

/* ##compiler#scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15566(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15566,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15570,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1554: open-output-string */
t4=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k9488 in k9484 in fold in fold-boolean in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9490,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[243],lf[280],t2));}

/* collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4850(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4850,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4879,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:89: string-split */
t5=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[25]);}

/* g102 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4852(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4852,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[8]+1);
t4=*((C_word*)lf[8]+1);
t5=C_i_check_port_2(*((C_word*)lf[8]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4859,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* support.scm:85: ##sys#print */
t9=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t6,t8,C_SCHEME_FALSE,*((C_word*)lf[8]+1));}
else{
t7=((C_word*)t0)[2];
/* support.scm:85: ##sys#print */
t8=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,t7,C_SCHEME_FALSE,t3);}}

/* k5392 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5394,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_make_character(34),t1);
/* list->string */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5398,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5400,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5400(t5,((C_word*)t0)[2],t1);}

/* k4711 in bomb in k4688 in k4685 in k4682 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
C_apply(5,0,((C_word*)t0)[3],*((C_word*)lf[4]+1),t1,t3);}

/* ##compiler#read/source-info in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15535,3,t0,t1,t2);}
/* support.scm:1539: ##sys#read */
t3=*((C_word*)lf[530]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[525]+1));}

/* k4833 in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k5368 in loop in build-lambda-list in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##compiler#with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4847(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_4847,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4850,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4907,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4930,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:94: test-mode */
f_4907(t10,t2,*((C_word*)lf[1]+1));}

/* k4843 in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:79: dump */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4795(t2,((C_word*)t0)[3],t1);}

/* k15549 in user-read-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1549: scan-sharp-greater-string */
t3=*((C_word*)lf[534]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k15552 in k15549 in user-read-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15554,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[532],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[533],t2));}

/* k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:63: display */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[19]);}
else{
/* support.scm:67: newline */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* ##compiler#real-name2 in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_15008,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15012,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1453: ##sys#hash-table-ref */
t5=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[496]+1),t2);}

/* ##compiler#final-foreign-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12613(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12613,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12619,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1157: follow-without-loop */
t5=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}

/* k9484 in fold in fold-boolean in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9486,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9490,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:680: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9460(t6,t3,t5);}

/* k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15003,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1438: get */
t5=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],((C_word*)t0)[5],lf[182]);}

/* a12618 in final-foreign-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12619,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12623,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:1160: ##sys#hash-table-ref */
t5=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[397]+1),t2);}
else{
t5=t4;
f_12623(2,t5,C_SCHEME_FALSE);}}

/* k4824 in k4821 in k4818 in k4815 in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k4750 in k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4772,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4772(t6,((C_word*)t0)[3],t2);}

/* k4821 in k4818 in k4815 in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(((C_word*)t0)[3],*((C_word*)lf[9]+1)))){
/* support.scm:75: dump */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4795(t3,t2,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}}

/* k4818 in k4815 in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:73: flush-output */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5930 in loop in canonicalize-begin-body in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5932(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5932,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:296: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5908(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:297: gensym */
t3=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[112]);}}

/* k4741 in k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:67: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k15010 in real-name2 in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:1454: real-name */
t2=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* walk in expression-has-side-effects? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10916(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10916,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=t7;
t9=C_eqp(t8,lf[222]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10942,a[2]=t1,a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_10942(t11,t9);}
else{
t11=C_eqp(t8,lf[98]);
if(C_truep(t11)){
t12=t10;
f_10942(t12,t11);}
else{
t12=C_eqp(t8,lf[227]);
t13=t10;
f_10942(t13,(C_truep(t12)?t12:C_eqp(t8,lf[245])));}}}

/* ##compiler#expression-has-side-effects? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10910,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10916,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_10916(3,t7,t1,t2);}

/* k6760 in k6726 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm:494: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t2,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k5946 in k5956 in k5930 in loop in canonicalize-begin-body in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5948,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[110],((C_word*)t0)[3],t1));}

/* k15516 in k15512 in k15497 in read-info-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15518,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),t2);
/* support.scm:1529: ##sys#hash-table-set! */
t4=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],*((C_word*)lf[159]+1),((C_word*)t0)[5],t3);}
else{
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),C_SCHEME_END_OF_LIST);
/* support.scm:1529: ##sys#hash-table-set! */
t3=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],*((C_word*)lf[159]+1),((C_word*)t0)[5],t2);}}

/* text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4730,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:59: with-output-to-string */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k15512 in k15497 in read-info-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15514,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15518,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* support.scm:1534: ##sys#hash-table-ref */
t6=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,*((C_word*)lf[159]+1),t5);}

/* k6850 in k6844 in k6807 in k6770 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6852,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* support.scm:493: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,((C_word*)t0)[3],t6,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* ##compiler#debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_4727r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4727r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4727r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(16);
t5=C_SCHEME_UNDEFINED;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4730,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
if(C_truep(C_i_memq(t2,*((C_word*)lf[1]+1)))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4817,a[2]=t1,a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* support.scm:71: text */
t11=t5;
f_4730(t11,t10);}
else{
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4835,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(t2,*((C_word*)lf[9]+1)))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4845,a[2]=t7,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* support.scm:79: text */
t12=t5;
f_4730(t12,t11);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}}

/* k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4724(C_word c,C_word t0,C_word t1){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4724,2,t0,t1);}
t2=C_mutate2((C_word*)lf[8]+1 /* (set! ##compiler#collected-debugging-output ...) */,t1);
t3=C_mutate2((C_word*)lf[9]+1 /* (set! +logged-debugging-modes+ ...) */,lf[10]);
t4=C_mutate2((C_word*)lf[11]+1 /* (set! ##compiler#debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4727,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[23]+1 /* (set! ##compiler#with-debugging-output ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4847,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[28]+1 /* (set! ##compiler#quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4963,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[32]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4979,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[41]+1 /* (set! syntax-error ...) */,*((C_word*)lf[32]+1));
t9=C_mutate2((C_word*)lf[42]+1 /* (set! ##compiler#emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5076,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2((C_word*)lf[43]+1 /* (set! map-llist ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5079,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2((C_word*)lf[44]+1 /* (set! ##compiler#check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5120,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[47]+1 /* (set! ##compiler#posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5188,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[48]+1 /* (set! ##compiler#posv ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5222,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[49]+1 /* (set! ##compiler#stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5256,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[54]+1 /* (set! ##compiler#symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5286,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[56]+1 /* (set! ##compiler#slashify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5320,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[61]+1 /* (set! ##compiler#uncommentify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5330,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2((C_word*)lf[64]+1 /* (set! ##compiler#build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5340,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2((C_word*)lf[65]+1 /* (set! ##compiler#string->c-identifier ...) */,*((C_word*)lf[66]+1));
t20=C_mutate2((C_word*)lf[67]+1 /* (set! ##compiler#c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5382,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate2((C_word*)lf[77]+1 /* (set! ##compiler#valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5479,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate2((C_word*)lf[79]+1 /* (set! ##compiler#words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5531,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate2((C_word*)lf[80]+1 /* (set! ##compiler#words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5538,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate2((C_word*)lf[81]+1 /* (set! ##compiler#check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5545,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate2((C_word*)lf[88]+1 /* (set! ##compiler#close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5589,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate2((C_word*)lf[91]+1 /* (set! ##compiler#fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5601,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate2((C_word*)lf[93]+1 /* (set! ##compiler#follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5657,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate2((C_word*)lf[94]+1 /* (set! ##compiler#sort-symbols ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5688,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate2((C_word*)lf[97]+1 /* (set! ##compiler#constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5708,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate2((C_word*)lf[101]+1 /* (set! ##compiler#collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5770,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate2((C_word*)lf[102]+1 /* (set! ##compiler#immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5800,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate2((C_word*)lf[104]+1 /* (set! ##compiler#basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5846,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate2((C_word*)lf[107]+1 /* (set! ##compiler#canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5902,tmp=(C_word)a,a+=2,tmp));
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:301: condition-predicate */
t35=*((C_word*)lf[564]+1);
((C_proc3)(void*)(*((C_word*)t35+1)))(3,t35,t34,lf[517]);}

/* loop in k10789 in matchn in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10809(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10809,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t2));}
else{
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:853: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10696(t4,t1,t3,t2);}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10840,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:855: matchn */
t7=((C_word*)((C_word*)t0)[4])[1];
f_10769(t7,t4,t5,t6);}}}}

/* k6744 in k6729 in k6726 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm:495: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t2,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4740,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:61: display */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11595(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11595,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[352]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[355],((C_word*)t0)[2]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[356]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_11610(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[424]);
t5=t3;
f_11610(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[425])));}}}

/* walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14363(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14363,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=C_eqp(t7,lf[222]);
t9=(C_truep(t8)?t8:C_eqp(t7,lf[246]));
if(C_truep(t9)){
t10=t2;
t11=C_slot(t10,C_fix(2));
t12=C_i_car(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14395,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14427,a[2]=t13,a[3]=((C_word*)t0)[3],a[4]=t14,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t13,((C_word*)t0)[4]))){
t16=C_i_memq(t13,((C_word*)((C_word*)t0)[3])[1]);
t17=t15;
f_14427(t17,C_i_not(t16));}
else{
t16=t15;
f_14427(t16,C_SCHEME_FALSE);}}
else{
t10=C_eqp(t7,lf[98]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14459,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t10)){
t12=t11;
f_14459(t12,t10);}
else{
t12=C_eqp(t7,lf[227]);
t13=t11;
f_14459(t13,(C_truep(t12)?t12:C_eqp(t7,lf[242])));}}}

/* k6776 in k6770 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6778,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* support.scm:489: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,((C_word*)t0)[3],t6,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k14359 in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k6770 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6772(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6772,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:489: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[167],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6809,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[170]);
t4=t2;
f_6809(t4,C_i_not(t3));}
else{
t3=t2;
f_6809(t3,C_SCHEME_FALSE);}}}

/* k8941 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8943,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[267],((C_word*)t0)[3],t1));}

/* ##compiler#fold-boolean in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9454,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9460,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_9460(t7,t1,t3);}

/* ##compiler#stringify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5256,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:163: symbol->string */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5275,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:164: open-output-string */
t4=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}

/* for-each-loop2450 in a11296 in compute-database-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11378(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_11378,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_11299(C_a_i(&a,20),((C_word*)t0)[2],t3);
t5=C_slot(t2,C_fix(1));
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#call-info in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_15096,4,t0,t1,t2,t3);}
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_cadr(t2):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15103,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
if(C_truep(C_i_listp(t6))){
t8=C_i_car(t6);
t9=C_i_cadr(t6);
/* support.scm:1479: conc */
t10=*((C_word*)lf[506]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t7,lf[513],t8,lf[514],t3);}
else{
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}
else{
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* ##sys#user-read-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_15541,4,t0,t1,t2,t3);}
if(C_truep(C_i_char_equalp(C_make_character(62),t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15551,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t5=*((C_word*)lf[535]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
/* support.scm:1551: old-hook */
t4=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}}

/* k15066 in source-info->string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1466: make-string */
t2=*((C_word*)lf[509]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k15062 in source-info->string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1466: conc */
t2=*((C_word*)lf[506]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[507],t1,lf[508],((C_word*)t0)[4]);}

/* k5273 in stringify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5275,2,t0,t1);}
t2=t1;
t3=C_i_check_port_2(t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[51]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5281,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:164: ##sys#print */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[3],C_SCHEME_FALSE,t2);}

/* k14028 in k14006 in k13988 in k13967 in k13892 in k13817 in k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14030(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[479]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[392]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1315: foreign-type->scrutiny-type */
t4=*((C_word*)lf[460]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t3,((C_word*)t0)[5]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[393]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[425]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[394]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[395]:lf[241]));}
else{
t5=C_eqp(((C_word*)t0)[3],lf[379]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?lf[395]:lf[241]));}}}}}

/* a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6712(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6712,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t14=C_SCHEME_UNDEFINED;
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6722,a[2]=t1,a[3]=t11,a[4]=t13,a[5]=t5,a[6]=t7,a[7]=t9,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* support.scm:462: write */
t15=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t2);}}

/* ##compiler#source-info->line in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15078(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15078,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}
else{
if(C_truep(t2)){
/* support.scm:1472: ->string */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* ##compiler#symbolify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5286,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_stringp(t2))){
/* support.scm:168: string->symbol */
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5309,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:169: open-output-string */
t4=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}

/* k5279 in k5273 in stringify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:164: get-output-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k14006 in k13988 in k13967 in k13892 in k13817 in k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14008(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_14008,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[478]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[384]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[384]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,lf[386]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14030,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_14030(t7,t5);}
else{
t7=C_eqp(t4,lf[395]);
if(C_truep(t7)){
t8=t6;
f_14030(t8,t7);}
else{
t8=C_eqp(t4,lf[396]);
t9=t6;
f_14030(t9,(C_truep(t8)?t8:C_eqp(t4,lf[377])));}}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[241]);}}}}

/* a11514 in k11502 in pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11515,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[34]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11532,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_11532(t7,t1,t2);}

/* k15799 in for-each-loop3931 in k15811 in k15783 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15801,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,t3);
/* support.scm:1619: append */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t2,t4);}

/* ##compiler#source-info->string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15044(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15044,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=C_i_car(t2);
t4=t3;
t5=C_i_cadr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15064,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15068,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_i_string_length(t4);
t10=C_a_i_minus(&a,2,C_fix(4),t9);
/* support.scm:1466: max */
t11=*((C_word*)lf[510]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,C_fix(0),t10);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11505 in k11502 in pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* support.scm:1003: close-output-port */
t2=*((C_word*)lf[345]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k11502 in pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11504,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11515,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:996: with-output-to-port */
t5=*((C_word*)lf[347]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}

/* ##compiler#pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11500,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11504,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* support.scm:995: open-output-file */
t5=*((C_word*)lf[348]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t5=t4;
f_11504(2,t5,*((C_word*)lf[13]+1));}}

/* for-each-loop3931 in k15811 in k15783 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15818(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15818,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15828,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15797,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15801,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1619: ##sys#get */
t11=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t8,lf[547]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k15811 in k15783 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15813,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15818,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_15818(t5,((C_word*)t0)[2],t1);}

/* a15025 in display-real-name-table in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_15026,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[13]+1);
t5=*((C_word*)lf[13]+1);
t6=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15033,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1458: ##sys#print */
t8=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,t2,C_SCHEME_TRUE,*((C_word*)lf[13]+1));}

/* k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6772,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[170]);
t5=t3;
f_6772(t5,C_i_not(t4));}
else{
t4=t3;
f_6772(t4,C_SCHEME_FALSE);}}

/* k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6900,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6900(t6,t2,((C_word*)t0)[8]);}

/* ##compiler#display-real-name-table in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15026,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1457: ##sys#hash-table-for-each */
t3=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[496]+1));}

/* k6726 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[4])[1]))){
t3=*((C_word*)lf[13]+1);
t4=*((C_word*)lf[13]+1);
t5=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:494: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[166],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}
else{
t3=t2;
f_6731(2,t3,C_SCHEME_UNDEFINED);}}

/* k11519 in for-each-loop2548 in a11514 in k11502 in pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1001: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k15037 in k15034 in k15031 in a15025 in display-real-name-table in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1458: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k15034 in k15031 in a15025 in display-real-name-table in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1458: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k15031 in a15025 in display-real-name-table in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1458: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* ##compiler#intrinsic? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15747,3,t0,t1,t2);}
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[144]);}

/* ##compiler#variable-mark in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_15741,4,t0,t1,t2,t3);}
/* support.scm:1602: ##sys#get */
t4=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* ##compiler#display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6703(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6703,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6707,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_6707(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7289,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:451: append */
t5=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[209]+1),*((C_word*)lf[210]+1),*((C_word*)lf[141]+1));}}

/* k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6707(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6707,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:454: ##sys#hash-table-for-each */
t3=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k8673 in map-loop1485 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8675(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8675,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8646(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8646(t6,((C_word*)t0)[5],t5);}}

/* foldable? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15758(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15758,3,t0,t1,t2);}
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[146]);}

/* k6732 in k6729 in k6726 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:496: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k6729 in k6726 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=*((C_word*)lf[13]+1);
t4=*((C_word*)lf[13]+1);
t5=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:495: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[165],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}
else{
/* support.scm:496: newline */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* ##compiler#scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14357(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_14357,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14361,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14363,a[2]=t8,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_14363(3,t10,t6,t2);}

/* repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11570(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11570,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_eqp(t3,lf[350]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[351]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(*((C_word*)lf[352]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[353],((C_word*)t0)[2])));}
else{
t6=C_eqp(t3,lf[354]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11595,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_11595(t8,t6);}
else{
t8=C_eqp(t3,lf[426]);
if(C_truep(t8)){
t9=t7;
f_11595(t9,t8);}
else{
t9=C_eqp(t3,lf[427]);
if(C_truep(t9)){
t10=t7;
f_11595(t10,t9);}
else{
t10=C_eqp(t3,lf[428]);
if(C_truep(t10)){
t11=t7;
f_11595(t11,t10);}
else{
t11=C_eqp(t3,lf[429]);
if(C_truep(t11)){
t12=t7;
f_11595(t12,t11);}
else{
t12=C_eqp(t3,lf[430]);
if(C_truep(t12)){
t13=t7;
f_11595(t13,t12);}
else{
t13=C_eqp(t3,lf[431]);
t14=t7;
f_11595(t14,(C_truep(t13)?t13:C_eqp(t3,lf[432])));}}}}}}}}

/* k14899 in k14893 in resolve in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14907,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15003,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1436: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}
else{
/* support.scm:1450: ##sys#symbol->qualified-string */
t2=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],t1);}}
else{
/* support.scm:1433: ##sys#symbol->qualified-string */
t2=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* map-loop1485 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8646(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8646,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8675,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:626: g1491 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8642 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8644,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* rec in simple-lambda-node? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11047(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11047,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(t4,lf[253]);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(3));
t8=C_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[222],t9);
if(C_truep(t10)){
t11=C_slot(t8,C_fix(2));
t12=C_i_car(t11);
t13=C_eqp(((C_word*)t0)[2],t12);
if(C_truep(t13)){
t14=C_u_i_cdr(t7);
/* support.scm:893: every */
t15=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,((C_word*)((C_word*)t0)[3])[1],t14);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t6=C_eqp(t4,lf[244]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=t2;
t8=C_slot(t7,C_fix(3));
/* support.scm:895: every */
t9=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,((C_word*)((C_word*)t0)[3])[1],t8);}}}

/* k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8634(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8634,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[162]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8644,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8646,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8646(t12,t8,((C_word*)t0)[3]);}
else{
t2=C_eqp(((C_word*)t0)[6],lf[264]);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[162]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8699,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8701,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8701(t13,t9,((C_word*)t0)[3]);}
else{
t3=C_eqp(((C_word*)t0)[6],lf[222]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_car(((C_word*)t0)[7]));}
else{
t4=C_eqp(((C_word*)t0)[6],lf[98]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[7]);
t6=C_booleanp(t5);
if(C_truep(t6)){
if(C_truep(t6)){
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}
else{
t7=C_u_i_car(((C_word*)t0)[7]);
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,2,lf[98],t7));}}
else{
t7=C_i_stringp(t5);
if(C_truep(t7)){
if(C_truep(t7)){
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}
else{
t8=C_u_i_car(((C_word*)t0)[7]);
t9=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,2,lf[98],t8));}}
else{
t8=C_i_numberp(t5);
t9=(C_truep(t8)?t8:C_charp(t5));
if(C_truep(t9)){
t10=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t5);}
else{
t10=C_u_i_car(((C_word*)t0)[7]);
t11=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,2,lf[98],t10));}}}}
else{
t5=C_eqp(((C_word*)t0)[6],lf[110]);
if(C_truep(t5)){
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t0)[7];
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)((C_word*)t0)[2])[1];
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8794,a[2]=t10,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t9,a[7]=t7,a[8]=t14,a[9]=t12,a[10]=t15,tmp=(C_word)a,a+=11,tmp);
/* support.scm:636: butlast */
t17=*((C_word*)lf[266]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,((C_word*)t0)[3]);}
else{
t6=C_eqp(((C_word*)t0)[6],lf[134]);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[7]);
t8=(C_truep(t7)?lf[236]:lf[134]);
t9=t8;
t10=C_i_caddr(((C_word*)t0)[7]);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8919,a[2]=((C_word*)t0)[4],a[3]=t9,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t13=C_i_car(((C_word*)t0)[3]);
/* support.scm:643: walk */
t14=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t14,t12,t13);}
else{
t7=C_eqp(((C_word*)t0)[6],lf[237]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[7]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8943,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(((C_word*)t0)[3]);
/* support.scm:645: walk */
t12=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t12,t10,t11);}
else{
t8=C_eqp(((C_word*)t0)[6],lf[268]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t0)[3]);
/* support.scm:647: walk */
t10=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t10,((C_word*)t0)[4],t9);}
else{
t9=C_eqp(((C_word*)t0)[6],lf[238]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8977,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_i_car(((C_word*)t0)[3]);
/* support.scm:650: walk */
t12=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t12,t10,t11);}
else{
t10=C_eqp(((C_word*)t0)[6],lf[253]);
if(C_truep(t10)){
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)((C_word*)t0)[2])[1];
t16=C_i_check_list_2(((C_word*)t0)[3],lf[162]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9062,a[2]=t14,a[3]=t18,a[4]=t12,a[5]=t15,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_9062(t20,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=C_eqp(((C_word*)t0)[6],lf[244]);
if(C_truep(t11)){
t12=C_i_car(((C_word*)t0)[7]);
t13=t12;
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)((C_word*)t0)[2])[1];
t19=C_i_check_list_2(((C_word*)t0)[3],lf[162]);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9115,a[2]=((C_word*)t0)[4],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9117,a[2]=t17,a[3]=t22,a[4]=t15,a[5]=t18,tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_9117(t24,t20,((C_word*)t0)[3]);}
else{
t12=C_eqp(((C_word*)t0)[6],lf[227]);
if(C_truep(t12)){
t13=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list1(&a,1,((C_word*)t0)[5]));}
else{
t13=C_eqp(((C_word*)t0)[6],lf[271]);
if(C_truep(t13)){
t14=C_i_car(((C_word*)t0)[7]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9174,a[2]=((C_word*)t0)[2],a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_9174(t18,((C_word*)t0)[4],t14,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t14=C_eqp(((C_word*)t0)[6],lf[272]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_9226(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[6],lf[274]);
if(C_truep(t16)){
t17=t15;
f_9226(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[6],lf[275]);
t18=t15;
f_9226(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[6],lf[276])));}}}}}}}}}}}}}}}}

/* ##compiler#build-lambda-list in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5340,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5346,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5346(t8,t1,t2,t3);}

/* loop in build-lambda-list in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5346(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5346,NULL,4,t0,t1,t2,t3);}
t4=C_i_zerop(t3);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_SCHEME_END_OF_LIST));}
else{
t6=C_i_car(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5370,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_a_i_minus(&a,2,t3,C_fix(1));
/* support.scm:178: loop */
t14=t8;
t15=t10;
t16=t11;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* k10838 in loop in k10789 in matchn in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:856: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10809(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8600(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8600,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=t2;
t10=C_slot(t9,C_fix(1));
t11=t10;
t12=t11;
t13=C_eqp(t12,lf[226]);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8634,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=t12,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t13)){
t15=t14;
f_8634(t15,t13);}
else{
t15=C_eqp(t12,lf[277]);
t16=t14;
f_8634(t16,(C_truep(t15)?t15:C_eqp(t12,lf[278])));}}

/* ##compiler#slashify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5320,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5328,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:171: ->string */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5326 in slashify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:171: string-translate */
t2=*((C_word*)lf[57]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[58],lf[59]);}

/* ##compiler#uncommentify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5330,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:173: ->string */
t4=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5336 in uncommentify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:173: string-translate* */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[63]);}

/* k5307 in symbolify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5309,2,t0,t1);}
t2=t1;
t3=C_i_check_port_2(t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[51]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:169: ##sys#print */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[3],C_SCHEME_FALSE,t2);}

/* k10789 in matchn in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10791,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10809,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10809(t8,((C_word*)t0)[6],t3,t4);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5313 in k5307 in symbolify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:169: get-output-string */
t3=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5316 in k5313 in k5307 in symbolify in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:169: string->symbol */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k14622 in k14611 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1362: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14515(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k14997 in loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1449: string-intersperse */
t2=*((C_word*)lf[498]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[502]);}

/* k14990 in k14958 in loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14992,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14988,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1448: get */
t7=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[6],((C_word*)t0)[7],lf[182]);}

/* k10940 in walk in expression-has-side-effects? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10942(C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10942,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[134]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10956,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* support.scm:874: find */
t8=*((C_word*)lf[321]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[2],t7,*((C_word*)lf[322]+1));}
else{
t3=C_eqp(((C_word*)t0)[3],lf[226]);
if(C_truep(t3)){
if(C_truep(t3)){
/* support.scm:877: any */
t4=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[110]);
if(C_truep(t4)){
/* support.scm:877: any */
t5=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}}}}}

/* for-each-loop3738 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15469,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15479,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1513: g3739 */
t5=((C_word*)t0)[3];
f_15397(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14986 in k14990 in k14958 in loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1446: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14936(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* a10955 in k10940 in walk in expression-has-side-effects? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10956(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10956,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10964,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:875: foreign-callback-stub-id */
t4=*((C_word*)lf[320]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* walkeach in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14699(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14699,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14701,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[34]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14713,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_14713(t9,t1,t2);}

/* k10962 in a10955 in k10940 in walk in expression-has-side-effects? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],t1));}

/* k14971 in k14958 in loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1445: string-intersperse */
t2=*((C_word*)lf[498]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[501]);}

/* k6469 in collect! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6471(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6471,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(1),t4));}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_slot(t1,C_fix(1));
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t3),t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t1,C_fix(1),t5));}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:399: ##sys#hash-table-set! */
t4=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);}}

/* ##compiler#copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_9655,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(t3,lf[162]);
t12=C_i_check_list_2(t4,lf[162]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9665,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10104,a[2]=t10,a[3]=t15,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_10104(t17,t13,t3,t4);}

/* k14393 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14395(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14395,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(((C_word*)t0)[3],lf[34]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14403,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_14403(t7,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k15447 in doloop3769 in k15426 in k15423 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* support.scm:1517: ##sys#print */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k14958 in loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14960,2,t0,t1);}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14973,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1445: reverse */
t4=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14992,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1446: symbol->string */
t4=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* k10267 in walk in node->sexpr in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10269,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* map-loop2109 in walk in node->sexpr in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10271(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10271,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10300,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:770: g2115 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5740 in constant? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5742,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:258: ##sys#srfi-4-vector? */
t4=*((C_word*)lf[99]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}}}

/* k9647 in map-loop1801 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9649(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9649,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9620(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9620(t6,((C_word*)t0)[5],t5);}}

/* k14948 in loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1441: string-intersperse */
t2=*((C_word*)lf[498]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[499]);}

/* k15450 in k15447 in doloop3769 in k15426 in k15423 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_15452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15436(t3,((C_word*)t0)[4],t2);}

/* k5752 in k5740 in constant? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[98],t3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* ##compiler#varnode in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7366,3,t0,t1,t2);}
t3=C_a_i_list1(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[222],t3,C_SCHEME_END_OF_LIST));}

/* make-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7360(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7360,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[212],t2,t3,t4));}

/* k15426 in k15423 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15436,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_15436(t6,t2,C_fix(5));}

/* k15423 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(4));
/* support.scm:1516: ##sys#print */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,((C_word*)t0)[5]);}

/* k12593 in foreign-type-convert-argument in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12595,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7358(C_word c,C_word t0,C_word t1){
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
C_word ab[131],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7358,2,t0,t1);}
t2=C_mutate2((C_word*)lf[211]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7360,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate2((C_word*)lf[221]+1 /* (set! ##compiler#varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7366,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[223]+1 /* (set! ##compiler#qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7381,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[224]+1 /* (set! ##compiler#build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7396,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[263]+1 /* (set! ##compiler#build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8594,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[279]+1 /* (set! ##compiler#fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9454,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[281]+1 /* (set! ##compiler#inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9504,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2((C_word*)lf[286]+1 /* (set! ##compiler#copy-node-tree-and-rename ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9655,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2((C_word*)lf[290]+1 /* (set! ##compiler#tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10153,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2((C_word*)lf[291]+1 /* (set! ##compiler#copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10183,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[292]+1 /* (set! ##compiler#node->sexpr ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10222,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[293]+1 /* (set! ##compiler#sexpr->node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10306,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[294]+1 /* (set! ##compiler#emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10375,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[314]+1 /* (set! ##compiler#load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10637,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[316]+1 /* (set! ##compiler#match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10693,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[319]+1 /* (set! ##compiler#expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10910,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2((C_word*)lf[323]+1 /* (set! ##compiler#simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11019,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2((C_word*)lf[324]+1 /* (set! ##compiler#dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11140,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate2((C_word*)lf[326]+1 /* (set! ##compiler#dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11181,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate2((C_word*)lf[327]+1 /* (set! ##compiler#dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11218,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate2((C_word*)lf[328]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11267,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate2((C_word*)lf[331]+1 /* (set! ##compiler#compute-database-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11288,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate2((C_word*)lf[334]+1 /* (set! ##compiler#print-program-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11401,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate2((C_word*)lf[344]+1 /* (set! ##compiler#pprint-expressions-to-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11500,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate2((C_word*)lf[349]+1 /* (set! ##compiler#foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11558,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate2((C_word*)lf[434]+1 /* (set! ##compiler#foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12551,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate2((C_word*)lf[435]+1 /* (set! ##compiler#foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12582,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate2((C_word*)lf[436]+1 /* (set! ##compiler#final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12613,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate2((C_word*)lf[438]+1 /* (set! ##compiler#estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12658,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate2((C_word*)lf[443]+1 /* (set! ##compiler#estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13090,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate2((C_word*)lf[446]+1 /* (set! ##compiler#finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13523,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate2((C_word*)lf[460]+1 /* (set! ##compiler#foreign-type->scrutiny-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13791,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate2((C_word*)lf[480]+1 /* (set! ##compiler#scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14357,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate2((C_word*)lf[481]+1 /* (set! ##compiler#scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14512,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate2((C_word*)lf[483]+1 /* (set! ##compiler#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14742,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate2((C_word*)lf[486]+1 /* (set! ##compiler#chop-extension ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14769,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate2((C_word*)lf[487]+1 /* (set! ##compiler#make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14811,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate2((C_word*)lf[489]+1 /* (set! ##compiler#block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14817,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate2((C_word*)lf[490]+1 /* (set! ##compiler#block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14823,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate2((C_word*)lf[492]+1 /* (set! ##compiler#make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14832,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate2((C_word*)lf[495]+1 /* (set! ##compiler#set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14881,tmp=(C_word)a,a+=2,tmp));
t43=C_set_block_item(lf[497] /* real-name-max-depth */,0,C_fix(20));
t44=C_mutate2((C_word*)lf[46]+1 /* (set! ##compiler#real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14888,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate2((C_word*)lf[503]+1 /* (set! ##compiler#real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15008,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate2((C_word*)lf[504]+1 /* (set! ##compiler#display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15020,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate2((C_word*)lf[505]+1 /* (set! ##compiler#source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15044,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate2((C_word*)lf[511]+1 /* (set! ##compiler#source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15078,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate2((C_word*)lf[512]+1 /* (set! ##compiler#call-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15096,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate2((C_word*)lf[515]+1 /* (set! ##compiler#constant-form-eval ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15133,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate2((C_word*)lf[523]+1 /* (set! ##compiler#dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15335,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate2((C_word*)lf[525]+1 /* (set! ##compiler#read-info-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15492,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate2((C_word*)lf[529]+1 /* (set! ##compiler#read/source-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15535,tmp=(C_word)a,a+=2,tmp));
t54=*((C_word*)lf[531]+1);
t55=C_mutate2((C_word*)lf[531]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15541,a[2]=t54,tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[534]+1 /* (set! ##compiler#scan-sharp-greater-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15566,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate2((C_word*)lf[103]+1 /* (set! ##compiler#big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15637,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate2((C_word*)lf[329]+1 /* (set! ##compiler#hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15661,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate2((C_word*)lf[539]+1 /* (set! ##compiler#export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15681,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate2((C_word*)lf[313]+1 /* (set! ##compiler#variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15701,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate2((C_word*)lf[542]+1 /* (set! ##compiler#mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15726,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate2((C_word*)lf[543]+1 /* (set! ##compiler#variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15741,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate2((C_word*)lf[544]+1 /* (set! ##compiler#intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15747,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate2((C_word*)lf[545]+1 /* (set! foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15758,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate2((C_word*)lf[546]+1 /* (set! ##compiler#load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15769,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate2((C_word*)lf[554]+1 /* (set! ##compiler#print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15867,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate2((C_word*)lf[557]+1 /* (set! ##compiler#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15892,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate2((C_word*)lf[559]+1 /* (set! ##compiler#print-debug-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15904,tmp=(C_word)a,a+=2,tmp));
t69=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t69+1)))(2,t69,C_SCHEME_UNDEFINED);}

/* ##compiler#simple-lambda-node? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11019(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11019,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=C_i_caddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_u_i_car(t5):C_SCHEME_FALSE);
t8=t7;
if(C_truep(t8)){
t9=C_u_i_cdr(t4);
if(C_truep(C_u_i_car(t9))){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11047,a[2]=t8,a[3]=t11,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_11047(3,t13,t1,t2);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}

/* k14602 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:1359: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_14515(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k10558 in k10555 in k10600 in k10521 in k10633 in k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10560,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_u_i_cdr(((C_word*)t0)[6]);
/* support.scm:796: node->sexpr */
t6=*((C_word*)lf[292]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14934,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14936,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_14936(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),t1);}

/* loop in k14932 in k15001 in k14905 in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14936(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14936,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_greaterp(t3,*((C_word*)lf[497]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14950,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,lf[500],t2);
/* support.scm:1441: reverse */
t7=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14960,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1443: resolve */
f_14891(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14999,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1449: reverse */
t6=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}}

/* k4922 in test-mode in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_pairp(t1));}

/* ##compiler#node->sexpr in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10222(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10222,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10228,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10228(3,t6,t1,t2);}

/* walk in node->sexpr in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10228(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10228,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)((C_word*)t0)[2])[1];
t14=t2;
t15=C_slot(t14,C_fix(3));
t16=C_i_check_list_2(t15,lf[162]);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10269,a[2]=t8,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10271,a[2]=t12,a[3]=t19,a[4]=t10,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_10271(t21,t17,t15);}

/* ##compiler#foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13791,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13795,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1265: final-foreign-type */
t5=*((C_word*)lf[436]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* ##compiler#qnode in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7381(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7381,3,t0,t1,t2);}
t3=C_a_i_list1(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[98],t3,C_SCHEME_END_OF_LIST));}

/* k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13795(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13795,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_eqp(t3,lf[440]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[196]);}
else{
t5=C_eqp(t3,lf[350]);
t6=(C_truep(t5)?t5:C_eqp(t3,lf[351]));
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[350]);}
else{
t7=C_eqp(t3,lf[354]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13819,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_13819(t9,t7);}
else{
t9=C_eqp(t3,lf[426]);
if(C_truep(t9)){
t10=t8;
f_13819(t10,t9);}
else{
t10=C_eqp(t3,lf[427]);
if(C_truep(t10)){
t11=t8;
f_13819(t11,t10);}
else{
t11=C_eqp(t3,lf[428]);
if(C_truep(t11)){
t12=t8;
f_13819(t12,t11);}
else{
t12=C_eqp(t3,lf[429]);
if(C_truep(t12)){
t13=t8;
f_13819(t13,t12);}
else{
t13=C_eqp(t3,lf[430]);
if(C_truep(t13)){
t14=t8;
f_13819(t14,t13);}
else{
t14=C_eqp(t3,lf[431]);
t15=t8;
f_13819(t15,(C_truep(t14)?t14:C_eqp(t3,lf[432])));}}}}}}}}}

/* k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15407(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_15407,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15413,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(t3,C_fix(4)))){
t5=*((C_word*)lf[13]+1);
t6=*((C_word*)lf[13]+1);
t7=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15425,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1516: ##sys#write-char-0 */
t9=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_make_character(91),*((C_word*)lf[13]+1));}
else{
/* write-char/port */
t5=*((C_word*)lf[524]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],C_make_character(62),*((C_word*)lf[13]+1));}}

/* walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9673(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9673,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[98]);
if(C_truep(t13)){
t14=t1;
t15=t14;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_record4(&a,4,lf[212],t12,t9,C_SCHEME_END_OF_LIST));}
else{
t14=C_eqp(t12,lf[222]);
if(C_truep(t14)){
t15=C_i_car(t9);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9724,a[2]=t1,a[3]=t3,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9734,a[2]=((C_word*)t0)[2],a[3]=t17,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
/* support.scm:719: get */
t19=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,((C_word*)t0)[3],t16,lf[191]);}
else{
t15=C_eqp(t12,lf[246]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9771,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t17=C_i_car(t9);
t18=t3;
/* support.scm:709: alist-ref */
t19=*((C_word*)lf[287]+1);
((C_proc6)(void*)(*((C_word*)t19+1)))(6,t19,t16,t17,t18,*((C_word*)lf[27]+1),t17);}
else{
t16=C_eqp(t12,lf[110]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=t17;
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9787,a[2]=t18,a[3]=t3,a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t20=C_i_car(t6);
/* support.scm:728: walk */
t34=t19;
t35=t20;
t36=t3;
t1=t34;
t2=t35;
t3=t36;
goto loop;}
else{
t17=C_eqp(t12,lf[134]);
if(C_truep(t17)){
t18=C_i_caddr(t9);
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9839,a[2]=((C_word*)t0)[3],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:736: decompose-lambda-list */
t20=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t1,t18,t19);}
else{
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10042,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t6,a[5]=t1,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
/* support.scm:751: tree-copy */
t19=*((C_word*)lf[290]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,t9);}}}}}}

/* k6423 in put! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6425,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]));}
else{
if(C_truep(((C_word*)t0)[4])){
t3=C_slot(t1,C_fix(1));
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]),t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t1,C_fix(1),t4));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:391: ##sys#hash-table-set! */
t4=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[6],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k5700 in a5693 in sort-symbols in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5702,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5706,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:245: symbol->string */
t4=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k5704 in k5700 in a5693 in sort-symbols in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:245: string<? */
t2=*((C_word*)lf[95]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##compiler#constant? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5708,3,t0,t1,t2);}
t3=C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_booleanp(t2);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_eofp(t2);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5742,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:256: blob? */
t9=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}}}}}}

/* ##compiler#put! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6421,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6425,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:386: ##sys#hash-table-ref */
t7=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k9607 in k9527 in k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9609(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9609,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* support.scm:697: qnode */
t5=*((C_word*)lf[223]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_END_OF_LIST);}
else{
t5=C_i_length(((C_word*)t0)[4]);
t6=C_a_i_times(&a,2,C_fix(3),t5);
t7=C_a_i_list2(&a,2,lf[285],t6);
t8=((C_word*)t0)[4];
t9=C_a_i_record4(&a,4,lf[212],lf[251],t7,t8);
t10=C_a_i_list2(&a,2,t9,((C_word*)t0)[2]);
t11=((C_word*)t0)[3];
f_9555(t11,C_a_i_record4(&a,4,lf[212],lf[110],t3,t10));}}

/* k15411 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[524]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[13]+1));}

/* test-mode in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4907(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4907,NULL,3,t1,t2,t3);}
if(C_truep(C_i_symbolp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(t2,t3));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4924,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:93: lset-intersection */
t5=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[27]+1),t2,t3);}}

/* k10555 in k10600 in k10521 in k10633 in k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(t1,lf[308]);
if(C_truep(t3)){
t4=t2;
f_10560(t4,C_SCHEME_TRUE);}
else{
t4=C_eqp(t1,lf[309]);
if(C_truep(t4)){
t5=t2;
f_10560(t5,C_SCHEME_FALSE);}
else{
t5=C_i_cadddr(((C_word*)t0)[7]);
t6=t2;
f_10560(t6,C_i_lessp(t5,*((C_word*)lf[310]+1)));}}}

/* k14611 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14613,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14624,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1362: append */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k4952 in k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:101: with-output-to-string */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7396(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7396,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7399,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8583,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:615: walk */
t9=((C_word*)t6)[1];
f_7399(3,t9,t8,t2);}

/* k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9665,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
/* support.scm:752: walk */
t5=((C_word*)t3)[1];
f_9673(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7399(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(21);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr3,(void*)f_7399,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* support.scm:523: varnode */
t3=*((C_word*)lf[221]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=t2;
if(C_truep(C_i_structurep(t3,lf[212]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
if(C_truep(C_i_not_pair_p(t2))){
/* support.scm:525: bomb */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[225],t2);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_eqp(t6,lf[226]);
t8=(C_truep(t7)?t7:C_eqp(t6,lf[227]));
if(C_truep(t8)){
t9=t2;
t10=C_u_i_car(t9);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)((C_word*)t0)[2])[1];
t16=t2;
t17=C_u_i_cdr(t16);
t18=C_i_check_list_2(t17,lf[162]);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7463,a[2]=t1,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7465,a[2]=t14,a[3]=t21,a[4]=t12,a[5]=t15,tmp=(C_word)a,a+=6,tmp));
t23=((C_word*)t21)[1];
f_7465(t23,t19,t17);}
else{
t9=C_eqp(t6,lf[98]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7517,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_numberp(t11))){
t13=C_eqp(lf[231],*((C_word*)lf[232]+1));
if(C_truep(t13)){
t14=C_i_integerp(t11);
t15=t12;
f_7517(t15,C_i_not(t14));}
else{
t14=t12;
f_7517(t14,C_SCHEME_FALSE);}}
else{
t13=t12;
f_7517(t13,C_SCHEME_FALSE);}}
else{
t10=C_eqp(t6,lf[110]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=C_i_caddr(t2);
t13=t12;
if(C_truep(C_i_nullp(t11))){
/* support.scm:543: walk */
t139=t1;
t140=t13;
t1=t139;
t2=t140;
c=3;
goto loop;}
else{
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7587,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t13,a[6]=t17,a[7]=t15,tmp=(C_word)a,a+=8,tmp);
/* support.scm:549: unzip1 */
t19=*((C_word*)lf[235]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,t11);}}
else{
t11=C_eqp(t6,lf[236]);
t12=(C_truep(t11)?t11:C_eqp(t6,lf[134]));
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_a_i_list1(&a,1,t13);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7720,a[2]=t1,a[3]=t15,tmp=(C_word)a,a+=4,tmp);
t17=C_i_caddr(t2);
/* support.scm:553: walk */
t139=t16;
t140=t17;
t1=t139;
t2=t140;
c=3;
goto loop;}
else{
t13=C_eqp(t6,lf[237]);
if(C_truep(t13)){
t14=C_i_cadr(t2);
t15=C_i_caddr(t2);
t16=C_a_i_list2(&a,2,t14,t15);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7754,a[2]=t1,a[3]=t17,tmp=(C_word)a,a+=4,tmp);
t19=C_i_cadddr(t2);
/* support.scm:557: walk */
t139=t18;
t140=t19;
t1=t139;
t2=t140;
c=3;
goto loop;}
else{
t14=C_eqp(t6,lf[238]);
if(C_truep(t14)){
t15=C_i_cdddr(t2);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7908,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t16,tmp=(C_word)a,a+=6,tmp);
t18=t2;
t19=C_u_i_cdr(t18);
t20=C_u_i_cdr(t19);
t21=C_u_i_car(t20);
/* support.scm:560: walk */
t139=t17;
t140=t21;
t1=t139;
t2=t140;
c=3;
goto loop;}
else{
t15=C_eqp(t6,lf[242]);
if(C_truep(t15)){
t16=C_i_cadr(t2);
t17=t2;
t18=C_u_i_car(t17);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7935,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t18,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t16))){
t20=C_u_i_car(t16);
t21=C_eqp(lf[98],t20);
if(C_truep(t21)){
t22=C_i_cadr(t16);
t23=t19;
f_7935(t23,C_a_i_list1(&a,1,t22));}
else{
t22=t19;
f_7935(t22,C_a_i_list1(&a,1,t16));}}
else{
t20=t19;
f_7935(t20,C_a_i_list1(&a,1,t16));}}
else{
t16=C_eqp(t6,lf[243]);
t17=(C_truep(t16)?t16:C_eqp(t6,lf[244]));
if(C_truep(t17)){
t18=t2;
t19=C_u_i_car(t18);
t20=C_i_cadr(t2);
t21=C_a_i_list1(&a,1,t20);
t22=t21;
t23=C_SCHEME_END_OF_LIST;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_FALSE;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=((C_word*)((C_word*)t0)[2])[1];
t28=t2;
t29=C_u_i_cdr(t28);
t30=C_u_i_cdr(t29);
t31=C_i_check_list_2(t30,lf[162]);
t32=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8029,a[2]=t1,a[3]=t19,a[4]=t22,tmp=(C_word)a,a+=5,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8031,a[2]=t26,a[3]=t34,a[4]=t24,a[5]=t27,tmp=(C_word)a,a+=6,tmp));
t36=((C_word*)t34)[1];
f_8031(t36,t32,t30);}
else{
t18=C_eqp(t6,lf[245]);
if(C_truep(t18)){
t19=C_i_cadr(t2);
t20=C_a_i_list2(&a,2,t19,C_SCHEME_TRUE);
t21=t1;
t22=t21;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_a_i_record4(&a,4,lf[212],lf[245],t20,C_SCHEME_END_OF_LIST));}
else{
t19=C_eqp(t6,lf[246]);
t20=(C_truep(t19)?t19:C_eqp(t6,lf[247]));
if(C_truep(t20)){
t21=C_i_cadr(t2);
t22=C_a_i_list1(&a,1,t21);
t23=t22;
t24=C_SCHEME_END_OF_LIST;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_FALSE;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=((C_word*)((C_word*)t0)[2])[1];
t29=t2;
t30=C_u_i_cdr(t29);
t31=C_u_i_cdr(t30);
t32=C_i_check_list_2(t31,lf[162]);
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8120,a[2]=t1,a[3]=t23,tmp=(C_word)a,a+=4,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8122,a[2]=t27,a[3]=t35,a[4]=t25,a[5]=t28,tmp=(C_word)a,a+=6,tmp));
t37=((C_word*)t35)[1];
f_8122(t37,t33,t31);}
else{
t21=C_eqp(t6,lf[248]);
if(C_truep(t21)){
t22=C_i_cadr(t2);
t23=C_i_cadr(t22);
t24=t23;
t25=C_i_caddr(t2);
t26=C_i_cadr(t25);
t27=t26;
t28=C_i_cadddr(t2);
t29=C_i_cadr(t28);
t30=t29;
t31=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8208,a[2]=t24,a[3]=t27,a[4]=t30,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* support.scm:593: fifth */
t32=*((C_word*)lf[250]+1);
((C_proc3)(void*)(*((C_word*)t32+1)))(3,t32,t31,t2);}
else{
t22=C_eqp(t6,lf[251]);
t23=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8229,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t22)){
t24=t23;
f_8229(t24,t22);}
else{
t24=C_eqp(t6,lf[257]);
if(C_truep(t24)){
t25=t23;
f_8229(t25,t24);}
else{
t25=C_eqp(t6,lf[258]);
if(C_truep(t25)){
t26=t23;
f_8229(t26,t25);}
else{
t26=C_eqp(t6,lf[259]);
t27=t23;
f_8229(t27,(C_truep(t26)?t26:C_eqp(t6,lf[260])));}}}}}}}}}}}}}}}
else{
t5=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t6=t5;
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)((C_word*)t0)[2])[1];
t12=t2;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8541,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8543,a[2]=t10,a[3]=t15,a[4]=t8,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_8543(t17,t13,t12);}}}}}

/* ##compiler#quit in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4963(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4963r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4963r(t0,t1,t2,t3);}}

static void C_ccall f_4963r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=*((C_word*)lf[29]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4967,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4977,a[2]=t5,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:105: string-append */
t7=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[31],t2);}

/* k4965 in quit in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:106: newline */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4959 in k4952 in k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:101: collect */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4850(t2,((C_word*)t0)[3],t1);}

/* ##compiler#foreign-type-convert-argument in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12582,4,t0,t1,t2,t3);}
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12595,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1151: ##sys#hash-table-ref */
t5=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[397]+1),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* for-each-loop3428 in k14457 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14467,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14477,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1335: g3429 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#collect! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6467,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6471,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:394: ##sys#hash-table-ref */
t7=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k14457 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14459,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_list_2(((C_word*)t0)[4],lf[34]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14467,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_14467(t7,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* a6414 in k6405 in get-all in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6415(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6415,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_assq(t2,((C_word*)t0)[2]));}

/* for-each-loop3404 in k14393 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14403(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14403,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14413,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1333: g3405 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#get-all in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_6403r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6403r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6403r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6407,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:380: ##sys#hash-table-ref */
t6=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* k6405 in get-all in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6407,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6415,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:382: filter-map */
t4=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t3,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}

/* doloop3769 in k15426 in k15423 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15436(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15436,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[13]+1);
t4=*((C_word*)lf[13]+1);
t5=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15449,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1517: ##sys#write-char-0 */
t7=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_make_character(32),*((C_word*)lf[13]+1));}}

/* k15429 in k15426 in k15423 in k15405 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[524]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(93),*((C_word*)lf[13]+1));}

/* k14425 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14427,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_14395(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_14395(t2,C_SCHEME_UNDEFINED);}}

/* k14411 in for-each-loop3404 in k14393 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14403(t3,((C_word*)t0)[4],t2);}

/* k13110 in a13101 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13112,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1209: words->bytes */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[424]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_13124(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[425]);
if(C_truep(t4)){
t5=t3;
f_13124(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[371]);
t6=t3;
f_13124(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[3],lf[375])));}}}}

/* k13122 in k13110 in a13101 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13124,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1211: words->bytes */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1213: ##sys#hash-table-ref */
t3=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[397]+1),((C_word*)t0)[4]);}
else{
t3=t2;
f_13130(2,t3,C_SCHEME_FALSE);}}}

/* k8058 in map-loop1232 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8060(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8060,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8031(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8031(t6,((C_word*)t0)[5],t5);}}

/* k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15372(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_15372,2,t0,t1);}
t2=t1;
t3=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t4=t3;
t5=*((C_word*)lf[13]+1);
t6=*((C_word*)lf[13]+1);
t7=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_15381,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t5,a[9]=((C_word*)t0)[8],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* support.scm:1505: ##sys#write-char-0 */
t9=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_make_character(10),*((C_word*)lf[13]+1));}

/* k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_15384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1505: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[10],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_15390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1505: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* loop in follow-without-loop in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5663(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5663,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_member(t2,t3))){
/* support.scm:241: abort */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5678,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:242: proc */
t5=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}}

/* k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_15387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1505: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(60),((C_word*)t0)[8]);}

/* a13101 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13102,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,lf[350]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13112,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_13112(t7,t5);}
else{
t7=C_eqp(t4,lf[354]);
if(C_truep(t7)){
t8=t6;
f_13112(t8,t7);}
else{
t8=C_eqp(t4,lf[427]);
if(C_truep(t8)){
t9=t6;
f_13112(t9,t8);}
else{
t9=C_eqp(t4,lf[439]);
if(C_truep(t9)){
t10=t6;
f_13112(t10,t9);}
else{
t10=C_eqp(t4,lf[428]);
if(C_truep(t10)){
t11=t6;
f_13112(t11,t10);}
else{
t11=C_eqp(t4,lf[351]);
if(C_truep(t11)){
t12=t6;
f_13112(t12,t11);}
else{
t12=C_eqp(t4,lf[426]);
if(C_truep(t12)){
t13=t6;
f_13112(t13,t12);}
else{
t13=C_eqp(t4,lf[407]);
if(C_truep(t13)){
t14=t6;
f_13112(t14,t13);}
else{
t14=C_eqp(t4,lf[406]);
if(C_truep(t14)){
t15=t6;
f_13112(t15,t14);}
else{
t15=C_eqp(t4,lf[429]);
if(C_truep(t15)){
t16=t6;
f_13112(t16,t15);}
else{
t16=C_eqp(t4,lf[430]);
if(C_truep(t16)){
t17=t6;
f_13112(t17,t16);}
else{
t17=C_eqp(t4,lf[377]);
if(C_truep(t17)){
t18=t6;
f_13112(t18,t17);}
else{
t18=C_eqp(t4,lf[379]);
if(C_truep(t18)){
t19=t6;
f_13112(t19,t18);}
else{
t19=C_eqp(t4,lf[373]);
if(C_truep(t19)){
t20=t6;
f_13112(t20,t19);}
else{
t20=C_eqp(t4,lf[369]);
if(C_truep(t20)){
t21=t6;
f_13112(t21,t20);}
else{
t21=C_eqp(t4,lf[356]);
if(C_truep(t21)){
t22=t6;
f_13112(t22,t21);}
else{
t22=C_eqp(t4,lf[380]);
if(C_truep(t22)){
t23=t6;
f_13112(t23,t22);}
else{
t23=C_eqp(t4,lf[384]);
if(C_truep(t23)){
t24=t6;
f_13112(t24,t23);}
else{
t24=C_eqp(t4,lf[359]);
if(C_truep(t24)){
t25=t6;
f_13112(t25,t24);}
else{
t25=C_eqp(t4,lf[361]);
if(C_truep(t25)){
t26=t6;
f_13112(t26,t25);}
else{
t26=C_eqp(t4,lf[431]);
if(C_truep(t26)){
t27=t6;
f_13112(t27,t26);}
else{
t27=C_eqp(t4,lf[432]);
if(C_truep(t27)){
t28=t6;
f_13112(t28,t27);}
else{
t28=C_eqp(t4,lf[409]);
if(C_truep(t28)){
t29=t6;
f_13112(t29,t28);}
else{
t29=C_eqp(t4,lf[405]);
if(C_truep(t29)){
t30=t6;
f_13112(t30,t29);}
else{
t30=C_eqp(t4,lf[401]);
if(C_truep(t30)){
t31=t6;
f_13112(t31,t30);}
else{
t31=C_eqp(t4,lf[402]);
if(C_truep(t31)){
t32=t6;
f_13112(t32,t31);}
else{
t32=C_eqp(t4,lf[399]);
if(C_truep(t32)){
t33=t6;
f_13112(t33,t32);}
else{
t33=C_eqp(t4,lf[408]);
if(C_truep(t33)){
t34=t6;
f_13112(t34,t33);}
else{
t34=C_eqp(t4,lf[383]);
if(C_truep(t34)){
t35=t6;
f_13112(t35,t34);}
else{
t35=C_eqp(t4,lf[400]);
if(C_truep(t35)){
t36=t6;
f_13112(t36,t35);}
else{
t36=C_eqp(t4,lf[398]);
if(C_truep(t36)){
t37=t6;
f_13112(t37,t36);}
else{
t37=C_eqp(t4,lf[403]);
t38=t6;
f_13112(t38,(C_truep(t37)?t37:C_eqp(t4,lf[404])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_15393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1505: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[8]);}

/* g3739 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15397(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15397,NULL,3,t0,t1,t2);}
/* support.scm:1513: g3754 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_15344(t3,t1,((C_word*)t0)[3],t2);}

/* k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1505: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[8]);}

/* k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15396(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_15396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[34]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15407,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15469,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_15469(t8,t4,((C_word*)t0)[4]);}

/* k8979 in k8975 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8981,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[269],t2));}

/* loop in k8975 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8989(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8989,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9013,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t3);
/* support.scm:655: walk */
t6=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t6,t4,t5);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9040,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(t3);
/* support.scm:656: walk */
t8=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t8,t6,t7);}}

/* k13165 in k13128 in k13122 in k13110 in a13101 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13167(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* support.scm:1220: words->bytes */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* support.scm:1199: quit */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[444],t3);}}

/* k8975 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8977(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8977,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8981,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[4]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8989,a[2]=((C_word*)t0)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_8989(t9,t3,t4,t5);}

/* k15607 in k15577 in loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15609,2,t0,t1);}
t2=t1;
t3=C_eqp(C_make_character(35),t2);
if(C_truep(t3)){
/* support.scm:1564: get-output-string */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15621,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=*((C_word*)lf[524]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(60),((C_word*)t0)[3]);}}

/* k4780 in for-each-loop47 in k4750 in k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4772(t3,((C_word*)t0)[4],t2);}

/* map-loop1320 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8254,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:597: g1326 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8250 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8252,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* dump in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4795(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4795,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[8]+1);
t4=*((C_word*)lf[8]+1);
t5=C_i_check_port_2(*((C_word*)lf[8]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:57: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[2],C_SCHEME_FALSE,*((C_word*)lf[8]+1));}

/* k8281 in map-loop1320 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8283(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8283,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8254(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8254(t6,((C_word*)t0)[5],t5);}}

/* k11154 in k11151 in a11145 in dump-undefined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:907: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k11151 in a11145 in dump-undefined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11153(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11153,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:906: write */
t3=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#hide-variable in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15661(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15661,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,lf[537]);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,lf[538],C_SCHEME_TRUE);}
else{
t4=C_i_car(t3);
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,lf[538],t4);}}

/* k4765 in for-each-loop47 in k4750 in k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:65: ##sys#print */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k4758 in for-each-loop47 in k4750 in k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:65: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(32),((C_word*)t0)[3]);}

/* k10521 in k10633 in k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10523(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10523,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_assq(lf[200],((C_word*)t0)[2]))){
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_slot(t2,C_fix(2));
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10602,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* support.scm:789: get */
t6=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[8],((C_word*)t0)[5],lf[207]);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a11145 in dump-undefined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11146,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11153,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11179,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:903: keyword? */
t6=*((C_word*)lf[325]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* ##compiler#dump-undefined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11140,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11146,tmp=(C_word)a,a+=2,tmp);
/* support.scm:901: ##sys#hash-table-for-each */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* k5881 in k5866 in k5860 in basic-literal? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:283: basic-literal? */
t4=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* for-each-loop47 in k4750 in k4738 in a4735 in text in debugging in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4772(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4772,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4782,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=*((C_word*)lf[13]+1);
t7=*((C_word*)lf[13]+1);
t8=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4760,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4767,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm:65: force */
t11=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11177 in a11145 in dump-undefined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11153(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_assq(lf[190],((C_word*)t0)[3]))){
t2=C_i_assq(lf[188],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_11153(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_11153(t2,C_SCHEME_FALSE);}}}

/* k4931 in k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:96: display */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4934 in k4931 in k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:97: flush-output */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4937 in k4934 in k4931 in k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:98: test-mode */
f_4907(t2,((C_word*)t0)[6],*((C_word*)lf[9]+1));}

/* k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11801(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11801,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[352]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[370],((C_word*)t0)[2]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[371]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(*((C_word*)lf[352]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[372],((C_word*)t0)[2])));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[373]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_11828(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[405]);
t6=t4;
f_11828(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[406])));}}}}

/* k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4930,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:95: with-output-to-string */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:100: test-mode */
f_4907(t2,((C_word*)t0)[5],*((C_word*)lf[9]+1));}}

/* k4685 in k4682 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4682 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4943 in k4937 in k4934 in k4931 in k4928 in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:99: collect */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4850(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* map-loop1801 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9620(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9620,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9649,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:687: g1807 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#fold-inner in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5601,4,t0,t1,t2,t3);}
t4=C_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5615,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:231: reverse */
t6=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k15619 in k15607 in k15577 in loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[524]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k15622 in k15619 in k15607 in k15577 in loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1568: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15575(t2,((C_word*)t0)[3]);}

/* k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11828,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[352]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[374],((C_word*)t0)[2]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[375]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(*((C_word*)lf[352]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[376],((C_word*)t0)[2])));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[377]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_11855(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[403]);
t6=t4;
f_11855(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[404])));}}}}

/* k10888 in k10882 in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* fold in k5613 in fold-inner in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5617(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5617,NULL,3,t0,t1,t2);}
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_list2(&a,2,t6,t8);
C_apply(4,0,t1,((C_word*)t0)[2],t9);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5643,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* support.scm:236: fold */
t14=t4;
t15=t6;
t1=t14;
t2=t15;
goto loop;}}

/* k5613 in fold-inner in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5615,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5617,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5617(t5,((C_word*)t0)[3],t1);}

/* k5033 in k5030 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:118: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[38],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5036 in k5033 in k5030 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:118: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5030 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:118: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* ##compiler#big-fixnum? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15637,3,t0,t1,t2);}
if(C_truep(C_fixnump(t2))){
if(C_truep(C_fudge(C_fix(3)))){
t3=C_fixnum_greaterp(t2,C_fix(1073741823));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_fixnum_lessp(t2,C_fix(-1073741824))));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k15630 in k15577 in loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1571: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15575(t2,((C_word*)t0)[3]);}

/* node-class in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7303(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7303,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[212],lf[214]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* for-each-loop169 in k4984 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5005(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5005,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5015,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:120: g170 */
t5=((C_word*)t0)[3];
f_4987(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4998 in k4995 in k4984 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:122: exit */
t2=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(70));}

/* k6370 in for-each-loop535 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6362(t3,((C_word*)t0)[4],t2);}

/* k13128 in k13122 in k13110 in a13101 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13130(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13130,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1213: g3134 */
t3=t2;
f_13134(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[386]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_13167(t6,t4);}
else{
t6=C_eqp(t3,lf[394]);
if(C_truep(t6)){
t7=t5;
f_13167(t7,t6);}
else{
t7=C_eqp(t3,lf[395]);
if(C_truep(t7)){
t8=t5;
f_13167(t8,t7);}
else{
t8=C_eqp(t3,lf[377]);
if(C_truep(t8)){
t9=t5;
f_13167(t9,t8);}
else{
t9=C_eqp(t3,lf[379]);
if(C_truep(t9)){
t10=t5;
f_13167(t10,t9);}
else{
t10=C_eqp(t3,lf[396]);
if(C_truep(t10)){
t11=t5;
f_13167(t11,t10);}
else{
t11=C_eqp(t3,lf[359]);
t12=t5;
f_13167(t12,(C_truep(t11)?t11:C_eqp(t3,lf[361])));}}}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
/* support.scm:1199: quit */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[444],t3);}}}

/* ##compiler#export-variable in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15681(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15681,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,lf[540]);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,lf[538],C_SCHEME_TRUE);}
else{
t4=C_i_car(t3);
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,lf[538],t4);}}

/* g3134 in k13128 in k13122 in k13110 in a13101 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13134(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13134,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1215: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1215: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* ##compiler#get in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6385,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6389,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:374: ##sys#hash-table-ref */
t6=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* k6387 in get in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10882 in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10884,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(1));
t5=((C_word*)t0)[4];
t6=C_slot(t5,C_fix(2));
/* support.scm:861: debugging */
t7=*((C_word*)lf[11]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t2,lf[317],lf[318],t4,t6,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5641 in fold in k5613 in fold-inner in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5643,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,t1,t3);
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t4);}

/* node-parameters in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7321(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7321,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[212],lf[217]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(2)));}

/* k13817 in k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13819(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13819,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[231]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[356]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[424]));
if(C_truep(t3)){
t4=((C_word*)t0)[4];
t5=C_eqp(t4,lf[461]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?lf[425]:lf[356]));}
else{
t4=C_eqp(((C_word*)t0)[3],lf[359]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[3],lf[361]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[241]);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[358]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
t8=C_eqp(t7,lf[461]);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?lf[462]:lf[358]));}
else{
t7=C_eqp(((C_word*)t0)[3],lf[362]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[358]);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[363]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=C_eqp(t9,lf[461]);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?lf[463]:lf[363]));}
else{
t9=C_eqp(((C_word*)t0)[3],lf[365]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[363]);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[366]);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13894,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t10)){
t12=t11;
f_13894(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[417]);
if(C_truep(t12)){
t13=t11;
f_13894(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[418]);
if(C_truep(t13)){
t14=t11;
f_13894(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[3],lf[419]);
if(C_truep(t14)){
t15=t11;
f_13894(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[3],lf[420]);
if(C_truep(t15)){
t16=t11;
f_13894(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[3],lf[421]);
if(C_truep(t16)){
t17=t11;
f_13894(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[3],lf[422]);
t18=t11;
f_13894(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[3],lf[423])));}}}}}}}}}}}}}}

/* k7013 in k7010 in k7007 in k7001 in k6922 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdar(((C_word*)t0)[2]);
/* support.scm:481: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t2,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k7010 in k7007 in k7001 in k6922 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:481: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(61),((C_word*)t0)[4]);}

/* node-class-set! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7312,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[212],C_SCHEME_FALSE);
/* support.scm:504: ##sys#block-set! */
t5=*((C_word*)lf[216]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* for-each-loop535 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6362(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6362,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6372,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6212,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list(&a,1,lf[148]);
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,t6,lf[144],C_SCHEME_TRUE);}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t6,lf[144],t9);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7001 in k6922 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7003(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7003,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:481: ##sys#write-char-0 */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(9),*((C_word*)lf[13]+1));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[177]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[2]);
t4=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* support.scm:487: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6900(t7,((C_word*)t0)[7],t6);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[178]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[2]);
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t4);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* support.scm:487: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_6900(t8,((C_word*)t0)[7],t7);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* support.scm:486: bomb */
t6=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],lf[179],t5);}}}}

/* k7007 in k7001 in k6922 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caar(((C_word*)t0)[2]);
/* support.scm:481: ##sys#print */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k12705 in k12693 in k12681 in k12672 in a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12707(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12707,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1184: words->bytes */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(4));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12713,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1186: ##sys#hash-table-ref */
t3=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[397]+1),((C_word*)t0)[4]);}
else{
t3=t2;
f_12713(2,t3,C_SCHEME_FALSE);}}}

/* node-subexpressions-set! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7348(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7348,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[212],C_SCHEME_FALSE);
/* support.scm:504: ##sys#block-set! */
t5=*((C_word*)lf[216]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* ##compiler#follow-without-loop in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5657,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5663,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5663(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* k12711 in k12705 in k12693 in k12681 in k12672 in a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12713(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12713,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1186: g2977 */
t3=t2;
f_12717(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[386]);
if(C_truep(t4)){
if(C_truep(t4)){
/* support.scm:1192: words->bytes */
t5=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],C_fix(3));}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}}
else{
t5=C_eqp(t3,lf[394]);
if(C_truep(t5)){
if(C_truep(t5)){
/* support.scm:1192: words->bytes */
t6=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[3],C_fix(3));}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(0));}}
else{
t6=C_eqp(t3,lf[395]);
if(C_truep(t6)){
if(C_truep(t6)){
/* support.scm:1192: words->bytes */
t7=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[3],C_fix(3));}
else{
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fix(0));}}
else{
t7=C_eqp(t3,lf[377]);
if(C_truep(t7)){
if(C_truep(t7)){
/* support.scm:1192: words->bytes */
t8=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,((C_word*)t0)[3],C_fix(3));}
else{
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}}
else{
t8=C_eqp(t3,lf[379]);
if(C_truep(t8)){
if(C_truep(t8)){
/* support.scm:1192: words->bytes */
t9=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,((C_word*)t0)[3],C_fix(3));}
else{
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_fix(0));}}
else{
t9=C_eqp(t3,lf[396]);
if(C_truep(t9)){
if(C_truep(t9)){
/* support.scm:1192: words->bytes */
t10=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,((C_word*)t0)[3],C_fix(3));}
else{
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_fix(0));}}
else{
t10=C_eqp(t3,lf[387]);
if(C_truep(t10)){
if(C_truep(t10)){
/* support.scm:1192: words->bytes */
t11=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,((C_word*)t0)[3],C_fix(3));}
else{
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_fix(0));}}
else{
t11=C_eqp(t3,lf[388]);
if(C_truep(t11)){
if(C_truep(t11)){
/* support.scm:1192: words->bytes */
t12=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,((C_word*)t0)[3],C_fix(3));}
else{
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_fix(0));}}
else{
t12=C_eqp(t3,lf[391]);
if(C_truep(t12)){
/* support.scm:1192: words->bytes */
t13=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,((C_word*)t0)[3],C_fix(3));}
else{
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_fix(0));}}}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}}

/* g2977 in k12711 in k12705 in k12693 in k12681 in k12672 in a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12717,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1188: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1188: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* node-subexpressions in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7339(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7339,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[212],lf[219]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(3)));}

/* node-parameters-set! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7330,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[212],C_SCHEME_FALSE);
/* support.scm:504: ##sys#block-set! */
t5=*((C_word*)lf[216]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* k5013 in for-each-loop169 in k4984 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5005(t3,((C_word*)t0)[4],t2);}

/* k11195 in k11192 in a11186 in dump-defined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:917: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k11192 in a11186 in dump-defined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11194(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11194,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:916: write */
t3=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* map-loop1232 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8031,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8060,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:582: g1238 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop746 in k6651 in k6648 in a6639 in display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6668(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6668,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6664 in k6651 in k6648 in a6639 in display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:430: ##sys#print */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* a11186 in dump-defined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11187(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11187,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11194,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11216,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:913: keyword? */
t6=*((C_word*)lf[325]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* ##compiler#dump-defined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11181,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11187,tmp=(C_word)a,a+=2,tmp);
/* support.scm:911: ##sys#hash-table-for-each */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* k8027 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8029,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k6654 in k6651 in k6648 in a6639 in display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:430: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k6651 in k6648 in a6639 in display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6653(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[162]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6666,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6668,a[2]=t6,a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6668(t13,t9,t7);}

/* k6648 in a6639 in display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:430: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k5842 in immediate? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5804(t2,C_i_not(t1));}

/* ##compiler#basic-literal? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5846,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5862,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:279: constant? */
t6=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}}

/* k13669 in k13641 in k13525 in finish-foreign-result in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13671(C_word c,C_word t0,C_word t1){
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
C_word ab[68],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13671,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[454],t1);
t5=C_a_i_list(&a,2,lf[455],t4);
t6=C_i_caddr(((C_word*)t0)[3]);
t7=C_a_i_list(&a,2,lf[98],lf[389]);
t8=C_a_i_list(&a,4,lf[456],t6,t7,t1);
t9=C_a_i_list(&a,4,lf[457],t1,t5,t8);
t10=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,3,lf[110],t3,t9));}

/* f17235 in print-version in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f17235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1627: print */
t2=*((C_word*)lf[295]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* ##compiler#sexpr->node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10306(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10306,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10312,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10312(3,t6,t1,t2);}

/* k10298 in map-loop2109 in walk in node->sexpr in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10300(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10300,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10271(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10271(t6,((C_word*)t0)[5],t5);}}

/* walk in sexpr->node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10312(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10312,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=C_i_cadr(t2);
t6=t5;
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)((C_word*)t0)[2])[1];
t12=t2;
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[162]);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10338,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10340,a[2]=t10,a[3]=t18,a[4]=t8,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_10340(t20,t16,t14);}

/* k13641 in k13525 in finish-foreign-result in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13643(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13643,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* support.scm:1246: finish-foreign-result */
t3=*((C_word*)lf[446]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_eqp(t4,lf[387]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[388]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13671,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1250: gensym */
t8=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t4,lf[391]);
if(C_truep(t7)){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,2,lf[98],lf[389]);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,4,lf[456],t8,t9,((C_word*)t0)[4]));}
else{
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[4]);}}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}}}

/* a8352 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8353,2,t0,t1);}
/* support.scm:601: get-line-2 */
t2=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8359,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8446,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
/* tweaks.scm:57: ##sys#get */
t7=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,lf[256]);}

/* k10336 in walk in sexpr->node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10338,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8229(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8229,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)((C_word*)t0)[3])[1];
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
t13=C_u_i_cdr(t12);
t14=C_i_check_list_2(t13,lf[162]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8252,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8254,a[2]=t9,a[3]=t17,a[4]=t7,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_8254(t19,t15,t13);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[252]);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)((C_word*)t0)[3])[1];
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[162]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8313,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8315,a[2]=t8,a[3]=t15,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_8315(t17,t13,t11);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8359,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:601: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t3,t4);}}}

/* map-loop1397 in k8420 in k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8381(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8381,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8410,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:613: g1403 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop2148 in walk in sexpr->node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10340(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10340,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10369,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:774: g2154 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a13516 in estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13517,2,t0,t1);}
/* support.scm:1223: quit */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[445],((C_word*)t0)[2]);}

/* k6601 in k6598 in get-line-2 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6603,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:420: g733 */
t3=t2;
f_6607(t3,((C_word*)t0)[3],t1);}
else{
/* support.scm:425: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE);}}

/* g733 in k6601 in k6598 in get-line-2 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6607(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6607,NULL,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
/* support.scm:424: values */
C_values(4,0,t1,t3,t4);}

/* k6598 in get-line-2 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6600,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6603,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_i_cdr(t2);
t5=t3;
f_6603(t5,C_i_assq(((C_word*)t0)[4],t4));}
else{
t4=t3;
f_6603(t4,C_SCHEME_FALSE);}}

/* k8377 in k8420 in k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8379,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[253],((C_word*)t0)[3],t1));}

/* ##compiler#finish-foreign-result in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13523,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13527,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1229: ##sys#strip-syntax */
t5=*((C_word*)lf[459]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k13525 in finish-foreign-result in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13527(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13527,2,t0,t1);}
t2=t1;
t3=C_eqp(t2,lf[380]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[401]));
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[98],C_fix(0));
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[447],((C_word*)t0)[3],t5));}
else{
t5=C_eqp(t2,lf[383]);
if(C_truep(t5)){
t6=C_a_i_list(&a,2,lf[98],C_fix(0));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[448],((C_word*)t0)[3],t6));}
else{
t6=C_eqp(t2,lf[400]);
t7=(C_truep(t6)?t6:C_eqp(t2,lf[402]));
if(C_truep(t7)){
t8=C_a_i_list(&a,2,lf[98],C_fix(0));
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,3,lf[449],((C_word*)t0)[3],t8));}
else{
t8=C_eqp(t2,lf[398]);
t9=(C_truep(t8)?t8:C_eqp(t2,lf[399]));
if(C_truep(t9)){
t10=C_a_i_list(&a,2,lf[98],C_fix(0));
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,3,lf[450],((C_word*)t0)[3],t10));}
else{
t10=C_eqp(t2,lf[384]);
if(C_truep(t10)){
t11=C_a_i_list(&a,2,lf[98],C_fix(0));
t12=C_a_i_list(&a,3,lf[447],((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,2,lf[451],t12));}
else{
t11=C_eqp(t2,lf[403]);
if(C_truep(t11)){
t12=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,3,lf[452],((C_word*)t0)[3],t12));}
else{
t12=C_eqp(t2,lf[404]);
if(C_truep(t12)){
t13=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_list(&a,3,lf[453],((C_word*)t0)[3],t13));}
else{
if(C_truep(C_i_listp(t2))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13643,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=C_i_car(t2);
t15=C_eqp(t14,lf[392]);
if(C_truep(t15)){
t16=C_i_length(t2);
t17=C_eqp(C_fix(2),t16);
if(C_truep(t17)){
t18=C_i_cadr(t2);
t19=C_u_i_memq(t18,lf[458]);
t20=t13;
f_13643(t20,t19);}
else{
t18=t13;
f_13643(t18,C_SCHEME_FALSE);}}
else{
t16=t13;
f_13643(t16,C_SCHEME_FALSE);}}
else{
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,((C_word*)t0)[3]);}}}}}}}}}

/* k8697 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8699,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[264],t2));}

/* k8206 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8208,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_a_i_list4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8188,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8192,a[2]=((C_word*)t0)[6],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:594: sixth */
t7=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[7]);}

/* k11856 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11858,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[378],t1);
t5=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[226],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[110],t3,t6));}

/* k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11855(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11855,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1075: gensym */
t3=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[379]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[378],((C_word*)t0)[2]));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[380]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_11899(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[400]);
if(C_truep(t5)){
t6=t4;
f_11899(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[401]);
t7=t4;
f_11899(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[402])));}}}}}

/* ##compiler#collapsable-literal? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5770,3,t0,t1,t2);}
t3=C_booleanp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_eofp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_numberp(t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_i_symbolp(t2)));}}}}

/* ##compiler#immediate? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5800(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5800,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5804,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5844,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:269: big-fixnum? */
t5=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t3;
f_5804(t4,C_SCHEME_FALSE);}}

/* k5802 in immediate? in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_i_nullp(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_eofp(((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_charp(((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?t5:C_booleanp(((C_word*)t0)[3])));}}}}}

/* a6639 in display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6640,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=*((C_word*)lf[13]+1);
t5=*((C_word*)lf[13]+1);
t6=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6650,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:430: ##sys#print */
t8=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,t2,C_SCHEME_TRUE,*((C_word*)lf[13]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* ##compiler#display-line-number-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6640,tmp=(C_word)a,a+=2,tmp);
/* support.scm:428: ##sys#hash-table-for-each */
t3=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[159]+1));}

/* k8539 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8541,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[253],((C_word*)t0)[3],t1));}

/* map-loop1428 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8543(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8543,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8572,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:614: g1434 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8570 in map-loop1428 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8572(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8572,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8543(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8543(t6,((C_word*)t0)[5],t5);}}

/* k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11899,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1083: gensym */
t3=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[383]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11944,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_11944(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[398]);
t5=t3;
f_11944(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[399])));}}}

/* for-each-loop584 in k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6339(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6339,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6349,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6260,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list(&a,1,lf[147]);
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,t6,lf[144],C_SCHEME_TRUE);}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t6,lf[144],t9);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6347 in for-each-loop584 in k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6339(t3,((C_word*)t0)[4],t2);}

/* for-each-loop633 in k6287 in k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6316(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6316,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6326,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,lf[142]);
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[144],C_SCHEME_TRUE);}
else{
t6=C_i_car(t5);
/* tweaks.scm:54: ##sys#put! */
t7=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,lf[144],t6);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6324 in for-each-loop633 in k6287 in k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6316(t3,((C_word*)t0)[4],t2);}

/* k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15570,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15575,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_15575(t6,((C_word*)t0)[3]);}

/* k15577 in loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15579,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* support.scm:1557: quit */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[536]);}
else{
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15597,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1559: newline */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_char_equalp(t1,C_make_character(60)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* read-char/port */
t3=*((C_word*)lf[535]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15632,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[524]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}}}}

/* loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15575(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15575,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15579,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* read-char/port */
t3=*((C_word*)lf[535]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k6922 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6924(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6924,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:470: ##sys#write-char-0 */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(9),*((C_word*)lf[13]+1));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[170]);
if(C_truep(t2)){
t3=C_mutate2(((C_word *)((C_word*)t0)[5])+1,lf[170]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* support.scm:487: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_6900(t6,((C_word*)t0)[7],t5);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[173]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[170]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* support.scm:487: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6900(t7,((C_word*)t0)[7],t6);}
else{
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t5);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
/* support.scm:487: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_6900(t9,((C_word*)t0)[7],t8);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[174]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[170]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* support.scm:487: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_6900(t8,((C_word*)t0)[7],t7);}
else{
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:487: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_6900(t10,((C_word*)t0)[7],t9);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[175]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate2(((C_word *)((C_word*)t0)[9])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:487: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_6900(t10,((C_word*)t0)[7],t9);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[176]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_7003(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[180]);
if(C_truep(t8)){
t9=t7;
f_7003(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[181]);
if(C_truep(t9)){
t10=t7;
f_7003(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[182]);
if(C_truep(t10)){
t11=t7;
f_7003(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[183]);
if(C_truep(t11)){
t12=t7;
f_7003(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[184]);
if(C_truep(t12)){
t13=t7;
f_7003(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[185]);
if(C_truep(t13)){
t14=t7;
f_7003(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[186]);
t15=t7;
f_7003(t15,(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[187])));}}}}}}}}}}}}}

/* k15595 in k15577 in loop in k15568 in scan-sharp-greater-string in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1560: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15575(t2,((C_word*)t0)[3]);}

/* k6911 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:487: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6900(t4,((C_word*)t0)[4],t3);}

/* k11734 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11736,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11751,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[352]+1))){
t7=t6;
f_11751(t7,t2);}
else{
t7=C_a_i_list(&a,2,lf[98],((C_word*)t0)[4]);
t8=t6;
f_11751(t8,C_a_i_list(&a,3,lf[364],t7,t2));}}

/* k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11733(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11733,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1048: gensym */
t3=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[367]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11775,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_11775(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[410]);
if(C_truep(t4)){
t5=t3;
f_11775(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[411]);
if(C_truep(t5)){
t6=t3;
f_11775(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[412]);
if(C_truep(t6)){
t7=t3;
f_11775(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[413]);
if(C_truep(t7)){
t8=t3;
f_11775(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[414]);
if(C_truep(t8)){
t9=t3;
f_11775(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[415]);
t10=t3;
f_11775(t10,(C_truep(t9)?t9:C_eqp(((C_word*)t0)[5],lf[416])));}}}}}}}}

/* k10367 in map-loop2148 in walk in sexpr->node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10369(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10369,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10340(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10340(t6,((C_word*)t0)[5],t5);}}

/* loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6900(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6900,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6913,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[171]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6924,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t6)){
t8=t7;
f_6924(t8,t6);}
else{
t8=C_eqp(t4,lf[188]);
if(C_truep(t8)){
t9=t7;
f_6924(t9,t8);}
else{
t9=C_eqp(t4,lf[189]);
if(C_truep(t9)){
t10=t7;
f_6924(t10,t9);}
else{
t10=C_eqp(t4,lf[190]);
if(C_truep(t10)){
t11=t7;
f_6924(t11,t10);}
else{
t11=C_eqp(t4,lf[191]);
if(C_truep(t11)){
t12=t7;
f_6924(t12,t11);}
else{
t12=C_eqp(t4,lf[192]);
if(C_truep(t12)){
t13=t7;
f_6924(t13,t12);}
else{
t13=C_eqp(t4,lf[193]);
if(C_truep(t13)){
t14=t7;
f_6924(t14,t13);}
else{
t14=C_eqp(t4,lf[194]);
if(C_truep(t14)){
t15=t7;
f_6924(t15,t14);}
else{
t15=C_eqp(t4,lf[195]);
if(C_truep(t15)){
t16=t7;
f_6924(t16,t15);}
else{
t16=C_eqp(t4,lf[196]);
if(C_truep(t16)){
t17=t7;
f_6924(t17,t16);}
else{
t17=C_eqp(t4,lf[197]);
if(C_truep(t17)){
t18=t7;
f_6924(t18,t17);}
else{
t18=C_eqp(t4,lf[198]);
if(C_truep(t18)){
t19=t7;
f_6924(t19,t18);}
else{
t19=C_eqp(t4,lf[199]);
if(C_truep(t19)){
t20=t7;
f_6924(t20,t19);}
else{
t20=C_eqp(t4,lf[200]);
if(C_truep(t20)){
t21=t7;
f_6924(t21,t20);}
else{
t21=C_eqp(t4,lf[201]);
if(C_truep(t21)){
t22=t7;
f_6924(t22,t21);}
else{
t22=C_eqp(t4,lf[202]);
if(C_truep(t22)){
t23=t7;
f_6924(t23,t22);}
else{
t23=C_eqp(t4,lf[203]);
if(C_truep(t23)){
t24=t7;
f_6924(t24,t23);}
else{
t24=C_eqp(t4,lf[204]);
if(C_truep(t24)){
t25=t7;
f_6924(t25,t24);}
else{
t25=C_eqp(t4,lf[205]);
if(C_truep(t25)){
t26=t7;
f_6924(t26,t25);}
else{
t26=C_eqp(t4,lf[206]);
t27=t7;
f_6924(t27,(C_truep(t26)?t26:C_eqp(t4,lf[207])));}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#tree-copy in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10153(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10153,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10159,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10159(t6,t1,t2);}

/* rec in tree-copy in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10159(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10159,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10173,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:757: rec */
t8=t3;
t9=t5;
t1=t8;
t2=t9;
goto loop;}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10175 in k10171 in rec in tree-copy in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10177,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k10171 in rec in tree-copy in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10173,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10177,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:757: rec */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10159(t6,t3,t5);}

/* k14475 in for-each-loop3428 in k14457 in walk in scan-used-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14467(t3,((C_word*)t0)[4],t2);}

/* k10633 in k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10635,2,t0,t1);}
if(C_truep(C_i_structurep(t1,lf[212]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[173],((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10523,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_10523(t5,t3);}
else{
t5=C_i_cdr(t2);
t6=C_eqp(lf[170],t5);
t7=t4;
f_10523(t7,C_i_not(t6));}}}

/* a5677 in loop in follow-without-loop in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5678(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5678,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* support.scm:242: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5663(t4,t1,t2,t3);}

/* ##compiler#load-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10637,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10643,tmp=(C_word)a,a+=2,tmp);
/* support.scm:815: with-input-from-file */
t4=*((C_word*)lf[315]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k7806 in k7827 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7808,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[238],((C_word*)t0)[3],t1));}

/* a10642 in load-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10643,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10649,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_10649(t5,t1);}

/* ##compiler#sort-symbols in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5688,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5694,tmp=(C_word)a,a+=2,tmp);
/* support.scm:245: sort */
t4=*((C_word*)lf[96]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* loop in a10642 in load-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10649,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10653,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:818: read */
t3=*((C_word*)lf[118]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5400(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5400,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[69]);}
else{
t3=C_i_car(t2);
t4=t3;
t5=C_fix(C_character_code(t4));
t6=t5;
t7=C_fixnum_lessp(t6,C_fix(32));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5422,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_5422(t9,t7);}
else{
t9=C_fixnum_greater_or_equal_p(t6,C_fix(127));
if(C_truep(t9)){
t10=t8;
f_5422(t10,t9);}
else{
t10=C_u_i_memq(t4,lf[76]);
t11=t8;
f_5422(t11,t10);}}}}

/* a5693 in sort-symbols in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5694,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5702,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:245: symbol->string */
t5=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10651 in loop in a10642 in load-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10653(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10653,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10687,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t1);
/* support.scm:823: sexpr->node */
t7=*((C_word*)lf[293]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k7827 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7829,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7808,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_record4(&a,4,lf[212],lf[227],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[4]);
/* support.scm:565: reverse */
t7=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t4,t6);}

/* k5427 in k5420 in loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5429(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5429,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5443,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:196: number->string */
t5=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],C_fix(8));}

/* k9769 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9771,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9763,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[3]);
/* support.scm:725: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9673(t6,t4,t5,((C_word*)t0)[5]);}

/* k5420 in loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5422,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(8)))){
t3=t2;
f_5429(t3,lf[74]);}
else{
t3=C_fixnum_lessp(((C_word*)t0)[5],C_fix(64));
t4=t2;
f_5429(t4,(C_truep(t3)?lf[75]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* support.scm:198: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5400(t5,t2,t4);}}

/* k9761 in k9769 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9763,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[246],((C_word*)t0)[3],t2));}

/* k5431 in k5427 in k5420 in loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* support.scm:197: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5400(t6,t3,t5);}

/* map-loop1351 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8315,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8344,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:599: g1357 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5435 in k5431 in k5427 in k5420 in loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:192: append */
t2=*((C_word*)lf[70]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[71],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k8311 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8313,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[253],((C_word*)t0)[3],t1));}

/* k5441 in k5427 in k5420 in loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8342 in map-loop1351 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8344(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8344,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8315(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8315(t6,((C_word*)t0)[5],t5);}}

/* k7890 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7892,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:572: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7785(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k7894 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:574: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7399(3,t2,((C_word*)t0)[3],t1);}

/* k10185 in copy-node! in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
/* support.scm:762: node-parameters-set! */
t5=*((C_word*)lf[218]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[3],t4);}

/* ##compiler#copy-node! in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10183,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10187,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(1));
/* support.scm:761: node-class-set! */
t7=*((C_word*)lf[215]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t3,t6);}

/* a12544 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12545,2,t0,t1);}
/* support.scm:1137: quit */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[433],((C_word*)t0)[2]);}

/* k4995 in k4984 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:121: print-call-chain */
t3=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],C_fix(0),*((C_word*)lf[36]+1),lf[37]);}

/* k10191 in k10188 in k10185 in copy-node! in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k10188 in k10185 in copy-node! in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(3));
/* support.scm:763: node-subexpressions-set! */
t5=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[3],t4);}

/* k9794 in k9788 in k9785 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9796,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9816,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:734: walk */
t6=((C_word*)((C_word*)t0)[6])[1];
f_9673(t6,t4,t5,((C_word*)t0)[7]);}

/* k9788 in k9785 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9790,2,t0,t1);}
t2=t1;
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t2),((C_word*)t0)[3]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9796,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* support.scm:731: put! */
t6=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,((C_word*)t0)[8],t2,lf[288],C_SCHEME_TRUE);}

/* k4968 in k4965 in quit in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:107: exit */
t2=*((C_word*)lf[30]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k12562 in foreign-type-convert-result in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12564,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(2));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4975 in quit in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[2],*((C_word*)lf[21]+1),((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* ##sys#syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4979(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4979r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4979r(t0,t1,t2,t3);}}

static void C_ccall f_4979r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[29]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4983,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t8=((C_word*)t4)[1];
t9=C_i_car(((C_word*)t5)[1]);
t10=C_set_block_item(t4,0,t9);
t11=C_i_cdr(((C_word*)t5)[1]);
t12=C_set_block_item(t5,0,t11);
t13=t7;
f_4983(t13,t8);}
else{
t8=t7;
f_4983(t8,C_SCHEME_FALSE);}}

/* k9785 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9787,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:729: gensym */
t4=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k12096 in k12022 in k11985 in k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_12098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12098,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[352]+1))?t1:C_a_i_list(&a,2,lf[360],t1));
t5=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[226],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[110],t3,t6));}

/* k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4983(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4983,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5032,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:118: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[39],C_SCHEME_FALSE,t4);}
else{
t4=((C_word*)t0)[2];
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5053,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:119: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[40],C_SCHEME_FALSE,t4);}}

/* k4984 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[34]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5005,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5005(t9,t5,t3);}

/* g170 in k4984 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4987(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4987,NULL,3,t0,t1,t2);}
/* support.scm:120: g185 */
t3=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[2],lf[33],t2);}

/* k5860 in basic-literal? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5862,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5900,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:280: vector->list */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t3=t2;
f_5868(2,t3,C_SCHEME_FALSE);}}}

/* k5866 in k5860 in basic-literal? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5868,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5883,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* support.scm:282: basic-literal? */
t5=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k10574 in k10558 in k10555 in k10600 in k10521 in k10633 in k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10576,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k7869 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7871,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7851,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7859,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7863,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:571: cadar */
t7=*((C_word*)lf[240]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[6]);}

/* k11749 in k11734 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11751(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11751,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[226],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[110],((C_word*)t0)[4],t3));}

/* k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11775(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11775,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[352]+1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_assq(t2,lf[368]);
t4=C_slot(t3,C_fix(1));
t5=C_a_i_list(&a,2,lf[98],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[364],t5,((C_word*)t0)[3]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[369]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11801,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_11801(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[407]);
if(C_truep(t4)){
t5=t3;
f_11801(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[408]);
t6=t3;
f_11801(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[409])));}}}}

/* map-loop1626 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9062,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9091,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:659: g1632 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1853 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10104(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10104,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10117,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_10117(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_10117(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k10115 in map-loop1853 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10117(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_10104(t5,((C_word*)t0)[7],t3,t4);}

/* k8149 in map-loop1271 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8151(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8151,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8122(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8122(t6,((C_word*)t0)[5],t5);}}

/* k9186 in loop in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9188,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9192,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* support.scm:665: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8600(3,t5,t3,t4);}

/* for-each-loop3494 in walkeach in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14713(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14713,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14723,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1341: g3495 */
t5=((C_word*)t0)[3];
f_14701(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9174,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_zerop(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9188,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:665: reverse */
t6=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t5=C_a_i_minus(&a,2,t2,C_fix(1));
t6=t5;
t7=C_i_cdr(t3);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9215,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t10=t3;
t11=C_u_i_car(t10);
/* support.scm:666: walk */
t12=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t12,t9,t11);}}

/* k8186 in k8206 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8188,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[248],((C_word*)t0)[3],t2));}

/* k8444 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8446,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_8418(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_8418(t2,C_SCHEME_FALSE);}}

/* g3495 in walkeach in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14701,NULL,3,t0,t1,t2);}
/* support.scm:1371: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_14515(t3,t1,t2,((C_word*)t0)[3]);}

/* k8430 in k8423 in k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8432,2,t0,t1);}
t2=((C_word*)t0)[2];
f_8422(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k5568 in k5556 in check-and-open-input-file in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm:222: quit */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[85],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[4]);
/* support.scm:223: quit */
t3=*((C_word*)lf[28]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[86],t2,((C_word*)t0)[3]);}}

/* map-loop1271 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8122(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8122,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8151,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:588: g1277 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9577 in k9607 in k9527 in k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9579,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9555(t3,C_a_i_record4(&a,4,lf[212],lf[110],((C_word*)t0)[4],t2));}

/* k8118 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8120,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[246],((C_word*)t0)[3],t1));}

/* k8423 in k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_8422(2,t4,C_a_i_list2(&a,2,((C_word*)t0)[3],t3));}
else{
/* support.scm:611: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* k8420 in k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8422(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8422,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)((C_word*)t0)[3])[1];
t9=((C_word*)t0)[4];
t10=C_i_check_list_2(t9,lf[162]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8379,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8381,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_8381(t15,t11,t9);}

/* k10600 in k10521 in k10633 in k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10602,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10557,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[3];
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[311]);}}

/* map-loop1556 in k8795 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8816(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8816,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8829,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_8829(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_8829(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8812 in k8804 in k8795 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:637: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t2,((C_word*)t0)[3],t1);}

/* k8808 in k8804 in k8795 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8810,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[110],((C_word*)t0)[3],t1));}

/* k9089 in map-loop1626 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9091(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9091,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9062(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9062(t6,((C_word*)t0)[5],t5);}}

/* ##compiler#foreign-type-convert-result in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12551,4,t0,t1,t2,t3);}
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12564,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1144: ##sys#hash-table-ref */
t5=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[397]+1),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11275 in toplevel-definition-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:936: hide-variable */
t2=*((C_word*)lf[329]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k8804 in k8795 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8806,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8810,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8814,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:637: last */
t5=*((C_word*)lf[265]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8418,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8422,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8425,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:609: real-name */
t5=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
/* support.scm:612: ##sys#symbol->qualified-string */
t4=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}}

/* k8408 in map-loop1397 in k8420 in k8416 in a8358 in k8227 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8410(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8410,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8381(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8381(t6,((C_word*)t0)[5],t5);}}

/* k15924 in k15921 in k15918 in k15915 in a15909 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:511: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),((C_word*)t0)[3]);}

/* k15918 in k15915 in a15909 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:511: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k15921 in k15918 in k15915 in a15909 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
/* support.scm:511: ##sys#print */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t4,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* map-loop1063 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7465,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7494,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:528: g1069 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7461 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7463,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1));}

/* k11263 in a11223 in dump-global-refs in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11265(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11265,2,t0,t1);}
t2=(C_truep(t1)?C_SCHEME_FALSE:C_i_assq(lf[190],((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_i_assq(lf[177],((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11237,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=C_i_length(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[4],t6);
/* support.scm:925: write */
t8=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t4,t7);}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(0));
/* support.scm:925: write */
t6=*((C_word*)lf[208]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#toplevel-definition-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_11267,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_not(t4));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11277,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:935: debugging */
t8=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[261],lf[330],t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k9557 in k9553 in k9527 in k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:691: fold-right */
t2=*((C_word*)lf[283]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k9553 in k9527 in k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9555(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9555,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:704: take */
t4=*((C_word*)lf[284]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k9729 in k9722 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:721: varnode */
t2=*((C_word*)lf[221]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9732 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:720: cfk */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_9724(2,t2,C_SCHEME_UNDEFINED);}}

/* g2451 in a11296 in compute-database-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static C_word C_fcall f_11299(C_word *a,C_word t0,C_word t1){
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
C_stack_overflow_check;
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_car(t1);
t5=C_eqp(t4,lf[190]);
if(C_truep(t5)){
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
return(t7);}
else{
t6=C_eqp(t4,lf[173]);
if(C_truep(t6)){
t7=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t8=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t7);
t9=t1;
t10=C_u_i_cdr(t9);
t11=C_slot(t10,C_fix(1));
t12=C_eqp(lf[134],t11);
if(C_truep(t12)){
t13=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t14=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t13);
return(t14);}
else{
t13=C_SCHEME_UNDEFINED;
return(t13);}}
else{
t7=C_eqp(t4,lf[178]);
if(C_truep(t7)){
t8=t1;
t9=C_u_i_cdr(t8);
t10=C_i_length(t9);
t11=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],t10);
t12=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t11);
return(t12);}
else{
t8=C_SCHEME_UNDEFINED;
return(t8);}}}}

/* a11296 in compute-database-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11297,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_check_list_2(t3,lf[34]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11378,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_11378(t9,t1,t3);}

/* k11290 in compute-database-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:972: values */
C_values(9,0,((C_word*)t0)[2],*((C_word*)lf[332]+1),*((C_word*)lf[333]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);}

/* map-loop1577 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8865(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8865,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8894,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:636: g1583 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9722 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9731,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* support.scm:709: alist-ref */
t4=*((C_word*)lf[287]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[4],t3,*((C_word*)lf[27]+1),((C_word*)t0)[4]);}

/* k9297 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:670: cons* */
t2=*((C_word*)lf[270]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k9190 in k9186 in loop in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9192,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[271],((C_word*)t0)[3],t1));}

/* k6928 in k6922 in loop in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,lf[172]);
t4=C_i_cdr(t3);
/* support.scm:470: ##sys#print */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],t4,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k9270 in map-loop1695 in k9231 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9272(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9272,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9243(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9243(t6,((C_word*)t0)[5],t5);}}

/* k11235 in k11263 in a11223 in dump-global-refs in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:926: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a11223 in dump-global-refs in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11224,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11265,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:923: keyword? */
t5=*((C_word*)lf[325]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* map-loop3631 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15300(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_15300,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t6);
t9=C_slot(t2,C_fix(1));
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t6);
t9=C_slot(t2,C_fix(1));
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6287 in k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6289,2,t0,t1);}
t2=*((C_word*)lf[141]+1);
t3=C_i_check_list_2(*((C_word*)lf[141]+1),lf[34]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6316,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6316(t7,((C_word*)t0)[2],*((C_word*)lf[141]+1));}

/* ##compiler#inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_9504,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9510,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* support.scm:683: decompose-lambda-list */
t9=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t2,t8);}

/* k7857 in k7869 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7859,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:571: reverse */
t3=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k7849 in k7869 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7851,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[238],((C_word*)t0)[3],t1));}

/* k8827 in map-loop1556 in k8795 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8829(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_8816(t5,((C_word*)t0)[7],t3,t4);}

/* k9239 in k9231 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:668: cons* */
t2=*((C_word*)lf[270]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* map-loop1695 in k9231 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9243(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9243,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9272,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:668: g1701 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6258 in for-each-loop584 in k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6260,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[145]+1)))){
t2=C_a_i_list(&a,1,C_SCHEME_TRUE);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[146],C_SCHEME_TRUE);}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[146],t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9231 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9233(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9233,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_u_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[162]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9241,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9243,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9243(t14,t10,t8);}

/* k8190 in k8206 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:594: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7399(3,t2,((C_word*)t0)[3],t1);}

/* k15337 in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1522: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15335,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15339,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15344,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_15344(t7,t3,C_fix(0),t2);}

/* loop in chop-extension in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14778(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_14778,NULL,3,t0,t1,t2);}
if(C_truep(C_i_zerop(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(46),t3))){
/* support.scm:1390: substring */
t4=*((C_word*)lf[484]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],C_fix(0),t2);}
else{
t4=C_a_i_minus(&a,2,t2,C_fix(1));
/* support.scm:1391: loop */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}}

/* k7861 in k7869 in loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:571: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7399(3,t2,((C_word*)t0)[3],t1);}

/* loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15344(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15344,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=C_slot(t4,C_fix(1));
t6=t5;
t7=t3;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t3;
t11=C_slot(t10,C_fix(3));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_15372,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=t3,a[6]=t1,a[7]=t9,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* support.scm:1510: make-string */
t14=*((C_word*)lf[509]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t13,t2,C_make_character(32));}

/* k7492 in map-loop1063 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7494(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7494,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7465(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7465(t6,((C_word*)t0)[5],t5);}}

/* ##compiler#dump-global-refs in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11218(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11218,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11224,tmp=(C_word)a,a+=2,tmp);
/* support.scm:921: ##sys#hash-table-for-each */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* k11214 in a11186 in dump-defined-globals in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11194(t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[190],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_11194(t3,(C_truep(t2)?C_i_assq(lf[188],((C_word*)t0)[3]):C_SCHEME_FALSE));}}

/* ##compiler#chop-extension in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14769(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14769,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14778,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_14778(t8,t1,t4);}

/* ##compiler#words in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5531(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5531,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub342(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#words->bytes in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5538(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5538,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub347(C_SCHEME_UNDEFINED,t3));}

/* k13988 in k13967 in k13892 in k13817 in k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13990(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13990,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[476]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[403]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[404]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[477]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[383]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_14008(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[398]);
t7=t5;
f_14008(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[399])));}}}}

/* ##compiler#compute-database-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11288(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11288,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11292,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t8,a[6]=t12,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11297,a[2]=t10,a[3]=t8,a[4]=t6,a[5]=t4,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
/* support.scm:958: ##sys#hash-table-for-each */
t15=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,t2);}

/* a9533 in k9527 in k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9534,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t2);
t6=C_a_i_list2(&a,2,t3,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[212],lf[110],t5,t6));}

/* k14750 in chop-separator in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14752(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm:1383: substring */
t2=*((C_word*)lf[484]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6188(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6192,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[139]+1);
t4=C_i_check_list_2(*((C_word*)lf[139]+1),lf[34]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6241,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6362,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_6362(t9,t5,*((C_word*)lf[139]+1));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a5503 in k5481 in valid-c-identifier? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5504,3,t0,t1,t2);}
t3=C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_u_i_char_numericp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:C_i_char_equalp(C_make_character(95),t2)));}}

/* ##compiler#chop-separator in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14742,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14752,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(t5,C_fix(0)))){
t7=C_i_string_ref(t2,t5);
t8=t6;
f_14752(t8,C_u_i_memq(t7,lf[485]));}
else{
t7=t6;
f_14752(t7,C_SCHEME_FALSE);}}

/* a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9522,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9526,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[111]+1);
t10=((C_word*)t0)[6];
t11=C_i_check_list_2(t10,lf[162]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9620,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9620(t15,t4,t10);}
else{
t5=t4;
f_9526(2,t5,((C_word*)t0)[6]);}}

/* k9527 in k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9529,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9534,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9555,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9609,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* support.scm:695: last */
t6=*((C_word*)lf[265]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t5=t4;
f_9555(t5,t2);}}

/* k9524 in a9521 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9526,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* support.scm:689: copy-node-tree-and-rename */
t4=*((C_word*)lf[286]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t3,((C_word*)t0)[8],((C_word*)t0)[9],t2,((C_word*)t0)[10],((C_word*)t0)[11]);}
else{
t4=t3;
f_9529(2,t4,((C_word*)t0)[8]);}}

/* k6190 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k14566 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14568,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1354: variable-visible? */
t4=*((C_word*)lf[313]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9510,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9516,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9522,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* support.scm:685: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* k14735 in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1374: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* a9515 in a9509 in inline-lambda-bindings in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9516,2,t0,t1);}
/* support.scm:686: split-at */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k14721 in for-each-loop3494 in walkeach in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14713(t3,((C_word*)t0)[4],t2);}

/* k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14549(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14549,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[222]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
if(C_truep(C_i_memq(t4,((C_word*)t0)[5]))){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14568,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1353: lset-adjoin */
t6=*((C_word*)lf[482]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[27]+1),((C_word*)((C_word*)t0)[6])[1],t4);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[246]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_memq(t4,((C_word*)t0)[5]))){
t5=C_i_car(((C_word*)t0)[8]);
/* support.scm:1359: walk */
t6=((C_word*)((C_word*)t0)[9])[1];
f_14515(t6,((C_word*)t0)[2],t5,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14604,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1358: lset-adjoin */
t6=*((C_word*)lf[482]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[27]+1),((C_word*)((C_word*)t0)[6])[1],t4);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[110]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14613,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(((C_word*)t0)[8]);
/* support.scm:1361: walk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_14515(t7,t5,t6,((C_word*)t0)[5]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[134]);
if(C_truep(t5)){
t6=C_i_caddr(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14643,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1364: decompose-lambda-list */
t8=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[2],t6,t7);}
else{
/* support.scm:1368: walkeach */
t6=((C_word*)((C_word*)t0)[10])[1];
f_14699(t6,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[5]);}}}}}}

/* ##compiler#check-and-open-input-file in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5545(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5545r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5545r(t0,t1,t2,t3);}}

static void C_ccall f_5545r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
if(C_truep(C_i_string_equal_p(t2,lf[82]))){
t4=*((C_word*)lf[83]+1);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,*((C_word*)lf[83]+1));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5558,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:221: file-exists? */
t5=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k12693 in k12681 in k12672 in a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12695,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1182: words->bytes */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(4));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[356]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_12707(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[424]);
if(C_truep(t4)){
t5=t3;
f_12707(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[425]);
if(C_truep(t5)){
t6=t3;
f_12707(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[371]);
t7=t3;
f_12707(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[375])));}}}}}

/* k13967 in k13892 in k13817 in k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13969(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_13969,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[425]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[377]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[475]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[379]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[395]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[380]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_13990(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[400]);
if(C_truep(t6)){
t7=t5;
f_13990(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[401]);
t8=t5;
f_13990(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[402])));}}}}}}

/* for-each-loop2231 in k10394 in k10386 in k10380 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10404,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10414,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:812: g2247 */
t5=*((C_word*)lf[295]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[296],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5556 in check-and-open-input-file in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5558,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:221: open-input-file */
t2=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_i_nullp(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_5570(t4,t2);}
else{
t4=C_i_car(((C_word*)t0)[4]);
t5=t3;
f_5570(t5,C_i_not(t4));}}}

/* k12681 in k12672 in a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12683(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_12683,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1180: words->bytes */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(3));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[373]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_12695(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[407]);
if(C_truep(t4)){
t5=t3;
f_12695(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[369]);
if(C_truep(t5)){
t6=t3;
f_12695(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[408]);
if(C_truep(t6)){
t7=t3;
f_12695(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[406]);
if(C_truep(t7)){
t8=t3;
f_12695(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[409]);
t9=t3;
f_12695(t9,(C_truep(t8)?t8:C_eqp(((C_word*)t0)[3],lf[405])));}}}}}}}

/* k5461 in k5420 in loop in k5396 in c-ify-string in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5463,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k10412 in for-each-loop2231 in k10394 in k10386 in k10380 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10404(t3,((C_word*)t0)[4],t2);}

/* k5527 in valid-c-identifier? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14515(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14515,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[98]);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_14549,a[2]=t1,a[3]=t12,a[4]=t9,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t6,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t13)){
t15=t14;
f_14549(t15,t13);}
else{
t15=C_eqp(t12,lf[227]);
if(C_truep(t15)){
t16=t14;
f_14549(t16,t15);}
else{
t16=C_eqp(t12,lf[242]);
if(C_truep(t16)){
t17=t14;
f_14549(t17,t16);}
else{
t17=C_eqp(t12,lf[245]);
t18=t14;
f_14549(t18,(C_truep(t17)?t17:C_eqp(t12,lf[257])));}}}}

/* ##compiler#scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14512(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14512,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14515,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14699,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14737,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1373: walk */
t14=((C_word*)t8)[1];
f_14515(t14,t13,t2,C_SCHEME_END_OF_LIST);}

/* k12672 in a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12674(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12674,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[380]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_12683(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[383]);
if(C_truep(t4)){
t5=t3;
f_12683(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[377]);
if(C_truep(t5)){
t6=t3;
f_12683(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[379]);
if(C_truep(t6)){
t7=t3;
f_12683(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[384]);
if(C_truep(t7)){
t8=t3;
f_12683(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[400]);
if(C_truep(t8)){
t9=t3;
f_12683(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[3],lf[398]);
if(C_truep(t9)){
t10=t3;
f_12683(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[401]);
if(C_truep(t10)){
t11=t3;
f_12683(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[3],lf[402]);
if(C_truep(t11)){
t12=t3;
f_12683(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[399]);
if(C_truep(t12)){
t13=t3;
f_12683(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[403]);
t14=t3;
f_12683(t14,(C_truep(t13)?t13:C_eqp(((C_word*)t0)[3],lf[404])));}}}}}}}}}}}}

/* ##compiler#valid-c-identifier? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5479(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5479,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5483,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5529,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:201: ->string */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* a12663 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12664,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,lf[350]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12674,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_12674(t7,t5);}
else{
t7=C_eqp(t4,lf[354]);
if(C_truep(t7)){
t8=t6;
f_12674(t8,t7);}
else{
t8=C_eqp(t4,lf[427]);
if(C_truep(t8)){
t9=t6;
f_12674(t9,t8);}
else{
t9=C_eqp(t4,lf[439]);
if(C_truep(t9)){
t10=t6;
f_12674(t10,t9);}
else{
t10=C_eqp(t4,lf[440]);
if(C_truep(t10)){
t11=t6;
f_12674(t11,t10);}
else{
t11=C_eqp(t4,lf[428]);
if(C_truep(t11)){
t12=t6;
f_12674(t12,t11);}
else{
t12=C_eqp(t4,lf[441]);
if(C_truep(t12)){
t13=t6;
f_12674(t13,t12);}
else{
t13=C_eqp(t4,lf[351]);
if(C_truep(t13)){
t14=t6;
f_12674(t14,t13);}
else{
t14=C_eqp(t4,lf[426]);
if(C_truep(t14)){
t15=t6;
f_12674(t15,t14);}
else{
t15=C_eqp(t4,lf[429]);
if(C_truep(t15)){
t16=t6;
f_12674(t16,t15);}
else{
t16=C_eqp(t4,lf[430]);
if(C_truep(t16)){
t17=t6;
f_12674(t17,t16);}
else{
t17=C_eqp(t4,lf[431]);
t18=t6;
f_12674(t18,(C_truep(t17)?t17:C_eqp(t4,lf[432])));}}}}}}}}}}}}

/* k5481 in valid-c-identifier? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5483,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=C_u_i_car(t1);
t3=C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:C_i_char_equalp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5504,tmp=(C_word)a,a+=2,tmp);
t6=C_u_i_cdr(t1);
/* support.scm:205: any */
t7=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[2],t5,t6);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a12651 in final-foreign-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12652,2,t0,t1);}
/* support.scm:1164: quit */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[437],((C_word*)t0)[2]);}

/* ##compiler#estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12658(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12658,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12664,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13084,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1170: follow-without-loop */
t5=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}

/* a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10446,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:802: chicken-version */
t4=*((C_word*)lf[306]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k9038 in loop in k8975 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9040(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9040,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9028,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[5];
t8=C_u_i_cdr(t7);
/* support.scm:657: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_8989(t9,t4,t6,t8);}

/* k10444 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:808: reverse */
t3=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k8581 in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8583,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8586,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_positivep(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:617: debugging */
t4=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[261],lf[262],((C_word*)((C_word*)t0)[3])[1]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k8584 in k8581 in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k7685 in map-loop1100 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7687(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7687,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7658(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7658(t6,((C_word*)t0)[5],t5);}}

/* k9026 in k9038 in loop in k8975 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9028,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k12621 in a12618 in final-foreign-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_12623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12623,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1159: g2858 */
t3=t2;
f_12627(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g2858 in k12621 in a12618 in final-foreign-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12627(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12627,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1162: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1162: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k9011 in loop in k8975 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9013,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[239],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,1,t2));}

/* ##compiler#emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10375,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10379,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10492,a[2]=t5,a[3]=t7,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:779: ##sys#hash-table-for-each */
t10=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,t3);}

/* k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
/* support.scm:799: delete-file* */
t3=*((C_word*)lf[299]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10442,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:800: with-output-to-file */
t4=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[5],t3);}}

/* k9144 in map-loop1652 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9146(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9146,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9117(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9117(t6,((C_word*)t0)[5],t5);}}

/* k10380 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:811: debugging */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[297],lf[298]);}
else{
t3=t2;
f_10388(2,t3,C_SCHEME_FALSE);}}

/* k10386 in k10380 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10388,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:812: sort-symbols */
t3=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k8795 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8797(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8797,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[162]);
t3=C_i_check_list_2(t1,lf[162]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8806,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8816,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8816(t8,t4,((C_word*)t0)[2],t1);}

/* k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8865,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8865(t6,t2,t1);}

/* k10394 in k10386 in k10380 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10396,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[34]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10404,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10404(t6,((C_word*)t0)[2],t1);}

/* ##compiler#bomb in k4688 in k4685 in k4682 */
static void C_ccall f_4699(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4699r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4699r(t0,t1,t2);}}

static void C_ccall f_4699r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4713,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:49: string-append */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[6],t5);}
else{
/* support.scm:50: error */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,lf[7]);}}

/* k4688 in k4685 in k4682 */
static void C_ccall f_4690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4690,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4694,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[1] /* ##compiler#debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[2] /* ##compiler#disabled-warnings */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate2((C_word*)lf[3]+1 /* (set! ##compiler#bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4699,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:53: open-output-string */
t7=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* ##compiler#compiler-cleanup-hook in k4688 in k4685 in k4682 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4694,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9226(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9226,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:668: walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8600(3,t4,t2,t3);}
else{
t2=C_eqp(((C_word*)t0)[7],lf[251]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[7],lf[273]));
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)((C_word*)t0)[2])[1];
t9=C_i_check_list_2(((C_word*)t0)[3],lf[162]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9299,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9301,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9301(t14,t10,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9341,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)((C_word*)t0)[2])[1];
t10=C_i_check_list_2(((C_word*)t0)[3],lf[162]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9348,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9350,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9350(t15,t11,((C_word*)t0)[3]);}}}

/* k9213 in loop in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9215,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:666: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9174(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k9113 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:660: cons* */
t2=*((C_word*)lf[270]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[244],((C_word*)t0)[3],t1);}

/* map-loop1652 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9117,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9146,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:660: g1658 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8594,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8600,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8600(3,t6,t1,t2);}

/* ##compiler#get-line in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6583,3,t0,t1,t2);}
t3=C_i_car(t2);
/* support.scm:418: get */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[159]+1),t3,t2);}

/* ##compiler#get-line-2 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6593,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6600,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:422: ##sys#hash-table-ref */
t6=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[159]+1),t4);}

/* k7611 in k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7613,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7621,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:551: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7399(3,t4,t3,((C_word*)t0)[4]);}

/* a6001 in a5995 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6010,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6013,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:307: exn? */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k15477 in for-each-loop3738 in k15394 in k15391 in k15388 in k15385 in k15382 in k15379 in k15370 in loop in dump-nodes in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15469(t3,((C_word*)t0)[4],t2);}

/* k15879 in k15872 in print-version in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1627: print */
t2=*((C_word*)lf[295]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k15897 in k15894 in print-usage in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1632: display */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[558]);}

/* k7619 in k7611 in k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7621,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:550: append */
t3=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k15894 in print-usage in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1631: newline */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#make-block-variable-literal in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14811,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[488],t2));}

/* map-loop1127 in k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7623(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7623,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7652,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:550: g1133 */
t5=((C_word*)t0)[5];
f_7596(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#print-usage in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15896,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1630: print-version */
t3=*((C_word*)lf[554]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* map-loop1100 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7658(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7658,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7687,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(lf[233],t4);
if(C_truep(t5)){
/* support.scm:548: error */
t6=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,lf[234]);}
else{
t6=t3;
f_7687(2,t6,t4);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k15863 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1612: file-exists? */
t2=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7650 in map-loop1127 in k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7652(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7652,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7623(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7623(t6,((C_word*)t0)[5],t5);}}

/* ##compiler#print-version in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15867(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_15867r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_15867r(t0,t1,t2);}}

static void C_ccall f_15867r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
/* support.scm:1626: print* */
t6=*((C_word*)lf[555]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[556]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f17235,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1627: chicken-version */
t7=*((C_word*)lf[306]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_SCHEME_TRUE);}}

/* k15859 in k15856 in k15853 in k15850 in k15847 in k15841 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1613: debugging */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[549],t1);}

/* ##compiler#block-variable-literal? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14817(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14817,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[488]));}

/* k6239 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6241(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6241,2,t0,t1);}
t2=*((C_word*)lf[140]+1);
t3=C_i_check_list_2(*((C_word*)lf[140]+1),lf[34]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6339,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6339(t8,t4,*((C_word*)lf[140]+1));}

/* k6133 in expand-profile-lambda in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6135(C_word c,C_word t0,C_word t1){
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
C_word ab[117],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6135,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),*((C_word*)lf[131]+1));
t3=C_mutate2((C_word*)lf[131]+1 /* (set! ##compiler#profile-lambda-list ...) */,t2);
t4=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_mutate2((C_word*)lf[130]+1 /* (set! ##compiler#profile-lambda-index ...) */,t4);
t6=C_a_i_list(&a,2,lf[98],((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[132],t6,*((C_word*)lf[133]+1));
t8=C_a_i_list(&a,3,lf[134],C_SCHEME_END_OF_LIST,t7);
t9=C_a_i_list(&a,3,lf[134],((C_word*)t0)[4],((C_word*)t0)[5]);
t10=C_a_i_list(&a,3,lf[135],t9,t1);
t11=C_a_i_list(&a,3,lf[134],C_SCHEME_END_OF_LIST,t10);
t12=C_a_i_list(&a,2,lf[98],((C_word*)t0)[2]);
t13=C_a_i_list(&a,3,lf[136],t12,*((C_word*)lf[133]+1));
t14=C_a_i_list(&a,3,lf[134],C_SCHEME_END_OF_LIST,t13);
t15=C_a_i_list(&a,4,lf[137],t8,t11,t14);
t16=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_a_i_list(&a,3,lf[134],t1,t15));}

/* k15872 in print-version in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1627: chicken-version */
t3=*((C_word*)lf[306]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* ##compiler#expand-profile-lambda in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6131,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[130]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6135,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:334: gensym */
t7=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k6210 in for-each-loop535 in initialize-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6212,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[145]+1)))){
t2=C_a_i_list(&a,1,C_SCHEME_TRUE);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[146],C_SCHEME_TRUE);}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[146],t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k15847 in k15841 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1613: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k15841 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15843,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[51]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15849,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1613: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[551],C_SCHEME_FALSE,t3);}

/* k15856 in k15853 in k15850 in k15847 in k15841 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1613: get-output-string */
t3=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k15853 in k15850 in k15847 in k15841 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1613: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k15850 in k15847 in k15841 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1613: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[550],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* ##compiler#read-info-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_15492,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15496,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15499,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(lf[528],t2);
if(C_truep(t7)){
t8=C_i_car(t3);
t9=t6;
f_15499(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_15499(t8,C_SCHEME_FALSE);}}

/* k15826 in for-each-loop3931 in k15811 in k15783 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15818(t3,((C_word*)t0)[4],t2);}

/* k15497 in read-info-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15499(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_15499,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1533: conc */
t5=*((C_word*)lf[506]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[526]+1),lf[527],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k15494 in read-info-hook in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k10455 in k10444 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10465,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10465(t6,t2,t1);}

/* k10449 in for-each-loop2209 in k10455 in k10444 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:807: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k10052 in k10040 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10054,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* map-loop2040 in k10040 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10056(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10056,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10085,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:751: g2046 */
t5=((C_word*)t0)[5];
f_10044(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14572 in k14566 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14574,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1355: lset-adjoin */
t3=*((C_word*)lf[482]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[27]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}}

/* for-each-loop2209 in k10455 in k10444 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10465,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10475,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10451,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm:806: pp */
t7=*((C_word*)lf[301]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14576 in k14572 in k14566 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10458 in k10455 in k10444 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:809: print */
t2=*((C_word*)lf[295]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[300]);}

/* match1 in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10730(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_10730,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:840: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10696(t4,t1,t3,t2);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10752,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:842: match1 */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* a15231 in a15192 in a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15232,2,t0,t1);}
C_apply(4,0,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k10024 in map-loop1934 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10026(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10026,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9997(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9997(t6,((C_word*)t0)[5],t5);}}

/* a15246 in a15240 in a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15247,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a15240 in a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15241(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_15241r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_15241r(t0,t1,t2);}}

static void C_ccall f_15241r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15247,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1485: k3690 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k15213 in k15204 in a15192 in a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* support.scm:1497: k */
t3=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[5],t2,C_SCHEME_FALSE);}

/* k10040 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10042(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10042,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[162]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10054,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10056,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10056(t13,t9,((C_word*)t0)[4]);}

/* g2046 in k10040 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10044,NULL,3,t0,t1,t2);}
/* support.scm:751: g2063 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9673(t3,t1,t2,((C_word*)t0)[3]);}

/* k5106 in loop in map-llist in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5112,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:133: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5085(t6,t3,t5);}

/* k9814 in k9794 in k9788 in k9785 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9816,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[110],((C_word*)t0)[4],t2));}

/* g2293 in resolve in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static C_word C_fcall f_10704(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* k15204 in a15192 in a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15206,2,t0,t1);}
t2=t1;
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15215,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1496: debugging */
t6=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[261],lf[519],((C_word*)t0)[4]);}
else{
/* support.scm:1499: bomb */
t5=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],lf[520],((C_word*)t0)[4]);}}

/* k5129 in err in check-signature in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5131,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:139: map-llist */
t5=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,*((C_word*)lf[46]+1),t4);}

/* k5133 in k5129 in err in check-signature in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:137: quit */
t2=*((C_word*)lf[28]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[45],((C_word*)t0)[3],t1);}

/* k10083 in map-loop2040 in k10040 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10085(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10085,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10056(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10056(t6,((C_word*)t0)[5],t5);}}

/* loop in check-signature in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5144(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5144,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* support.scm:141: err */
t4=((C_word*)t0)[2];
f_5123(t4,t1);}}
else{
t4=C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_nullp(t2))){
/* support.scm:143: err */
t5=((C_word*)t0)[2];
f_5123(t5,t1);}
else{
t5=C_i_cdr(t2);
t6=C_i_cdr(t3);
/* support.scm:144: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* map-loop1198 in k7933 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7946,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7975,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:580: g1204 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7942 in k7933 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7944,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9920(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9920,2,t0,t1);}
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9928,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9936,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[9])){
t7=((C_word*)t0)[9];
/* support.scm:709: alist-ref */
t8=*((C_word*)lf[287]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,t7,((C_word*)t0)[4],*((C_word*)lf[27]+1),t7);}
else{
/* support.scm:748: build-lambda-list */
t7=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_support_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("support_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(6174)){
C_save(t1);
C_rereclaim2(6174*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,565);
lf[0]=C_h_intern(&lf[0],30,"\010compilercompiler-cleanup-hook");
lf[1]=C_h_intern(&lf[1],26,"\010compilerdebugging-chicken");
lf[2]=C_h_intern(&lf[2],26,"\010compilerdisabled-warnings");
lf[3]=C_h_intern(&lf[3],13,"\010compilerbomb");
lf[4]=C_h_intern(&lf[4],5,"error");
lf[5]=C_h_intern(&lf[5],13,"string-append");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\032[internal compiler error] ");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\031[internal compiler error]");
lf[8]=C_h_intern(&lf[8],35,"\010compilercollected-debugging-output");
lf[9]=C_h_intern(&lf[9],24,"+logged-debugging-modes+");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001S\376\377\016");
lf[11]=C_h_intern(&lf[11],18,"\010compilerdebugging");
lf[12]=C_h_intern(&lf[12],7,"newline");
lf[13]=C_h_intern(&lf[13],19,"\003sysstandard-output");
lf[14]=C_h_intern(&lf[14],6,"printf");
lf[15]=C_h_intern(&lf[15],16,"\003syswrite-char-0");
lf[16]=C_h_intern(&lf[16],9,"\003sysprint");
lf[17]=C_h_intern(&lf[17],5,"force");
lf[18]=C_h_intern(&lf[18],7,"display");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[20]=C_h_intern(&lf[20],21,"with-output-to-string");
lf[21]=C_h_intern(&lf[21],7,"fprintf");
lf[22]=C_h_intern(&lf[22],12,"flush-output");
lf[23]=C_h_intern(&lf[23],30,"\010compilerwith-debugging-output");
lf[24]=C_h_intern(&lf[24],12,"string-split");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[26]=C_h_intern(&lf[26],17,"lset-intersection");
lf[27]=C_h_intern(&lf[27],3,"eq\077");
lf[28]=C_h_intern(&lf[28],13,"\010compilerquit");
lf[29]=C_h_intern(&lf[29],18,"\003sysstandard-error");
lf[30]=C_h_intern(&lf[30],4,"exit");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\010\012Error: ");
lf[32]=C_h_intern(&lf[32],21,"\003syssyntax-error-hook");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\005\011~s~%");
lf[34]=C_h_intern(&lf[34],8,"for-each");
lf[35]=C_h_intern(&lf[35],16,"print-call-chain");
lf[36]=C_h_intern(&lf[36],18,"\003syscurrent-thread");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\025\012\011Expansion history:\012");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\003): ");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\017\012Syntax error (");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\017\012Syntax error: ");
lf[41]=C_h_intern(&lf[41],12,"syntax-error");
lf[42]=C_h_intern(&lf[42],31,"\010compileremit-syntax-trace-info");
lf[43]=C_h_intern(&lf[43],9,"map-llist");
lf[44]=C_h_intern(&lf[44],24,"\010compilercheck-signature");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000@Arguments to inlined call of `~A\047 do not match parameter-list ~A");
lf[46]=C_h_intern(&lf[46],18,"\010compilerreal-name");
lf[47]=C_h_intern(&lf[47],13,"\010compilerposq");
lf[48]=C_h_intern(&lf[48],13,"\010compilerposv");
lf[49]=C_h_intern(&lf[49],18,"\010compilerstringify");
lf[50]=C_h_intern(&lf[50],14,"symbol->string");
lf[51]=C_h_intern(&lf[51],7,"sprintf");
lf[52]=C_h_intern(&lf[52],17,"get-output-string");
lf[53]=C_h_intern(&lf[53],18,"open-output-string");
lf[54]=C_h_intern(&lf[54],18,"\010compilersymbolify");
lf[55]=C_h_intern(&lf[55],14,"string->symbol");
lf[56]=C_h_intern(&lf[56],17,"\010compilerslashify");
lf[57]=C_h_intern(&lf[57],16,"string-translate");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[60]=C_h_intern(&lf[60],8,"->string");
lf[61]=C_h_intern(&lf[61],21,"\010compileruncommentify");
lf[62]=C_h_intern(&lf[62],17,"string-translate\052");
lf[63]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002\052/\376B\000\000\003\052_/\376\377\016");
lf[64]=C_h_intern(&lf[64],26,"\010compilerbuild-lambda-list");
lf[65]=C_h_intern(&lf[65],29,"\010compilerstring->c-identifier");
lf[66]=C_h_intern(&lf[66],24,"\003sysstring->c-identifier");
lf[67]=C_h_intern(&lf[67],21,"\010compilerc-ify-string");
lf[68]=C_h_intern(&lf[68],16,"\003syslist->string");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\377\016");
lf[70]=C_h_intern(&lf[70],6,"append");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\377\016");
lf[72]=C_h_intern(&lf[72],16,"\003sysstring->list");
lf[73]=C_h_intern(&lf[73],14,"number->string");
lf[74]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[76]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\077\376\003\000\000\002\376\377\012\000\000\052\376\377\016");
lf[77]=C_h_intern(&lf[77],28,"\010compilervalid-c-identifier\077");
lf[78]=C_h_intern(&lf[78],3,"any");
lf[79]=C_h_intern(&lf[79],14,"\010compilerwords");
lf[80]=C_h_intern(&lf[80],21,"\010compilerwords->bytes");
lf[81]=C_h_intern(&lf[81],34,"\010compilercheck-and-open-input-file");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[83]=C_h_intern(&lf[83],18,"\003sysstandard-input");
lf[84]=C_h_intern(&lf[84],15,"open-input-file");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\024Can not open file ~s");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\031(~a) can not open file ~s");
lf[87]=C_h_intern(&lf[87],12,"file-exists\077");
lf[88]=C_h_intern(&lf[88],33,"\010compilerclose-checked-input-file");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[90]=C_h_intern(&lf[90],16,"close-input-port");
lf[91]=C_h_intern(&lf[91],19,"\010compilerfold-inner");
lf[92]=C_h_intern(&lf[92],7,"reverse");
lf[93]=C_h_intern(&lf[93],28,"\010compilerfollow-without-loop");
lf[94]=C_h_intern(&lf[94],21,"\010compilersort-symbols");
lf[95]=C_h_intern(&lf[95],8,"string<\077");
lf[96]=C_h_intern(&lf[96],4,"sort");
lf[97]=C_h_intern(&lf[97],18,"\010compilerconstant\077");
lf[98]=C_h_intern(&lf[98],5,"quote");
lf[99]=C_h_intern(&lf[99],18,"\003syssrfi-4-vector\077");
lf[100]=C_h_intern(&lf[100],5,"blob\077");
lf[101]=C_h_intern(&lf[101],29,"\010compilercollapsable-literal\077");
lf[102]=C_h_intern(&lf[102],19,"\010compilerimmediate\077");
lf[103]=C_h_intern(&lf[103],20,"\010compilerbig-fixnum\077");
lf[104]=C_h_intern(&lf[104],23,"\010compilerbasic-literal\077");
lf[105]=C_h_intern(&lf[105],5,"every");
lf[106]=C_h_intern(&lf[106],12,"vector->list");
lf[107]=C_h_intern(&lf[107],32,"\010compilercanonicalize-begin-body");
lf[108]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[110]=C_h_intern(&lf[110],3,"let");
lf[111]=C_h_intern(&lf[111],6,"gensym");
lf[112]=C_h_intern(&lf[112],1,"t");
lf[113]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\377\016");
lf[114]=C_h_intern(&lf[114],21,"\010compilerstring->expr");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot parse expression: ~s [~a]~%");
lf[116]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[117]=C_h_intern(&lf[117],5,"begin");
lf[118]=C_h_intern(&lf[118],4,"read");
lf[119]=C_h_intern(&lf[119],6,"unfold");
lf[120]=C_h_intern(&lf[120],11,"eof-object\077");
lf[121]=C_h_intern(&lf[121],6,"values");
lf[122]=C_h_intern(&lf[122],22,"with-input-from-string");
lf[123]=C_h_intern(&lf[123],22,"with-exception-handler");
lf[124]=C_h_intern(&lf[124],30,"call-with-current-continuation");
lf[125]=C_h_intern(&lf[125],30,"\010compilerdecompose-lambda-list");
lf[126]=C_h_intern(&lf[126],25,"\003sysdecompose-lambda-list");
lf[127]=C_h_intern(&lf[127],21,"\010compilerllist-length");
lf[128]=C_h_intern(&lf[128],21,"\010compilerllist-match\077");
lf[129]=C_h_intern(&lf[129],30,"\010compilerexpand-profile-lambda");
lf[130]=C_h_intern(&lf[130],29,"\010compilerprofile-lambda-index");
lf[131]=C_h_intern(&lf[131],28,"\010compilerprofile-lambda-list");
lf[132]=C_h_intern(&lf[132],17,"\003sysprofile-entry");
lf[133]=C_h_intern(&lf[133],33,"\010compilerprofile-info-vector-name");
lf[134]=C_h_intern(&lf[134],11,"\004corelambda");
lf[135]=C_h_intern(&lf[135],9,"\003sysapply");
lf[136]=C_h_intern(&lf[136],16,"\003sysprofile-exit");
lf[137]=C_h_intern(&lf[137],16,"\003sysdynamic-wind");
lf[138]=C_h_intern(&lf[138],37,"\010compilerinitialize-analysis-database");
lf[139]=C_h_intern(&lf[139],17,"standard-bindings");
lf[140]=C_h_intern(&lf[140],17,"extended-bindings");
lf[141]=C_h_intern(&lf[141],26,"\010compilerinternal-bindings");
lf[142]=C_h_intern(&lf[142],8,"internal");
lf[143]=C_h_intern(&lf[143],8,"\003sysput!");
lf[144]=C_h_intern(&lf[144],18,"\010compilerintrinsic");
lf[145]=C_h_intern(&lf[145],26,"\010compilerfoldable-bindings");
lf[146]=C_h_intern(&lf[146],17,"\010compilerfoldable");
lf[147]=C_h_intern(&lf[147],8,"extended");
lf[148]=C_h_intern(&lf[148],8,"standard");
lf[149]=C_h_intern(&lf[149],12,"\010compilerget");
lf[150]=C_h_intern(&lf[150],18,"\003syshash-table-ref");
lf[151]=C_h_intern(&lf[151],16,"\010compilerget-all");
lf[152]=C_h_intern(&lf[152],10,"filter-map");
lf[153]=C_h_intern(&lf[153],13,"\010compilerput!");
lf[154]=C_h_intern(&lf[154],19,"\003syshash-table-set!");
lf[155]=C_h_intern(&lf[155],17,"\010compilercollect!");
lf[156]=C_h_intern(&lf[156],15,"\010compilercount!");
lf[157]=C_h_intern(&lf[157],17,"\010compilerget-list");
lf[158]=C_h_intern(&lf[158],17,"\010compilerget-line");
lf[159]=C_h_intern(&lf[159],24,"\003sysline-number-database");
lf[160]=C_h_intern(&lf[160],19,"\010compilerget-line-2");
lf[161]=C_h_intern(&lf[161],37,"\010compilerdisplay-line-number-database");
lf[162]=C_h_intern(&lf[162],3,"map");
lf[163]=C_h_intern(&lf[163],23,"\003syshash-table-for-each");
lf[164]=C_h_intern(&lf[164],34,"\010compilerdisplay-analysis-database");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\005\011css=");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\006\011refs=");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\005\011val=");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\006\011lval=");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\006\011pval=");
lf[170]=C_h_intern(&lf[170],7,"unknown");
lf[171]=C_h_intern(&lf[171],8,"captured");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010captured\376\001\000\000\003cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010assigned\376\001\000\000\003set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005box"
"ed\376\001\000\000\003box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006global\376\001\000\000\003glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020assigned-locally\376\001\000\000\003stl\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014contractable\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020standard-binding\376\001\000\000\003stb\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006simple\376\001\000\000\003sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011inlinable\376\001\000\000\003inl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013collapsable\376"
"\001\000\000\003col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011removable\376\001\000\000\003rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010constant\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015inline-target\376\001\000\000\003ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020inline-transient\376\001\000\000\003itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"undefined\376\001\000\000\003und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011replacing\376\001\000\000\003rpg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006unused\376\001\000\000\003uud\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020extended-binding\376\001\000\000\003xtb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015inline-export\376\001\000\000\003ilx\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\013hidden-refs\376\001\000\000\003hrf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011value-ref\376\001\000\000\003vvf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014custom"
"izable\376\001\000\000\003cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025has-unused-parameters\376\001\000\000\003hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012boxed-r"
"est\376\001\000\000\003bxr\376\377\016");
lf[173]=C_h_intern(&lf[173],5,"value");
lf[174]=C_h_intern(&lf[174],11,"local-value");
lf[175]=C_h_intern(&lf[175],15,"potential-value");
lf[176]=C_h_intern(&lf[176],10,"replacable");
lf[177]=C_h_intern(&lf[177],10,"references");
lf[178]=C_h_intern(&lf[178],10,"call-sites");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\020Illegal property");
lf[180]=C_h_intern(&lf[180],4,"home");
lf[181]=C_h_intern(&lf[181],8,"contains");
lf[182]=C_h_intern(&lf[182],12,"contained-in");
lf[183]=C_h_intern(&lf[183],8,"use-expr");
lf[184]=C_h_intern(&lf[184],12,"closure-size");
lf[185]=C_h_intern(&lf[185],14,"rest-parameter");
lf[186]=C_h_intern(&lf[186],18,"captured-variables");
lf[187]=C_h_intern(&lf[187],13,"explicit-rest");
lf[188]=C_h_intern(&lf[188],8,"assigned");
lf[189]=C_h_intern(&lf[189],5,"boxed");
lf[190]=C_h_intern(&lf[190],6,"global");
lf[191]=C_h_intern(&lf[191],12,"contractable");
lf[192]=C_h_intern(&lf[192],16,"standard-binding");
lf[193]=C_h_intern(&lf[193],16,"assigned-locally");
lf[194]=C_h_intern(&lf[194],11,"collapsable");
lf[195]=C_h_intern(&lf[195],9,"removable");
lf[196]=C_h_intern(&lf[196],9,"undefined");
lf[197]=C_h_intern(&lf[197],9,"replacing");
lf[198]=C_h_intern(&lf[198],6,"unused");
lf[199]=C_h_intern(&lf[199],6,"simple");
lf[200]=C_h_intern(&lf[200],9,"inlinable");
lf[201]=C_h_intern(&lf[201],13,"inline-export");
lf[202]=C_h_intern(&lf[202],21,"has-unused-parameters");
lf[203]=C_h_intern(&lf[203],16,"extended-binding");
lf[204]=C_h_intern(&lf[204],12,"customizable");
lf[205]=C_h_intern(&lf[205],8,"constant");
lf[206]=C_h_intern(&lf[206],10,"boxed-rest");
lf[207]=C_h_intern(&lf[207],11,"hidden-refs");
lf[208]=C_h_intern(&lf[208],5,"write");
lf[209]=C_h_intern(&lf[209],34,"\010compilerdefault-standard-bindings");
lf[210]=C_h_intern(&lf[210],34,"\010compilerdefault-extended-bindings");
lf[211]=C_h_intern(&lf[211],9,"make-node");
lf[212]=C_h_intern(&lf[212],4,"node");
lf[213]=C_h_intern(&lf[213],5,"node\077");
lf[214]=C_h_intern(&lf[214],10,"node-class");
lf[215]=C_h_intern(&lf[215],15,"node-class-set!");
lf[216]=C_h_intern(&lf[216],14,"\003sysblock-set!");
lf[217]=C_h_intern(&lf[217],15,"node-parameters");
lf[218]=C_h_intern(&lf[218],20,"node-parameters-set!");
lf[219]=C_h_intern(&lf[219],19,"node-subexpressions");
lf[220]=C_h_intern(&lf[220],24,"node-subexpressions-set!");
lf[221]=C_h_intern(&lf[221],16,"\010compilervarnode");
lf[222]=C_h_intern(&lf[222],13,"\004corevariable");
lf[223]=C_h_intern(&lf[223],14,"\010compilerqnode");
lf[224]=C_h_intern(&lf[224],25,"\010compilerbuild-node-graph");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\016bad expression");
lf[226]=C_h_intern(&lf[226],2,"if");
lf[227]=C_h_intern(&lf[227],14,"\004coreundefined");
lf[228]=C_h_intern(&lf[228],8,"truncate");
lf[229]=C_h_intern(&lf[229],7,"warning");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\0006literal is out of range - will be truncated to integer");
lf[231]=C_h_intern(&lf[231],6,"fixnum");
lf[232]=C_h_intern(&lf[232],11,"number-type");
lf[233]=C_h_intern(&lf[233],4,"\000tmp");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\021SHOULD NOT HAPPEN");
lf[235]=C_h_intern(&lf[235],6,"unzip1");
lf[236]=C_h_intern(&lf[236],6,"lambda");
lf[237]=C_h_intern(&lf[237],8,"\004corethe");
lf[238]=C_h_intern(&lf[238],13,"\004coretypecase");
lf[239]=C_h_intern(&lf[239],4,"else");
lf[240]=C_h_intern(&lf[240],5,"cadar");
lf[241]=C_h_intern(&lf[241],1,"\052");
lf[242]=C_h_intern(&lf[242],14,"\004coreprimitive");
lf[243]=C_h_intern(&lf[243],11,"\004coreinline");
lf[244]=C_h_intern(&lf[244],13,"\004corecallunit");
lf[245]=C_h_intern(&lf[245],9,"\004coreproc");
lf[246]=C_h_intern(&lf[246],4,"set!");
lf[247]=C_h_intern(&lf[247],9,"\004coreset!");
lf[248]=C_h_intern(&lf[248],29,"\004coreforeign-callback-wrapper");
lf[249]=C_h_intern(&lf[249],5,"sixth");
lf[250]=C_h_intern(&lf[250],5,"fifth");
lf[251]=C_h_intern(&lf[251],20,"\004coreinline_allocate");
lf[252]=C_h_intern(&lf[252],8,"\004coreapp");
lf[253]=C_h_intern(&lf[253],9,"\004corecall");
lf[254]=C_h_intern(&lf[254],28,"\003syssymbol->qualified-string");
lf[255]=C_h_intern(&lf[255],7,"\003sysget");
lf[256]=C_h_intern(&lf[256],34,"\010compileralways-bound-to-procedure");
lf[257]=C_h_intern(&lf[257],15,"\004coreinline_ref");
lf[258]=C_h_intern(&lf[258],18,"\004coreinline_update");
lf[259]=C_h_intern(&lf[259],19,"\004coreinline_loc_ref");
lf[260]=C_h_intern(&lf[260],22,"\004coreinline_loc_update");
lf[261]=C_h_intern(&lf[261],1,"o");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\033eliminated procedure checks");
lf[263]=C_h_intern(&lf[263],30,"\010compilerbuild-expression-tree");
lf[264]=C_h_intern(&lf[264],12,"\004coreclosure");
lf[265]=C_h_intern(&lf[265],4,"last");
lf[266]=C_h_intern(&lf[266],7,"butlast");
lf[267]=C_h_intern(&lf[267],3,"the");
lf[268]=C_h_intern(&lf[268],15,"\004corethe/result");
lf[269]=C_h_intern(&lf[269],17,"compiler-typecase");
lf[270]=C_h_intern(&lf[270],5,"cons\052");
lf[271]=C_h_intern(&lf[271],9,"\004corebind");
lf[272]=C_h_intern(&lf[272],10,"\004coreunbox");
lf[273]=C_h_intern(&lf[273],16,"\004corelet_unboxed");
lf[274]=C_h_intern(&lf[274],8,"\004coreref");
lf[275]=C_h_intern(&lf[275],11,"\004coreupdate");
lf[276]=C_h_intern(&lf[276],13,"\004coreupdate_i");
lf[277]=C_h_intern(&lf[277],8,"\004corebox");
lf[278]=C_h_intern(&lf[278],9,"\004corecond");
lf[279]=C_h_intern(&lf[279],21,"\010compilerfold-boolean");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_and\376\377\016");
lf[281]=C_h_intern(&lf[281],31,"\010compilerinline-lambda-bindings");
lf[282]=C_h_intern(&lf[282],8,"split-at");
lf[283]=C_h_intern(&lf[283],10,"fold-right");
lf[284]=C_h_intern(&lf[284],4,"take");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[286]=C_h_intern(&lf[286],34,"\010compilercopy-node-tree-and-rename");
lf[287]=C_h_intern(&lf[287],9,"alist-ref");
lf[288]=C_h_intern(&lf[288],16,"inline-transient");
lf[289]=C_h_intern(&lf[289],1,"f");
lf[290]=C_h_intern(&lf[290],18,"\010compilertree-copy");
lf[291]=C_h_intern(&lf[291],19,"\010compilercopy-node!");
lf[292]=C_h_intern(&lf[292],20,"\010compilernode->sexpr");
lf[293]=C_h_intern(&lf[293],20,"\010compilersexpr->node");
lf[294]=C_h_intern(&lf[294],32,"\010compileremit-global-inline-file");
lf[295]=C_h_intern(&lf[295],5,"print");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[297]=C_h_intern(&lf[297],1,"i");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\0001the following procedures can be globally inlined:");
lf[299]=C_h_intern(&lf[299],12,"delete-file\052");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\015; END OF FILE");
lf[301]=C_h_intern(&lf[301],2,"pp");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\027; GENERATED BY CHICKEN ");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\006 FROM ");
lf[304]=C_h_intern(&lf[304],24,"\010compilersource-filename");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[306]=C_h_intern(&lf[306],15,"chicken-version");
lf[307]=C_h_intern(&lf[307],19,"with-output-to-file");
lf[308]=C_h_intern(&lf[308],3,"yes");
lf[309]=C_h_intern(&lf[309],2,"no");
lf[310]=C_h_intern(&lf[310],24,"\010compilerinline-max-size");
lf[311]=C_h_intern(&lf[311],15,"\010compilerinline");
lf[312]=C_h_intern(&lf[312],22,"\010compilerinline-global");
lf[313]=C_h_intern(&lf[313],26,"\010compilervariable-visible\077");
lf[314]=C_h_intern(&lf[314],25,"\010compilerload-inline-file");
lf[315]=C_h_intern(&lf[315],20,"with-input-from-file");
lf[316]=C_h_intern(&lf[316],19,"\010compilermatch-node");
lf[317]=C_h_intern(&lf[317],1,"a");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\007matched");
lf[319]=C_h_intern(&lf[319],37,"\010compilerexpression-has-side-effects\077");
lf[320]=C_h_intern(&lf[320],24,"foreign-callback-stub-id");
lf[321]=C_h_intern(&lf[321],4,"find");
lf[322]=C_h_intern(&lf[322],22,"foreign-callback-stubs");
lf[323]=C_h_intern(&lf[323],28,"\010compilersimple-lambda-node\077");
lf[324]=C_h_intern(&lf[324],31,"\010compilerdump-undefined-globals");
lf[325]=C_h_intern(&lf[325],8,"keyword\077");
lf[326]=C_h_intern(&lf[326],29,"\010compilerdump-defined-globals");
lf[327]=C_h_intern(&lf[327],25,"\010compilerdump-global-refs");
lf[328]=C_h_intern(&lf[328],28,"\003systoplevel-definition-hook");
lf[329]=C_h_intern(&lf[329],22,"\010compilerhide-variable");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\042hiding nonexported module bindings");
lf[331]=C_h_intern(&lf[331],36,"\010compilercompute-database-statistics");
lf[332]=C_h_intern(&lf[332],29,"\010compilercurrent-program-size");
lf[333]=C_h_intern(&lf[333],30,"\010compileroriginal-program-size");
lf[334]=C_h_intern(&lf[334],33,"\010compilerprint-program-statistics");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\027;   database entries: \011");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known call sites: \011");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\027;   global variables: \011");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known procedures: \011");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\042;   variables with known values: \011");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\032 \011original program size: \011");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\023;   program size: \011");
lf[342]=C_h_intern(&lf[342],1,"s");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\023program statistics:");
lf[344]=C_h_intern(&lf[344],35,"\010compilerpprint-expressions-to-file");
lf[345]=C_h_intern(&lf[345],17,"close-output-port");
lf[346]=C_h_intern(&lf[346],12,"pretty-print");
lf[347]=C_h_intern(&lf[347],19,"with-output-to-port");
lf[348]=C_h_intern(&lf[348],16,"open-output-file");
lf[349]=C_h_intern(&lf[349],27,"\010compilerforeign-type-check");
lf[350]=C_h_intern(&lf[350],4,"char");
lf[351]=C_h_intern(&lf[351],13,"unsigned-char");
lf[352]=C_h_intern(&lf[352],6,"unsafe");
lf[353]=C_h_intern(&lf[353],25,"\003sysforeign-char-argument");
lf[354]=C_h_intern(&lf[354],3,"int");
lf[355]=C_h_intern(&lf[355],27,"\003sysforeign-fixnum-argument");
lf[356]=C_h_intern(&lf[356],5,"float");
lf[357]=C_h_intern(&lf[357],27,"\003sysforeign-flonum-argument");
lf[358]=C_h_intern(&lf[358],4,"blob");
lf[359]=C_h_intern(&lf[359],14,"scheme-pointer");
lf[360]=C_h_intern(&lf[360],26,"\003sysforeign-block-argument");
lf[361]=C_h_intern(&lf[361],22,"nonnull-scheme-pointer");
lf[362]=C_h_intern(&lf[362],12,"nonnull-blob");
lf[363]=C_h_intern(&lf[363],14,"pointer-vector");
lf[364]=C_h_intern(&lf[364],35,"\003sysforeign-struct-wrapper-argument");
lf[365]=C_h_intern(&lf[365],22,"nonnull-pointer-vector");
lf[366]=C_h_intern(&lf[366],8,"u8vector");
lf[367]=C_h_intern(&lf[367],16,"nonnull-u8vector");
lf[368]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-u8vector\376\001\000\000\010u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u16vector\376\001\000\000"
"\011u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-s8vector\376\001\000\000\010s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s16"
"vector\376\001\000\000\011s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u32vector\376\001\000\000\011u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021nonnull-s32vector\376\001\000\000\011s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f32vector\376\001\000\000\011f32vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f64vector\376\001\000\000\011f64vector\376\377\016");
lf[369]=C_h_intern(&lf[369],7,"integer");
lf[370]=C_h_intern(&lf[370],28,"\003sysforeign-integer-argument");
lf[371]=C_h_intern(&lf[371],9,"integer64");
lf[372]=C_h_intern(&lf[372],30,"\003sysforeign-integer64-argument");
lf[373]=C_h_intern(&lf[373],16,"unsigned-integer");
lf[374]=C_h_intern(&lf[374],37,"\003sysforeign-unsigned-integer-argument");
lf[375]=C_h_intern(&lf[375],18,"unsigned-integer64");
lf[376]=C_h_intern(&lf[376],39,"\003sysforeign-unsigned-integer64-argument");
lf[377]=C_h_intern(&lf[377],9,"c-pointer");
lf[378]=C_h_intern(&lf[378],28,"\003sysforeign-pointer-argument");
lf[379]=C_h_intern(&lf[379],17,"nonnull-c-pointer");
lf[380]=C_h_intern(&lf[380],8,"c-string");
lf[381]=C_h_intern(&lf[381],17,"\003sysmake-c-string");
lf[382]=C_h_intern(&lf[382],27,"\003sysforeign-string-argument");
lf[383]=C_h_intern(&lf[383],16,"nonnull-c-string");
lf[384]=C_h_intern(&lf[384],6,"symbol");
lf[385]=C_h_intern(&lf[385],18,"\003syssymbol->string");
lf[386]=C_h_intern(&lf[386],3,"ref");
lf[387]=C_h_intern(&lf[387],8,"instance");
lf[388]=C_h_intern(&lf[388],12,"instance-ref");
lf[389]=C_h_intern(&lf[389],4,"this");
lf[390]=C_h_intern(&lf[390],8,"slot-ref");
lf[391]=C_h_intern(&lf[391],16,"nonnull-instance");
lf[392]=C_h_intern(&lf[392],5,"const");
lf[393]=C_h_intern(&lf[393],4,"enum");
lf[394]=C_h_intern(&lf[394],15,"nonnull-pointer");
lf[395]=C_h_intern(&lf[395],7,"pointer");
lf[396]=C_h_intern(&lf[396],8,"function");
lf[397]=C_h_intern(&lf[397],27,"\010compilerforeign-type-table");
lf[398]=C_h_intern(&lf[398],17,"nonnull-c-string\052");
lf[399]=C_h_intern(&lf[399],26,"nonnull-unsigned-c-string\052");
lf[400]=C_h_intern(&lf[400],9,"c-string\052");
lf[401]=C_h_intern(&lf[401],17,"unsigned-c-string");
lf[402]=C_h_intern(&lf[402],18,"unsigned-c-string\052");
lf[403]=C_h_intern(&lf[403],13,"c-string-list");
lf[404]=C_h_intern(&lf[404],14,"c-string-list\052");
lf[405]=C_h_intern(&lf[405],18,"unsigned-integer32");
lf[406]=C_h_intern(&lf[406],13,"unsigned-long");
lf[407]=C_h_intern(&lf[407],4,"long");
lf[408]=C_h_intern(&lf[408],6,"size_t");
lf[409]=C_h_intern(&lf[409],9,"integer32");
lf[410]=C_h_intern(&lf[410],17,"nonnull-u16vector");
lf[411]=C_h_intern(&lf[411],16,"nonnull-s8vector");
lf[412]=C_h_intern(&lf[412],17,"nonnull-s16vector");
lf[413]=C_h_intern(&lf[413],17,"nonnull-u32vector");
lf[414]=C_h_intern(&lf[414],17,"nonnull-s32vector");
lf[415]=C_h_intern(&lf[415],17,"nonnull-f32vector");
lf[416]=C_h_intern(&lf[416],17,"nonnull-f64vector");
lf[417]=C_h_intern(&lf[417],9,"u16vector");
lf[418]=C_h_intern(&lf[418],8,"s8vector");
lf[419]=C_h_intern(&lf[419],9,"s16vector");
lf[420]=C_h_intern(&lf[420],9,"u32vector");
lf[421]=C_h_intern(&lf[421],9,"s32vector");
lf[422]=C_h_intern(&lf[422],9,"f32vector");
lf[423]=C_h_intern(&lf[423],9,"f64vector");
lf[424]=C_h_intern(&lf[424],6,"double");
lf[425]=C_h_intern(&lf[425],6,"number");
lf[426]=C_h_intern(&lf[426],12,"unsigned-int");
lf[427]=C_h_intern(&lf[427],5,"short");
lf[428]=C_h_intern(&lf[428],14,"unsigned-short");
lf[429]=C_h_intern(&lf[429],4,"byte");
lf[430]=C_h_intern(&lf[430],13,"unsigned-byte");
lf[431]=C_h_intern(&lf[431],5,"int32");
lf[432]=C_h_intern(&lf[432],14,"unsigned-int32");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[434]=C_h_intern(&lf[434],36,"\010compilerforeign-type-convert-result");
lf[435]=C_h_intern(&lf[435],38,"\010compilerforeign-type-convert-argument");
lf[436]=C_h_intern(&lf[436],27,"\010compilerfinal-foreign-type");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[438]=C_h_intern(&lf[438],37,"\010compilerestimate-foreign-result-size");
lf[439]=C_h_intern(&lf[439],4,"bool");
lf[440]=C_h_intern(&lf[440],4,"void");
lf[441]=C_h_intern(&lf[441],13,"scheme-object");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[443]=C_h_intern(&lf[443],46,"\010compilerestimate-foreign-result-location-size");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\0005cannot compute size of location for foreign type `~S\047");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[446]=C_h_intern(&lf[446],30,"\010compilerfinish-foreign-result");
lf[447]=C_h_intern(&lf[447],17,"\003syspeek-c-string");
lf[448]=C_h_intern(&lf[448],25,"\003syspeek-nonnull-c-string");
lf[449]=C_h_intern(&lf[449],26,"\003syspeek-and-free-c-string");
lf[450]=C_h_intern(&lf[450],34,"\003syspeek-and-free-nonnull-c-string");
lf[451]=C_h_intern(&lf[451],17,"\003sysintern-symbol");
lf[452]=C_h_intern(&lf[452],22,"\003syspeek-c-string-list");
lf[453]=C_h_intern(&lf[453],31,"\003syspeek-and-free-c-string-list");
lf[454]=C_h_intern(&lf[454],17,"\003sysnull-pointer\077");
lf[455]=C_h_intern(&lf[455],3,"not");
lf[456]=C_h_intern(&lf[456],4,"make");
lf[457]=C_h_intern(&lf[457],3,"and");
lf[458]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010c-string\376\003\000\000\002\376\001\000\000\011c-string\052\376\003\000\000\002\376\001\000\000\021unsigned-c-string\376\003\000\000\002\376\001\000\000\022unsign"
"ed-c-string\052\376\003\000\000\002\376\001\000\000\020nonnull-c-string\376\003\000\000\002\376\001\000\000\021nonnull-c-string\052\376\003\000\000\002\376\001\000\000\030nonnu"
"ll-unsigned-string\052\376\377\016");
lf[459]=C_h_intern(&lf[459],16,"\003sysstrip-syntax");
lf[460]=C_h_intern(&lf[460],36,"\010compilerforeign-type->scrutiny-type");
lf[461]=C_h_intern(&lf[461],3,"arg");
lf[462]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\004blob\376\377\016");
lf[463]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\016pointer-vector\376\377\016");
lf[464]=C_h_intern(&lf[464],6,"struct");
lf[465]=C_h_intern(&lf[465],2,"or");
lf[466]=C_h_intern(&lf[466],7,"boolean");
lf[467]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010u8vector\376\377\016");
lf[468]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010s8vector\376\377\016");
lf[469]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u16vector\376\377\016");
lf[470]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s16vector\376\377\016");
lf[471]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u32vector\376\377\016");
lf[472]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s32vector\376\377\016");
lf[473]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f32vector\376\377\016");
lf[474]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016");
lf[475]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016");
lf[476]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[477]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007list-of\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[478]=C_h_intern(&lf[478],6,"string");
lf[479]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016");
lf[480]=C_h_intern(&lf[480],28,"\010compilerscan-used-variables");
lf[481]=C_h_intern(&lf[481],28,"\010compilerscan-free-variables");
lf[482]=C_h_intern(&lf[482],11,"lset-adjoin");
lf[483]=C_h_intern(&lf[483],23,"\010compilerchop-separator");
lf[484]=C_h_intern(&lf[484],9,"substring");
lf[485]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[486]=C_h_intern(&lf[486],23,"\010compilerchop-extension");
lf[487]=C_h_intern(&lf[487],36,"\010compilermake-block-variable-literal");
lf[488]=C_h_intern(&lf[488],22,"block-variable-literal");
lf[489]=C_h_intern(&lf[489],32,"\010compilerblock-variable-literal\077");
lf[490]=C_h_intern(&lf[490],36,"\010compilerblock-variable-literal-name");
lf[491]=C_h_intern(&lf[491],27,"block-variable-literal-name");
lf[492]=C_h_intern(&lf[492],25,"\010compilermake-random-name");
lf[493]=C_h_intern(&lf[493],6,"random");
lf[494]=C_h_intern(&lf[494],15,"current-seconds");
lf[495]=C_h_intern(&lf[495],23,"\010compilerset-real-name!");
lf[496]=C_h_intern(&lf[496],24,"\010compilerreal-name-table");
lf[497]=C_h_intern(&lf[497],19,"real-name-max-depth");
lf[498]=C_h_intern(&lf[498],18,"string-intersperse");
lf[499]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[503]=C_h_intern(&lf[503],19,"\010compilerreal-name2");
lf[504]=C_h_intern(&lf[504],32,"\010compilerdisplay-real-name-table");
lf[505]=C_h_intern(&lf[505],28,"\010compilersource-info->string");
lf[506]=C_h_intern(&lf[506],4,"conc");
lf[507]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[509]=C_h_intern(&lf[509],11,"make-string");
lf[510]=C_h_intern(&lf[510],3,"max");
lf[511]=C_h_intern(&lf[511],26,"\010compilersource-info->line");
lf[512]=C_h_intern(&lf[512],18,"\010compilercall-info");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[515]=C_h_intern(&lf[515],27,"\010compilerconstant-form-eval");
lf[516]=C_h_intern(&lf[516],22,"get-condition-property");
lf[517]=C_h_intern(&lf[517],3,"exn");
lf[518]=C_h_intern(&lf[518],7,"message");
lf[519]=C_decode_literal(C_heaptop,"\376B\000\000\032folded constant expression");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000Dattempt to constant-fold call to procedure that has multiple results");
lf[521]=C_h_intern(&lf[521],8,"\003syslist");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000.attempt to constant-fold call to non-procedure");
lf[523]=C_h_intern(&lf[523],19,"\010compilerdump-nodes");
lf[524]=C_h_intern(&lf[524],19,"\003syswrite-char/port");
lf[525]=C_h_intern(&lf[525],23,"\010compilerread-info-hook");
lf[526]=C_h_intern(&lf[526],27,"\003syscurrent-source-filename");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[528]=C_h_intern(&lf[528],9,"list-info");
lf[529]=C_h_intern(&lf[529],25,"\010compilerread/source-info");
lf[530]=C_h_intern(&lf[530],8,"\003sysread");
lf[531]=C_h_intern(&lf[531],18,"\003sysuser-read-hook");
lf[532]=C_h_intern(&lf[532],15,"foreign-declare");
lf[533]=C_h_intern(&lf[533],7,"declare");
lf[534]=C_h_intern(&lf[534],34,"\010compilerscan-sharp-greater-string");
lf[535]=C_h_intern(&lf[535],18,"\003sysread-char/port");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000&unexpected end of `#> ... <#\047 sequence");
lf[537]=C_h_intern(&lf[537],6,"hidden");
lf[538]=C_h_intern(&lf[538],19,"\010compilervisibility");
lf[539]=C_h_intern(&lf[539],24,"\010compilerexport-variable");
lf[540]=C_h_intern(&lf[540],8,"exported");
lf[541]=C_h_intern(&lf[541],26,"\010compilerblock-compilation");
lf[542]=C_h_intern(&lf[542],22,"\010compilermark-variable");
lf[543]=C_h_intern(&lf[543],22,"\010compilervariable-mark");
lf[544]=C_h_intern(&lf[544],19,"\010compilerintrinsic\077");
lf[545]=C_h_intern(&lf[545],9,"foldable\077");
lf[546]=C_h_intern(&lf[546],33,"\010compilerload-identifier-database");
lf[547]=C_h_intern(&lf[547],7,"\004coredb");
lf[548]=C_h_intern(&lf[548],9,"read-file");
lf[549]=C_h_intern(&lf[549],1,"p");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\034loading identifier database ");
lf[552]=C_h_intern(&lf[552],13,"make-pathname");
lf[553]=C_h_intern(&lf[553],15,"repository-path");
lf[554]=C_h_intern(&lf[554],22,"\010compilerprint-version");
lf[555]=C_h_intern(&lf[555],6,"print\052");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2015, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[557]=C_h_intern(&lf[557],20,"\010compilerprint-usage");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\030\033Usage: chicken FILENAME OPTION ...\012\012  `chicken\047 is the CHICKEN compiler.\012  "
"\012  FILENAME should be a complete source file name with extension, or \042-\042 for\012  s"
"tandard input. OPTION may be one of the following:\012\012  General options:\012\012    -hel"
"p                        display this text and exit\012    -version                "
"     display compiler version and exit\012    -release                     print re"
"lease number and exit\012    -verbose                     display information on co"
"mpilation progress\012\012  File and pathname options:\012\012    -output-file FILENAME     "
"   specifies output-filename, default is \047out.c\047\012    -include-path PATHNAME     "
"  specifies alternative path for included files\012    -to-stdout                  "
" write compiled file to stdout instead of file\012\012  Language options:\012\012    -featur"
"e SYMBOL              register feature identifier\012    -no-feature SYMBOL        "
"   disable built-in feature identifier\012\012  Syntax related options:\012\012    -case-ins"
"ensitive            don\047t preserve case of read symbols\012    -keyword-style STYLE"
"         allow alternative keyword syntax\012                                  (pre"
"fix, suffix or none)\012    -no-parentheses-synonyms     disables list delimiter sy"
"nonyms\012    -no-symbol-escape            disables support for escaped symbols\012   "
" -r5rs-syntax                 disables the CHICKEN extensions to\012               "
"                   R5RS syntax\012    -compile-syntax              macros are made "
"available at run-time\012    -emit-import-library MODULE  write compile-time module"
" information into\012                                  separate file\012    -emit-all-"
"import-libraries   emit import-libraries for all defined modules\012    -no-module-"
"registration      do not generate module registration code\012    -no-compiler-synt"
"ax          disable expansion of compiler-macros\012    -module                    "
"  wrap compiled code into implicit module\012\012  Translation options:\012\012    -explicit"
"-use                do not use units \047library\047 and \047eval\047 by\012                   "
"               default\012    -check-syntax                stop compilation after m"
"acro-expansion\012    -analyze-only                stop compilation after first ana"
"lysis pass\012\012  Debugging options:\012\012    -no-warnings                 disable warni"
"ngs\012    -debug-level NUMBER          set level of available debugging informatio"
"n\012    -no-trace                    disable tracing information\012    -profile     "
"                executable emits profiling information \012    -profile-name FILENA"
"ME       name of the generated profile information file\012    -accumulate-profile "
"         executable emits profiling information in\012                             "
"     append mode\012    -no-lambda-info              omit additional procedure-info"
"rmation\012    -types FILENAME              load additional type database\012    -emit"
"-type-file FILENAME     write type-declaration information into file\012\012  Optimiza"
"tion options:\012\012    -optimize-level NUMBER       enable certain sets of optimizat"
"ion options\012    -optimize-leaf-routines      enable leaf routine optimization\012  "
"  -no-usual-integrations       standard procedures may be redefined\012    -unsafe "
"                     disable all safety checks\012    -local                       "
"assume globals are only modified in current\012                                  fi"
"le\012    -block                       enable block-compilation\012    -disable-interr"
"upts          disable interrupts in compiled code\012    -fixnum-arithmetic        "
"   assume all numbers are fixnums\012    -disable-stack-overflow-checks  disables d"
"etection of stack-overflows\012    -inline                      enable inlining\012   "
" -inline-limit LIMIT          set inlining threshold\012    -inline-global         "
"      enable cross-module inlining\012    -specialize                  perform type"
"-based specialization of primitive calls\012    -emit-inline-file FILENAME   genera"
"te file with globally inlinable\012                                  procedures (im"
"plies -inline -local)\012    -consult-inline-file FILENAME  explicitly load inline "
"file\012    -no-argc-checks              disable argument count checks\012    -no-boun"
"d-checks             disable bound variable checks\012    -no-procedure-checks     "
"    disable procedure call checks\012    -no-procedure-checks-for-usual-bindings\012  "
"                                 disable procedure call checks only for usual\012  "
"                                 bindings\012    -no-procedure-checks-for-toplevel-"
"bindings\012                                   disable procedure call checks for to"
"plevel\012                                   bindings\012    -strict-types            "
"    assume variable do not change their type\012    -clustering                  co"
"mbine groups of local procedures into dispatch\012                                 "
"  loop\012    -lfa2                        perform additional lightweight flow-anal"
"ysis pass\012\012  Configuration options:\012\012    -unit NAME                   compile fi"
"le as a library unit\012    -uses NAME                   declare library unit as us"
"ed.\012    -heap-size NUMBER            specifies heap-size of compiled executable\012"
"    -nursery NUMBER  -stack-size NUMBER\012                                 specifi"
"es nursery size of compiled executable\012    -extend FILENAME             load fil"
"e before compilation commences\012    -prelude EXPRESSION          add expression t"
"o front of source file\012    -postlude EXPRESSION         add expression to end of"
" source file\012    -prologue FILENAME           include file before main source fi"
"le\012    -epilogue FILENAME           include file after main source file\012    -dyn"
"amic                     compile as dynamically loadable code\012    -require-exten"
"sion NAME      require and import extension NAME\012\012  Obscure options:\012\012    -debug"
" MODES                 display debugging output for the given modes\012    -raw    "
"                     do not generate implicit init- and exit code               "
"            \012    -emit-external-prototypes-first\012                               "
"  emit prototypes for callbacks before foreign\012                                 "
" declarations\012    -ignore-repository           do not refer to repository for ex"
"tensions\012    -setup-mode                  prefer the current directory when loca"
"ting extensions\012");
lf[559]=C_h_intern(&lf[559],28,"\010compilerprint-debug-options");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\007\026\012Available debugging options:\012\012     a          show node-matching during si"
"mplification\012     b          show breakdown of time needed for each compiler pas"
"s\012     c          print every expression before macro-expansion\012     d          "
"lists all assigned global variables\012     e          show information about speci"
"alizations\012     h          you already figured that out\012     i          show inf"
"ormation about inlining\012     m          show GC statistics during compilation\012  "
"   n          print the line-number database \012     o          show performed opt"
"imizations\012     p          display information about what the compiler is curren"
"tly doing\012     r          show invocation parameters\012     s          show progra"
"m-size information and other statistics\012     t          show time needed for com"
"pilation\012     u          lists all unassigned global variable references\012     x "
"         display information about experimental features\012     D          when pr"
"inting nodes, use node-tree output\012     I          show inferred type informatio"
"n for unexported globals\012     M          show syntax-/runtime-requirements\012     "
"N          show the real-name mapping table\012     P          show expressions aft"
"er specialization\012     S          show applications of compiler syntax\012     T   "
"       show expressions after converting to node tree\012     1          show sourc"
"e expressions\012     2          show canonicalized expressions\012     3          sho"
"w expressions converted into CPS\012     4          show database after each analys"
"is pass\012     5          show expressions after each optimization pass\012     6    "
"      show expressions after each inlining pass\012     7          show expressions"
" after complete optimization\012     8          show database after final analysis\012"
"     9          show expressions after closure conversion\012\012");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\007#<node ");
lf[562]=C_h_intern(&lf[562],27,"\003sysregister-record-printer");
lf[563]=C_h_intern(&lf[563],27,"condition-property-accessor");
lf[564]=C_h_intern(&lf[564],19,"condition-predicate");
C_register_lf2(lf,565,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k9926 in k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9928(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9928,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9871,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[7],lf[162]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9881,a[2]=((C_word*)t0)[8],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9883,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9883(t15,t11,((C_word*)t0)[7]);}

/* k5110 in k5106 in loop in map-llist in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5112,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9857,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm:747: gensym */
t4=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[289]);}

/* k9910 in map-loop2001 in k9926 in k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9912(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9912,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9883(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9883(t6,((C_word*)t0)[5],t5);}}

/* k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9854(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9854,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[8];
t9=C_i_check_list_2(t2,lf[162]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9946,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9948,a[2]=t7,a[3]=t12,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_9948(t14,t10,t8,t2);}

/* ##compiler#check-signature in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5120,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5123,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5144,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5144(t9,t1,t3,t4);}

/* err in check-signature in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5123,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5131,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:138: real-name */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7908,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7785(t6,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,t2);}

/* k9959 in map-loop1964 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9961(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_9948(t5,((C_word*)t0)[7],t3,t4);}

/* k7973 in map-loop1198 in k7933 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7975(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7975,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7946(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7946(t6,((C_word*)t0)[5],t5);}}

/* ##compiler#close-checked-input-file in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5589,4,t0,t1,t2,t3);}
if(C_truep(C_i_string_equal_p(t3,lf[89]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* support.scm:226: close-input-port */
t4=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* map-loop2001 in k9926 in k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9883(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9883,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9912,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:750: g2007 */
t5=((C_word*)t0)[5];
f_9871(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9879 in k9926 in k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9881,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[134],((C_word*)t0)[3],t1));}

/* g2007 in k9926 in k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9871(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9871,NULL,3,t0,t1,t2);}
/* support.scm:750: g2024 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9673(t3,t1,t2,((C_word*)t0)[3]);}

/* k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15263,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15160,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15165,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1485: call-with-current-continuation */
t6=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* map-loop3662 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_15265(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_15265,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[98],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1934 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9997,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10026,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:739: g1940 */
t5=((C_word*)t0)[5];
f_9841(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6576 in get-list in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6578(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* ##compiler#get-list in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6574,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6578,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:411: get */
t6=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t2,t3,t4);}

/* ##compiler#print-debug-options in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15904,2,t0,t1);}
/* support.scm:1757: display */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,lf[560]);}

/* k10473 in for-each-loop2209 in k10455 in k10444 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10465(t3,((C_word*)t0)[4],t2);}

/* a15909 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_15910,4,t0,t1,t2,t3);}
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15917,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:511: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[561],C_SCHEME_FALSE,t4);}

/* k15915 in a15909 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(1));
/* support.scm:511: ##sys#print */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,t4,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10488 in a10441 in k10377 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:802: print */
t2=*((C_word*)lf[295]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[302],t1,lf[303],*((C_word*)lf[304]+1),lf[305]);}

/* a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10492,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10499,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* support.scm:781: variable-visible? */
t5=*((C_word*)lf[313]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10497 in a10491 in emit-global-inline-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10499,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(lf[174],((C_word*)t0)[2]);
t3=t2;
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10635,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=((C_word*)t0)[4];
/* tweaks.scm:57: ##sys#get */
t6=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,lf[312]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k12022 in k11985 in k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_12024(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12024,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1105: gensym */
t3=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[387]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[388]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1111: gensym */
t5=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[359]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1117: gensym */
t6=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[361]);
if(C_truep(t5)){
if(C_truep(*((C_word*)lf[352]+1))){
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,2,lf[360],((C_word*)t0)[2]));}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[391]);
if(C_truep(t6)){
t7=C_a_i_list(&a,2,lf[98],lf[389]);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[390],((C_word*)t0)[2],t7));}
else{
t7=C_eqp(((C_word*)t0)[4],lf[392]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:1130: repeat */
t9=((C_word*)((C_word*)t0)[6])[1];
f_11570(t9,((C_word*)t0)[3],t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[393]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(*((C_word*)lf[352]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[370],((C_word*)t0)[2])));}
else{
t9=C_eqp(((C_word*)t0)[4],lf[394]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?C_a_i_list(&a,2,lf[378],((C_word*)t0)[2]):((C_word*)t0)[2]));}
else{
t10=C_eqp(((C_word*)t0)[4],lf[379]);
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?C_a_i_list(&a,2,lf[378],((C_word*)t0)[2]):((C_word*)t0)[2]));}}}}}}}}}

/* k12025 in k12022 in k11985 in k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_12027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12027,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[378],t1);
t5=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[226],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[110],t3,t6));}

/* k4863 in k4860 in k4857 in g102 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:85: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k4860 in k4857 in g102 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:85: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k9846 in k9843 in g1940 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* g1940 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9841,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9845,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:740: gensym */
t4=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k9843 in g1940 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9845,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9848,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:741: put! */
t4=*((C_word*)lf[153]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4],lf[288],C_SCHEME_TRUE);}

/* a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9839,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=t2;
t11=C_i_check_list_2(t10,lf[162]);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9854,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,a[7]=t4,a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9997,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_9997(t16,t12,t10);}

/* k10750 in match1 in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:842: match1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10730(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k11915 in k11900 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11917(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11917,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[226],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[110],((C_word*)t0)[4],t3));}

/* matchn in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10769(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_10769,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:847: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10696(t4,t1,t3,t2);}
else{
t4=t2;
t5=C_slot(t4,C_fix(1));
t6=C_i_car(t3);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10791,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=C_i_cadr(t3);
/* support.scm:849: match1 */
t12=((C_word*)((C_word*)t0)[4])[1];
f_10730(t12,t8,t10,t11);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}

/* map-loop1514 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_8701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8701,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8730,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:628: g1520 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11900 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11902,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11917,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[352]+1))){
t7=t6;
f_11917(t7,C_a_i_list(&a,2,lf[381],t2));}
else{
t7=C_a_i_list(&a,2,lf[382],t2);
t8=t6;
f_11917(t8,C_a_i_list(&a,2,lf[381],t7));}}

/* k7515 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7517(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7517,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:535: warning */
t3=*((C_word*)lf[229]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[230],((C_word*)t0)[3]);}
else{
/* support.scm:531: qnode */
t2=*((C_word*)lf[223]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k9377 in map-loop1750 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9379(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9379,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9350(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9350(t6,((C_word*)t0)[5],t5);}}

/* k9944 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:744: append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* map-loop1964 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9948(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9948,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9961,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_9961(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_9961(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9934 in k9918 in k9855 in k9852 in a9838 in walk in k9663 in copy-node-tree-and-rename in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:748: build-lambda-list */
t2=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop1750 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9350(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9350,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9379,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:671: g1756 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7933 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7935(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7935,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)((C_word*)t0)[2])[1];
t8=((C_word*)t0)[3];
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_i_check_list_2(t10,lf[162]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7944,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7946,a[2]=t6,a[3]=t14,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7946(t16,t12,t10);}

/* k9328 in map-loop1724 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9330(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9330,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9301(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9301(t6,((C_word*)t0)[5],t5);}}

/* k14864 in k14847 in k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1406: ##sys#print */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k14860 in k14850 in k14847 in k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1406: ##sys#print */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a11406 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11407,2,t0,t1);}
/* support.scm:982: compute-database-statistics */
t2=*((C_word*)lf[331]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* ##compiler#print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11401,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11407,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11413,tmp=(C_word)a,a+=2,tmp);
/* support.scm:980: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* k8892 in map-loop1577 in k8792 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8894(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8894,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8865(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8865(t6,((C_word*)t0)[5],t5);}}

/* k12060 in k12022 in k11985 in k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_12062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[58],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12062,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[98],lf[389]);
t5=C_a_i_list(&a,3,lf[390],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t7=C_a_i_list(&a,4,lf[226],t1,t5,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[110],t3,t7));}

/* k14893 in resolve in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14895,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14901,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1429: ##sys#hash-table-ref */
t4=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[496]+1),t2);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* resolve in real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_14891(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14891,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14895,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1427: ##sys#hash-table-ref */
t4=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[496]+1),t2);}

/* map-llist in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5079,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5085,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5085(t7,t1,t3);}

/* ##compiler#real-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14888(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_14888r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_14888r(t0,t1,t2,t3);}}

static void C_ccall f_14888r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14891,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14907,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1432: resolve */
f_14891(t5,t2);}

/* ##compiler#set-real-name! in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14881,4,t0,t1,t2,t3);}
/* support.scm:1420: ##sys#hash-table-set! */
t4=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[496]+1),t2,t3);}

/* k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:984: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[340],C_SCHEME_FALSE,((C_word*)t0)[8]);}

/* k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:984: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[10],C_SCHEME_TRUE,((C_word*)t0)[8]);}

/* k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11420,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* support.scm:984: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[341],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#emit-syntax-trace-info in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5076,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_emit_syntax_trace_info(t2,t3,*((C_word*)lf[36]+1)));}

/* loop in llist-match? in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static C_word C_fcall f_6093(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(C_i_nullp(t2));}
else{
t3=C_i_symbolp(t1);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_nullp(t2))){
return(C_i_not_pair_p(t1));}
else{
t4=C_i_cdr(t1);
t5=C_i_cdr(t2);
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}}}

/* k15101 in call-info in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7590(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7590,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7594,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7596,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_i_check_list_2(t9,lf[162]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7613,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7623,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_7623(t15,t11,t9);}

/* g1133 in k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7596(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7596,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
/* support.scm:550: walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7399(3,t4,t1,t3);}

/* k7592 in k7588 in k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7594,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[212],lf[110],((C_word*)t0)[3],t1));}

/* a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_11413,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11420,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* support.scm:983: debugging */
t10=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,lf[342],lf[343]);}

/* a6069 in tmp24309 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6070,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k5039 in k5036 in k5033 in k5030 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:118: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k5042 in k5039 in k5036 in k5033 in k5030 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:118: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* ##compiler#block-variable-literal-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14823,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[488],lf[491]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* k7585 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7658(t6,t2,t1);}

/* k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:985: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[7]);}

/* k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* support.scm:985: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[8],C_SCHEME_TRUE,((C_word*)t0)[7]);}

/* k6079 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6081,2,t0,t1);}
/* tmp24309 */
t2=((C_word*)t0)[2];
f_6064(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k6521 in count! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6523,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6526,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=((C_word*)t0)[4];
t5=t3;
f_6526(t5,C_u_i_car(t4));}
else{
t4=t3;
f_6526(t4,C_fix(1));}}

/* k6524 in k6521 in count! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6526(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6526,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_assq(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_plus(&a,2,t3,t1);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(1),t4));}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1),t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(((C_word*)t0)[2],C_fix(1),t4));}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[5]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:408: ##sys#hash-table-set! */
t4=*((C_word*)lf[154]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[7],t3);}}

/* k14853 in k14850 in k14847 in k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14858,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1406: get-output-string */
t3=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k14850 in k14847 in k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14862,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1409: random */
t4=*((C_word*)lf[493]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(1000));}

/* k14856 in k14853 in k14850 in k14847 in k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1405: string->symbol */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11438,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:985: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[339],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}

/* k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* support.scm:984: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[8]);}

/* k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:984: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],C_SCHEME_TRUE,((C_word*)t0)[8]);}

/* k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15779,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15785,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15843,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1613: open-output-string */
t5=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15773,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15865,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1612: make-pathname */
t4=*((C_word*)lf[552]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#count! in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_6519r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6519r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6519r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6523,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:402: ##sys#hash-table-ref */
t7=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k14847 in k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14866,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1408: current-seconds */
t4=*((C_word*)lf[494]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k14844 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1406: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(45),((C_word*)t0)[4]);}

/* k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14840(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_14840,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[51]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14846,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14870,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* support.scm:1407: gensym */
t8=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=C_i_car(t6);
/* support.scm:1406: ##sys#print */
t9=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,t8,C_SCHEME_FALSE,t3);}}

/* ##compiler#llist-length in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6084,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_length(t2));}

/* ##compiler#llist-match? in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6087,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6093,tmp=(C_word)a,a+=2,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_6093(t2,t3));}

/* k15783 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1620: read-file */
t3=*((C_word*)lf[548]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7287 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6707(t3,t2);}

/* k11691 in k11676 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11693,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[226],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[110],((C_word*)t0)[4],t3));}

/* a13083 in estimate-foreign-result-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13084,2,t0,t1);}
/* support.scm:1195: quit */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[442],((C_word*)t0)[2]);}

/* k14868 in k14838 in make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1406: ##sys#print */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* a6054 in a6048 in tmp14308 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6055,3,t0,t1,t2);}
/* support.scm:312: read */
t3=*((C_word*)lf[118]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* ##compiler#posv in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5222,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5228,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5228(t7,t1,t3,C_fix(0));}

/* k15795 in for-each-loop3931 in k15811 in k15783 in k15777 in k15771 in load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1617: ##sys#put! */
t2=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[547],t1);}

/* loop in map-llist in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5085(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5085,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:132: proc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5108,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* support.scm:133: proc */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}}

/* k5057 in k5054 in k5051 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:119: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k11478 in k11472 in k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in ... */
static void C_ccall f_11480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:988: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k11484 in k11481 in k11478 in k11472 in k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in ... */
static void C_ccall f_11486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11486,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11492,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:989: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[335],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}

/* k11481 in k11478 in k11472 in k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in ... */
static void C_ccall f_11483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:988: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* tmp24309 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6064(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6064,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6070,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:301: k485 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k6061 in a6048 in tmp14308 in a6020 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:312: unfold */
t2=*((C_word*)lf[119]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],*((C_word*)lf[120]+1),*((C_word*)lf[121]+1),((C_word*)t0)[3],t1);}

/* ##compiler#mark-variable in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_15726r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_15726r(t0,t1,t2,t3,t4);}}

static void C_ccall f_15726r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* support.scm:1599: ##sys#put! */
t5=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* support.scm:1599: ##sys#put! */
t6=*((C_word*)lf[143]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* loop in posv in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5228(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5228,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_eqvp(((C_word*)t0)[2],t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:159: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* k5051 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:119: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* ##compiler#estimate-foreign-result-location-size in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_13090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13090,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13102,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13517,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1200: follow-without-loop */
t5=*((C_word*)lf[93]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}

/* k5054 in k5051 in k4981 in syntax-error-hook in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:119: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in ... */
static void C_ccall f_11471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:987: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15165,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15187,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1485: with-exception-handler */
t5=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k11472 in k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in ... */
static void C_ccall f_11474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11474,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:988: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[336],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}

/* k15158 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1485: g3694 */
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k13892 in k13817 in k13793 in foreign-type->scrutiny-type in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_13894(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13894,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[461]);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[464],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[465],lf[466],t4));}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[464],((C_word*)t0)[3]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[367]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[467]);}
else{
t3=C_eqp(((C_word*)t0)[5],lf[411]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[468]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[410]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[469]);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[412]);
if(C_truep(t5)){
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[470]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[413]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[471]);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[414]);
if(C_truep(t7)){
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[472]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[415]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[473]);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[416]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[474]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[369]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13969,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_13969(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[407]);
if(C_truep(t12)){
t13=t11;
f_13969(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[5],lf[408]);
if(C_truep(t13)){
t14=t11;
f_13969(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[409]);
if(C_truep(t14)){
t15=t11;
f_13969(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[405]);
if(C_truep(t15)){
t16=t11;
f_13969(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[371]);
if(C_truep(t16)){
t17=t11;
f_13969(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[375]);
t18=t11;
f_13969(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[5],lf[406])));}}}}}}}}}}}}}}}}

/* f_7291 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7291,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[212],t2,t3,t4));}

/* node? in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7297(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7297,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[212]));}

/* ##compiler#posq in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5188,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5194,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5194(t7,t1,t3,C_fix(0));}

/* a15176 in a15170 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15185,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1490: get-condition-property */
t3=*((C_word*)lf[516]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],lf[517],lf[518]);}

/* a15170 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15171(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15171,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1485: k3690 */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k11490 in k11484 in k11481 in k11478 in k11472 in k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in ... */
static void C_ccall f_11492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:989: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* ##compiler#make-random-name in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14832(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_14832r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_14832r(t0,t1,t2);}}

static void C_ccall f_14832r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14840,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1406: open-output-string */
t4=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k11493 in k11490 in k11484 in k11481 in k11478 in k11472 in k11469 in k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in ... */
static void C_ccall f_11495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:989: ##sys#write-char-0 */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k15183 in a15176 in a15170 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1490: k */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15241,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1485: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k7752 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7754,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[237],((C_word*)t0)[3],t2));}

/* a15192 in a15186 in a15164 in k15261 in k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15193,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=t2;
if(C_truep(C_i_closurep(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15206,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15232,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1494: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,*((C_word*)lf[521]+1));}
else{
/* support.scm:1500: bomb */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[522],((C_word*)t0)[4]);}}

/* ##compiler#load-identifier-database in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15769(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15769,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15773,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1611: repository-path */
t4=*((C_word*)lf[553]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* loop in k7906 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_7785(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7785,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_i_cadr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7829,a[2]=t6,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* support.scm:564: reverse */
t8=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t5=C_i_caar(t2);
t6=C_eqp(lf[239],t5);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7871,a[2]=t8,a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_a_i_cons(&a,2,lf[241],t3);
/* support.scm:570: reverse */
t11=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_i_caar(t2);
t10=C_a_i_cons(&a,2,t9,t3);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7892,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t8,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[3],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* support.scm:574: cadar */
t14=*((C_word*)lf[240]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t2);}}}

/* resolve in match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_10696(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10696,NULL,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10704,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:829: g2293 */
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_10704(t5,t4));}
else{
if(C_truep(C_i_memq(t2,((C_word*)t0)[3]))){
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,t3),((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_TRUE);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t2,t3));}}}

/* ##compiler#match-node in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_10693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10693,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10696,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10730,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10769,a[2]=t8,a[3]=t12,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10884,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:858: matchn */
t17=((C_word*)t12)[1];
f_10769(t17,t16,t2,t3);}

/* k7525 in k7518 in k7515 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* support.scm:531: qnode */
t3=*((C_word*)lf[223]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k11626 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11628,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[352]+1))?t1:C_a_i_list(&a,2,lf[360],t1));
t5=C_a_i_list(&a,2,lf[98],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[226],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[110],t3,t6));}

/* k7518 in k7515 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:537: truncate */
t3=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* ##compiler#constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_15133,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(t3,lf[162]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15154,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15300,a[2]=t8,a[3]=t12,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_15300(t14,t10,t3);}

/* ##compiler#variable-visible? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_15701,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15705,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1592: ##sys#get */
t4=*((C_word*)lf[255]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[538]);}

/* k15703 in variable-visible? in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,lf[537]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_eqp(t1,lf[540]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_TRUE:C_i_not(*((C_word*)lf[541]+1))));}}

/* k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11610(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11610,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(*((C_word*)lf[352]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[357],((C_word*)t0)[3])));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[358]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[359]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1024: gensym */
t5=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[361]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[362]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(*((C_word*)lf[352]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[360],((C_word*)t0)[3])));}
else{
t6=C_eqp(((C_word*)t0)[4],lf[363]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11678,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1036: gensym */
t8=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[365]);
if(C_truep(t7)){
if(C_truep(*((C_word*)lf[352]+1))){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[3]);}
else{
t8=C_a_i_list(&a,2,lf[98],lf[363]);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,3,lf[364],t8,((C_word*)t0)[3]));}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[366]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11733,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t8)){
t10=t9;
f_11733(t10,t8);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[417]);
if(C_truep(t10)){
t11=t9;
f_11733(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[418]);
if(C_truep(t11)){
t12=t9;
f_11733(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[419]);
if(C_truep(t12)){
t13=t9;
f_11733(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[420]);
if(C_truep(t13)){
t14=t9;
f_11733(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[421]);
if(C_truep(t14)){
t15=t9;
f_11733(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[422]);
t16=t9;
f_11733(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[4],lf[423])));}}}}}}}}}}}}

/* loop in posq in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5194(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5194,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_car(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:153: loop */
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* k6807 in k6770 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6809(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6809,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:491: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[168],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6846,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[170]);
t4=t2;
f_6846(t4,C_i_not(t3));}
else{
t3=t2;
f_6846(t3,C_SCHEME_FALSE);}}}

/* k15152 in constant-form-eval in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_15154(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_15154,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t2,lf[162]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15265,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_15265(t12,t8,t2);}

/* ##compiler#canonicalize-begin-body in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5902,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5908,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5908(t6,t1,t2);}

/* k5898 in k5860 in basic-literal? in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:280: every */
t2=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[104]+1),t1);}

/* g2781 in k11985 in k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11991(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11991,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1101: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1101: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k8917 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8919,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* loop in canonicalize-begin-body in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_5908(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5908,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[108]);}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_u_i_car(t4));}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_equalp(t5,lf[109]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5932,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_5932(t8,t6);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5963,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:294: constant? */
t9=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}}}}

/* k6813 in k6807 in k6770 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6815,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* support.scm:491: ##sys#print */
t7=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,((C_word*)t0)[3],t6,C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k5956 in k5930 in loop in canonicalize-begin-body in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5958(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5958,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list(&a,2,t1,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5948,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:298: loop */
t10=((C_word*)((C_word*)t0)[4])[1];
f_5908(t10,t7,t9);}

/* k9339 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9341,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k11985 in k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11987,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1099: g2781 */
t3=t2;
f_11991(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[386]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12024,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_12024(t6,t4);}
else{
t6=C_eqp(t3,lf[395]);
if(C_truep(t6)){
t7=t5;
f_12024(t7,t6);}
else{
t7=C_eqp(t3,lf[396]);
t8=t5;
f_12024(t8,(C_truep(t7)?t7:C_eqp(t3,lf[377])));}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}}

/* k6844 in k6807 in k6770 in k6723 in k6720 in a6711 in k6705 in display-analysis-database in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_6846(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6846,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:493: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[169],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}
else{
t2=((C_word*)t0)[3];
f_6728(2,t2,C_SCHEME_UNDEFINED);}}

/* k9346 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_9348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:671: append */
t2=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5961 in loop in canonicalize-begin-body in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5932(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5932(t2,C_i_equalp(((C_word*)t0)[3],lf[113]));}}

/* k11676 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11678,2,t0,t1);}
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11693,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[352]+1))){
t7=t6;
f_11693(t7,t2);}
else{
t7=C_a_i_list(&a,2,lf[98],lf[363]);
t8=t6;
f_11693(t8,C_a_i_list(&a,3,lf[364],t7,t2));}}

/* k11466 in k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_11468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:987: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[6],C_SCHEME_TRUE,((C_word*)t0)[5]);}

/* k11460 in k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11462,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:987: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[337],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}

/* a5995 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5996,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:301: k485 */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k11942 in k11897 in k11853 in k11826 in k11799 in k11773 in k11731 in k11608 in k11593 in repeat in a11563 in foreign-type-check in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11944(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11944,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[352]+1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[381],((C_word*)t0)[3]));}
else{
t2=C_a_i_list(&a,2,lf[382],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[381],t2));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[384]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[352]+1))){
t3=C_a_i_list(&a,2,lf[385],((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[381],t3));}
else{
t3=C_a_i_list(&a,2,lf[385],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[382],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[381],t4));}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11987,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* support.scm:1099: ##sys#hash-table-ref */
t4=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[397]+1),((C_word*)t0)[6]);}
else{
t4=t3;
f_11987(2,t4,C_SCHEME_FALSE);}}}}

/* a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5990,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:301: with-exception-handler */
t5=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k4892 in for-each-loop101 in k4877 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4884(t3,((C_word*)t0)[4],t2);}

/* k7718 in walk in build-node-graph in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_7720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7720,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[212],lf[236],((C_word*)t0)[3],t2));}

/* k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:986: ##sys#print */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k11457 in k11454 in k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:986: ##sys#write-char-0 */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[6]);}

/* map-loop1724 in k9224 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_9301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9301,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9330,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:670: g1730 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11448 in k11445 in k11442 in k11436 in k11433 in k11430 in k11427 in k11424 in k11418 in a11412 in print-program-statistics in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_11450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11450,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=*((C_word*)lf[13]+1);
t4=C_i_check_port_2(*((C_word*)lf[13]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:986: ##sys#print */
t6=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[338],C_SCHEME_FALSE,*((C_word*)lf[13]+1));}

/* k8728 in map-loop1514 in k8632 in walk in build-expression-tree in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_8730(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8730,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8701(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8701(t6,((C_word*)t0)[5],t5);}}

/* k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5977,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5980,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:302: condition-property-accessor */
t4=*((C_word*)lf[563]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[517],lf[518]);}

/* k4877 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_4879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4879,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4884,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4884(t5,((C_word*)t0)[3],t1);}

/* k6008 in a6001 in a5995 in a5989 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_6010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:305: quit */
t2=*((C_word*)lf[28]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[115],((C_word*)t0)[3],t1);}

/* a14642 in k14547 in walk in scan-free-variables in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_14643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_14643,5,t0,t1,t2,t3,t4);}
t5=C_i_car(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14655,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1367: append */
t8=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,((C_word*)t0)[4]);}

/* for-each-loop2548 in a11514 in k11502 in pprint-expressions-to-file in k7356 in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_11532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11532,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11542,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11521,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1000: pretty-print */
t7=*((C_word*)lf[346]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5983 in string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:301: g489 */
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5980(C_word c,C_word t0,C_word t1){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5980,2,t0,t1);}
t2=t1;
t3=C_mutate2((C_word*)lf[114]+1 /* (set! ##compiler#string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5981,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[125]+1 /* (set! ##compiler#decompose-lambda-list ...) */,*((C_word*)lf[126]+1));
t5=C_mutate2((C_word*)lf[127]+1 /* (set! ##compiler#llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6084,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[128]+1 /* (set! ##compiler#llist-match? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6087,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[129]+1 /* (set! ##compiler#expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6131,tmp=(C_word)a,a+=2,tmp));
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_mutate2((C_word*)lf[138]+1 /* (set! ##compiler#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6188,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[149]+1 /* (set! ##compiler#get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6385,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[151]+1 /* (set! ##compiler#get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6403,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[153]+1 /* (set! ##compiler#put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6421,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[155]+1 /* (set! ##compiler#collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6467,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[156]+1 /* (set! ##compiler#count! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6519,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[157]+1 /* (set! ##compiler#get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6574,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[158]+1 /* (set! ##compiler#get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6583,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2((C_word*)lf[160]+1 /* (set! ##compiler#get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6593,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2((C_word*)lf[161]+1 /* (set! ##compiler#display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6634,tmp=(C_word)a,a+=2,tmp));
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate2((C_word*)lf[164]+1 /* (set! ##compiler#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6703,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[211]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7291,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate2((C_word*)lf[213]+1 /* (set! node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7297,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate2((C_word*)lf[214]+1 /* (set! node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7303,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate2((C_word*)lf[215]+1 /* (set! node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7312,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate2((C_word*)lf[217]+1 /* (set! node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7321,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate2((C_word*)lf[218]+1 /* (set! node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7330,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate2((C_word*)lf[219]+1 /* (set! node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7339,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate2((C_word*)lf[220]+1 /* (set! node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7348,tmp=(C_word)a,a+=2,tmp));
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7358,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15910,tmp=(C_word)a,a+=2,tmp);
/* support.scm:511: ##sys#register-record-printer */
t33=*((C_word*)lf[562]+1);
((C_proc4)(void*)(*((C_word*)t33+1)))(4,t33,t31,lf[212],t32);}

/* ##compiler#string->expr in k5978 in k5975 in k4722 in k4688 in k4685 in k4682 */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5981,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5985,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5990,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:301: call-with-current-continuation */
t5=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* for-each-loop101 in k4877 in collect in with-debugging-output in k4722 in k4688 in k4685 in k4682 */
static void C_fcall f_4884(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4884,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4894,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:82: g102 */
t5=((C_word*)t0)[3];
f_4852(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[753] = {
{"f_6049:support_2escm",(void*)f_6049},
{"f_4817:support_2escm",(void*)f_4817},
{"f_6013:support_2escm",(void*)f_6013},
{"f_11558:support_2escm",(void*)f_11558},
{"f_10676:support_2escm",(void*)f_10676},
{"f_6027:support_2escm",(void*)f_6027},
{"f_6023:support_2escm",(void*)f_6023},
{"f_6021:support_2escm",(void*)f_6021},
{"f_14655:support_2escm",(void*)f_14655},
{"f_11542:support_2escm",(void*)f_11542},
{"f_10687:support_2escm",(void*)f_10687},
{"f_4805:support_2escm",(void*)f_4805},
{"f_9460:support_2escm",(void*)f_9460},
{"f_4802:support_2escm",(void*)f_4802},
{"f_5382:support_2escm",(void*)f_5382},
{"f_11564:support_2escm",(void*)f_11564},
{"f_4859:support_2escm",(void*)f_4859},
{"f_15566:support_2escm",(void*)f_15566},
{"f_9490:support_2escm",(void*)f_9490},
{"f_4850:support_2escm",(void*)f_4850},
{"f_4852:support_2escm",(void*)f_4852},
{"f_5394:support_2escm",(void*)f_5394},
{"f_5398:support_2escm",(void*)f_5398},
{"f_4713:support_2escm",(void*)f_4713},
{"f_15535:support_2escm",(void*)f_15535},
{"f_4835:support_2escm",(void*)f_4835},
{"f_5370:support_2escm",(void*)f_5370},
{"f_4847:support_2escm",(void*)f_4847},
{"f_4845:support_2escm",(void*)f_4845},
{"f_15551:support_2escm",(void*)f_15551},
{"f_15554:support_2escm",(void*)f_15554},
{"f_4740:support_2escm",(void*)f_4740},
{"f_15008:support_2escm",(void*)f_15008},
{"f_12613:support_2escm",(void*)f_12613},
{"f_9486:support_2escm",(void*)f_9486},
{"f_15003:support_2escm",(void*)f_15003},
{"f_12619:support_2escm",(void*)f_12619},
{"f_4826:support_2escm",(void*)f_4826},
{"f_4752:support_2escm",(void*)f_4752},
{"f_4823:support_2escm",(void*)f_4823},
{"f_4820:support_2escm",(void*)f_4820},
{"f_5932:support_2escm",(void*)f_5932},
{"f_4743:support_2escm",(void*)f_4743},
{"f_15012:support_2escm",(void*)f_15012},
{"f_10916:support_2escm",(void*)f_10916},
{"f_10910:support_2escm",(void*)f_10910},
{"f_6762:support_2escm",(void*)f_6762},
{"f_5948:support_2escm",(void*)f_5948},
{"f_15518:support_2escm",(void*)f_15518},
{"f_4730:support_2escm",(void*)f_4730},
{"f_15514:support_2escm",(void*)f_15514},
{"f_6852:support_2escm",(void*)f_6852},
{"f_4727:support_2escm",(void*)f_4727},
{"f_4724:support_2escm",(void*)f_4724},
{"f_10809:support_2escm",(void*)f_10809},
{"f_6746:support_2escm",(void*)f_6746},
{"f_4736:support_2escm",(void*)f_4736},
{"f_11595:support_2escm",(void*)f_11595},
{"f_14363:support_2escm",(void*)f_14363},
{"f_6778:support_2escm",(void*)f_6778},
{"f_14361:support_2escm",(void*)f_14361},
{"f_6772:support_2escm",(void*)f_6772},
{"f_8943:support_2escm",(void*)f_8943},
{"f_9454:support_2escm",(void*)f_9454},
{"f_5256:support_2escm",(void*)f_5256},
{"f_11378:support_2escm",(void*)f_11378},
{"f_15096:support_2escm",(void*)f_15096},
{"f_15541:support_2escm",(void*)f_15541},
{"f_15068:support_2escm",(void*)f_15068},
{"f_15064:support_2escm",(void*)f_15064},
{"f_5275:support_2escm",(void*)f_5275},
{"f_14030:support_2escm",(void*)f_14030},
{"f_6712:support_2escm",(void*)f_6712},
{"f_15078:support_2escm",(void*)f_15078},
{"f_5286:support_2escm",(void*)f_5286},
{"f_5281:support_2escm",(void*)f_5281},
{"f_14008:support_2escm",(void*)f_14008},
{"f_11515:support_2escm",(void*)f_11515},
{"f_15801:support_2escm",(void*)f_15801},
{"f_15044:support_2escm",(void*)f_15044},
{"f_11507:support_2escm",(void*)f_11507},
{"f_11504:support_2escm",(void*)f_11504},
{"f_11500:support_2escm",(void*)f_11500},
{"f_15818:support_2escm",(void*)f_15818},
{"f_15813:support_2escm",(void*)f_15813},
{"f_15026:support_2escm",(void*)f_15026},
{"f_6725:support_2escm",(void*)f_6725},
{"f_6722:support_2escm",(void*)f_6722},
{"f_15020:support_2escm",(void*)f_15020},
{"f_6728:support_2escm",(void*)f_6728},
{"f_11521:support_2escm",(void*)f_11521},
{"f_15039:support_2escm",(void*)f_15039},
{"f_15036:support_2escm",(void*)f_15036},
{"f_15033:support_2escm",(void*)f_15033},
{"f_15747:support_2escm",(void*)f_15747},
{"f_15741:support_2escm",(void*)f_15741},
{"f_6703:support_2escm",(void*)f_6703},
{"f_6707:support_2escm",(void*)f_6707},
{"f_8675:support_2escm",(void*)f_8675},
{"f_15758:support_2escm",(void*)f_15758},
{"f_6734:support_2escm",(void*)f_6734},
{"f_6731:support_2escm",(void*)f_6731},
{"f_14357:support_2escm",(void*)f_14357},
{"f_11570:support_2escm",(void*)f_11570},
{"f_14901:support_2escm",(void*)f_14901},
{"f_14907:support_2escm",(void*)f_14907},
{"f_8646:support_2escm",(void*)f_8646},
{"f_8644:support_2escm",(void*)f_8644},
{"f_11047:support_2escm",(void*)f_11047},
{"f_8634:support_2escm",(void*)f_8634},
{"f_5340:support_2escm",(void*)f_5340},
{"f_5346:support_2escm",(void*)f_5346},
{"f_10840:support_2escm",(void*)f_10840},
{"f_8600:support_2escm",(void*)f_8600},
{"f_5320:support_2escm",(void*)f_5320},
{"f_5328:support_2escm",(void*)f_5328},
{"f_5330:support_2escm",(void*)f_5330},
{"f_5338:support_2escm",(void*)f_5338},
{"f_5309:support_2escm",(void*)f_5309},
{"f_10791:support_2escm",(void*)f_10791},
{"f_5315:support_2escm",(void*)f_5315},
{"f_5318:support_2escm",(void*)f_5318},
{"f_14624:support_2escm",(void*)f_14624},
{"f_14999:support_2escm",(void*)f_14999},
{"f_14992:support_2escm",(void*)f_14992},
{"f_10942:support_2escm",(void*)f_10942},
{"f_15469:support_2escm",(void*)f_15469},
{"f_14988:support_2escm",(void*)f_14988},
{"f_10956:support_2escm",(void*)f_10956},
{"f_14699:support_2escm",(void*)f_14699},
{"f_10964:support_2escm",(void*)f_10964},
{"f_14973:support_2escm",(void*)f_14973},
{"f_6471:support_2escm",(void*)f_6471},
{"f_9655:support_2escm",(void*)f_9655},
{"f_14395:support_2escm",(void*)f_14395},
{"f_15449:support_2escm",(void*)f_15449},
{"f_14960:support_2escm",(void*)f_14960},
{"f_10269:support_2escm",(void*)f_10269},
{"f_10271:support_2escm",(void*)f_10271},
{"f_5742:support_2escm",(void*)f_5742},
{"f_9649:support_2escm",(void*)f_9649},
{"f_14950:support_2escm",(void*)f_14950},
{"f_15452:support_2escm",(void*)f_15452},
{"f_5754:support_2escm",(void*)f_5754},
{"f_7366:support_2escm",(void*)f_7366},
{"f_7360:support_2escm",(void*)f_7360},
{"f_15428:support_2escm",(void*)f_15428},
{"f_15425:support_2escm",(void*)f_15425},
{"f_12595:support_2escm",(void*)f_12595},
{"f_7358:support_2escm",(void*)f_7358},
{"f_11019:support_2escm",(void*)f_11019},
{"f_14604:support_2escm",(void*)f_14604},
{"f_10560:support_2escm",(void*)f_10560},
{"f_14934:support_2escm",(void*)f_14934},
{"f_14936:support_2escm",(void*)f_14936},
{"f_4924:support_2escm",(void*)f_4924},
{"f_10222:support_2escm",(void*)f_10222},
{"f_10228:support_2escm",(void*)f_10228},
{"f_13791:support_2escm",(void*)f_13791},
{"f_7381:support_2escm",(void*)f_7381},
{"f_13795:support_2escm",(void*)f_13795},
{"f_15407:support_2escm",(void*)f_15407},
{"f_9673:support_2escm",(void*)f_9673},
{"f_6425:support_2escm",(void*)f_6425},
{"f_5702:support_2escm",(void*)f_5702},
{"f_5706:support_2escm",(void*)f_5706},
{"f_5708:support_2escm",(void*)f_5708},
{"f_6421:support_2escm",(void*)f_6421},
{"f_9609:support_2escm",(void*)f_9609},
{"f_15413:support_2escm",(void*)f_15413},
{"f_4907:support_2escm",(void*)f_4907},
{"f_10557:support_2escm",(void*)f_10557},
{"f_14613:support_2escm",(void*)f_14613},
{"f_4954:support_2escm",(void*)f_4954},
{"f_7396:support_2escm",(void*)f_7396},
{"f_9665:support_2escm",(void*)f_9665},
{"f_7399:support_2escm",(void*)f_7399},
{"f_4963:support_2escm",(void*)f_4963},
{"f_4967:support_2escm",(void*)f_4967},
{"f_4961:support_2escm",(void*)f_4961},
{"f_12582:support_2escm",(void*)f_12582},
{"f_14467:support_2escm",(void*)f_14467},
{"f_6467:support_2escm",(void*)f_6467},
{"f_14459:support_2escm",(void*)f_14459},
{"f_6415:support_2escm",(void*)f_6415},
{"f_14403:support_2escm",(void*)f_14403},
{"f_6403:support_2escm",(void*)f_6403},
{"f_6407:support_2escm",(void*)f_6407},
{"f_15436:support_2escm",(void*)f_15436},
{"f_15431:support_2escm",(void*)f_15431},
{"f_14427:support_2escm",(void*)f_14427},
{"f_14413:support_2escm",(void*)f_14413},
{"f_13112:support_2escm",(void*)f_13112},
{"f_13124:support_2escm",(void*)f_13124},
{"f_8060:support_2escm",(void*)f_8060},
{"f_15372:support_2escm",(void*)f_15372},
{"f_15381:support_2escm",(void*)f_15381},
{"f_15387:support_2escm",(void*)f_15387},
{"f_5663:support_2escm",(void*)f_5663},
{"f_15384:support_2escm",(void*)f_15384},
{"f_13102:support_2escm",(void*)f_13102},
{"f_15390:support_2escm",(void*)f_15390},
{"f_15397:support_2escm",(void*)f_15397},
{"f_15393:support_2escm",(void*)f_15393},
{"f_15396:support_2escm",(void*)f_15396},
{"f_8981:support_2escm",(void*)f_8981},
{"f_8989:support_2escm",(void*)f_8989},
{"f_13167:support_2escm",(void*)f_13167},
{"f_8977:support_2escm",(void*)f_8977},
{"f_15609:support_2escm",(void*)f_15609},
{"f_4782:support_2escm",(void*)f_4782},
{"f_8254:support_2escm",(void*)f_8254},
{"f_8252:support_2escm",(void*)f_8252},
{"f_4795:support_2escm",(void*)f_4795},
{"f_8283:support_2escm",(void*)f_8283},
{"f_11156:support_2escm",(void*)f_11156},
{"f_11153:support_2escm",(void*)f_11153},
{"f_15661:support_2escm",(void*)f_15661},
{"f_4767:support_2escm",(void*)f_4767},
{"f_4760:support_2escm",(void*)f_4760},
{"f_10523:support_2escm",(void*)f_10523},
{"f_11146:support_2escm",(void*)f_11146},
{"f_11140:support_2escm",(void*)f_11140},
{"f_5883:support_2escm",(void*)f_5883},
{"f_4772:support_2escm",(void*)f_4772},
{"f_11179:support_2escm",(void*)f_11179},
{"f_4933:support_2escm",(void*)f_4933},
{"f_4936:support_2escm",(void*)f_4936},
{"f_4939:support_2escm",(void*)f_4939},
{"f_11801:support_2escm",(void*)f_11801},
{"f_4930:support_2escm",(void*)f_4930},
{"f_4687:support_2escm",(void*)f_4687},
{"f_4684:support_2escm",(void*)f_4684},
{"f_4945:support_2escm",(void*)f_4945},
{"f_9620:support_2escm",(void*)f_9620},
{"f_5601:support_2escm",(void*)f_5601},
{"f_15621:support_2escm",(void*)f_15621},
{"f_15624:support_2escm",(void*)f_15624},
{"f_11828:support_2escm",(void*)f_11828},
{"f_10890:support_2escm",(void*)f_10890},
{"f_5617:support_2escm",(void*)f_5617},
{"f_5615:support_2escm",(void*)f_5615},
{"f_5035:support_2escm",(void*)f_5035},
{"f_5038:support_2escm",(void*)f_5038},
{"f_5032:support_2escm",(void*)f_5032},
{"f_15637:support_2escm",(void*)f_15637},
{"f_15632:support_2escm",(void*)f_15632},
{"f_7303:support_2escm",(void*)f_7303},
{"f_5005:support_2escm",(void*)f_5005},
{"f_5000:support_2escm",(void*)f_5000},
{"f_6372:support_2escm",(void*)f_6372},
{"f_13130:support_2escm",(void*)f_13130},
{"f_15681:support_2escm",(void*)f_15681},
{"f_13134:support_2escm",(void*)f_13134},
{"f_6385:support_2escm",(void*)f_6385},
{"f_6389:support_2escm",(void*)f_6389},
{"f_10884:support_2escm",(void*)f_10884},
{"f_5643:support_2escm",(void*)f_5643},
{"f_7321:support_2escm",(void*)f_7321},
{"f_13819:support_2escm",(void*)f_13819},
{"f_7015:support_2escm",(void*)f_7015},
{"f_7012:support_2escm",(void*)f_7012},
{"f_7312:support_2escm",(void*)f_7312},
{"f_6362:support_2escm",(void*)f_6362},
{"f_7003:support_2escm",(void*)f_7003},
{"f_7009:support_2escm",(void*)f_7009},
{"f_12707:support_2escm",(void*)f_12707},
{"f_7348:support_2escm",(void*)f_7348},
{"f_5657:support_2escm",(void*)f_5657},
{"f_12713:support_2escm",(void*)f_12713},
{"f_12717:support_2escm",(void*)f_12717},
{"f_7339:support_2escm",(void*)f_7339},
{"f_7330:support_2escm",(void*)f_7330},
{"f_5015:support_2escm",(void*)f_5015},
{"f_11197:support_2escm",(void*)f_11197},
{"f_11194:support_2escm",(void*)f_11194},
{"f_8031:support_2escm",(void*)f_8031},
{"f_6668:support_2escm",(void*)f_6668},
{"f_6666:support_2escm",(void*)f_6666},
{"f_11187:support_2escm",(void*)f_11187},
{"f_11181:support_2escm",(void*)f_11181},
{"f_8029:support_2escm",(void*)f_8029},
{"f_6656:support_2escm",(void*)f_6656},
{"f_6653:support_2escm",(void*)f_6653},
{"f_6650:support_2escm",(void*)f_6650},
{"f_5844:support_2escm",(void*)f_5844},
{"f_5846:support_2escm",(void*)f_5846},
{"f_13671:support_2escm",(void*)f_13671},
{"f17235:support_2escm",(void*)f17235},
{"f_10306:support_2escm",(void*)f_10306},
{"f_10300:support_2escm",(void*)f_10300},
{"f_10312:support_2escm",(void*)f_10312},
{"f_13643:support_2escm",(void*)f_13643},
{"f_8353:support_2escm",(void*)f_8353},
{"f_8359:support_2escm",(void*)f_8359},
{"f_10338:support_2escm",(void*)f_10338},
{"f_8229:support_2escm",(void*)f_8229},
{"f_8381:support_2escm",(void*)f_8381},
{"f_10340:support_2escm",(void*)f_10340},
{"f_13517:support_2escm",(void*)f_13517},
{"f_6603:support_2escm",(void*)f_6603},
{"f_6607:support_2escm",(void*)f_6607},
{"f_6600:support_2escm",(void*)f_6600},
{"f_8379:support_2escm",(void*)f_8379},
{"f_13523:support_2escm",(void*)f_13523},
{"f_13527:support_2escm",(void*)f_13527},
{"f_8699:support_2escm",(void*)f_8699},
{"f_8208:support_2escm",(void*)f_8208},
{"f_11858:support_2escm",(void*)f_11858},
{"f_11855:support_2escm",(void*)f_11855},
{"f_5770:support_2escm",(void*)f_5770},
{"f_5800:support_2escm",(void*)f_5800},
{"f_5804:support_2escm",(void*)f_5804},
{"f_6640:support_2escm",(void*)f_6640},
{"f_6634:support_2escm",(void*)f_6634},
{"f_8541:support_2escm",(void*)f_8541},
{"f_8543:support_2escm",(void*)f_8543},
{"f_8572:support_2escm",(void*)f_8572},
{"f_11899:support_2escm",(void*)f_11899},
{"f_6339:support_2escm",(void*)f_6339},
{"f_6349:support_2escm",(void*)f_6349},
{"f_6316:support_2escm",(void*)f_6316},
{"f_6326:support_2escm",(void*)f_6326},
{"f_15570:support_2escm",(void*)f_15570},
{"f_15579:support_2escm",(void*)f_15579},
{"f_15575:support_2escm",(void*)f_15575},
{"f_6924:support_2escm",(void*)f_6924},
{"f_15597:support_2escm",(void*)f_15597},
{"f_6913:support_2escm",(void*)f_6913},
{"f_11736:support_2escm",(void*)f_11736},
{"f_11733:support_2escm",(void*)f_11733},
{"f_10369:support_2escm",(void*)f_10369},
{"f_6900:support_2escm",(void*)f_6900},
{"f_10153:support_2escm",(void*)f_10153},
{"f_10159:support_2escm",(void*)f_10159},
{"f_10177:support_2escm",(void*)f_10177},
{"f_10173:support_2escm",(void*)f_10173},
{"f_14477:support_2escm",(void*)f_14477},
{"f_10635:support_2escm",(void*)f_10635},
{"f_5678:support_2escm",(void*)f_5678},
{"f_10637:support_2escm",(void*)f_10637},
{"f_7808:support_2escm",(void*)f_7808},
{"f_10643:support_2escm",(void*)f_10643},
{"f_5688:support_2escm",(void*)f_5688},
{"f_10649:support_2escm",(void*)f_10649},
{"f_5400:support_2escm",(void*)f_5400},
{"f_5694:support_2escm",(void*)f_5694},
{"f_10653:support_2escm",(void*)f_10653},
{"f_7829:support_2escm",(void*)f_7829},
{"f_5429:support_2escm",(void*)f_5429},
{"f_9771:support_2escm",(void*)f_9771},
{"f_5422:support_2escm",(void*)f_5422},
{"f_9763:support_2escm",(void*)f_9763},
{"f_5433:support_2escm",(void*)f_5433},
{"f_8315:support_2escm",(void*)f_8315},
{"f_5437:support_2escm",(void*)f_5437},
{"f_8313:support_2escm",(void*)f_8313},
{"f_5443:support_2escm",(void*)f_5443},
{"f_8344:support_2escm",(void*)f_8344},
{"f_7892:support_2escm",(void*)f_7892},
{"f_7896:support_2escm",(void*)f_7896},
{"f_10187:support_2escm",(void*)f_10187},
{"f_10183:support_2escm",(void*)f_10183},
{"f_12545:support_2escm",(void*)f_12545},
{"f_4997:support_2escm",(void*)f_4997},
{"f_10193:support_2escm",(void*)f_10193},
{"f_10190:support_2escm",(void*)f_10190},
{"f_9796:support_2escm",(void*)f_9796},
{"f_9790:support_2escm",(void*)f_9790},
{"f_4970:support_2escm",(void*)f_4970},
{"f_12564:support_2escm",(void*)f_12564},
{"f_4977:support_2escm",(void*)f_4977},
{"f_4979:support_2escm",(void*)f_4979},
{"f_9787:support_2escm",(void*)f_9787},
{"f_12098:support_2escm",(void*)f_12098},
{"f_4983:support_2escm",(void*)f_4983},
{"f_4986:support_2escm",(void*)f_4986},
{"f_4987:support_2escm",(void*)f_4987},
{"f_5862:support_2escm",(void*)f_5862},
{"f_5868:support_2escm",(void*)f_5868},
{"f_10576:support_2escm",(void*)f_10576},
{"f_7871:support_2escm",(void*)f_7871},
{"f_11751:support_2escm",(void*)f_11751},
{"f_11775:support_2escm",(void*)f_11775},
{"f_9062:support_2escm",(void*)f_9062},
{"f_10104:support_2escm",(void*)f_10104},
{"f_10117:support_2escm",(void*)f_10117},
{"f_8151:support_2escm",(void*)f_8151},
{"f_9188:support_2escm",(void*)f_9188},
{"f_14713:support_2escm",(void*)f_14713},
{"f_9174:support_2escm",(void*)f_9174},
{"f_8188:support_2escm",(void*)f_8188},
{"f_8446:support_2escm",(void*)f_8446},
{"f_14701:support_2escm",(void*)f_14701},
{"f_8432:support_2escm",(void*)f_8432},
{"f_5570:support_2escm",(void*)f_5570},
{"f_8122:support_2escm",(void*)f_8122},
{"f_9579:support_2escm",(void*)f_9579},
{"f_8120:support_2escm",(void*)f_8120},
{"f_8425:support_2escm",(void*)f_8425},
{"f_8422:support_2escm",(void*)f_8422},
{"f_10602:support_2escm",(void*)f_10602},
{"f_8816:support_2escm",(void*)f_8816},
{"f_8814:support_2escm",(void*)f_8814},
{"f_8810:support_2escm",(void*)f_8810},
{"f_9091:support_2escm",(void*)f_9091},
{"f_12551:support_2escm",(void*)f_12551},
{"f_11277:support_2escm",(void*)f_11277},
{"f_8806:support_2escm",(void*)f_8806},
{"f_8418:support_2escm",(void*)f_8418},
{"f_8410:support_2escm",(void*)f_8410},
{"f_15926:support_2escm",(void*)f_15926},
{"f_15920:support_2escm",(void*)f_15920},
{"f_15923:support_2escm",(void*)f_15923},
{"f_7465:support_2escm",(void*)f_7465},
{"f_7463:support_2escm",(void*)f_7463},
{"f_11265:support_2escm",(void*)f_11265},
{"f_11267:support_2escm",(void*)f_11267},
{"f_9559:support_2escm",(void*)f_9559},
{"f_9555:support_2escm",(void*)f_9555},
{"f_9731:support_2escm",(void*)f_9731},
{"f_9734:support_2escm",(void*)f_9734},
{"f_11299:support_2escm",(void*)f_11299},
{"f_11297:support_2escm",(void*)f_11297},
{"f_11292:support_2escm",(void*)f_11292},
{"f_8865:support_2escm",(void*)f_8865},
{"f_9724:support_2escm",(void*)f_9724},
{"f_9299:support_2escm",(void*)f_9299},
{"f_9192:support_2escm",(void*)f_9192},
{"f_6930:support_2escm",(void*)f_6930},
{"f_9272:support_2escm",(void*)f_9272},
{"f_11237:support_2escm",(void*)f_11237},
{"f_11224:support_2escm",(void*)f_11224},
{"f_15300:support_2escm",(void*)f_15300},
{"f_6289:support_2escm",(void*)f_6289},
{"f_9504:support_2escm",(void*)f_9504},
{"f_7859:support_2escm",(void*)f_7859},
{"f_7851:support_2escm",(void*)f_7851},
{"f_8829:support_2escm",(void*)f_8829},
{"f_9241:support_2escm",(void*)f_9241},
{"f_9243:support_2escm",(void*)f_9243},
{"f_6260:support_2escm",(void*)f_6260},
{"f_9233:support_2escm",(void*)f_9233},
{"f_8192:support_2escm",(void*)f_8192},
{"f_15339:support_2escm",(void*)f_15339},
{"f_15335:support_2escm",(void*)f_15335},
{"f_14778:support_2escm",(void*)f_14778},
{"f_7863:support_2escm",(void*)f_7863},
{"f_15344:support_2escm",(void*)f_15344},
{"f_7494:support_2escm",(void*)f_7494},
{"f_11218:support_2escm",(void*)f_11218},
{"f_11216:support_2escm",(void*)f_11216},
{"f_14769:support_2escm",(void*)f_14769},
{"f_5531:support_2escm",(void*)f_5531},
{"f_5538:support_2escm",(void*)f_5538},
{"f_13990:support_2escm",(void*)f_13990},
{"f_11288:support_2escm",(void*)f_11288},
{"f_9534:support_2escm",(void*)f_9534},
{"f_14752:support_2escm",(void*)f_14752},
{"f_6188:support_2escm",(void*)f_6188},
{"f_5504:support_2escm",(void*)f_5504},
{"f_14742:support_2escm",(void*)f_14742},
{"f_9522:support_2escm",(void*)f_9522},
{"f_9529:support_2escm",(void*)f_9529},
{"f_9526:support_2escm",(void*)f_9526},
{"f_6192:support_2escm",(void*)f_6192},
{"f_14568:support_2escm",(void*)f_14568},
{"f_9510:support_2escm",(void*)f_9510},
{"f_14737:support_2escm",(void*)f_14737},
{"f_9516:support_2escm",(void*)f_9516},
{"f_14723:support_2escm",(void*)f_14723},
{"f_14549:support_2escm",(void*)f_14549},
{"f_5545:support_2escm",(void*)f_5545},
{"f_12695:support_2escm",(void*)f_12695},
{"f_13969:support_2escm",(void*)f_13969},
{"f_10404:support_2escm",(void*)f_10404},
{"f_5558:support_2escm",(void*)f_5558},
{"f_12683:support_2escm",(void*)f_12683},
{"f_5463:support_2escm",(void*)f_5463},
{"f_10414:support_2escm",(void*)f_10414},
{"f_5529:support_2escm",(void*)f_5529},
{"f_14515:support_2escm",(void*)f_14515},
{"f_14512:support_2escm",(void*)f_14512},
{"f_12674:support_2escm",(void*)f_12674},
{"f_5479:support_2escm",(void*)f_5479},
{"f_12664:support_2escm",(void*)f_12664},
{"f_5483:support_2escm",(void*)f_5483},
{"f_12652:support_2escm",(void*)f_12652},
{"f_12658:support_2escm",(void*)f_12658},
{"f_10442:support_2escm",(void*)f_10442},
{"f_9040:support_2escm",(void*)f_9040},
{"f_10446:support_2escm",(void*)f_10446},
{"f_8583:support_2escm",(void*)f_8583},
{"f_8586:support_2escm",(void*)f_8586},
{"f_7687:support_2escm",(void*)f_7687},
{"f_9028:support_2escm",(void*)f_9028},
{"f_12623:support_2escm",(void*)f_12623},
{"f_12627:support_2escm",(void*)f_12627},
{"f_9013:support_2escm",(void*)f_9013},
{"f_10375:support_2escm",(void*)f_10375},
{"f_10379:support_2escm",(void*)f_10379},
{"f_9146:support_2escm",(void*)f_9146},
{"f_10382:support_2escm",(void*)f_10382},
{"f_10388:support_2escm",(void*)f_10388},
{"f_8797:support_2escm",(void*)f_8797},
{"f_8794:support_2escm",(void*)f_8794},
{"f_10396:support_2escm",(void*)f_10396},
{"f_4699:support_2escm",(void*)f_4699},
{"f_4690:support_2escm",(void*)f_4690},
{"f_4694:support_2escm",(void*)f_4694},
{"f_9226:support_2escm",(void*)f_9226},
{"f_9215:support_2escm",(void*)f_9215},
{"f_9115:support_2escm",(void*)f_9115},
{"f_9117:support_2escm",(void*)f_9117},
{"f_8594:support_2escm",(void*)f_8594},
{"f_6583:support_2escm",(void*)f_6583},
{"f_6593:support_2escm",(void*)f_6593},
{"f_7613:support_2escm",(void*)f_7613},
{"f_6002:support_2escm",(void*)f_6002},
{"f_15479:support_2escm",(void*)f_15479},
{"f_15881:support_2escm",(void*)f_15881},
{"f_15899:support_2escm",(void*)f_15899},
{"f_7621:support_2escm",(void*)f_7621},
{"f_15896:support_2escm",(void*)f_15896},
{"f_14811:support_2escm",(void*)f_14811},
{"f_7623:support_2escm",(void*)f_7623},
{"f_15892:support_2escm",(void*)f_15892},
{"f_7658:support_2escm",(void*)f_7658},
{"f_15865:support_2escm",(void*)f_15865},
{"f_7652:support_2escm",(void*)f_7652},
{"f_15867:support_2escm",(void*)f_15867},
{"f_15861:support_2escm",(void*)f_15861},
{"f_14817:support_2escm",(void*)f_14817},
{"f_6241:support_2escm",(void*)f_6241},
{"f_6135:support_2escm",(void*)f_6135},
{"f_15874:support_2escm",(void*)f_15874},
{"f_6131:support_2escm",(void*)f_6131},
{"f_6212:support_2escm",(void*)f_6212},
{"f_15849:support_2escm",(void*)f_15849},
{"f_15843:support_2escm",(void*)f_15843},
{"f_15858:support_2escm",(void*)f_15858},
{"f_15855:support_2escm",(void*)f_15855},
{"f_15852:support_2escm",(void*)f_15852},
{"f_15492:support_2escm",(void*)f_15492},
{"f_15828:support_2escm",(void*)f_15828},
{"f_15499:support_2escm",(void*)f_15499},
{"f_15496:support_2escm",(void*)f_15496},
{"f_10457:support_2escm",(void*)f_10457},
{"f_10451:support_2escm",(void*)f_10451},
{"f_10054:support_2escm",(void*)f_10054},
{"f_10056:support_2escm",(void*)f_10056},
{"f_14574:support_2escm",(void*)f_14574},
{"f_10465:support_2escm",(void*)f_10465},
{"f_14578:support_2escm",(void*)f_14578},
{"f_10460:support_2escm",(void*)f_10460},
{"f_10730:support_2escm",(void*)f_10730},
{"f_15232:support_2escm",(void*)f_15232},
{"f_10026:support_2escm",(void*)f_10026},
{"f_15247:support_2escm",(void*)f_15247},
{"f_15241:support_2escm",(void*)f_15241},
{"f_15215:support_2escm",(void*)f_15215},
{"f_10042:support_2escm",(void*)f_10042},
{"f_10044:support_2escm",(void*)f_10044},
{"f_5108:support_2escm",(void*)f_5108},
{"f_9816:support_2escm",(void*)f_9816},
{"f_10704:support_2escm",(void*)f_10704},
{"f_15206:support_2escm",(void*)f_15206},
{"f_5131:support_2escm",(void*)f_5131},
{"f_5135:support_2escm",(void*)f_5135},
{"f_10085:support_2escm",(void*)f_10085},
{"f_5144:support_2escm",(void*)f_5144},
{"f_7946:support_2escm",(void*)f_7946},
{"f_7944:support_2escm",(void*)f_7944},
{"f_9920:support_2escm",(void*)f_9920},
{"toplevel:support_2escm",(void*)C_support_toplevel},
{"f_9928:support_2escm",(void*)f_9928},
{"f_5112:support_2escm",(void*)f_5112},
{"f_9857:support_2escm",(void*)f_9857},
{"f_9912:support_2escm",(void*)f_9912},
{"f_9854:support_2escm",(void*)f_9854},
{"f_5120:support_2escm",(void*)f_5120},
{"f_5123:support_2escm",(void*)f_5123},
{"f_7908:support_2escm",(void*)f_7908},
{"f_9961:support_2escm",(void*)f_9961},
{"f_7975:support_2escm",(void*)f_7975},
{"f_5589:support_2escm",(void*)f_5589},
{"f_9883:support_2escm",(void*)f_9883},
{"f_9881:support_2escm",(void*)f_9881},
{"f_9871:support_2escm",(void*)f_9871},
{"f_15263:support_2escm",(void*)f_15263},
{"f_15265:support_2escm",(void*)f_15265},
{"f_9997:support_2escm",(void*)f_9997},
{"f_6578:support_2escm",(void*)f_6578},
{"f_6574:support_2escm",(void*)f_6574},
{"f_15904:support_2escm",(void*)f_15904},
{"f_10475:support_2escm",(void*)f_10475},
{"f_15910:support_2escm",(void*)f_15910},
{"f_15917:support_2escm",(void*)f_15917},
{"f_10490:support_2escm",(void*)f_10490},
{"f_10492:support_2escm",(void*)f_10492},
{"f_10499:support_2escm",(void*)f_10499},
{"f_12024:support_2escm",(void*)f_12024},
{"f_12027:support_2escm",(void*)f_12027},
{"f_4865:support_2escm",(void*)f_4865},
{"f_4862:support_2escm",(void*)f_4862},
{"f_9848:support_2escm",(void*)f_9848},
{"f_9841:support_2escm",(void*)f_9841},
{"f_9845:support_2escm",(void*)f_9845},
{"f_9839:support_2escm",(void*)f_9839},
{"f_10752:support_2escm",(void*)f_10752},
{"f_11917:support_2escm",(void*)f_11917},
{"f_10769:support_2escm",(void*)f_10769},
{"f_8701:support_2escm",(void*)f_8701},
{"f_11902:support_2escm",(void*)f_11902},
{"f_7517:support_2escm",(void*)f_7517},
{"f_9379:support_2escm",(void*)f_9379},
{"f_9946:support_2escm",(void*)f_9946},
{"f_9948:support_2escm",(void*)f_9948},
{"f_9936:support_2escm",(void*)f_9936},
{"f_9350:support_2escm",(void*)f_9350},
{"f_7935:support_2escm",(void*)f_7935},
{"f_9330:support_2escm",(void*)f_9330},
{"f_14866:support_2escm",(void*)f_14866},
{"f_14862:support_2escm",(void*)f_14862},
{"f_11407:support_2escm",(void*)f_11407},
{"f_11401:support_2escm",(void*)f_11401},
{"f_8894:support_2escm",(void*)f_8894},
{"f_12062:support_2escm",(void*)f_12062},
{"f_14895:support_2escm",(void*)f_14895},
{"f_14891:support_2escm",(void*)f_14891},
{"f_5079:support_2escm",(void*)f_5079},
{"f_14888:support_2escm",(void*)f_14888},
{"f_14881:support_2escm",(void*)f_14881},
{"f_11429:support_2escm",(void*)f_11429},
{"f_11426:support_2escm",(void*)f_11426},
{"f_11420:support_2escm",(void*)f_11420},
{"f_5076:support_2escm",(void*)f_5076},
{"f_6093:support_2escm",(void*)f_6093},
{"f_15103:support_2escm",(void*)f_15103},
{"f_7590:support_2escm",(void*)f_7590},
{"f_7596:support_2escm",(void*)f_7596},
{"f_7594:support_2escm",(void*)f_7594},
{"f_11413:support_2escm",(void*)f_11413},
{"f_6070:support_2escm",(void*)f_6070},
{"f_5041:support_2escm",(void*)f_5041},
{"f_5044:support_2escm",(void*)f_5044},
{"f_14823:support_2escm",(void*)f_14823},
{"f_7587:support_2escm",(void*)f_7587},
{"f_11447:support_2escm",(void*)f_11447},
{"f_11444:support_2escm",(void*)f_11444},
{"f_6081:support_2escm",(void*)f_6081},
{"f_6523:support_2escm",(void*)f_6523},
{"f_6526:support_2escm",(void*)f_6526},
{"f_14855:support_2escm",(void*)f_14855},
{"f_14852:support_2escm",(void*)f_14852},
{"f_14858:support_2escm",(void*)f_14858},
{"f_11438:support_2escm",(void*)f_11438},
{"f_11435:support_2escm",(void*)f_11435},
{"f_11432:support_2escm",(void*)f_11432},
{"f_15779:support_2escm",(void*)f_15779},
{"f_15773:support_2escm",(void*)f_15773},
{"f_6519:support_2escm",(void*)f_6519},
{"f_14849:support_2escm",(void*)f_14849},
{"f_14846:support_2escm",(void*)f_14846},
{"f_14840:support_2escm",(void*)f_14840},
{"f_6084:support_2escm",(void*)f_6084},
{"f_6087:support_2escm",(void*)f_6087},
{"f_15785:support_2escm",(void*)f_15785},
{"f_7289:support_2escm",(void*)f_7289},
{"f_11693:support_2escm",(void*)f_11693},
{"f_13084:support_2escm",(void*)f_13084},
{"f_14870:support_2escm",(void*)f_14870},
{"f_6055:support_2escm",(void*)f_6055},
{"f_5222:support_2escm",(void*)f_5222},
{"f_15797:support_2escm",(void*)f_15797},
{"f_5085:support_2escm",(void*)f_5085},
{"f_5059:support_2escm",(void*)f_5059},
{"f_11480:support_2escm",(void*)f_11480},
{"f_11486:support_2escm",(void*)f_11486},
{"f_11483:support_2escm",(void*)f_11483},
{"f_6064:support_2escm",(void*)f_6064},
{"f_6063:support_2escm",(void*)f_6063},
{"f_15726:support_2escm",(void*)f_15726},
{"f_5228:support_2escm",(void*)f_5228},
{"f_5053:support_2escm",(void*)f_5053},
{"f_13090:support_2escm",(void*)f_13090},
{"f_5056:support_2escm",(void*)f_5056},
{"f_11471:support_2escm",(void*)f_11471},
{"f_15165:support_2escm",(void*)f_15165},
{"f_11474:support_2escm",(void*)f_11474},
{"f_15160:support_2escm",(void*)f_15160},
{"f_13894:support_2escm",(void*)f_13894},
{"f_7291:support_2escm",(void*)f_7291},
{"f_7297:support_2escm",(void*)f_7297},
{"f_5188:support_2escm",(void*)f_5188},
{"f_15177:support_2escm",(void*)f_15177},
{"f_15171:support_2escm",(void*)f_15171},
{"f_11492:support_2escm",(void*)f_11492},
{"f_14832:support_2escm",(void*)f_14832},
{"f_11495:support_2escm",(void*)f_11495},
{"f_15185:support_2escm",(void*)f_15185},
{"f_15187:support_2escm",(void*)f_15187},
{"f_7754:support_2escm",(void*)f_7754},
{"f_15193:support_2escm",(void*)f_15193},
{"f_15769:support_2escm",(void*)f_15769},
{"f_7785:support_2escm",(void*)f_7785},
{"f_10696:support_2escm",(void*)f_10696},
{"f_10693:support_2escm",(void*)f_10693},
{"f_7527:support_2escm",(void*)f_7527},
{"f_11628:support_2escm",(void*)f_11628},
{"f_7520:support_2escm",(void*)f_7520},
{"f_15133:support_2escm",(void*)f_15133},
{"f_15701:support_2escm",(void*)f_15701},
{"f_15705:support_2escm",(void*)f_15705},
{"f_11610:support_2escm",(void*)f_11610},
{"f_5194:support_2escm",(void*)f_5194},
{"f_6809:support_2escm",(void*)f_6809},
{"f_15154:support_2escm",(void*)f_15154},
{"f_5902:support_2escm",(void*)f_5902},
{"f_5900:support_2escm",(void*)f_5900},
{"f_11991:support_2escm",(void*)f_11991},
{"f_8919:support_2escm",(void*)f_8919},
{"f_5908:support_2escm",(void*)f_5908},
{"f_6815:support_2escm",(void*)f_6815},
{"f_5958:support_2escm",(void*)f_5958},
{"f_9341:support_2escm",(void*)f_9341},
{"f_11987:support_2escm",(void*)f_11987},
{"f_6846:support_2escm",(void*)f_6846},
{"f_9348:support_2escm",(void*)f_9348},
{"f_5963:support_2escm",(void*)f_5963},
{"f_11678:support_2escm",(void*)f_11678},
{"f_11468:support_2escm",(void*)f_11468},
{"f_11462:support_2escm",(void*)f_11462},
{"f_5996:support_2escm",(void*)f_5996},
{"f_11944:support_2escm",(void*)f_11944},
{"f_5990:support_2escm",(void*)f_5990},
{"f_4894:support_2escm",(void*)f_4894},
{"f_7720:support_2escm",(void*)f_7720},
{"f_11456:support_2escm",(void*)f_11456},
{"f_11459:support_2escm",(void*)f_11459},
{"f_9301:support_2escm",(void*)f_9301},
{"f_11450:support_2escm",(void*)f_11450},
{"f_8730:support_2escm",(void*)f_8730},
{"f_5977:support_2escm",(void*)f_5977},
{"f_4879:support_2escm",(void*)f_4879},
{"f_6010:support_2escm",(void*)f_6010},
{"f_14643:support_2escm",(void*)f_14643},
{"f_11532:support_2escm",(void*)f_11532},
{"f_5985:support_2escm",(void*)f_5985},
{"f_5980:support_2escm",(void*)f_5980},
{"f_5981:support_2escm",(void*)f_5981},
{"f_4884:support_2escm",(void*)f_4884},
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
S|  map		30
S|  sprintf		4
S|  fprintf		5
S|  printf		19
S|  for-each		15
o|eliminated procedure checks: 402 
o|specializations:
o|  1 (eqv? (not float) *)
o|  3 (= fixnum fixnum)
o|  1 (assq * (list-of pair))
o|  1 (current-output-port)
o|  1 (second (pair * pair))
o|  3 (first pair)
o|  5 (cddr (pair * pair))
o|  1 (caddr (pair * (pair * pair)))
o|  353 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (cadr (pair * pair))
o|  1 (current-input-port)
o|  3 (memq * list)
o|  1 (>= fixnum fixnum)
o|  3 (< fixnum fixnum)
o|  2 (current-error-port)
o|  8 (##sys#check-list (or pair list) *)
o|  28 (##sys#check-output-port * * *)
o|  31 (cdr pair)
o|  27 (car pair)
o|safe globals: (##compiler#bomb ##compiler#disabled-warnings ##compiler#debugging-chicken ##compiler#compiler-cleanup-hook constant25 constant22) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: constant22 
o|inlining procedure: k4701 
o|inlining procedure: k4701 
o|inlining procedure: k4741 
o|inlining procedure: k4774 
o|contracted procedure: "(support.scm:64) g4855" 
o|propagated global variable: out5862 ##sys#standard-output 
o|substituted constant variable: a4756 
o|substituted constant variable: a4757 
o|inlining procedure: k4774 
o|inlining procedure: k4741 
o|propagated global variable: out7478 ##compiler#collected-debugging-output 
o|substituted constant variable: a4798 
o|substituted constant variable: a4799 
o|propagated global variable: out7478 ##compiler#collected-debugging-output 
o|inlining procedure: k4809 
o|inlining procedure: k4809 
o|propagated global variable: out112116 ##compiler#collected-debugging-output 
o|substituted constant variable: a4855 
o|substituted constant variable: a4856 
o|inlining procedure: k4870 
o|inlining procedure: k4870 
o|inlining procedure: k4886 
o|inlining procedure: k4886 
o|inlining procedure: k4909 
o|inlining procedure: k4909 
o|inlining procedure: k4925 
o|inlining procedure: k4925 
o|inlining procedure: k5007 
o|inlining procedure: k5007 
o|substituted constant variable: a5028 
o|substituted constant variable: a5029 
o|substituted constant variable: a5049 
o|substituted constant variable: a5050 
o|inlining procedure: k5087 
o|inlining procedure: k5087 
o|inlining procedure: k5146 
o|inlining procedure: k5146 
o|inlining procedure: k5167 
o|inlining procedure: k5167 
o|inlining procedure: k5196 
o|inlining procedure: k5196 
o|inlining procedure: k5230 
o|inlining procedure: k5230 
o|inlining procedure: k5258 
o|inlining procedure: k5258 
o|substituted constant variable: a5277 
o|substituted constant variable: a5278 
o|inlining procedure: k5288 
o|inlining procedure: k5288 
o|substituted constant variable: a5311 
o|substituted constant variable: a5312 
o|inlining procedure: k5348 
o|inlining procedure: k5348 
o|inlining procedure: k5402 
o|inlining procedure: k5402 
o|inlining procedure: k5447 
o|inlining procedure: k5447 
o|substituted constant variable: a5454 
o|substituted constant variable: a5456 
o|inlining procedure: k5469 
o|inlining procedure: k5469 
o|substituted constant variable: a5473 
o|substituted constant variable: a5475 
o|substituted constant variable: a5477 
o|inlining procedure: k5484 
o|inlining procedure: k5509 
o|inlining procedure: k5509 
o|inlining procedure: k5484 
o|inlining procedure: k5547 
o|propagated global variable: r554816002 ##sys#standard-input 
o|inlining procedure: k5547 
o|inlining procedure: k5562 
o|inlining procedure: k5562 
o|inlining procedure: k5591 
o|inlining procedure: k5591 
o|inlining procedure: k5603 
o|inlining procedure: k5603 
o|inlining procedure: k5623 
o|inlining procedure: k5623 
o|inlining procedure: k5665 
o|inlining procedure: k5665 
o|inlining procedure: k5713 
o|inlining procedure: k5713 
o|inlining procedure: k5725 
o|inlining procedure: k5725 
o|inlining procedure: k5737 
o|inlining procedure: k5737 
o|inlining procedure: k5749 
o|inlining procedure: k5749 
o|inlining procedure: k5758 
o|inlining procedure: k5758 
o|inlining procedure: k5775 
o|inlining procedure: k5775 
o|inlining procedure: k5787 
o|inlining procedure: k5787 
o|inlining procedure: k5805 
o|inlining procedure: k5805 
o|inlining procedure: k5817 
o|inlining procedure: k5817 
o|inlining procedure: k5829 
o|inlining procedure: k5829 
o|inlining procedure: k5851 
o|inlining procedure: k5851 
o|inlining procedure: k5863 
o|inlining procedure: k5863 
o|inlining procedure: k5872 
o|inlining procedure: k5872 
o|inlining procedure: k5910 
o|inlining procedure: k5910 
o|inlining procedure: k5923 
o|inlining procedure: k5923 
o|inlining procedure: k5964 
o|inlining procedure: k5964 
o|inlining procedure: k6008 
o|inlining procedure: k6008 
o|inlining procedure: k6028 
o|inlining procedure: k6028 
o|merged explicitly consed rest parameter: args486502 
o|consed rest parameter at call site: tmp24309 1 
o|inlining procedure: k6095 
o|inlining procedure: k6095 
o|inlining procedure: k6110 
o|inlining procedure: k6110 
o|inlining procedure: k6190 
o|inlining procedure: k6318 
o|contracted procedure: "(support.scm:367) g634641" 
o|contracted procedure: "(support.scm:369) g644645" 
o|inlining procedure: k6318 
o|propagated global variable: g640642 ##compiler#internal-bindings 
o|inlining procedure: k6341 
o|contracted procedure: "(support.scm:361) g585592" 
o|inlining procedure: k6261 
o|contracted procedure: "(support.scm:365) g610611" 
o|inlining procedure: k6261 
o|contracted procedure: "(support.scm:363) g595596" 
o|inlining procedure: k6341 
o|propagated global variable: g591593 extended-bindings 
o|inlining procedure: k6364 
o|contracted procedure: "(support.scm:355) g536543" 
o|inlining procedure: k6213 
o|contracted procedure: "(support.scm:359) g561562" 
o|inlining procedure: k6213 
o|contracted procedure: "(support.scm:357) g546547" 
o|inlining procedure: k6364 
o|propagated global variable: g542544 standard-bindings 
o|inlining procedure: k6190 
o|inlining procedure: k6390 
o|inlining procedure: k6390 
o|inlining procedure: k6408 
o|inlining procedure: k6408 
o|inlining procedure: k6426 
o|inlining procedure: k6438 
o|inlining procedure: k6438 
o|inlining procedure: k6426 
o|inlining procedure: k6472 
o|inlining procedure: k6472 
o|inlining procedure: k6527 
o|inlining procedure: k6527 
o|inlining procedure: k6579 
o|inlining procedure: k6579 
o|inlining procedure: k6604 
o|inlining procedure: k6604 
o|propagated global variable: out739743 ##sys#standard-output 
o|substituted constant variable: a6646 
o|substituted constant variable: a6647 
o|inlining procedure: k6642 
o|inlining procedure: k6670 
o|inlining procedure: k6670 
o|propagated global variable: out739743 ##sys#standard-output 
o|inlining procedure: k6642 
o|inlining procedure: k6714 
o|inlining procedure: k6714 
o|propagated global variable: out948952 ##sys#standard-output 
o|substituted constant variable: a6742 
o|substituted constant variable: a6743 
o|propagated global variable: out948952 ##sys#standard-output 
o|propagated global variable: out941945 ##sys#standard-output 
o|substituted constant variable: a6758 
o|substituted constant variable: a6759 
o|propagated global variable: out941945 ##sys#standard-output 
o|propagated global variable: out900904 ##sys#standard-output 
o|substituted constant variable: a6774 
o|substituted constant variable: a6775 
o|contracted procedure: "(support.scm:489) g908909" 
o|contracted procedure: "(support.scm:489) g905906" 
o|propagated global variable: out900904 ##sys#standard-output 
o|propagated global variable: out914918 ##sys#standard-output 
o|substituted constant variable: a6811 
o|substituted constant variable: a6812 
o|inlining procedure: k6804 
o|contracted procedure: "(support.scm:491) g922923" 
o|contracted procedure: "(support.scm:491) g919920" 
o|propagated global variable: out914918 ##sys#standard-output 
o|inlining procedure: k6804 
o|propagated global variable: out928932 ##sys#standard-output 
o|substituted constant variable: a6848 
o|substituted constant variable: a6849 
o|contracted procedure: "(support.scm:493) g936937" 
o|contracted procedure: "(support.scm:493) g933934" 
o|propagated global variable: out928932 ##sys#standard-output 
o|inlining procedure: k6902 
o|propagated global variable: out853857 ##sys#standard-output 
o|substituted constant variable: a6926 
o|substituted constant variable: a6927 
o|substituted constant variable: names775 
o|propagated global variable: out853857 ##sys#standard-output 
o|inlining procedure: k6946 
o|inlining procedure: k6946 
o|inlining procedure: k6959 
o|inlining procedure: k6959 
o|inlining procedure: k6969 
o|inlining procedure: k6969 
o|propagated global variable: out884888 ##sys#standard-output 
o|substituted constant variable: a7005 
o|substituted constant variable: a7006 
o|inlining procedure: k6995 
o|propagated global variable: out884888 ##sys#standard-output 
o|inlining procedure: k6995 
o|inlining procedure: k7037 
o|inlining procedure: k7037 
o|substituted constant variable: a7053 
o|substituted constant variable: a7055 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7071 
o|inlining procedure: k7071 
o|inlining procedure: k7083 
o|inlining procedure: k7083 
o|inlining procedure: k7095 
o|inlining procedure: k7095 
o|substituted constant variable: a7102 
o|substituted constant variable: a7104 
o|substituted constant variable: a7106 
o|substituted constant variable: a7108 
o|substituted constant variable: a7110 
o|substituted constant variable: a7112 
o|substituted constant variable: a7114 
o|substituted constant variable: a7116 
o|substituted constant variable: a7118 
o|substituted constant variable: a7120 
o|substituted constant variable: a7122 
o|substituted constant variable: a7124 
o|substituted constant variable: a7126 
o|inlining procedure: k7130 
o|inlining procedure: k7130 
o|inlining procedure: k7142 
o|inlining procedure: k7142 
o|inlining procedure: k7154 
o|inlining procedure: k7154 
o|inlining procedure: k7166 
o|inlining procedure: k7166 
o|inlining procedure: k7178 
o|inlining procedure: k7178 
o|inlining procedure: k7190 
o|inlining procedure: k7190 
o|inlining procedure: k7202 
o|inlining procedure: k7202 
o|inlining procedure: k7214 
o|inlining procedure: k7214 
o|inlining procedure: k7226 
o|inlining procedure: k7226 
o|inlining procedure: k7238 
o|inlining procedure: k7238 
o|substituted constant variable: a7245 
o|substituted constant variable: a7247 
o|substituted constant variable: a7249 
o|substituted constant variable: a7251 
o|substituted constant variable: a7253 
o|substituted constant variable: a7255 
o|substituted constant variable: a7257 
o|substituted constant variable: a7259 
o|substituted constant variable: a7261 
o|substituted constant variable: a7263 
o|substituted constant variable: a7265 
o|substituted constant variable: a7267 
o|substituted constant variable: a7269 
o|substituted constant variable: a7271 
o|substituted constant variable: a7273 
o|substituted constant variable: a7275 
o|substituted constant variable: a7277 
o|substituted constant variable: a7279 
o|substituted constant variable: a7281 
o|substituted constant variable: a7283 
o|substituted constant variable: a7285 
o|inlining procedure: k6902 
o|contracted procedure: "(support.scm:517) g10231024" 
o|contracted procedure: "(support.scm:518) g10301031" 
o|inlining procedure: k7401 
o|inlining procedure: k7401 
o|inlining procedure: k7421 
o|inlining procedure: k7421 
o|inlining procedure: k7437 
o|contracted procedure: "(support.scm:528) g10561057" 
o|inlining procedure: k7467 
o|inlining procedure: k7467 
o|inlining procedure: k7437 
o|inlining procedure: k7512 
o|inlining procedure: k7512 
o|inlining procedure: k7531 
o|inlining procedure: k7531 
o|inlining procedure: k7544 
o|contracted procedure: "(support.scm:544) g10931094" 
o|inlining procedure: k7625 
o|inlining procedure: k7625 
o|inlining procedure: k7660 
o|contracted procedure: "(support.scm:546) g11061115" 
o|inlining procedure: k7576 
o|inlining procedure: k7576 
o|inlining procedure: k7660 
o|inlining procedure: k7544 
o|contracted procedure: "(support.scm:553) g11551156" 
o|inlining procedure: k7729 
o|contracted procedure: "(support.scm:555) g11601161" 
o|inlining procedure: k7729 
o|inlining procedure: k7787 
o|contracted procedure: "(support.scm:562) g11731174" 
o|contracted procedure: "(support.scm:566) g11781179" 
o|inlining procedure: k7787 
o|contracted procedure: "(support.scm:568) g11831184" 
o|inlining procedure: k7913 
o|contracted procedure: "(support.scm:577) g11901191" 
o|inlining procedure: k7948 
o|inlining procedure: k7948 
o|inlining procedure: k7981 
o|inlining procedure: k7981 
o|inlining procedure: k7913 
o|contracted procedure: "(support.scm:582) g12251226" 
o|inlining procedure: k8033 
o|inlining procedure: k8033 
o|inlining procedure: k8069 
o|contracted procedure: "(support.scm:584) g12561257" 
o|inlining procedure: k8069 
o|contracted procedure: "(support.scm:586) g12641265" 
o|inlining procedure: k8124 
o|inlining procedure: k8124 
o|inlining procedure: k8160 
o|contracted procedure: "(support.scm:591) g12961297" 
o|inlining procedure: k8160 
o|contracted procedure: "(support.scm:597) g13131314" 
o|inlining procedure: k8256 
o|inlining procedure: k8256 
o|inlining procedure: k8288 
o|contracted procedure: "(support.scm:599) g13441345" 
o|inlining procedure: k8317 
o|inlining procedure: k8317 
o|inlining procedure: k8288 
o|contracted procedure: "(support.scm:602) g13771378" 
o|inlining procedure: k8383 
o|inlining procedure: k8383 
o|inlining procedure: k8420 
o|inlining procedure: k8430 
o|inlining procedure: k8430 
o|inlining procedure: k8420 
o|contracted procedure: "(support.scm:604) g13861387" 
o|substituted constant variable: a8452 
o|inlining procedure: k8456 
o|inlining procedure: k8456 
o|inlining procedure: k8468 
o|inlining procedure: k8468 
o|substituted constant variable: a8475 
o|substituted constant variable: a8477 
o|substituted constant variable: a8479 
o|substituted constant variable: a8481 
o|substituted constant variable: a8483 
o|substituted constant variable: a8485 
o|substituted constant variable: a8490 
o|substituted constant variable: a8492 
o|substituted constant variable: a8494 
o|substituted constant variable: a8499 
o|substituted constant variable: a8501 
o|substituted constant variable: a8503 
o|substituted constant variable: a8505 
o|substituted constant variable: a8507 
o|substituted constant variable: a8512 
o|substituted constant variable: a8514 
o|substituted constant variable: a8516 
o|substituted constant variable: a8518 
o|substituted constant variable: a8523 
o|substituted constant variable: a8525 
o|contracted procedure: "(support.scm:614) g14211422" 
o|inlining procedure: k8545 
o|inlining procedure: k8545 
o|contracted procedure: "(support.scm:524) g10441045" 
o|inlining procedure: k8584 
o|inlining procedure: k8584 
o|inlining procedure: k8626 
o|inlining procedure: k8648 
o|inlining procedure: k8648 
o|inlining procedure: k8626 
o|inlining procedure: k8703 
o|inlining procedure: k8703 
o|inlining procedure: k8735 
o|inlining procedure: k8735 
o|inlining procedure: k8753 
o|inlining procedure: k8753 
o|inlining procedure: k8770 
o|inlining procedure: k8770 
o|inlining procedure: k8782 
o|inlining procedure: k8818 
o|inlining procedure: k8818 
o|inlining procedure: k8867 
o|inlining procedure: k8867 
o|inlining procedure: k8782 
o|inlining procedure: k8927 
o|inlining procedure: k8927 
o|inlining procedure: k8961 
o|inlining procedure: k8991 
o|inlining procedure: k8991 
o|inlining procedure: k8961 
o|inlining procedure: k9064 
o|inlining procedure: k9064 
o|inlining procedure: k9096 
o|inlining procedure: k9119 
o|inlining procedure: k9119 
o|inlining procedure: k9096 
o|inlining procedure: k9160 
o|inlining procedure: k9176 
o|inlining procedure: k9176 
o|inlining procedure: k9160 
o|inlining procedure: k9245 
o|inlining procedure: k9245 
o|inlining procedure: k9281 
o|inlining procedure: k9303 
o|inlining procedure: k9303 
o|inlining procedure: k9281 
o|inlining procedure: k9352 
o|inlining procedure: k9352 
o|substituted constant variable: a9388 
o|substituted constant variable: a9390 
o|inlining procedure: k9394 
o|inlining procedure: k9394 
o|substituted constant variable: a9407 
o|substituted constant variable: a9409 
o|substituted constant variable: a9411 
o|substituted constant variable: a9413 
o|substituted constant variable: a9415 
o|substituted constant variable: a9417 
o|substituted constant variable: a9419 
o|substituted constant variable: a9421 
o|substituted constant variable: a9423 
o|substituted constant variable: a9425 
o|substituted constant variable: a9427 
o|substituted constant variable: a9429 
o|substituted constant variable: a9431 
o|substituted constant variable: a9433 
o|substituted constant variable: a9435 
o|substituted constant variable: a9437 
o|inlining procedure: k9441 
o|inlining procedure: k9441 
o|substituted constant variable: a9448 
o|substituted constant variable: a9450 
o|substituted constant variable: a9452 
o|contracted procedure: "(support.scm:624) g14681469" 
o|contracted procedure: "(support.scm:623) g14651466" 
o|contracted procedure: "(support.scm:622) g14621463" 
o|inlining procedure: k9462 
o|inlining procedure: k9462 
o|contracted procedure: "(support.scm:677) g17801781" 
o|contracted procedure: "(support.scm:692) g18291830" 
o|contracted procedure: "(support.scm:694) g18341835" 
o|inlining procedure: k9577 
o|inlining procedure: k9577 
o|contracted procedure: "(support.scm:698) g18391840" 
o|inlining procedure: k9622 
o|inlining procedure: k9622 
o|inlining procedure: k9699 
o|contracted procedure: "(support.scm:716) g19061907" 
o|inlining procedure: k9699 
o|inlining procedure: "(support.scm:721) rename1882" 
o|inlining procedure: k9738 
o|contracted procedure: "(support.scm:723) g19131914" 
o|inlining procedure: "(support.scm:724) rename1882" 
o|inlining procedure: k9738 
o|contracted procedure: "(support.scm:732) g19221923" 
o|inlining procedure: k9825 
o|contracted procedure: "(support.scm:745) g19931994" 
o|inlining procedure: k9885 
o|inlining procedure: k9885 
o|inlining procedure: k9934 
o|inlining procedure: "(support.scm:748) rename1882" 
o|inlining procedure: k9934 
o|inlining procedure: k9950 
o|inlining procedure: k9950 
o|inlining procedure: k9999 
o|inlining procedure: k9999 
o|inlining procedure: k9825 
o|contracted procedure: "(support.scm:751) g20332034" 
o|inlining procedure: k10058 
o|inlining procedure: k10058 
o|substituted constant variable: a10091 
o|substituted constant variable: a10093 
o|substituted constant variable: a10095 
o|substituted constant variable: a10097 
o|substituted constant variable: a10099 
o|contracted procedure: "(support.scm:713) g18971898" 
o|contracted procedure: "(support.scm:712) g18941895" 
o|contracted procedure: "(support.scm:711) g18911892" 
o|inlining procedure: k10106 
o|inlining procedure: k10106 
o|inlining procedure: k10161 
o|inlining procedure: k10161 
o|contracted procedure: "(support.scm:763) g20882089" 
o|contracted procedure: "(support.scm:762) g20852086" 
o|contracted procedure: "(support.scm:761) g20822083" 
o|inlining procedure: k10273 
o|inlining procedure: k10273 
o|contracted procedure: "(support.scm:770) g21262127" 
o|contracted procedure: "(support.scm:769) g21042105" 
o|contracted procedure: "(support.scm:768) g21012102" 
o|contracted procedure: "(support.scm:774) g21412142" 
o|inlining procedure: k10342 
o|inlining procedure: k10342 
o|inlining procedure: k10383 
o|inlining procedure: k10406 
o|contracted procedure: "(support.scm:812) g22322239" 
o|inlining procedure: k10406 
o|inlining procedure: k10383 
o|inlining procedure: k10467 
o|contracted procedure: "(support.scm:804) g22102217" 
o|inlining procedure: k10467 
o|inlining procedure: k10494 
o|contracted procedure: k10509 
o|inlining procedure: k10506 
o|inlining procedure: k10506 
o|inlining procedure: k10524 
o|contracted procedure: k10544 
o|inlining procedure: k10541 
o|inlining procedure: k10541 
o|inlining procedure: k10582 
o|inlining procedure: k10582 
o|substituted constant variable: a10596 
o|substituted constant variable: a10598 
o|contracted procedure: "(support.scm:790) g22022203" 
o|contracted procedure: "(support.scm:788) g21932194" 
o|inlining procedure: k10524 
o|contracted procedure: "(support.scm:783) g21812182" 
o|contracted procedure: "(support.scm:783) g21842185" 
o|inlining procedure: k10494 
o|inlining procedure: k10654 
o|inlining procedure: k10654 
o|contracted procedure: "(support.scm:820) g22602261" 
o|inlining procedure: k10701 
o|inlining procedure: k10701 
o|inlining procedure: k10732 
o|inlining procedure: k10732 
o|inlining procedure: k10747 
o|inlining procedure: k10747 
o|inlining procedure: k10771 
o|inlining procedure: k10771 
o|inlining procedure: k10786 
o|inlining procedure: k10811 
o|inlining procedure: k10811 
o|inlining procedure: k10829 
o|inlining procedure: k10829 
o|contracted procedure: "(support.scm:850) g23222323" 
o|inlining procedure: k10786 
o|contracted procedure: "(support.scm:849) g23102311" 
o|contracted procedure: "(support.scm:848) g23062307" 
o|inlining procedure: k10885 
o|contracted procedure: "(support.scm:861) g23302331" 
o|contracted procedure: "(support.scm:861) g23272328" 
o|inlining procedure: k10885 
o|inlining procedure: k10934 
o|inlining procedure: k10934 
o|contracted procedure: "(support.scm:873) g23652366" 
o|inlining procedure: k10974 
o|inlining procedure: k10974 
o|substituted constant variable: a10990 
o|substituted constant variable: a10992 
o|substituted constant variable: a10994 
o|inlining procedure: k10998 
o|inlining procedure: k10998 
o|substituted constant variable: a11011 
o|substituted constant variable: a11013 
o|substituted constant variable: a11015 
o|substituted constant variable: a11017 
o|contracted procedure: "(support.scm:870) g23522353" 
o|contracted procedure: "(support.scm:869) g23432344" 
o|inlining procedure: k11035 
o|inlining procedure: k11057 
o|inlining procedure: k11080 
o|inlining procedure: k11080 
o|contracted procedure: "(support.scm:892) g24052406" 
o|contracted procedure: "(support.scm:891) g24012402" 
o|contracted procedure: "(support.scm:889) g23962397" 
o|inlining procedure: k11057 
o|contracted procedure: "(support.scm:895) g24082409" 
o|substituted constant variable: a11132 
o|substituted constant variable: a11134 
o|contracted procedure: "(support.scm:887) g23922393" 
o|inlining procedure: k11035 
o|contracted procedure: "(support.scm:881) g23762377" 
o|inlining procedure: k11148 
o|inlining procedure: k11148 
o|contracted procedure: k11160 
o|inlining procedure: k11163 
o|inlining procedure: k11163 
o|inlining procedure: k11189 
o|inlining procedure: k11189 
o|contracted procedure: k11201 
o|inlining procedure: k11204 
o|inlining procedure: k11204 
o|inlining procedure: k11226 
o|inlining procedure: k11246 
o|inlining procedure: k11246 
o|inlining procedure: k11226 
o|contracted procedure: k11256 
o|inlining procedure: k11269 
o|inlining procedure: k11269 
o|contracted procedure: k11281 
o|inlining procedure: k11308 
o|inlining procedure: k11308 
o|inlining procedure: k11328 
o|inlining procedure: k11328 
o|contracted procedure: "(support.scm:967) g24672468" 
o|inlining procedure: k11349 
o|inlining procedure: k11349 
o|substituted constant variable: a11366 
o|substituted constant variable: a11368 
o|substituted constant variable: a11370 
o|inlining procedure: k11380 
o|inlining procedure: k11380 
o|propagated global variable: out24872491 ##sys#standard-output 
o|substituted constant variable: a11422 
o|substituted constant variable: a11423 
o|propagated global variable: out24972501 ##sys#standard-output 
o|substituted constant variable: a11440 
o|substituted constant variable: a11441 
o|propagated global variable: out25052509 ##sys#standard-output 
o|substituted constant variable: a11452 
o|substituted constant variable: a11453 
o|propagated global variable: out25132517 ##sys#standard-output 
o|substituted constant variable: a11464 
o|substituted constant variable: a11465 
o|propagated global variable: out25212525 ##sys#standard-output 
o|substituted constant variable: a11476 
o|substituted constant variable: a11477 
o|propagated global variable: out25292533 ##sys#standard-output 
o|substituted constant variable: a11488 
o|substituted constant variable: a11489 
o|inlining procedure: k11415 
o|propagated global variable: out25292533 ##sys#standard-output 
o|propagated global variable: out25212525 ##sys#standard-output 
o|propagated global variable: out25132517 ##sys#standard-output 
o|propagated global variable: out25052509 ##sys#standard-output 
o|propagated global variable: out24972501 ##sys#standard-output 
o|propagated global variable: out24872491 ##sys#standard-output 
o|inlining procedure: k11415 
o|inlining procedure: k11508 
o|inlining procedure: k11508 
o|inlining procedure: k11534 
o|contracted procedure: "(support.scm:997) g25492556" 
o|inlining procedure: k11534 
o|inlining procedure: k11572 
o|inlining procedure: k11572 
o|inlining procedure: k11596 
o|inlining procedure: k11596 
o|inlining procedure: k11602 
o|inlining procedure: k11602 
o|inlining procedure: k11655 
o|inlining procedure: k11655 
o|inlining procedure: k11709 
o|inlining procedure: k11709 
o|inlining procedure: k11767 
o|substituted constant variable: tmap2567 
o|substituted constant variable: tmap2567 
o|inlining procedure: k11767 
o|inlining procedure: k11802 
o|inlining procedure: k11802 
o|inlining procedure: k11808 
o|inlining procedure: k11808 
o|inlining procedure: k11829 
o|inlining procedure: k11829 
o|inlining procedure: k11835 
o|inlining procedure: k11835 
o|inlining procedure: k11882 
o|inlining procedure: k11882 
o|inlining procedure: k11936 
o|inlining procedure: k11936 
o|inlining procedure: k11964 
o|inlining procedure: k11964 
o|inlining procedure: k11997 
o|inlining procedure: k11997 
o|inlining procedure: k11988 
o|inlining procedure: k11988 
o|inlining procedure: k12016 
o|inlining procedure: k12016 
o|inlining procedure: k12090 
o|inlining procedure: k12090 
o|inlining procedure: k12131 
o|inlining procedure: k12131 
o|inlining procedure: k12137 
o|inlining procedure: k12137 
o|inlining procedure: k12163 
o|inlining procedure: k12163 
o|substituted constant variable: a12191 
o|substituted constant variable: a12193 
o|substituted constant variable: a12195 
o|substituted constant variable: a12197 
o|substituted constant variable: a12199 
o|substituted constant variable: a12201 
o|substituted constant variable: a12203 
o|substituted constant variable: a12208 
o|substituted constant variable: a12210 
o|inlining procedure: k12214 
o|inlining procedure: k12214 
o|substituted constant variable: a12227 
o|substituted constant variable: a12229 
o|substituted constant variable: a12231 
o|substituted constant variable: a12233 
o|substituted constant variable: a12241 
o|inlining procedure: k12245 
o|inlining procedure: k12245 
o|substituted constant variable: a12252 
o|substituted constant variable: a12254 
o|substituted constant variable: a12256 
o|inlining procedure: k12260 
o|inlining procedure: k12260 
o|substituted constant variable: a12273 
o|substituted constant variable: a12275 
o|substituted constant variable: a12277 
o|substituted constant variable: a12279 
o|substituted constant variable: a12281 
o|inlining procedure: k12285 
o|inlining procedure: k12285 
o|substituted constant variable: a12292 
o|substituted constant variable: a12294 
o|substituted constant variable: a12296 
o|substituted constant variable: a12298 
o|inlining procedure: k12302 
o|inlining procedure: k12302 
o|substituted constant variable: a12309 
o|substituted constant variable: a12311 
o|substituted constant variable: a12313 
o|substituted constant variable: a12315 
o|inlining procedure: k12319 
o|inlining procedure: k12319 
o|substituted constant variable: a12332 
o|substituted constant variable: a12334 
o|substituted constant variable: a12336 
o|substituted constant variable: a12338 
o|inlining procedure: k12342 
o|inlining procedure: k12342 
o|inlining procedure: k12354 
o|inlining procedure: k12354 
o|inlining procedure: k12366 
o|inlining procedure: k12366 
o|substituted constant variable: a12379 
o|substituted constant variable: a12381 
o|substituted constant variable: a12383 
o|substituted constant variable: a12385 
o|substituted constant variable: a12387 
o|substituted constant variable: a12389 
o|substituted constant variable: a12391 
o|substituted constant variable: a12393 
o|inlining procedure: k12397 
o|inlining procedure: k12397 
o|inlining procedure: k12409 
o|inlining procedure: k12409 
o|inlining procedure: k12421 
o|inlining procedure: k12421 
o|substituted constant variable: a12434 
o|substituted constant variable: a12436 
o|substituted constant variable: a12438 
o|substituted constant variable: a12440 
o|substituted constant variable: a12442 
o|substituted constant variable: a12444 
o|substituted constant variable: a12446 
o|substituted constant variable: a12448 
o|substituted constant variable: a12450 
o|substituted constant variable: a12452 
o|substituted constant variable: a12457 
o|substituted constant variable: a12459 
o|substituted constant variable: a12464 
o|substituted constant variable: a12466 
o|inlining procedure: k12470 
o|inlining procedure: k12470 
o|substituted constant variable: a12477 
o|substituted constant variable: a12479 
o|substituted constant variable: a12481 
o|inlining procedure: k12485 
o|inlining procedure: k12485 
o|inlining procedure: k12497 
o|inlining procedure: k12497 
o|inlining procedure: k12509 
o|inlining procedure: k12509 
o|substituted constant variable: a12522 
o|substituted constant variable: a12524 
o|substituted constant variable: a12526 
o|substituted constant variable: a12528 
o|substituted constant variable: a12530 
o|substituted constant variable: a12532 
o|substituted constant variable: a12534 
o|substituted constant variable: a12536 
o|substituted constant variable: a12541 
o|substituted constant variable: a12543 
o|inlining procedure: k12556 
o|inlining procedure: k12556 
o|inlining procedure: k12565 
o|inlining procedure: k12565 
o|inlining procedure: k12587 
o|inlining procedure: k12587 
o|inlining procedure: k12596 
o|inlining procedure: k12596 
o|inlining procedure: k12633 
o|inlining procedure: k12633 
o|inlining procedure: k12624 
o|inlining procedure: k12624 
o|inlining procedure: k12666 
o|inlining procedure: k12666 
o|inlining procedure: k12687 
o|inlining procedure: k12687 
o|inlining procedure: k12723 
o|inlining procedure: k12723 
o|inlining procedure: k12714 
o|inlining procedure: k12714 
o|inlining procedure: k12742 
o|inlining procedure: k12742 
o|inlining procedure: k12757 
o|inlining procedure: k12757 
o|inlining procedure: k12769 
o|inlining procedure: k12769 
o|inlining procedure: k12781 
o|inlining procedure: k12781 
o|inlining procedure: k12793 
o|inlining procedure: k12793 
o|substituted constant variable: a12800 
o|substituted constant variable: a12802 
o|substituted constant variable: a12804 
o|substituted constant variable: a12806 
o|substituted constant variable: a12808 
o|substituted constant variable: a12810 
o|substituted constant variable: a12812 
o|substituted constant variable: a12814 
o|substituted constant variable: a12816 
o|inlining procedure: k12826 
o|inlining procedure: k12826 
o|inlining procedure: k12838 
o|inlining procedure: k12838 
o|substituted constant variable: a12845 
o|substituted constant variable: a12847 
o|substituted constant variable: a12849 
o|substituted constant variable: a12851 
o|substituted constant variable: a12853 
o|inlining procedure: k12857 
o|inlining procedure: k12857 
o|inlining procedure: k12869 
o|inlining procedure: k12869 
o|inlining procedure: k12881 
o|inlining procedure: k12881 
o|substituted constant variable: a12888 
o|substituted constant variable: a12890 
o|substituted constant variable: a12892 
o|substituted constant variable: a12894 
o|substituted constant variable: a12896 
o|substituted constant variable: a12898 
o|substituted constant variable: a12900 
o|inlining procedure: k12904 
o|inlining procedure: k12904 
o|inlining procedure: k12916 
o|inlining procedure: k12916 
o|inlining procedure: k12928 
o|inlining procedure: k12928 
o|inlining procedure: k12940 
o|inlining procedure: k12940 
o|inlining procedure: k12952 
o|inlining procedure: k12952 
o|substituted constant variable: a12965 
o|substituted constant variable: a12967 
o|substituted constant variable: a12969 
o|substituted constant variable: a12971 
o|substituted constant variable: a12973 
o|substituted constant variable: a12975 
o|substituted constant variable: a12977 
o|substituted constant variable: a12979 
o|substituted constant variable: a12981 
o|substituted constant variable: a12983 
o|substituted constant variable: a12985 
o|substituted constant variable: a12987 
o|inlining procedure: k12991 
o|inlining procedure: k12991 
o|inlining procedure: k13003 
o|inlining procedure: k13003 
o|inlining procedure: k13015 
o|inlining procedure: k13015 
o|inlining procedure: k13027 
o|inlining procedure: k13027 
o|inlining procedure: k13039 
o|inlining procedure: k13039 
o|inlining procedure: k13051 
o|inlining procedure: k13051 
o|substituted constant variable: a13058 
o|substituted constant variable: a13060 
o|substituted constant variable: a13062 
o|substituted constant variable: a13064 
o|substituted constant variable: a13066 
o|substituted constant variable: a13068 
o|substituted constant variable: a13070 
o|substituted constant variable: a13072 
o|substituted constant variable: a13074 
o|substituted constant variable: a13076 
o|substituted constant variable: a13078 
o|substituted constant variable: a13080 
o|substituted constant variable: a13082 
o|inlining procedure: k13104 
o|inlining procedure: k13104 
o|inlining procedure: k13140 
o|inlining procedure: k13140 
o|inlining procedure: k13131 
o|inlining procedure: k13131 
o|inlining procedure: k13159 
o|inlining procedure: k13159 
o|inlining procedure: "(support.scm:1221) err3012" 
o|inlining procedure: k13177 
o|inlining procedure: k13177 
o|inlining procedure: k13189 
o|inlining procedure: k13189 
o|inlining procedure: k13201 
o|inlining procedure: k13201 
o|substituted constant variable: a13214 
o|substituted constant variable: a13216 
o|substituted constant variable: a13218 
o|substituted constant variable: a13220 
o|substituted constant variable: a13222 
o|substituted constant variable: a13224 
o|substituted constant variable: a13226 
o|substituted constant variable: a13228 
o|inlining procedure: "(support.scm:1222) err3012" 
o|inlining procedure: k13241 
o|inlining procedure: k13241 
o|substituted constant variable: a13254 
o|substituted constant variable: a13256 
o|substituted constant variable: a13258 
o|substituted constant variable: a13260 
o|inlining procedure: k13264 
o|inlining procedure: k13264 
o|inlining procedure: k13276 
o|inlining procedure: k13276 
o|inlining procedure: k13288 
o|inlining procedure: k13288 
o|inlining procedure: k13300 
o|inlining procedure: k13300 
o|inlining procedure: k13312 
o|inlining procedure: k13312 
o|inlining procedure: k13324 
o|inlining procedure: k13324 
o|inlining procedure: k13336 
o|inlining procedure: k13336 
o|inlining procedure: k13348 
o|inlining procedure: k13348 
o|inlining procedure: k13360 
o|inlining procedure: k13360 
o|inlining procedure: k13372 
o|inlining procedure: k13372 
o|inlining procedure: k13384 
o|inlining procedure: k13384 
o|inlining procedure: k13396 
o|inlining procedure: k13396 
o|inlining procedure: k13408 
o|inlining procedure: k13408 
o|inlining procedure: k13420 
o|inlining procedure: k13420 
o|inlining procedure: k13432 
o|inlining procedure: k13432 
o|inlining procedure: k13444 
o|inlining procedure: k13444 
o|substituted constant variable: a13451 
o|substituted constant variable: a13453 
o|substituted constant variable: a13455 
o|substituted constant variable: a13457 
o|substituted constant variable: a13459 
o|substituted constant variable: a13461 
o|substituted constant variable: a13463 
o|substituted constant variable: a13465 
o|substituted constant variable: a13467 
o|substituted constant variable: a13469 
o|substituted constant variable: a13471 
o|substituted constant variable: a13473 
o|substituted constant variable: a13475 
o|substituted constant variable: a13477 
o|substituted constant variable: a13479 
o|substituted constant variable: a13481 
o|substituted constant variable: a13483 
o|substituted constant variable: a13485 
o|substituted constant variable: a13487 
o|substituted constant variable: a13489 
o|substituted constant variable: a13491 
o|substituted constant variable: a13493 
o|substituted constant variable: a13495 
o|substituted constant variable: a13497 
o|substituted constant variable: a13499 
o|substituted constant variable: a13501 
o|substituted constant variable: a13503 
o|substituted constant variable: a13505 
o|substituted constant variable: a13507 
o|substituted constant variable: a13509 
o|substituted constant variable: a13511 
o|substituted constant variable: a13513 
o|substituted constant variable: a13515 
o|inlining procedure: k13528 
o|inlining procedure: k13528 
o|inlining procedure: k13557 
o|inlining procedure: k13557 
o|inlining procedure: k13589 
o|inlining procedure: k13589 
o|inlining procedure: k13619 
o|inlining procedure: k13619 
o|inlining procedure: k13638 
o|inlining procedure: k13638 
o|inlining procedure: k13660 
o|inlining procedure: k13660 
o|substituted constant variable: a13725 
o|substituted constant variable: a13730 
o|substituted constant variable: a13732 
o|substituted constant variable: a13733 
o|inlining procedure: k13741 
o|substituted constant variable: a13751 
o|inlining procedure: k13741 
o|substituted constant variable: a13752 
o|substituted constant variable: a13762 
o|substituted constant variable: a13764 
o|substituted constant variable: a13766 
o|substituted constant variable: a13771 
o|substituted constant variable: a13773 
o|substituted constant variable: a13778 
o|substituted constant variable: a13780 
o|substituted constant variable: a13782 
o|substituted constant variable: a13787 
o|substituted constant variable: a13789 
o|inlining procedure: k13796 
o|inlining procedure: k13796 
o|inlining procedure: k13811 
o|inlining procedure: k13811 
o|inlining procedure: k13829 
o|inlining procedure: k13829 
o|substituted constant variable: a13836 
o|inlining procedure: k13837 
o|inlining procedure: k13837 
o|inlining procedure: k13852 
o|inlining procedure: k13852 
o|substituted constant variable: a13859 
o|inlining procedure: k13860 
o|inlining procedure: k13860 
o|inlining procedure: k13872 
o|inlining procedure: k13872 
o|substituted constant variable: a13879 
o|inlining procedure: k13880 
o|inlining procedure: k13880 
o|inlining procedure: k13895 
o|inlining procedure: k13895 
o|substituted constant variable: a13912 
o|inlining procedure: k13913 
o|inlining procedure: k13913 
o|inlining procedure: k13925 
o|inlining procedure: k13925 
o|inlining procedure: k13937 
o|inlining procedure: k13937 
o|inlining procedure: k13949 
o|inlining procedure: k13949 
o|inlining procedure: k13961 
o|inlining procedure: k13961 
o|inlining procedure: k13976 
o|inlining procedure: k13976 
o|inlining procedure: k13991 
o|inlining procedure: k13991 
o|inlining procedure: k14009 
o|inlining procedure: k14009 
o|inlining procedure: k14022 
o|inlining procedure: k14022 
o|inlining procedure: k14044 
o|inlining procedure: k14044 
o|inlining procedure: k14056 
o|inlining procedure: k14056 
o|substituted constant variable: a14063 
o|substituted constant variable: a14065 
o|substituted constant variable: a14067 
o|substituted constant variable: a14069 
o|inlining procedure: k14073 
o|inlining procedure: k14073 
o|substituted constant variable: a14086 
o|substituted constant variable: a14088 
o|substituted constant variable: a14090 
o|substituted constant variable: a14092 
o|substituted constant variable: a14094 
o|inlining procedure: k14098 
o|inlining procedure: k14098 
o|substituted constant variable: a14105 
o|substituted constant variable: a14107 
o|substituted constant variable: a14109 
o|substituted constant variable: a14114 
o|substituted constant variable: a14116 
o|inlining procedure: k14120 
o|inlining procedure: k14120 
o|substituted constant variable: a14133 
o|substituted constant variable: a14135 
o|substituted constant variable: a14137 
o|substituted constant variable: a14139 
o|substituted constant variable: a14141 
o|substituted constant variable: a14143 
o|inlining procedure: k14147 
o|inlining procedure: k14147 
o|inlining procedure: k14159 
o|inlining procedure: k14159 
o|inlining procedure: k14171 
o|inlining procedure: k14171 
o|substituted constant variable: a14184 
o|substituted constant variable: a14186 
o|substituted constant variable: a14188 
o|substituted constant variable: a14190 
o|substituted constant variable: a14192 
o|substituted constant variable: a14194 
o|substituted constant variable: a14196 
o|substituted constant variable: a14198 
o|substituted constant variable: a14200 
o|substituted constant variable: a14202 
o|substituted constant variable: a14204 
o|substituted constant variable: a14206 
o|substituted constant variable: a14208 
o|substituted constant variable: a14210 
o|substituted constant variable: a14212 
o|substituted constant variable: a14214 
o|inlining procedure: k14218 
o|inlining procedure: k14218 
o|inlining procedure: k14230 
o|inlining procedure: k14230 
o|inlining procedure: k14242 
o|inlining procedure: k14242 
o|substituted constant variable: a14255 
o|substituted constant variable: a14257 
o|substituted constant variable: a14259 
o|substituted constant variable: a14261 
o|substituted constant variable: a14263 
o|substituted constant variable: a14265 
o|substituted constant variable: a14267 
o|substituted constant variable: a14269 
o|substituted constant variable: a14271 
o|substituted constant variable: a14273 
o|substituted constant variable: a14275 
o|substituted constant variable: a14277 
o|substituted constant variable: a14282 
o|substituted constant variable: a14284 
o|substituted constant variable: a14289 
o|substituted constant variable: a14291 
o|inlining procedure: k14295 
o|inlining procedure: k14295 
o|inlining procedure: k14307 
o|inlining procedure: k14307 
o|inlining procedure: k14319 
o|inlining procedure: k14319 
o|substituted constant variable: a14332 
o|substituted constant variable: a14334 
o|substituted constant variable: a14336 
o|substituted constant variable: a14338 
o|substituted constant variable: a14340 
o|substituted constant variable: a14342 
o|substituted constant variable: a14344 
o|substituted constant variable: a14346 
o|substituted constant variable: a14351 
o|substituted constant variable: a14353 
o|substituted constant variable: a14355 
o|inlining procedure: k14381 
o|inlining procedure: k14405 
o|inlining procedure: k14405 
o|contracted procedure: "(support.scm:1330) g33983399" 
o|inlining procedure: k14381 
o|inlining procedure: k14469 
o|inlining procedure: k14469 
o|inlining procedure: k14492 
o|inlining procedure: k14492 
o|substituted constant variable: a14499 
o|substituted constant variable: a14501 
o|substituted constant variable: a14503 
o|substituted constant variable: a14508 
o|substituted constant variable: a14510 
o|contracted procedure: "(support.scm:1328) g33913392" 
o|contracted procedure: "(support.scm:1327) g33823383" 
o|inlining procedure: k14541 
o|inlining procedure: k14541 
o|inlining procedure: k14559 
o|inlining procedure: k14559 
o|inlining procedure: k14579 
o|inlining procedure: k14579 
o|inlining procedure: k14629 
o|inlining procedure: k14629 
o|substituted constant variable: a14660 
o|substituted constant variable: a14662 
o|substituted constant variable: a14664 
o|substituted constant variable: a14666 
o|inlining procedure: k14670 
o|inlining procedure: k14670 
o|inlining procedure: k14682 
o|inlining procedure: k14682 
o|substituted constant variable: a14689 
o|substituted constant variable: a14691 
o|substituted constant variable: a14693 
o|substituted constant variable: a14695 
o|substituted constant variable: a14697 
o|contracted procedure: "(support.scm:1348) g34673468" 
o|contracted procedure: "(support.scm:1347) g34583459" 
o|contracted procedure: "(support.scm:1346) g34553456" 
o|inlining procedure: k14715 
o|inlining procedure: k14715 
o|inlining procedure: k14747 
o|inlining procedure: k14747 
o|substituted constant variable: a14763 
o|inlining procedure: k14780 
o|inlining procedure: k14780 
o|substituted constant variable: a14842 
o|substituted constant variable: a14843 
o|inlining procedure: k14868 
o|inlining procedure: k14868 
o|inlining procedure: k14896 
o|inlining procedure: k14896 
o|contracted procedure: k14911 
o|inlining procedure: k14908 
o|inlining procedure: k14938 
o|inlining procedure: k14938 
o|inlining procedure: k14961 
o|inlining procedure: k14961 
o|inlining procedure: k14908 
o|inlining procedure: k15013 
o|inlining procedure: k15013 
o|propagated global variable: out35973601 ##sys#standard-output 
o|substituted constant variable: a15029 
o|substituted constant variable: a15030 
o|propagated global variable: out35973601 ##sys#standard-output 
o|inlining procedure: k15046 
o|inlining procedure: k15046 
o|inlining procedure: k15080 
o|inlining procedure: k15080 
o|inlining procedure: k15104 
o|inlining procedure: k15104 
o|inlining procedure: k15107 
o|inlining procedure: k15107 
o|inlining procedure: k15198 
o|substituted constant variable: a15226 
o|inlining procedure: k15198 
o|inlining procedure: k15267 
o|contracted procedure: "(support.scm:1487) g36683677" 
o|inlining procedure: k15267 
o|inlining procedure: k15302 
o|contracted procedure: "(support.scm:1486) g36373646" 
o|contracted procedure: "(support.scm:1486) g36493650" 
o|inlining procedure: k15302 
o|propagated global variable: out37253729 ##sys#standard-output 
o|substituted constant variable: a15377 
o|substituted constant variable: a15378 
o|propagated global variable: out37623766 ##sys#standard-output 
o|substituted constant variable: a15421 
o|substituted constant variable: a15422 
o|inlining procedure: k15411 
o|inlining procedure: k15438 
o|propagated global variable: out37723776 ##sys#standard-output 
o|substituted constant variable: a15445 
o|substituted constant variable: a15446 
o|inlining procedure: k15438 
o|propagated global variable: out37723776 ##sys#standard-output 
o|propagated global variable: out37623766 ##sys#standard-output 
o|inlining procedure: k15411 
o|inlining procedure: k15471 
o|inlining procedure: k15471 
o|propagated global variable: out37253729 ##sys#standard-output 
o|contracted procedure: "(support.scm:1509) g37223723" 
o|contracted procedure: "(support.scm:1508) g37193720" 
o|contracted procedure: "(support.scm:1507) g37163717" 
o|inlining procedure: k15494 
o|inlining procedure: k15519 
o|inlining procedure: k15519 
o|inlining procedure: k15494 
o|inlining procedure: k15543 
o|inlining procedure: k15543 
o|inlining procedure: k15580 
o|inlining procedure: k15580 
o|inlining procedure: k15601 
o|substituted constant variable: a15628 
o|inlining procedure: k15601 
o|inlining procedure: k15639 
o|inlining procedure: k15654 
o|inlining procedure: k15654 
o|inlining procedure: k15639 
o|contracted procedure: "(support.scm:1586) g38313832" 
o|contracted procedure: "(support.scm:1589) g38483849" 
o|inlining procedure: k15706 
o|inlining procedure: k15706 
o|substituted constant variable: a15722 
o|substituted constant variable: a15724 
o|contracted procedure: "(support.scm:1604) g38963897" 
o|contracted procedure: "(support.scm:1605) g39073908" 
o|inlining procedure: k15774 
o|inlining procedure: k15820 
o|contracted procedure: "(support.scm:1614) g39323939" 
o|inlining procedure: k15820 
o|substituted constant variable: a15845 
o|substituted constant variable: a15846 
o|inlining procedure: k15774 
o|substituted constant variable: constant25 
o|substituted constant variable: a15913 
o|substituted constant variable: a15914 
o|contracted procedure: "(support.scm:512) g10091010" 
o|contracted procedure: "(support.scm:512) g10061007" 
o|replaced variables: 2888 
o|removed binding forms: 618 
o|removed side-effect free assignment to unused variable: constant25 
o|propagated global variable: out5862 ##sys#standard-output 
o|propagated global variable: out7478 ##compiler#collected-debugging-output 
o|substituted constant variable: r481015962 
o|inlining procedure: k4824 
o|substituted constant variable: r481015963 
o|inlining procedure: k4833 
o|propagated global variable: out112116 ##compiler#collected-debugging-output 
o|substituted constant variable: r508815976 
o|converted assignments to bindings: (err212) 
o|substituted constant variable: r519715982 
o|substituted constant variable: r523115984 
o|substituted constant variable: r540315992 
o|substituted constant variable: r544815994 
o|substituted constant variable: r544815995 
o|substituted constant variable: r548516001 
o|substituted constant variable: r575916025 
o|substituted constant variable: r587316041 
o|substituted constant variable: r591116042 
o|substituted constant variable: r602916052 
o|substituted constant variable: mark652 
o|substituted constant variable: mark618 
o|substituted constant variable: mark603 
o|substituted constant variable: mark569 
o|substituted constant variable: mark554 
o|substituted constant variable: r639116075 
o|substituted constant variable: r640916077 
o|substituted constant variable: r658016087 
o|propagated global variable: out739743 ##sys#standard-output 
o|propagated global variable: out948952 ##sys#standard-output 
o|inlining procedure: k6732 
o|propagated global variable: out941945 ##sys#standard-output 
o|propagated global variable: out900904 ##sys#standard-output 
o|propagated global variable: out914918 ##sys#standard-output 
o|propagated global variable: out928932 ##sys#standard-output 
o|propagated global variable: out853857 ##sys#standard-output 
o|propagated global variable: out884888 ##sys#standard-output 
o|substituted constant variable: c1025 
o|substituted constant variable: s1027 
o|substituted constant variable: c1032 
o|substituted constant variable: s1034 
o|substituted constant variable: p1059 
o|substituted constant variable: r753216151 
o|substituted constant variable: c1095 
o|substituted constant variable: c1157 
o|substituted constant variable: c1162 
o|substituted constant variable: c1175 
o|substituted constant variable: c1180 
o|substituted constant variable: p1181 
o|substituted constant variable: s1182 
o|substituted constant variable: c1185 
o|substituted constant variable: c1258 
o|substituted constant variable: s1260 
o|substituted constant variable: c1266 
o|substituted constant variable: c1298 
o|substituted constant variable: c1346 
o|substituted constant variable: c1379 
o|substituted constant variable: mark1389 
o|substituted constant variable: c1423 
o|substituted constant variable: c1782 
o|substituted constant variable: p1783 
o|substituted constant variable: c1831 
o|substituted constant variable: c1836 
o|substituted constant variable: c1841 
o|removed side-effect free assignment to unused variable: rename1882 
o|substituted constant variable: s1910 
o|substituted constant variable: c1915 
o|substituted constant variable: c1924 
o|substituted constant variable: c1995 
o|substituted constant variable: r993516287 
o|substituted constant variable: r993516287 
o|substituted constant variable: r1050716311 
o|substituted constant variable: r1054216314 
o|substituted constant variable: r1058316316 
o|substituted constant variable: mark2205 
o|substituted constant variable: r1052516318 
o|substituted constant variable: mark2187 
o|substituted constant variable: mark2268 
o|substituted constant variable: r1074816327 
o|substituted constant variable: r1083016333 
o|substituted constant variable: r1078716335 
o|substituted constant variable: r1088616337 
o|substituted constant variable: r1093516338 
o|substituted constant variable: r1097516341 
o|substituted constant variable: r1108116347 
o|substituted constant variable: r1103616349 
o|substituted constant variable: r1116416353 
o|substituted constant variable: r1120516357 
o|substituted constant variable: r1124716361 
o|substituted constant variable: r1124716361 
o|propagated global variable: out24872491 ##sys#standard-output 
o|propagated global variable: out24972501 ##sys#standard-output 
o|propagated global variable: out25052509 ##sys#standard-output 
o|propagated global variable: out25132517 ##sys#standard-output 
o|propagated global variable: out25212525 ##sys#standard-output 
o|propagated global variable: out25292533 ##sys#standard-output 
o|substituted constant variable: r1256616457 
o|substituted constant variable: r1259716461 
o|substituted constant variable: r1266716468 
o|substituted constant variable: r1274316479 
o|removed side-effect free assignment to unused variable: err3012 
o|substituted constant variable: r1374216593 
o|substituted constant variable: r1379716594 
o|substituted constant variable: r1381216596 
o|substituted constant variable: r1383016598 
o|substituted constant variable: r1383016599 
o|substituted constant variable: r1383816600 
o|substituted constant variable: r1385316602 
o|substituted constant variable: r1385316603 
o|substituted constant variable: r1386116604 
o|substituted constant variable: r1387316606 
o|substituted constant variable: r1387316607 
o|substituted constant variable: r1388116608 
o|substituted constant variable: r1391416612 
o|substituted constant variable: r1392616614 
o|substituted constant variable: r1393816616 
o|substituted constant variable: r1395016618 
o|substituted constant variable: r1396216620 
o|substituted constant variable: r1397716622 
o|substituted constant variable: r1399216624 
o|substituted constant variable: r1401016626 
o|substituted constant variable: r1402316628 
o|substituted constant variable: r1404516630 
o|substituted constant variable: r1454216666 
o|converted assignments to bindings: (resolve3567) 
o|substituted constant variable: r1501416697 
o|propagated global variable: out35973601 ##sys#standard-output 
o|substituted constant variable: r1510816705 
o|propagated global variable: out37253729 ##sys#standard-output 
o|propagated global variable: out37623766 ##sys#standard-output 
o|propagated global variable: out37723776 ##sys#standard-output 
o|substituted constant variable: r1552016730 
o|substituted constant variable: r1552016730 
o|substituted constant variable: r1564016743 
o|substituted constant variable: mark3839 
o|substituted constant variable: mark3856 
o|substituted constant variable: r1570716744 
o|substituted constant variable: mark3899 
o|substituted constant variable: mark3910 
o|substituted constant variable: r1577516749 
o|simplifications: ((let . 2)) 
o|replaced variables: 67 
o|removed binding forms: 2816 
o|substituted constant variable: r48101596216755 
o|substituted constant variable: r48101596316757 
o|inlining procedure: k6294 
o|inlining procedure: k6269 
o|inlining procedure: k6246 
o|inlining procedure: k6221 
o|inlining procedure: k6198 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k6911 
o|inlining procedure: k10662 
o|inlining procedure: k10980 
o|inlining procedure: k12181 
o|inlining procedure: k12553 
o|inlining procedure: k12553 
o|inlining procedure: k12553 
o|inlining procedure: k12584 
o|inlining procedure: k12584 
o|inlining procedure: k12584 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k14588 
o|inlining procedure: k14588 
o|inlining procedure: k15101 
o|inlining procedure: k15101 
o|inlining procedure: k15665 
o|inlining procedure: k15685 
o|inlining procedure: k15728 
o|inlining procedure: k15872 
o|replaced variables: 101 
o|removed binding forms: 191 
o|substituted constant variable: r629517019 
o|substituted constant variable: r627017022 
o|substituted constant variable: r624717023 
o|substituted constant variable: r622217026 
o|substituted constant variable: r619917027 
o|inlining procedure: k7984 
o|substituted constant variable: r1066317138 
o|substituted constant variable: r1255417156 
o|substituted constant variable: r1255417156 
o|substituted constant variable: r1255417156 
o|substituted constant variable: r1255417159 
o|substituted constant variable: r1255417159 
o|substituted constant variable: r1255417159 
o|substituted constant variable: r1255417162 
o|substituted constant variable: r1255417162 
o|substituted constant variable: r1255417162 
o|substituted constant variable: r1258517165 
o|substituted constant variable: r1258517165 
o|substituted constant variable: r1258517165 
o|substituted constant variable: r1258517168 
o|substituted constant variable: r1258517168 
o|substituted constant variable: r1258517168 
o|substituted constant variable: r1258517171 
o|substituted constant variable: r1258517171 
o|substituted constant variable: r1258517171 
o|substituted constant variable: r1510217210 
o|substituted constant variable: r1510217210 
o|substituted constant variable: r1510217210 
o|substituted constant variable: r1510217213 
o|substituted constant variable: r1510217213 
o|substituted constant variable: r1510217213 
o|substituted constant variable: r1566617228 
o|substituted constant variable: r1568617229 
o|substituted constant variable: r1572917230 
o|replaced variables: 7 
o|removed binding forms: 123 
o|removed conditional forms: 8 
o|substituted constant variable: r798517283 
o|removed binding forms: 25 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 71) (##core#call . 1380)) 
o|  call simplifications:
o|    ##sys#fudge
o|    read-char	3
o|    ##sys#size
o|    fx>	2
o|    write-char	6
o|    procedure?
o|    fx+	2
o|    string-length	3
o|    >	2
o|    string-ref	2
o|    list?	4
o|    vector-ref	6
o|    <
o|    *
o|    -	2
o|    first	19
o|    positive?
o|    not-pair?	5
o|    ##sys#call-with-values	5
o|    cdddr
o|    second	10
o|    third	6
o|    fourth	4
o|    caddr	4
o|    cadr	24
o|    integer?
o|    inexact->exact
o|    ##sys#check-structure	7
o|    ##sys#block-ref	4
o|    ##sys#structure?	4
o|    ##sys#make-structure	31
o|    cdar	6
o|    caar	5
o|    length	8
o|    values	4
o|    +	7
o|    ##sys#setslot	36
o|    assq	17
o|    alist-cons	8
o|    atom?
o|    ##sys#apply	2
o|    ##sys#cons	7
o|    equal?	3
o|    ##sys#list	131
o|    fixnum?	2
o|    number?	4
o|    char?	4
o|    boolean?	4
o|    eof-object?	5
o|    vector?	8
o|    member
o|    cddr	3
o|    list	50
o|    string=?	2
o|    not	12
o|    ##sys#foreign-fixnum-argument	2
o|    char-alphabetic?	2
o|    char-numeric?
o|    char=?	6
o|    char->integer
o|    fx>=	2
o|    fx<	4
o|    string->list	3
o|    list->string
o|    zero?	3
o|    sub1	4
o|    string?	4
o|    eqv?
o|    eq?	379
o|    add1	4
o|    null?	41
o|    cons	61
o|    car	51
o|    cdr	20
o|    ##sys#check-list	40
o|    symbol?	18
o|    memq	12
o|    ##sys#slot	152
o|    pair?	69
o|    apply	5
o|contracted procedure: k4704 
o|contracted procedure: k4747 
o|contracted procedure: k4777 
o|contracted procedure: k4787 
o|contracted procedure: k4791 
o|contracted procedure: k4812 
o|contracted procedure: k4827 
o|contracted procedure: k4836 
o|contracted procedure: k4873 
o|propagated global variable: out112116 ##compiler#collected-debugging-output 
o|contracted procedure: k4889 
o|contracted procedure: k4899 
o|contracted procedure: k4903 
o|contracted procedure: k4912 
o|contracted procedure: k4992 
o|contracted procedure: k5010 
o|contracted procedure: k5020 
o|contracted procedure: k5024 
o|contracted procedure: k5063 
o|contracted procedure: k5067 
o|contracted procedure: k5071 
o|contracted procedure: k5090 
o|contracted procedure: k5096 
o|contracted procedure: k5116 
o|contracted procedure: k5137 
o|contracted procedure: k5149 
o|contracted procedure: k5155 
o|contracted procedure: k5161 
o|contracted procedure: k5170 
o|contracted procedure: k5180 
o|contracted procedure: k5184 
o|contracted procedure: k5199 
o|contracted procedure: k5218 
o|contracted procedure: k5205 
o|contracted procedure: k5214 
o|contracted procedure: k5233 
o|contracted procedure: k5252 
o|contracted procedure: k5239 
o|contracted procedure: k5248 
o|contracted procedure: k5261 
o|contracted procedure: k5267 
o|contracted procedure: k5291 
o|contracted procedure: k5297 
o|contracted procedure: k5351 
o|contracted procedure: k5354 
o|contracted procedure: k5364 
o|contracted procedure: k5374 
o|contracted procedure: k5388 
o|contracted procedure: k5405 
o|contracted procedure: k5408 
o|contracted procedure: k5411 
o|contracted procedure: k5417 
o|contracted procedure: k5444 
o|contracted procedure: k5450 
o|contracted procedure: k5466 
o|contracted procedure: k5487 
o|contracted procedure: k5494 
o|contracted procedure: k5497 
o|contracted procedure: k5506 
o|contracted procedure: k5512 
o|contracted procedure: k5534 
o|contracted procedure: k5541 
o|contracted procedure: k5550 
o|contracted procedure: k5565 
o|contracted procedure: k5578 
o|contracted procedure: k5585 
o|contracted procedure: k5594 
o|contracted procedure: k5653 
o|contracted procedure: k5606 
o|contracted procedure: k5649 
o|contracted procedure: k5626 
o|inlining procedure: k5623 
o|inlining procedure: k5623 
o|contracted procedure: k5668 
o|contracted procedure: k5684 
o|contracted procedure: k5710 
o|contracted procedure: k5716 
o|contracted procedure: k5722 
o|contracted procedure: k5728 
o|contracted procedure: k5734 
o|contracted procedure: k5746 
o|contracted procedure: k5761 
o|contracted procedure: k5772 
o|contracted procedure: k5778 
o|contracted procedure: k5784 
o|contracted procedure: k5790 
o|contracted procedure: k5808 
o|contracted procedure: k5814 
o|contracted procedure: k5820 
o|contracted procedure: k5826 
o|contracted procedure: k5835 
o|contracted procedure: k5848 
o|contracted procedure: k5854 
o|contracted procedure: k5875 
o|contracted procedure: k5891 
o|contracted procedure: k5913 
o|contracted procedure: k5971 
o|contracted procedure: k5919 
o|contracted procedure: k5927 
o|contracted procedure: k5952 
o|contracted procedure: k5942 
o|contracted procedure: k6031 
o|contracted procedure: k6045 
o|contracted procedure: k6037 
o|contracted procedure: k6098 
o|contracted procedure: k6104 
o|contracted procedure: k6113 
o|contracted procedure: k6123 
o|contracted procedure: k6127 
o|contracted procedure: k6137 
o|contracted procedure: k6141 
o|contracted procedure: k6184 
o|contracted procedure: k6180 
o|contracted procedure: k6152 
o|contracted procedure: k6176 
o|contracted procedure: k6172 
o|contracted procedure: k6156 
o|contracted procedure: k6168 
o|contracted procedure: k6164 
o|contracted procedure: k6160 
o|contracted procedure: k6148 
o|contracted procedure: k6236 
o|contracted procedure: k6284 
o|contracted procedure: k6309 
o|contracted procedure: k6321 
o|contracted procedure: k6331 
o|contracted procedure: k6335 
o|contracted procedure: k6300 
o|contracted procedure: k6294 
o|propagated global variable: g640642 ##compiler#internal-bindings 
o|contracted procedure: k6344 
o|contracted procedure: k6354 
o|contracted procedure: k6358 
o|contracted procedure: k6264 
o|contracted procedure: k6275 
o|contracted procedure: k6269 
o|contracted procedure: k6252 
o|contracted procedure: k6246 
o|propagated global variable: g591593 extended-bindings 
o|contracted procedure: k6367 
o|contracted procedure: k6377 
o|contracted procedure: k6381 
o|contracted procedure: k6216 
o|contracted procedure: k6227 
o|contracted procedure: k6221 
o|contracted procedure: k6204 
o|contracted procedure: k6198 
o|propagated global variable: g542544 standard-bindings 
o|contracted procedure: k6393 
o|contracted procedure: k6429 
o|contracted procedure: k6449 
o|contracted procedure: k6445 
o|contracted procedure: k6463 
o|contracted procedure: k6459 
o|contracted procedure: k6475 
o|contracted procedure: k6489 
o|contracted procedure: k6485 
o|contracted procedure: k6500 
o|contracted procedure: k6504 
o|contracted procedure: k6496 
o|contracted procedure: k6515 
o|contracted procedure: k6511 
o|contracted procedure: k6530 
o|contracted procedure: k6544 
o|contracted procedure: k6540 
o|contracted procedure: k6555 
o|contracted procedure: k6551 
o|contracted procedure: k6566 
o|contracted procedure: k6562 
o|contracted procedure: k6569 
o|contracted procedure: k6589 
o|contracted procedure: k6595 
o|contracted procedure: k6613 
o|contracted procedure: k6617 
o|contracted procedure: k6630 
o|contracted procedure: k6661 
o|contracted procedure: k6673 
o|contracted procedure: k6699 
o|contracted procedure: k6695 
o|contracted procedure: k6676 
o|contracted procedure: k6687 
o|contracted procedure: k6717 
o|contracted procedure: k6738 
o|contracted procedure: k6751 
o|contracted procedure: k6754 
o|contracted procedure: k6767 
o|contracted procedure: k6792 
o|contracted procedure: k6801 
o|contracted procedure: k6783 
o|contracted procedure: k6829 
o|contracted procedure: k6838 
o|contracted procedure: k6820 
o|contracted procedure: k6866 
o|contracted procedure: k6875 
o|contracted procedure: k6857 
o|contracted procedure: k6882 
o|contracted procedure: k6889 
o|contracted procedure: k6896 
o|contracted procedure: k6905 
o|contracted procedure: k6908 
o|contracted procedure: k6919 
o|contracted procedure: k6943 
o|contracted procedure: k6939 
o|contracted procedure: k6935 
o|contracted procedure: k6949 
o|contracted procedure: k6956 
o|contracted procedure: k6962 
o|contracted procedure: k6966 
o|contracted procedure: k6972 
o|contracted procedure: k6978 
o|contracted procedure: k6982 
o|contracted procedure: k6988 
o|contracted procedure: k6992 
o|contracted procedure: k6998 
o|contracted procedure: k7020 
o|contracted procedure: k7024 
o|contracted procedure: k7030 
o|contracted procedure: k7034 
o|contracted procedure: k7040 
o|contracted procedure: k7044 
o|contracted procedure: k7056 
o|contracted procedure: k7062 
o|contracted procedure: k7068 
o|contracted procedure: k7074 
o|contracted procedure: k7080 
o|contracted procedure: k7086 
o|contracted procedure: k7092 
o|contracted procedure: k7127 
o|contracted procedure: k7133 
o|contracted procedure: k7139 
o|contracted procedure: k7145 
o|contracted procedure: k7151 
o|contracted procedure: k7157 
o|contracted procedure: k7163 
o|contracted procedure: k7169 
o|contracted procedure: k7175 
o|contracted procedure: k7181 
o|contracted procedure: k7187 
o|contracted procedure: k7193 
o|contracted procedure: k7199 
o|contracted procedure: k7205 
o|contracted procedure: k7211 
o|contracted procedure: k7217 
o|contracted procedure: k7223 
o|contracted procedure: k7229 
o|contracted procedure: k7235 
o|contracted procedure: k7305 
o|contracted procedure: k7314 
o|contracted procedure: k7323 
o|contracted procedure: k7332 
o|contracted procedure: k7341 
o|contracted procedure: k7350 
o|contracted procedure: k7377 
o|contracted procedure: k7392 
o|contracted procedure: k7404 
o|contracted procedure: k7418 
o|contracted procedure: k7424 
o|contracted procedure: k8578 
o|contracted procedure: k7433 
o|contracted procedure: k7440 
o|contracted procedure: k7443 
o|contracted procedure: k7458 
o|contracted procedure: k7470 
o|contracted procedure: k7473 
o|contracted procedure: k7484 
o|contracted procedure: k7496 
o|contracted procedure: k7502 
o|contracted procedure: k7505 
o|contracted procedure: k7512 
o|contracted procedure: k7528 
o|contracted procedure: k7534 
o|contracted procedure: k7541 
o|contracted procedure: k7547 
o|contracted procedure: k7550 
o|contracted procedure: k7553 
o|contracted procedure: k7559 
o|contracted procedure: k7602 
o|contracted procedure: k7605 
o|contracted procedure: k7608 
o|contracted procedure: k7615 
o|contracted procedure: k7628 
o|contracted procedure: k7631 
o|contracted procedure: k7642 
o|contracted procedure: k7654 
o|contracted procedure: k7663 
o|contracted procedure: k7666 
o|contracted procedure: k7677 
o|contracted procedure: k7689 
o|contracted procedure: k7579 
o|contracted procedure: k7695 
o|contracted procedure: k7698 
o|contracted procedure: k7726 
o|contracted procedure: k7710 
o|contracted procedure: k7714 
o|contracted procedure: k7722 
o|contracted procedure: k7732 
o|contracted procedure: k7760 
o|contracted procedure: k7764 
o|contracted procedure: k7744 
o|contracted procedure: k7748 
o|contracted procedure: k7756 
o|contracted procedure: k7770 
o|contracted procedure: k7777 
o|contracted procedure: k7781 
o|contracted procedure: k7790 
o|contracted procedure: k7823 
o|contracted procedure: k7802 
o|contracted procedure: k7819 
o|contracted procedure: k7810 
o|contracted procedure: k7902 
o|contracted procedure: k7833 
o|contracted procedure: k7865 
o|contracted procedure: k7845 
o|contracted procedure: k7853 
o|contracted procedure: k7873 
o|contracted procedure: k7898 
o|contracted procedure: k7882 
o|contracted procedure: k7886 
o|contracted procedure: k7916 
o|contracted procedure: k7919 
o|contracted procedure: k7939 
o|contracted procedure: k7951 
o|contracted procedure: k7954 
o|contracted procedure: k7965 
o|contracted procedure: k7977 
o|contracted procedure: k7990 
o|contracted procedure: k7984 
o|contracted procedure: k7981 
o|contracted procedure: k8001 
o|contracted procedure: k8004 
o|contracted procedure: k8066 
o|contracted procedure: k8018 
o|contracted procedure: k8024 
o|contracted procedure: k8036 
o|contracted procedure: k8039 
o|contracted procedure: k8050 
o|contracted procedure: k8062 
o|contracted procedure: k8072 
o|contracted procedure: k8088 
o|contracted procedure: k8084 
o|contracted procedure: k8094 
o|contracted procedure: k8097 
o|contracted procedure: k8157 
o|contracted procedure: k8109 
o|contracted procedure: k8115 
o|contracted procedure: k8127 
o|contracted procedure: k8130 
o|contracted procedure: k8141 
o|contracted procedure: k8153 
o|contracted procedure: k8163 
o|contracted procedure: k8218 
o|contracted procedure: k8166 
o|contracted procedure: k8214 
o|contracted procedure: k8194 
o|contracted procedure: k8210 
o|contracted procedure: k8198 
o|contracted procedure: k8202 
o|contracted procedure: k8178 
o|contracted procedure: k8182 
o|contracted procedure: k8224 
o|contracted procedure: k8241 
o|contracted procedure: k8247 
o|contracted procedure: k8259 
o|contracted procedure: k8262 
o|contracted procedure: k8273 
o|contracted procedure: k8285 
o|contracted procedure: k8291 
o|contracted procedure: k8303 
o|contracted procedure: k8308 
o|contracted procedure: k8320 
o|contracted procedure: k8323 
o|contracted procedure: k8334 
o|contracted procedure: k8346 
o|contracted procedure: k8370 
o|contracted procedure: k8374 
o|contracted procedure: k8386 
o|contracted procedure: k8389 
o|contracted procedure: k8400 
o|contracted procedure: k8412 
o|contracted procedure: k8448 
o|contracted procedure: k8453 
o|contracted procedure: k8459 
o|contracted procedure: k8465 
o|contracted procedure: k8535 
o|contracted procedure: k8548 
o|contracted procedure: k8551 
o|contracted procedure: k8562 
o|contracted procedure: k8574 
o|contracted procedure: k8587 
o|contracted procedure: k8607 
o|contracted procedure: k8615 
o|contracted procedure: k8623 
o|contracted procedure: k8629 
o|contracted procedure: k8639 
o|contracted procedure: k8651 
o|contracted procedure: k8654 
o|contracted procedure: k8665 
o|contracted procedure: k8677 
o|contracted procedure: k8683 
o|contracted procedure: k8694 
o|contracted procedure: k8690 
o|contracted procedure: k8706 
o|contracted procedure: k8709 
o|contracted procedure: k8720 
o|contracted procedure: k8732 
o|contracted procedure: k8738 
o|contracted procedure: k8747 
o|contracted procedure: k8750 
o|contracted procedure: k8756 
o|inlining procedure: k8759 
o|contracted procedure: k8767 
o|inlining procedure: k8759 
o|contracted procedure: k8773 
o|inlining procedure: k8759 
o|contracted procedure: k8785 
o|contracted procedure: k8798 
o|contracted procedure: k8801 
o|contracted procedure: k8858 
o|contracted procedure: k8821 
o|contracted procedure: k8851 
o|contracted procedure: k8855 
o|contracted procedure: k8847 
o|contracted procedure: k8824 
o|contracted procedure: k8835 
o|contracted procedure: k8839 
o|contracted procedure: k8870 
o|contracted procedure: k8873 
o|contracted procedure: k8884 
o|contracted procedure: k8896 
o|contracted procedure: k8902 
o|contracted procedure: k8924 
o|contracted procedure: k8909 
o|contracted procedure: k8913 
o|contracted procedure: k8921 
o|contracted procedure: k8930 
o|contracted procedure: k8937 
o|contracted procedure: k8945 
o|contracted procedure: k8951 
o|contracted procedure: k8958 
o|contracted procedure: k8964 
o|contracted procedure: k8971 
o|contracted procedure: k8983 
o|contracted procedure: k8994 
o|contracted procedure: k9000 
o|contracted procedure: k9007 
o|contracted procedure: k9015 
o|contracted procedure: k9034 
o|contracted procedure: k9022 
o|contracted procedure: k9042 
o|contracted procedure: k9046 
o|contracted procedure: k9052 
o|contracted procedure: k9055 
o|contracted procedure: k9067 
o|contracted procedure: k9070 
o|contracted procedure: k9081 
o|contracted procedure: k9093 
o|contracted procedure: k9099 
o|contracted procedure: k9106 
o|contracted procedure: k9110 
o|contracted procedure: k9122 
o|contracted procedure: k9125 
o|contracted procedure: k9136 
o|contracted procedure: k9148 
o|contracted procedure: k9154 
o|contracted procedure: k9163 
o|contracted procedure: k9170 
o|contracted procedure: k9179 
o|contracted procedure: k9194 
o|contracted procedure: k9201 
o|contracted procedure: k9205 
o|contracted procedure: k9209 
o|contracted procedure: k9221 
o|contracted procedure: k9236 
o|contracted procedure: k9248 
o|contracted procedure: k9251 
o|contracted procedure: k9262 
o|contracted procedure: k9274 
o|contracted procedure: k9278 
o|contracted procedure: k9284 
o|contracted procedure: k9287 
o|contracted procedure: k9294 
o|contracted procedure: k9306 
o|contracted procedure: k9309 
o|contracted procedure: k9320 
o|contracted procedure: k9332 
o|contracted procedure: k9343 
o|contracted procedure: k9355 
o|contracted procedure: k9358 
o|contracted procedure: k9369 
o|contracted procedure: k9381 
o|contracted procedure: k9391 
o|contracted procedure: k9397 
o|contracted procedure: k9438 
o|contracted procedure: k9500 
o|contracted procedure: k9465 
o|contracted procedure: k9480 
o|contracted procedure: k9496 
o|contracted procedure: k9545 
o|contracted procedure: k9549 
o|contracted procedure: k9569 
o|contracted procedure: k9573 
o|contracted procedure: k9580 
o|contracted procedure: k9603 
o|contracted procedure: k9599 
o|contracted procedure: k9595 
o|contracted procedure: k9613 
o|contracted procedure: k9625 
o|contracted procedure: k9628 
o|contracted procedure: k9639 
o|contracted procedure: k9651 
o|contracted procedure: k9657 
o|contracted procedure: k9660 
o|contracted procedure: k9680 
o|contracted procedure: k9688 
o|contracted procedure: k9696 
o|contracted procedure: k9702 
o|contracted procedure: k9716 
o|contracted procedure: k9719 
o|contracted procedure: k9741 
o|contracted procedure: k9753 
o|contracted procedure: k9757 
o|contracted procedure: k9765 
o|contracted procedure: k9773 
o|contracted procedure: k9779 
o|contracted procedure: k9782 
o|contracted procedure: k9791 
o|contracted procedure: k9806 
o|contracted procedure: k9810 
o|contracted procedure: k9818 
o|contracted procedure: k9822 
o|contracted procedure: k9828 
o|contracted procedure: k9835 
o|contracted procedure: k9849 
o|contracted procedure: k9922 
o|contracted procedure: k9930 
o|contracted procedure: k9867 
o|contracted procedure: k9876 
o|contracted procedure: k9888 
o|contracted procedure: k9891 
o|contracted procedure: k9902 
o|contracted procedure: k9914 
o|contracted procedure: k9941 
o|contracted procedure: k9990 
o|contracted procedure: k9953 
o|contracted procedure: k9983 
o|contracted procedure: k9987 
o|contracted procedure: k9979 
o|contracted procedure: k9956 
o|contracted procedure: k9967 
o|contracted procedure: k9971 
o|contracted procedure: k10002 
o|contracted procedure: k10005 
o|contracted procedure: k10016 
o|contracted procedure: k10028 
o|contracted procedure: k10049 
o|contracted procedure: k10061 
o|contracted procedure: k10064 
o|contracted procedure: k10075 
o|contracted procedure: k10087 
o|contracted procedure: k10146 
o|contracted procedure: k10109 
o|contracted procedure: k10139 
o|contracted procedure: k10143 
o|contracted procedure: k10135 
o|contracted procedure: k10112 
o|contracted procedure: k10123 
o|contracted procedure: k10127 
o|contracted procedure: k10164 
o|contracted procedure: k10200 
o|contracted procedure: k10209 
o|contracted procedure: k10218 
o|contracted procedure: k10239 
o|contracted procedure: k10252 
o|contracted procedure: k10261 
o|contracted procedure: k10264 
o|contracted procedure: k10243 
o|contracted procedure: k10276 
o|contracted procedure: k10279 
o|contracted procedure: k10290 
o|contracted procedure: k10302 
o|contracted procedure: k10323 
o|contracted procedure: k10327 
o|contracted procedure: k10333 
o|contracted procedure: k10345 
o|contracted procedure: k10348 
o|contracted procedure: k10359 
o|contracted procedure: k10371 
o|contracted procedure: k10397 
o|contracted procedure: k10409 
o|contracted procedure: k10419 
o|contracted procedure: k10423 
o|contracted procedure: k10426 
o|contracted procedure: k10432 
o|contracted procedure: k10470 
o|contracted procedure: k10480 
o|contracted procedure: k10484 
o|contracted procedure: k10500 
o|contracted procedure: k10624 
o|contracted procedure: k10515 
o|contracted procedure: k10518 
o|contracted procedure: k10527 
o|contracted procedure: k10604 
o|contracted procedure: k10535 
o|contracted procedure: k10562 
o|contracted procedure: k10570 
o|contracted procedure: k10566 
o|contracted procedure: k10579 
o|contracted procedure: k10585 
o|contracted procedure: k10592 
o|contracted procedure: k10615 
o|contracted procedure: k10611 
o|contracted procedure: k10657 
o|contracted procedure: k10681 
o|contracted procedure: k10668 
o|contracted procedure: k10662 
o|contracted procedure: k10689 
o|contracted procedure: k10698 
o|contracted procedure: k10710 
o|contracted procedure: k10719 
o|contracted procedure: k10723 
o|contracted procedure: k10735 
o|contracted procedure: k10744 
o|contracted procedure: k10761 
o|contracted procedure: k10765 
o|contracted procedure: k10774 
o|contracted procedure: k10875 
o|contracted procedure: k10879 
o|contracted procedure: k10783 
o|contracted procedure: k10801 
o|contracted procedure: k10805 
o|contracted procedure: k10814 
o|contracted procedure: k10823 
o|contracted procedure: k10832 
o|contracted procedure: k10849 
o|contracted procedure: k10853 
o|contracted procedure: k10862 
o|contracted procedure: k10866 
o|contracted procedure: k10897 
o|contracted procedure: k10906 
o|contracted procedure: k10923 
o|contracted procedure: k10931 
o|contracted procedure: k10937 
o|contracted procedure: k10946 
o|contracted procedure: k10971 
o|contracted procedure: k10949 
o|contracted procedure: k10977 
o|contracted procedure: k10980 
o|contracted procedure: k10995 
o|contracted procedure: k11001 
o|contracted procedure: k11026 
o|contracted procedure: k11029 
o|contracted procedure: k11135 
o|contracted procedure: k11032 
o|contracted procedure: k11054 
o|contracted procedure: k11060 
o|contracted procedure: k11068 
o|contracted procedure: k11071 
o|contracted procedure: k11110 
o|contracted procedure: k11077 
o|contracted procedure: k11101 
o|contracted procedure: k11092 
o|contracted procedure: k11083 
o|contracted procedure: k11116 
o|contracted procedure: k11128 
o|contracted procedure: k11166 
o|contracted procedure: k11173 
o|contracted procedure: k11207 
o|contracted procedure: k11229 
o|contracted procedure: k11232 
o|contracted procedure: k11253 
o|contracted procedure: k11246 
o|inlining procedure: k11242 
o|inlining procedure: k11242 
o|contracted procedure: k11272 
o|contracted procedure: k11302 
o|contracted procedure: k11305 
o|contracted procedure: k11311 
o|contracted procedure: k11315 
o|contracted procedure: k11321 
o|contracted procedure: k11325 
o|contracted procedure: k11344 
o|contracted procedure: k11331 
o|contracted procedure: k11335 
o|contracted procedure: k11352 
o|contracted procedure: k11360 
o|contracted procedure: k11356 
o|contracted procedure: k11371 
o|contracted procedure: k11383 
o|contracted procedure: k11393 
o|contracted procedure: k11397 
o|contracted procedure: k11525 
o|contracted procedure: k11537 
o|contracted procedure: k11547 
o|contracted procedure: k11551 
o|contracted procedure: k11575 
o|contracted procedure: k11578 
o|contracted procedure: k11590 
o|contracted procedure: k11605 
o|contracted procedure: k11620 
o|contracted procedure: k11623 
o|contracted procedure: k11652 
o|contracted procedure: k11633 
o|contracted procedure: k11641 
o|contracted procedure: k11645 
o|contracted procedure: k11637 
o|contracted procedure: k11658 
o|contracted procedure: k11661 
o|contracted procedure: k11673 
o|contracted procedure: k11706 
o|contracted procedure: k11683 
o|contracted procedure: k11695 
o|contracted procedure: k11687 
o|contracted procedure: k11702 
o|contracted procedure: k11712 
o|contracted procedure: k11722 
o|contracted procedure: k11728 
o|contracted procedure: k11764 
o|contracted procedure: k11741 
o|contracted procedure: k11753 
o|contracted procedure: k11745 
o|contracted procedure: k11760 
o|contracted procedure: k11770 
o|contracted procedure: k11787 
o|contracted procedure: k11783 
o|contracted procedure: k11796 
o|contracted procedure: k11811 
o|contracted procedure: k11823 
o|contracted procedure: k11838 
o|contracted procedure: k11850 
o|contracted procedure: k11879 
o|contracted procedure: k11863 
o|contracted procedure: k11871 
o|contracted procedure: k11875 
o|contracted procedure: k11867 
o|contracted procedure: k11885 
o|contracted procedure: k11894 
o|contracted procedure: k11933 
o|contracted procedure: k11907 
o|contracted procedure: k11919 
o|contracted procedure: k11911 
o|contracted procedure: k11929 
o|contracted procedure: k11939 
o|contracted procedure: k11955 
o|contracted procedure: k11961 
o|contracted procedure: k11971 
o|contracted procedure: k11982 
o|contracted procedure: k11978 
o|contracted procedure: k12000 
o|contracted procedure: k11997 
o|contracted procedure: k12012 
o|contracted procedure: k12019 
o|contracted procedure: k12048 
o|contracted procedure: k12032 
o|contracted procedure: k12040 
o|contracted procedure: k12044 
o|contracted procedure: k12036 
o|contracted procedure: k12054 
o|contracted procedure: k12057 
o|contracted procedure: k12087 
o|contracted procedure: k12067 
o|contracted procedure: k12083 
o|contracted procedure: k12075 
o|contracted procedure: k12079 
o|contracted procedure: k12071 
o|contracted procedure: k12093 
o|contracted procedure: k12122 
o|contracted procedure: k12103 
o|contracted procedure: k12111 
o|contracted procedure: k12115 
o|contracted procedure: k12107 
o|contracted procedure: k12128 
o|contracted procedure: k12140 
o|contracted procedure: k12147 
o|contracted procedure: k12153 
o|contracted procedure: k12160 
o|contracted procedure: k12166 
o|contracted procedure: k12178 
o|contracted procedure: k12181 
o|contracted procedure: k12211 
o|contracted procedure: k12217 
o|contracted procedure: k12234 
o|contracted procedure: k12242 
o|contracted procedure: k12257 
o|contracted procedure: k12263 
o|contracted procedure: k12282 
o|contracted procedure: k12299 
o|contracted procedure: k12316 
o|contracted procedure: k12322 
o|contracted procedure: k12339 
o|contracted procedure: k12345 
o|contracted procedure: k12351 
o|contracted procedure: k12357 
o|contracted procedure: k12363 
o|contracted procedure: k12369 
o|contracted procedure: k12394 
o|contracted procedure: k12400 
o|contracted procedure: k12406 
o|contracted procedure: k12412 
o|contracted procedure: k12418 
o|contracted procedure: k12424 
o|contracted procedure: k12467 
o|contracted procedure: k12482 
o|contracted procedure: k12488 
o|contracted procedure: k12494 
o|contracted procedure: k12500 
o|contracted procedure: k12506 
o|contracted procedure: k12512 
o|contracted procedure: k12559 
o|contracted procedure: k12571 
o|contracted procedure: k12578 
o|contracted procedure: k12553 
o|contracted procedure: k12590 
o|contracted procedure: k12602 
o|contracted procedure: k12609 
o|contracted procedure: k12584 
o|contracted procedure: k12636 
o|contracted procedure: k12633 
o|contracted procedure: k12645 
o|contracted procedure: k12669 
o|contracted procedure: k12678 
o|contracted procedure: k12690 
o|contracted procedure: k12702 
o|contracted procedure: k12726 
o|contracted procedure: k12723 
o|contracted procedure: k12738 
o|contracted procedure: k12745 
o|contracted procedure: k12754 
o|contracted procedure: k12760 
o|contracted procedure: k12766 
o|contracted procedure: k12772 
o|contracted procedure: k12778 
o|contracted procedure: k12784 
o|contracted procedure: k12790 
o|contracted procedure: k12748 
o|contracted procedure: k12817 
o|contracted procedure: k12823 
o|contracted procedure: k12829 
o|contracted procedure: k12835 
o|contracted procedure: k12854 
o|contracted procedure: k12860 
o|contracted procedure: k12866 
o|contracted procedure: k12872 
o|contracted procedure: k12878 
o|contracted procedure: k12901 
o|contracted procedure: k12907 
o|contracted procedure: k12913 
o|contracted procedure: k12919 
o|contracted procedure: k12925 
o|contracted procedure: k12931 
o|contracted procedure: k12937 
o|contracted procedure: k12943 
o|contracted procedure: k12949 
o|contracted procedure: k12955 
o|contracted procedure: k12988 
o|contracted procedure: k12994 
o|contracted procedure: k13000 
o|contracted procedure: k13006 
o|contracted procedure: k13012 
o|contracted procedure: k13018 
o|contracted procedure: k13024 
o|contracted procedure: k13030 
o|contracted procedure: k13036 
o|contracted procedure: k13042 
o|contracted procedure: k13048 
o|contracted procedure: k13107 
o|contracted procedure: k13119 
o|contracted procedure: k13143 
o|contracted procedure: k13140 
o|contracted procedure: k13155 
o|contracted procedure: k13162 
o|contracted procedure: k13174 
o|contracted procedure: k13180 
o|contracted procedure: k13186 
o|contracted procedure: k13192 
o|contracted procedure: k13198 
o|contracted procedure: k13204 
o|contracted procedure: k13232 
o|contracted procedure: k13238 
o|contracted procedure: k13244 
o|contracted procedure: k13261 
o|contracted procedure: k13267 
o|contracted procedure: k13273 
o|contracted procedure: k13279 
o|contracted procedure: k13285 
o|contracted procedure: k13291 
o|contracted procedure: k13297 
o|contracted procedure: k13303 
o|contracted procedure: k13309 
o|contracted procedure: k13315 
o|contracted procedure: k13321 
o|contracted procedure: k13327 
o|contracted procedure: k13333 
o|contracted procedure: k13339 
o|contracted procedure: k13345 
o|contracted procedure: k13351 
o|contracted procedure: k13357 
o|contracted procedure: k13363 
o|contracted procedure: k13369 
o|contracted procedure: k13375 
o|contracted procedure: k13381 
o|contracted procedure: k13387 
o|contracted procedure: k13393 
o|contracted procedure: k13399 
o|contracted procedure: k13405 
o|contracted procedure: k13411 
o|contracted procedure: k13417 
o|contracted procedure: k13423 
o|contracted procedure: k13429 
o|contracted procedure: k13435 
o|contracted procedure: k13441 
o|contracted procedure: k13531 
o|contracted procedure: k13534 
o|contracted procedure: k13541 
o|contracted procedure: k13547 
o|contracted procedure: k13554 
o|contracted procedure: k13560 
o|contracted procedure: k13563 
o|contracted procedure: k13570 
o|contracted procedure: k13576 
o|contracted procedure: k13579 
o|contracted procedure: k13586 
o|contracted procedure: k13592 
o|contracted procedure: k13603 
o|contracted procedure: k13599 
o|contracted procedure: k13609 
o|contracted procedure: k13616 
o|contracted procedure: k13622 
o|contracted procedure: k13629 
o|contracted procedure: k13635 
o|contracted procedure: k13648 
o|contracted procedure: k13735 
o|contracted procedure: k13654 
o|contracted procedure: k13657 
o|contracted procedure: k13663 
o|contracted procedure: k13666 
o|contracted procedure: k13704 
o|contracted procedure: k13676 
o|contracted procedure: k13700 
o|contracted procedure: k13684 
o|contracted procedure: k13692 
o|contracted procedure: k13696 
o|contracted procedure: k13688 
o|contracted procedure: k13680 
o|contracted procedure: k13710 
o|contracted procedure: k13717 
o|contracted procedure: k13721 
o|contracted procedure: k13758 
o|contracted procedure: k13738 
o|contracted procedure: k13754 
o|contracted procedure: k13744 
o|contracted procedure: k13748 
o|contracted procedure: k13799 
o|contracted procedure: k13805 
o|contracted procedure: k13808 
o|contracted procedure: k13814 
o|contracted procedure: k13823 
o|contracted procedure: k13826 
o|contracted procedure: k13832 
o|contracted procedure: k13840 
o|contracted procedure: k13843 
o|contracted procedure: k13849 
o|contracted procedure: k13855 
o|contracted procedure: k13863 
o|contracted procedure: k13869 
o|contracted procedure: k13875 
o|contracted procedure: k13883 
o|contracted procedure: k13889 
o|contracted procedure: k13898 
o|contracted procedure: k13905 
o|contracted procedure: k13916 
o|contracted procedure: k13922 
o|contracted procedure: k13928 
o|contracted procedure: k13934 
o|contracted procedure: k13940 
o|contracted procedure: k13946 
o|contracted procedure: k13952 
o|contracted procedure: k13958 
o|contracted procedure: k13964 
o|contracted procedure: k13973 
o|contracted procedure: k13979 
o|contracted procedure: k13985 
o|contracted procedure: k13994 
o|contracted procedure: k13997 
o|contracted procedure: k14003 
o|contracted procedure: k14012 
o|contracted procedure: k14018 
o|contracted procedure: k14025 
o|contracted procedure: k14034 
o|contracted procedure: k14041 
o|contracted procedure: k14047 
o|contracted procedure: k14053 
o|contracted procedure: k14056 
o|contracted procedure: k14070 
o|contracted procedure: k14076 
o|contracted procedure: k14095 
o|contracted procedure: k14117 
o|contracted procedure: k14123 
o|contracted procedure: k14144 
o|contracted procedure: k14150 
o|contracted procedure: k14156 
o|contracted procedure: k14162 
o|contracted procedure: k14168 
o|contracted procedure: k14174 
o|contracted procedure: k14215 
o|contracted procedure: k14221 
o|contracted procedure: k14227 
o|contracted procedure: k14233 
o|contracted procedure: k14239 
o|contracted procedure: k14245 
o|contracted procedure: k14292 
o|contracted procedure: k14298 
o|contracted procedure: k14304 
o|contracted procedure: k14310 
o|contracted procedure: k14316 
o|contracted procedure: k14322 
o|contracted procedure: k14370 
o|contracted procedure: k14378 
o|contracted procedure: k14384 
o|contracted procedure: k14387 
o|contracted procedure: k14448 
o|contracted procedure: k14390 
o|contracted procedure: k14396 
o|contracted procedure: k14408 
o|contracted procedure: k14418 
o|contracted procedure: k14422 
o|contracted procedure: k14429 
o|contracted procedure: k14432 
o|contracted procedure: k14439 
o|contracted procedure: k14454 
o|contracted procedure: k14460 
o|contracted procedure: k14472 
o|contracted procedure: k14482 
o|contracted procedure: k14486 
o|contracted procedure: k14489 
o|contracted procedure: k14522 
o|contracted procedure: k14530 
o|contracted procedure: k14538 
o|contracted procedure: k14544 
o|contracted procedure: k14553 
o|contracted procedure: k14556 
o|contracted procedure: k14562 
o|contracted procedure: k14582 
o|contracted procedure: k14585 
o|contracted procedure: k14598 
o|contracted procedure: k1459517199 
o|contracted procedure: k1459517203 
o|contracted procedure: k14608 
o|contracted procedure: k14618 
o|contracted procedure: k14626 
o|contracted procedure: k14632 
o|contracted procedure: k14639 
o|contracted procedure: k14649 
o|contracted procedure: k14667 
o|contracted procedure: k14673 
o|contracted procedure: k14679 
o|contracted procedure: k14706 
o|contracted procedure: k14718 
o|contracted procedure: k14728 
o|contracted procedure: k14732 
o|contracted procedure: k14765 
o|contracted procedure: k14744 
o|contracted procedure: k14756 
o|contracted procedure: k14760 
o|contracted procedure: k14807 
o|contracted procedure: k14771 
o|contracted procedure: k14783 
o|contracted procedure: k14803 
o|contracted procedure: k14789 
o|contracted procedure: k14799 
o|contracted procedure: k14825 
o|contracted procedure: k14871 
o|inlining procedure: k14868 
o|contracted procedure: k14920 
o|contracted procedure: k14928 
o|contracted procedure: k14941 
o|contracted procedure: k14952 
o|contracted procedure: k14964 
o|contracted procedure: k14978 
o|contracted procedure: k14982 
o|contracted procedure: k15049 
o|contracted procedure: k15052 
o|contracted procedure: k15055 
o|contracted procedure: k15074 
o|contracted procedure: k15070 
o|contracted procedure: k15083 
o|contracted procedure: k15129 
o|contracted procedure: k15122 
o|contracted procedure: k15098 
o|contracted procedure: k15110 
o|contracted procedure: k15113 
o|contracted procedure: k15116 
o|contracted procedure: k15149 
o|contracted procedure: k15258 
o|contracted procedure: k15155 
o|contracted procedure: k15195 
o|contracted procedure: k15201 
o|contracted procedure: k15228 
o|contracted procedure: k15210 
o|contracted procedure: k15220 
o|contracted procedure: k15270 
o|contracted procedure: k15296 
o|contracted procedure: k15292 
o|contracted procedure: k15273 
o|contracted procedure: k15284 
o|contracted procedure: k15305 
o|contracted procedure: k15308 
o|contracted procedure: k15319 
o|contracted procedure: k15331 
o|contracted procedure: k15146 
o|contracted procedure: k15351 
o|contracted procedure: k15359 
o|contracted procedure: k15367 
o|contracted procedure: k15373 
o|contracted procedure: k15402 
o|contracted procedure: k15408 
o|contracted procedure: k15417 
o|contracted procedure: k15441 
o|contracted procedure: k15457 
o|contracted procedure: k15461 
o|contracted procedure: k15465 
o|contracted procedure: k15474 
o|contracted procedure: k15484 
o|contracted procedure: k15488 
o|contracted procedure: k15504 
o|inlining procedure: k15508 
o|inlining procedure: k15508 
o|contracted procedure: k15524 
o|contracted procedure: k15531 
o|contracted procedure: k15546 
o|contracted procedure: k15559 
o|contracted procedure: k15583 
o|contracted procedure: k15592 
o|contracted procedure: k15604 
o|contracted procedure: k15613 
o|contracted procedure: k15642 
o|contracted procedure: k15648 
o|contracted procedure: k15651 
o|contracted procedure: k15671 
o|contracted procedure: k15665 
o|contracted procedure: k15691 
o|contracted procedure: k15685 
o|contracted procedure: k15709 
o|contracted procedure: k15715 
o|contracted procedure: k15734 
o|contracted procedure: k15728 
o|contracted procedure: k15823 
o|contracted procedure: k15833 
o|contracted procedure: k15837 
o|contracted procedure: k15788 
o|contracted procedure: k15802 
o|contracted procedure: k15806 
o|contracted procedure: k15885 
o|contracted procedure: k15869 
o|contracted procedure: k15936 
o|contracted procedure: k15945 
o|simplifications: ((let . 161)) 
o|removed binding forms: 1141 
o|inlining procedure: k6679 
o|inlining procedure: k6679 
o|inlining procedure: k7476 
o|inlining procedure: k7476 
o|inlining procedure: k7634 
o|inlining procedure: k7634 
o|inlining procedure: k7669 
o|inlining procedure: k7669 
o|inlining procedure: k7957 
o|inlining procedure: k7957 
o|inlining procedure: k8042 
o|inlining procedure: k8042 
o|inlining procedure: k8133 
o|inlining procedure: k8133 
o|inlining procedure: k8265 
o|inlining procedure: k8265 
o|inlining procedure: k8326 
o|inlining procedure: k8326 
o|inlining procedure: k8392 
o|inlining procedure: k8392 
o|inlining procedure: k8554 
o|inlining procedure: k8554 
o|inlining procedure: k8657 
o|inlining procedure: k8657 
o|inlining procedure: k8712 
o|inlining procedure: k8712 
o|inlining procedure: k8876 
o|inlining procedure: k8876 
o|inlining procedure: k9073 
o|inlining procedure: k9073 
o|inlining procedure: k9128 
o|inlining procedure: k9128 
o|inlining procedure: k9254 
o|inlining procedure: k9254 
o|inlining procedure: k9312 
o|inlining procedure: k9312 
o|inlining procedure: k9361 
o|inlining procedure: k9361 
o|inlining procedure: k9577 
o|inlining procedure: k9631 
o|inlining procedure: k9631 
o|inlining procedure: k9894 
o|inlining procedure: k9894 
o|inlining procedure: k10008 
o|inlining procedure: k10008 
o|inlining procedure: k10067 
o|inlining procedure: k10067 
o|inlining procedure: k10282 
o|inlining procedure: k10282 
o|inlining procedure: k10351 
o|inlining procedure: k10351 
o|inlining procedure: k15276 
o|inlining procedure: k15276 
o|inlining procedure: k15311 
o|inlining procedure: k15311 
o|replaced variables: 379 
o|removed binding forms: 4 
o|simplifications: ((if . 17)) 
o|replaced variables: 7 
o|removed binding forms: 302 
o|contracted procedure: k15327 
o|replaced variables: 108 
o|removed binding forms: 2 
o|removed binding forms: 27 
o|direct leaf routine/allocation: loop509 0 
o|direct leaf routine/allocation: g22932294 0 
o|direct leaf routine/allocation: g24512458 20 
o|converted assignments to bindings: (loop509) 
o|contracted procedure: "(support.scm:959) k11386" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (for-each-loop39313946 loop3810 k15497 g37393746 for-each-loop37383756 doloop37693770 loop3708 map-loop36313652 map-loop36623683 resolve3567 loop3579 loop3520 k14750 g34953502 for-each-loop34943505 k14547 walkeach3450 walk3449 k14457 for-each-loop34283438 k14425 k14393 for-each-loop34043414 k13817 k13892 k13967 k13988 k14006 k14028 k13641 k13110 k13122 k13165 g31343135 k12672 k12681 k12693 k12705 g29772978 g28582859 k11593 k11608 k11731 k11773 k11799 k11826 k11853 k11897 k11942 k12022 repeat2572 g27812782 k11915 k11749 k11691 for-each-loop25482560 for-each-loop24502472 k11192 k11151 k10940 matchn2284 loop2313 match12283 resolve2282 loop2258 k10521 k10558 for-each-loop22092221 for-each-loop22312249 map-loop21482165 map-loop21092129 rec2076 k10115 map-loop18531872 g20462055 map-loop20402065 g19401949 map-loop19341954 k9959 map-loop19641983 g20072016 map-loop20012026 walk1883 map-loop18011818 k9553 fold1778 k8632 k9224 map-loop17501767 map-loop17241741 map-loop16951712 loop1676 map-loop16521669 map-loop16261643 loop1617 map-loop15771594 k8827 map-loop15561601 map-loop15141531 map-loop14851502 map-loop14281445 k8227 k8416 map-loop13971414 map-loop13511368 map-loop13201337 map-loop12711288 map-loop12321249 k7933 map-loop11981215 loop1165 map-loop11001118 g11331142 map-loop11271145 k7515 map-loop10631080 k6705 k6922 k7001 loop785 k6770 k6807 k6844 map-loop746763 k6601 g733734 k6524 for-each-loop535577 for-each-loop584626 for-each-loop633659 tmp14308 tmp24309 k5930 loop464 k5802 loop377 fold370 k5568 k5420 k5427 loop306 loop289 loop239 loop228 loop213 err212 loop201 k4981 g170177 for-each-loop169187 test-mode97 collect96 g102109 for-each-loop101121 text43 dump44 for-each-loop4765) 
o|calls to known targets: 525 
o|identified direct recursive calls: f_5144 1 
o|identified direct recursive calls: f_5194 1 
o|identified direct recursive calls: f_5228 1 
o|identified direct recursive calls: f_5346 1 
o|identified direct recursive calls: f_5617 1 
o|identified direct recursive calls: f_6093 1 
o|identified direct recursive calls: f_6668 2 
o|identified direct recursive calls: f_7399 4 
o|identified direct recursive calls: f_9673 1 
o|identified direct recursive calls: f_10159 1 
o|identified direct recursive calls: f_10730 1 
o|identified direct recursive calls: f_11378 1 
o|identified direct recursive calls: f_14778 1 
o|identified direct recursive calls: f_15265 2 
o|identified direct recursive calls: f_15300 2 
o|fast box initializations: 86 
o|dropping unused closure argument: f_4907 
o|dropping unused closure argument: f_14891 
o|dropping unused closure argument: f_6093 
*/
/* end of file */
