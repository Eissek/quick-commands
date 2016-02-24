/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:04
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file optimizer.c
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[229];
static double C_possibly_force_alignment;


C_noret_decl(f_9412)
static void C_ccall f_9412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9905)
static void C_fcall f_9905(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8081)
static void C_ccall f_8081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7304)
static void C_ccall f_7304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7338)
static void C_ccall f_7338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12486)
static void C_ccall f_12486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6073)
static void C_ccall f_6073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6001)
static void C_fcall f_6001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6010)
static void C_fcall f_6010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12457)
static void C_ccall f_12457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12447)
static void C_fcall f_12447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8006)
static void C_ccall f_8006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9390)
static void C_ccall f_9390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9388)
static void C_ccall f_9388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12438)
static void C_ccall f_12438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10040)
static void C_ccall f_10040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12428)
static void C_ccall f_12428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_fcall f_5324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5320)
static void C_fcall f_5320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_fcall f_3948(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11325)
static void C_fcall f_11325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5345)
static void C_ccall f_5345(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6926)
static void C_fcall f_6926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3933)
static void C_ccall f_3933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11336)
static void C_ccall f_11336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4490)
static void C_fcall f_4490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3701)
static void C_fcall f_3701(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12752)
static void C_ccall f_12752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11342)
static void C_ccall f_11342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11347)
static void C_ccall f_11347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11345)
static void C_ccall f_11345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8946)
static void C_ccall f_8946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8942)
static void C_fcall f_8942(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11350)
static C_word C_fcall f_11350(C_word *a,C_word t0);
C_noret_decl(f_13166)
static void C_ccall f_13166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static C_word C_fcall f_3724(C_word t0);
C_noret_decl(f_4601)
static void C_fcall f_4601(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3729)
static void C_fcall f_3729(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9355)
static void C_ccall f_9355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6322)
static void C_fcall f_6322(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_fcall f_3717(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13188)
static void C_ccall f_13188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3743)
static void C_fcall f_3743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7497)
static void C_ccall f_7497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13153)
static void C_ccall f_13153(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8907)
static void C_ccall f_8907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3731)
static void C_fcall f_3731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7373)
static void C_fcall f_7373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3766)
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11711)
static void C_fcall f_11711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11710)
static void C_ccall f_11710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6434)
static void C_fcall f_6434(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4626)
static void C_ccall f_4626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6444)
static void C_ccall f_6444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4696)
static void C_fcall f_4696(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4687)
static void C_fcall f_4687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4660)
static void C_fcall f_4660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_fcall f_4677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11751)
static void C_ccall f_11751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11707)
static void C_ccall f_11707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11319)
static void C_ccall f_11319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11317)
static void C_ccall f_11317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11243)
static void C_fcall f_11243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11253)
static void C_ccall f_11253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5383)
static void C_fcall f_5383(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5359)
static void C_ccall f_5359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9172)
static void C_ccall f_9172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10143)
static void C_fcall f_10143(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_11531)
static void C_fcall f_11531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10140)
static void C_fcall f_10140(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_11539)
static void C_ccall f_11539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3694)
static void C_fcall f_3694(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9198)
static void C_ccall f_9198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11774)
static void C_fcall f_11774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11546)
static void C_ccall f_11546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7768)
static void C_ccall f_7768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_fcall f_5469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11093)
static void C_ccall f_11093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12141)
static void C_ccall f_12141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10296)
static void C_ccall f_10296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12149)
static void C_ccall f_12149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5446)
static void C_fcall f_5446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9646)
static void C_ccall f_9646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13467)
static void C_fcall f_13467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13462)
static void C_ccall f_13462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5432)
static void C_fcall f_5432(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_13454)
static void C_ccall f_13454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13209)
static void C_ccall f_13209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8738)
static void C_fcall f_8738(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10262)
static void C_ccall f_10262(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13017)
static void C_ccall f_13017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13019)
static void C_ccall f_13019(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11939)
static void C_fcall f_11939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9119)
static void C_ccall f_9119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11969)
static void C_fcall f_11969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9694)
static void C_ccall f_9694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9163)
static void C_ccall f_9163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9139)
static void C_ccall f_9139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9832)
static void C_ccall f_9832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12966)
static void C_fcall f_12966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11846)
static void C_ccall f_11846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11847)
static void C_fcall f_11847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11840)
static void C_ccall f_11840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11843)
static void C_ccall f_11843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13192)
static void C_ccall f_13192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13196)
static void C_ccall f_13196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13477)
static void C_ccall f_13477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11837)
static void C_ccall f_11837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11831)
static void C_ccall f_11831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11834)
static void C_ccall f_11834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12908)
static void C_ccall f_12908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_fcall f_4120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4116)
static C_word C_fcall f_4116(C_word t0);
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13009)
static void C_ccall f_13009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6816)
static void C_fcall f_6816(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6810)
static void C_fcall f_6810(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11202)
static void C_ccall f_11202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11214)
static void C_fcall f_11214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11224)
static void C_ccall f_11224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_fcall f_4157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10111)
static void C_fcall f_10111(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10814)
static void C_ccall f_10814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4134)
static C_word C_fcall f_4134(C_word t0);
C_noret_decl(f_12297)
static void C_ccall f_12297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12299)
static void C_fcall f_12299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6866)
static void C_fcall f_6866(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6865)
static void C_ccall f_6865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11518)
static void C_fcall f_11518(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10121)
static void C_ccall f_10121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6876)
static void C_ccall f_6876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10801)
static void C_ccall f_10801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9809)
static void C_ccall f_9809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12794)
static void C_ccall f_12794(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12248)
static void C_ccall f_12248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10225)
static void C_ccall f_10225(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12244)
static void C_ccall f_12244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6853)
static void C_fcall f_6853(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6143)
static void C_fcall f_6143(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10241)
static void C_ccall f_10241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12176)
static void C_ccall f_12176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12172)
static void C_ccall f_12172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12216)
static void C_ccall f_12216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6110)
static void C_fcall f_6110(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12212)
static void C_ccall f_12212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12164)
static void C_ccall f_12164(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13123)
static void C_ccall f_13123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13129)
static void C_ccall f_13129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12236)
static void C_ccall f_12236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9279)
static void C_ccall f_9279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12182)
static void C_fcall f_12182(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6185)
static void C_ccall f_6185(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4289)
static void C_fcall f_4289(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6168)
static void C_ccall f_6168(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12705)
static void C_ccall f_12705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_10406)
static void C_fcall f_10406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_fcall f_4482(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10411)
static void C_ccall f_10411(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11456)
static void C_fcall f_11456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4502)
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9251)
static void C_ccall f_9251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9253)
static void C_ccall f_9253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11470)
static void C_fcall f_11470(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11914)
static void C_ccall f_11914(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_11949)
static void C_ccall f_11949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_fcall f_4400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6991)
static void C_ccall f_6991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11056)
static void C_ccall f_11056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11059)
static void C_ccall f_11059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7021)
static void C_fcall f_7021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7177)
static void C_fcall f_7177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11062)
static void C_ccall f_11062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11065)
static void C_ccall f_11065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11487)
static void C_ccall f_11487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11904)
static void C_ccall f_11904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6516)
static void C_ccall f_6516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11979)
static void C_ccall f_11979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6985)
static void C_ccall f_6985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6988)
static void C_ccall f_6988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7082)
static void C_ccall f_7082(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7008)
static void C_ccall f_7008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11992)
static void C_fcall f_11992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4591)
static void C_fcall f_4591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11851)
static void C_ccall f_11851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11852)
static void C_fcall f_11852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6557)
static void C_fcall f_6557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11410)
static void C_fcall f_11410(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11803)
static void C_ccall f_11803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6566)
static void C_fcall f_6566(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6545)
static void C_fcall f_6545(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11892)
static void C_ccall f_11892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11896)
static void C_ccall f_11896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8884)
static void C_ccall f_8884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8267)
static void C_fcall f_8267(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8261)
static void C_ccall f_8261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13283)
static void C_ccall f_13283(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13) C_noret;
C_noret_decl(f_6956)
static void C_ccall f_6956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6573)
static void C_ccall f_6573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6576)
static void C_ccall f_6576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13296)
static void C_ccall f_13296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6397)
static void C_ccall f_6397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11888)
static void C_ccall f_11888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11884)
static void C_ccall f_11884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13356)
static void C_ccall f_13356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11624)
static void C_ccall f_11624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9069)
static void C_fcall f_9069(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13347)
static void C_ccall f_13347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11631)
static void C_ccall f_11631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11641)
static void C_ccall f_11641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6359)
static void C_ccall f_6359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11650)
static void C_fcall f_11650(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8142)
static void C_fcall f_8142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7154)
static void C_fcall f_7154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10557)
static void C_ccall f_10557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9036)
static void C_ccall f_9036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13302)
static void C_ccall f_13302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12002)
static void C_fcall f_12002(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7164)
static void C_ccall f_7164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10546)
static void C_ccall f_10546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8817)
static void C_ccall f_8817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8813)
static void C_ccall f_8813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8232)
static void C_fcall f_8232(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13334)
static void C_ccall f_13334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13338)
static void C_ccall f_13338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13330)
static void C_ccall f_13330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8161)
static void C_ccall f_8161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5080)
static void C_fcall f_5080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8107)
static void C_ccall f_8107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7294)
static void C_ccall f_7294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7290)
static void C_ccall f_7290(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7290)
static void C_ccall f_7290r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9574)
static void C_ccall f_9574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10631)
static void C_ccall f_10631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10786)
static void C_ccall f_10786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12804)
static void C_fcall f_12804(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4039)
static void C_fcall f_4039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10657)
static void C_fcall f_10657(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10656)
static void C_ccall f_10656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8139)
static void C_fcall f_8139(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10653)
static void C_ccall f_10653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10644)
static void C_ccall f_10644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10647)
static void C_ccall f_10647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10640)
static void C_fcall f_10640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10791)
static void C_fcall f_10791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11009)
static void C_ccall f_11009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11015)
static void C_ccall f_11015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10890)
static void C_fcall f_10890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11012)
static void C_ccall f_11012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4080)
static void C_fcall f_4080(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11046)
static void C_fcall f_11046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13481)
static C_word C_fcall f_13481(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_9529)
static void C_ccall f_9529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7237)
static void C_fcall f_7237(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9527)
static void C_ccall f_9527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7210)
static void C_ccall f_7210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10726)
static void C_ccall f_10726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10723)
static void C_ccall f_10723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13093)
static void C_ccall f_13093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12584)
static void C_ccall f_12584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11618)
static void C_ccall f_11618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12588)
static void C_ccall f_12588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12580)
static void C_ccall f_12580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13099)
static void C_ccall f_13099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10513)
static void C_ccall f_10513(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10757)
static void C_ccall f_10757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12544)
static void C_ccall f_12544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12546)
static void C_ccall f_12546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11662)
static void C_fcall f_11662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12572)
static void C_ccall f_12572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10743)
static void C_ccall f_10743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10746)
static void C_ccall f_10746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5048)
static void C_fcall f_5048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10749)
static void C_ccall f_10749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11672)
static void C_ccall f_11672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8521)
static void C_ccall f_8521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5027)
static void C_fcall f_5027(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10570)
static void C_ccall f_10570(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12085)
static void C_ccall f_12085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12081)
static void C_ccall f_12081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11695)
static void C_ccall f_11695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10616)
static void C_ccall f_10616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10612)
static void C_fcall f_10612(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11699)
static void C_fcall f_11699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10610)
static void C_ccall f_10610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12508)
static void C_ccall f_12508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12077)
static void C_ccall f_12077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7200)
static void C_fcall f_7200(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12073)
static void C_ccall f_12073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10603)
static void C_ccall f_10603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3847)
static void C_fcall f_3847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12399)
static void C_fcall f_12399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_fcall f_3820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10672)
static void C_ccall f_10672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3803)
static void C_fcall f_3803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12342)
static void C_ccall f_12342(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7250)
static void C_fcall f_7250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12362)
static void C_ccall f_12362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12364)
static void C_fcall f_12364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8577)
static void C_ccall f_8577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12336)
static void C_ccall f_12336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6798)
static void C_ccall f_6798(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6793)
static void C_ccall f_6793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6760)
static void C_fcall f_6760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6770)
static void C_ccall f_6770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6278)
static void C_fcall f_6278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_7653)
static void C_ccall f_7653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8465)
static void C_fcall f_8465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10323)
static void C_ccall f_10323(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6246)
static void C_ccall f_6246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6219)
static void C_fcall f_6219(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7639)
static void C_ccall f_7639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10359)
static void C_fcall f_10359(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_fcall f_5286(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7648)
static void C_fcall f_7648(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7695)
static void C_ccall f_7695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8481)
static void C_ccall f_8481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6783)
static void C_ccall f_6783(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6783)
static void C_ccall f_6783r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11151)
static void C_ccall f_11151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11154)
static void C_ccall f_11154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12093)
static void C_ccall f_12093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12095)
static void C_ccall f_12095(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_10364)
static void C_ccall f_10364(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8371)
static void C_ccall f_8371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8485)
static void C_ccall f_8485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8391)
static void C_ccall f_8391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8362)
static void C_ccall f_8362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5615)
static void C_fcall f_5615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6525)
static void C_fcall f_6525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9763)
static void C_ccall f_9763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9759)
static void C_ccall f_9759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9755)
static void C_ccall f_9755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9765)
static void C_ccall f_9765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9785)
static void C_fcall f_9785(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9779)
static void C_ccall f_9779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5659)
static void C_fcall f_5659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5118)
static void C_fcall f_5118(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12622)
static void C_ccall f_12622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_10931)
static void C_ccall f_10931(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6284)
static void C_fcall f_6284(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10318)
static void C_fcall f_10318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10312)
static void C_ccall f_10312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8645)
static void C_ccall f_8645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10900)
static void C_ccall f_10900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8641)
static void C_fcall f_8641(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5635)
static void C_ccall f_5635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10057)
static void C_ccall f_10057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10913)
static void C_ccall f_10913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8694)
static void C_ccall f_8694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12642)
static void C_ccall f_12642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9442)
static void C_ccall f_9442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10083)
static void C_ccall f_10083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9448)
static void C_ccall f_9448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_fcall f_5163(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11740)
static void C_ccall f_11740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9454)
static void C_fcall f_9454(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9457)
static void C_ccall f_9457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11735)
static void C_ccall f_11735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5671)
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4227)
static C_word C_fcall f_4227(C_word t0,C_word t1);
C_noret_decl(f_10099)
static void C_fcall f_10099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9945)
static void C_ccall f_9945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9483)
static void C_ccall f_9483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9987)
static void C_ccall f_9987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9981)
static void C_ccall f_9981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8611)
static void C_ccall f_8611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8626)
static void C_ccall f_8626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_fcall f_4243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6466)
static C_word C_fcall f_6466(C_word t0);
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12935)
static void C_fcall f_12935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8047)
static void C_ccall f_8047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6470)
static void C_fcall f_6470(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7313)
static void C_fcall f_7313(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9400)
static void C_ccall f_9400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7411)
static void C_fcall f_7411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7323)
static void C_fcall f_7323(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6498)
static void C_fcall f_6498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_9905)
static void C_fcall trf_9905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9905(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9905(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6001)
static void C_fcall trf_6001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6001(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6001(t0,t1,t2);}

C_noret_decl(trf_6010)
static void C_fcall trf_6010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6010(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6010(t0,t1,t2);}

C_noret_decl(trf_12447)
static void C_fcall trf_12447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12447(t0,t1,t2);}

C_noret_decl(trf_5324)
static void C_fcall trf_5324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5324(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5324(t0,t1,t2);}

C_noret_decl(trf_5320)
static void C_fcall trf_5320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5320(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5320(t0,t1);}

C_noret_decl(trf_3948)
static void C_fcall trf_3948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3948(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3948(t0,t1);}

C_noret_decl(trf_11325)
static void C_fcall trf_11325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11325(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11325(t0,t1);}

C_noret_decl(trf_6926)
static void C_fcall trf_6926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6926(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6926(t0,t1,t2);}

C_noret_decl(trf_4490)
static void C_fcall trf_4490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4490(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4490(t0,t1,t2);}

C_noret_decl(trf_3701)
static void C_fcall trf_3701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3701(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3701(t0,t1);}

C_noret_decl(trf_8942)
static void C_fcall trf_8942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8942(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8942(t0,t1);}

C_noret_decl(trf_4601)
static void C_fcall trf_4601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4601(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4601(t0,t1);}

C_noret_decl(trf_3729)
static void C_fcall trf_3729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3729(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3729(t0,t1,t2,t3);}

C_noret_decl(trf_6322)
static void C_fcall trf_6322(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6322(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6322(t0,t1);}

C_noret_decl(trf_3717)
static void C_fcall trf_3717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3717(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3717(t0,t1,t2,t3);}

C_noret_decl(trf_3743)
static void C_fcall trf_3743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3743(t0,t1,t2);}

C_noret_decl(trf_3731)
static void C_fcall trf_3731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3731(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3731(t0,t1,t2);}

C_noret_decl(trf_7373)
static void C_fcall trf_7373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7373(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7373(t0,t1);}

C_noret_decl(trf_3766)
static void C_fcall trf_3766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3766(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3766(t0,t1,t2,t3);}

C_noret_decl(trf_11711)
static void C_fcall trf_11711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11711(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11711(t0,t1,t2);}

C_noret_decl(trf_6434)
static void C_fcall trf_6434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6434(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6434(t0,t1,t2);}

C_noret_decl(trf_4696)
static void C_fcall trf_4696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4696(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4696(t0,t1,t2);}

C_noret_decl(trf_4687)
static void C_fcall trf_4687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4687(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4687(t0,t1,t2);}

C_noret_decl(trf_4660)
static void C_fcall trf_4660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4660(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4660(t0,t1);}

C_noret_decl(trf_4677)
static void C_fcall trf_4677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4677(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4677(t0,t1);}

C_noret_decl(trf_11243)
static void C_fcall trf_11243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11243(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11243(t0,t1,t2);}

C_noret_decl(trf_5383)
static void C_fcall trf_5383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5383(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5383(t0,t1,t2);}

C_noret_decl(trf_10143)
static void C_fcall trf_10143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10143(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_10143(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_11531)
static void C_fcall trf_11531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11531(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11531(t0,t1);}

C_noret_decl(trf_10140)
static void C_fcall trf_10140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10140(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_10140(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3694)
static void C_fcall trf_3694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3694(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3694(t0,t1,t2);}

C_noret_decl(trf_11774)
static void C_fcall trf_11774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11774(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11774(t0,t1,t2);}

C_noret_decl(trf_5469)
static void C_fcall trf_5469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5469(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5469(t0,t1,t2);}

C_noret_decl(trf_5446)
static void C_fcall trf_5446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5446(t0,t1,t2);}

C_noret_decl(trf_13467)
static void C_fcall trf_13467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13467(t0,t1,t2);}

C_noret_decl(trf_5432)
static void C_fcall trf_5432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5432(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5432(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8738)
static void C_fcall trf_8738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8738(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8738(t0,t1);}

C_noret_decl(trf_11939)
static void C_fcall trf_11939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11939(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11939(t0,t1,t2);}

C_noret_decl(trf_11969)
static void C_fcall trf_11969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11969(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11969(t0,t1,t2);}

C_noret_decl(trf_12966)
static void C_fcall trf_12966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12966(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12966(t0,t1);}

C_noret_decl(trf_11847)
static void C_fcall trf_11847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11847(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11847(t0,t1,t2);}

C_noret_decl(trf_4120)
static void C_fcall trf_4120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4120(t0,t1);}

C_noret_decl(trf_6816)
static void C_fcall trf_6816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6816(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6816(t0,t1,t2,t3);}

C_noret_decl(trf_6810)
static void C_fcall trf_6810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6810(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6810(t0,t1,t2,t3);}

C_noret_decl(trf_11214)
static void C_fcall trf_11214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11214(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11214(t0,t1,t2);}

C_noret_decl(trf_4157)
static void C_fcall trf_4157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4157(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4157(t0,t1,t2);}

C_noret_decl(trf_10111)
static void C_fcall trf_10111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10111(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10111(t0,t1,t2);}

C_noret_decl(trf_12299)
static void C_fcall trf_12299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12299(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12299(t0,t1,t2);}

C_noret_decl(trf_6866)
static void C_fcall trf_6866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6866(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6866(t0,t1,t2);}

C_noret_decl(trf_11518)
static void C_fcall trf_11518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11518(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11518(t0,t1);}

C_noret_decl(trf_6853)
static void C_fcall trf_6853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6853(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6853(t0,t1,t2,t3);}

C_noret_decl(trf_6143)
static void C_fcall trf_6143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6143(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6143(t0,t1,t2);}

C_noret_decl(trf_6110)
static void C_fcall trf_6110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6110(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6110(t0,t1);}

C_noret_decl(trf_12182)
static void C_fcall trf_12182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12182(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12182(t0,t1,t2,t3);}

C_noret_decl(trf_4289)
static void C_fcall trf_4289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4289(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4289(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10406)
static void C_fcall trf_10406(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10406(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10406(t0,t1);}

C_noret_decl(trf_4482)
static void C_fcall trf_4482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4482(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4482(t0,t1,t2);}

C_noret_decl(trf_11456)
static void C_fcall trf_11456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11456(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11456(t0,t1);}

C_noret_decl(trf_4502)
static void C_fcall trf_4502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4502(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4502(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11470)
static void C_fcall trf_11470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11470(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11470(t0,t1);}

C_noret_decl(trf_4400)
static void C_fcall trf_4400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4400(t0,t1);}

C_noret_decl(trf_7021)
static void C_fcall trf_7021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7021(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7021(t0,t1);}

C_noret_decl(trf_7177)
static void C_fcall trf_7177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7177(t0,t1,t2);}

C_noret_decl(trf_11992)
static void C_fcall trf_11992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11992(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11992(t0,t1,t2);}

C_noret_decl(trf_4591)
static void C_fcall trf_4591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4591(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4591(t0,t1,t2);}

C_noret_decl(trf_11852)
static void C_fcall trf_11852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11852(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11852(t0,t1,t2);}

C_noret_decl(trf_6557)
static void C_fcall trf_6557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6557(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6557(t0,t1);}

C_noret_decl(trf_11410)
static void C_fcall trf_11410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11410(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11410(t0,t1,t2,t3);}

C_noret_decl(trf_6566)
static void C_fcall trf_6566(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6566(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6566(t0,t1);}

C_noret_decl(trf_6545)
static void C_fcall trf_6545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6545(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6545(t0,t1);}

C_noret_decl(trf_8267)
static void C_fcall trf_8267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8267(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8267(t0,t1,t2);}

C_noret_decl(trf_9069)
static void C_fcall trf_9069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9069(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9069(t0,t1);}

C_noret_decl(trf_11650)
static void C_fcall trf_11650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11650(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11650(t0,t1,t2);}

C_noret_decl(trf_8142)
static void C_fcall trf_8142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8142(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8142(t0,t1);}

C_noret_decl(trf_7154)
static void C_fcall trf_7154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7154(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7154(t0,t1,t2);}

C_noret_decl(trf_12002)
static void C_fcall trf_12002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12002(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12002(t0,t1);}

C_noret_decl(trf_8232)
static void C_fcall trf_8232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8232(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8232(t0,t1,t2);}

C_noret_decl(trf_5080)
static void C_fcall trf_5080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5080(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5080(t0,t1,t2);}

C_noret_decl(trf_12804)
static void C_fcall trf_12804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12804(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12804(t0,t1,t2,t3);}

C_noret_decl(trf_4039)
static void C_fcall trf_4039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4039(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4039(t0,t1,t2);}

C_noret_decl(trf_10657)
static void C_fcall trf_10657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10657(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10657(t0,t1,t2);}

C_noret_decl(trf_8139)
static void C_fcall trf_8139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8139(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8139(t0,t1);}

C_noret_decl(trf_10640)
static void C_fcall trf_10640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10640(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10640(t0,t1);}

C_noret_decl(trf_10791)
static void C_fcall trf_10791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10791(t0,t1,t2);}

C_noret_decl(trf_10890)
static void C_fcall trf_10890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10890(t0,t1,t2);}

C_noret_decl(trf_4080)
static void C_fcall trf_4080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4080(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4080(t0,t1,t2,t3);}

C_noret_decl(trf_11046)
static void C_fcall trf_11046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11046(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11046(t0,t1,t2);}

C_noret_decl(trf_7237)
static void C_fcall trf_7237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7237(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7237(t0,t1,t2,t3);}

C_noret_decl(trf_11662)
static void C_fcall trf_11662(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11662(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11662(t0,t1,t2);}

C_noret_decl(trf_5048)
static void C_fcall trf_5048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5048(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5048(t0,t1,t2);}

C_noret_decl(trf_5027)
static void C_fcall trf_5027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5027(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5027(t0,t1);}

C_noret_decl(trf_10612)
static void C_fcall trf_10612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10612(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_10612(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_11699)
static void C_fcall trf_11699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11699(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11699(t0,t1,t2);}

C_noret_decl(trf_7200)
static void C_fcall trf_7200(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7200(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7200(t0,t1,t2,t3);}

C_noret_decl(trf_3847)
static void C_fcall trf_3847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3847(t0,t1);}

C_noret_decl(trf_12399)
static void C_fcall trf_12399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12399(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12399(t0,t1,t2);}

C_noret_decl(trf_3820)
static void C_fcall trf_3820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3820(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3820(t0,t1);}

C_noret_decl(trf_3803)
static void C_fcall trf_3803(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3803(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3803(t0,t1);}

C_noret_decl(trf_7250)
static void C_fcall trf_7250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7250(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7250(t0,t1);}

C_noret_decl(trf_12364)
static void C_fcall trf_12364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12364(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12364(t0,t1,t2);}

C_noret_decl(trf_6760)
static void C_fcall trf_6760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6760(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6760(t0,t1,t2);}

C_noret_decl(trf_6278)
static void C_fcall trf_6278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6278(void *dummy){
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
f_6278(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_8465)
static void C_fcall trf_8465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8465(t0,t1);}

C_noret_decl(trf_6219)
static void C_fcall trf_6219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6219(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6219(t0,t1);}

C_noret_decl(trf_10359)
static void C_fcall trf_10359(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10359(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10359(t0,t1);}

C_noret_decl(trf_5286)
static void C_fcall trf_5286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5286(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5286(t0,t1);}

C_noret_decl(trf_7648)
static void C_fcall trf_7648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7648(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7648(t0,t1);}

C_noret_decl(trf_5615)
static void C_fcall trf_5615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5615(t0,t1);}

C_noret_decl(trf_6525)
static void C_fcall trf_6525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6525(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6525(t0,t1);}

C_noret_decl(trf_9785)
static void C_fcall trf_9785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9785(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9785(t0,t1,t2,t3);}

C_noret_decl(trf_5659)
static void C_fcall trf_5659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5659(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5659(t0,t1,t2);}

C_noret_decl(trf_5118)
static void C_fcall trf_5118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5118(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5118(t0,t1);}

C_noret_decl(trf_6284)
static void C_fcall trf_6284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6284(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6284(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10318)
static void C_fcall trf_10318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10318(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10318(t0,t1);}

C_noret_decl(trf_8641)
static void C_fcall trf_8641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8641(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8641(t0,t1);}

C_noret_decl(trf_5163)
static void C_fcall trf_5163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5163(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5163(t0,t1);}

C_noret_decl(trf_9454)
static void C_fcall trf_9454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9454(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9454(t0,t1);}

C_noret_decl(trf_5671)
static void C_fcall trf_5671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5671(t0,t1,t2);}

C_noret_decl(trf_10099)
static void C_fcall trf_10099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10099(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10099(t0,t1,t2);}

C_noret_decl(trf_4243)
static void C_fcall trf_4243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4243(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4243(t0,t1,t2);}

C_noret_decl(trf_12935)
static void C_fcall trf_12935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12935(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_12935(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6470)
static void C_fcall trf_6470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6470(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6470(t0,t1,t2,t3);}

C_noret_decl(trf_7313)
static void C_fcall trf_7313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7313(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7313(t0,t1,t2);}

C_noret_decl(trf_7411)
static void C_fcall trf_7411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7411(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7411(t0,t1);}

C_noret_decl(trf_7323)
static void C_fcall trf_7323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7323(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7323(t0,t1);}

C_noret_decl(trf_6498)
static void C_fcall trf_6498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6498(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6498(t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr14)
static void C_fcall tr14(C_proc14 k) C_regparm C_noret;
C_regparm static void C_fcall tr14(C_proc14 k){
C_word t13=C_pick(0);
C_word t12=C_pick(1);
C_word t11=C_pick(2);
C_word t10=C_pick(3);
C_word t9=C_pick(4);
C_word t8=C_pick(5);
C_word t7=C_pick(6);
C_word t6=C_pick(7);
C_word t5=C_pick(8);
C_word t4=C_pick(9);
C_word t3=C_pick(10);
C_word t2=C_pick(11);
C_word t1=C_pick(12);
C_word t0=C_pick(13);
C_adjust_stack(-14);
(k)(14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}

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

C_noret_decl(tr11)
static void C_fcall tr11(C_proc11 k) C_regparm C_noret;
C_regparm static void C_fcall tr11(C_proc11 k){
C_word t10=C_pick(0);
C_word t9=C_pick(1);
C_word t8=C_pick(2);
C_word t7=C_pick(3);
C_word t6=C_pick(4);
C_word t5=C_pick(5);
C_word t4=C_pick(6);
C_word t3=C_pick(7);
C_word t2=C_pick(8);
C_word t1=C_pick(9);
C_word t0=C_pick(10);
C_adjust_stack(-11);
(k)(11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}

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

/* k9410 in a9399 in k9353 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9412,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1244: append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_9905(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word *a;
loop:
a=C_alloc(22);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9905,NULL,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=C_slot(t5,C_fix(2));
t7=t3;
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=t3;
t11=C_slot(t10,C_fix(1));
t12=C_eqp(t11,lf[11]);
if(C_truep(t12)){
t13=C_i_caddr(t6);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9945,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=t9,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t16=C_u_i_cdr(t6);
if(C_truep(C_u_i_car(t16))){
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10057,a[2]=t15,a[3]=t14,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1356: get */
t18=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t17,((C_word*)t0)[8],t2,lf[79]);}
else{
t17=t15;
f_9945(2,t17,C_SCHEME_FALSE);}}
else{
t16=t15;
f_9945(2,t16,C_SCHEME_FALSE);}}
else{
t13=C_eqp(t11,lf[13]);
if(C_truep(t13)){
t14=C_i_car(t6);
t15=C_i_car(t9);
/* optimizer.scm:1370: walk */
t31=t1;
t32=t14;
t33=t15;
t34=C_SCHEME_FALSE;
t1=t31;
t2=t32;
t3=t33;
t4=t34;
goto loop;}
else{
t14=C_eqp(t11,lf[6]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10083,a[2]=t9,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_car(t6);
t17=C_i_car(t9);
/* optimizer.scm:1372: walk */
t31=t15;
t32=t16;
t33=t17;
t34=t3;
t1=t31;
t2=t32;
t3=t33;
t4=t34;
goto loop;}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10099,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t16=C_i_check_list_2(t9,lf[2]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10111,a[2]=t18,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t20=((C_word*)t18)[1];
f_10111(t20,t1,t9);}}}}

/* k8079 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1031: g1674 */
t3=t2;
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7302 in k7292 in rewrite in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:917: ##sys#hash-table-set! */
t2=*((C_word*)lf[129]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[140]+1),((C_word*)t0)[3],t1);}

/* ##compiler#transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9902,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9905,a[2]=t17,a[3]=t7,a[4]=t9,a[5]=t11,a[6]=t13,a[7]=t15,a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10140,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10612,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11342,a[2]=t1,a[3]=t5,a[4]=t13,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1568: debugging */
t22=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,lf[28],lf[185]);}

/* k7336 in k7321 in argc-ok? in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* optimizer.scm:927: argc-ok? */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7313(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_12486,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_i_assoc(t4,*((C_word*)lf[207]+1));
t10=t9;
if(C_truep(t10)){
if(C_truep(C_i_listp(t6))){
t11=C_i_length(t6);
if(C_truep(C_i_lessp(t11,*((C_word*)lf[208]+1)))){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12508,a[2]=t10,a[3]=t7,a[4]=t8,a[5]=t3,a[6]=t5,a[7]=t1,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:801: gensym */
t13=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6067,2,t0,t1);}
if(C_truep(t1)){
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6073,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6084,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:476: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4080(t5,t4,((C_word*)t0)[4],lf[56]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:479: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4080(t3,t2,((C_word*)t0)[4],lf[48]);}}

/* k6071 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6073,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* k5170 in k5199 in k5161 in k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=C_a_i_list2(&a,2,((C_word*)t0)[2],t3);
t5=((C_word*)t0)[3];
f_5118(t5,C_a_i_record4(&a,4,lf[14],lf[12],t2,t4));}

/* g814 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6001(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6001,NULL,3,t0,t1,t2);}
/* optimizer.scm:467: g831 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4289(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6006 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6008,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5995,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:468: invalidate-gae! */
f_4120(t4,((C_word*)t0)[5]);}

/* map-loop808 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6010(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6010,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6039,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:467: g814 */
t5=((C_word*)t0)[5];
f_6001(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12455 in for-each-loop2691 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12447(t3,((C_word*)t0)[4],t2);}

/* k8037 in k8004 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8039,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t3));}

/* for-each-loop2691 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12447(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12447,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12457,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1659: g2692 */
t5=((C_word*)t0)[3];
f_11699(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8004 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8006(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8006,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8039,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8047,a[2]=t7,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:1027: qnode */
t10=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9389 in k9353 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9390,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
/* optimizer.scm:1243: split-at */
t3=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[3],t2);}

/* k9386 in k9353 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9388,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t3));}

/* a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4818,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4824,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:272: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4813,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:270: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[9],((C_word*)t0)[10],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:286: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4080(t3,t2,((C_word*)t0)[6],lf[64]);}}

/* k4962 in k4922 in a4916 in k4910 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4964,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
/* optimizer.scm:298: walk */
t8=((C_word*)((C_word*)t0)[9])[1];
f_4289(t8,t5,t6,t7,C_SCHEME_END_OF_LIST);}

/* k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:379: check-signature */
t3=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[17],((C_word*)t0)[14],((C_word*)t0)[13]);}

/* cfk in a5344 in k5338 in k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5348,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:384: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[80],lf[81],((C_word*)t0)[10],t2);}

/* k4841 in a4835 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[8],a[3]=t6,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[10])){
/* optimizer.scm:279: test */
t8=((C_word*)((C_word*)t0)[11])[1];
f_4080(t8,t7,((C_word*)t0)[5],lf[64]);}
else{
t8=t7;
f_4890(2,t8,C_SCHEME_FALSE);}}

/* k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:380: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[83],((C_word*)t0)[9]);}

/* k4942 in k4962 in k4922 in a4916 in k4910 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[11],((C_word*)t0)[3],t2));}

/* a4823 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:273: partition */
t3=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5302,5,t0,t1,t2,t3,t4);}
t5=C_i_car(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_5820,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=t1,a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[2],a[19]=t6,a[20]=t3,a[21]=((C_word*)t0)[18],a[22]=((C_word*)t0)[19],a[23]=((C_word*)t0)[20],a[24]=t2,a[25]=((C_word*)t0)[21],tmp=(C_word)a,a+=26,tmp);
/* tweaks.scm:57: ##sys#get */
t8=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[17],lf[98]);}

/* k12436 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_pairp(((C_word*)((C_word*)t0)[2])[1]);
/* optimizer.scm:1774: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k10038 in k9985 in k9979 in k9973 in k10055 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10040,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_9945(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_length(((C_word*)t0)[3]);
t3=C_i_length(((C_word*)t0)[4]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[5]);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
/* optimizer.scm:1367: scan */
t8=((C_word*)((C_word*)t0)[8])[1];
f_10140(t8,((C_word*)t0)[2],t5,t6,((C_word*)t0)[7],((C_word*)t0)[9],t7);}
else{
t5=((C_word*)t0)[2];
f_9945(2,t5,C_SCHEME_FALSE);}}}

/* k4881 in k4841 in a4835 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4863,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
/* optimizer.scm:285: walk */
t8=((C_word*)((C_word*)t0)[9])[1];
f_4289(t8,t5,t6,t7,C_SCHEME_END_OF_LIST);}

/* k12426 in map-loop2710 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12428(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12428,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_12399(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_12399(t6,((C_word*)t0)[5],t5);}}

/* k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5334,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[2],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5383,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5383(t9,t5,t3);}

/* g624 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5324(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5324,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
/* optimizer.scm:378: g639 */
t4=*((C_word*)lf[47]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[2],t2,lf[70],C_SCHEME_TRUE);}

/* k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5320,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(((C_word*)t0)[18])?lf[84]:lf[85]);
t4=C_i_cadddr(((C_word*)t0)[19]);
/* optimizer.scm:372: debugging */
t5=*((C_word*)lf[17]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t2,lf[80],t3,((C_word*)t0)[10],((C_word*)t0)[20],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[16],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[22],a[15]=((C_word*)t0)[23],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[10],a[18]=((C_word*)t0)[24],a[19]=((C_word*)t0)[25],a[20]=((C_word*)t0)[26],a[21]=((C_word*)t0)[14],a[22]=((C_word*)t0)[20],tmp=(C_word)a,a+=23,tmp);
/* optimizer.scm:395: test */
t3=((C_word*)((C_word*)t0)[24])[1];
f_4080(t3,t2,((C_word*)t0)[20],lf[68]);}}

/* k6909 in a6897 in g1371 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm:850: find-path */
t2=((C_word*)t0)[2];
f_6810(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4861 in k4881 in k4841 in a4835 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4863,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[11],((C_word*)t0)[3],t2));}

/* k3946 in k3928 in k3925 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3948(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3948,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:99: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[19],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_3933(2,t2,C_SCHEME_UNDEFINED);}}

/* tmp13577 in a11318 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11325(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11325,NULL,2,t0,t1);}
/* optimizer.scm:1458: unzip1 */
t2=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a5344 in k5338 in k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5345(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5345,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5348,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(((C_word*)t0)[12],C_fix(3));
t6=C_i_car(t5);
/* optimizer.scm:390: inline-lambda-bindings */
t7=*((C_word*)lf[71]+1);
((C_proc8)(void*)(*((C_word*)t7+1)))(8,t7,t4,((C_word*)t0)[13],((C_word*)t0)[14],t6,C_SCHEME_TRUE,((C_word*)t0)[15],t3);}

/* g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6926(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6926,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6933,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6967,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* optimizer.scm:862: append-map */
t9=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,t6,t8);}

/* k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6925(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6925,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6926,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_i_check_list_2(t5,lf[2]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6985,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7154,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_7154(t11,t7,t5);}

/* k5338 in k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:381: call/cc */
t3=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[16],t2);}

/* k4891 in k4888 in k4841 in a4835 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4893,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* optimizer.scm:282: build-lambda-list */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_FALSE);}

/* k3931 in k3928 in k3925 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(((C_word*)t0)[4],((C_word*)t0)[6]))){
/* optimizer.scm:104: remember */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3717(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* optimizer.scm:103: mark */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3694(t3,t2,((C_word*)t0)[4]);}}

/* k3934 in k3931 in k3928 in k3925 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:104: remember */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3717(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4495 in k4492 in g314 in k4484 in replace-var in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k3928 in k3925 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3930,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3948,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t5=C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[8])[1]);
t6=t4;
f_3948(t6,C_i_not(t5));}
else{
t5=t4;
f_3948(t5,C_SCHEME_FALSE);}}

/* k4888 in k4841 in a4835 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4890,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:280: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[63],((C_word*)t0)[5]);}
else{
/* optimizer.scm:283: build-lambda-list */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k11334 in a11318 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11336,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
/* optimizer.scm:1458: ##sys#make-promise */
t3=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k4492 in g314 in k4484 in replace-var in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4494,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4497,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:219: put! */
t4=*((C_word*)lf[47]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4],lf[48],t2);}

/* g314 in k4484 in replace-var in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4490(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4490,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4494,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:217: replace-var */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4482(t4,t3,t2);}

/* k3699 in mark in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3701(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3701,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k12750 in a12704 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12752(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12752,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
t6=C_a_i_record4(&a,4,lf[14],lf[144],t4,t5);
t7=C_a_i_list3(&a,3,t6,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=((C_word*)t0)[6];
t9=((C_word*)t0)[7];
t10=t8;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_record4(&a,4,lf[14],lf[5],t9,t7));}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k11340 in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1569: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9905(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* ##compiler#determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11347,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11350,a[2]=t9,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11410,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t11,a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11695,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1653: debugging */
t17=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,lf[28],lf[197]);}

/* k11343 in k11340 in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6349,2,t0,t1);}
t2=C_set_block_item(lf[31] /* ##compiler#simplified-ops */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:523: walk */
t4=((C_word*)((C_word*)t0)[8])[1];
f_4289(t4,t3,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6343,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:519: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:521: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[28],lf[118]);}}

/* k8944 in k8905 in k8882 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8946,2,t0,t1);}
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[4];
f_8942(t4,C_a_i_list2(&a,2,t1,t3));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_times(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_plus(&a,2,t3,t5);
t7=((C_word*)t0)[4];
f_8942(t7,C_a_i_list2(&a,2,t1,t6));}
else{
t3=((C_word*)t0)[4];
f_8942(t3,C_a_i_list2(&a,2,t1,((C_word*)t0)[2]));}}}

/* k8940 in k8905 in k8882 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8942(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8942,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[14],lf[92],t1,t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t4));}

/* close in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static C_word C_fcall f_11350(C_word *a,C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t1=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t1,C_fix(1)))){
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]),((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
return(t5);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
return(t3);}}
else{
t1=C_SCHEME_UNDEFINED;
return(t1);}}

/* k13164 in a13152 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13166,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:673: get-list */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9],lf[78]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6313 in lp in walk-generic in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6315,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=t3;
f_6322(t6,C_eqp(t2,t5));}
else{
t4=t3;
f_6322(t4,C_SCHEME_FALSE);}}

/* touch in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static C_word C_fcall f_3724(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_overflow_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
return(t2);}

/* k4599 in g354 in k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4601(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4601,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:244: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[18],lf[52],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* optimizer.scm:246: varnode */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k4602 in k4599 in g354 in k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:245: varnode */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3720 in remember in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* scan-each in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3729(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3729,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3731,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3743,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3743(t9,t1,t2);}

/* k9353 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9355(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9355,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9388,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9390,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9400,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1243: ##sys#call-with-values */
C_call_with_values(4,0,t7,t8,t9);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6320 in k6313 in lp in walk-generic in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6322(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6322,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* optimizer.scm:515: lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6284(t5,((C_word*)t0)[6],t1,t3,t4);}

/* k7805 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7807(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7807,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[3]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_eqp(t4,*((C_word*)lf[146]+1)));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=t7;
t9=((C_word*)t0)[3];
t10=C_u_i_car(t9);
t11=C_a_i_list1(&a,1,t10);
t12=t11;
t13=C_i_car(((C_word*)t0)[2]);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7866,a[2]=t14,a[3]=t12,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t16=((C_word*)t0)[3];
t17=C_u_i_cdr(t16);
t18=C_u_i_car(t17);
/* optimizer.scm:1003: qnode */
t19=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t15,t18);}
else{
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4922 in a4916 in k4910 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4924,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t7=C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1));
/* optimizer.scm:296: build-lambda-list */
t8=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,((C_word*)t0)[9],t7,C_SCHEME_FALSE);}

/* remember in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3717(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3717,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:53: alist-update! */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k13186 in k13207 in k13164 in a13152 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13188,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[22],((C_word*)t0)[3],t1));}

/* a4916 in k4910 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4917,5,t0,t1,t2,t3,t4);}
t5=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:291: debugging */
t7=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[18],lf[67],t4);}

/* for-each-loop42 in scan-each in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3743,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3753,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:41: g43 */
t5=((C_word*)t0)[3];
f_3731(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7495 in k7406 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7497,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_7411(t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* k3925 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:93: alist-ref */
t3=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[9])[1]);}

/* k4910 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4912,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:287: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[8],((C_word*)t0)[9],t2);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* optimizer.scm:299: walk-generic */
t3=((C_word*)((C_word*)t0)[10])[1];
f_6278(t3,((C_word*)t0)[8],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}}

/* a13152 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13153(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_13153,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
if(C_truep(C_i_equalp(t4,*((C_word*)lf[217]+1)))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13166,a[2]=t9,a[3]=t1,a[4]=t8,a[5]=t10,a[6]=t6,a[7]=t5,a[8]=t2,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:672: immediate? */
t12=*((C_word*)lf[219]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t6);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k6307 in k6292 in lp in walk-generic in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6309,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t3,t4,t1));}

/* k8905 in k8882 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8907(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8907,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[145]+1);
t3=(C_truep(*((C_word*)lf[145]+1))?*((C_word*)lf[145]+1):((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8942,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8946,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(((C_word*)t0)[8])?(C_truep(C_fixnum_greaterp(((C_word*)t0)[7],C_fix(0)))?C_fixnum_less_or_equal_p(((C_word*)t0)[7],C_fix(8)):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[9]);
/* optimizer.scm:1172: conc */
t10=*((C_word*)lf[153]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t9,((C_word*)t0)[7]);}
else{
t9=t7;
f_8946(2,t9,C_i_cadr(((C_word*)t0)[9]));}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* g43 in scan-each in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3731,NULL,3,t0,t1,t2);}
/* optimizer.scm:60: scan */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3766(t3,t1,t2,((C_word*)t0)[3]);}

/* k7371 in loop in a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:931: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}
else{
/* optimizer.scm:932: qnode */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3766,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(2));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[3]);
if(C_truep(t13)){
t14=C_i_car(t6);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t15,tmp=(C_word)a,a+=5,tmp);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3820,a[2]=t15,a[3]=((C_word*)t0)[3],a[4]=t16,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t15,t3))){
t18=t17;
f_3820(t18,C_SCHEME_FALSE);}
else{
t18=C_i_memq(t15,((C_word*)((C_word*)t0)[3])[1]);
t19=t17;
f_3820(t19,C_i_not(t18));}}
else{
t14=C_eqp(t12,lf[5]);
t15=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t9,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t3,a[8]=t12,a[9]=t6,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t2,a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[3],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t14)){
t16=t15;
f_3847(t16,t14);}
else{
t16=C_eqp(t12,lf[21]);
t17=t15;
f_3847(t17,(C_truep(t16)?t16:C_eqp(t12,lf[22])));}}}

/* k3751 in for-each-loop42 in scan-each in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3743(t3,((C_word*)t0)[4],t2);}

/* g2716 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11711(C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11711,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=C_i_car(t8);
t10=t9;
t11=C_slot(t10,C_fix(2));
t12=C_i_caddr(t11);
t13=t12;
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=*((C_word*)lf[87]+1);
t19=C_i_check_list_2(t13,lf[35]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11735,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=t13,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11774,a[2]=t17,a[3]=t22,a[4]=t15,a[5]=t18,tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_11774(t24,t20,t13);}

/* k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11710(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11710,2,t0,t1);}
t2=t1;
t3=C_fix(1);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11711,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11831,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12399,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_12399(t15,t11,((C_word*)t0)[2]);}

/* for-each-loop925 in k6399 in a6396 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6434(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6434,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6444,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6406,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_car(t6);
/* optimizer.scm:532: print* */
t9=*((C_word*)lf[113]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[114],t8);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4624 in g354 in k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(lf[53],t1);
t3=((C_word*)t0)[2];
f_4601(t3,C_i_not(t2));}

/* k7565 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7567(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7567,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=C_a_i_list1(&a,1,t8);
t10=((C_word*)t0)[3];
t11=C_a_i_record4(&a,4,lf[14],lf[144],t9,t10);
t12=C_a_i_list2(&a,2,((C_word*)t0)[4],t11);
t13=((C_word*)t0)[5];
t14=t13;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_record4(&a,4,lf[14],lf[12],t5,t12));}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6442 in for-each-loop925 in k6399 in a6396 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6434(t3,((C_word*)t0)[4],t2);}

/* k4692 in k4675 in k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4694,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[3],t1));}

/* map-loop397 in k4675 in k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4696(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4696,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:264: g403 */
t5=((C_word*)t0)[5];
f_4687(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g403 in k4675 in k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4687,NULL,3,t0,t1,t2);}
/* optimizer.scm:264: g420 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4289(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4660(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4660,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:256: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4289(t6,((C_word*)t0)[6],t5,((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4732,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[4]);
t5=C_slot(t4,C_fix(1));
t6=C_eqp(lf[3],t5);
if(C_truep(t6)){
t7=C_u_i_car(((C_word*)t0)[4]);
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t8);
/* optimizer.scm:259: test */
t10=((C_word*)((C_word*)t0)[11])[1];
f_4080(t10,t3,t9,lf[56]);}
else{
t7=t3;
f_4732(2,t7,C_SCHEME_FALSE);}}}

/* k4675 in k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4677(C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4677,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4694,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4696,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4696(t12,t8,((C_word*)t0)[6]);}

/* k11749 in a11739 in k11733 in g2716 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11751,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]));}

/* k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11707,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11710,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1664: gensym */
t4=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[80]);}

/* k7864 in k7805 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7866,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[6],t4));}

/* k6404 in for-each-loop925 in k6399 in a6396 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_greaterp(t2,C_fix(1)))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm:534: print */
t4=*((C_word*)lf[111]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],C_make_character(9),t3);}
else{
/* optimizer.scm:535: newline */
t3=*((C_word*)lf[112]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k6399 in a6396 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6401,2,t0,t1);}
t2=*((C_word*)lf[31]+1);
t3=C_i_check_list_2(*((C_word*)lf[31]+1),lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6434,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6434(t7,((C_word*)t0)[2],*((C_word*)lf[31]+1));}

/* a11318 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11336,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* tmp13577 */
t4=t2;
f_11325(t4,t3);}

/* k11315 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1458: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[18],lf[181],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k7738 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7740(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7740,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7760,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_car(t6);
/* optimizer.scm:985: varnode */
t8=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6747 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6749,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6760,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6760(t7,((C_word*)t0)[3],t2);}

/* k5360 in a5344 in k5338 in k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
/* optimizer.scm:394: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4289(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* for-each-loop2434 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11243(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11243,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11253,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1525: g2435 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5350 in cfk in a5344 in k5338 in k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:389: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6278(t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_TRUE);}

/* k11251 in for-each-loop2434 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11243(t3,((C_word*)t0)[4],t2);}

/* a4835 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4836,4,t0,t1,t2,t3);}
t4=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:275: debugging */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[18],lf[65],t2);}

/* for-each-loop623 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5383(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5383,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5393,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:378: g624 */
t5=((C_word*)t0)[3];
f_5324(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5357 in k5350 in cfk in a5344 in k5338 in k5335 in k5332 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_5359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:388: return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* a4829 in a4823 in a4817 in k4811 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4830,3,t0,t1,t2);}
/* optimizer.scm:273: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4080(t3,t1,t2,lf[60]);}

/* a4389 in k4379 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4390,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(t2)){
t6=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:204: qnode */
t8=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4400,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
t7=t6;
f_4400(t7,C_SCHEME_UNDEFINED);}
else{
t7=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_FALSE);
t8=t6;
f_4400(t8,t7);}}}

/* k9170 in k9161 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9172(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9172,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1217: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_u_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[12],t3,t5));}
else{
t3=C_i_cadddr(((C_word*)t0)[5]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[146]+1),lf[147]));
if(C_truep(t4)){
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9253,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1225: fold-inner */
t9=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t1);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5418,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t2,((C_word*)t0)[3]))){
/* optimizer.scm:397: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6278(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5432,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[15],a[9]=t4,a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[18],tmp=(C_word)a,a+=13,tmp));
t6=((C_word*)t4)[1];
f_5432(t6,((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[20],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[6],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[20],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:424: test */
t4=((C_word*)((C_word*)t0)[18])[1];
f_4080(t4,t3,((C_word*)t0)[22],lf[64]);}}

/* rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10143(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_10143,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=t2;
t10=C_slot(t9,C_fix(3));
t11=t10;
t12=t2;
t13=C_slot(t12,C_fix(1));
t14=C_eqp(t13,lf[3]);
if(C_truep(t14)){
t15=C_i_car(t8);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10207,a[2]=t1,a[3]=t16,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1385: get */
t18=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t17,((C_word*)t0)[5],t16,lf[160]);}
else{
t15=C_eqp(t13,lf[11]);
if(C_truep(t15)){
if(C_truep(t3)){
t16=C_i_caddr(t8);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10225,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t11,a[5]=((C_word*)t0)[7],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1393: decompose-lambda-list */
t18=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t1,t16,t17);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=C_eqp(t13,lf[92]);
if(C_truep(t16)){
t17=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t17)){
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}
else{
t18=C_i_cadr(t8);
t19=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t18);
t20=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t19);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10262,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1402: every */
t22=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t1,t21,t11);}}
else{
t17=C_eqp(t13,lf[69]);
if(C_truep(t17)){
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[8])){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10296,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t19=C_i_car(t11);
/* optimizer.scm:1405: scan-used-variables */
t20=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t18,t19,t5);}
else{
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}}
else{
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}}
else{
t18=C_eqp(t13,lf[161]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10312,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t20=C_i_cadr(t8);
/* optimizer.scm:1410: estimate-foreign-result-size */
t21=*((C_word*)lf[162]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t19,t20);}
else{
t19=C_eqp(t13,lf[163]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10353,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t21=C_i_car(t8);
/* optimizer.scm:1418: estimate-foreign-result-size */
t22=*((C_word*)lf[162]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t20,t21);}
else{
t20=C_eqp(t13,lf[12]);
if(C_truep(t20)){
t21=C_i_car(t11);
t22=C_slot(t21,C_fix(1));
t23=C_eqp(lf[3],t22);
if(C_truep(t23)){
t24=C_slot(t21,C_fix(2));
t25=C_i_car(t24);
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10406,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t11,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t27=C_eqp(t25,((C_word*)t0)[10]);
if(C_truep(t27)){
if(C_truep(C_i_zerop(((C_word*)((C_word*)t0)[4])[1]))){
t28=C_i_cadr(t11);
t29=C_slot(t28,C_fix(1));
t30=C_eqp(lf[3],t29);
if(C_truep(t30)){
t31=C_slot(t28,C_fix(2));
t32=C_i_car(t31);
t33=C_a_i_cons(&a,2,t32,((C_word*)((C_word*)t0)[11])[1]);
t34=C_mutate2(((C_word *)((C_word*)t0)[11])+1,t33);
t35=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t36=t26;
f_10406(t36,C_SCHEME_TRUE);}
else{
t31=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t32=t26;
f_10406(t32,C_SCHEME_TRUE);}}
else{
t28=t26;
f_10406(t28,C_SCHEME_FALSE);}}
else{
t28=t26;
f_10406(t28,C_eqp(t25,((C_word*)t0)[12]));}}
else{
t24=t1;
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,C_SCHEME_FALSE);}}
else{
t21=C_eqp(t13,lf[164]);
if(C_truep(t21)){
t22=C_i_cadddr(t8);
t23=C_i_zerop(t22);
if(C_truep(t23)){
t24=t1;
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,t23);}
else{
t24=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t24)){
t25=t1;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,C_SCHEME_FALSE);}
else{
t25=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t22);
t26=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t25);
t27=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10513,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1444: every */
t28=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t28+1)))(4,t28,t1,t27,t11);}}}
else{
t22=C_eqp(t13,lf[13]);
if(C_truep(t22)){
t23=C_i_car(t11);
t24=C_i_car(t8);
/* optimizer.scm:1445: rec */
t69=t1;
t70=t23;
t71=t24;
t72=C_SCHEME_FALSE;
t73=t5;
t1=t69;
t2=t70;
t3=t71;
t4=t72;
t5=t73;
goto loop;}
else{
t23=C_eqp(t13,lf[6]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10546,a[2]=t11,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t8,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t25=C_i_car(t11);
t26=C_i_car(t8);
/* optimizer.scm:1447: rec */
t69=t24;
t70=t25;
t71=t26;
t72=t2;
t73=t5;
t1=t69;
t2=t70;
t3=t71;
t4=t72;
t5=t73;
goto loop;}
else{
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10570,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1449: every */
t25=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t25+1)))(4,t25,t1,t24,t11);}}}}}}}}}}}

/* k11529 in k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11531(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11531,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11539,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1629: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4],lf[126]);}

/* k5496 in map-loop675 in k5504 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5498(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5498,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5469(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5469(t6,((C_word*)t0)[5],t5);}}

/* scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10140(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t18;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10140,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10143,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t8,a[7]=t12,a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=t4,a[11]=((C_word*)t0)[5],a[12]=t3,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10603,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1453: rec */
t18=((C_word*)t12)[1];
f_10143(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k11537 in k11529 in k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=C_i_length(t2);
t4=((C_word*)t0)[2];
f_11518(t4,C_eqp(((C_word*)t0)[3],t3));}
else{
t2=((C_word*)t0)[2];
f_11518(t2,C_eqp(((C_word*)t0)[3],C_fix(0)));}}

/* ##compiler#scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3691(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3691,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3694,a[2]=t4,a[3]=t8,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3717,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3724,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3729,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3766,a[2]=t10,a[3]=t6,a[4]=t16,a[5]=t20,a[6]=t18,a[7]=t14,a[8]=t12,tmp=(C_word)a,a+=9,tmp));
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4006,a[2]=t4,a[3]=t1,a[4]=t20,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:108: debugging */
t27=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t26,lf[28],lf[29]);}

/* mark in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3694(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3694,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3701,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_3701(t5,C_SCHEME_FALSE);}
else{
t5=C_i_memq(t2,((C_word*)((C_word*)t0)[4])[1]);
t6=t3;
f_3701(t6,C_i_not(t5));}}

/* k9196 in k9170 in k9161 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9198,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* map-loop2744 in g2716 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11774,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11803,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1674: g2750 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7758 in k7738 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7760,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7768,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm:988: qnode */
t7=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k11544 in k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_11531(t3,C_i_length(t2));}
else{
t2=((C_word*)t0)[2];
f_11531(t2,C_fix(0));}}

/* k7766 in k7758 in k7738 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7768,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2);
t4=((C_word*)t0)[6];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[7],t3));}

/* map-loop675 in k5504 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5469,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5498,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:402: g681 */
t5=((C_word*)t0)[5];
f_5446(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5698 in map-loop740 in k5706 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5700,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5671(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5671(t6,((C_word*)t0)[5],t5);}}

/* k11091 in k11057 in k11054 in g2384 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1505: node-parameters-set! */
t2=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5714 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5716,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:437: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_12141(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12141,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[22],((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_record4(&a,4,lf[14],lf[11],((C_word*)t0)[3],t3);
t5=C_a_i_list1(&a,1,t4);
t6=C_a_i_record4(&a,4,lf[14],lf[13],((C_word*)t0)[4],t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12073,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12077,a[2]=t8,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1745: varnode */
t10=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[11]);}

/* k10294 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10296,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k12147 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_12149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_i_cdr(t3);
/* optimizer.scm:1725: append */
t5=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[4],t1,t4);}

/* g681 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5446,NULL,3,t0,t1,t2);}
/* optimizer.scm:402: g698 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4289(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3949 in k3946 in k3928 in k3925 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3951,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
/* optimizer.scm:100: copy-node! */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k5706 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5708,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5671,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5671(t7,t3,t2);}

/* k9644 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9646(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9646,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=C_eqp(*((C_word*)lf[146]+1),lf[147]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9694,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1297: fifth */
t8=*((C_word*)lf[154]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[2]);}
else{
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[6]);
t9=((C_word*)t0)[3];
t10=C_a_i_record4(&a,4,lf[14],lf[92],t8,t9);
t11=C_a_i_list2(&a,2,((C_word*)t0)[4],t10);
t12=((C_word*)t0)[5];
t13=t12;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_record4(&a,4,lf[14],lf[12],t5,t11));}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in k13460 in a13453 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_13467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13467,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13477,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_cdr(t6);
/* optimizer.scm:615: simplify-named-call */
t8=*((C_word*)lf[142]+1);
((C_proc9)(void*)(*((C_word*)t8+1)))(9,t8,t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[6],t4,t7,((C_word*)t0)[7]);}}

/* k13460 in a13453 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13462,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13467,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_13467(t6,((C_word*)t0)[7],t2);}

/* loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5432(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5432,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_nullp(t2);
t7=(C_truep(t6)?t6:C_i_zerop(t3));
if(C_truep(t7)){
t8=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5446,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=t12,a[8]=t10,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:405: append-reverse */
t15=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,t5,t4);}
else{
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5512,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
t9=C_i_car(t2);
/* optimizer.scm:408: test */
t10=((C_word*)((C_word*)t0)[12])[1];
f_4080(t10,t8,t9,lf[60]);}}

/* a13453 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_13454,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13462,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:613: ##sys#hash-table-ref */
t8=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,*((C_word*)lf[140]+1),t3);}

/* k5750 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_memq(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];
f_5615(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[4];
f_5615(t2,C_SCHEME_FALSE);}}

/* k13207 in k13164 in a13152 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13209(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_13209,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13188,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13192,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:677: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[7]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k8736 in k8692 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8738(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8738,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[14],lf[144],t1,t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t4));}

/* a10261 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10262(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10262,3,t0,t1,t2);}
/* optimizer.scm:1402: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10143(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k13015 in a13008 in k12964 in loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:731: reorganize-recursive-bindings */
t2=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* a13018 in k12964 in loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13019(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13019,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:C_SCHEME_FALSE));}

/* for-each-loop2932 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in ... */
static void C_fcall f_11939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11939,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11949,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1753: g2933 */
t5=((C_word*)t0)[3];
f_11852(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9117 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9119,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:1199: qnode */
t6=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* for-each-loop2918 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11969,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11979,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1752: g2919 */
t5=((C_word*)t0)[3];
f_11847(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5763 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5765,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:366: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4080(t3,t2,((C_word*)t0)[7],lf[70]);}
else{
t2=((C_word*)t0)[2];
f_5320(t2,C_SCHEME_FALSE);}}

/* k9692 in k9644 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9694,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[14],lf[144],t2,t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t5));}

/* k9161 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9163(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9163,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(C_truep(*((C_word*)lf[145]+1))?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9279,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1212: remove */
t8=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9137 in k9117 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9139,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* k9830 in loop in a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9832,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k12964 in loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12966(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_12966,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(3));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_i_cdr(((C_word*)t0)[4]);
t7=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:726: loop2 */
t8=((C_word*)((C_word*)t0)[5])[1];
f_12935(t8,((C_word*)t0)[6],t5,t6,t7);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13009,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13019,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:730: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[6],t2,t3);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11969,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11969(t6,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11847(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11847,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11851,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* optimizer.scm:1754: get */
t5=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[4],t4,lf[126]);}

/* k5454 in k5504 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:406: invalidate-gae! */
f_4120(t3,((C_word*)t0)[5]);}

/* k5783 in k5805 in k5809 in k5763 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,lf[53]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_5320(t3,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[2];
f_5320(t3,((C_word*)t0)[3]);}
else{
t3=C_i_cadddr(((C_word*)t0)[4]);
t4=((C_word*)t0)[2];
f_5320(t4,C_i_lessp(t3,*((C_word*)lf[96]+1)));}}}

/* k5457 in k5454 in k5504 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5459,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11840(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11840,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12297,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12299,a[2]=t7,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_12299(t12,t8,((C_word*)t0)[6]);}

/* k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11992,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_11992(t6,t2,((C_word*)t0)[10]);}

/* k13190 in k13207 in k13164 in a13152 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13192,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13196,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:678: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k13194 in k13190 in k13207 in k13164 in a13152 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:677: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k13475 in loop in k13460 in a13453 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13477,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13481,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:612: g1072 */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_13481(C_a_i(&a,10),t2,t1));}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
/* optimizer.scm:622: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_13467(t4,((C_word*)t0)[3],t3);}}

/* k7912 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7914(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7914,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list1(&a,1,t4);
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_list1(&a,1,t6);
t8=((C_word*)t0)[3];
t9=C_a_i_record4(&a,4,lf[14],lf[144],t7,t8);
t10=C_a_i_list1(&a,1,t9);
t11=C_a_i_record4(&a,4,lf[14],lf[144],t5,t10);
t12=C_a_i_list2(&a,2,((C_word*)t0)[4],t11);
t13=((C_word*)t0)[5];
t14=t13;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_record4(&a,4,lf[14],lf[12],t2,t12));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11837,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11840,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12336,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12342,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1689: list-tabulate */
t6=*((C_word*)lf[188]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t2,t5);}

/* k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11831,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1686: gensym */
t4=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[195]);}

/* k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11834(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[5],lf[35]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12362,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12364,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_12364(t12,t8,((C_word*)t0)[5]);}

/* k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12908(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12908,2,t0,t1);}
t2=t1;
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_u_i_car(t2);
t5=C_eqp(t3,t4);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
t7=C_a_i_list1(&a,1,t6);
t8=C_u_i_cdr(t2);
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12935,a[2]=t11,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_12935(t13,((C_word*)t0)[6],t7,t8,t9);}
else{
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k8789 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8791(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8791,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(*((C_word*)lf[146]+1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,C_SCHEME_TRUE,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8813,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8817,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_u_i_car(t11);
/* optimizer.scm:1142: varnode */
t13=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t8,t12);}
else{
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_eqp(*((C_word*)lf[146]+1),t4);
if(C_truep(t5)){
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=((C_word*)t0)[3];
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_record4(&a,4,lf[14],lf[12],t6,t7));}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* invalidate-gae! in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4120(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4120,NULL,2,t1,t2);}
t3=C_i_check_list_2(t2,lf[2]);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4134,tmp=(C_word)a,a+=2,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4134(t2));}

/* touch in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static C_word C_fcall f_4116(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6808(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6808,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6865,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7200,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_7200(t11,t7,t5,t6);}

/* a13008 in k12964 in loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13017,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:731: reverse */
t3=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* find in find-path in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6816(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6816,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_memq(t2,t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=C_i_memq(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_a_i_cons(&a,2,t2,t3);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6840,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:836: any */
t10=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t9,t5);}}}

/* find-path in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6810(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6810,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6816,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6816(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* k11200 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1522: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10931(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* for-each-loop2417 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11214,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11224,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1523: g2418 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4162 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
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

/* k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:152: any */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11222 in for-each-loop2417 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11214(t3,((C_word*)t0)[4],t2);}

/* k5809 in k5763 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5811,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5320(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:367: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4080(t3,t2,((C_word*)t0)[7],lf[64]);}}

/* simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4157,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4161,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=t2;
t5=C_slot(t4,C_fix(1));
/* optimizer.scm:151: ##sys#hash-table-ref */
t6=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,*((C_word*)lf[30]+1),t5);}

/* for-each-loop2195 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10111(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10111,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10121,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1374: g2196 */
t5=((C_word*)t0)[3];
f_10099(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5805 in k5809 in k5763 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5807,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5320(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[54]);}}

/* a10813 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10814,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=C_a_i_list1(&a,1,t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_slot(t7,C_fix(3));
t9=C_i_car(t8);
t10=C_slot(t9,C_fix(1));
t11=C_slot(t9,C_fix(2));
t12=C_slot(t9,C_fix(3));
t13=C_a_i_record4(&a,4,lf[14],t10,t11,t12);
t14=C_a_i_list2(&a,2,t13,t3);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_record4(&a,4,lf[14],lf[6],t5,t14));}

/* for-each-loop188 in invalidate-gae! in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static C_word C_fcall f_4134(C_word t1){
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
t3=C_i_set_cdr(t2,C_SCHEME_FALSE);
t4=C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k12295 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1692: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[191],lf[192],t1);}

/* map-loop2825 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12299(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12299,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k6860 in g1331 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6862,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* g1371 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6866(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6866,NULL,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6876,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6898,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:849: filter */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[5]);}}

/* k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6865(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6865,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6866,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[3];
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6925,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7177,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_7177(t12,t8,t7);}

/* k11516 in k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11518(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=C_eqp(lf[11],t2);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[4],C_fix(2));
t5=C_i_caddr(t4);
t6=((C_word*)t0)[5];
f_11470(t6,C_i_listp(t5));}
else{
t4=((C_word*)t0)[5];
f_11470(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
f_11470(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
f_11470(t2,C_SCHEME_FALSE);}}

/* k10119 in for-each-loop2195 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10111(t3,((C_word*)t0)[4],t2);}

/* k6874 in g1371 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6876,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6892,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:852: gensym */
t4=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k10799 in for-each-loop2519 in k10747 in k10744 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_10801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10791(t3,((C_word*)t0)[4],t2);}

/* k6882 in k6890 in k6874 in g1371 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9807 in k9803 in loop in a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9809,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k9803 in loop in a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9805,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9809,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* optimizer.scm:1326: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9785(t6,t3,C_SCHEME_END_OF_LIST,t5);}

/* a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12794(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12794,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12804,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_12804(t9,t1,t5,t4);}

/* k6890 in k6874 in g1371 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6892,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t1,t2),((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6884,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:853: append */
t7=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,t6,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1]);}

/* a6897 in g1371 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6898,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:850: find-path */
t5=((C_word*)t0)[3];
f_6810(t5,t4,((C_word*)t0)[2],t2);}}

/* k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_12248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12248,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_12244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1719: gensym */
t7=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[190]);}

/* a10224 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10225(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10225,5,t0,t1,t2,t3,t4);}
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t7=C_i_car(((C_word*)t0)[4]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10241,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1397: append */
t10=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t2,((C_word*)t0)[6]);}

/* k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in ... */
static void C_ccall f_12244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12244,2,t0,t1);}
t2=C_a_i_list4(&a,4,t1,C_SCHEME_TRUE,((C_word*)t0)[2],C_fix(0));
t3=t2;
t4=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12141,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12236,a[2]=((C_word*)t0)[9],a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1726: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[13]);}

/* a6839 in find in find-path in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6840,3,t0,t1,t2);}
/* optimizer.scm:836: find */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6816(t3,t1,t2,((C_word*)t0)[3]);}

/* g1331 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6853(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6853,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6862,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:840: scan-used-variables */
t5=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[3]);}

/* k6139 in k6165 in k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* for-each-loop880 in k6165 in k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6143(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6143,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6153,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:491: g881 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10239 in a10224 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1397: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10143(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k12174 in k12170 in a12163 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in ... */
static void C_ccall f_12176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12176,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k12170 in a12163 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in ... */
static void C_ccall f_12172(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12172,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12176,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_caddr(((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12182,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_12182(t8,t3,((C_word*)t0)[4],t4);}

/* k12214 in k12210 in loop in k12170 in a12163 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in ... */
static void C_ccall f_12216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12216,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[4],t2));}

/* k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6110(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6110,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6116,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:488: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[18],lf[104],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6209,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[8]);
/* optimizer.scm:491: walk */
t4=((C_word*)((C_word*)t0)[9])[1];
f_4289(t4,t2,t3,((C_word*)t0)[10],((C_word*)t0)[6]);}}

/* k6114 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6116,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* k12210 in loop in k12170 in a12163 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in ... */
static void C_ccall f_12212(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12212,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12216,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[5];
t7=C_u_i_cdr(t6);
/* optimizer.scm:1737: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_12182(t8,t3,t5,t7);}

/* a12163 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_12164(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12164,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12172,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(t2);
/* optimizer.scm:1729: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13123(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13123,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_slot(t2,C_fix(2));
t4=t3;
t5=C_slot(t2,C_fix(3));
t6=t5;
t7=C_slot(t2,C_fix(1));
t8=C_eqp(t7,lf[15]);
if(C_truep(t8)){
t9=C_u_i_car(((C_word*)t0)[4]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[5]);
t11=C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm:708: loop1 */
t12=((C_word*)((C_word*)t0)[6])[1];
f_12804(t12,((C_word*)t0)[2],t10,t11);}
else{
t9=C_eqp(t7,lf[13]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12908,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:710: reverse */
t11=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t0)[5]);}
else{
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}}}

/* k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13129,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:703: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[7],t3,lf[78]);}}

/* k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_12236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12236,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12164,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1727: append-map */
t6=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[5]);}

/* a9278 in k9161 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9279,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[34],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* loop in k12170 in a12163 in k12234 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in ... */
static void C_fcall f_12182(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12182,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cadddr(((C_word*)t0)[2]));}
else{
t4=C_i_car(t3);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12212,a[2]=t1,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=C_i_car(t2);
/* optimizer.scm:1736: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}

/* k10205 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10207(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10207,2,t0,t1);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_i_memq(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],C_fix(2));
t7=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}}}}

/* f_6185 in k6165 in k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6185(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6185,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(t5,C_fix(1),C_SCHEME_FALSE));}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4289(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4289,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_memq(t2,*((C_word*)lf[39]+1)))){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t4,a[9]=t5,a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:172: walk1 */
t7=((C_word*)((C_word*)t0)[8])[1];
f_4502(t7,t6,t2,t3,t4);}}

/* k6151 in for-each-loop880 in k6165 in k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6143(t3,((C_word*)t0)[4],t2);}

/* k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5820,2,t0,t1);}
t2=C_i_structurep(t1,lf[14]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t3,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
if(C_truep(*((C_word*)lf[95]+1))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5765,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[23],a[7]=((C_word*)t0)[19],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:365: test */
t6=((C_word*)((C_word*)t0)[23])[1];
f_4080(t6,t5,((C_word*)t0)[17],lf[97]);}
else{
t5=t4;
f_5320(t5,C_SCHEME_FALSE);}}

/* k5824 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5826,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_i_car(t3);
/* optimizer.scm:454: debugging */
t5=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,lf[80],lf[99],((C_word*)t0)[9],t4);}
else{
/* optimizer.scm:462: walk-generic */
t2=((C_word*)((C_word*)t0)[10])[1];
f_6278(t2,((C_word*)t0)[6],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_TRUE);}}

/* k5827 in k5824 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5829,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t3);
/* optimizer.scm:456: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4289(t5,((C_word*)t0)[6],t4,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k6165 in k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6167(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6167,2,t0,t1);}
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t3=t2;
t4=((C_word*)t0)[3];
t5=C_i_check_list_2(t4,lf[2]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6143,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6143(t10,t6,t4);}

/* f_6168 in k6165 in k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6168(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6168,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(t5,C_fix(1),C_SCHEME_FALSE));}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k4443 in k4437 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
/* optimizer.scm:191: every */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t2);}
else{
t2=((C_word*)t0)[3];
f_4381(2,t2,C_SCHEME_FALSE);}}

/* k4437 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4439,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:190: foldable? */
t3=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
f_4381(2,t2,C_SCHEME_FALSE);}}

/* a12704 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_12705,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
if(C_truep(C_i_equalp(t4,*((C_word*)lf[217]+1)))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12752,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t8,a[6]=t1,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:763: get-list */
t10=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t2,t3,lf[78]);}}

/* k10404 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10406,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:1437: every */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4730 in k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4732,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(2));
t4=C_i_car(t3);
t5=((C_word*)t0)[3];
f_4677(t5,C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[4],t4),((C_word*)t0)[5]));}
else{
t2=((C_word*)t0)[3];
f_4677(t2,((C_word*)t0)[5]);}}

/* k4409 in a4389 in k4379 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4411,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t3,t1);
t5=((C_word*)t0)[3];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[14],lf[12],t2,t4));}

/* k4795 in k4788 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4660(t2,C_i_not(t1));}

/* k4484 in replace-var in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4486,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:134: g314 */
t3=t2;
f_4490(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4788 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4790,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4797,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:253: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4080(t3,t2,((C_word*)t0)[4],lf[57]);}
else{
t2=((C_word*)t0)[2];
f_4660(t2,C_SCHEME_FALSE);}}

/* replace-var in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4482(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4482,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4486,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:215: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4080(t4,t3,t2,lf[48]);}

/* a10410 in k10404 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10411(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10411,3,t0,t1,t2);}
/* optimizer.scm:1437: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10143(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11456(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11456,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1621: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_11410(t4,((C_word*)t0)[7],((C_word*)t0)[8],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11470,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_slot(((C_word*)t0)[9],C_fix(1));
t4=C_eqp(lf[13],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[9],C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=C_slot(((C_word*)t0)[9],C_fix(2));
t9=C_i_car(t8);
t10=t9;
t11=C_slot(t7,C_fix(1));
t12=C_eqp(lf[11],t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11518,a[2]=t10,a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11531,a[2]=t13,a[3]=((C_word*)t0)[12],a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11546,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1628: get */
t16=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t15,((C_word*)t0)[12],t10,lf[78]);}
else{
t13=t2;
f_11470(t13,C_SCHEME_FALSE);}}
else{
t5=t2;
f_11470(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_11470(t3,C_SCHEME_FALSE);}}}

/* walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4502,NULL,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=C_slot(t5,C_fix(3));
t7=t6;
t8=t2;
t9=C_slot(t8,C_fix(2));
t10=t9;
t11=t2;
t12=C_slot(t11,C_fix(1));
t13=t12;
t14=C_eqp(t13,lf[3]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4536,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t10,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t16=C_i_car(t10);
/* optimizer.scm:230: replace-var */
t17=((C_word*)((C_word*)t0)[5])[1];
f_4482(t17,t15,t16);}
else{
t15=C_eqp(t13,lf[6]);
if(C_truep(t15)){
t16=C_i_car(t10);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t7,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=t3,a[8]=t4,a[9]=t10,a[10]=t17,a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:251: test */
t19=((C_word*)((C_word*)t0)[3])[1];
f_4080(t19,t18,t17,lf[59]);}
else{
t16=C_eqp(t13,lf[11]);
if(C_truep(t16)){
t17=C_i_caddr(t10);
t18=t17;
t19=C_u_i_car(t10);
t20=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4813,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=t7,a[6]=t19,a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=t18,a[11]=((C_word*)t0)[8],a[12]=t2,a[13]=t13,tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:269: test */
t21=((C_word*)((C_word*)t0)[3])[1];
f_4080(t21,t20,t19,lf[68]);}
else{
t17=C_eqp(t13,lf[69]);
if(C_truep(t17)){
/* optimizer.scm:302: walk-generic */
t18=((C_word*)((C_word*)t0)[8])[1];
f_6278(t18,t1,t2,t13,t10,t7,t3,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t18=C_eqp(t13,lf[12]);
if(C_truep(t18)){
t19=C_i_car(t7);
t20=t19;
t21=C_slot(t20,C_fix(1));
t22=C_eqp(t21,lf[3]);
if(C_truep(t22)){
t23=C_slot(t20,C_fix(2));
t24=C_i_car(t23);
t25=t24;
t26=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5017,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=t4,a[9]=t25,a[10]=((C_word*)t0)[8],a[11]=t2,a[12]=t13,a[13]=t10,a[14]=((C_word*)t0)[3],a[15]=t20,a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm:311: call-info */
t27=*((C_word*)lf[102]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t26,t10,t25);}
else{
t23=C_eqp(t21,lf[11]);
if(C_truep(t23)){
if(C_truep(C_i_car(t10))){
/* optimizer.scm:465: walk-generic */
t24=((C_word*)((C_word*)t0)[8])[1];
f_6278(t24,t1,t2,t13,t10,t7,t3,t4,C_SCHEME_FALSE);}
else{
t24=C_u_i_cdr(t10);
t25=C_a_i_cons(&a,2,C_SCHEME_TRUE,t24);
t26=t25;
t27=C_SCHEME_END_OF_LIST;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_FALSE;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6001,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6008,a[2]=t26,a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6010,a[2]=t30,a[3]=t34,a[4]=t28,a[5]=t31,tmp=(C_word)a,a+=6,tmp));
t36=((C_word*)t34)[1];
f_6010(t36,t32,t7);}}
else{
/* optimizer.scm:470: walk-generic */
t24=((C_word*)((C_word*)t0)[8])[1];
f_6278(t24,t1,t2,t13,t10,t7,t3,t4,C_SCHEME_TRUE);}}}
else{
t19=C_eqp(t13,lf[13]);
if(C_truep(t19)){
t20=C_i_car(t10);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6067,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t21,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t4,a[8]=t7,a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:474: test */
t23=((C_word*)((C_word*)t0)[3])[1];
f_4080(t23,t22,t21,lf[58]);}
else{
/* optimizer.scm:503: walk-generic */
t20=((C_word*)((C_word*)t0)[8])[1];
f_6278(t20,t1,t2,t13,t10,t7,t3,t4,C_SCHEME_FALSE);}}}}}}}

/* k9249 in k9170 in k9161 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9251,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* a9252 in k9170 in k9161 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9253,4,t0,t1,t2,t3);}
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[14],lf[144],t4,t5));}

/* k11468 in k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11470,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1634: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_11410(t5,((C_word*)t0)[7],((C_word*)t0)[8],t4);}
else{
t2=f_11350(C_a_i(&a,6),((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1638: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_11410(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* a11913 in k11886 in g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_11914(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11914,2,t0,t1);}
/* optimizer.scm:1767: qnode */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* k11947 in for-each-loop2932 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_11949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11939(t3,((C_word*)t0)[4],t2);}

/* k6931 in g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6933,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6943,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:868: filter-map */
t5=*((C_word*)lf[134]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)((C_word*)t0)[6])[1]);}

/* k6939 in k6931 in g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6941,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* a6942 in k6931 in g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6943,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6956,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
/* optimizer.scm:869: lset<= */
t6=*((C_word*)lf[133]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,*((C_word*)lf[27]+1),t5,((C_word*)t0)[3]);}}

/* k4402 in k4398 in a4389 in k4379 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[39]+1 /* (set! ##compiler#broken-constant-nodes ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}

/* k4398 in a4389 in k4379 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4400,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:199: lset-adjoin */
t3=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[27]+1),*((C_word*)lf[39]+1),((C_word*)t0)[3]);}

/* k7126 in a7081 in k7019 in a7007 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7128(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7128,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_i_cdr(t4);
t6=C_a_i_list1(&a,1,t5);
t7=C_a_i_record4(&a,4,lf[14],lf[13],t3,t6);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[4]);
t9=((C_word*)t0)[5];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_record4(&a,4,lf[14],lf[6],t2,t8));}

/* k6989 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6991,2,t0,t1);}
t2=t1;
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7000,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:906: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[18],lf[136],((C_word*)((C_word*)t0)[2])[1]);}
else{
/* optimizer.scm:908: values */
C_values(4,0,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}}

/* k11054 in g2384 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1504: node-class-set! */
t3=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],lf[6]);}

/* k11057 in k11054 in g2384 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11093,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[8],C_fix(2));
t5=C_i_caddr(t4);
/* optimizer.scm:1505: take */
t6=*((C_word*)lf[173]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,C_fix(1));}

/* k7019 in a7007 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7021(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7021,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[4]);
t5=C_i_cdr(t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[5]);
t7=((C_word*)t0)[6];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[7],t6));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7050,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7080,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7082,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:894: fold-right */
t5=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[7]);}}

/* for-each-loop1370 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7177,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7187,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:844: g1371 */
t5=((C_word*)t0)[3];
f_6866(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11060 in k11057 in k11054 in g2384 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,((C_word*)t0)[5]);
t4=C_i_cddr(((C_word*)t0)[6]);
t5=C_a_i_record4(&a,4,lf[14],lf[171],t3,t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[4]);
/* optimizer.scm:1506: node-subexpressions-set! */
t7=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[7],t6);}

/* k11063 in k11060 in k11057 in k11054 in g2384 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_11065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1509: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10931(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k11485 in k11468 in k11454 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11487,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* optimizer.scm:1639: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_11410(t3,((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k11902 in k11894 in k11886 in g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in ... */
static void C_ccall f_11904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11904,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1763: append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k7185 in for-each-loop1370 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7177(t3,((C_word*)t0)[4],t2);}

/* k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6516,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6519,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:566: get-list */
t4=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[7],((C_word*)t0)[8],lf[78]);}

/* a6972 in a6966 in g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6973(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6973,3,t0,t1,t2);}
/* optimizer.scm:863: find-path */
t3=((C_word*)t0)[2];
f_6810(t3,t1,((C_word*)t0)[3],t2);}

/* k6998 in k6989 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:907: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k11977 in for-each-loop2918 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_11979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11969(t3,((C_word*)t0)[4],t2);}

/* k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6519(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[2])){
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_length(((C_word*)t0)[6]);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_slot(((C_word*)t0)[2],C_fix(1));
t8=t2;
f_6525(t8,C_eqp(lf[11],t7));}
else{
t7=t2;
f_6525(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_6525(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6525(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6525(t3,C_SCHEME_FALSE);}}

/* k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:875: topological-sort */
t3=*((C_word*)lf[139]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[7])[1],*((C_word*)lf[27]+1));}

/* k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6988,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6991,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7008,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:880: fold */
t6=*((C_word*)lf[138]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[6],t1);}

/* k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4536,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:231: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4080(t4,t3,t2,lf[55]);}

/* k4566 in k4546 in k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(t1,C_fix(2));
t3=C_i_car(t2);
/* optimizer.scm:234: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* a7081 in k7019 in a7007 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7082(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7082,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7128,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:897: gensym */
t5=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a7007 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7008,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=t5;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7021,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t10=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t10))){
t11=C_i_assq(t8,((C_word*)((C_word*)t0)[5])[1]);
t12=C_i_cdr(t11);
t13=C_i_memq(t8,t12);
t14=t9;
f_7021(t14,C_i_not(t13));}
else{
t11=t9;
f_7021(t11,C_SCHEME_FALSE);}}

/* k7078 in k7019 in a7007 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:889: fold-right */
t2=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11992(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11992,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=C_i_cadr(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12002,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t8=C_slot(t6,C_fix(1));
t9=C_eqp(lf[6],t8);
if(C_truep(t9)){
t10=C_slot(t6,C_fix(3));
t11=C_i_car(t10);
t12=C_slot(t11,C_fix(1));
t13=t7;
f_12002(t13,C_eqp(lf[15],t12));}
else{
t10=t7;
f_12002(t10,C_SCHEME_FALSE);}}

/* g354 in k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4591(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4591,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4601,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4626,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* tweaks.scm:57: ##sys#get */
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,lf[54]);}
else{
t6=t5;
f_4601(t6,C_SCHEME_FALSE);}}

/* k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_11851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(t1,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11939,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_11939(t7,((C_word*)t0)[5],t1);}

/* g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in ... */
static void C_fcall f_11852(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11852,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=C_i_cdr(t5);
t7=t6;
t8=C_slot(t4,C_fix(2));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11884,a[2]=t9,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11888,a[2]=t10,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1762: varnode */
t12=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[4]);}

/* k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t2;
f_6557(t6,C_eqp(lf[5],t5));}
else{
t5=t2;
f_6557(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6557(t3,C_SCHEME_FALSE);}}

/* k6555 in k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6557(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6557,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_eqp(lf[3],t5);
if(C_truep(t6)){
t7=C_slot(t3,C_fix(2));
t8=C_i_car(t7);
t9=t4;
f_6566(t9,C_eqp(((C_word*)t0)[9],t8));}
else{
t7=t4;
f_6566(t7,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11410(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11410,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t2;
t10=C_slot(t9,C_fix(1));
t11=C_eqp(t10,lf[6]);
if(C_truep(t11)){
t12=C_i_car(t8);
t13=t12;
t14=C_i_car(t6);
t15=t14;
t16=C_i_cadr(t6);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11456,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t13,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t17,a[9]=t15,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],tmp=(C_word)a,a+=13,tmp);
t19=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t19)){
t20=t18;
f_11456(t20,C_SCHEME_FALSE);}
else{
t20=C_slot(t15,C_fix(1));
t21=t18;
f_11456(t21,C_eqp(lf[15],t20));}}
else{
t12=C_eqp(t10,lf[11]);
t13=(C_truep(t12)?t12:C_eqp(t10,lf[69]));
if(C_truep(t13)){
t14=C_i_caddr(t8);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11618,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1641: decompose-lambda-list */
t16=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,t14,t15);}
else{
t14=f_11350(C_a_i(&a,6),((C_word*)((C_word*)t0)[5])[1]);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11650,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t16=C_i_check_list_2(t6,lf[2]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11662,a[2]=t18,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t20=((C_word*)t18)[1];
f_11662(t20,t1,t6);}}}

/* k11801 in map-loop2744 in g2716 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11803(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11803,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11774(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11774(t6,((C_word*)t0)[5],t5);}}

/* k6564 in k6555 in k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6566(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6566,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6573,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:589: node-parameters-set! */
t5=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[8],lf[123]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5516 in k5510 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:413: expression-has-side-effects? */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[11]);}

/* a7049 in k7019 in a7007 in k6986 in k6983 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7050(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7050,4,t0,t1,t2,t3);}
t4=C_a_i_list1(&a,1,t2);
t5=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=C_a_i_list2(&a,2,t5,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[6],t4,t6));}

/* k5510 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5512,2,t0,t1);}
if(C_truep(t1)){
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5518,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
/* optimizer.scm:410: debugging */
t6=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t3,lf[18],lf[89],t5,((C_word*)t0)[13]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t5=C_i_cdr(((C_word*)t0)[6]);
t6=((C_word*)t0)[6];
t7=C_u_i_car(t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[8]);
/* optimizer.scm:420: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5432(t9,((C_word*)t0)[3],t3,t4,t5,t8);}}

/* k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_4660(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4790,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:252: test */
t4=((C_word*)((C_word*)t0)[11])[1];
f_4080(t4,t3,((C_word*)t0)[10],lf[58]);}}

/* k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6545(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6545,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:577: get-list */
t5=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[10],t3,lf[78]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k11890 in k11886 in g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_11892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1762: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k11894 in k11886 in g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_11896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11896,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:1768: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k6592 in k6574 in k6571 in k6564 in k6555 in k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6594,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:591: node-subexpressions-set! */
t3=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k8882 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8884,2,t0,t1);}
t2=t1;
if(C_truep(*((C_word*)lf[143]+1))){
t3=C_i_not(((C_word*)t0)[2]);
t4=(C_truep(t3)?t3:C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[2]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8907,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t6=((C_word*)t0)[10];
/* tweaks.scm:51: ##sys#get */
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,lf[46]);}
else{
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* map-loop1699 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8267(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8267,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8296,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1045: gensym */
t4=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3888 in k3884 in k3877 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:83: scan */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3766(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k8259 in map-loop1727 in k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8261(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8261,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8232(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8232(t6,((C_word*)t0)[5],t5);}}

/* a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13283(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13){
C_word tmp;
C_word t14;
C_word t15;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr14,(void*)f_13283,14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}
if(C_truep(C_i_equalp(t6,*((C_word*)lf[217]+1)))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13296,a[2]=t9,a[3]=t10,a[4]=t13,a[5]=t1,a[6]=t8,a[7]=t7,a[8]=t3,a[9]=t2,a[10]=t5,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:645: immediate? */
t15=*((C_word*)lf[219]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t7);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}

/* k6954 in a6942 in k6931 in g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_car(t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6577 in k6574 in k6571 in k6564 in k6555 in k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:594: touch */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_6466(((C_word*)((C_word*)t0)[3])[1]));}

/* k6571 in k6564 in k6555 in k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm:590: node-subexpressions-set! */
t4=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[7],t3);}

/* k6574 in k6571 in k6564 in k6555 in k6549 in k6543 in k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6594,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:593: reverse */
t7=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13296,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:646: immediate? */
t3=*((C_word*)lf[219]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5504 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5506,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5469(t7,t3,t2);}

/* k3892 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:82: scan-each */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3729(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* a6966 in g1395 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6967,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6973,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:863: filter */
t4=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[3]);}

/* a6396 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:529: print */
t3=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[115]);}

/* k8294 in map-loop1699 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8296(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8296,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8267(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8267(t6,((C_word*)t0)[5],t5);}}

/* k11886 in g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_11888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11888,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11892,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11896,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_i_length(((C_word*)t0)[3]);
t6=C_a_i_minus(&a,2,((C_word*)t0)[5],t5);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11914,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1765: list-tabulate */
t8=*((C_word*)lf[188]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,t6,t7);}

/* k11882 in g2933 in k11849 in g2919 in k11844 in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_11884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11884,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[2],t1);
/* optimizer.scm:1759: copy-node! */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k13354 in k13300 in k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13356,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:648: get-list */
t5=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[9],((C_word*)t0)[10],lf[78]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a11623 in a11617 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11624,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[7])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k9067 in k9034 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_9069(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9069,NULL,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[14],lf[144],t2,t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t5));}

/* k5522 in k5516 in k5510 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5524,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:416: gensym */
t3=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[88]);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* optimizer.scm:419: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_5432(t7,((C_word*)t0)[2],t3,t4,t6,((C_word*)t0)[7]);}}

/* k13345 in k13354 in k13300 in k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13347,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:652: varnode */
t5=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[8]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a11630 in a11617 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11631,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1647: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11410(t3,t1,t2,((C_word*)t0)[4]);}

/* k5546 in k5542 in k5560 in k5522 in k5516 in k5510 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_5548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5548,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[4],t2));}

/* a11640 in a11617 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11641,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[7])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* a8203 in k8154 in k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8204,4,t0,t1,t2,t3);}
t4=C_a_i_list2(&a,2,t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[2],t4));}

/* k5542 in k5560 in k5522 in k5516 in k5510 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5544,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5548,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
t6=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
/* optimizer.scm:418: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5432(t9,t3,t5,t6,t8,((C_word*)t0)[8]);}

/* k8200 in k8154 in k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8202,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t2);
/* optimizer.scm:1047: fold-right */
t4=*((C_word*)lf[137]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],((C_word*)t0)[5],t3,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6353,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6356,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
/* optimizer.scm:524: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[18],lf[117],((C_word*)((C_word*)t0)[7])[1]);}
else{
t4=t3;
f_6356(2,t4,C_SCHEME_UNDEFINED);}}

/* k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[31]+1)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6397,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:526: with-debugging-output */
t4=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[18],t3);}
else{
t3=t2;
f_6359(2,t3,C_SCHEME_UNDEFINED);}}

/* k6357 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[7])[1],C_fix(0)))){
/* optimizer.scm:537: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[110],((C_word*)((C_word*)t0)[7])[1]);}
else{
t3=t2;
f_6362(2,t3,C_SCHEME_UNDEFINED);}}

/* g2666 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11650(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11650,NULL,3,t0,t1,t2);}
/* optimizer.scm:1651: g2681 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_11410(t3,t1,t2,((C_word*)t0)[3]);}

/* k6360 in k6357 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[6])[1],C_fix(0)))){
/* optimizer.scm:538: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[109],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=t2;
f_6365(2,t3,C_SCHEME_UNDEFINED);}}

/* k6363 in k6360 in k6357 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[5])[1],C_fix(0)))){
/* optimizer.scm:539: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[108],((C_word*)((C_word*)t0)[5])[1]);}
else{
/* optimizer.scm:540: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k6366 in k6363 in k6360 in k6357 in k6354 in k6351 in k6347 in k6341 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:540: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8142(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8142,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8150,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8267,a[2]=t5,a[3]=t9,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8267(t11,t7,t6);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* for-each-loop1394 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7154(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7154,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7164,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:857: g1395 */
t5=((C_word*)t0)[3];
f_6926(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10555 in k10544 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1448: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10143(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k5560 in k5522 in k5516 in k5510 in loop in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5562,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5544,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_car(t5);
/* optimizer.scm:417: walk */
t7=((C_word*)((C_word*)t0)[8])[1];
f_4289(t7,t4,t6,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k9034 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9036,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t5=C_i_cddr(((C_word*)t0)[5]);
t6=C_i_pairp(t5);
t7=t4;
f_9069(t7,(C_truep(t6)?C_i_caddr(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5])));}
else{
t5=t4;
f_9069(t5,C_i_cadr(((C_word*)t0)[5]));}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13300 in k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13302,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_13356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:647: get-list */
t3=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],((C_word*)t0)[11],lf[78]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8154 in k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8156(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8161,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=C_eqp(*((C_word*)lf[146]+1),lf[147]);
t6=(C_truep(t5)?C_i_car(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t7=C_a_i_list1(&a,1,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8202,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8204,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1057: fold-boolean */
t11=*((C_word*)lf[148]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,t1);}

/* k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8150(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8150,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[51]+1);
t8=C_i_check_list_2(t2,lf[35]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8232,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8232(t13,t9,t2);}

/* k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12002(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12002,NULL,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:1703: descend */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11992(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t3=t2;
t4=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12248,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t5,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1712: gensym */
t7=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7162 in for-each-loop1394 in k6923 in k6863 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7154(t3,((C_word*)t0)[4],t2);}

/* k10544 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10546,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10557,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1448: append */
t5=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8815 in k8789 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1142: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k8811 in k8789 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8813,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1));}

/* k3681 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* map-loop1727 in k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8232(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8232,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8261,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1046: g1733 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3684 in k3681 */
static void C_ccall f_3686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3687 in k3684 in k3681 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3689,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3691,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:131: make-vector */
t4=*((C_word*)lf[198]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k13332 in k13328 in k13345 in k13354 in k13300 in k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13334,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13338,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:655: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k13336 in k13332 in k13328 in k13345 in k13354 in k13300 in k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13338,2,t0,t1);}
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);
t3=((C_word*)t0)[7];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[22],lf[218],t2));}

/* k13328 in k13345 in k13354 in k13300 in k13294 in a13282 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13330,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13334,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:653: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* a8160 in k8154 in k8148 in k8140 in k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8161,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t3);
t6=C_a_i_list2(&a,2,t2,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[6],t5,t6));}

/* for-each-loop502 in k5042 in k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5080,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5090,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:326: g503 */
t5=((C_word*)t0)[3];
f_5048(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5088 in for-each-loop502 in k5042 in k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5080(t3,((C_word*)t0)[4],t2);}

/* k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8107(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8107,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(2)))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8133,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1041: qnode */
t6=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t4=C_eqp(*((C_word*)lf[146]+1),lf[150]);
t5=t3;
f_8139(t5,C_i_not(t4));}
else{
t4=t3;
f_8139(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7292 in rewrite in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7294,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* optimizer.scm:917: append */
t5=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}

/* ##compiler#rewrite in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7290(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_7290r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7290r(t0,t1,t2,t3);}}

static void C_ccall f_7290r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7294,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:916: ##sys#hash-table-ref */
t5=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[140]+1),t2);}

/* a9573 in k9452 in k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9574,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[34],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k4004 in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:109: scan */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3766(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k4007 in k4004 in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4070,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:111: delete-duplicates */
t4=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[27]+1));}
else{
t3=t2;
f_4012(2,t3,C_SCHEME_UNDEFINED);}}

/* k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10631(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10631,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=t5,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t7=C_u_i_length(((C_word*)t0)[2]);
t8=C_eqp(t7,C_fix(4));
if(C_truep(t8)){
t9=C_i_caddr(((C_word*)t0)[2]);
t10=t6;
f_10640(t10,C_i_listp(t9));}
else{
t9=t6;
f_10640(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_10640(t7,C_SCHEME_FALSE);}}

/* k10784 in for-each-loop2519 in k10747 in k10744 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_10786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10786,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1563: node-parameters-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12804(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12804,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=C_slot(t4,C_fix(1));
t6=t3;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=t3;
t10=C_slot(t9,C_fix(3));
t11=t10;
t12=C_eqp(t5,lf[6]);
if(C_truep(t12)){
t13=C_i_cdr(t8);
if(C_truep(C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13129,a[2]=t1,a[3]=t11,a[4]=t8,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t15=C_u_i_car(t8);
/* optimizer.scm:702: get */
t16=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t14,((C_word*)t0)[3],t15,lf[105]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}

/* for-each-loop110 in k4010 in k4007 in k4004 in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_4039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4039,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4049,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[24],C_SCHEME_TRUE);}
else{
t6=C_i_car(t5);
/* tweaks.scm:54: ##sys#put! */
t7=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,lf[24],t6);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g2456 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10657(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10657,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10672,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=C_i_cdr(t6);
t9=C_i_length(t8);
t10=C_eqp(((C_word*)t0)[4],t9);
if(C_truep(t10)){
t11=t7;
f_10672(2,t11,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1533: quit */
t11=*((C_word*)lf[167]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t7,lf[168],((C_word*)t0)[5]);}}

/* k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10723,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10913,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1543: lset-difference */
t5=*((C_word*)lf[169]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[9],((C_word*)((C_word*)t0)[10])[1]);}

/* k8137 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8139(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8139,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_8142(t3,t1);}
else{
t3=C_eqp(*((C_word*)lf[146]+1),lf[147]);
t4=(C_truep(t3)?C_i_caddr(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_8142(t5,t4);}
else{
t5=C_eqp(*((C_word*)lf[146]+1),lf[149]);
t6=t2;
f_8142(t6,(C_truep(t5)?C_i_cadddr(((C_word*)t0)[3]):C_SCHEME_FALSE));}}}

/* k8131 in k8105 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8133,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10653(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[11];
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10931,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[13],a[8]=t7,a[9]=((C_word*)t0)[14],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_10931(3,t9,t2,t5);}

/* k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10644,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_10647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:1469: cdaddr */
t4=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10647,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_cdr(t2);
t4=C_i_setslot(t3,C_fix(0),t1);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10653,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1473: node-class-set! */
t6=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[12],lf[69]);}

/* k4010 in k4007 in k4004 in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4012,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4039(t7,((C_word*)t0)[3],t2);}

/* k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10640,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10644,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1468: caaddr */
t4=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
/* optimizer.scm:1566: bomb */
t2=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[8],lf[180],((C_word*)t0)[2]);}}

/* for-each-loop2519 in k10747 in k10744 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in ... */
static void C_fcall f_10791(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10791,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10801,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_cdr(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10757,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10786,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1563: gensym */
t10=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11007 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1493: node-class-set! */
t3=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[171]);}

/* k4047 in for-each-loop110 in k4010 in k4007 in k4004 in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4039(t3,((C_word*)t0)[4],t2);}

/* k11013 in k11010 in k11007 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* optimizer.scm:1495: node-subexpressions-set! */
t3=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* for-each-loop2455 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10890,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10900,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1528: g2456 */
t5=((C_word*)t0)[3];
f_10657(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11010 in k11007 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
/* optimizer.scm:1494: node-parameters-set! */
t4=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* ##compiler#perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4077(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[86],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4077,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
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
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4080,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4086,tmp=(C_word)a,a+=2,tmp));
t36=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4116,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t37=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4120,tmp=(C_word)a,a+=2,tmp));
t38=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4157,a[2]=t13,a[3]=t21,a[4]=t25,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t39=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4289,a[2]=t15,a[3]=t25,a[4]=t7,a[5]=t21,a[6]=t27,a[7]=t19,a[8]=t31,tmp=(C_word)a,a+=9,tmp));
t40=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4482,a[2]=t3,a[3]=t29,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4502,a[2]=t21,a[3]=t17,a[4]=t9,a[5]=t29,a[6]=t5,a[7]=t27,a[8]=t33,a[9]=t3,a[10]=t23,a[11]=t11,tmp=(C_word)a,a+=12,tmp));
t42=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6278,a[2]=t23,a[3]=t27,tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6343,a[2]=t1,a[3]=t2,a[4]=t15,a[5]=t7,a[6]=t5,a[7]=t9,a[8]=t13,a[9]=t27,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:518: perform-pre-optimization! */
t44=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t44+1)))(4,t44,t43,t2,t3);}

/* k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4074,2,t0,t1);}
t2=C_mutate2((C_word*)lf[30]+1 /* (set! ##compiler#simplifications ...) */,t1);
t3=C_set_block_item(lf[31] /* ##compiler#simplified-ops */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate2((C_word*)lf[32]+1 /* (set! ##compiler#perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4077,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[119]+1 /* (set! ##compiler#perform-pre-optimization! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6463,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[128]+1 /* (set! register-simplifications ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6783,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list(&a,1,lf[193]);
t9=C_a_i_list(&a,2,lf[3],t8);
t10=C_a_i_cons(&a,2,lf[227],lf[228]);
t11=C_a_i_cons(&a,2,t9,t10);
t12=C_a_i_cons(&a,2,lf[223],t11);
t13=C_a_i_cons(&a,2,lf[12],t12);
t14=C_a_i_list(&a,4,lf[193],lf[227],lf[228],lf[223]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13454,tmp=(C_word)a,a+=2,tmp);
t16=C_a_i_list(&a,3,t13,t14,t15);
/* optimizer.scm:607: register-simplifications */
t17=*((C_word*)lf[128]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t7,lf[12],t16);}

/* k4068 in k4007 in k4004 in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:111: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[18],lf[25],t1);}

/* k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5017,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5960,a[2]=t3,a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:312: test */
t5=((C_word*)((C_word*)t0)[14])[1];
f_4080(t5,t4,((C_word*)t0)[9],lf[79]);}

/* test in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4080(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4080,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm:142: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* g2384 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11046(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11046,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11056,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t9=C_i_cdr(((C_word*)t0)[4]);
t10=C_i_length(t9);
t11=C_eqp(((C_word*)t0)[6],t10);
if(C_truep(t11)){
t12=t8;
f_11056(2,t12,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1501: quit */
t12=*((C_word*)lf[167]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t8,lf[174],((C_word*)t0)[7]);}}

/* constant-node? in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4086,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[34],t3));}

/* g1072 in k13475 in loop in k13460 in a13453 in k4072 in k3687 in k3684 in k3681 */
static C_word C_fcall f_13481(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
t2=C_i_assq(((C_word*)t0)[2],*((C_word*)lf[31]+1));
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=C_a_i_plus(&a,2,t3,C_fix(1));
t5=C_i_set_cdr(t2,t4);
return(t1);}
else{
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],C_fix(1)),*((C_word*)lf[31]+1));
t4=C_mutate2((C_word*)lf[31]+1 /* (set! ##compiler#simplified-ops ...) */,t3);
return(t1);}}

/* a9528 in k9455 in k9452 in k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9529,4,t0,t1,t2,t3);}
t4=C_eqp(*((C_word*)lf[146]+1),lf[147]);
if(C_truep(t4)){
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[14],lf[144],t5,t6));}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t6=C_a_i_list2(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[14],lf[92],t5,t6));}}

/* map-loop1299 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7237(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7237,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7250,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t12=t11;
f_7250(t12,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10));}
else{
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t10);
t13=t11;
f_7250(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9525 in k9455 in k9452 in k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9527,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* k5942 in k5912 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5944,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5027(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_i_car(t3);
/* optimizer.scm:319: test */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4080(t5,t2,t4,lf[70]);}}

/* k7208 in for-each-loop1330 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7200(t4,((C_word*)t0)[5],t2,t3);}

/* k5958 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5960,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5020(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:313: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4080(t3,t2,((C_word*)t0)[4],lf[49]);}}

/* k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10726,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_record4(&a,4,lf[14],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1548: copy-node! */
t6=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t4);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10890,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10890(t6,t2,t1);}

/* k13091 in k13097 in loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13093(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_12966(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[13],t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=C_u_i_car(((C_word*)t0)[4]);
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t8);
t10=((C_word*)t0)[2];
f_12966(t10,C_eqp(t6,t9));}
else{
t5=((C_word*)t0)[2];
f_12966(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_12966(t2,C_SCHEME_FALSE);}}}

/* k5948 in k5958 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5020(2,t3,t2);}
else{
/* optimizer.scm:314: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4080(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[101]);}}

/* k12582 in k12578 in a12545 in k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12584,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12572,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:816: qnode */
t6=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_SCHEME_TRUE);}

/* a11617 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11618,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11624,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11631,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11641,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1643: ##sys#dynamic-wind */
t16=*((C_word*)lf[187]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t1,t13,t14,t15);}

/* k12586 in k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:810: fold-right */
t2=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k12578 in a12545 in k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12580,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12584,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:815: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7288,2,t0,t1);}
t2=C_mutate2((C_word*)lf[140]+1 /* (set! ##compiler#substitution-table ...) */,t1);
t3=C_mutate2((C_word*)lf[141]+1 /* (set! ##compiler#rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7290,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[142]+1 /* (set! ##compiler#simplify-named-call ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7310,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[158]+1 /* (set! ##compiler#transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9902,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[186]+1 /* (set! ##compiler#determine-loop-and-dispatch ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11347,tmp=(C_word)a,a+=2,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* k13097 in loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_13099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13099,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_12966(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[5]);
/* optimizer.scm:722: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[6],t3,lf[78]);}}

/* a10512 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10513(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10513,3,t0,t1,t2);}
/* optimizer.scm:1444: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10143(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10755 in for-each-loop2519 in k10747 in k10744 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in ... */
static void C_ccall f_10757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10757,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_car(t2,t3));}

/* k5063 in k5056 in k5042 in k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:327: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4289(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5993 in k6006 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k12542 in k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12544,2,t0,t1);}
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_a_i_record4(&a,4,lf[14],lf[5],t3,t2);
t5=C_a_i_list2(&a,2,((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[7],t5));}

/* k5056 in k5042 in k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(3));
t4=C_i_car(t3);
/* optimizer.scm:328: inline-lambda-bindings */
t5=*((C_word*)lf[71]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t2,((C_word*)t0)[7],((C_word*)t0)[8],t4,C_SCHEME_FALSE,((C_word*)t0)[9],*((C_word*)lf[72]+1));}

/* a12545 in k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12546,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12580,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:815: varnode */
t5=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* for-each-loop2665 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11662(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11662,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11672,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1651: g2666 */
t5=((C_word*)t0)[3];
f_11650(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12570 in k12582 in k12578 in a12545 in k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12572,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[21],C_SCHEME_END_OF_LIST,t2));}

/* k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10814,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1550: fold-right */
t4=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k10744 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1559: copy-node! */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}

/* g503 in k5042 in k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5048,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
/* optimizer.scm:326: g518 */
t4=*((C_word*)lf[47]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[2],t2,lf[70],C_SCHEME_TRUE);}

/* k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:324: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[73],((C_word*)t0)[11]);}

/* k10747 in k10744 in k10741 in k10724 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_10749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10749,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10791,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10791(t6,((C_word*)t0)[3],t2);}

/* k5042 in k5039 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5044,2,t0,t1);}
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5048,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[4];
t5=C_i_check_list_2(t4,lf[2]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5080(t10,t6,t4);}

/* k11670 in for-each-loop2665 in walk in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11662(t3,((C_word*)t0)[4],t2);}

/* k5220 in k5226 in k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5163(t2,C_i_not(t1));}

/* k5226 in k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5228,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5163(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_u_i_car(((C_word*)t0)[3]);
/* optimizer.scm:343: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4080(t4,t2,t3,lf[77]);}}

/* k8519 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8521(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8521,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=C_i_length(((C_word*)t0)[3]);
t5=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_less_or_equalp(t4,t5))){
t6=C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t9=((C_word*)t0)[5];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_record4(&a,4,lf[14],lf[12],t7,t8));}
else{
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=C_a_i_list2(&a,2,C_SCHEME_TRUE,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8577,a[2]=((C_word*)t0)[5],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8581,a[2]=t11,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_car(t13);
/* optimizer.scm:1103: varnode */
t15=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t12,t14);}}
else{
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5027(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5027,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_caddr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=t4,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:323: check-signature */
t6=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[11],((C_word*)t0)[9],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5112,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[4],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[3],a[16]=((C_word*)t0)[6],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[11],lf[100]);}}

/* k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5020,2,t0,t1);}
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5027,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],tmp=(C_word)a,a+=21,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5914,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:316: test */
t6=((C_word*)((C_word*)t0)[15])[1];
f_4080(t6,t5,((C_word*)t0)[10],lf[58]);}

/* a10569 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10570(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10570,3,t0,t1,t2);}
/* optimizer.scm:1449: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10143(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k12083 in k12075 in k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in ... */
static void C_ccall f_12085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12085,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12093,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1748: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(0));}

/* k12079 in k12075 in k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in ... */
static void C_ccall f_12081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1745: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5199 in k5161 in k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5201,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5118(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:346: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[75],((C_word*)t0)[4]);}}

/* a5202 in k5161 in k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5203,3,t0,t1,t2);}
t3=*((C_word*)lf[76]+1);
/* optimizer.scm:344: g566 */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1656: walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_11410(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10616(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10616,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(2));
t5=t4;
t6=C_i_caddr(t5);
t7=C_i_length(t6);
t8=t7;
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10631,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=t10,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1464: get */
t12=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,((C_word*)t0)[10],((C_word*)t0)[5],lf[126]);}

/* transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10612(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10612,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10616,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,a[5]=t3,a[6]=t6,a[7]=t5,a[8]=t1,a[9]=t4,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11317,a[2]=t8,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11319,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1458: ##sys#make-promise */
t11=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
/* optimizer.scm:1459: debugging */
t9=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,lf[18],lf[184],t3,t7);}}

/* k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11698(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12447,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_12447(t9,t5,t3);}

/* g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_11699(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11699,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11707,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1663: gensym */
t8=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[196]);}

/* k10608 in k10601 in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1454: lset= */
t2=*((C_word*)lf[165]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[27]+1),((C_word*)((C_word*)t0)[3])[1],t1);}

/* k12506 in a12485 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12508(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12508,2,t0,t1);}
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,t3);
t5=t4;
t6=C_a_i_list1(&a,1,t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12544,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12546,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12588,a[2]=t8,a[3]=t9,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:818: qnode */
t11=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_SCHEME_FALSE);}

/* k12075 in k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_12077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12077,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12081,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12085,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12095,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1747: list-tabulate */
t6=*((C_word*)lf[188]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[3],t5);}

/* for-each-loop1330 in k6806 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7200(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7200,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7210,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* optimizer.scm:826: g1331 */
t9=((C_word*)t0)[3];
f_6853(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k12071 in k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in ... */
static void C_ccall f_12073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12073,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[12],lf[189],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[3],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[5],t5);
/* optimizer.scm:1705: copy-node! */
t7=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[6],t6,((C_word*)t0)[7]);}

/* k10601 in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10603,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1454: delete */
t3=*((C_word*)lf[166]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],*((C_word*)lf[27]+1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5260 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5139(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm:338: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4080(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[49]);}}

/* k4186 in k4180 in a4171 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4188(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4188,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=f_4116(((C_word*)((C_word*)t0)[4])[1]);
/* optimizer.scm:163: simplify */
t8=((C_word*)((C_word*)t0)[5])[1];
f_4157(t8,((C_word*)t0)[6],t1);}
else{
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,C_fix(1)),((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=f_4116(((C_word*)((C_word*)t0)[4])[1]);
/* optimizer.scm:163: simplify */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4157(t7,((C_word*)t0)[6],t1);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4180 in a4171 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4182(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4182,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(((C_word*)t0)[7],lf[35]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4241,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4243,a[2]=t10,a[3]=t9,a[4]=t14,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_4243(t16,t12,((C_word*)t0)[7]);}
else{
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5925 in k5942 in k5912 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5027(t2,C_i_not(t1));}

/* k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3847(C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3847,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:75: scan */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3766(t4,t2,t3,((C_word*)t0)[7]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3879,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3894,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:82: butlast */
t5=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=C_eqp(((C_word*)t0)[8],lf[10]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[11]));
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[12]);
if(C_truep(t5)){
/* optimizer.scm:87: touch */
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_3724(((C_word*)((C_word*)t0)[2])[1]));}
else{
t6=C_eqp(((C_word*)t0)[8],lf[13]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[9]);
t8=t7;
t9=C_i_car(((C_word*)t0)[4]);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3927,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[6],a[4]=t8,a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:92: scan */
t11=((C_word*)((C_word*)t0)[5])[1];
f_3766(t11,t10,t9,((C_word*)t0)[7]);}
else{
/* optimizer.scm:106: scan-each */
t7=((C_word*)((C_word*)t0)[10])[1];
f_3729(t7,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}}}}}

/* a4171 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4172,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4182,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t6=t2;
t7=C_u_i_car(t6);
/* optimizer.scm:154: match-node */
t8=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,((C_word*)t0)[6],t7,t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5912 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5914,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:317: test */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4080(t3,t2,((C_word*)t0)[5],lf[57]);}
else{
t2=((C_word*)t0)[2];
f_5027(t2,C_SCHEME_FALSE);}}

/* map-loop2710 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12399(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12399,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12428,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1667: g2716 */
t5=((C_word*)t0)[5];
f_11711(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8579 in k8519 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1103: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3818 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3820,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_3803(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_3803(t2,C_SCHEME_UNDEFINED);}}

/* k10670 in g2456 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10672(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10672,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_record4(&a,4,lf[14],lf[164],t3,t7);
t9=C_a_i_list2(&a,2,t2,t8);
/* optimizer.scm:1536: node-subexpressions-set! */
t10=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,((C_word*)t0)[5],((C_word*)t0)[6],t9);}

/* k3805 in k3801 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a3808 in k3801 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3809(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3809,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(t3,((C_word*)t0)[2]));}

/* k3801 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_fcall f_3803(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3803,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3809,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:72: remove */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k4320 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:170: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4157(t2,((C_word*)t0)[3],t1);}

/* a12341 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12342(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12342,2,t0,t1);}
/* optimizer.scm:1689: gensym */
t2=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,lf[193]);}

/* k7248 in map-loop1299 in reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7250(C_word t0,C_word t1){
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
f_7237(t5,((C_word*)t0)[7],t3,t4);}

/* k4723 in map-loop397 in k4675 in k4658 in k4655 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4696(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4696(t6,((C_word*)t0)[5],t5);}}

/* k4379 in k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4381,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:192: constant-form-eval */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[7],((C_word*)t0)[8],t2,t3);}
else{
/* optimizer.scm:170: simplify */
t2=((C_word*)((C_word*)t0)[9])[1];
f_4157(t2,((C_word*)t0)[10],((C_word*)t0)[4]);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("optimizer_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1849)){
C_save(t1);
C_rereclaim2(1849*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,229);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_h_intern(&lf[1],13,"alist-update!");
lf[2]=C_h_intern(&lf[2],8,"for-each");
lf[3]=C_h_intern(&lf[3],13,"\004corevariable");
lf[4]=C_h_intern(&lf[4],6,"remove");
lf[5]=C_h_intern(&lf[5],2,"if");
lf[6]=C_h_intern(&lf[6],3,"let");
lf[7]=C_h_intern(&lf[7],6,"append");
lf[8]=C_h_intern(&lf[8],4,"last");
lf[9]=C_h_intern(&lf[9],7,"butlast");
lf[10]=C_h_intern(&lf[10],6,"lambda");
lf[11]=C_h_intern(&lf[11],11,"\004corelambda");
lf[12]=C_h_intern(&lf[12],9,"\004corecall");
lf[13]=C_h_intern(&lf[13],4,"set!");
lf[14]=C_h_intern(&lf[14],4,"node");
lf[15]=C_h_intern(&lf[15],14,"\004coreundefined");
lf[16]=C_h_intern(&lf[16],19,"\010compilercopy-node!");
lf[17]=C_h_intern(&lf[17],18,"\010compilerdebugging");
lf[18]=C_h_intern(&lf[18],1,"o");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000&dropping redundant toplevel assignment");
lf[20]=C_h_intern(&lf[20],9,"alist-ref");
lf[21]=C_h_intern(&lf[21],9,"\004corecond");
lf[22]=C_h_intern(&lf[22],11,"\004coreswitch");
lf[23]=C_h_intern(&lf[23],8,"\003sysput!");
lf[24]=C_h_intern(&lf[24],21,"\010compileralways-bound");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\014safe globals");
lf[26]=C_h_intern(&lf[26],17,"delete-duplicates");
lf[27]=C_h_intern(&lf[27],3,"eq\077");
lf[28]=C_h_intern(&lf[28],1,"p");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000 scanning toplevel assignments...");
lf[30]=C_h_intern(&lf[30],24,"\010compilersimplifications");
lf[31]=C_h_intern(&lf[31],23,"\010compilersimplified-ops");
lf[32]=C_h_intern(&lf[32],41,"\010compilerperform-high-level-optimizations");
lf[33]=C_h_intern(&lf[33],12,"\010compilerget");
lf[34]=C_h_intern(&lf[34],5,"quote");
lf[35]=C_h_intern(&lf[35],3,"map");
lf[36]=C_h_intern(&lf[36],19,"\010compilermatch-node");
lf[37]=C_h_intern(&lf[37],3,"any");
lf[38]=C_h_intern(&lf[38],18,"\003syshash-table-ref");
lf[39]=C_h_intern(&lf[39],30,"\010compilerbroken-constant-nodes");
lf[40]=C_h_intern(&lf[40],14,"\010compilerqnode");
lf[41]=C_h_intern(&lf[41],11,"lset-adjoin");
lf[42]=C_h_intern(&lf[42],27,"\010compilerconstant-form-eval");
lf[43]=C_h_intern(&lf[43],5,"every");
lf[44]=C_h_intern(&lf[44],9,"foldable\077");
lf[45]=C_h_intern(&lf[45],7,"\003sysget");
lf[46]=C_h_intern(&lf[46],18,"\010compilerintrinsic");
lf[47]=C_h_intern(&lf[47],13,"\010compilerput!");
lf[48]=C_h_intern(&lf[48],10,"replacable");
lf[49]=C_h_intern(&lf[49],5,"value");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\035substituted constant variable");
lf[51]=C_h_intern(&lf[51],16,"\010compilervarnode");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\032propagated global variable");
lf[53]=C_h_intern(&lf[53],2,"no");
lf[54]=C_h_intern(&lf[54],15,"\010compilerinline");
lf[55]=C_h_intern(&lf[55],11,"collapsable");
lf[56]=C_h_intern(&lf[56],6,"global");
lf[57]=C_h_intern(&lf[57],9,"replacing");
lf[58]=C_h_intern(&lf[58],12,"contractable");
lf[59]=C_h_intern(&lf[59],9,"removable");
lf[60]=C_h_intern(&lf[60],6,"unused");
lf[61]=C_h_intern(&lf[61],9,"partition");
lf[62]=C_h_intern(&lf[62],26,"\010compilerbuild-lambda-list");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[64]=C_h_intern(&lf[64],13,"explicit-rest");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000 removed unused formal parameters");
lf[66]=C_h_intern(&lf[66],30,"\010compilerdecompose-lambda-list");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[68]=C_h_intern(&lf[68],21,"has-unused-parameters");
lf[69]=C_h_intern(&lf[69],18,"\004coredirect_lambda");
lf[70]=C_h_intern(&lf[70],13,"inline-target");
lf[71]=C_h_intern(&lf[71],31,"\010compilerinline-lambda-bindings");
lf[72]=C_h_intern(&lf[72],4,"void");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\024contracted procedure");
lf[74]=C_h_intern(&lf[74],24,"\010compilercheck-signature");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\0001removed call to pure procedure with unused result");
lf[76]=C_h_intern(&lf[76],37,"\010compilerexpression-has-side-effects\077");
lf[77]=C_h_intern(&lf[77],8,"assigned");
lf[78]=C_h_intern(&lf[78],10,"references");
lf[79]=C_h_intern(&lf[79],7,"unknown");
lf[80]=C_h_intern(&lf[80],1,"i");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\0008not inlining procedure because it refers to contractable");
lf[82]=C_h_intern(&lf[82],7,"call/cc");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\022inlining procedure");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\017global inlining");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\010inlining");
lf[86]=C_h_intern(&lf[86],14,"append-reverse");
lf[87]=C_h_intern(&lf[87],6,"gensym");
lf[88]=C_h_intern(&lf[88],1,"t");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000+removed unused parameter to known procedure");
lf[90]=C_h_intern(&lf[90],8,"split-at");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[92]=C_h_intern(&lf[92],20,"\004coreinline_allocate");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\042consed rest parameter at call site");
lf[94]=C_h_intern(&lf[94],21,"\010compilerllist-length");
lf[95]=C_h_intern(&lf[95],23,"\010compilerinline-locally");
lf[96]=C_h_intern(&lf[96],24,"\010compilerinline-max-size");
lf[97]=C_h_intern(&lf[97],9,"inlinable");
lf[98]=C_h_intern(&lf[98],22,"\010compilerinline-global");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000 inlining call to intrinsic alias");
lf[100]=C_h_intern(&lf[100],13,"\010compilerpure");
lf[101]=C_h_intern(&lf[101],11,"local-value");
lf[102]=C_h_intern(&lf[102],18,"\010compilercall-info");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\034removing global contractable");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\0006removed side-effect free assignment to unused variable");
lf[105]=C_h_intern(&lf[105],16,"inline-transient");
lf[106]=C_h_intern(&lf[106],26,"\010compilervariable-visible\077");
lf[107]=C_h_intern(&lf[107],7,"reverse");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\031removed conditional forms");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\025removed binding forms");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\022replaced variables");
lf[111]=C_h_intern(&lf[111],5,"print");
lf[112]=C_h_intern(&lf[112],7,"newline");
lf[113]=C_h_intern(&lf[113],6,"print\052");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\004    ");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\027  call simplifications:");
lf[116]=C_h_intern(&lf[116],30,"\010compilerwith-debugging-output");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\017simplifications");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\022traversal phase...");
lf[119]=C_h_intern(&lf[119],34,"\010compilerperform-pre-optimization!");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\023Removed `not\047 forms");
lf[121]=C_h_intern(&lf[121],24,"node-subexpressions-set!");
lf[122]=C_h_intern(&lf[122],20,"node-parameters-set!");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[124]=C_h_intern(&lf[124],17,"\010compilerget-list");
lf[125]=C_h_intern(&lf[125],3,"not");
lf[126]=C_h_intern(&lf[126],10,"call-sites");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\031pre-optimization phase...");
lf[128]=C_h_intern(&lf[128],24,"register-simplifications");
lf[129]=C_h_intern(&lf[129],19,"\003syshash-table-set!");
lf[130]=C_h_intern(&lf[130],38,"\010compilerreorganize-recursive-bindings");
lf[131]=C_h_intern(&lf[131],28,"\010compilerscan-used-variables");
lf[132]=C_h_intern(&lf[132],6,"filter");
lf[133]=C_h_intern(&lf[133],6,"lset<=");
lf[134]=C_h_intern(&lf[134],10,"filter-map");
lf[135]=C_h_intern(&lf[135],10,"append-map");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000!converted assignments to bindings");
lf[137]=C_h_intern(&lf[137],10,"fold-right");
lf[138]=C_h_intern(&lf[138],4,"fold");
lf[139]=C_h_intern(&lf[139],16,"topological-sort");
lf[140]=C_h_intern(&lf[140],27,"\010compilersubstitution-table");
lf[141]=C_h_intern(&lf[141],16,"\010compilerrewrite");
lf[142]=C_h_intern(&lf[142],28,"\010compilersimplify-named-call");
lf[143]=C_h_intern(&lf[143],37,"\010compilerinline-substitutions-enabled");
lf[144]=C_h_intern(&lf[144],11,"\004coreinline");
lf[145]=C_h_intern(&lf[145],6,"unsafe");
lf[146]=C_h_intern(&lf[146],11,"number-type");
lf[147]=C_h_intern(&lf[147],6,"fixnum");
lf[148]=C_h_intern(&lf[148],21,"\010compilerfold-boolean");
lf[149]=C_h_intern(&lf[149],6,"flonum");
lf[150]=C_h_intern(&lf[150],7,"generic");
lf[151]=C_h_intern(&lf[151],5,"cons\052");
lf[152]=C_h_intern(&lf[152],9,"\004coreproc");
lf[153]=C_h_intern(&lf[153],4,"conc");
lf[154]=C_h_intern(&lf[154],5,"fifth");
lf[155]=C_h_intern(&lf[155],19,"\010compilerfold-inner");
lf[156]=C_h_intern(&lf[156],13,"\010compilerbomb");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\023bad type (optimize)");
lf[158]=C_h_intern(&lf[158],34,"\010compilertransform-direct-lambdas!");
lf[159]=C_h_intern(&lf[159],24,"\010compilercallback-lambda");
lf[160]=C_h_intern(&lf[160],5,"boxed");
lf[161]=C_h_intern(&lf[161],15,"\004coreinline_ref");
lf[162]=C_h_intern(&lf[162],37,"\010compilerestimate-foreign-result-size");
lf[163]=C_h_intern(&lf[163],19,"\004coreinline_loc_ref");
lf[164]=C_h_intern(&lf[164],16,"\004coredirect_call");
lf[165]=C_h_intern(&lf[165],5,"lset=");
lf[166]=C_h_intern(&lf[166],6,"delete");
lf[167]=C_h_intern(&lf[167],13,"\010compilerquit");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000;known procedure called with wrong number of arguments: `~A\047");
lf[169]=C_h_intern(&lf[169],15,"lset-difference");
lf[170]=C_h_intern(&lf[170],15,"node-class-set!");
lf[171]=C_h_intern(&lf[171],12,"\004corerecurse");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[173]=C_h_intern(&lf[173],4,"take");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\014missing kvar");
lf[176]=C_h_intern(&lf[176],11,"\004corereturn");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\017bad call (leaf)");
lf[178]=C_h_intern(&lf[178],6,"cdaddr");
lf[179]=C_h_intern(&lf[179],6,"caaddr");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid parameter list");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\0006direct leaf routine with hoistable closures/allocation");
lf[182]=C_h_intern(&lf[182],6,"unzip1");
lf[183]=C_h_intern(&lf[183],16,"\003sysmake-promise");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\036direct leaf routine/allocation");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000(direct leaf routine optimization pass...");
lf[186]=C_h_intern(&lf[186],36,"\010compilerdetermine-loop-and-dispatch");
lf[187]=C_h_intern(&lf[187],16,"\003sysdynamic-wind");
lf[188]=C_h_intern(&lf[188],13,"list-tabulate");
lf[189]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[190]=C_h_intern(&lf[190],2,"f_");
lf[191]=C_h_intern(&lf[191],1,"x");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\012clustering");
lf[193]=C_h_intern(&lf[193],1,"a");
lf[194]=C_h_intern(&lf[194],3,"max");
lf[195]=C_h_intern(&lf[195],1,"k");
lf[196]=C_h_intern(&lf[196],8,"dispatch");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\027collecting clusters ...");
lf[198]=C_h_intern(&lf[198],11,"make-vector");
lf[199]=C_h_intern(&lf[199],3,"var");
lf[200]=C_h_intern(&lf[200],2,"d2");
lf[201]=C_h_intern(&lf[201],1,"y");
lf[202]=C_h_intern(&lf[202],2,"d3");
lf[203]=C_h_intern(&lf[203],1,"z");
lf[204]=C_h_intern(&lf[204],2,"d1");
lf[205]=C_h_intern(&lf[205],2,"op");
lf[206]=C_h_intern(&lf[206],5,"clist");
lf[207]=C_h_intern(&lf[207],34,"\010compilermembership-test-operators");
lf[208]=C_h_intern(&lf[208],32,"\010compilermembership-unfold-limit");
lf[209]=C_h_intern(&lf[209],4,"var1");
lf[210]=C_h_intern(&lf[210],4,"var0");
lf[211]=C_h_intern(&lf[211],6,"const1");
lf[212]=C_h_intern(&lf[212],4,"var2");
lf[213]=C_h_intern(&lf[213],6,"const2");
lf[214]=C_h_intern(&lf[214],5,"body2");
lf[215]=C_h_intern(&lf[215],4,"rest");
lf[216]=C_h_intern(&lf[216],5,"body1");
lf[217]=C_h_intern(&lf[217],27,"\010compilereq-inline-operator");
lf[218]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016");
lf[219]=C_h_intern(&lf[219],19,"\010compilerimmediate\077");
lf[220]=C_h_intern(&lf[220],5,"const");
lf[221]=C_h_intern(&lf[221],1,"n");
lf[222]=C_h_intern(&lf[222],7,"clauses");
lf[223]=C_h_intern(&lf[223],1,"d");
lf[224]=C_h_intern(&lf[224],4,"body");
lf[225]=C_h_intern(&lf[225],4,"more");
lf[226]=C_h_intern(&lf[226],4,"args");
lf[227]=C_h_intern(&lf[227],1,"b");
lf[228]=C_h_intern(&lf[228],1,"c");
C_register_lf2(lf,229,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k12360 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[194]+1),t1);}

/* map-loop2794 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12364(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12364,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_caddr(t3);
t5=C_i_length(t4);
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

/* k8575 in k8519 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8577,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1));}

/* k12334 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12336,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:1688: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t1,t2);}

/* k4301 in walk in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4303,2,t0,t1);}
t2=t1;
t3=C_slot(t2,C_fix(3));
t4=t3;
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(t5,lf[5]);
if(C_truep(t7)){
t8=C_i_car(t4);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[34],t9);
if(C_truep(t10)){
t11=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t11);
t13=f_4116(((C_word*)((C_word*)t0)[5])[1]);
t14=C_u_i_car(t4);
t15=C_slot(t14,C_fix(2));
t16=C_i_car(t15);
t17=(C_truep(t16)?C_i_cadr(t4):C_i_caddr(t4));
/* optimizer.scm:180: walk */
t18=((C_word*)((C_word*)t0)[6])[1];
f_4289(t18,t6,t17,((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
/* optimizer.scm:170: simplify */
t11=((C_word*)((C_word*)t0)[2])[1];
f_4157(t11,((C_word*)t0)[3],t2);}}
else{
t8=C_eqp(t5,lf[12]);
if(C_truep(t8)){
t9=C_i_car(t4);
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[3],t10);
if(C_truep(t11)){
t12=C_u_i_car(t4);
t13=C_slot(t12,C_fix(2));
t14=C_i_car(t13);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4381,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t6,a[8]=t15,a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4439,a[2]=t4,a[3]=t16,a[4]=((C_word*)t0)[11],a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,t15,lf[46]);}
else{
/* optimizer.scm:170: simplify */
t12=((C_word*)((C_word*)t0)[2])[1];
f_4157(t12,((C_word*)t0)[3],t2);}}
else{
/* optimizer.scm:170: simplify */
t9=((C_word*)((C_word*)t0)[2])[1];
f_4157(t9,((C_word*)t0)[3],t2);}}}

/* k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6790(C_word c,C_word t0,C_word t1){
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
C_word ab[487],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[209]);
t4=C_a_i_list(&a,1,lf[205]);
t5=C_a_i_list(&a,1,lf[210]);
t6=C_a_i_list(&a,2,lf[3],t5);
t7=C_a_i_list(&a,1,lf[211]);
t8=C_a_i_list(&a,2,lf[34],t7);
t9=C_a_i_list(&a,4,lf[144],t4,t6,t8);
t10=C_a_i_list(&a,1,lf[209]);
t11=C_a_i_list(&a,2,lf[3],t10);
t12=C_a_i_list(&a,1,lf[212]);
t13=C_a_i_list(&a,1,lf[205]);
t14=C_a_i_list(&a,1,lf[210]);
t15=C_a_i_list(&a,2,lf[3],t14);
t16=C_a_i_list(&a,1,lf[213]);
t17=C_a_i_list(&a,2,lf[34],t16);
t18=C_a_i_list(&a,4,lf[144],t13,t15,t17);
t19=C_a_i_list(&a,1,lf[212]);
t20=C_a_i_list(&a,2,lf[3],t19);
t21=C_a_i_list(&a,5,lf[5],lf[200],t20,lf[214],lf[215]);
t22=C_a_i_list(&a,4,lf[6],t12,t18,t21);
t23=C_a_i_list(&a,5,lf[5],lf[204],t11,lf[216],t22);
t24=C_a_i_list(&a,4,lf[6],t3,t9,t23);
t25=C_a_i_list(&a,11,lf[210],lf[209],lf[212],lf[205],lf[211],lf[213],lf[216],lf[214],lf[204],lf[200],lf[215]);
t26=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13283,tmp=(C_word)a,a+=2,tmp);
t27=C_a_i_list(&a,3,t24,t25,t26);
t28=C_a_i_list(&a,1,lf[199]);
t29=C_a_i_list(&a,1,lf[205]);
t30=C_a_i_list(&a,1,lf[210]);
t31=C_a_i_list(&a,2,lf[3],t30);
t32=C_a_i_list(&a,1,lf[220]);
t33=C_a_i_list(&a,2,lf[34],t32);
t34=C_a_i_list(&a,4,lf[144],t29,t31,t33);
t35=C_a_i_list(&a,1,lf[199]);
t36=C_a_i_list(&a,2,lf[3],t35);
t37=C_a_i_list(&a,1,lf[221]);
t38=C_a_i_list(&a,1,lf[210]);
t39=C_a_i_list(&a,2,lf[3],t38);
t40=C_a_i_cons(&a,2,t39,lf[222]);
t41=C_a_i_cons(&a,2,t37,t40);
t42=C_a_i_cons(&a,2,lf[22],t41);
t43=C_a_i_list(&a,5,lf[5],lf[223],t36,lf[224],t42);
t44=C_a_i_list(&a,4,lf[6],t28,t34,t43);
t45=C_a_i_list(&a,8,lf[199],lf[205],lf[210],lf[220],lf[223],lf[224],lf[221],lf[222]);
t46=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13153,tmp=(C_word)a,a+=2,tmp);
t47=C_a_i_list(&a,3,t44,t45,t46);
t48=C_a_i_list(&a,1,lf[209]);
t49=C_a_i_list(&a,2,lf[15],C_SCHEME_END_OF_LIST);
t50=C_a_i_list(&a,4,lf[6],t48,t49,lf[225]);
t51=C_a_i_list(&a,2,lf[209],lf[225]);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12794,tmp=(C_word)a,a+=2,tmp);
t53=C_a_i_list(&a,3,t50,t51,t52);
t54=C_a_i_list(&a,1,lf[199]);
t55=C_a_i_list(&a,1,lf[205]);
t56=C_a_i_cons(&a,2,t55,lf[226]);
t57=C_a_i_cons(&a,2,lf[144],t56);
t58=C_a_i_list(&a,1,lf[199]);
t59=C_a_i_list(&a,2,lf[3],t58);
t60=C_a_i_list(&a,5,lf[5],lf[223],t59,lf[191],lf[201]);
t61=C_a_i_list(&a,4,lf[6],t54,t57,t60);
t62=C_a_i_list(&a,6,lf[199],lf[205],lf[226],lf[223],lf[191],lf[201]);
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12705,tmp=(C_word)a,a+=2,tmp);
t64=C_a_i_list(&a,3,t61,t62,t63);
/* optimizer.scm:625: register-simplifications */
t65=*((C_word*)lf[128]+1);
((C_proc7)(void*)(*((C_word*)t65+1)))(7,t65,t2,lf[6],t27,t47,t53,t64);}

/* ##compiler#reorganize-recursive-bindings in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6798(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6798,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=t2;
t12=t3;
t13=C_i_check_list_2(t11,lf[35]);
t14=C_i_check_list_2(t12,lf[35]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6808,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7237,a[2]=t10,a[3]=t17,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_7237(t19,t15,t11,t12);}

/* k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6793(C_word c,C_word t0,C_word t1){
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
C_word ab[176],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[199]);
t4=C_a_i_list(&a,2,lf[3],t3);
t5=C_a_i_list(&a,4,lf[12],lf[200],t4,lf[201]);
t6=C_a_i_list(&a,1,lf[199]);
t7=C_a_i_list(&a,2,lf[3],t6);
t8=C_a_i_list(&a,4,lf[12],lf[202],t7,lf[203]);
t9=C_a_i_list(&a,5,lf[5],lf[204],lf[191],t5,t8);
t10=C_a_i_list(&a,7,lf[204],lf[200],lf[202],lf[191],lf[201],lf[203],lf[199]);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12622,tmp=(C_word)a,a+=2,tmp);
t12=C_a_i_list(&a,3,t9,t10,t11);
t13=C_a_i_list(&a,1,lf[205]);
t14=C_a_i_list(&a,1,lf[206]);
t15=C_a_i_list(&a,2,lf[34],t14);
t16=C_a_i_list(&a,4,lf[144],t13,lf[191],t15);
t17=C_a_i_list(&a,5,lf[5],lf[204],t16,lf[201],lf[203]);
t18=C_a_i_list(&a,6,lf[204],lf[205],lf[191],lf[206],lf[201],lf[203]);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12486,tmp=(C_word)a,a+=2,tmp);
t20=C_a_i_list(&a,3,t17,t18,t19);
/* optimizer.scm:770: register-simplifications */
t21=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t21+1)))(5,t21,t2,lf[5],t12,t20);}

/* k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6796,2,t0,t1);}
t2=C_mutate2((C_word*)lf[130]+1 /* (set! ##compiler#reorganize-recursive-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6798,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:913: make-vector */
t4=*((C_word*)lf[198]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* for-each-loop975 in k6747 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6760(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6760,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6770,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:560: g976 */
t5=((C_word*)t0)[3];
f_6498(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8453 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8455,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8465(t6,t4);}
else{
t6=C_i_length(((C_word*)t0)[5]);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=t5;
f_8465(t9,C_i_nequalp(t6,t8));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6768 in for-each-loop975 in k6747 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6760(t3,((C_word*)t0)[4],t2);}

/* walk-generic in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6278,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6284,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t10,a[9]=((C_word*)t0)[3],a[10]=t6,tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_6284(t12,t1,C_SCHEME_TRUE,t5,C_SCHEME_END_OF_LIST);}

/* a7652 in k7646 in k7637 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7653,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7674,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:974: gensym */
t5=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k8463 in k8453 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8465(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8465,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8481,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8485,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
/* optimizer.scm:1088: varnode */
t10=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t6,t9);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a10322 in k10316 in k10310 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10323(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10323,3,t0,t1,t2);}
/* optimizer.scm:1416: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10143(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k6244 in k6248 in k6217 in k6259 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6246,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6110(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6238,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:486: expression-has-side-effects? */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}}

/* k6217 in k6259 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6219(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6219,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:484: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4080(t3,t2,((C_word*)t0)[6],lf[105]);}
else{
t2=((C_word*)t0)[2];
f_6110(t2,C_SCHEME_FALSE);}}

/* k10351 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10353,2,t0,t1);}
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10359(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(t4)){
t5=t3;
f_10359(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t6=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t5);
t7=t3;
f_10359(t7,C_SCHEME_TRUE);}}}

/* k7637 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7639(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7639,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7648,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7648(t5,t3);}
else{
t5=C_i_length(((C_word*)t0)[5]);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=t4;
f_7648(t9,C_i_nequalp(t5,t8));}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10357 in k10351 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10359(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10359,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1424: every */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5286(C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5286,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_i_caddr(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5302,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[2],a[15]=t5,a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
/* optimizer.scm:359: decompose-lambda-list */
t7=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[20],t5,t6);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5826,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_eqp(lf[3],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_i_car(t5);
/* tweaks.scm:51: ##sys#get */
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,lf[46]);}
else{
t5=t2;
f_5826(2,t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5826(2,t3,C_SCHEME_FALSE);}}}

/* k7646 in k7637 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7648(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7648,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7653,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7695,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)t0)[5];
t7=C_u_i_car(t6);
/* optimizer.scm:975: varnode */
t8=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6731 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6516(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm:565: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6470(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[49]);}}

/* k6236 in k6244 in k6248 in k6217 in k6259 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6110(t2,C_i_not(t1));}

/* k7693 in k7646 in k7637 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7695,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t2);
/* optimizer.scm:972: fold-right */
t4=*((C_word*)lf[137]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k6207 in k6108 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6209,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_record4(&a,4,lf[14],lf[13],((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:493: test */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4080(t6,t5,((C_word*)t0)[3],lf[56]);}

/* k8479 in k8463 in k8453 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8481,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1));}

/* register-simplifications in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6783(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_6783r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6783r(t0,t1,t2,t3);}}

static void C_ccall f_6783r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* optimizer.scm:604: ##sys#hash-table-set! */
t4=*((C_word*)lf[129]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[30]+1),t2,t3);}

/* k4546 in k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:234: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4080(t3,t2,((C_word*)t0)[4],lf[49]);}

/* k11149 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1513: node-parameters-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k11152 in k11149 in rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm:1514: node-subexpressions-set! */
t3=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k4540 in k4534 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4542,2,t0,t1);}
if(C_truep(t1)){
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:233: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[18],lf[50],((C_word*)t0)[5]);}
else{
t2=C_u_i_car(((C_word*)t0)[6]);
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
t4=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4591,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:230: g354 */
t6=t5;
f_4591(t6,((C_word*)t0)[3],t4);}
else{
/* optimizer.scm:247: varnode */
t5=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],((C_word*)t0)[5]);}}
else{
t4=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t6=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t5);
/* optimizer.scm:238: varnode */
t7=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[3],((C_word*)t0)[5]);}}}

/* k12091 in k12083 in k12075 in k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in ... */
static void C_ccall f_12093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12093,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1746: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* a12094 in k12075 in k12139 in k12242 in k12246 in k12000 in descend in k11841 in k11838 in k11835 in k11832 in k11829 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in ... */
static void C_ccall f_12095(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12095,2,t0,t1);}
/* optimizer.scm:1747: qnode */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* a10363 in k10357 in k10351 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10364(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10364,3,t0,t1,t2);}
/* optimizer.scm:1424: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10143(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k8369 in k8360 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8371(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8371,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,C_SCHEME_FALSE,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8391,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* optimizer.scm:1070: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t6,t8);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7672 in a7652 in k7646 in k7637 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7674,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],lf[6],t2,t3));}

/* k8483 in k8463 in k8453 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1088: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5391 in for-each-loop623 in k5321 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5383(t3,((C_word*)t0)[4],t2);}

/* k8397 in k8389 in k8369 in k8360 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8399,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t5))){
t6=C_i_caddr(((C_word*)t0)[8]);
/* optimizer.scm:1075: varnode */
t7=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t3,t6);}
else{
t6=t3;
f_8403(2,t6,C_i_cadr(((C_word*)t0)[7]));}}

/* k8389 in k8369 in k8360 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8391,2,t0,t1);}
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8399,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm:1073: qnode */
t7=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k8360 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8362,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8371,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1068: < */
C_lessp(5,0,t3,C_fix(0),t2,C_fix(3));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5615,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:426: llist-length */
t3=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[15]);}
else{
/* optimizer.scm:449: walk-generic */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6278(t2,((C_word*)t0)[4],((C_word*)t0)[16],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}}

/* k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5618,2,t0,t1);}
t2=t1;
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t3,t2))){
/* optimizer.scm:428: walk-generic */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6278(t4,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}
else{
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:430: debugging */
t5=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[18],lf[93],((C_word*)t0)[14],t2);}}

/* k6523 in k6517 in k6514 in g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6525(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6525,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_caddr(t2);
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6545,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t9,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(t4))){
t11=C_i_cdr(t4);
t12=t10;
f_6545(t12,C_i_nullp(t11));}
else{
t11=t10;
f_6545(t11,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3884 in k3877 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3886,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:83: append */
t4=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9761 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1315: cons* */
t2=*((C_word*)lf[151]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6292 in lp in walk-generic in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6294,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:512: reverse */
t3=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}}

/* k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9759,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9763,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9765,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9771,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1318: ##sys#call-with-values */
C_call_with_values(4,0,t3,t4,t5);}

/* k3877 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:83: last */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k9753 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9755,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1));}

/* k8401 in k8397 in k8389 in k8369 in k8360 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8403,2,t0,t1);}
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=((C_word*)t0)[6];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[7],t2));}

/* a9764 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9765,2,t0,t1);}
/* optimizer.scm:1318: split-at */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6259 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6261,2,t0,t1);}
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_6219(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6257,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:483: variable-visible? */
t5=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}}

/* k6082 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6084,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:477: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[80],lf[103],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}}

/* loop in a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_9785(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9785,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9805,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
t6=t4;
t7=t5;
if(C_truep(C_i_symbolp(t7))){
/* optimizer.scm:930: varnode */
t8=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7373,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t7))){
t9=C_u_i_car(t7);
t10=t8;
f_7373(t10,C_eqp(lf[34],t9));}
else{
t9=t8;
f_7373(t9,C_SCHEME_FALSE);}}}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9832,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_i_cdr(t3);
/* optimizer.scm:1328: loop */
t17=t6;
t18=t8;
t19=t9;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* k3848 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3850,2,t0,t1);}
t2=f_3724(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:77: scan */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3766(t5,t3,t4,((C_word*)t0)[7]);}

/* k3854 in k3848 in k3845 in scan in scan-toplevel-assignments in k3687 in k3684 in k3681 */
static void C_ccall f_3856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t3=C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm:79: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3766(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k9777 in a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1319: append */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5655 in k5667 in k5706 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* g746 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5659,NULL,3,t0,t1,t2);}
/* optimizer.scm:435: g763 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4289(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5116 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5118(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* optimizer.scm:353: walk-generic */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6278(t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}}

/* a12621 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_12622,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
if(C_truep(*((C_word*)lf[143]+1))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12642,a[2]=t6,a[3]=t7,a[4]=t8,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:786: varnode */
t11=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t9);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* rec in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10931(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10931,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=t2;
t6=C_slot(t5,C_fix(3));
t7=t6;
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[12]);
if(C_truep(t10)){
t11=C_i_car(t7);
t12=C_i_cadr(t7);
t13=C_slot(t11,C_fix(2));
t14=C_slot(t12,C_fix(2));
t15=C_slot(t11,C_fix(1));
t16=C_eqp(lf[3],t15);
if(C_truep(t16)){
t17=C_i_car(t13);
t18=C_eqp(((C_word*)t0)[2],t17);
if(C_truep(t18)){
t19=C_a_i_cons(&a,2,C_a_i_cons(&a,2,C_SCHEME_FALSE,t2),((C_word*)((C_word*)t0)[3])[1]);
t20=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t19);
t21=C_i_car(t14);
t22=C_eqp(((C_word*)t0)[4],t21);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11009,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t24=C_u_i_cdr(t7);
t25=C_i_length(t24);
t26=C_eqp(((C_word*)t0)[6],t25);
if(C_truep(t26)){
t27=t23;
f_11009(2,t27,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1490: quit */
t27=*((C_word*)lf[167]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t23,lf[172],((C_word*)t0)[2]);}}
else{
t23=C_u_i_car(t14);
t24=C_i_assq(t23,((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11046,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1488: g2384 */
t26=t25;
f_11046(t26,t1,t24);}
else{
/* optimizer.scm:1510: bomb */
t25=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t25+1)))(4,t25,t1,lf[175],t14);}}}
else{
t19=C_u_i_car(t13);
t20=C_eqp(((C_word*)t0)[4],t19);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11151,a[2]=t7,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1512: node-class-set! */
t22=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,t2,lf[176]);}
else{
/* optimizer.scm:1515: bomb */
t21=*((C_word*)lf[156]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t1,lf[177]);}}}
else{
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}}
else{
t11=C_eqp(t9,lf[6]);
if(C_truep(t11)){
t12=C_i_car(t4);
t13=C_i_car(t7);
if(C_truep(C_i_memq(t12,((C_word*)t0)[9]))){
t14=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t12,t13),((C_word*)((C_word*)t0)[7])[1]);
t15=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t14);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11202,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t17=C_i_cadr(t7);
/* optimizer.scm:1521: copy-node! */
t18=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t16,t17,t2);}
else{
t14=((C_word*)((C_word*)t0)[8])[1];
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11214,a[2]=t16,a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_11214(t18,t1,t7);}}
else{
t12=((C_word*)((C_word*)t0)[8])[1];
t13=C_i_check_list_2(t7,lf[2]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11243,a[2]=t15,a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_11243(t17,t1,t7);}}}

/* k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6093,2,t0,t1);}
if(C_truep(t1)){
t2=f_4116(((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6261,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:482: test */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4080(t4,t3,((C_word*)t0)[4],lf[56]);}}

/* k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5112,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t3)){
t5=C_slot(t3,C_fix(1));
t6=C_eqp(lf[3],t5);
if(C_truep(t6)){
t7=C_slot(t3,C_fix(2));
t8=C_i_car(t7);
t9=t8;
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5139,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5262,a[2]=t10,a[3]=((C_word*)t0)[13],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:337: test */
t12=((C_word*)((C_word*)t0)[13])[1];
f_4080(t12,t11,t9,lf[79]);}
else{
t10=t4;
f_5118(t10,C_SCHEME_FALSE);}}
else{
t7=t4;
f_5118(t7,C_SCHEME_FALSE);}}
else{
t5=t4;
f_5118(t5,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5286,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[13],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[3],tmp=(C_word)a,a+=21,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=C_slot(((C_word*)t0)[14],C_fix(1));
t4=t2;
f_5286(t4,C_eqp(lf[11],t3));}
else{
t3=t2;
f_5286(t3,C_SCHEME_FALSE);}}}

/* lp in walk-generic in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6284(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6284,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6294,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* optimizer.scm:510: invalidate-gae! */
f_4120(t5,((C_word*)t0)[7]);}
else{
t6=t5;
f_6294(2,t6,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6315,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t3);
/* optimizer.scm:514: walk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_4289(t7,t5,t6,((C_word*)t0)[10],((C_word*)t0)[7]);}}

/* k10316 in k10310 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10318,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1416: every */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10310 in rec in scan in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10312,2,t0,t1);}
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10318(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(t4)){
t5=t3;
f_10318(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t6=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t5);
t7=t3;
f_10318(t7,C_SCHEME_TRUE);}}}

/* k8643 in k8639 in k8624 in k8609 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8645,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1));}

/* k10898 in for-each-loop2455 in k10721 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10890(t3,((C_word*)t0)[4],t2);}

/* k8639 in k8624 in k8609 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_8641(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8641,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8645,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],C_SCHEME_TRUE);
t5=C_a_i_record4(&a,4,lf[14],lf[152],t4,C_SCHEME_END_OF_LIST);
/* optimizer.scm:1115: cons* */
t6=*((C_word*)lf[151]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5641,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:431: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[11],t2,t3);}

/* a5634 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5635,2,t0,t1);}
/* optimizer.scm:431: split-at */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6248 in k6217 in k6259 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6250,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6110(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:485: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4080(t3,t2,((C_word*)t0)[6],lf[78]);}}

/* k10055 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10057,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_9945(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9975,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1358: get */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],((C_word*)t0)[6],lf[49]);}
else{
t2=((C_word*)t0)[2];
f_9945(2,t2,C_SCHEME_FALSE);}}}

/* k6255 in k6259 in k6091 in k6065 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6219(t2,C_i_not(t1));}

/* k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5139(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5139,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(t1,C_fix(1));
t3=C_eqp(lf[11],t2);
if(C_truep(t3)){
t4=C_slot(t1,C_fix(2));
t5=C_i_caddr(t4);
t6=t5;
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t6,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_i_car(t6);
/* optimizer.scm:341: test */
t9=((C_word*)((C_word*)t0)[7])[1];
f_4080(t9,t7,t8,lf[60]);}
else{
t7=((C_word*)t0)[2];
f_5118(t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
f_5118(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_5118(t2,C_SCHEME_FALSE);}}

/* k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9730,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_length(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
if(C_truep(C_i_greater_or_equalp(t4,t6))){
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,C_SCHEME_TRUE,t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9755,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9759,a[2]=t10,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_u_i_car(t13);
/* optimizer.scm:1316: varnode */
t15=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t11,t14);}
else{
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a10912 in k10654 in k10651 in k10645 in k10642 in k10638 in k10629 in k10614 in transform in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10913,4,t0,t1,t2,t3);}
t4=C_i_cdr(t2);
t5=C_i_cdr(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t4,t5));}

/* k8692 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8694(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8694,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_eqp(*((C_word*)lf[146]+1),t3);
if(C_truep(t4)){
t5=C_i_cadddr(((C_word*)t0)[2]);
t6=(C_truep(t5)?t5:*((C_word*)lf[145]+1));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8738,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_cdr(t12);
t14=C_u_i_car(t13);
t15=t9;
f_8738(t15,C_a_i_list1(&a,1,t14));}
else{
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=t9;
f_8738(t14,C_a_i_list1(&a,1,t13));}}
else{
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k12640 in a12621 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_12642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12642,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_record4(&a,4,lf[14],lf[21],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list2(&a,2,t1,t3);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[12],t6,t4));}

/* k5667 in k5706 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5669,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5657,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:447: invalidate-gae! */
f_4120(t6,((C_word*)t0)[6]);}

/* k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9442,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1257: fifth */
t5=*((C_word*)lf[154]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10081 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_10083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:1373: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9905(t3,((C_word*)t0)[4],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9448(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9448,2,t0,t1);}
t2=t1;
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9454,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=t5;
f_9454(t9,C_u_i_car(t8));}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=t5;
f_9454(t8,C_u_i_car(t7));}}

/* k5161 in k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5163(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5163,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=C_u_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm:344: any */
t5=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}
else{
t2=((C_word*)t0)[2];
f_5118(t2,C_SCHEME_FALSE);}}

/* k5158 in k5137 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_5163(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5228,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[7]);
/* optimizer.scm:342: test */
t5=((C_word*)((C_word*)t0)[8])[1];
f_4080(t5,t3,t4,lf[78]);}}

/* a11739 in k11733 in g2716 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11740,5,t0,t1,t2,t3,t4);}
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=((C_word*)((C_word*)t0)[3])[1];
t9=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t10=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t9);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11751,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t12=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
/* optimizer.scm:1681: copy-node! */
t13=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,((C_word*)t0)[6]);}

/* k9452 in k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_9454(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9454,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9574,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1261: remove */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[7]);}

/* k9455 in k9452 in k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9457(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9457,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1266: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_u_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[14],lf[12],t3,t5));}
else{
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9529,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1274: fold-inner */
t7=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t1);}}}

/* k11733 in g2716 in k11708 in k11705 in g2692 in k11696 in k11693 in determine-loop-and-dispatch in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_11735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1675: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[7],((C_word*)t0)[5],t2);}

/* map-loop740 in k5706 in a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5671,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5700,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:435: g746 */
t5=((C_word*)t0)[5];
f_5659(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g231 in k4180 in a4171 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static C_word C_fcall f_4227(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;
t2=C_i_assq(t1,((C_word*)t0)[2]);
return(C_i_cdr(t2));}

/* g2196 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_10099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10099,NULL,3,t0,t1,t2);}
/* optimizer.scm:1374: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9905(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k9943 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm:1368: transform */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10612(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],((C_word*)((C_word*)t0)[9])[1]);}
else{
t2=C_i_car(((C_word*)t0)[10]);
/* optimizer.scm:1369: walk */
t3=((C_word*)((C_word*)t0)[11])[1];
f_9905(t3,((C_word*)t0)[3],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* a9770 in k9757 in k9728 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9771,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9779,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cddr(((C_word*)t0)[2]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9785,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_9785(t10,t5,t3,t6);}

/* k9481 in k9455 in k9452 in k9446 in k9440 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9483,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* k9985 in k9979 in k9973 in k10055 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9987,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10040,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(2));
t6=C_i_car(t5);
/* tweaks.scm:57: ##sys#get */
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t6,lf[159]);}
else{
t4=((C_word*)t0)[4];
f_9945(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
f_9945(2,t3,C_SCHEME_FALSE);}}

/* k9979 in k9973 in k10055 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9981,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1360: get-list */
t4=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[10],((C_word*)t0)[7],lf[126]);}
else{
t3=((C_word*)t0)[4];
f_9945(2,t3,C_SCHEME_FALSE);}}

/* k4239 in k4180 in a4171 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k7406 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7408(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7408,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_length(((C_word*)t0)[4]);
t4=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t3,t4))){
t5=C_i_car(((C_word*)t0)[4]);
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_slot(t5,C_fix(1));
t8=C_eqp(lf[3],t7);
if(C_truep(t8)){
t9=C_slot(t6,C_fix(1));
t10=C_eqp(lf[3],t9);
if(C_truep(t10)){
t11=C_slot(t5,C_fix(2));
t12=C_slot(t6,C_fix(2));
if(C_truep(C_i_equalp(t11,t12))){
t13=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7497,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t14,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:946: qnode */
t16=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_SCHEME_TRUE);}
else{
t13=t2;
f_7411(t13,C_SCHEME_FALSE);}}
else{
t11=t2;
f_7411(t11,C_SCHEME_FALSE);}}
else{
t9=t2;
f_7411(t9,C_SCHEME_FALSE);}}
else{
t5=t2;
f_7411(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6037 in map-loop808 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6039,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6010(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6010(t6,((C_word*)t0)[5],t5);}}

/* k8609 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8611,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
/* optimizer.scm:1112: argc-ok? */
t7=((C_word*)((C_word*)t0)[7])[1];
f_7313(t7,t4,t6);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8624 in k8609 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8626,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8641,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t5=((C_word*)t0)[6];
t6=C_u_i_cdr(t5);
t7=t4;
f_8641(t7,C_a_i_cons(&a,2,C_SCHEME_TRUE,t6));}
else{
t5=t4;
f_8641(t5,((C_word*)t0)[6]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* map-loop225 in k4180 in a4171 in k4159 in simplify in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_4243(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4243,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_4227(((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[5])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a5640 in k5628 in k5616 in k5613 in k5416 in k5318 in k5818 in a5301 in k5284 in k5110 in k5025 in k5018 in k5015 in walk1 in perform-high-level-optimizations in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5641,4,t0,t1,t2,t3);}
t4=t2;
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5708,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=t8,a[9]=t6,a[10]=t9,tmp=(C_word)a,a+=11,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5716,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* optimizer.scm:441: qnode */
t12=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,C_SCHEME_END_OF_LIST);}
else{
t12=C_i_length(t3);
t13=C_a_i_times(&a,2,C_fix(3),t12);
t14=C_a_i_list2(&a,2,lf[91],t13);
t15=C_a_i_record4(&a,4,lf[14],lf[92],t14,t3);
t16=C_a_i_list1(&a,1,t15);
/* optimizer.scm:437: append */
t17=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t10,t4,t16);}}

/* ##compiler#perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6463,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6466,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6470,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6477,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t3,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:556: debugging */
t15=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,lf[28],lf[127]);}

/* touch in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static C_word C_fcall f_6466(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* k9973 in k10055 in walk in transform-direct-lambdas! in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9975,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9981,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1359: get-list */
t4=*((C_word*)lf[124]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[9],((C_word*)t0)[6],lf[78]);}
else{
t3=((C_word*)t0)[3];
f_9945(2,t3,C_SCHEME_FALSE);}}

/* loop2 in k12906 in k13121 in k13127 in loop1 in a12793 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_12935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12935,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
t6=C_slot(t5,C_fix(1));
t7=t4;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t4;
t11=C_slot(t10,C_fix(3));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12966,a[2]=t12,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t14=C_eqp(t6,lf[6]);
if(C_truep(t14)){
t15=C_i_cdr(t9);
if(C_truep(C_i_nullp(t15))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13099,a[2]=t13,a[3]=t3,a[4]=t12,a[5]=t9,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t17=C_u_i_car(t9);
/* optimizer.scm:721: get */
t18=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t16,((C_word*)t0)[4],t17,lf[105]);}
else{
t16=t13;
f_12966(t16,C_SCHEME_FALSE);}}
else{
t15=t13;
f_12966(t15,C_SCHEME_FALSE);}}

/* k8045 in k8004 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_8047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8047,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1026: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* test in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6470(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6470,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm:554: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6497,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* tweaks.scm:51: ##sys#get */
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[125],lf[46]);}

/* argc-ok? in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7313(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7313,NULL,3,t0,t1,t2);}
t3=C_i_not(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7323,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t5=C_i_length(((C_word*)t0)[3]);
t6=t4;
f_7323(t6,C_eqp(t2,t5));}
else{
t5=t4;
f_7323(t5,C_SCHEME_FALSE);}}}

/* ##compiler#simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_7310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_7310,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7313,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
switch(t6){
case C_fix(1):
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7408,a[2]=t1,a[3]=t7,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);
case C_fix(2):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_length(t8);
t13=C_i_car(t7);
if(C_truep(C_i_nequalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7567,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t15,lf[46]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(3):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7639,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(4):
if(C_truep(*((C_word*)lf[143]+1))){
if(C_truep(*((C_word*)lf[145]+1))){
t12=C_i_length(t8);
t13=C_eqp(C_fix(2),t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7740,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t15,lf[46]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(5):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7807,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(6):
t12=C_i_caddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
if(C_truep(*((C_word*)lf[143]+1))){
t14=C_i_length(t8);
t15=C_eqp(C_fix(1),t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7914,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t17=t4;
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t16,t17,lf[46]);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}
case C_fix(7):
t12=C_i_cadddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
if(C_truep(*((C_word*)lf[143]+1))){
t14=C_i_length(t8);
t15=t7;
t16=C_u_i_car(t15);
if(C_truep(C_i_nequalp(t14,t16))){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8006,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t18=t4;
/* tweaks.scm:51: ##sys#get */
t19=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t17,t18,lf[46]);}
else{
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_FALSE);}}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}
case C_fix(8):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8081,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t5,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(9):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8107,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(10):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_cadddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8362,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t15,lf[46]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(11):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_caddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8455,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t15,lf[46]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(12):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8521,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(13):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8611,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t3,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(14):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_cadr(t7);
t13=C_i_length(t8);
if(C_truep(C_i_nequalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8694,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t15,lf[46]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(15):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_length(t8);
t13=C_eqp(C_fix(1),t12);
if(C_truep(t13)){
t14=*((C_word*)lf[145]+1);
t15=(C_truep(*((C_word*)lf[145]+1))?*((C_word*)lf[145]+1):C_i_cadddr(t7));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8791,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t17=t4;
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t16,t17,lf[46]);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(16):
t12=C_i_car(t7);
t13=t12;
t14=C_i_length(t8);
t15=t14;
t16=C_i_caddr(t7);
t17=t16;
t18=C_i_cadddr(t7);
t19=t18;
t20=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8884,a[2]=t13,a[3]=t15,a[4]=t17,a[5]=t8,a[6]=t5,a[7]=t1,a[8]=t19,a[9]=t7,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
t21=C_i_cddddr(t7);
if(C_truep(C_i_pairp(t21))){
/* optimizer.scm:1161: fifth */
t22=*((C_word*)lf[154]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t20,t7);}
else{
t22=t20;
f_8884(2,t22,C_SCHEME_FALSE);}
case C_fix(17):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_length(t8);
t13=C_i_car(t7);
if(C_truep(C_i_nequalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9036,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,t15,lf[46]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(18):
if(C_truep(*((C_word*)lf[143]+1))){
if(C_truep(C_i_nullp(t8))){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9119,a[2]=t5,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(19):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9163,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(20):
t12=C_i_length(t8);
t13=t12;
t14=C_i_cadddr(t7);
t15=(C_truep(t14)?t14:*((C_word*)lf[145]+1));
if(C_truep(t15)){
if(C_truep(*((C_word*)lf[143]+1))){
t16=t7;
t17=C_u_i_car(t16);
if(C_truep(C_i_nequalp(t13,t17))){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9355,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t13,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t19=t4;
/* tweaks.scm:51: ##sys#get */
t20=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t18,t19,lf[46]);}
else{
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}
case C_fix(21):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9442,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(22):
t12=C_i_car(t7);
t13=C_i_length(t8);
t14=C_i_cadddr(t7);
t15=t14;
if(C_truep(*((C_word*)lf[143]+1))){
if(C_truep(C_i_nequalp(t13,t12))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9646,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,a[6]=t15,tmp=(C_word)a,a+=7,tmp);
t17=t4;
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t16,t17,lf[46]);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}
case C_fix(23):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9730,a[2]=t7,a[3]=t8,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,lf[46]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
default:
/* optimizer.scm:1330: bomb */
t12=*((C_word*)lf[156]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t1,lf[157]);}}

/* k6478 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[4])[1],C_fix(0)))){
/* optimizer.scm:597: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[120],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}}

/* k6481 in k6478 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* a9399 in k9353 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_9400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9400,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9412,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:1245: qnode */
t8=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k7409 in k7406 in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7411(C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7411,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(*((C_word*)lf[143]+1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
t5=((C_word*)t0)[4];
t6=C_a_i_record4(&a,4,lf[14],lf[144],t4,t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[5],t6);
t8=((C_word*)t0)[2];
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_record4(&a,4,lf[14],lf[12],t2,t7));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k7321 in argc-ok? in simplify-named-call in k7286 in k6794 in k6791 in k6788 in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_7323(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7323,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7338,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* optimizer.scm:926: argc-ok? */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7313(t5,t2,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* g976 in k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_fcall f_6498(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6498,NULL,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=C_i_cadr(t6);
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6516,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6733,a[2]=t11,a[3]=((C_word*)t0)[5],a[4]=t10,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:565: test */
t13=((C_word*)((C_word*)t0)[5])[1];
f_6470(t13,t12,t10,lf[79]);}

/* k6495 in k6475 in perform-pre-optimization! in k4072 in k3687 in k3684 in k3681 */
static void C_ccall f_6497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6497,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6749,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:595: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_6470(t4,t3,lf[125],lf[126]);}
else{
t2=((C_word*)t0)[6];
f_6480(2,t2,C_SCHEME_UNDEFINED);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[590] = {
{"f_9412:optimizer_2escm",(void*)f_9412},
{"f_9905:optimizer_2escm",(void*)f_9905},
{"f_8081:optimizer_2escm",(void*)f_8081},
{"f_7304:optimizer_2escm",(void*)f_7304},
{"f_9902:optimizer_2escm",(void*)f_9902},
{"f_7338:optimizer_2escm",(void*)f_7338},
{"f_12486:optimizer_2escm",(void*)f_12486},
{"f_6067:optimizer_2escm",(void*)f_6067},
{"f_6073:optimizer_2escm",(void*)f_6073},
{"f_5172:optimizer_2escm",(void*)f_5172},
{"f_6001:optimizer_2escm",(void*)f_6001},
{"f_6008:optimizer_2escm",(void*)f_6008},
{"f_6010:optimizer_2escm",(void*)f_6010},
{"f_12457:optimizer_2escm",(void*)f_12457},
{"f_8039:optimizer_2escm",(void*)f_8039},
{"f_12447:optimizer_2escm",(void*)f_12447},
{"f_8006:optimizer_2escm",(void*)f_8006},
{"f_9390:optimizer_2escm",(void*)f_9390},
{"f_9388:optimizer_2escm",(void*)f_9388},
{"f_4818:optimizer_2escm",(void*)f_4818},
{"f_4813:optimizer_2escm",(void*)f_4813},
{"f_4964:optimizer_2escm",(void*)f_4964},
{"f_5334:optimizer_2escm",(void*)f_5334},
{"f_5348:optimizer_2escm",(void*)f_5348},
{"f_4843:optimizer_2escm",(void*)f_4843},
{"f_5337:optimizer_2escm",(void*)f_5337},
{"f_4944:optimizer_2escm",(void*)f_4944},
{"f_4824:optimizer_2escm",(void*)f_4824},
{"f_5302:optimizer_2escm",(void*)f_5302},
{"f_12438:optimizer_2escm",(void*)f_12438},
{"f_10040:optimizer_2escm",(void*)f_10040},
{"f_4883:optimizer_2escm",(void*)f_4883},
{"f_12428:optimizer_2escm",(void*)f_12428},
{"f_5323:optimizer_2escm",(void*)f_5323},
{"f_5324:optimizer_2escm",(void*)f_5324},
{"f_5320:optimizer_2escm",(void*)f_5320},
{"f_6911:optimizer_2escm",(void*)f_6911},
{"f_4863:optimizer_2escm",(void*)f_4863},
{"f_3948:optimizer_2escm",(void*)f_3948},
{"f_11325:optimizer_2escm",(void*)f_11325},
{"f_5345:optimizer_2escm",(void*)f_5345},
{"f_6926:optimizer_2escm",(void*)f_6926},
{"f_6925:optimizer_2escm",(void*)f_6925},
{"f_5340:optimizer_2escm",(void*)f_5340},
{"f_4893:optimizer_2escm",(void*)f_4893},
{"f_3933:optimizer_2escm",(void*)f_3933},
{"f_3936:optimizer_2escm",(void*)f_3936},
{"f_4497:optimizer_2escm",(void*)f_4497},
{"f_3930:optimizer_2escm",(void*)f_3930},
{"f_4890:optimizer_2escm",(void*)f_4890},
{"f_11336:optimizer_2escm",(void*)f_11336},
{"f_4494:optimizer_2escm",(void*)f_4494},
{"f_4490:optimizer_2escm",(void*)f_4490},
{"f_3701:optimizer_2escm",(void*)f_3701},
{"f_12752:optimizer_2escm",(void*)f_12752},
{"f_11342:optimizer_2escm",(void*)f_11342},
{"f_11347:optimizer_2escm",(void*)f_11347},
{"f_11345:optimizer_2escm",(void*)f_11345},
{"f_6349:optimizer_2escm",(void*)f_6349},
{"f_6343:optimizer_2escm",(void*)f_6343},
{"f_8946:optimizer_2escm",(void*)f_8946},
{"f_8942:optimizer_2escm",(void*)f_8942},
{"f_11350:optimizer_2escm",(void*)f_11350},
{"f_13166:optimizer_2escm",(void*)f_13166},
{"f_6315:optimizer_2escm",(void*)f_6315},
{"f_3724:optimizer_2escm",(void*)f_3724},
{"f_4601:optimizer_2escm",(void*)f_4601},
{"f_4604:optimizer_2escm",(void*)f_4604},
{"f_3722:optimizer_2escm",(void*)f_3722},
{"f_3729:optimizer_2escm",(void*)f_3729},
{"f_9355:optimizer_2escm",(void*)f_9355},
{"f_6322:optimizer_2escm",(void*)f_6322},
{"f_7807:optimizer_2escm",(void*)f_7807},
{"f_4924:optimizer_2escm",(void*)f_4924},
{"f_3717:optimizer_2escm",(void*)f_3717},
{"f_13188:optimizer_2escm",(void*)f_13188},
{"f_4917:optimizer_2escm",(void*)f_4917},
{"f_3743:optimizer_2escm",(void*)f_3743},
{"f_7497:optimizer_2escm",(void*)f_7497},
{"f_3927:optimizer_2escm",(void*)f_3927},
{"f_4912:optimizer_2escm",(void*)f_4912},
{"f_13153:optimizer_2escm",(void*)f_13153},
{"f_6309:optimizer_2escm",(void*)f_6309},
{"f_8907:optimizer_2escm",(void*)f_8907},
{"f_3731:optimizer_2escm",(void*)f_3731},
{"f_7373:optimizer_2escm",(void*)f_7373},
{"f_3766:optimizer_2escm",(void*)f_3766},
{"f_3753:optimizer_2escm",(void*)f_3753},
{"f_11711:optimizer_2escm",(void*)f_11711},
{"f_11710:optimizer_2escm",(void*)f_11710},
{"f_6434:optimizer_2escm",(void*)f_6434},
{"f_4626:optimizer_2escm",(void*)f_4626},
{"f_7567:optimizer_2escm",(void*)f_7567},
{"f_6444:optimizer_2escm",(void*)f_6444},
{"f_4694:optimizer_2escm",(void*)f_4694},
{"f_4696:optimizer_2escm",(void*)f_4696},
{"f_4687:optimizer_2escm",(void*)f_4687},
{"f_4660:optimizer_2escm",(void*)f_4660},
{"f_4677:optimizer_2escm",(void*)f_4677},
{"f_11751:optimizer_2escm",(void*)f_11751},
{"f_11707:optimizer_2escm",(void*)f_11707},
{"f_7866:optimizer_2escm",(void*)f_7866},
{"f_6406:optimizer_2escm",(void*)f_6406},
{"f_6401:optimizer_2escm",(void*)f_6401},
{"f_11319:optimizer_2escm",(void*)f_11319},
{"f_11317:optimizer_2escm",(void*)f_11317},
{"f_7740:optimizer_2escm",(void*)f_7740},
{"f_6749:optimizer_2escm",(void*)f_6749},
{"f_5362:optimizer_2escm",(void*)f_5362},
{"f_11243:optimizer_2escm",(void*)f_11243},
{"f_5352:optimizer_2escm",(void*)f_5352},
{"f_11253:optimizer_2escm",(void*)f_11253},
{"f_4836:optimizer_2escm",(void*)f_4836},
{"f_5383:optimizer_2escm",(void*)f_5383},
{"f_5359:optimizer_2escm",(void*)f_5359},
{"f_4830:optimizer_2escm",(void*)f_4830},
{"f_4390:optimizer_2escm",(void*)f_4390},
{"f_9172:optimizer_2escm",(void*)f_9172},
{"f_5418:optimizer_2escm",(void*)f_5418},
{"f_10143:optimizer_2escm",(void*)f_10143},
{"f_11531:optimizer_2escm",(void*)f_11531},
{"f_5498:optimizer_2escm",(void*)f_5498},
{"f_10140:optimizer_2escm",(void*)f_10140},
{"f_11539:optimizer_2escm",(void*)f_11539},
{"f_3691:optimizer_2escm",(void*)f_3691},
{"f_3694:optimizer_2escm",(void*)f_3694},
{"f_9198:optimizer_2escm",(void*)f_9198},
{"f_11774:optimizer_2escm",(void*)f_11774},
{"f_7760:optimizer_2escm",(void*)f_7760},
{"f_11546:optimizer_2escm",(void*)f_11546},
{"f_7768:optimizer_2escm",(void*)f_7768},
{"f_5469:optimizer_2escm",(void*)f_5469},
{"f_5700:optimizer_2escm",(void*)f_5700},
{"f_11093:optimizer_2escm",(void*)f_11093},
{"f_5716:optimizer_2escm",(void*)f_5716},
{"f_12141:optimizer_2escm",(void*)f_12141},
{"f_10296:optimizer_2escm",(void*)f_10296},
{"f_12149:optimizer_2escm",(void*)f_12149},
{"f_5446:optimizer_2escm",(void*)f_5446},
{"f_3951:optimizer_2escm",(void*)f_3951},
{"f_5708:optimizer_2escm",(void*)f_5708},
{"f_9646:optimizer_2escm",(void*)f_9646},
{"f_13467:optimizer_2escm",(void*)f_13467},
{"f_13462:optimizer_2escm",(void*)f_13462},
{"f_5432:optimizer_2escm",(void*)f_5432},
{"f_13454:optimizer_2escm",(void*)f_13454},
{"f_5752:optimizer_2escm",(void*)f_5752},
{"f_13209:optimizer_2escm",(void*)f_13209},
{"f_8738:optimizer_2escm",(void*)f_8738},
{"f_10262:optimizer_2escm",(void*)f_10262},
{"f_13017:optimizer_2escm",(void*)f_13017},
{"f_13019:optimizer_2escm",(void*)f_13019},
{"f_11939:optimizer_2escm",(void*)f_11939},
{"f_9119:optimizer_2escm",(void*)f_9119},
{"f_11969:optimizer_2escm",(void*)f_11969},
{"f_5765:optimizer_2escm",(void*)f_5765},
{"f_9694:optimizer_2escm",(void*)f_9694},
{"f_9163:optimizer_2escm",(void*)f_9163},
{"f_9139:optimizer_2escm",(void*)f_9139},
{"f_9832:optimizer_2escm",(void*)f_9832},
{"f_12966:optimizer_2escm",(void*)f_12966},
{"f_11846:optimizer_2escm",(void*)f_11846},
{"f_11847:optimizer_2escm",(void*)f_11847},
{"f_5456:optimizer_2escm",(void*)f_5456},
{"f_5785:optimizer_2escm",(void*)f_5785},
{"f_5459:optimizer_2escm",(void*)f_5459},
{"f_11840:optimizer_2escm",(void*)f_11840},
{"f_11843:optimizer_2escm",(void*)f_11843},
{"f_13192:optimizer_2escm",(void*)f_13192},
{"f_13196:optimizer_2escm",(void*)f_13196},
{"f_13477:optimizer_2escm",(void*)f_13477},
{"f_7914:optimizer_2escm",(void*)f_7914},
{"f_11837:optimizer_2escm",(void*)f_11837},
{"f_11831:optimizer_2escm",(void*)f_11831},
{"f_11834:optimizer_2escm",(void*)f_11834},
{"f_12908:optimizer_2escm",(void*)f_12908},
{"f_8791:optimizer_2escm",(void*)f_8791},
{"f_4120:optimizer_2escm",(void*)f_4120},
{"f_4116:optimizer_2escm",(void*)f_4116},
{"f_6808:optimizer_2escm",(void*)f_6808},
{"f_13009:optimizer_2escm",(void*)f_13009},
{"f_6816:optimizer_2escm",(void*)f_6816},
{"f_6810:optimizer_2escm",(void*)f_6810},
{"f_11202:optimizer_2escm",(void*)f_11202},
{"f_11214:optimizer_2escm",(void*)f_11214},
{"f_4164:optimizer_2escm",(void*)f_4164},
{"f_4161:optimizer_2escm",(void*)f_4161},
{"f_11224:optimizer_2escm",(void*)f_11224},
{"f_5811:optimizer_2escm",(void*)f_5811},
{"f_4157:optimizer_2escm",(void*)f_4157},
{"f_10111:optimizer_2escm",(void*)f_10111},
{"f_5807:optimizer_2escm",(void*)f_5807},
{"f_10814:optimizer_2escm",(void*)f_10814},
{"f_4134:optimizer_2escm",(void*)f_4134},
{"f_12297:optimizer_2escm",(void*)f_12297},
{"f_12299:optimizer_2escm",(void*)f_12299},
{"f_6862:optimizer_2escm",(void*)f_6862},
{"f_6866:optimizer_2escm",(void*)f_6866},
{"f_6865:optimizer_2escm",(void*)f_6865},
{"f_11518:optimizer_2escm",(void*)f_11518},
{"f_10121:optimizer_2escm",(void*)f_10121},
{"f_6876:optimizer_2escm",(void*)f_6876},
{"f_10801:optimizer_2escm",(void*)f_10801},
{"f_6884:optimizer_2escm",(void*)f_6884},
{"f_9809:optimizer_2escm",(void*)f_9809},
{"f_9805:optimizer_2escm",(void*)f_9805},
{"f_12794:optimizer_2escm",(void*)f_12794},
{"f_6892:optimizer_2escm",(void*)f_6892},
{"f_6898:optimizer_2escm",(void*)f_6898},
{"f_12248:optimizer_2escm",(void*)f_12248},
{"f_10225:optimizer_2escm",(void*)f_10225},
{"f_12244:optimizer_2escm",(void*)f_12244},
{"f_6840:optimizer_2escm",(void*)f_6840},
{"f_6853:optimizer_2escm",(void*)f_6853},
{"f_6141:optimizer_2escm",(void*)f_6141},
{"f_6143:optimizer_2escm",(void*)f_6143},
{"f_10241:optimizer_2escm",(void*)f_10241},
{"f_12176:optimizer_2escm",(void*)f_12176},
{"f_12172:optimizer_2escm",(void*)f_12172},
{"f_12216:optimizer_2escm",(void*)f_12216},
{"f_6110:optimizer_2escm",(void*)f_6110},
{"f_6116:optimizer_2escm",(void*)f_6116},
{"f_12212:optimizer_2escm",(void*)f_12212},
{"f_12164:optimizer_2escm",(void*)f_12164},
{"f_13123:optimizer_2escm",(void*)f_13123},
{"f_13129:optimizer_2escm",(void*)f_13129},
{"f_12236:optimizer_2escm",(void*)f_12236},
{"f_9279:optimizer_2escm",(void*)f_9279},
{"f_12182:optimizer_2escm",(void*)f_12182},
{"f_10207:optimizer_2escm",(void*)f_10207},
{"f_6185:optimizer_2escm",(void*)f_6185},
{"f_4289:optimizer_2escm",(void*)f_4289},
{"f_6153:optimizer_2escm",(void*)f_6153},
{"f_5820:optimizer_2escm",(void*)f_5820},
{"f_5826:optimizer_2escm",(void*)f_5826},
{"f_5829:optimizer_2escm",(void*)f_5829},
{"f_6167:optimizer_2escm",(void*)f_6167},
{"f_6168:optimizer_2escm",(void*)f_6168},
{"f_4445:optimizer_2escm",(void*)f_4445},
{"f_4439:optimizer_2escm",(void*)f_4439},
{"f_12705:optimizer_2escm",(void*)f_12705},
{"f_10406:optimizer_2escm",(void*)f_10406},
{"f_4732:optimizer_2escm",(void*)f_4732},
{"f_4411:optimizer_2escm",(void*)f_4411},
{"f_4797:optimizer_2escm",(void*)f_4797},
{"f_4486:optimizer_2escm",(void*)f_4486},
{"f_4790:optimizer_2escm",(void*)f_4790},
{"f_4482:optimizer_2escm",(void*)f_4482},
{"f_10411:optimizer_2escm",(void*)f_10411},
{"f_11456:optimizer_2escm",(void*)f_11456},
{"f_4502:optimizer_2escm",(void*)f_4502},
{"f_9251:optimizer_2escm",(void*)f_9251},
{"f_9253:optimizer_2escm",(void*)f_9253},
{"f_11470:optimizer_2escm",(void*)f_11470},
{"f_11914:optimizer_2escm",(void*)f_11914},
{"f_11949:optimizer_2escm",(void*)f_11949},
{"f_6933:optimizer_2escm",(void*)f_6933},
{"f_6941:optimizer_2escm",(void*)f_6941},
{"f_6943:optimizer_2escm",(void*)f_6943},
{"f_4404:optimizer_2escm",(void*)f_4404},
{"f_4400:optimizer_2escm",(void*)f_4400},
{"f_7128:optimizer_2escm",(void*)f_7128},
{"f_6991:optimizer_2escm",(void*)f_6991},
{"f_11056:optimizer_2escm",(void*)f_11056},
{"f_11059:optimizer_2escm",(void*)f_11059},
{"f_7021:optimizer_2escm",(void*)f_7021},
{"f_7177:optimizer_2escm",(void*)f_7177},
{"f_11062:optimizer_2escm",(void*)f_11062},
{"f_11065:optimizer_2escm",(void*)f_11065},
{"f_11487:optimizer_2escm",(void*)f_11487},
{"f_11904:optimizer_2escm",(void*)f_11904},
{"f_7187:optimizer_2escm",(void*)f_7187},
{"f_6516:optimizer_2escm",(void*)f_6516},
{"f_6973:optimizer_2escm",(void*)f_6973},
{"f_7000:optimizer_2escm",(void*)f_7000},
{"f_11979:optimizer_2escm",(void*)f_11979},
{"f_6519:optimizer_2escm",(void*)f_6519},
{"f_6985:optimizer_2escm",(void*)f_6985},
{"f_6988:optimizer_2escm",(void*)f_6988},
{"f_4536:optimizer_2escm",(void*)f_4536},
{"f_4568:optimizer_2escm",(void*)f_4568},
{"f_7082:optimizer_2escm",(void*)f_7082},
{"f_7008:optimizer_2escm",(void*)f_7008},
{"f_7080:optimizer_2escm",(void*)f_7080},
{"f_11992:optimizer_2escm",(void*)f_11992},
{"f_4591:optimizer_2escm",(void*)f_4591},
{"f_11851:optimizer_2escm",(void*)f_11851},
{"f_11852:optimizer_2escm",(void*)f_11852},
{"f_6551:optimizer_2escm",(void*)f_6551},
{"f_6557:optimizer_2escm",(void*)f_6557},
{"f_11410:optimizer_2escm",(void*)f_11410},
{"f_11803:optimizer_2escm",(void*)f_11803},
{"f_6566:optimizer_2escm",(void*)f_6566},
{"f_5518:optimizer_2escm",(void*)f_5518},
{"f_7050:optimizer_2escm",(void*)f_7050},
{"f_5512:optimizer_2escm",(void*)f_5512},
{"f_4657:optimizer_2escm",(void*)f_4657},
{"f_6545:optimizer_2escm",(void*)f_6545},
{"f_11892:optimizer_2escm",(void*)f_11892},
{"f_11896:optimizer_2escm",(void*)f_11896},
{"f_6594:optimizer_2escm",(void*)f_6594},
{"f_8884:optimizer_2escm",(void*)f_8884},
{"f_8267:optimizer_2escm",(void*)f_8267},
{"f_3890:optimizer_2escm",(void*)f_3890},
{"f_8261:optimizer_2escm",(void*)f_8261},
{"f_13283:optimizer_2escm",(void*)f_13283},
{"f_6956:optimizer_2escm",(void*)f_6956},
{"f_6579:optimizer_2escm",(void*)f_6579},
{"f_6573:optimizer_2escm",(void*)f_6573},
{"f_6576:optimizer_2escm",(void*)f_6576},
{"f_13296:optimizer_2escm",(void*)f_13296},
{"f_5506:optimizer_2escm",(void*)f_5506},
{"f_3894:optimizer_2escm",(void*)f_3894},
{"f_6967:optimizer_2escm",(void*)f_6967},
{"f_6397:optimizer_2escm",(void*)f_6397},
{"f_8296:optimizer_2escm",(void*)f_8296},
{"f_11888:optimizer_2escm",(void*)f_11888},
{"f_11884:optimizer_2escm",(void*)f_11884},
{"f_13356:optimizer_2escm",(void*)f_13356},
{"f_11624:optimizer_2escm",(void*)f_11624},
{"f_9069:optimizer_2escm",(void*)f_9069},
{"f_5524:optimizer_2escm",(void*)f_5524},
{"f_13347:optimizer_2escm",(void*)f_13347},
{"f_11631:optimizer_2escm",(void*)f_11631},
{"f_5548:optimizer_2escm",(void*)f_5548},
{"f_11641:optimizer_2escm",(void*)f_11641},
{"f_8204:optimizer_2escm",(void*)f_8204},
{"f_5544:optimizer_2escm",(void*)f_5544},
{"f_8202:optimizer_2escm",(void*)f_8202},
{"f_6353:optimizer_2escm",(void*)f_6353},
{"f_6356:optimizer_2escm",(void*)f_6356},
{"f_6359:optimizer_2escm",(void*)f_6359},
{"f_11650:optimizer_2escm",(void*)f_11650},
{"f_6362:optimizer_2escm",(void*)f_6362},
{"f_6365:optimizer_2escm",(void*)f_6365},
{"f_6368:optimizer_2escm",(void*)f_6368},
{"f_8142:optimizer_2escm",(void*)f_8142},
{"f_7154:optimizer_2escm",(void*)f_7154},
{"f_10557:optimizer_2escm",(void*)f_10557},
{"f_5562:optimizer_2escm",(void*)f_5562},
{"f_9036:optimizer_2escm",(void*)f_9036},
{"f_13302:optimizer_2escm",(void*)f_13302},
{"f_8156:optimizer_2escm",(void*)f_8156},
{"f_8150:optimizer_2escm",(void*)f_8150},
{"f_12002:optimizer_2escm",(void*)f_12002},
{"f_7164:optimizer_2escm",(void*)f_7164},
{"f_10546:optimizer_2escm",(void*)f_10546},
{"f_8817:optimizer_2escm",(void*)f_8817},
{"f_8813:optimizer_2escm",(void*)f_8813},
{"f_3683:optimizer_2escm",(void*)f_3683},
{"f_8232:optimizer_2escm",(void*)f_8232},
{"f_3686:optimizer_2escm",(void*)f_3686},
{"f_3689:optimizer_2escm",(void*)f_3689},
{"f_13334:optimizer_2escm",(void*)f_13334},
{"f_13338:optimizer_2escm",(void*)f_13338},
{"f_13330:optimizer_2escm",(void*)f_13330},
{"f_8161:optimizer_2escm",(void*)f_8161},
{"f_5080:optimizer_2escm",(void*)f_5080},
{"f_5090:optimizer_2escm",(void*)f_5090},
{"f_8107:optimizer_2escm",(void*)f_8107},
{"f_7294:optimizer_2escm",(void*)f_7294},
{"f_7290:optimizer_2escm",(void*)f_7290},
{"f_9574:optimizer_2escm",(void*)f_9574},
{"f_4006:optimizer_2escm",(void*)f_4006},
{"f_4009:optimizer_2escm",(void*)f_4009},
{"f_10631:optimizer_2escm",(void*)f_10631},
{"f_10786:optimizer_2escm",(void*)f_10786},
{"f_12804:optimizer_2escm",(void*)f_12804},
{"f_4039:optimizer_2escm",(void*)f_4039},
{"f_10657:optimizer_2escm",(void*)f_10657},
{"f_10656:optimizer_2escm",(void*)f_10656},
{"f_8139:optimizer_2escm",(void*)f_8139},
{"f_8133:optimizer_2escm",(void*)f_8133},
{"f_10653:optimizer_2escm",(void*)f_10653},
{"f_10644:optimizer_2escm",(void*)f_10644},
{"f_10647:optimizer_2escm",(void*)f_10647},
{"f_4012:optimizer_2escm",(void*)f_4012},
{"f_10640:optimizer_2escm",(void*)f_10640},
{"f_10791:optimizer_2escm",(void*)f_10791},
{"f_11009:optimizer_2escm",(void*)f_11009},
{"f_4049:optimizer_2escm",(void*)f_4049},
{"f_11015:optimizer_2escm",(void*)f_11015},
{"f_10890:optimizer_2escm",(void*)f_10890},
{"f_11012:optimizer_2escm",(void*)f_11012},
{"f_4077:optimizer_2escm",(void*)f_4077},
{"f_4074:optimizer_2escm",(void*)f_4074},
{"f_4070:optimizer_2escm",(void*)f_4070},
{"f_5017:optimizer_2escm",(void*)f_5017},
{"f_4080:optimizer_2escm",(void*)f_4080},
{"f_11046:optimizer_2escm",(void*)f_11046},
{"f_4086:optimizer_2escm",(void*)f_4086},
{"f_13481:optimizer_2escm",(void*)f_13481},
{"f_9529:optimizer_2escm",(void*)f_9529},
{"f_7237:optimizer_2escm",(void*)f_7237},
{"f_9527:optimizer_2escm",(void*)f_9527},
{"f_5944:optimizer_2escm",(void*)f_5944},
{"f_7210:optimizer_2escm",(void*)f_7210},
{"f_5960:optimizer_2escm",(void*)f_5960},
{"f_10726:optimizer_2escm",(void*)f_10726},
{"f_10723:optimizer_2escm",(void*)f_10723},
{"f_13093:optimizer_2escm",(void*)f_13093},
{"f_5950:optimizer_2escm",(void*)f_5950},
{"f_12584:optimizer_2escm",(void*)f_12584},
{"f_11618:optimizer_2escm",(void*)f_11618},
{"f_12588:optimizer_2escm",(void*)f_12588},
{"f_12580:optimizer_2escm",(void*)f_12580},
{"f_7288:optimizer_2escm",(void*)f_7288},
{"f_13099:optimizer_2escm",(void*)f_13099},
{"f_10513:optimizer_2escm",(void*)f_10513},
{"f_10757:optimizer_2escm",(void*)f_10757},
{"f_5065:optimizer_2escm",(void*)f_5065},
{"f_5995:optimizer_2escm",(void*)f_5995},
{"f_12544:optimizer_2escm",(void*)f_12544},
{"f_5058:optimizer_2escm",(void*)f_5058},
{"f_12546:optimizer_2escm",(void*)f_12546},
{"f_11662:optimizer_2escm",(void*)f_11662},
{"f_12572:optimizer_2escm",(void*)f_12572},
{"f_10743:optimizer_2escm",(void*)f_10743},
{"f_10746:optimizer_2escm",(void*)f_10746},
{"f_5048:optimizer_2escm",(void*)f_5048},
{"f_5041:optimizer_2escm",(void*)f_5041},
{"f_10749:optimizer_2escm",(void*)f_10749},
{"f_5044:optimizer_2escm",(void*)f_5044},
{"f_11672:optimizer_2escm",(void*)f_11672},
{"f_5222:optimizer_2escm",(void*)f_5222},
{"f_5228:optimizer_2escm",(void*)f_5228},
{"f_8521:optimizer_2escm",(void*)f_8521},
{"f_5027:optimizer_2escm",(void*)f_5027},
{"f_5020:optimizer_2escm",(void*)f_5020},
{"f_10570:optimizer_2escm",(void*)f_10570},
{"f_12085:optimizer_2escm",(void*)f_12085},
{"f_12081:optimizer_2escm",(void*)f_12081},
{"f_5201:optimizer_2escm",(void*)f_5201},
{"f_5203:optimizer_2escm",(void*)f_5203},
{"f_11695:optimizer_2escm",(void*)f_11695},
{"f_10616:optimizer_2escm",(void*)f_10616},
{"f_10612:optimizer_2escm",(void*)f_10612},
{"f_11698:optimizer_2escm",(void*)f_11698},
{"f_11699:optimizer_2escm",(void*)f_11699},
{"f_10610:optimizer_2escm",(void*)f_10610},
{"f_12508:optimizer_2escm",(void*)f_12508},
{"f_12077:optimizer_2escm",(void*)f_12077},
{"f_7200:optimizer_2escm",(void*)f_7200},
{"f_12073:optimizer_2escm",(void*)f_12073},
{"f_10603:optimizer_2escm",(void*)f_10603},
{"f_5262:optimizer_2escm",(void*)f_5262},
{"f_4188:optimizer_2escm",(void*)f_4188},
{"f_4182:optimizer_2escm",(void*)f_4182},
{"f_5927:optimizer_2escm",(void*)f_5927},
{"f_3847:optimizer_2escm",(void*)f_3847},
{"f_4172:optimizer_2escm",(void*)f_4172},
{"f_5914:optimizer_2escm",(void*)f_5914},
{"f_12399:optimizer_2escm",(void*)f_12399},
{"f_8581:optimizer_2escm",(void*)f_8581},
{"f_3820:optimizer_2escm",(void*)f_3820},
{"f_10672:optimizer_2escm",(void*)f_10672},
{"f_3807:optimizer_2escm",(void*)f_3807},
{"f_3809:optimizer_2escm",(void*)f_3809},
{"f_3803:optimizer_2escm",(void*)f_3803},
{"f_4322:optimizer_2escm",(void*)f_4322},
{"f_12342:optimizer_2escm",(void*)f_12342},
{"f_7250:optimizer_2escm",(void*)f_7250},
{"f_4725:optimizer_2escm",(void*)f_4725},
{"f_4381:optimizer_2escm",(void*)f_4381},
{"toplevel:optimizer_2escm",(void*)C_optimizer_toplevel},
{"f_12362:optimizer_2escm",(void*)f_12362},
{"f_12364:optimizer_2escm",(void*)f_12364},
{"f_8577:optimizer_2escm",(void*)f_8577},
{"f_12336:optimizer_2escm",(void*)f_12336},
{"f_4303:optimizer_2escm",(void*)f_4303},
{"f_6790:optimizer_2escm",(void*)f_6790},
{"f_6798:optimizer_2escm",(void*)f_6798},
{"f_6793:optimizer_2escm",(void*)f_6793},
{"f_6796:optimizer_2escm",(void*)f_6796},
{"f_6760:optimizer_2escm",(void*)f_6760},
{"f_8455:optimizer_2escm",(void*)f_8455},
{"f_6770:optimizer_2escm",(void*)f_6770},
{"f_6278:optimizer_2escm",(void*)f_6278},
{"f_7653:optimizer_2escm",(void*)f_7653},
{"f_8465:optimizer_2escm",(void*)f_8465},
{"f_10323:optimizer_2escm",(void*)f_10323},
{"f_6246:optimizer_2escm",(void*)f_6246},
{"f_6219:optimizer_2escm",(void*)f_6219},
{"f_10353:optimizer_2escm",(void*)f_10353},
{"f_7639:optimizer_2escm",(void*)f_7639},
{"f_10359:optimizer_2escm",(void*)f_10359},
{"f_5286:optimizer_2escm",(void*)f_5286},
{"f_7648:optimizer_2escm",(void*)f_7648},
{"f_6733:optimizer_2escm",(void*)f_6733},
{"f_6238:optimizer_2escm",(void*)f_6238},
{"f_7695:optimizer_2escm",(void*)f_7695},
{"f_6209:optimizer_2escm",(void*)f_6209},
{"f_8481:optimizer_2escm",(void*)f_8481},
{"f_6783:optimizer_2escm",(void*)f_6783},
{"f_4548:optimizer_2escm",(void*)f_4548},
{"f_11151:optimizer_2escm",(void*)f_11151},
{"f_11154:optimizer_2escm",(void*)f_11154},
{"f_4542:optimizer_2escm",(void*)f_4542},
{"f_12093:optimizer_2escm",(void*)f_12093},
{"f_12095:optimizer_2escm",(void*)f_12095},
{"f_10364:optimizer_2escm",(void*)f_10364},
{"f_8371:optimizer_2escm",(void*)f_8371},
{"f_7674:optimizer_2escm",(void*)f_7674},
{"f_8485:optimizer_2escm",(void*)f_8485},
{"f_5393:optimizer_2escm",(void*)f_5393},
{"f_8399:optimizer_2escm",(void*)f_8399},
{"f_8391:optimizer_2escm",(void*)f_8391},
{"f_8362:optimizer_2escm",(void*)f_8362},
{"f_5615:optimizer_2escm",(void*)f_5615},
{"f_5618:optimizer_2escm",(void*)f_5618},
{"f_6525:optimizer_2escm",(void*)f_6525},
{"f_3886:optimizer_2escm",(void*)f_3886},
{"f_9763:optimizer_2escm",(void*)f_9763},
{"f_6294:optimizer_2escm",(void*)f_6294},
{"f_9759:optimizer_2escm",(void*)f_9759},
{"f_3879:optimizer_2escm",(void*)f_3879},
{"f_9755:optimizer_2escm",(void*)f_9755},
{"f_8403:optimizer_2escm",(void*)f_8403},
{"f_9765:optimizer_2escm",(void*)f_9765},
{"f_6261:optimizer_2escm",(void*)f_6261},
{"f_6084:optimizer_2escm",(void*)f_6084},
{"f_9785:optimizer_2escm",(void*)f_9785},
{"f_3850:optimizer_2escm",(void*)f_3850},
{"f_3856:optimizer_2escm",(void*)f_3856},
{"f_9779:optimizer_2escm",(void*)f_9779},
{"f_5657:optimizer_2escm",(void*)f_5657},
{"f_5659:optimizer_2escm",(void*)f_5659},
{"f_5118:optimizer_2escm",(void*)f_5118},
{"f_12622:optimizer_2escm",(void*)f_12622},
{"f_10931:optimizer_2escm",(void*)f_10931},
{"f_6093:optimizer_2escm",(void*)f_6093},
{"f_5112:optimizer_2escm",(void*)f_5112},
{"f_6284:optimizer_2escm",(void*)f_6284},
{"f_10318:optimizer_2escm",(void*)f_10318},
{"f_10312:optimizer_2escm",(void*)f_10312},
{"f_8645:optimizer_2escm",(void*)f_8645},
{"f_10900:optimizer_2escm",(void*)f_10900},
{"f_8641:optimizer_2escm",(void*)f_8641},
{"f_5630:optimizer_2escm",(void*)f_5630},
{"f_5635:optimizer_2escm",(void*)f_5635},
{"f_6250:optimizer_2escm",(void*)f_6250},
{"f_10057:optimizer_2escm",(void*)f_10057},
{"f_6257:optimizer_2escm",(void*)f_6257},
{"f_5139:optimizer_2escm",(void*)f_5139},
{"f_9730:optimizer_2escm",(void*)f_9730},
{"f_10913:optimizer_2escm",(void*)f_10913},
{"f_8694:optimizer_2escm",(void*)f_8694},
{"f_12642:optimizer_2escm",(void*)f_12642},
{"f_5669:optimizer_2escm",(void*)f_5669},
{"f_9442:optimizer_2escm",(void*)f_9442},
{"f_10083:optimizer_2escm",(void*)f_10083},
{"f_9448:optimizer_2escm",(void*)f_9448},
{"f_5163:optimizer_2escm",(void*)f_5163},
{"f_5160:optimizer_2escm",(void*)f_5160},
{"f_11740:optimizer_2escm",(void*)f_11740},
{"f_9454:optimizer_2escm",(void*)f_9454},
{"f_9457:optimizer_2escm",(void*)f_9457},
{"f_11735:optimizer_2escm",(void*)f_11735},
{"f_5671:optimizer_2escm",(void*)f_5671},
{"f_4227:optimizer_2escm",(void*)f_4227},
{"f_10099:optimizer_2escm",(void*)f_10099},
{"f_9945:optimizer_2escm",(void*)f_9945},
{"f_9771:optimizer_2escm",(void*)f_9771},
{"f_9483:optimizer_2escm",(void*)f_9483},
{"f_9987:optimizer_2escm",(void*)f_9987},
{"f_9981:optimizer_2escm",(void*)f_9981},
{"f_4241:optimizer_2escm",(void*)f_4241},
{"f_7408:optimizer_2escm",(void*)f_7408},
{"f_6039:optimizer_2escm",(void*)f_6039},
{"f_8611:optimizer_2escm",(void*)f_8611},
{"f_8626:optimizer_2escm",(void*)f_8626},
{"f_4243:optimizer_2escm",(void*)f_4243},
{"f_5641:optimizer_2escm",(void*)f_5641},
{"f_6463:optimizer_2escm",(void*)f_6463},
{"f_6466:optimizer_2escm",(void*)f_6466},
{"f_9975:optimizer_2escm",(void*)f_9975},
{"f_12935:optimizer_2escm",(void*)f_12935},
{"f_8047:optimizer_2escm",(void*)f_8047},
{"f_6470:optimizer_2escm",(void*)f_6470},
{"f_6477:optimizer_2escm",(void*)f_6477},
{"f_7313:optimizer_2escm",(void*)f_7313},
{"f_7310:optimizer_2escm",(void*)f_7310},
{"f_6480:optimizer_2escm",(void*)f_6480},
{"f_6483:optimizer_2escm",(void*)f_6483},
{"f_9400:optimizer_2escm",(void*)f_9400},
{"f_7411:optimizer_2escm",(void*)f_7411},
{"f_7323:optimizer_2escm",(void*)f_7323},
{"f_6498:optimizer_2escm",(void*)f_6498},
{"f_6497:optimizer_2escm",(void*)f_6497},
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
S|  o		1
S|  map		12
S|  for-each		20
o|eliminated procedure checks: 282 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (set-car! pair *)
o|  2 (cddr (pair * pair))
o|  1 (length list)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (<= fixnum fixnum)
o|  1 (positive? fixnum)
o|  3 (third (pair * (pair * pair)))
o|  1 (fourth (pair * (pair * (pair * pair))))
o|  1 (eqv? (not float) *)
o|  1 (< fixnum fixnum)
o|  7 (second (pair * pair))
o|  1 (cdar (pair pair *))
o|  17 (= fixnum fixnum)
o|  2 (set-cdr! pair *)
o|  30 (cdr pair)
o|  13 (##sys#check-list (or pair list) *)
o|  15 (car pair)
o|  32 (first pair)
o|  63 (eqv? * (not float))
o|safe globals: (##compiler#scan-toplevel-assignments) 
o|Removed `not' forms: 31 
o|inlining procedure: k3696 
o|inlining procedure: k3696 
o|contracted procedure: k3706 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|inlining procedure: k3792 
o|contracted procedure: k3825 
o|inlining procedure: k3792 
o|inlining procedure: k3871 
o|inlining procedure: k3871 
o|inlining procedure: k3904 
o|inlining procedure: k3904 
o|inlining procedure: k3934 
o|inlining procedure: k3934 
o|contracted procedure: "(optimizer.scm:101) g99100" 
o|substituted constant variable: a3975 
o|substituted constant variable: a3977 
o|substituted constant variable: a3982 
o|substituted constant variable: a3984 
o|substituted constant variable: a3986 
o|inlining procedure: k3990 
o|inlining procedure: k3990 
o|substituted constant variable: a3997 
o|substituted constant variable: a3999 
o|substituted constant variable: a4001 
o|substituted constant variable: a4003 
o|contracted procedure: "(optimizer.scm:65) g7475" 
o|contracted procedure: "(optimizer.scm:64) g6566" 
o|contracted procedure: "(optimizer.scm:63) g6263" 
o|inlining procedure: k4041 
o|contracted procedure: "(optimizer.scm:112) g111118" 
o|contracted procedure: "(optimizer.scm:112) g126127" 
o|inlining procedure: k4041 
o|contracted procedure: "(optimizer.scm:143) g178179" 
o|inlining procedure: k4136 
o|contracted procedure: "(optimizer.scm:134) g189196" 
o|inlining procedure: k4136 
o|inlining procedure: k4165 
o|inlining procedure: k4165 
o|inlining procedure: k4177 
o|inlining procedure: k4189 
o|inlining procedure: k4189 
o|inlining procedure: k4245 
o|inlining procedure: k4245 
o|inlining procedure: k4177 
o|contracted procedure: "(optimizer.scm:151) g216217" 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|inlining procedure: k4320 
o|inlining procedure: k4343 
o|inlining procedure: k4343 
o|contracted procedure: "(optimizer.scm:180) node-value167" 
o|contracted procedure: "(optimizer.scm:144) g182183" 
o|inlining procedure: k4320 
o|inlining procedure: k4367 
o|contracted procedure: k4395 
o|inlining procedure: k4392 
o|contracted procedure: "(optimizer.scm:205) g301302" 
o|inlining procedure: k4392 
o|inlining procedure: k4440 
o|inlining procedure: k4440 
o|contracted procedure: "(optimizer.scm:189) g286287" 
o|contracted procedure: "(optimizer.scm:188) g282283" 
o|inlining procedure: k4367 
o|contracted procedure: "(optimizer.scm:187) g278279" 
o|substituted constant variable: a4478 
o|substituted constant variable: a4480 
o|contracted procedure: "(optimizer.scm:174) g269270" 
o|contracted procedure: "(optimizer.scm:173) g260261" 
o|inlining procedure: k4487 
o|inlining procedure: k4487 
o|inlining procedure: k4528 
o|contracted procedure: "(optimizer.scm:234) g346347" 
o|contracted procedure: k4572 
o|inlining procedure: k4569 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|contracted procedure: "(optimizer.scm:243) g363364" 
o|inlining procedure: k4569 
o|inlining procedure: k4528 
o|inlining procedure: k4652 
o|inlining procedure: k4652 
o|contracted procedure: "(optimizer.scm:264) g390391" 
o|inlining procedure: k4698 
o|inlining procedure: k4698 
o|contracted procedure: "(optimizer.scm:261) g387388" 
o|contracted procedure: "(optimizer.scm:259) g384385" 
o|contracted procedure: "(optimizer.scm:258) g381382" 
o|inlining procedure: k4785 
o|inlining procedure: k4785 
o|inlining procedure: k4798 
o|contracted procedure: "(optimizer.scm:276) g441442" 
o|inlining procedure: k4907 
o|contracted procedure: "(optimizer.scm:292) g457458" 
o|inlining procedure: k4907 
o|inlining procedure: k4798 
o|inlining procedure: k4989 
o|propagated global variable: g518519 ##compiler#put! 
o|inlining procedure: k5022 
o|contracted procedure: "(optimizer.scm:329) g525526" 
o|inlining procedure: k5082 
o|inlining procedure: k5082 
o|contracted procedure: "(optimizer.scm:321) g496497" 
o|inlining procedure: k5022 
o|inlining procedure: k5119 
o|inlining procedure: k5119 
o|inlining procedure: k5125 
o|inlining procedure: k5140 
o|inlining procedure: k5152 
o|contracted procedure: k5167 
o|inlining procedure: k5164 
o|inlining procedure: k5164 
o|contracted procedure: "(optimizer.scm:350) g568569" 
o|contracted procedure: "(optimizer.scm:352) g573574" 
o|propagated global variable: g566567 ##compiler#expression-has-side-effects? 
o|contracted procedure: k5213 
o|inlining procedure: k5210 
o|inlining procedure: k5210 
o|inlining procedure: k5152 
o|contracted procedure: "(optimizer.scm:340) g553554" 
o|contracted procedure: "(optimizer.scm:339) g549550" 
o|inlining procedure: k5140 
o|contracted procedure: k5253 
o|contracted procedure: "(optimizer.scm:336) g544545" 
o|inlining procedure: k5125 
o|contracted procedure: "(optimizer.scm:335) g540541" 
o|inlining procedure: k5281 
o|propagated global variable: g639640 ##compiler#put! 
o|inlining procedure: k5315 
o|contracted procedure: "(optimizer.scm:391) g651652" 
o|inlining procedure: k5385 
o|inlining procedure: k5385 
o|inlining procedure: k5315 
o|inlining procedure: k5419 
o|inlining procedure: k5419 
o|inlining procedure: k5434 
o|contracted procedure: "(optimizer.scm:407) g707708" 
o|inlining procedure: k5471 
o|inlining procedure: k5471 
o|inlining procedure: k5434 
o|inlining procedure: k5519 
o|contracted procedure: "(optimizer.scm:414) g714715" 
o|inlining procedure: k5519 
o|inlining procedure: k5610 
o|contracted procedure: "(optimizer.scm:432) g733734" 
o|inlining procedure: k5673 
o|inlining procedure: k5673 
o|inlining procedure: k5714 
o|inlining procedure: k5714 
o|contracted procedure: "(optimizer.scm:442) g765766" 
o|inlining procedure: k5610 
o|inlining procedure: k5760 
o|contracted procedure: k5769 
o|contracted procedure: k5775 
o|inlining procedure: k5772 
o|inlining procedure: k5772 
o|inlining procedure: k5792 
o|inlining procedure: k5792 
o|substituted constant variable: a5803 
o|contracted procedure: "(optimizer.scm:368) g614615" 
o|inlining procedure: k5760 
o|contracted procedure: "(optimizer.scm:363) g593594" 
o|contracted procedure: "(optimizer.scm:363) g596597" 
o|contracted procedure: "(optimizer.scm:357) g584585" 
o|inlining procedure: k5281 
o|contracted procedure: "(optimizer.scm:457) g794795" 
o|contracted procedure: "(optimizer.scm:455) g791792" 
o|inlining procedure: k5864 
o|contracted procedure: "(optimizer.scm:452) g785786" 
o|contracted procedure: "(optimizer.scm:452) g788789" 
o|inlining procedure: k5864 
o|contracted procedure: "(optimizer.scm:451) g782783" 
o|contracted procedure: "(optimizer.scm:355) g580581" 
o|contracted procedure: "(optimizer.scm:332) g532533" 
o|contracted procedure: k5918 
o|inlining procedure: k5915 
o|inlining procedure: k5915 
o|contracted procedure: "(optimizer.scm:319) g492493" 
o|contracted procedure: k5945 
o|inlining procedure: k5951 
o|inlining procedure: k5951 
o|contracted procedure: "(optimizer.scm:310) g476477" 
o|inlining procedure: k5970 
o|contracted procedure: "(optimizer.scm:466) g801802" 
o|inlining procedure: k6012 
o|inlining procedure: k6012 
o|inlining procedure: k5970 
o|substituted constant variable: a6050 
o|substituted constant variable: a6052 
o|contracted procedure: "(optimizer.scm:306) g466467" 
o|inlining procedure: k4989 
o|inlining procedure: k6062 
o|contracted procedure: "(optimizer.scm:478) g846847" 
o|inlining procedure: k6062 
o|contracted procedure: "(optimizer.scm:481) g853854" 
o|inlining procedure: k6105 
o|contracted procedure: "(optimizer.scm:489) g865866" 
o|inlining procedure: k6105 
o|inlining procedure: k6145 
o|inlining procedure: k6145 
o|inlining procedure: k6170 
o|substituted constant variable: a6180 
o|inlining procedure: k6170 
o|inlining procedure: k6187 
o|substituted constant variable: a6197 
o|inlining procedure: k6187 
o|contracted procedure: "(optimizer.scm:491) g873874" 
o|contracted procedure: k6223 
o|inlining procedure: k6220 
o|inlining procedure: k6220 
o|contracted procedure: k6229 
o|substituted constant variable: a6266 
o|substituted constant variable: a6268 
o|substituted constant variable: a6270 
o|substituted constant variable: a6272 
o|substituted constant variable: a6274 
o|substituted constant variable: a6276 
o|contracted procedure: "(optimizer.scm:226) g331332" 
o|contracted procedure: "(optimizer.scm:225) g328329" 
o|contracted procedure: "(optimizer.scm:224) g325326" 
o|inlining procedure: k6286 
o|contracted procedure: "(optimizer.scm:512) g913914" 
o|inlining procedure: k6286 
o|inlining procedure: k6338 
o|inlining procedure: k6338 
o|inlining procedure: k6436 
o|contracted procedure: "(optimizer.scm:530) g926933" 
o|inlining procedure: k6407 
o|inlining procedure: k6407 
o|inlining procedure: k6436 
o|propagated global variable: g932934 ##compiler#simplified-ops 
o|inlining procedure: k6481 
o|inlining procedure: k6481 
o|inlining procedure: k6520 
o|inlining procedure: k6552 
o|contracted procedure: "(optimizer.scm:584) g10331034" 
o|contracted procedure: "(optimizer.scm:583) g10301031" 
o|contracted procedure: "(optimizer.scm:581) g10261027" 
o|inlining procedure: k6552 
o|inlining procedure: k6636 
o|contracted procedure: "(optimizer.scm:579) g10221023" 
o|inlining procedure: k6636 
o|substituted constant variable: a6654 
o|contracted procedure: "(optimizer.scm:573) g10141015" 
o|contracted procedure: "(optimizer.scm:572) g10101011" 
o|contracted procedure: "(optimizer.scm:571) g10061007" 
o|inlining procedure: k6520 
o|inlining procedure: k6687 
o|inlining procedure: k6696 
o|contracted procedure: "(optimizer.scm:570) g10021003" 
o|inlining procedure: k6696 
o|substituted constant variable: a6714 
o|substituted constant variable: a6719 
o|inlining procedure: k6687 
o|contracted procedure: k6724 
o|contracted procedure: "(optimizer.scm:564) g992993" 
o|contracted procedure: "(optimizer.scm:563) g988989" 
o|inlining procedure: k6762 
o|inlining procedure: k6762 
o|contracted procedure: "(optimizer.scm:559) g970971" 
o|contracted procedure: k6821 
o|inlining procedure: k6818 
o|inlining procedure: k6818 
o|contracted procedure: k6871 
o|inlining procedure: k6868 
o|inlining procedure: k6868 
o|contracted procedure: k6903 
o|inlining procedure: k6900 
o|inlining procedure: k6900 
o|contracted procedure: k6948 
o|inlining procedure: k6945 
o|inlining procedure: k6945 
o|inlining procedure: k6992 
o|inlining procedure: k6992 
o|inlining procedure: k7016 
o|contracted procedure: "(optimizer.scm:887) g14291430" 
o|inlining procedure: k7016 
o|contracted procedure: "(optimizer.scm:891) g14371438" 
o|contracted procedure: "(optimizer.scm:893) g14421443" 
o|contracted procedure: "(optimizer.scm:896) g14491450" 
o|contracted procedure: "(optimizer.scm:898) g14541455" 
o|inlining procedure: k7156 
o|inlining procedure: k7156 
o|inlining procedure: k7179 
o|inlining procedure: k7179 
o|inlining procedure: k7202 
o|inlining procedure: k7202 
o|inlining procedure: k7239 
o|inlining procedure: k7239 
o|inlining procedure: k7318 
o|inlining procedure: k7318 
o|inlining procedure: k7327 
o|inlining procedure: k7327 
o|inlining procedure: k7392 
o|inlining procedure: k7412 
o|inlining procedure: k7412 
o|contracted procedure: "(optimizer.scm:948) g15391540" 
o|contracted procedure: "(optimizer.scm:950) g15441545" 
o|inlining procedure: k7460 
o|inlining procedure: k7472 
o|contracted procedure: "(optimizer.scm:946) g15331534" 
o|inlining procedure: k7472 
o|contracted procedure: "(optimizer.scm:945) g15301531" 
o|contracted procedure: "(optimizer.scm:945) g15271528" 
o|contracted procedure: "(optimizer.scm:944) g15231524" 
o|inlining procedure: k7460 
o|contracted procedure: "(optimizer.scm:943) g15191520" 
o|contracted procedure: "(optimizer.scm:939) g15091510" 
o|inlining procedure: k7392 
o|inlining procedure: k7548 
o|inlining procedure: k7557 
o|contracted procedure: "(optimizer.scm:960) g15601561" 
o|contracted procedure: "(optimizer.scm:964) g15651566" 
o|inlining procedure: k7557 
o|contracted procedure: "(optimizer.scm:957) g15521553" 
o|inlining procedure: k7548 
o|inlining procedure: k7620 
o|inlining procedure: k7629 
o|contracted procedure: "(optimizer.scm:974) g15811582" 
o|contracted procedure: "(optimizer.scm:975) g15861587" 
o|inlining procedure: k7629 
o|contracted procedure: "(optimizer.scm:970) g15721573" 
o|inlining procedure: k7620 
o|inlining procedure: k7718 
o|inlining procedure: k7724 
o|contracted procedure: "(optimizer.scm:984) g15981599" 
o|contracted procedure: "(optimizer.scm:983) g15951596" 
o|inlining procedure: k7724 
o|substituted constant variable: a7783 
o|inlining procedure: k7718 
o|inlining procedure: k7788 
o|inlining procedure: k7797 
o|inlining procedure: k7814 
o|contracted procedure: "(optimizer.scm:999) g16141615" 
o|contracted procedure: "(optimizer.scm:1001) g16191620" 
o|inlining procedure: k7814 
o|substituted constant variable: a7875 
o|inlining procedure: k7797 
o|contracted procedure: "(optimizer.scm:995) g16051606" 
o|inlining procedure: k7788 
o|inlining procedure: k7886 
o|inlining procedure: k7898 
o|contracted procedure: "(optimizer.scm:1011) g16341635" 
o|contracted procedure: "(optimizer.scm:1013) g16391640" 
o|contracted procedure: "(optimizer.scm:1014) g16441645" 
o|contracted procedure: "(optimizer.scm:1010) g16311632" 
o|inlining procedure: k7898 
o|substituted constant variable: a7967 
o|inlining procedure: k7886 
o|inlining procedure: k7972 
o|inlining procedure: k7987 
o|inlining procedure: k7996 
o|contracted procedure: "(optimizer.scm:1023) g16591660" 
o|contracted procedure: "(optimizer.scm:1025) g16641665" 
o|inlining procedure: k7996 
o|contracted procedure: "(optimizer.scm:1022) g16561657" 
o|inlining procedure: k7987 
o|inlining procedure: k7972 
o|inlining procedure: k8068 
o|contracted procedure: "(optimizer.scm:1032) g16711672" 
o|inlining procedure: k8068 
o|inlining procedure: k8088 
o|inlining procedure: k8097 
o|contracted procedure: "(optimizer.scm:1041) g16811682" 
o|inlining procedure: k8134 
o|contracted procedure: "(optimizer.scm:1048) g17541755" 
o|contracted procedure: "(optimizer.scm:1049) g17591760" 
o|contracted procedure: "(optimizer.scm:1058) g17671768" 
o|inlining procedure: k8219 
o|inlining procedure: k8219 
o|inlining procedure: k8234 
o|inlining procedure: k8234 
o|inlining procedure: k8269 
o|contracted procedure: "(optimizer.scm:1045) g17051714" 
o|inlining procedure: k8269 
o|inlining procedure: k8134 
o|inlining procedure: k8304 
o|inlining procedure: k8304 
o|substituted constant variable: a8333 
o|inlining procedure: k8097 
o|contracted procedure: "(optimizer.scm:1039) g16781679" 
o|inlining procedure: k8088 
o|inlining procedure: k8340 
o|inlining procedure: k8352 
o|contracted procedure: "(optimizer.scm:1069) g17831784" 
o|inlining procedure: k8401 
o|inlining procedure: k8401 
o|inlining procedure: k8352 
o|contracted procedure: "(optimizer.scm:1066) g17781779" 
o|inlining procedure: k8340 
o|inlining procedure: k8427 
o|inlining procedure: k8436 
o|inlining procedure: k8457 
o|contracted procedure: "(optimizer.scm:1087) g18021803" 
o|inlining procedure: k8457 
o|contracted procedure: "(optimizer.scm:1083) g17941795" 
o|inlining procedure: k8436 
o|inlining procedure: k8427 
o|inlining procedure: k8508 
o|inlining procedure: k8522 
o|inlining procedure: k8540 
o|contracted procedure: "(optimizer.scm:1101) g18241825" 
o|inlining procedure: k8540 
o|contracted procedure: "(optimizer.scm:1102) g18291830" 
o|substituted constant variable: a8587 
o|inlining procedure: k8522 
o|contracted procedure: "(optimizer.scm:1096) g18091810" 
o|inlining procedure: k8508 
o|inlining procedure: k8592 
o|inlining procedure: k8601 
o|inlining procedure: k8621 
o|contracted procedure: "(optimizer.scm:1114) g18451846" 
o|contracted procedure: "(optimizer.scm:1115) g18501851" 
o|inlining procedure: k8621 
o|inlining procedure: k8601 
o|contracted procedure: "(optimizer.scm:1110) g18361837" 
o|inlining procedure: k8592 
o|inlining procedure: k8675 
o|inlining procedure: k8684 
o|inlining procedure: k8701 
o|contracted procedure: "(optimizer.scm:1125) g18661867" 
o|contracted procedure: "(optimizer.scm:1128) g18711872" 
o|inlining procedure: k8740 
o|inlining procedure: k8740 
o|inlining procedure: k8701 
o|inlining procedure: k8684 
o|contracted procedure: "(optimizer.scm:1122) g18581859" 
o|inlining procedure: k8675 
o|inlining procedure: k8760 
o|inlining procedure: k8769 
o|inlining procedure: k8781 
o|contracted procedure: "(optimizer.scm:1141) g18901891" 
o|inlining procedure: k8826 
o|contracted procedure: "(optimizer.scm:1144) g18951896" 
o|inlining procedure: k8826 
o|inlining procedure: k8781 
o|contracted procedure: "(optimizer.scm:1139) g18831884" 
o|propagated global variable: tmp18791881 unsafe 
o|propagated global variable: tmp18791881 unsafe 
o|inlining procedure: k8769 
o|substituted constant variable: a8859 
o|inlining procedure: k8760 
o|inlining procedure: k8885 
o|inlining procedure: k8897 
o|contracted procedure: "(optimizer.scm:1166) g19191920" 
o|contracted procedure: "(optimizer.scm:1169) g19241925" 
o|inlining procedure: k8948 
o|inlining procedure: k8948 
o|inlining procedure: k8989 
o|substituted constant variable: a8997 
o|inlining procedure: k8989 
o|propagated global variable: tmp19161918 unsafe 
o|propagated global variable: tmp19161918 unsafe 
o|inlining procedure: k8897 
o|contracted procedure: "(optimizer.scm:1164) g19121913" 
o|inlining procedure: k8885 
o|inlining procedure: k9011 
o|inlining procedure: k9020 
o|contracted procedure: "(optimizer.scm:1185) g19411942" 
o|contracted procedure: "(optimizer.scm:1188) g19461947" 
o|inlining procedure: k9067 
o|inlining procedure: k9067 
o|contracted procedure: "(optimizer.scm:1184) g19381939" 
o|inlining procedure: k9020 
o|inlining procedure: k9011 
o|inlining procedure: k9100 
o|inlining procedure: k9109 
o|contracted procedure: "(optimizer.scm:1199) g19581959" 
o|inlining procedure: k9109 
o|contracted procedure: "(optimizer.scm:1198) g19551956" 
o|inlining procedure: k9100 
o|inlining procedure: k9144 
o|inlining procedure: k9153 
o|contracted procedure: "(optimizer.scm:1217) g19831984" 
o|inlining procedure: k9199 
o|contracted procedure: "(optimizer.scm:1219) g19881989" 
o|inlining procedure: k9199 
o|contracted procedure: "(optimizer.scm:1221) g19961997" 
o|contracted procedure: "(optimizer.scm:1227) g20032004" 
o|inlining procedure: k9281 
o|contracted procedure: "(optimizer.scm:1215) g19761977" 
o|inlining procedure: k9281 
o|contracted procedure: "(optimizer.scm:1214) g19731974" 
o|inlining procedure: k9153 
o|contracted procedure: "(optimizer.scm:1208) g19651966" 
o|inlining procedure: k9144 
o|inlining procedure: k9327 
o|inlining procedure: k9339 
o|contracted procedure: "(optimizer.scm:1238) g20192020" 
o|contracted procedure: "(optimizer.scm:1241) g20242025" 
o|contracted procedure: "(optimizer.scm:1237) g20162017" 
o|inlining procedure: k9339 
o|inlining procedure: k9327 
o|inlining procedure: k9423 
o|inlining procedure: k9432 
o|contracted procedure: "(optimizer.scm:1266) g20592060" 
o|inlining procedure: k9484 
o|contracted procedure: "(optimizer.scm:1268) g20642065" 
o|inlining procedure: k9484 
o|contracted procedure: "(optimizer.scm:1270) g20692070" 
o|inlining procedure: k9531 
o|contracted procedure: "(optimizer.scm:1277) g20762077" 
o|inlining procedure: k9531 
o|contracted procedure: "(optimizer.scm:1278) g20812082" 
o|inlining procedure: k9576 
o|contracted procedure: "(optimizer.scm:1264) g20522053" 
o|inlining procedure: k9576 
o|contracted procedure: "(optimizer.scm:1263) g20492050" 
o|inlining procedure: k9432 
o|contracted procedure: "(optimizer.scm:1255) g20392040" 
o|inlining procedure: k9423 
o|inlining procedure: k9627 
o|inlining procedure: k9636 
o|contracted procedure: "(optimizer.scm:1291) g20992100" 
o|inlining procedure: k9673 
o|contracted procedure: "(optimizer.scm:1295) g21042105" 
o|inlining procedure: k9673 
o|contracted procedure: "(optimizer.scm:1299) g21092110" 
o|inlining procedure: k9636 
o|contracted procedure: "(optimizer.scm:1289) g20922093" 
o|inlining procedure: k9627 
o|inlining procedure: k9711 
o|inlining procedure: k9720 
o|contracted procedure: "(optimizer.scm:1313) g21212122" 
o|inlining procedure: k9787 
o|contracted procedure: "(optimizer.scm:1326) defarg1490" 
o|inlining procedure: k7359 
o|inlining procedure: k7359 
o|inlining procedure: k9787 
o|inlining procedure: k9720 
o|contracted procedure: "(optimizer.scm:1310) g21162117" 
o|inlining procedure: k9711 
o|substituted constant variable: a9856 
o|substituted constant variable: a9858 
o|substituted constant variable: a9860 
o|substituted constant variable: a9862 
o|substituted constant variable: a9864 
o|substituted constant variable: a9866 
o|substituted constant variable: a9868 
o|substituted constant variable: a9870 
o|substituted constant variable: a9872 
o|substituted constant variable: a9874 
o|substituted constant variable: a9876 
o|substituted constant variable: a9878 
o|substituted constant variable: a9880 
o|substituted constant variable: a9882 
o|substituted constant variable: a9884 
o|substituted constant variable: a9886 
o|substituted constant variable: a9888 
o|substituted constant variable: a9890 
o|substituted constant variable: a9892 
o|substituted constant variable: a9894 
o|substituted constant variable: a9896 
o|substituted constant variable: a9898 
o|substituted constant variable: a9900 
o|inlining procedure: k9931 
o|inlining procedure: k9956 
o|contracted procedure: k9964 
o|inlining procedure: k9967 
o|inlining procedure: k9982 
o|inlining procedure: k9991 
o|contracted procedure: k10000 
o|inlining procedure: k10003 
o|inlining procedure: k10003 
o|contracted procedure: "(optimizer.scm:1363) g21842185" 
o|contracted procedure: "(optimizer.scm:1364) g21882189" 
o|inlining procedure: k9991 
o|inlining procedure: k9982 
o|inlining procedure: k9967 
o|inlining procedure: k9956 
o|inlining procedure: k9931 
o|inlining procedure: k10075 
o|inlining procedure: k10075 
o|inlining procedure: k10113 
o|inlining procedure: k10113 
o|substituted constant variable: a10134 
o|substituted constant variable: a10136 
o|substituted constant variable: a10138 
o|contracted procedure: "(optimizer.scm:1351) g21712172" 
o|contracted procedure: "(optimizer.scm:1350) g21622163" 
o|contracted procedure: "(optimizer.scm:1349) g21592160" 
o|inlining procedure: k10169 
o|inlining procedure: k10187 
o|inlining procedure: k10187 
o|contracted procedure: k10193 
o|inlining procedure: k10169 
o|inlining procedure: k10214 
o|inlining procedure: k10214 
o|inlining procedure: k10242 
o|contracted procedure: k10251 
o|inlining procedure: k10242 
o|inlining procedure: k10277 
o|inlining procedure: k10283 
o|inlining procedure: k10283 
o|inlining procedure: k10277 
o|inlining procedure: k10301 
o|contracted procedure: k10331 
o|inlining procedure: k10328 
o|inlining procedure: k10328 
o|inlining procedure: k10301 
o|inlining procedure: k10348 
o|inlining procedure: k10348 
o|contracted procedure: k10372 
o|inlining procedure: k10369 
o|inlining procedure: k10369 
o|inlining procedure: k10383 
o|inlining procedure: k10398 
o|inlining procedure: k10398 
o|inlining procedure: k10421 
o|contracted procedure: "(optimizer.scm:1433) g22962297" 
o|contracted procedure: "(optimizer.scm:1432) g22932294" 
o|inlining procedure: k10421 
o|contracted procedure: "(optimizer.scm:1428) g22842285" 
o|contracted procedure: "(optimizer.scm:1427) g22792280" 
o|inlining procedure: k10383 
o|inlining procedure: k10496 
o|inlining procedure: k10496 
o|contracted procedure: k10502 
o|inlining procedure: k10518 
o|inlining procedure: k10518 
o|inlining procedure: k10541 
o|inlining procedure: k10541 
o|substituted constant variable: a10576 
o|substituted constant variable: a10578 
o|substituted constant variable: a10580 
o|substituted constant variable: a10582 
o|substituted constant variable: a10584 
o|substituted constant variable: a10586 
o|substituted constant variable: a10588 
o|substituted constant variable: a10590 
o|substituted constant variable: a10592 
o|substituted constant variable: a10594 
o|contracted procedure: "(optimizer.scm:1382) g22372238" 
o|contracted procedure: "(optimizer.scm:1381) g22282229" 
o|contracted procedure: "(optimizer.scm:1380) g22252226" 
o|inlining procedure: k10598 
o|inlining procedure: k10598 
o|contracted procedure: "(optimizer.scm:1539) g24712472" 
o|contracted procedure: "(optimizer.scm:1531) g24682469" 
o|inlining procedure: k10635 
o|inlining procedure: k10793 
o|contracted procedure: "(optimizer.scm:1560) g25202527" 
o|contracted procedure: "(optimizer.scm:1564) g25342535" 
o|contracted procedure: "(optimizer.scm:1564) g25312532" 
o|inlining procedure: k10793 
o|contracted procedure: "(optimizer.scm:1552) g24942495" 
o|contracted procedure: "(optimizer.scm:1555) g25032504" 
o|contracted procedure: "(optimizer.scm:1555) g25142515" 
o|contracted procedure: "(optimizer.scm:1555) g25112512" 
o|contracted procedure: "(optimizer.scm:1555) g25082509" 
o|contracted procedure: "(optimizer.scm:1554) g25002501" 
o|contracted procedure: "(optimizer.scm:1547) g24862487" 
o|inlining procedure: k10892 
o|inlining procedure: k10892 
o|inlining procedure: k10957 
o|inlining procedure: k10991 
o|contracted procedure: "(optimizer.scm:1508) g23952396" 
o|contracted procedure: "(optimizer.scm:1505) g23922393" 
o|contracted procedure: "(optimizer.scm:1499) g23892390" 
o|inlining procedure: k11043 
o|inlining procedure: k11043 
o|inlining procedure: k10991 
o|contracted procedure: "(optimizer.scm:1485) g23682369" 
o|contracted procedure: "(optimizer.scm:1484) g23652366" 
o|contracted procedure: "(optimizer.scm:1483) g23612362" 
o|inlining procedure: k10957 
o|inlining procedure: k11190 
o|inlining procedure: k11190 
o|inlining procedure: k11216 
o|inlining procedure: k11216 
o|inlining procedure: k11245 
o|inlining procedure: k11245 
o|substituted constant variable: a11266 
o|substituted constant variable: a11268 
o|contracted procedure: "(optimizer.scm:1479) g23552356" 
o|contracted procedure: "(optimizer.scm:1478) g23462347" 
o|contracted procedure: "(optimizer.scm:1477) g23432344" 
o|contracted procedure: "(optimizer.scm:1476) g24502451" 
o|inlining procedure: k10635 
o|inlining procedure: k11288 
o|inlining procedure: k11288 
o|substituted constant variable: a11303 
o|contracted procedure: "(optimizer.scm:1461) g23242325" 
o|inlining procedure: k11352 
o|substituted constant variable: a11374 
o|inlining procedure: k11352 
o|inlining procedure: k11436 
o|inlining procedure: k11465 
o|inlining procedure: k11465 
o|inlining procedure: k11495 
o|inlining procedure: k11513 
o|contracted procedure: "(optimizer.scm:1631) user-lambda?2565" 
o|inlining procedure: k11378 
o|contracted procedure: "(optimizer.scm:1606) g25742575" 
o|inlining procedure: k11378 
o|contracted procedure: "(optimizer.scm:1605) g25712572" 
o|inlining procedure: k11513 
o|inlining procedure: k11540 
o|inlining procedure: k11540 
o|inlining procedure: k11547 
o|inlining procedure: k11547 
o|contracted procedure: "(optimizer.scm:1627) g26232624" 
o|contracted procedure: "(optimizer.scm:1625) g26192620" 
o|contracted procedure: "(optimizer.scm:1624) g26162617" 
o|inlining procedure: k11495 
o|contracted procedure: "(optimizer.scm:1623) g26112612" 
o|contracted procedure: k11586 
o|contracted procedure: "(optimizer.scm:1618) g26052606" 
o|inlining procedure: k11436 
o|inlining procedure: k11664 
o|inlining procedure: k11664 
o|substituted constant variable: a11688 
o|substituted constant variable: a11690 
o|substituted constant variable: a11692 
o|contracted procedure: "(optimizer.scm:1611) g25882589" 
o|contracted procedure: "(optimizer.scm:1610) g25852586" 
o|contracted procedure: "(optimizer.scm:1609) g25822583" 
o|contracted procedure: "(optimizer.scm:1682) g27762777" 
o|contracted procedure: "(optimizer.scm:1678) g27732774" 
o|inlining procedure: k11776 
o|inlining procedure: k11776 
o|contracted procedure: "(optimizer.scm:1672) g27372738" 
o|contracted procedure: "(optimizer.scm:1671) g27332734" 
o|contracted procedure: "(optimizer.scm:1670) g27292730" 
o|contracted procedure: "(optimizer.scm:1760) g29482949" 
o|contracted procedure: "(optimizer.scm:1761) g29532954" 
o|contracted procedure: "(optimizer.scm:1758) g29452946" 
o|inlining procedure: k11941 
o|inlining procedure: k11941 
o|inlining procedure: k11971 
o|inlining procedure: k11971 
o|inlining procedure: k11997 
o|inlining procedure: k11997 
o|contracted procedure: "(optimizer.scm:1706) g28662867" 
o|contracted procedure: "(optimizer.scm:1711) g28762877" 
o|contracted procedure: "(optimizer.scm:1743) g29092910" 
o|contracted procedure: "(optimizer.scm:1714) g28812882" 
o|contracted procedure: "(optimizer.scm:1717) g28862887" 
o|contracted procedure: "(optimizer.scm:1722) g28912892" 
o|contracted procedure: "(optimizer.scm:1739) g29062907" 
o|inlining procedure: k12184 
o|inlining procedure: k12184 
o|contracted procedure: "(optimizer.scm:1734) g29002901" 
o|contracted procedure: "(optimizer.scm:1710) g28712872" 
o|contracted procedure: "(optimizer.scm:1702) g28632864" 
o|contracted procedure: "(optimizer.scm:1701) g28602861" 
o|contracted procedure: "(optimizer.scm:1700) g28562857" 
o|contracted procedure: "(optimizer.scm:1699) g28522853" 
o|inlining procedure: k12301 
o|inlining procedure: k12301 
o|inlining procedure: k12366 
o|contracted procedure: "(optimizer.scm:1687) g28002809" 
o|inlining procedure: k12366 
o|inlining procedure: k12401 
o|inlining procedure: k12401 
o|inlining procedure: k12449 
o|inlining procedure: k12449 
o|inlining procedure: k12491 
o|inlining procedure: k12500 
o|contracted procedure: "(optimizer.scm:803) g12691270" 
o|contracted procedure: "(optimizer.scm:807) g12741275" 
o|contracted procedure: "(optimizer.scm:812) g12811282" 
o|contracted procedure: "(optimizer.scm:815) g12861287" 
o|inlining procedure: k12500 
o|inlining procedure: k12491 
o|inlining procedure: k12624 
o|contracted procedure: "(optimizer.scm:784) g12461247" 
o|contracted procedure: "(optimizer.scm:787) g12511252" 
o|inlining procedure: k12624 
o|contracted procedure: k12710 
o|inlining procedure: k12707 
o|inlining procedure: k12707 
o|contracted procedure: "(optimizer.scm:764) g12241225" 
o|contracted procedure: "(optimizer.scm:766) g12291230" 
o|substituted constant variable: a12744 
o|inlining procedure: k12830 
o|contracted procedure: k12845 
o|inlining procedure: k12842 
o|inlining procedure: k12842 
o|contracted procedure: k12851 
o|inlining procedure: k12881 
o|inlining procedure: k12881 
o|inlining procedure: k12909 
o|inlining procedure: k12961 
o|contracted procedure: "(optimizer.scm:726) g12041205" 
o|inlining procedure: k12961 
o|inlining procedure: k13021 
o|inlining procedure: k13021 
o|inlining procedure: k13027 
o|contracted procedure: k13036 
o|contracted procedure: k13042 
o|inlining procedure: k13039 
o|inlining procedure: k13039 
o|inlining procedure: k13051 
o|contracted procedure: "(optimizer.scm:725) g12011202" 
o|inlining procedure: k13051 
o|contracted procedure: "(optimizer.scm:724) g11981199" 
o|inlining procedure: k13027 
o|contracted procedure: "(optimizer.scm:718) g11851186" 
o|contracted procedure: "(optimizer.scm:717) g11821183" 
o|contracted procedure: "(optimizer.scm:716) g11791180" 
o|inlining procedure: k12909 
o|substituted constant variable: a13117 
o|substituted constant variable: a13119 
o|contracted procedure: "(optimizer.scm:707) g11661167" 
o|contracted procedure: "(optimizer.scm:706) g11571158" 
o|contracted procedure: "(optimizer.scm:705) g11531154" 
o|inlining procedure: k12830 
o|contracted procedure: "(optimizer.scm:699) g11441145" 
o|contracted procedure: "(optimizer.scm:698) g11411142" 
o|contracted procedure: "(optimizer.scm:697) g11381139" 
o|inlining procedure: k13155 
o|inlining procedure: k13167 
o|contracted procedure: "(optimizer.scm:674) g11211122" 
o|inlining procedure: k13167 
o|substituted constant variable: a13201 
o|inlining procedure: k13155 
o|inlining procedure: k13285 
o|inlining procedure: k13297 
o|inlining procedure: k13309 
o|contracted procedure: "(optimizer.scm:649) g11011102" 
o|inlining procedure: k13309 
o|substituted constant variable: a13339 
o|substituted constant variable: a13348 
o|inlining procedure: k13297 
o|inlining procedure: k13285 
o|inlining procedure: k13469 
o|inlining procedure: k13469 
o|inlining procedure: k13486 
o|inlining procedure: k13486 
o|replaced variables: 1984 
o|removed binding forms: 607 
o|substituted constant variable: c101 
o|substituted constant variable: p102 
o|substituted constant variable: s103 
o|substituted constant variable: tmp132135 
o|substituted constant variable: mark134 
o|substituted constant variable: r419013569 
o|substituted constant variable: r417813572 
o|inlining procedure: k4320 
o|substituted constant variable: c303 
o|inlining procedure: k4320 
o|substituted constant variable: r444113587 
o|inlining procedure: k4320 
o|inlining procedure: k4320 
o|substituted constant variable: mark366 
o|substituted constant variable: c392 
o|substituted constant variable: r478613602 
o|substituted constant variable: c443 
o|substituted constant variable: c459 
o|substituted constant variable: r516513617 
o|substituted constant variable: c570 
o|substituted constant variable: c575 
o|substituted constant variable: p576 
o|substituted constant variable: s577 
o|substituted constant variable: r521113619 
o|substituted constant variable: r515313621 
o|substituted constant variable: r514113622 
o|substituted constant variable: r512613623 
o|converted assignments to bindings: (cfk647) 
o|substituted constant variable: c709 
o|substituted constant variable: c716 
o|substituted constant variable: c735 
o|substituted constant variable: c767 
o|substituted constant variable: r577313646 
o|substituted constant variable: mark617 
o|substituted constant variable: r576113650 
o|substituted constant variable: mark599 
o|substituted constant variable: c796 
o|substituted constant variable: r586513653 
o|substituted constant variable: mark535 
o|substituted constant variable: r591613654 
o|substituted constant variable: c803 
o|substituted constant variable: c848 
o|substituted constant variable: p849 
o|substituted constant variable: s850 
o|substituted constant variable: c855 
o|substituted constant variable: p856 
o|substituted constant variable: s857 
o|substituted constant variable: c867 
o|substituted constant variable: p868 
o|substituted constant variable: s869 
o|substituted constant variable: c875 
o|substituted constant variable: r622113673 
o|substituted constant variable: r663713691 
o|substituted constant variable: r669713695 
o|substituted constant variable: r668813696 
o|substituted constant variable: sym972 
o|substituted constant variable: r681913699 
o|substituted constant variable: r690113703 
o|substituted constant variable: r694613705 
o|substituted constant variable: c1431 
o|substituted constant variable: c1439 
o|substituted constant variable: c1444 
o|substituted constant variable: p1445 
o|substituted constant variable: s1446 
o|substituted constant variable: c1451 
o|substituted constant variable: c1456 
o|converted assignments to bindings: (find-path1339) 
o|substituted constant variable: r732813722 
o|substituted constant variable: c1541 
o|substituted constant variable: c1546 
o|substituted constant variable: c1535 
o|substituted constant variable: r747313728 
o|substituted constant variable: r746113729 
o|substituted constant variable: c1562 
o|substituted constant variable: c1567 
o|substituted constant variable: r755813733 
o|substituted constant variable: r754913734 
o|substituted constant variable: c1583 
o|substituted constant variable: c1588 
o|substituted constant variable: r763013737 
o|substituted constant variable: c1600 
o|substituted constant variable: r772513741 
o|substituted constant variable: r771913742 
o|substituted constant variable: c1616 
o|substituted constant variable: c1621 
o|substituted constant variable: r781513746 
o|substituted constant variable: r779813747 
o|substituted constant variable: c1636 
o|substituted constant variable: c1641 
o|substituted constant variable: c1646 
o|substituted constant variable: r789913751 
o|substituted constant variable: r788713752 
o|substituted constant variable: c1661 
o|substituted constant variable: c1666 
o|substituted constant variable: r799713756 
o|substituted constant variable: r798813757 
o|substituted constant variable: r806913760 
o|substituted constant variable: c1683 
o|substituted constant variable: c1756 
o|substituted constant variable: c1761 
o|substituted constant variable: c1769 
o|substituted constant variable: r813513772 
o|substituted constant variable: r809813775 
o|substituted constant variable: c1785 
o|substituted constant variable: r835313783 
o|substituted constant variable: r834113784 
o|substituted constant variable: c1804 
o|substituted constant variable: r845813788 
o|substituted constant variable: r843713789 
o|substituted constant variable: c1826 
o|substituted constant variable: c1831 
o|substituted constant variable: r852313795 
o|substituted constant variable: r850913796 
o|substituted constant variable: c1847 
o|substituted constant variable: c1852 
o|substituted constant variable: s1854 
o|substituted constant variable: r862213800 
o|substituted constant variable: r860213801 
o|substituted constant variable: c1868 
o|substituted constant variable: c1873 
o|substituted constant variable: r870213810 
o|substituted constant variable: r868513811 
o|substituted constant variable: r867613812 
o|substituted constant variable: c1892 
o|substituted constant variable: c1897 
o|substituted constant variable: r882713817 
o|substituted constant variable: r878213818 
o|substituted constant variable: r877013819 
o|substituted constant variable: c1921 
o|substituted constant variable: c1926 
o|inlining procedure: k8948 
o|substituted constant variable: r899013828 
o|substituted constant variable: r889813829 
o|substituted constant variable: r888613830 
o|substituted constant variable: c1943 
o|substituted constant variable: c1948 
o|substituted constant variable: r902113837 
o|substituted constant variable: c1960 
o|substituted constant variable: r911013841 
o|substituted constant variable: r910113842 
o|substituted constant variable: c1985 
o|substituted constant variable: c1990 
o|substituted constant variable: c1998 
o|substituted constant variable: c2005 
o|substituted constant variable: r928213848 
o|substituted constant variable: r915413849 
o|substituted constant variable: c2021 
o|substituted constant variable: c2026 
o|substituted constant variable: r934013853 
o|substituted constant variable: r932813854 
o|substituted constant variable: c2061 
o|substituted constant variable: c2066 
o|substituted constant variable: c2071 
o|substituted constant variable: c2078 
o|substituted constant variable: c2083 
o|substituted constant variable: r957713862 
o|substituted constant variable: r943313863 
o|substituted constant variable: c2101 
o|substituted constant variable: c2106 
o|substituted constant variable: c2111 
o|substituted constant variable: r963713871 
o|substituted constant variable: r962813872 
o|substituted constant variable: c2123 
o|substituted constant variable: r972113879 
o|substituted constant variable: r1000413887 
o|substituted constant variable: mark2187 
o|substituted constant variable: r999213888 
o|substituted constant variable: r998313889 
o|substituted constant variable: r996813890 
o|substituted constant variable: r995713891 
o|substituted constant variable: r1021513902 
o|substituted constant variable: r1028413906 
o|substituted constant variable: r1028413907 
o|substituted constant variable: r1027813908 
o|substituted constant variable: r1032913910 
o|substituted constant variable: r1032913911 
o|substituted constant variable: r1034913914 
o|substituted constant variable: r1037013915 
o|substituted constant variable: r1037013916 
o|substituted constant variable: r1039913919 
o|substituted constant variable: r1042213920 
o|inlining procedure: k10430 
o|inlining procedure: k10430 
o|substituted constant variable: r1042213921 
o|substituted constant variable: r1054213928 
o|substituted constant variable: r1059913930 
o|substituted constant variable: c2473 
o|substituted constant variable: c2536 
o|substituted constant variable: p2537 
o|substituted constant variable: s2538 
o|substituted constant variable: c2496 
o|substituted constant variable: c2488 
o|substituted constant variable: p2489 
o|substituted constant variable: s2490 
o|substituted constant variable: c2397 
o|substituted constant variable: r1128913950 
o|inlining procedure: k11358 
o|inlining procedure: k11358 
o|substituted constant variable: r1137913959 
o|substituted constant variable: r1151413960 
o|substituted constant variable: r1154113963 
o|substituted constant variable: r1154113963 
o|folded constant expression: (length (quote ())) 
o|substituted constant variable: r1154813967 
o|substituted constant variable: r1154813967 
o|folded constant expression: (length (quote ())) 
o|substituted constant variable: r1149613969 
o|substituted constant variable: c2778 
o|substituted constant variable: p2779 
o|substituted constant variable: s2780 
o|substituted constant variable: c2950 
o|substituted constant variable: c2868 
o|substituted constant variable: c2878 
o|substituted constant variable: c2911 
o|substituted constant variable: p2912 
o|substituted constant variable: c2883 
o|substituted constant variable: c2888 
o|substituted constant variable: c2893 
o|substituted constant variable: c2902 
o|substituted constant variable: c2873 
o|substituted constant variable: p2874 
o|substituted constant variable: s2875 
o|substituted constant variable: c1271 
o|substituted constant variable: c1276 
o|substituted constant variable: c1283 
o|substituted constant variable: p1284 
o|substituted constant variable: c1288 
o|substituted constant variable: r1250113993 
o|substituted constant variable: r1249213994 
o|substituted constant variable: c1248 
o|substituted constant variable: c1253 
o|substituted constant variable: p1254 
o|substituted constant variable: r1262513996 
o|substituted constant variable: r1270813997 
o|substituted constant variable: c1226 
o|substituted constant variable: c1231 
o|substituted constant variable: r1284314000 
o|substituted constant variable: r1302214008 
o|substituted constant variable: r1304014010 
o|substituted constant variable: r1305214013 
o|substituted constant variable: r1302814014 
o|substituted constant variable: r1291014015 
o|substituted constant variable: r1283114016 
o|substituted constant variable: c1123 
o|substituted constant variable: r1316814019 
o|substituted constant variable: r1315614020 
o|substituted constant variable: c1103 
o|substituted constant variable: p1104 
o|substituted constant variable: r1331014024 
o|substituted constant variable: r1329814025 
o|substituted constant variable: r1328614026 
o|substituted constant variable: r1347014027 
o|simplifications: ((let . 2)) 
o|replaced variables: 164 
o|removed binding forms: 1870 
o|inlining procedure: k4017 
o|inlining procedure: k4198 
o|inlining procedure: k4162 
o|inlining procedure: k6071 
o|inlining procedure: k6366 
o|removed call to pure procedure with unused result: "(optimizer.scm:1045) slot" 
o|inlining procedure: k9070 
o|substituted constant variable: r104221392014117 
o|substituted constant variable: r104221392014120 
o|inlining procedure: k11533 
o|replaced variables: 320 
o|removed binding forms: 415 
o|substituted constant variable: r401814195 
o|substituted constant variable: r416314206 
o|substituted constant variable: r416314206 
o|substituted constant variable: r416314206 
o|contracted procedure: k8298 
o|substituted constant variable: r907114251 
o|substituted constant variable: r1153414270 
o|removed binding forms: 329 
o|removed conditional forms: 2 
o|inlining procedure: "(optimizer.scm:177) constant-node?166" 
o|removed binding forms: 5 
o|replaced variables: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 36) (##core#call . 1234)) 
o|  call simplifications:
o|    ##sys#cons	9
o|    assoc
o|    -
o|    fx>
o|    ##sys#list	74
o|    list?	3
o|    set-car!
o|    >=
o|    symbol?
o|    cddddr
o|    fx<=
o|    <=
o|    fx<
o|    =	10
o|    equal?	4
o|    fixnum?
o|    fx=
o|    proper-list?	3
o|    >	5
o|    values	6
o|    ##sys#structure?
o|    *	2
o|    length	41
o|    <	5
o|    zero?	5
o|    sub1	5
o|    ##sys#call-with-values	5
o|    fourth	16
o|    +	8
o|    cddr	6
o|    list	144
o|    caddr	2
o|    cadr	4
o|    third	30
o|    ##sys#setslot	15
o|    apply	2
o|    caar	2
o|    assq	10
o|    alist-cons	10
o|    cdr	31
o|    add1	9
o|    set-cdr!	3
o|    null?	21
o|    ##sys#make-structure	99
o|    second	44
o|    first	94
o|    car	25
o|    eq?	142
o|    ##sys#check-list	21
o|    pair?	50
o|    ##sys#slot	178
o|    memq	14
o|    not	20
o|    cons	44
o|contracted procedure: k3703 
o|contracted procedure: k3713 
o|contracted procedure: k3736 
o|contracted procedure: k3748 
o|contracted procedure: k3758 
o|contracted procedure: k3762 
o|contracted procedure: k3773 
o|contracted procedure: k3781 
o|contracted procedure: k3789 
o|contracted procedure: k3795 
o|contracted procedure: k3798 
o|contracted procedure: k3815 
o|contracted procedure: k3822 
o|contracted procedure: k3836 
o|contracted procedure: k3832 
o|contracted procedure: k3842 
o|contracted procedure: k3862 
o|contracted procedure: k3868 
o|contracted procedure: k3874 
o|contracted procedure: k3898 
o|contracted procedure: k3901 
o|contracted procedure: k3907 
o|contracted procedure: k3916 
o|contracted procedure: k3919 
o|contracted procedure: k3922 
o|contracted procedure: k3940 
o|contracted procedure: k3961 
o|contracted procedure: k3968 
o|contracted procedure: k3987 
o|contracted procedure: k4032 
o|contracted procedure: k4044 
o|contracted procedure: k4054 
o|contracted procedure: k4058 
o|contracted procedure: k4023 
o|contracted procedure: k4017 
o|contracted procedure: k4061 
o|contracted procedure: k4097 
o|contracted procedure: k4127 
o|contracted procedure: k4139 
o|contracted procedure: k4153 
o|contracted procedure: k4142 
o|contracted procedure: k4149 
o|contracted procedure: k4174 
o|contracted procedure: k4192 
o|contracted procedure: k4195 
o|contracted procedure: k4215 
o|contracted procedure: k4211 
o|contracted procedure: k4198 
o|contracted procedure: k4219 
o|contracted procedure: k4223 
o|contracted procedure: k4233 
o|contracted procedure: k4236 
o|contracted procedure: k4248 
o|contracted procedure: k4251 
o|contracted procedure: k4262 
o|contracted procedure: k4274 
o|contracted procedure: k4285 
o|contracted procedure: k4294 
o|contracted procedure: k4309 
o|contracted procedure: k4317 
o|contracted procedure: k4323 
o|contracted procedure: k4333 
o|contracted procedure: k4343 
o|contracted procedure: k4112 
o|contracted procedure: k4358 
o|contracted procedure: k409714397 
o|contracted procedure: k4364 
o|contracted procedure: k4474 
o|contracted procedure: k4470 
o|contracted procedure: k4370 
o|contracted procedure: k4459 
o|contracted procedure: k4373 
o|contracted procedure: k4386 
o|contracted procedure: k4421 
o|contracted procedure: k4429 
o|contracted procedure: k4425 
o|contracted procedure: k4450 
o|contracted procedure: k4509 
o|contracted procedure: k4517 
o|contracted procedure: k4525 
o|contracted procedure: k4531 
o|contracted procedure: k4562 
o|contracted procedure: k4553 
o|contracted procedure: k4634 
o|contracted procedure: k4585 
o|contracted procedure: k4593 
o|contracted procedure: k4615 
o|contracted procedure: k4579 
o|contracted procedure: k4640 
o|contracted procedure: k4646 
o|contracted procedure: k4649 
o|contracted procedure: k4665 
o|contracted procedure: k4672 
o|contracted procedure: k4701 
o|contracted procedure: k4704 
o|contracted procedure: k4715 
o|contracted procedure: k4727 
o|contracted procedure: k4746 
o|contracted procedure: k4737 
o|contracted procedure: k4782 
o|contracted procedure: k4778 
o|contracted procedure: k4751 
o|contracted procedure: k4767 
o|contracted procedure: k4758 
o|contracted procedure: k4801 
o|contracted procedure: k4804 
o|contracted procedure: k4873 
o|contracted procedure: k4877 
o|contracted procedure: k4885 
o|contracted procedure: k4853 
o|contracted procedure: k4857 
o|contracted procedure: k4865 
o|contracted procedure: k4869 
o|contracted procedure: k4898 
o|contracted procedure: k4954 
o|contracted procedure: k4958 
o|contracted procedure: k4966 
o|contracted procedure: k4934 
o|contracted procedure: k4938 
o|contracted procedure: k4946 
o|contracted procedure: k4950 
o|contracted procedure: k4970 
o|contracted procedure: k4977 
o|contracted procedure: k4983 
o|contracted procedure: k4992 
o|contracted procedure: k4995 
o|contracted procedure: k5003 
o|contracted procedure: k5009 
o|contracted procedure: k5967 
o|contracted procedure: k5012 
o|contracted procedure: k5033 
o|contracted procedure: k5036 
o|contracted procedure: k5053 
o|contracted procedure: k5076 
o|contracted procedure: k5067 
o|contracted procedure: k5085 
o|contracted procedure: k5095 
o|contracted procedure: k5099 
o|contracted procedure: k5113 
o|contracted procedure: k5278 
o|contracted procedure: k5128 
o|contracted procedure: k5269 
o|contracted procedure: k5131 
o|contracted procedure: k5250 
o|contracted procedure: k5146 
o|contracted procedure: k5241 
o|contracted procedure: k5149 
o|contracted procedure: k5182 
o|contracted procedure: k5195 
o|contracted procedure: k5186 
o|contracted procedure: k5232 
o|contracted procedure: k5292 
o|contracted procedure: k5295 
o|contracted procedure: k5304 
o|contracted procedure: k5312 
o|contracted procedure: k5329 
o|contracted procedure: k5379 
o|contracted procedure: k5370 
o|contracted procedure: k5388 
o|contracted procedure: k5398 
o|contracted procedure: k5402 
o|contracted procedure: k5406 
o|contracted procedure: k5410 
o|contracted procedure: k5607 
o|contracted procedure: k5422 
o|contracted procedure: k5437 
o|contracted procedure: k5440 
o|contracted procedure: k5451 
o|contracted procedure: k5474 
o|contracted procedure: k5477 
o|contracted procedure: k5488 
o|contracted procedure: k5500 
o|contracted procedure: k5534 
o|contracted procedure: k5538 
o|contracted procedure: k5552 
o|contracted procedure: k5569 
o|contracted procedure: k5575 
o|contracted procedure: k5586 
o|contracted procedure: k5590 
o|contracted procedure: k5594 
o|contracted procedure: k5600 
o|contracted procedure: k5744 
o|contracted procedure: k5622 
o|contracted procedure: k5664 
o|contracted procedure: k5648 
o|contracted procedure: k5652 
o|contracted procedure: k5676 
o|contracted procedure: k5679 
o|contracted procedure: k5690 
o|contracted procedure: k5702 
o|contracted procedure: k5710 
o|contracted procedure: k5717 
o|contracted procedure: k5740 
o|contracted procedure: k5736 
o|contracted procedure: k5732 
o|contracted procedure: k5757 
o|contracted procedure: k5789 
o|contracted procedure: k5799 
o|contracted procedure: k5843 
o|contracted procedure: k5839 
o|contracted procedure: k5858 
o|contracted procedure: k5849 
o|contracted procedure: k5897 
o|contracted procedure: k5867 
o|contracted procedure: k5888 
o|contracted procedure: k5879 
o|contracted procedure: k5909 
o|contracted procedure: k5938 
o|contracted procedure: k5929 
o|contracted procedure: k5973 
o|contracted procedure: k5979 
o|contracted procedure: k5997 
o|contracted procedure: k5990 
o|contracted procedure: k6015 
o|contracted procedure: k6018 
o|contracted procedure: k6029 
o|contracted procedure: k6041 
o|contracted procedure: k6056 
o|contracted procedure: k6059 
o|contracted procedure: k6203 
o|contracted procedure: k6130 
o|contracted procedure: k6133 
o|contracted procedure: k6182 
o|contracted procedure: k6173 
o|contracted procedure: k6199 
o|contracted procedure: k6190 
o|contracted procedure: k6136 
o|contracted procedure: k6148 
o|contracted procedure: k6158 
o|contracted procedure: k6162 
o|contracted procedure: k6211 
o|contracted procedure: k6214 
o|contracted procedure: k6240 
o|contracted procedure: k6289 
o|contracted procedure: k6326 
o|contracted procedure: k6335 
o|contracted procedure: k6372 
o|contracted procedure: k6378 
o|contracted procedure: k6384 
o|contracted procedure: k6390 
o|contracted procedure: k6427 
o|contracted procedure: k6439 
o|contracted procedure: k6449 
o|contracted procedure: k6453 
o|contracted procedure: k6410 
o|contracted procedure: k6424 
o|propagated global variable: g932934 ##compiler#simplified-ops 
o|contracted procedure: k6456 
o|contracted procedure: k6484 
o|contracted procedure: k6500 
o|contracted procedure: k6508 
o|contracted procedure: k6744 
o|contracted procedure: k6740 
o|contracted procedure: k6511 
o|contracted procedure: k6684 
o|contracted procedure: k6526 
o|contracted procedure: k6675 
o|contracted procedure: k6529 
o|contracted procedure: k6537 
o|contracted procedure: k6546 
o|contracted procedure: k6633 
o|contracted procedure: k6558 
o|contracted procedure: k6568 
o|contracted procedure: k6588 
o|contracted procedure: k6584 
o|contracted procedure: k6624 
o|contracted procedure: k6599 
o|contracted procedure: k6615 
o|contracted procedure: k6606 
o|contracted procedure: k6656 
o|contracted procedure: k6639 
o|contracted procedure: k6651 
o|contracted procedure: k6659 
o|contracted procedure: k6666 
o|contracted procedure: k6721 
o|contracted procedure: k6693 
o|contracted procedure: k6716 
o|contracted procedure: k6699 
o|contracted procedure: k6711 
o|contracted procedure: k6750 
o|contracted procedure: k6753 
o|contracted procedure: k6765 
o|contracted procedure: k6775 
o|contracted procedure: k6779 
o|contracted procedure: k6800 
o|contracted procedure: k6803 
o|contracted procedure: k6850 
o|contracted procedure: k6846 
o|contracted procedure: k6824 
o|contracted procedure: k6827 
o|contracted procedure: k6833 
o|contracted procedure: k6856 
o|contracted procedure: k6920 
o|contracted procedure: k6894 
o|contracted procedure: k6878 
o|contracted procedure: k6886 
o|contracted procedure: k6916 
o|contracted procedure: k6928 
o|contracted procedure: k6935 
o|contracted procedure: k6963 
o|contracted procedure: k6959 
o|contracted procedure: k6980 
o|contracted procedure: k6995 
o|contracted procedure: k7150 
o|contracted procedure: k7010 
o|contracted procedure: k7013 
o|contracted procedure: k7023 
o|contracted procedure: k7043 
o|contracted procedure: k7039 
o|contracted procedure: k7035 
o|contracted procedure: k7061 
o|contracted procedure: k7074 
o|contracted procedure: k7065 
o|contracted procedure: k7093 
o|contracted procedure: k7110 
o|contracted procedure: k7122 
o|contracted procedure: k7118 
o|contracted procedure: k7114 
o|contracted procedure: k7106 
o|contracted procedure: k7097 
o|contracted procedure: k7129 
o|contracted procedure: k7144 
o|contracted procedure: k7140 
o|contracted procedure: k7136 
o|contracted procedure: k7159 
o|contracted procedure: k7169 
o|contracted procedure: k7173 
o|contracted procedure: k7182 
o|contracted procedure: k7192 
o|contracted procedure: k7196 
o|contracted procedure: k7230 
o|contracted procedure: k7205 
o|contracted procedure: k7215 
o|contracted procedure: k7219 
o|contracted procedure: k7223 
o|contracted procedure: k7227 
o|contracted procedure: k7279 
o|contracted procedure: k7242 
o|contracted procedure: k7272 
o|contracted procedure: k7276 
o|contracted procedure: k7268 
o|contracted procedure: k7245 
o|contracted procedure: k7256 
o|contracted procedure: k7260 
o|contracted procedure: k7295 
o|contracted procedure: k7306 
o|contracted procedure: k7315 
o|contracted procedure: k7330 
o|contracted procedure: k7346 
o|contracted procedure: k7353 
o|contracted procedure: k7395 
o|contracted procedure: k7427 
o|contracted procedure: k7448 
o|contracted procedure: k7444 
o|contracted procedure: k7440 
o|contracted procedure: k7431 
o|contracted procedure: k7535 
o|contracted procedure: k7539 
o|contracted procedure: k7451 
o|contracted procedure: k7454 
o|contracted procedure: k7457 
o|contracted procedure: k7531 
o|contracted procedure: k7463 
o|contracted procedure: k7522 
o|contracted procedure: k7469 
o|contracted procedure: k7504 
o|contracted procedure: k7513 
o|contracted procedure: k7475 
o|contracted procedure: k7487 
o|contracted procedure: k7491 
o|contracted procedure: k7545 
o|contracted procedure: k7613 
o|contracted procedure: k7617 
o|contracted procedure: k7554 
o|contracted procedure: k7571 
o|contracted procedure: k7574 
o|contracted procedure: k7577 
o|contracted procedure: k7589 
o|contracted procedure: k7606 
o|contracted procedure: k7602 
o|contracted procedure: k7593 
o|contracted procedure: k7623 
o|contracted procedure: k7709 
o|contracted procedure: k7643 
o|contracted procedure: k7664 
o|contracted procedure: k7668 
o|contracted procedure: k7685 
o|contracted procedure: k7689 
o|contracted procedure: k7681 
o|contracted procedure: k7702 
o|contracted procedure: k7715 
o|contracted procedure: k7785 
o|contracted procedure: k7727 
o|contracted procedure: k7780 
o|contracted procedure: k7750 
o|contracted procedure: k7762 
o|contracted procedure: k7770 
o|contracted procedure: k7754 
o|contracted procedure: k7774 
o|contracted procedure: k7791 
o|contracted procedure: k7877 
o|contracted procedure: k7811 
o|contracted procedure: k7817 
o|contracted procedure: k7820 
o|contracted procedure: k7823 
o|contracted procedure: k7835 
o|contracted procedure: k7852 
o|contracted procedure: k7860 
o|contracted procedure: k7856 
o|contracted procedure: k7848 
o|contracted procedure: k7839 
o|contracted procedure: k7883 
o|contracted procedure: k7889 
o|contracted procedure: k7892 
o|contracted procedure: k7969 
o|contracted procedure: k7901 
o|contracted procedure: k7924 
o|contracted procedure: k7941 
o|contracted procedure: k7962 
o|contracted procedure: k7958 
o|contracted procedure: k7954 
o|contracted procedure: k7945 
o|contracted procedure: k7937 
o|contracted procedure: k7928 
o|contracted procedure: k7975 
o|contracted procedure: k7981 
o|contracted procedure: k7984 
o|contracted procedure: k8057 
o|contracted procedure: k7993 
o|contracted procedure: k8016 
o|contracted procedure: k8053 
o|contracted procedure: k8033 
o|contracted procedure: k8029 
o|contracted procedure: k8020 
o|contracted procedure: k8041 
o|contracted procedure: k8049 
o|contracted procedure: k8065 
o|contracted procedure: k8082 
o|contracted procedure: k8091 
o|contracted procedure: k8330 
o|contracted procedure: k8111 
o|contracted procedure: k8123 
o|contracted procedure: k8127 
o|contracted procedure: k8151 
o|contracted procedure: k8172 
o|contracted procedure: k8176 
o|contracted procedure: k8189 
o|contracted procedure: k8222 
o|contracted procedure: k8219 
o|contracted procedure: k8197 
o|contracted procedure: k8193 
o|contracted procedure: k8185 
o|contracted procedure: k8215 
o|contracted procedure: k8237 
o|contracted procedure: k8240 
o|contracted procedure: k8251 
o|contracted procedure: k8263 
o|contracted procedure: k8272 
o|contracted procedure: k8275 
o|contracted procedure: k8286 
o|contracted procedure: k8316 
o|contracted procedure: k8301 
o|contracted procedure: k8310 
o|contracted procedure: k8326 
o|contracted procedure: k8337 
o|contracted procedure: k8346 
o|contracted procedure: k8349 
o|contracted procedure: k8363 
o|contracted procedure: k8381 
o|contracted procedure: k8393 
o|contracted procedure: k8385 
o|contracted procedure: k8404 
o|contracted procedure: k8411 
o|contracted procedure: k8420 
o|contracted procedure: k8430 
o|contracted procedure: k8439 
o|contracted procedure: k8442 
o|contracted procedure: k8460 
o|contracted procedure: k8490 
o|contracted procedure: k8475 
o|contracted procedure: k8497 
o|contracted procedure: k8505 
o|contracted procedure: k8525 
o|contracted procedure: k8528 
o|contracted procedure: k8531 
o|contracted procedure: k8589 
o|contracted procedure: k8537 
o|contracted procedure: k8543 
o|contracted procedure: k8555 
o|contracted procedure: k8559 
o|contracted procedure: k8571 
o|contracted procedure: k8595 
o|contracted procedure: k8615 
o|contracted procedure: k8618 
o|contracted procedure: k8627 
o|contracted procedure: k8656 
o|contracted procedure: k8652 
o|contracted procedure: k8659 
o|contracted procedure: k8672 
o|contracted procedure: k8753 
o|contracted procedure: k8757 
o|contracted procedure: k8681 
o|contracted procedure: k8698 
o|contracted procedure: k8704 
o|contracted procedure: k8707 
o|contracted procedure: k8719 
o|contracted procedure: k8732 
o|contracted procedure: k8723 
o|contracted procedure: k8763 
o|contracted procedure: k8861 
o|contracted procedure: k8772 
o|contracted procedure: k8778 
o|contracted procedure: k8853 
o|contracted procedure: k8795 
o|contracted procedure: k8823 
o|contracted procedure: k8807 
o|contracted procedure: k8849 
o|contracted procedure: k8829 
o|contracted procedure: k8841 
o|contracted procedure: k8845 
o|contracted procedure: k8867 
o|contracted procedure: k8870 
o|contracted procedure: k8873 
o|contracted procedure: k8876 
o|contracted procedure: k8879 
o|contracted procedure: k8891 
o|contracted procedure: k8894 
o|contracted procedure: k8911 
o|contracted procedure: k8923 
o|contracted procedure: k8936 
o|contracted procedure: k8927 
o|contracted procedure: k8951 
o|inlining procedure: k8948 
o|contracted procedure: k8960 
o|contracted procedure: k8973 
o|contracted procedure: k8969 
o|inlining procedure: k8948 
o|contracted procedure: k8976 
o|contracted procedure: k8983 
o|contracted procedure: k9008 
o|contracted procedure: k9001 
o|contracted procedure: k9014 
o|contracted procedure: k9087 
o|contracted procedure: k9091 
o|contracted procedure: k9023 
o|contracted procedure: k9046 
o|contracted procedure: k9063 
o|contracted procedure: k9059 
o|contracted procedure: k9050 
o|contracted procedure: k9083 
o|contracted procedure: k9070 
o|contracted procedure: k9097 
o|contracted procedure: k9106 
o|contracted procedure: k9129 
o|contracted procedure: k9133 
o|contracted procedure: k9141 
o|contracted procedure: k9147 
o|contracted procedure: k9164 
o|contracted procedure: k9167 
o|contracted procedure: k9176 
o|contracted procedure: k9188 
o|contracted procedure: k9192 
o|contracted procedure: k9275 
o|contracted procedure: k9202 
o|contracted procedure: k9214 
o|contracted procedure: k9218 
o|contracted procedure: k9226 
o|contracted procedure: k9229 
o|contracted procedure: k9241 
o|contracted procedure: k9245 
o|contracted procedure: k9264 
o|contracted procedure: k9268 
o|contracted procedure: k9309 
o|contracted procedure: k9284 
o|contracted procedure: k9300 
o|contracted procedure: k9291 
o|contracted procedure: k9321 
o|contracted procedure: k9324 
o|contracted procedure: k9330 
o|contracted procedure: k9333 
o|contracted procedure: k9342 
o|contracted procedure: k9365 
o|contracted procedure: k9418 
o|contracted procedure: k9382 
o|contracted procedure: k9378 
o|contracted procedure: k9369 
o|contracted procedure: k9396 
o|contracted procedure: k9406 
o|contracted procedure: k9414 
o|contracted procedure: k9426 
o|contracted procedure: k9443 
o|contracted procedure: k9449 
o|contracted procedure: k9461 
o|contracted procedure: k9473 
o|contracted procedure: k9477 
o|contracted procedure: k9570 
o|contracted procedure: k9487 
o|contracted procedure: k9499 
o|contracted procedure: k9503 
o|contracted procedure: k9517 
o|contracted procedure: k9521 
o|contracted procedure: k9534 
o|contracted procedure: k9546 
o|contracted procedure: k9550 
o|contracted procedure: k9562 
o|contracted procedure: k9566 
o|contracted procedure: k9604 
o|contracted procedure: k9579 
o|contracted procedure: k9595 
o|contracted procedure: k9586 
o|contracted procedure: k9615 
o|contracted procedure: k9618 
o|contracted procedure: k9621 
o|contracted procedure: k9624 
o|contracted procedure: k9633 
o|contracted procedure: k9650 
o|contracted procedure: k9653 
o|contracted procedure: k9665 
o|contracted procedure: k9669 
o|contracted procedure: k9676 
o|contracted procedure: k9688 
o|contracted procedure: k9708 
o|contracted procedure: k9704 
o|contracted procedure: k9714 
o|contracted procedure: k9731 
o|contracted procedure: k9847 
o|contracted procedure: k9737 
o|contracted procedure: k9843 
o|contracted procedure: k9749 
o|contracted procedure: k9781 
o|contracted procedure: k9790 
o|contracted procedure: k9796 
o|contracted procedure: k9813 
o|contracted procedure: k7362 
o|contracted procedure: k7378 
o|contracted procedure: k7384 
o|contracted procedure: k9819 
o|contracted procedure: k9826 
o|contracted procedure: k9836 
o|contracted procedure: k9912 
o|contracted procedure: k9920 
o|contracted procedure: k9928 
o|contracted procedure: k9934 
o|contracted procedure: k9937 
o|contracted procedure: k9953 
o|contracted procedure: k9970 
o|contracted procedure: k9994 
o|contracted procedure: k10025 
o|contracted procedure: k10029 
o|contracted procedure: k10006 
o|contracted procedure: k10013 
o|contracted procedure: k10017 
o|contracted procedure: k10021 
o|contracted procedure: k10051 
o|contracted procedure: k10042 
o|contracted procedure: k10061 
o|contracted procedure: k10068 
o|contracted procedure: k10072 
o|contracted procedure: k10078 
o|contracted procedure: k10088 
o|contracted procedure: k10092 
o|contracted procedure: k10096 
o|contracted procedure: k10104 
o|contracted procedure: k10116 
o|contracted procedure: k10126 
o|contracted procedure: k10130 
o|contracted procedure: k10150 
o|contracted procedure: k10158 
o|contracted procedure: k10166 
o|contracted procedure: k10172 
o|contracted procedure: k10175 
o|contracted procedure: k10178 
o|contracted procedure: k10201 
o|contracted procedure: k10184 
o|contracted procedure: k10197 
o|contracted procedure: k10211 
o|contracted procedure: k10221 
o|contracted procedure: k10228 
o|contracted procedure: k10235 
o|contracted procedure: k10245 
o|contracted procedure: k10268 
o|contracted procedure: k10255 
o|contracted procedure: k10274 
o|contracted procedure: k10286 
o|contracted procedure: k10290 
o|contracted procedure: k10298 
o|contracted procedure: k10304 
o|contracted procedure: k10313 
o|contracted procedure: k10335 
o|contracted procedure: k10339 
o|contracted procedure: k10345 
o|contracted procedure: k10354 
o|contracted procedure: k10376 
o|contracted procedure: k10380 
o|contracted procedure: k10386 
o|contracted procedure: k10389 
o|contracted procedure: k10481 
o|contracted procedure: k10395 
o|contracted procedure: k10472 
o|contracted procedure: k10401 
o|contracted procedure: k10418 
o|contracted procedure: k10424 
o|contracted procedure: k10427 
o|contracted procedure: k10460 
o|contracted procedure: k10434 
o|contracted procedure: k10451 
o|contracted procedure: k10442 
o|contracted procedure: k10438 
o|contracted procedure: k10487 
o|contracted procedure: k10490 
o|contracted procedure: k10493 
o|contracted procedure: k10506 
o|contracted procedure: k10521 
o|contracted procedure: k10528 
o|contracted procedure: k10532 
o|contracted procedure: k10538 
o|contracted procedure: k10551 
o|contracted procedure: k10559 
o|contracted procedure: k10563 
o|contracted procedure: k10623 
o|contracted procedure: k11305 
o|contracted procedure: k10626 
o|contracted procedure: k10632 
o|contracted procedure: k10648 
o|contracted procedure: k10659 
o|contracted procedure: k10667 
o|contracted procedure: k10681 
o|contracted procedure: k10694 
o|contracted procedure: k10698 
o|contracted procedure: k10690 
o|contracted procedure: k10677 
o|contracted procedure: k10718 
o|contracted procedure: k10714 
o|contracted procedure: k10706 
o|contracted procedure: k10730 
o|contracted procedure: k10738 
o|contracted procedure: k10796 
o|contracted procedure: k10806 
o|contracted procedure: k10810 
o|contracted procedure: k10752 
o|contracted procedure: k10767 
o|contracted procedure: k10776 
o|contracted procedure: k10780 
o|contracted procedure: k10883 
o|contracted procedure: k10825 
o|contracted procedure: k10877 
o|contracted procedure: k10829 
o|contracted procedure: k10850 
o|contracted procedure: k10859 
o|contracted procedure: k10868 
o|contracted procedure: k10841 
o|contracted procedure: k10832 
o|contracted procedure: k10895 
o|contracted procedure: k10905 
o|contracted procedure: k10909 
o|contracted procedure: k10919 
o|contracted procedure: k10923 
o|contracted procedure: k11275 
o|contracted procedure: k10927 
o|contracted procedure: k10938 
o|contracted procedure: k10946 
o|contracted procedure: k10954 
o|contracted procedure: k10960 
o|contracted procedure: k10963 
o|contracted procedure: k10966 
o|contracted procedure: k10974 
o|contracted procedure: k10982 
o|contracted procedure: k11175 
o|contracted procedure: k10988 
o|contracted procedure: k11166 
o|contracted procedure: k10994 
o|contracted procedure: k10998 
o|contracted procedure: k11140 
o|contracted procedure: k11004 
o|contracted procedure: k11020 
o|contracted procedure: k11024 
o|contracted procedure: k11035 
o|contracted procedure: k11027 
o|contracted procedure: k11040 
o|contracted procedure: k11048 
o|contracted procedure: k11128 
o|contracted procedure: k11051 
o|contracted procedure: k11083 
o|contracted procedure: k11087 
o|contracted procedure: k11079 
o|contracted procedure: k11070 
o|contracted procedure: k11104 
o|contracted procedure: k11095 
o|contracted procedure: k11119 
o|contracted procedure: k11115 
o|contracted procedure: k11107 
o|contracted procedure: k11146 
o|contracted procedure: k11181 
o|contracted procedure: k11184 
o|contracted procedure: k11187 
o|contracted procedure: k11193 
o|contracted procedure: k11197 
o|contracted procedure: k11207 
o|contracted procedure: k11219 
o|contracted procedure: k11229 
o|contracted procedure: k11233 
o|contracted procedure: k11236 
o|contracted procedure: k11248 
o|contracted procedure: k11258 
o|contracted procedure: k11262 
o|contracted procedure: k11285 
o|contracted procedure: k11291 
o|contracted procedure: k11298 
o|contracted procedure: k11308 
o|contracted procedure: k11330 
o|contracted procedure: k11355 
o|contracted procedure: k11371 
o|contracted procedure: k11363 
o|contracted procedure: k11367 
o|contracted procedure: k11417 
o|contracted procedure: k11425 
o|contracted procedure: k11433 
o|contracted procedure: k11439 
o|contracted procedure: k11442 
o|contracted procedure: k11445 
o|contracted procedure: k11448 
o|contracted procedure: k11462 
o|contracted procedure: k11472 
o|contracted procedure: k11479 
o|contracted procedure: k11492 
o|contracted procedure: k11583 
o|contracted procedure: k11498 
o|contracted procedure: k11574 
o|contracted procedure: k11501 
o|contracted procedure: k11565 
o|contracted procedure: k11504 
o|contracted procedure: k11556 
o|contracted procedure: k11510 
o|contracted procedure: k11522 
o|contracted procedure: k11406 
o|contracted procedure: k11381 
o|contracted procedure: k11397 
o|contracted procedure: k11388 
o|contracted procedure: k11533 
o|contracted procedure: k11598 
o|contracted procedure: k11604 
o|contracted procedure: k11607 
o|contracted procedure: k11614 
o|contracted procedure: k11637 
o|contracted procedure: k11655 
o|contracted procedure: k11667 
o|contracted procedure: k11677 
o|contracted procedure: k11681 
o|contracted procedure: k11701 
o|contracted procedure: k11823 
o|contracted procedure: k11713 
o|contracted procedure: k11814 
o|contracted procedure: k11716 
o|contracted procedure: k11724 
o|contracted procedure: k11727 
o|contracted procedure: k11730 
o|contracted procedure: k11770 
o|contracted procedure: k11742 
o|contracted procedure: k11746 
o|contracted procedure: k11761 
o|contracted procedure: k11779 
o|contracted procedure: k11782 
o|contracted procedure: k11793 
o|contracted procedure: k11805 
o|contracted procedure: k11826 
o|contracted procedure: k11854 
o|contracted procedure: k11929 
o|contracted procedure: k11857 
o|contracted procedure: k11878 
o|contracted procedure: k11869 
o|contracted procedure: k11898 
o|contracted procedure: k11906 
o|contracted procedure: k11920 
o|contracted procedure: k11910 
o|contracted procedure: k11932 
o|contracted procedure: k11944 
o|contracted procedure: k11954 
o|contracted procedure: k11958 
o|contracted procedure: k11962 
o|contracted procedure: k11974 
o|contracted procedure: k11984 
o|contracted procedure: k11988 
o|contracted procedure: k12291 
o|contracted procedure: k11994 
o|contracted procedure: k12019 
o|contracted procedure: k12032 
o|contracted procedure: k12045 
o|contracted procedure: k12101 
o|contracted procedure: k12118 
o|contracted procedure: k12238 
o|contracted procedure: k12135 
o|contracted procedure: k12131 
o|contracted procedure: k12122 
o|contracted procedure: k12114 
o|contracted procedure: k12105 
o|contracted procedure: k12058 
o|contracted procedure: k12067 
o|contracted procedure: k12049 
o|contracted procedure: k12041 
o|contracted procedure: k12023 
o|contracted procedure: k12015 
o|contracted procedure: k12087 
o|contracted procedure: k12143 
o|contracted procedure: k12160 
o|contracted procedure: k12151 
o|contracted procedure: k12178 
o|contracted procedure: k12187 
o|contracted procedure: k12226 
o|contracted procedure: k12202 
o|contracted procedure: k12206 
o|contracted procedure: k12222 
o|contracted procedure: k12230 
o|contracted procedure: k12282 
o|contracted procedure: k12249 
o|contracted procedure: k12273 
o|contracted procedure: k12252 
o|contracted procedure: k12264 
o|contracted procedure: k12304 
o|contracted procedure: k12330 
o|contracted procedure: k12326 
o|contracted procedure: k12307 
o|contracted procedure: k12318 
o|contracted procedure: k12338 
o|contracted procedure: k12357 
o|contracted procedure: k12369 
o|contracted procedure: k12372 
o|contracted procedure: k12383 
o|contracted procedure: k12395 
o|contracted procedure: k12354 
o|contracted procedure: k12404 
o|contracted procedure: k12407 
o|contracted procedure: k12418 
o|contracted procedure: k12430 
o|contracted procedure: k12433 
o|contracted procedure: k12443 
o|contracted procedure: k12452 
o|contracted procedure: k12462 
o|contracted procedure: k12466 
o|contracted procedure: k12677 
o|contracted procedure: k12673 
o|contracted procedure: k12657 
o|contracted procedure: k12669 
o|contracted procedure: k12665 
o|contracted procedure: k12661 
o|contracted procedure: k12614 
o|contracted procedure: k12618 
o|contracted procedure: k12653 
o|contracted procedure: k12649 
o|contracted procedure: k12636 
o|contracted procedure: k12470 
o|contracted procedure: k12602 
o|contracted procedure: k12610 
o|contracted procedure: k12606 
o|contracted procedure: k12598 
o|contracted procedure: k12478 
o|contracted procedure: k12482 
o|contracted procedure: k12488 
o|contracted procedure: k12497 
o|contracted procedure: k12594 
o|contracted procedure: k12503 
o|contracted procedure: k12590 
o|contracted procedure: k12509 
o|contracted procedure: k12521 
o|contracted procedure: k12538 
o|contracted procedure: k12534 
o|contracted procedure: k12525 
o|contracted procedure: k12574 
o|contracted procedure: k12566 
o|contracted procedure: k12557 
o|contracted procedure: k12474 
o|contracted procedure: k13358 
o|contracted procedure: k13422 
o|contracted procedure: k13438 
o|contracted procedure: k13426 
o|contracted procedure: k13434 
o|contracted procedure: k13430 
o|contracted procedure: k13362 
o|contracted procedure: k13418 
o|contracted procedure: k13370 
o|contracted procedure: k13378 
o|contracted procedure: k13398 
o|contracted procedure: k13414 
o|contracted procedure: k13402 
o|contracted procedure: k13410 
o|contracted procedure: k13406 
o|contracted procedure: k13382 
o|contracted procedure: k13394 
o|contracted procedure: k13390 
o|contracted procedure: k13386 
o|contracted procedure: k13374 
o|contracted procedure: k13366 
o|contracted procedure: k13275 
o|contracted procedure: k13279 
o|contracted procedure: k13288 
o|contracted procedure: k13350 
o|contracted procedure: k13306 
o|contracted procedure: k13341 
o|contracted procedure: k13312 
o|contracted procedure: k13324 
o|contracted procedure: k12681 
o|contracted procedure: k13211 
o|contracted procedure: k13255 
o|contracted procedure: k13271 
o|contracted procedure: k13259 
o|contracted procedure: k13267 
o|contracted procedure: k13263 
o|contracted procedure: k13215 
o|contracted procedure: k13251 
o|contracted procedure: k13223 
o|contracted procedure: k13235 
o|contracted procedure: k13247 
o|contracted procedure: k13243 
o|contracted procedure: k13239 
o|contracted procedure: k13231 
o|contracted procedure: k13227 
o|contracted procedure: k13219 
o|contracted procedure: k13145 
o|contracted procedure: k13149 
o|contracted procedure: k13158 
o|contracted procedure: k13203 
o|contracted procedure: k13170 
o|contracted procedure: k13198 
o|contracted procedure: k13182 
o|contracted procedure: k12685 
o|contracted procedure: k13137 
o|contracted procedure: k13141 
o|contracted procedure: k12786 
o|contracted procedure: k12790 
o|contracted procedure: k12800 
o|contracted procedure: k12811 
o|contracted procedure: k12819 
o|contracted procedure: k12827 
o|contracted procedure: k12833 
o|contracted procedure: k13133 
o|contracted procedure: k12839 
o|contracted procedure: k12854 
o|contracted procedure: k12862 
o|contracted procedure: k12870 
o|contracted procedure: k12878 
o|contracted procedure: k12884 
o|contracted procedure: k12891 
o|contracted procedure: k12895 
o|contracted procedure: k12903 
o|contracted procedure: k12912 
o|contracted procedure: k13111 
o|contracted procedure: k12918 
o|contracted procedure: k13107 
o|contracted procedure: k12925 
o|contracted procedure: k12931 
o|contracted procedure: k12942 
o|contracted procedure: k12950 
o|contracted procedure: k12958 
o|contracted procedure: k12996 
o|contracted procedure: k12992 
o|contracted procedure: k12983 
o|contracted procedure: k12971 
o|contracted procedure: k12975 
o|contracted procedure: k12979 
o|contracted procedure: k13002 
o|contracted procedure: k13024 
o|contracted procedure: k13103 
o|contracted procedure: k13030 
o|contracted procedure: k13048 
o|contracted procedure: k13087 
o|contracted procedure: k13083 
o|contracted procedure: k13054 
o|contracted procedure: k13072 
o|contracted procedure: k13063 
o|contracted procedure: k12689 
o|contracted procedure: k12758 
o|contracted procedure: k12782 
o|contracted procedure: k12778 
o|contracted procedure: k12762 
o|contracted procedure: k12774 
o|contracted procedure: k12770 
o|contracted procedure: k12766 
o|contracted procedure: k12697 
o|contracted procedure: k12701 
o|contracted procedure: k12754 
o|contracted procedure: k12746 
o|contracted procedure: k12716 
o|contracted procedure: k12741 
o|contracted procedure: k12737 
o|contracted procedure: k12728 
o|contracted procedure: k12693 
o|contracted procedure: k13536 
o|contracted procedure: k13528 
o|contracted procedure: k13532 
o|contracted procedure: k13524 
o|contracted procedure: k13520 
o|contracted procedure: k13446 
o|contracted procedure: k13450 
o|contracted procedure: k13463 
o|contracted procedure: k13472 
o|contracted procedure: k13483 
o|contracted procedure: k13497 
o|contracted procedure: k13493 
o|contracted procedure: k13486 
o|contracted procedure: k13501 
o|contracted procedure: k13513 
o|contracted procedure: k13442 
o|simplifications: ((let . 122)) 
o|removed binding forms: 1098 
o|inlining procedure: k4254 
o|inlining procedure: k4254 
o|inlining procedure: k4707 
o|inlining procedure: k4707 
o|inlining procedure: k5480 
o|inlining procedure: k5480 
o|inlining procedure: k5682 
o|inlining procedure: k5682 
o|inlining procedure: k5714 
o|inlining procedure: k6021 
o|inlining procedure: k6021 
o|inlining procedure: k8243 
o|inlining procedure: k8243 
o|inlining procedure: k8278 
o|inlining procedure: k8278 
o|inlining procedure: k9673 
o|inlining procedure: k9673 
o|inlining procedure: k11785 
o|inlining procedure: k11785 
o|inlining procedure: k12310 
o|inlining procedure: k12310 
o|inlining procedure: k12375 
o|inlining procedure: k12375 
o|inlining procedure: k12410 
o|inlining procedure: k12410 
o|replaced variables: 248 
o|removed binding forms: 1 
o|simplifications: ((if . 1)) 
o|replaced variables: 3 
o|removed binding forms: 193 
o|contracted procedure: k4329 
o|contracted procedure: k4346 
o|contracted procedure: k12391 
o|replaced variables: 44 
o|removed binding forms: 4 
o|removed binding forms: 11 
o|direct leaf routine/allocation: touch30 0 
o|direct leaf routine/allocation: touch168 0 
o|direct leaf routine/allocation: for-each-loop188206 0 
o|direct leaf routine/allocation: g231240 0 
o|direct leaf routine/allocation: touch965 0 
o|direct leaf routine/allocation: close2564 6 
o|direct leaf routine/allocation: g10721073 10 
o|contracted procedure: "(optimizer.scm:76) k3851" 
o|converted assignments to bindings: (for-each-loop188206) 
o|contracted procedure: "(optimizer.scm:162) k4201" 
o|contracted procedure: "(optimizer.scm:162) k420114203" 
o|contracted procedure: "(optimizer.scm:156) k4270" 
o|contracted procedure: "(optimizer.scm:179) k4336" 
o|contracted procedure: "(optimizer.scm:202) k4406" 
o|contracted procedure: "(optimizer.scm:232) k4543" 
o|contracted procedure: "(optimizer.scm:236) k4575" 
o|contracted procedure: "(optimizer.scm:254) k4661" 
o|contracted procedure: "(optimizer.scm:274) k4838" 
o|contracted procedure: "(optimizer.scm:290) k4919" 
o|contracted procedure: "(optimizer.scm:325) k5045" 
o|contracted procedure: "(optimizer.scm:393) k5363" 
o|contracted procedure: "(optimizer.scm:400) k5443" 
o|contracted procedure: "(optimizer.scm:409) k5513" 
o|contracted procedure: "(optimizer.scm:475) k6068" 
o|contracted procedure: "(optimizer.scm:480) k6094" 
o|contracted procedure: "(optimizer.scm:487) k6111" 
o|contracted procedure: "(optimizer.scm:1637) k11482" 
o|contracted procedure: "(optimizer.scm:1650) k11647" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 20 
o|replaced variables: 4 
o|removed binding forms: 2 
o|customizable procedures: (loop1064 k12964 loop21172 loop11132 g26922699 for-each-loop26912969 g27162725 map-loop27102783 map-loop27942814 map-loop28252842 k12000 loop2897 descend2849 g29192926 for-each-loop29182962 g29332940 for-each-loop29322957 map-loop27442761 g26662673 for-each-loop26652683 k11454 k11529 k11516 k11468 walk2566 tmp13577 k10638 for-each-loop24342444 for-each-loop24172427 g23842385 g24562463 for-each-loop24552479 for-each-loop25192540 k10404 k10357 k10316 rec2218 g21962203 for-each-loop21952206 scan2152 walk2151 transform2153 k7371 loop2134 k9452 k9067 k8940 k8736 k8639 k8463 k8137 k8140 map-loop16991717 map-loop17271744 k7646 k7409 k7321 argc-ok?1489 k7248 map-loop12991318 g13311353 for-each-loop13301358 g13711378 for-each-loop13701386 g13951402 for-each-loop13941412 k7019 find-path1339 find1342 g976983 for-each-loop9751043 test966 k6523 k6543 k6555 k6564 for-each-loop925937 k6320 lp905 k6217 k6108 for-each-loop880892 g814823 map-loop808833 k5025 k5284 k5318 k5613 g746755 map-loop740770 loop660 g681690 map-loop675700 invalidate-gae!169 g624631 for-each-loop623641 k5161 k5116 g503510 for-each-loop502520 walk-generic174 k4658 k4675 g403412 map-loop397422 g354355 k4599 test165 g314315 replace-var172 walk1173 k4398 walk171 map-loop225243 simplify170 for-each-loop110141 k3845 k3946 mark28 remember29 scan-each31 k3818 k3801 g4350 for-each-loop4253 scan32 k3699) 
o|calls to known targets: 408 
o|identified direct recursive calls: f_4134 1 
o|identified direct recursive calls: f_4243 2 
o|identified direct recursive calls: f_9785 1 
o|identified direct recursive calls: f_9905 2 
o|identified direct recursive calls: f_10143 2 
o|unused rest argument: _2956 f_11914 
o|unused rest argument: _2914 f_12095 
o|identified direct recursive calls: f_12299 2 
o|unused rest argument: _2822 f_12342 
o|identified direct recursive calls: f_12364 2 
o|fast box initializations: 64 
o|dropping unused closure argument: f_4120 
o|dropping unused closure argument: f_4134 
*/
/* end of file */
