/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file batch-driver.c
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[409];
static double C_possibly_force_alignment;


C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5534)
static void C_ccall f5534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5546)
static void C_ccall f5546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5540)
static void C_ccall f5540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5464)
static void C_ccall f5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5592)
static void C_ccall f5592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5598)
static void C_ccall f5598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4012)
static void C_fcall f_4012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_fcall f_2143(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5586)
static void C_ccall f5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4035)
static void C_fcall f_4035(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2174)
static void C_fcall f_2174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_fcall f_2171(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_fcall f_2177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_fcall f_2168(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_fcall f_4068(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_fcall f_2098(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_fcall f_2095(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3737)
static void C_fcall f_3737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_fcall f_1808(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f5558)
static void C_ccall f5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5552)
static void C_ccall f5552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2029)
static void C_fcall f_2029(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f5568)
static void C_ccall f5568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3832)
static void C_fcall f_3832(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3697)
static void C_ccall f_3697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2031)
static void C_fcall f_2031(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_fcall f_2059(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2054)
static void C_fcall f_2054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2565)
static void C_fcall f_2565(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1831)
static void C_fcall f_1831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_fcall f_3706(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3772)
static void C_fcall f_3772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1854)
static void C_fcall f_1854(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_fcall f_3219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3637)
static void C_ccall f_3637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5055)
static void C_ccall f5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_fcall f_2390(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3661)
static void C_fcall f_3661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_fcall f_2486(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_fcall f_2480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_fcall f_3119(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2474)
static void C_ccall f_2474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_fcall f_2471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1979)
static void C_fcall f_1979(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_fcall f_3539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_fcall f_1989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_fcall f_2990(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3504)
static void C_fcall f_3504(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4549)
static void C_fcall f_4549(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_fcall f_1950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1688)
static void C_fcall f_1688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1958)
static void C_fcall f_1958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2180)
static void C_fcall f_2180(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_fcall f_2183(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_fcall f_2189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_fcall f_2186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_fcall f_2156(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_fcall f_2150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_fcall f_3574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_fcall f_2192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2198)
static void C_fcall f_2198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_fcall f_1714(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1633)
static void C_fcall f_1633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_fcall f_3013(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_fcall f_1759(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5604)
static void C_ccall f5604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5610)
static void C_ccall f5610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_fcall f_4324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_fcall f_3340(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4684)
static void C_fcall f_4684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_fcall f_1781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4611)
static void C_fcall f_4611(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_fcall f_4193(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_fcall f_3152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_fcall f_3399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_fcall f_1732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_fcall f_2588(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_fcall f_2337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4216)
static void C_fcall f_4216(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2362)
static void C_fcall f_2362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_fcall f_2218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_fcall f_2262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_fcall f_2265(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_fcall f_3065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2271)
static void C_fcall f_2271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_fcall f_2268(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2204)
static void C_fcall f_2204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_fcall f_2201(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_fcall f_2259(C_word t0,C_word t1) C_noret;
C_noret_decl(f5446)
static void C_ccall f5446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5440)
static void C_ccall f5440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_fcall f_2207(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5458)
static void C_ccall f5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5452)
static void C_ccall f5452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2223)
static void C_fcall f_2223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_fcall f_4263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_fcall f_2213(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2210)
static void C_fcall f_2210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_fcall f_2228(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5514)
static void C_ccall f5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5476)
static void C_ccall f5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5520)
static void C_ccall f5520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5484)
static void C_ccall f5484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5496)
static void C_ccall f5496(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4012)
static void C_fcall trf_4012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4012(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4012(t0,t1,t2);}

C_noret_decl(trf_2143)
static void C_fcall trf_2143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2143(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2143(t0,t1);}

C_noret_decl(trf_4035)
static void C_fcall trf_4035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4035(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4035(t0,t1,t2);}

C_noret_decl(trf_2174)
static void C_fcall trf_2174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2174(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2174(t0,t1);}

C_noret_decl(trf_2171)
static void C_fcall trf_2171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2171(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2171(t0,t1);}

C_noret_decl(trf_2177)
static void C_fcall trf_2177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2177(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2177(t0,t1);}

C_noret_decl(trf_2168)
static void C_fcall trf_2168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2168(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2168(t0,t1);}

C_noret_decl(trf_4068)
static void C_fcall trf_4068(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4068(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4068(t0,t1,t2);}

C_noret_decl(trf_2098)
static void C_fcall trf_2098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2098(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2098(t0,t1);}

C_noret_decl(trf_2095)
static void C_fcall trf_2095(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2095(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2095(t0,t1);}

C_noret_decl(trf_3737)
static void C_fcall trf_3737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3737(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3737(t0,t1,t2);}

C_noret_decl(trf_1808)
static void C_fcall trf_1808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1808(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1808(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2029)
static void C_fcall trf_2029(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2029(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2029(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3832)
static void C_fcall trf_3832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3832(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3832(t0,t1);}

C_noret_decl(trf_2031)
static void C_fcall trf_2031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2031(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2031(t0,t1,t2,t3);}

C_noret_decl(trf_2059)
static void C_fcall trf_2059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2059(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2059(t0,t1);}

C_noret_decl(trf_2054)
static void C_fcall trf_2054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2054(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2054(t0,t1,t2);}

C_noret_decl(trf_2565)
static void C_fcall trf_2565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2565(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2565(t0,t1);}

C_noret_decl(trf_1831)
static void C_fcall trf_1831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1831(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1831(t0,t1,t2);}

C_noret_decl(trf_3706)
static void C_fcall trf_3706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3706(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3706(t0,t1,t2);}

C_noret_decl(trf_3772)
static void C_fcall trf_3772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3772(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3772(t0,t1,t2);}

C_noret_decl(trf_1854)
static void C_fcall trf_1854(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1854(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1854(t0,t1);}

C_noret_decl(trf_3219)
static void C_fcall trf_3219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3219(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3219(t0,t1,t2);}

C_noret_decl(trf_2390)
static void C_fcall trf_2390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2390(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2390(t0,t1);}

C_noret_decl(trf_4725)
static void C_fcall trf_4725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4725(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4725(t0,t1,t2);}

C_noret_decl(trf_3661)
static void C_fcall trf_3661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3661(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3661(t0,t1,t2);}

C_noret_decl(trf_1944)
static void C_fcall trf_1944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1944(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1944(t0,t1,t2);}

C_noret_decl(trf_2486)
static void C_fcall trf_2486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2486(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2486(t0,t1);}

C_noret_decl(trf_2480)
static void C_fcall trf_2480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2480(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2480(t0,t1);}

C_noret_decl(trf_3119)
static void C_fcall trf_3119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3119(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3119(t0,t1,t2);}

C_noret_decl(trf_2471)
static void C_fcall trf_2471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2471(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2471(t0,t1);}

C_noret_decl(trf_1979)
static void C_fcall trf_1979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1979(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1979(t0,t1);}

C_noret_decl(trf_3539)
static void C_fcall trf_3539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3539(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3539(t0,t1,t2);}

C_noret_decl(trf_1989)
static void C_fcall trf_1989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1989(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1989(t0,t1,t2);}

C_noret_decl(trf_2990)
static void C_fcall trf_2990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2990(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2990(t0,t1,t2);}

C_noret_decl(trf_3440)
static void C_fcall trf_3440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3440(t0,t1,t2);}

C_noret_decl(trf_3504)
static void C_fcall trf_3504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3504(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3504(t0,t1,t2);}

C_noret_decl(trf_4549)
static void C_fcall trf_4549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4549(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4549(t0,t1,t2);}

C_noret_decl(trf_1950)
static void C_fcall trf_1950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1950(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1950(t0,t1,t2);}

C_noret_decl(trf_1688)
static void C_fcall trf_1688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1688(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1688(t0,t1);}

C_noret_decl(trf_1958)
static void C_fcall trf_1958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1958(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1958(t0,t1,t2);}

C_noret_decl(trf_2180)
static void C_fcall trf_2180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2180(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2180(t0,t1);}

C_noret_decl(trf_2183)
static void C_fcall trf_2183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2183(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2183(t0,t1);}

C_noret_decl(trf_2189)
static void C_fcall trf_2189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2189(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2189(t0,t1);}

C_noret_decl(trf_2186)
static void C_fcall trf_2186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2186(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2186(t0,t1);}

C_noret_decl(trf_2156)
static void C_fcall trf_2156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2156(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2156(t0,t1);}

C_noret_decl(trf_2150)
static void C_fcall trf_2150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2150(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2150(t0,t1);}

C_noret_decl(trf_3574)
static void C_fcall trf_3574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3574(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3574(t0,t1,t2);}

C_noret_decl(trf_2195)
static void C_fcall trf_2195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2195(t0,t1);}

C_noret_decl(trf_2192)
static void C_fcall trf_2192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2192(t0,t1);}

C_noret_decl(trf_2198)
static void C_fcall trf_2198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2198(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2198(t0,t1);}

C_noret_decl(trf_1714)
static void C_fcall trf_1714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1714(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1714(t0,t1);}

C_noret_decl(trf_1633)
static void C_fcall trf_1633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1633(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1633(t0,t1);}

C_noret_decl(trf_3013)
static void C_fcall trf_3013(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3013(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3013(t0,t1,t2);}

C_noret_decl(trf_1759)
static void C_fcall trf_1759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1759(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1759(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4324)
static void C_fcall trf_4324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4324(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4324(t0,t1,t2);}

C_noret_decl(trf_3340)
static void C_fcall trf_3340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3340(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3340(t0,t1,t2);}

C_noret_decl(trf_4684)
static void C_fcall trf_4684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4684(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4684(t0,t1,t2);}

C_noret_decl(trf_1781)
static void C_fcall trf_1781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1781(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1781(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4611)
static void C_fcall trf_4611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4611(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4611(t0,t1,t2);}

C_noret_decl(trf_4193)
static void C_fcall trf_4193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4193(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4193(t0,t1,t2);}

C_noret_decl(trf_3152)
static void C_fcall trf_3152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3152(t0,t1,t2);}

C_noret_decl(trf_3399)
static void C_fcall trf_3399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3399(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3399(t0,t1);}

C_noret_decl(trf_1732)
static void C_fcall trf_1732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1732(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1732(t0,t1,t2);}

C_noret_decl(trf_2588)
static void C_fcall trf_2588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2588(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2588(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2337)
static void C_fcall trf_2337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2337(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2337(t0,t1);}

C_noret_decl(trf_4216)
static void C_fcall trf_4216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4216(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4216(t0,t1,t2);}

C_noret_decl(trf_2362)
static void C_fcall trf_2362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2362(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2362(t0,t1);}

C_noret_decl(trf_2218)
static void C_fcall trf_2218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2218(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2218(t0,t1);}

C_noret_decl(trf_3977)
static void C_fcall trf_3977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3977(t0,t1,t2);}

C_noret_decl(trf_2262)
static void C_fcall trf_2262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2262(t0,t1);}

C_noret_decl(trf_2265)
static void C_fcall trf_2265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2265(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2265(t0,t1);}

C_noret_decl(trf_3065)
static void C_fcall trf_3065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3065(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3065(t0,t1,t2);}

C_noret_decl(trf_2271)
static void C_fcall trf_2271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2271(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2271(t0,t1);}

C_noret_decl(trf_2268)
static void C_fcall trf_2268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2268(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2268(t0,t1);}

C_noret_decl(trf_2204)
static void C_fcall trf_2204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2204(t0,t1);}

C_noret_decl(trf_2201)
static void C_fcall trf_2201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2201(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2201(t0,t1);}

C_noret_decl(trf_2259)
static void C_fcall trf_2259(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2259(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2259(t0,t1);}

C_noret_decl(trf_2207)
static void C_fcall trf_2207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2207(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2207(t0,t1);}

C_noret_decl(trf_2223)
static void C_fcall trf_2223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2223(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2223(t0,t1);}

C_noret_decl(trf_4263)
static void C_fcall trf_4263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4263(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4263(t0,t1,t2);}

C_noret_decl(trf_2213)
static void C_fcall trf_2213(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2213(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2213(t0,t1);}

C_noret_decl(trf_2210)
static void C_fcall trf_2210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2210(t0,t1);}

C_noret_decl(trf_2228)
static void C_fcall trf_2228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2228(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2228(t0,t1);}

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

/* k2844 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:645: debugging */
t3=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[34],lf[138]);}

/* k2847 in k2844 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:646: perform-secondary-flow-analysis */
t3=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);}

/* k2838 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:654: emit-global-inline-file */
t2=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f5534 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in ... */
static void C_ccall f5534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k2832 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in ... */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_greaterp(t2,C_fix(60000)))){
/* batch-driver.scm:662: display */
t3=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],lf[126]);}
else{
t3=((C_word*)t0)[3];
f_2747(2,t3,C_SCHEME_UNDEFINED);}}

/* k3859 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in ... */
static void C_ccall f_3861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3861,2,t0,t1);}
t2=t1;
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:405: collect-options */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1944(t6,t5,lf[253]);}

/* k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2101,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_mutate2((C_word*)lf[52]+1 /* (set! ##compiler#enable-specialization ...) */,C_u_i_memq(lf[53],t2));
t4=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2108,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4593,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4648,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:180: collect-options */
t7=((C_word*)((C_word*)t0)[24])[1];
f_1944(t7,t6,lf[390]);}

/* k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2108,2,t0,t1);}
t2=C_mutate2((C_word*)lf[28]+1 /* (set! ##compiler#debugging-chicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
if(C_truep(C_i_memq(lf[269],*((C_word*)lf[28]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4588,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:182: print-debug-options */
t5=*((C_word*)lf[388]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2111(2,t4,C_SCHEME_UNDEFINED);}}

/* f5546 in k3891 in k3885 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in ... */
static void C_ccall f5546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* f5540 in k3891 in k3885 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in ... */
static void C_ccall f5540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k3867 in k3859 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in ... */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:402: append */
t2=*((C_word*)lf[224]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f5464 in k2868 in k2865 in k2862 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in ... */
static void C_ccall f5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k2865 in k2862 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in ... */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[146],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:594: dump-global-refs */
t3=*((C_word*)lf[147]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t3=t2;
f_2870(2,t3,C_SCHEME_UNDEFINED);}}

/* k2862 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[148],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:592: dump-defined-globals */
t3=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t3=t2;
f_2867(2,t3,C_SCHEME_UNDEFINED);}}

/* k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 in ... */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2134,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[55]);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[37],a[3]=t5,a[4]=((C_word*)t0)[38],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4549(t7,t3,t1);}

/* f5592 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f5592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* f5598 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in ... */
static void C_ccall f5598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k4097 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in ... */
static void C_ccall f_4099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:308: append-map */
t2=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3885 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in ... */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3887,2,t0,t1);}
t2=C_set_block_item(lf[229] /* ##compiler#emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate2((C_word*)lf[274]+1 /* (set! ##compiler#profiled-procedures ...) */,lf[275]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:363: append */
t5=*((C_word*)lf[224]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[279]+1),lf[280]);}
else{
/* batch-driver.scm:363: append */
t5=*((C_word*)lf[224]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[279]+1),C_SCHEME_END_OF_LIST);}}

/* k4004 in map-loop588 in k3967 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in ... */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3977(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3977(t6,((C_word*)t0)[5],t5);}}

/* k2123 in map-loop308 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in ... */
static void C_ccall f_2125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2125,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
t4=*((C_word*)lf[385]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[386]);}

/* k2127 in k2123 in map-loop308 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in ... */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2129,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* a4090 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in ... */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4091,3,t0,t1,t2);}
t3=*((C_word*)lf[305]+1);
/* batch-driver.scm:308: g534 */
t4=*((C_word*)lf[305]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[309]);}

/* for-each-loop569 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in ... */
static void C_fcall f_4012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4012,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4022,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:318: ##sys#resolve-include-filename */
t7=*((C_word*)lf[184]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t4,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2874 in k2868 in k2865 in k2862 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in ... */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:598: emit-type-file */
t2=*((C_word*)lf[144]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}

/* k4020 in for-each-loop569 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in ... */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4012(t3,((C_word*)t0)[4],t2);}

/* k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in ... */
static void C_fcall f_2143(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2143,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[57],t2);
t4=C_i_not(t3);
t5=C_mutate2((C_word*)lf[58]+1 /* (set! ##compiler#enable-module-registration ...) */,t4);
t6=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(*((C_word*)lf[52]+1))){
t7=C_set_block_item(((C_word*)t0)[22],0,C_SCHEME_TRUE);
t8=t6;
f_2150(t8,t7);}
else{
t7=t6;
f_2150(t7,C_SCHEME_UNDEFINED);}}

/* k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in ... */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=C_mutate2((C_word*)lf[56]+1 /* (set! ##compiler#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[383],t4))){
if(C_truep(((C_word*)t0)[17])){
t5=t3;
f_2143(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_set_block_item(lf[384] /* ##compiler#all-import-libraries */,0,C_SCHEME_TRUE);
t6=t3;
f_2143(t6,t5);}}
else{
t5=t3;
f_2143(t5,C_SCHEME_UNDEFINED);}}

/* k2868 in k2865 in k2862 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in ... */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5464,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[145],t4);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2598(2,t3,t2);}}

/* f5586 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f5586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* for-each-loop543 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in ... */
static void C_fcall f_4035(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4035,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4045,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:309: g544 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in ... */
static void C_fcall f_2174(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2174,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[368],t3))){
t4=C_set_block_item(lf[350] /* ##compiler#local-definitions */,0,C_SCHEME_TRUE);
t5=t2;
f_2177(t5,t4);}
else{
t4=t2;
f_2177(t4,C_SCHEME_UNDEFINED);}}

/* k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in ... */
static void C_fcall f_2171(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2171,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[369],t3))){
t4=C_set_block_item(lf[370] /* ##compiler#compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t5=t2;
f_2174(t5,t4);}
else{
t4=t2;
f_2174(t4,C_SCHEME_UNDEFINED);}}

/* k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in ... */
static void C_fcall f_2177(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2177,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[367],t3))){
t4=C_set_block_item(lf[181] /* ##compiler#enable-inline-files */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t6=t2;
f_2180(t6,t5);}
else{
t4=t2;
f_2180(t4,C_SCHEME_UNDEFINED);}}

/* k4043 in for-each-loop543 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in ... */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4035(t3,((C_word*)t0)[4],t2);}

/* k3812 in k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3706(t4,((C_word*)t0)[4],t3);}

/* a4057 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in ... */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4058,3,t0,t1,t2);}
t3=*((C_word*)lf[305]+1);
/* batch-driver.scm:311: g559 */
t4=*((C_word*)lf[305]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[306]);}

/* k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in ... */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3811,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3821,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3826,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3854,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:412: ##sys#dynamic-wind */
t11=*((C_word*)lf[251]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}

/* k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in ... */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[373],t3))){
t4=C_set_block_item(lf[9] /* ##compiler#explicit-use-flag */,0,C_SCHEME_TRUE);
t5=C_set_block_item(((C_word*)t0)[25],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_END_OF_LIST);
t7=t2;
f_2168(t7,t6);}
else{
t4=t2;
f_2168(t4,C_SCHEME_UNDEFINED);}}

/* k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in ... */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[374],t3))){
/* batch-driver.scm:203: warning */
t4=*((C_word*)lf[375]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[376]);}
else{
t4=t2;
f_2165(2,t4,C_SCHEME_UNDEFINED);}}

/* k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in ... */
static void C_fcall f_2168(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2168,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[371],t3))){
t4=C_set_block_item(lf[372] /* ##compiler#emit-closure-info */,0,C_SCHEME_FALSE);
t5=t2;
f_2171(t5,t4);}
else{
t4=t2;
f_2171(t4,C_SCHEME_UNDEFINED);}}

/* for-each-loop518 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in ... */
static void C_fcall f_4068(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4068,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4078,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:306: g519 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2111,2,t0,t1);}
t2=C_i_memq(lf[54],*((C_word*)lf[28]+1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|38,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=t7,a[38]=t5,tmp=(C_word)a,a+=39,tmp);
/* batch-driver.scm:189: collect-options */
t9=((C_word*)((C_word*)t0)[24])[1];
f_1944(t9,t8,lf[387]);}

/* k4064 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in ... */
static void C_ccall f_4066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:311: append-map */
t2=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4076 in for-each-loop518 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in ... */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4068(t3,((C_word*)t0)[4],t2);}

/* a3853 in k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3854,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[248]+1));
t3=C_mutate2((C_word*)lf[248]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_2098(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2098,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[174],t3))){
t4=C_set_block_item(lf[391] /* ##sys#dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm:173: repository-path */
t5=*((C_word*)lf[392]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,C_SCHEME_FALSE);}
else{
t4=t2;
f_2101(2,t4,C_SCHEME_UNDEFINED);}}

/* k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_2095(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2095,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=*((C_word*)lf[203]+1);
if(C_truep(*((C_word*)lf[203]+1))){
t4=*((C_word*)lf[203]+1);
if(C_truep(*((C_word*)lf[203]+1))){
t5=C_set_block_item(lf[393] /* ##compiler#standalone-executable */,0,C_SCHEME_FALSE);
t6=t2;
f_2098(t6,t5);}
else{
t5=t2;
f_2098(t5,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[17])){
t4=C_set_block_item(lf[393] /* ##compiler#standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2098(t5,t4);}
else{
t4=t2;
f_2098(t4,C_SCHEME_UNDEFINED);}}}

/* a2048 in k2033 in body228 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2049,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[50]+1);
/* batch-driver.scm:163: g263 */
t6=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,((C_word*)t0)[2],t2,t3,t4);}

/* k2850 in k2847 in k2844 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:647: end-time */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1989(t2,((C_word*)t0)[3],lf[136]);}

/* k3733 in k3726 in k3722 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in ... */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:415: append */
t2=*((C_word*)lf[224]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop686 in k3726 in k3722 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in ... */
static void C_fcall f_3737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3737,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:417: g692 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a2042 in k2033 in body228 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2043,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[49]+1);
/* batch-driver.scm:162: g249 */
t5=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* k3722 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in ... */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3724,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:416: reverse */
t4=*((C_word*)lf[247]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k3726 in k3722 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3728,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[246]+1);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[55]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3735,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3737,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3737(t13,t9,((C_word*)t0)[2]);}

/* a3825 in k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3826,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3832(t5,t1);}

/* a3820 in k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3821,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[248]+1));
t3=C_mutate2((C_word*)lf[248]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3891 in k3885 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in ... */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3893,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[4];
t4=C_a_i_list(&a,1,lf[276]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5540,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[277],t4);}
else{
t3=((C_word*)t0)[4];
t4=C_a_i_list(&a,1,lf[278]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5546,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[277],t4);}}

/* print-expr in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1808(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1808,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1815,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:125: print-header */
f_1732(t5,t2,t3);}

/* f5558 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in ... */
static void C_ccall f5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* f5552 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in ... */
static void C_ccall f5552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k1801 in k1798 in k1795 in k1792 in k1786 in print-db in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 in ... */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:122: display-analysis-database */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1798 in k1795 in k1792 in k1786 in print-db in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:121: ##sys#write-char-0 */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_2029(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2029,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2031,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2054,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2059,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
/* batch-driver.scm:55: def-no230 */
t8=t7;
f_2059(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* batch-driver.scm:55: def-contf231 */
t10=t6;
f_2054(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* batch-driver.scm:55: body228 */
t12=t5;
f_2031(t12,t1,t8,t10);}}}

/* f5568 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in ... */
static void C_ccall f5568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* loop in a3825 in k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in ... */
static void C_fcall f_3832(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3832,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3836,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:422: read/source-info */
t3=*((C_word*)lf[250]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3834 in loop in a3825 in k3809 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in ... */
static void C_ccall f_3836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3836,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* batch-driver.scm:424: close-checked-input-file */
t2=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t2);
/* batch-driver.scm:427: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3832(t4,((C_word*)t0)[2]);}}

/* k2025 in k2003 in k2000 in k1997 in end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2027,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm:155: round */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k2017 in k2003 in k2000 in k1997 in end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* batch-driver.scm:153: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t2,C_SCHEME_TRUE,((C_word*)t0)[3]);}

/* k3688 in map-loop735 in k3650 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in ... */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3690,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3661(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3661(t6,((C_word*)t0)[5],t5);}}

/* k3695 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in ... */
static void C_ccall f_3697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:410: proc */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k2036 in k2033 in body228 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* body228 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_2031(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2031,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2035,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:159: analyze-expression */
t5=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* k2033 in body228 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2035,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2038,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2043,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2049,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:161: upap */
t6=((C_word*)((C_word*)t0)[3])[1];
((C_proc9)(void*)(*((C_word*)t6+1)))(9,t6,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,t5,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k1813 in print-expr in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1815,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[41]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1831,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1831(t7,((C_word*)t0)[3],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in ... */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:513: initialize-analysis-database */
t3=*((C_word*)lf[192]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in ... */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t2,tmp=(C_word)a,a+=23,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3152,a[2]=t7,a[3]=t10,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3152(t12,t8,t2);}

/* k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in ... */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3189,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:516: vector->list */
t4=*((C_word*)lf[190]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[191]+1));}

/* def-no230 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_2059(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2059,NULL,2,t0,t1);}
/* batch-driver.scm:55: def-contf231 */
t2=((C_word*)t0)[2];
f_2054(t2,t1,C_fix(0));}

/* k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in ... */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3201,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:510: canonicalize-begin-body */
t4=*((C_word*)lf[196]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[20])[1]);}

/* k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2617,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:610: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[13],t2,t3);}

/* def-contf231 in analyze in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_2054(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2054,NULL,3,t0,t1,t2);}
/* batch-driver.scm:55: body228 */
t3=((C_word*)t0)[2];
f_2031(t3,t1,t2,C_SCHEME_TRUE);}

/* k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:609: begin-time */
t3=((C_word*)((C_word*)t0)[10])[1];
f_1979(t3,t2);}

/* k2006 in k2003 in k2000 in k1997 in end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:153: ##sys#write-char-0 */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in ... */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=((C_word*)((C_word*)t0)[18])[1];
t4=(C_truep(t3)?t3:*((C_word*)lf[52]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[19],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[18],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[20],a[12]=((C_word*)t0)[21],tmp=(C_word)a,a+=13,tmp);
t6=((C_word*)t0)[22];
if(C_truep(C_u_i_memq(lf[174],t6))){
t7=t5;
f_2919(2,t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:542: load-type-database */
t8=*((C_word*)lf[168]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[176]);}}
else{
t5=t2;
f_2565(t5,C_SCHEME_UNDEFINED);}}

/* k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_fcall f_2565(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2565,NULL,2,t0,t1);}
t2=C_set_block_item(lf[85] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[92] /* ##compiler#constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[93] /* ##compiler#inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(*((C_word*)lf[157]+1))){
t6=t5;
f_2571(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=C_slot(((C_word*)t0)[17],C_fix(3));
t7=C_i_car(t6);
/* batch-driver.scm:571: scan-toplevel-assignments */
t8=*((C_word*)lf[158]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}}

/* for-each-loop164 in k1813 in print-expr in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1831,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1841,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1820,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:128: pretty-print */
t7=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4764(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4764,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[11],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[12],t6);
t8=((C_word*)t0)[2];
t9=C_u_i_memq(lf[13],t8);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t9)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:62: g72 */
t12=t11;
f_4725(t12,t10,t9);}
else{
t11=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[401],t11))){
t12=t10;
f_1677(2,t12,C_SCHEME_FALSE);}
else{
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4753,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
/* batch-driver.scm:69: pathname-file */
t13=*((C_word*)lf[403]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,((C_word*)t0)[5]);}
else{
/* batch-driver.scm:69: make-pathname */
t13=*((C_word*)lf[169]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t10,C_SCHEME_FALSE,lf[404],lf[402]);}}}}

/* k3715 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in ... */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2000 in k1997 in end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:153: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[47],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in ... */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2608,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:608: debugging */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[34],lf[108],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2725,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[6],a[15]=((C_word*)t0)[21],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[22])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:644: begin-time */
t4=((C_word*)((C_word*)t0)[11])[1];
f_1979(t4,t3);}
else{
t3=t2;
f_2725(2,t3,C_SCHEME_UNDEFINED);}}}

/* k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in ... */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_memq(lf[139],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:604: print-program-statistics */
t3=*((C_word*)lf[140]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_2608(2,t3,C_SCHEME_UNDEFINED);}}

/* k2003 in k2000 in k1997 in end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_2005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2019,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2027,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:101: current-milliseconds */
t5=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in ... */
static void C_ccall f_2602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:601: print-db */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1781(t3,t2,lf[141],lf[142],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in ... */
static void C_ccall f_2550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2550,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t2,a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3143,a[2]=t3,a[3]=((C_word*)t0)[22],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:518: debugging */
t5=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[187],lf[188]);}

/* k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in ... */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(*((C_word*)lf[181]+1))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3119,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3119(t6,t2,((C_word*)t0)[20]);}
else{
t3=t2;
f_2556(2,t3,C_SCHEME_UNDEFINED);}}

/* k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in ... */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:530: collect-options */
t3=((C_word*)((C_word*)t0)[21])[1];
f_1944(t3,t2,lf[180]);}

/* k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in ... */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;
f_2562(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t4=C_i_check_list_2(t1,lf[41]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3065(t8,t2,t1);}}

/* doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in ... */
static void C_fcall f_3706(C_word t0,C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3706,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3717,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[246]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[55]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3772,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3772(t14,t10,((C_word*)t0)[3]);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3811,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:419: check-and-open-input-file */
t6=*((C_word*)lf[252]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* k3699 in k3695 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in ... */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2465(2,t3,t2);}

/* map-loop660 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in ... */
static void C_fcall f_3772(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3772,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3801,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:415: g666 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* arg-val in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1854(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1854,NULL,2,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
if(C_truep(C_fixnum_lessp(t3,C_fix(2)))){
t5=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* batch-driver.scm:141: quit */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[43],t2);}}
else{
t5=C_i_string_ref(t2,t4);
t6=C_eqp(t5,C_make_character(109));
t7=(C_truep(t6)?t6:C_eqp(t5,C_make_character(77)));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1903,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:138: substring */
t9=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,t2,C_fix(0),t4);}
else{
t8=C_eqp(t5,C_make_character(107));
t9=(C_truep(t8)?t8:C_eqp(t5,C_make_character(75)));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1923,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:139: substring */
t11=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,t2,C_fix(0),t4);}
else{
t10=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* batch-driver.scm:141: quit */
t11=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[43],t2);}}}}}

/* k3199 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in ... */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:509: build-node-graph */
t2=*((C_word*)lf[195]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3202 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in ... */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:502: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1979(t3,t2);}

/* k3764 in map-loop686 in k3726 in k3722 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in ... */
static void C_ccall f_3766(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3766,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3737(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3737(t6,((C_word*)t0)[5],t5);}}

/* map-loop942 in k3205 in k3202 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in ... */
static void C_fcall f_3219(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3219,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3248,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:503: g948 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in ... */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2326,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:325: append */
t4=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[299]+1));}

/* k1818 in for-each-loop164 in k1813 in print-expr in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:129: newline */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4711 in map-loop78 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4684(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4684(t6,((C_word*)t0)[5],t5);}}

/* k3205 in k3202 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in ... */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[55]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3219,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3219(t13,t9,t7);}

/* k2658 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2660,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:620: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2588(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3635 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in ... */
static void C_ccall f_3637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3637,2,t0,t1);}
t2=C_mutate2((C_word*)lf[239]+1 /* (set! ##sys#explicit-library-modules ...) */,t1);
t3=C_a_i_cons(&a,2,lf[240],((C_word*)((C_word*)t0)[2])[1]);
t4=C_a_i_list(&a,2,lf[241],t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[4];
f_2480(t7,t6);}

/* k2674 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2676,2,t0,t1);}
t2=C_set_block_item(lf[98] /* ##compiler#inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:624: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2588(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* k2688 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:627: analyze */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2029(t3,t2,lf[103],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in ... */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2371,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[77],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:375: print-version */
t4=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[79],t3);
t5=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t4)){
t6=t5;
f_2390(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[268],t6);
if(C_truep(t7)){
t8=t5;
f_2390(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_memq(lf[269],t8);
if(C_truep(t9)){
t10=t5;
f_2390(t10,t9);}
else{
t10=((C_word*)t0)[2];
t11=t5;
f_2390(t11,C_u_i_memq(lf[270],t10));}}}}}

/* k2377 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in ... */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:376: newline */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f5055 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in ... */
static void C_ccall f5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f5055,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5446,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t3,*((C_word*)lf[110]+1),lf[111],C_SCHEME_END_OF_LIST);}

/* k2697 in k2694 in k2691 in k2688 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in ... */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:631: transform-direct-lambdas! */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[8]);}

/* k4751 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:69: make-pathname */
t2=*((C_word*)lf[169]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[402]);}

/* k2694 in k2691 in k2688 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in ... */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:629: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_1979(t3,t2);}

/* k2691 in k2688 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:628: end-time */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1989(t4,t3,lf[102]);}

/* k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in ... */
static void C_fcall f_2390(C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2390,NULL,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm:378: print-usage */
t2=*((C_word*)lf[80]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[81],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:380: chicken-version */
t5=*((C_word*)lf[83]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[3],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
t5=t4;
t6=C_a_i_list(&a,1,((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5534,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t7,*((C_word*)lf[110]+1),lf[264],t6);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:383: print-version */
t5=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}}}}

/* k3601 in map-loop767 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in ... */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3603,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3574(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3574(t6,((C_word*)t0)[5],t5);}}

/* a2621 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2622,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:612: determine-loop-and-dispatch */
t2=*((C_word*)lf[95]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}
else{
/* batch-driver.scm:613: perform-high-level-optimizations */
t2=*((C_word*)lf[96]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}}

/* a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2634,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2638,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:614: end-time */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1989(t5,t4,lf[107]);}

/* k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:615: print-node */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1759(t3,t2,lf[105],lf[106],((C_word*)t0)[6]);}

/* k3212 in k3205 in k3202 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in ... */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
/* batch-driver.scm:504: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1989(t3,((C_word*)t0)[4],lf[197]);}

/* k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2641,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:617: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2588(t3,((C_word*)t0)[5],t2,((C_word*)t0)[6],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[9]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:619: debugging */
t5=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[34],lf[97]);}
else{
t4=*((C_word*)lf[98]+1);
if(C_truep(*((C_word*)lf[98]+1))){
if(C_truep(*((C_word*)lf[99]+1))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:626: begin-time */
t6=((C_word*)((C_word*)t0)[11])[1];
f_1979(t6,t5);}
else{
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:639: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2588(t6,((C_word*)t0)[5],t5,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[8]);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:622: debugging */
t6=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[34],lf[104]);}}}}

/* k4719 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm:71: string-split */
t3=*((C_word*)lf[305]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[397]);}
else{
/* batch-driver.scm:71: string-split */
t2=*((C_word*)lf[305]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[398],lf[397]);}}

/* g72 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_4725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4725,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:64: option-arg */
f_1633(t3,t2);}

/* k4727 in g72 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_symbolp(t1))){
/* batch-driver.scm:66: symbol->string */
t2=*((C_word*)lf[171]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* k1901 in arg-val in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1903,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1048576));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* batch-driver.scm:141: quit */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[43],((C_word*)t0)[3]);}}

/* k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in ... */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:101: current-milliseconds */
t3=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in ... */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2450,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:399: make-vector */
t4=*((C_word*)lf[257]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[258]+1),C_SCHEME_END_OF_LIST);}

/* k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in ... */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:395: debugging */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[259],lf[260],*((C_word*)lf[71]+1));}

/* k1839 in for-each-loop164 in k1813 in print-expr in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1831(t3,((C_word*)t0)[4],t2);}

/* k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in ... */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:393: debugging */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[259],lf[262],*((C_word*)lf[28]+1));}

/* k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in ... */
static void C_ccall f_2436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:394: debugging */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[259],lf[261],*((C_word*)lf[70]+1));}

/* k1997 in end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:153: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in ... */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2468,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3652,a[2]=t2,a[3]=((C_word*)t0)[25],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5514,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[244],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_2471(t4,C_SCHEME_UNDEFINED);}}

/* k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:548: collect-options */
t3=((C_word*)((C_word*)t0)[12])[1];
f_1944(t3,t2,lf[173]);}

/* map-loop735 in k3650 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in ... */
static void C_fcall f_3661(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3661,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:433: g741 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1921 in arg-val in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1923,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1024));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* batch-driver.scm:141: quit */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[43],((C_word*)t0)[3]);}}

/* k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in ... */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2462,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3697,a[2]=((C_word*)t0)[25],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[27],a[6]=((C_word*)t0)[28],a[7]=((C_word*)t0)[29],tmp=(C_word)a,a+=8,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5520,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[245],C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[25],a[3]=((C_word*)t0)[27],a[4]=((C_word*)t0)[29],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3706(t7,t3,((C_word*)t0)[28]);}}

/* k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in ... */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:430: user-preprocessor-pass */
t3=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in ... */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t2,a[29]=((C_word*)t0)[28],tmp=(C_word)a,a+=30,tmp);
/* batch-driver.scm:407: user-read-pass */
t4=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in ... */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[94] /* ##compiler#first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2565(t3,t2);}

/* k3650 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3652(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3652,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[55]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3661,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3661(t13,t9,t7);}

/* k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in ... */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[52]+1))){
/* batch-driver.scm:563: print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1759(t3,t2,lf[159],lf[160],((C_word*)t0)[4]);}
else{
t3=C_set_block_item(lf[94] /* ##compiler#first-analysis */,0,C_SCHEME_TRUE);
t4=((C_word*)t0)[2];
f_2565(t4,t3);}}

/* k3657 in k3650 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in ... */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2471(t3,t2);}

/* k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in ... */
static void C_ccall f_2450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2450,2,t0,t1);}
t2=C_mutate2((C_word*)lf[85]+1 /* (set! ##sys#line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:400: collect-options */
t4=((C_word*)((C_word*)t0)[18])[1];
f_1944(t4,t3,lf[256]);}

/* k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in ... */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2453,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=t2,tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:401: collect-options */
t4=((C_word*)((C_word*)t0)[18])[1];
f_1944(t4,t3,lf[255]);}

/* k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in ... */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2456,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=t2,tmp=(C_word)a,a+=29,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3861,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[18],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:403: collect-options */
t5=((C_word*)((C_word*)t0)[18])[1];
f_1944(t5,t4,lf[254]);}

/* k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in ... */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2990(t6,t2,((C_word*)t0)[11]);}

/* k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in ... */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2933,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[41]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3013,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3013(t7,t3,t1);}

/* k1600 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* collect-options in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1944,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1950,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1950(t6,t1,((C_word*)t0)[3]);}

/* k2922 in for-each-loop1050 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in ... */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* batch-driver.scm:547: quit */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[172],((C_word*)t0)[3]);}}

/* k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1612,2,t0,t1);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:37: make-parameter */
t4=*((C_word*)lf[408]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in ... */
static void C_fcall f_2486(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2486,NULL,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[55]);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[23],a[3]=t5,a[4]=((C_word*)t0)[24],a[5]=((C_word*)t0)[25],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3574(t7,t3,t1);}

/* k1606 in k1603 in k1600 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:36: make-parameter */
t3=*((C_word*)lf[408]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k1603 in k1600 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3127 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in ... */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3119(t3,((C_word*)t0)[4],t2);}

/* k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in ... */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:553: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1979(t3,t2);}

/* k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in ... */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2958,2,t0,t1);}
t2=C_set_block_item(lf[94] /* ##compiler#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:555: analyze */
t4=((C_word*)((C_word*)t0)[10])[1];
f_2029(t4,t3,lf[167],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in ... */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(((C_word*)t0)[26])){
t3=C_a_i_list(&a,3,lf[234],lf[235],lf[236]);
t4=C_a_i_cons(&a,2,t3,t1);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[237],t5);
t7=C_a_i_cons(&a,2,lf[238],t6);
t8=t2;
f_2486(t8,C_a_i_list(&a,1,t7));}
else{
t3=t2;
f_2486(t3,t1);}}

/* k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in ... */
static void C_fcall f_2480(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2480,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[86]+1);
t7=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=t5,a[24]=t3,a[25]=t6,a[26]=((C_word*)t0)[23],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:443: append */
t8=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)((C_word*)t0)[24])[1],((C_word*)((C_word*)t0)[25])[1]);}

/* k2950 in for-each-loop1071 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in ... */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:551: make-pathname */
t2=*((C_word*)lf[169]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[170]);}

/* k3112 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in ... */
static void C_ccall f_3114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:524: make-pathname */
t2=*((C_word*)lf[169]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[185]);}

/* k3108 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in ... */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:523: ##sys#resolve-include-filename */
t2=*((C_word*)lf[184]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k1964 in g208 in loop in collect-options in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1966,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm:145: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1950(t5,t3,t4);}

/* k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in ... */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[26])[1]))){
t3=t2;
f_2480(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3637,a[2]=((C_word*)t0)[26],a[3]=((C_word*)t0)[25],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:439: append */
t4=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[239]+1),((C_word*)((C_word*)t0)[26])[1]);}}

/* k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1616,2,t0,t1);}
t2=C_mutate2((C_word*)lf[1]+1 /* (set! user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:38: make-parameter */
t4=*((C_word*)lf[408]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in ... */
static void C_fcall f_3119(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3119,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3114,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:524: symbol->string */
t9=*((C_word*)lf[171]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in ... */
static void C_ccall f_2474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:436: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1979(t3,t2);}

/* k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_fcall f_2471(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2471,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:435: print-expr */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1808(t3,t2,lf[242],lf[243],((C_word*)((C_word*)t0)[25])[1]);}

/* k3101 in k3098 in k3089 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:528: load-inline-file */
t2=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3098 in k3089 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in ... */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3100,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=t2;
t4=C_a_i_list(&a,1,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5484,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[182],t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1968 in k1964 in g208 in loop in collect-options in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1970,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* begin-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1979(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1979,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:101: current-milliseconds */
t3=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in ... */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:561: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1989(t3,t2,lf[161]);}

/* k2973 in k2970 in k2967 in k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:560: scrutinize */
t3=*((C_word*)lf[162]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],*((C_word*)lf[52]+1));}

/* k2970 in k2967 in k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:559: debugging */
t3=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[34],lf[163]);}

/* k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in ... */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=C_i_length(*((C_word*)lf[87]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[222]+1);
t10=C_i_check_list_2(*((C_word*)lf[222]+1),lf[55]);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3383,a[2]=t4,a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[22],a[6]=t3,a[7]=((C_word*)t0)[23],tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3539,a[2]=t8,a[3]=t13,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3539(t15,t11,*((C_word*)lf[222]+1));}

/* map-loop800 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in ... */
static void C_fcall f_3539(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3539,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_u_i_car(t3);
t6=C_a_i_list(&a,2,lf[226],t5);
t7=C_a_i_list(&a,3,lf[231],t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t8);
t11=C_slot(t2,C_fix(1));
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t8);
t11=C_slot(t2,C_fix(1));
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1985 in begin-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* end-time in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1989,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[29]+1);
t4=*((C_word*)lf[29]+1);
t5=C_i_check_port_2(*((C_word*)lf[29]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[30]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1999,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:153: ##sys#print */
t7=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[48],C_SCHEME_FALSE,*((C_word*)lf[29]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2967 in k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:558: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1979(t3,t2);}

/* k2964 in k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in ... */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:557: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1989(t3,t2,lf[164]);}

/* k2961 in k2956 in k2953 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in ... */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:556: print-db */
t4=((C_word*)((C_word*)t0)[9])[1];
f_1781(t4,t3,lf[165],lf[166],((C_word*)((C_word*)t0)[2])[1],C_fix(0));}

/* k3423 in k3397 in k3393 in k3381 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in ... */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=*((C_word*)lf[203]+1);
if(C_truep(*((C_word*)lf[203]+1))){
/* batch-driver.scm:451: append */
t3=*((C_word*)lf[224]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,lf[225]);}
else{
if(C_truep(((C_word*)t0)[7])){
/* batch-driver.scm:451: append */
t3=*((C_word*)lf[224]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,lf[225]);}
else{
t3=((C_word*)((C_word*)t0)[8])[1];
/* batch-driver.scm:451: append */
t4=*((C_word*)lf[224]+1);
((C_proc9)(void*)(*((C_word*)t4+1)))(9,t4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6],t3,lf[225]);}}}

/* k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in ... */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=t2,a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm:449: gensym */
t4=*((C_word*)lf[233]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* for-each-loop1071 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in ... */
static void C_fcall f_2990(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2990,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3000,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2948,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2952,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:551: symbol->string */
t8=*((C_word*)lf[171]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1664,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_mutate2((C_word*)lf[9]+1 /* (set! ##compiler#explicit-use-flag ...) */,C_u_i_memq(lf[10],t2));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[9]+1))){
/* batch-driver.scm:56: append */
t5=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[405]+1),C_SCHEME_END_OF_LIST);}
else{
t5=C_a_i_cons(&a,2,lf[240],*((C_word*)lf[406]+1));
t6=C_a_i_list(&a,1,t5);
/* batch-driver.scm:56: append */
t7=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,*((C_word*)lf[405]+1),t6);}}

/* map-loop867 in k3397 in k3393 in k3381 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in ... */
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(30);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3440,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list(&a,2,lf[226],t4);
t6=C_u_i_cdr(t3);
t7=C_a_i_list(&a,2,lf[226],t6);
t8=C_a_i_list(&a,4,lf[227],*((C_word*)lf[228]+1),t5,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t18=t1;
t19=t12;
t1=t18;
t2=t19;
goto loop;}
else{
t10=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t18=t1;
t19=t12;
t1=t18;
t2=t19;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop830 in k3381 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in ... */
static void C_fcall f_3504(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3504,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[232],t3);
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

/* map-loop308 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in ... */
static void C_fcall f_4549(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4549,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4578,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2125,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:187: string->symbol */
t8=*((C_word*)lf[297]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1683,2,t0,t1);}
t2=t1;
t3=*((C_word*)lf[15]+1);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=lf[16];
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t0)[2];
t17=C_u_i_memq(lf[17],t16);
t18=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t11,a[12]=t13,a[13]=t15,a[14]=t9,a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(t17)){
t19=t18;
f_1688(t19,t17);}
else{
t19=((C_word*)t0)[2];
t20=C_u_i_memq(lf[273],t19);
if(C_truep(t20)){
t21=t18;
f_1688(t21,t20);}
else{
t21=((C_word*)t0)[2];
t22=C_u_i_memq(lf[18],t21);
t23=t18;
f_1688(t23,t22);}}}

/* k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4684(t6,t2,t1);}

/* k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1677,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[14]+1);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t6,a[10]=t4,a[11]=t7,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4721,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:72: get-environment-variable */
t10=*((C_word*)lf[399]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[400]);}

/* loop in collect-options in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1950(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1950,NULL,3,t0,t1,t2);}
t3=C_i_memq(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:55: g208 */
t5=t4;
f_1958(t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k2406 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in ... */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:380: display */
t2=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1688(C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1688,NULL,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[18],t3);
t5=(C_truep(t4)?C_i_cadr(t4):C_SCHEME_FALSE);
t6=t5;
t7=((C_word*)t0)[2];
t8=C_u_i_memq(lf[19],t7);
t9=((C_word*)t0)[2];
t10=C_u_i_memq(lf[20],t9);
t11=((C_word*)t0)[2];
t12=C_u_i_memq(lf[21],t11);
t13=C_SCHEME_END_OF_LIST;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t0)[2];
t16=C_u_i_memq(lf[22],t15);
t17=((C_word*)t0)[2];
t18=C_u_i_memq(lf[23],t17);
t19=((C_word*)t0)[2];
t20=C_u_i_memq(lf[24],t19);
t21=C_SCHEME_TRUE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=((C_word*)t0)[2];
t24=C_u_i_memq(lf[25],t23);
t25=C_SCHEME_FALSE;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_FALSE;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_FALSE;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=((C_word*)t0)[2];
t32=C_u_i_memq(lf[26],t31);
t33=((C_word*)t0)[2];
t34=C_u_i_memq(lf[27],t33);
t35=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_1714,a[2]=t26,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t30,a[8]=((C_word*)t0)[6],a[9]=t14,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t28,a[14]=t12,a[15]=((C_word*)t0)[10],a[16]=t20,a[17]=t18,a[18]=((C_word*)t0)[11],a[19]=t24,a[20]=((C_word*)t0)[12],a[21]=t22,a[22]=((C_word*)t0)[13],a[23]=t6,a[24]=t32,a[25]=((C_word*)t0)[14],a[26]=t2,a[27]=t8,a[28]=((C_word*)t0)[15],a[29]=t10,a[30]=t16,tmp=(C_word)a,a+=31,tmp);
if(C_truep(t34)){
t36=t35;
f_1714(t36,t34);}
else{
t36=((C_word*)t0)[2];
t37=t35;
f_1714(t37,C_u_i_memq(lf[396],t36));}}

/* g208 in loop in collect-options in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1958,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1966,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:145: option-arg */
f_1633(t3,t2);}

/* k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in ... */
static void C_fcall f_2180(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2180,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[366] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t4=t2;
f_2183(t4,t3);}
else{
t3=t2;
f_2183(t3,C_SCHEME_UNDEFINED);}}

/* k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in ... */
static void C_fcall f_2183(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2183,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[364],t3))){
t4=C_set_block_item(lf[365] /* ##compiler#strict-variable-types */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[52] /* ##compiler#enable-specialization */,0,C_SCHEME_TRUE);
t6=t2;
f_2186(t6,t5);}
else{
t4=t2;
f_2186(t4,C_SCHEME_UNDEFINED);}}

/* k2399 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in ... */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:381: newline */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in ... */
static void C_fcall f_2189(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2189,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[99],t3))){
t4=C_set_block_item(lf[99] /* optimize-leaf-routines */,0,C_SCHEME_TRUE);
t5=t2;
f_2192(t5,t4);}
else{
t4=t2;
f_2192(t4,C_SCHEME_UNDEFINED);}}

/* k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in ... */
static void C_fcall f_2186(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2186,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[362],t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[22],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5610,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[363],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2189(t4,C_SCHEME_UNDEFINED);}}

/* k3280 in k3277 in k3274 in k3271 in k3265 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in ... */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:487: ##sys#notice */
t2=*((C_word*)lf[204]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3283 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in ... */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:484: display-line-number-database */
t2=*((C_word*)lf[209]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2510(2,t2,C_SCHEME_UNDEFINED);}}

/* k2946 in for-each-loop1071 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in ... */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:551: load-type-database */
t2=*((C_word*)lf[168]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in ... */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=C_mutate2((C_word*)lf[84]+1 /* (set! ##compiler#source-filename ...) */,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:392: debugging */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[259],lf[263],((C_word*)t0)[19]);}

/* k2421 in k2418 in k2415 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in ... */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:386: display */
t2=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[265]);}

/* k2418 in k2415 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in ... */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:385: display */
t3=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[266]);}

/* k2415 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in ... */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:384: display */
t3=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[267]);}

/* k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in ... */
static void C_fcall f_2156(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2156,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[379],t3))){
/* batch-driver.scm:199: warning */
t4=*((C_word*)lf[375]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[380]);}
else{
t4=t2;
f_2159(2,t4,C_SCHEME_UNDEFINED);}}

/* k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in ... */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(C_i_memq(lf[381],*((C_word*)lf[28]+1)))){
t3=C_set_block_item(((C_word*)t0)[36],0,C_SCHEME_TRUE);
t4=t2;
f_2156(t4,t3);}
else{
t3=t2;
f_2156(t3,C_SCHEME_UNDEFINED);}}

/* k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in ... */
static void C_fcall f_2150(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2150,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep(C_i_memq(lf[113],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:196: ##sys#start-timer */
t3=*((C_word*)lf[382]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_2153(2,t3,C_SCHEME_UNDEFINED);}}

/* k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in ... */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[377],t3))){
/* batch-driver.scm:201: warning */
t4=*((C_word*)lf[375]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[378]);}
else{
t4=t2;
f_2162(2,t4,C_SCHEME_UNDEFINED);}}

/* k3246 in map-loop942 in k3205 in k3202 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in ... */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3248,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3219(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3219(t6,((C_word*)t0)[5],t5);}}

/* k3271 in k3265 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in ... */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:488: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[203]+1),C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3274 in k3271 in k3265 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in ... */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:488: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[206],C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k3277 in k3274 in k3271 in k3265 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in ... */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:488: get-output-string */
t3=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* a4592 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4593,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4606,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t8=*((C_word*)lf[389]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k3265 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in ... */
static void C_ccall f_3267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3267,2,t0,t1);}
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[110]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:488: ##sys#print */
t6=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[207],C_SCHEME_FALSE,t3);}

/* map-loop767 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in ... */
static void C_fcall f_3574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3574,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3603,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:442: g773 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4638 in map-loop280 in k4604 in a4592 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in ... */
static void C_ccall f_4640(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4640,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4611(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4611(t6,((C_word*)t0)[5],t5);}}

/* k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in ... */
static void C_fcall f_2195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2195,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[360],t3))){
t4=C_set_block_item(lf[361] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t5=t2;
f_2198(t5,t4);}
else{
t4=t2;
f_2198(t4,C_SCHEME_UNDEFINED);}}

/* k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in ... */
static void C_fcall f_2192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2192,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[157],t3))){
t4=C_set_block_item(lf[157] /* unsafe */,0,C_SCHEME_TRUE);
t5=t2;
f_2195(t5,t4);}
else{
t4=t2;
f_2195(t4,C_SCHEME_UNDEFINED);}}

/* k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in ... */
static void C_fcall f_2198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2198,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[359],t3))){
t4=C_set_block_item(lf[131] /* ##compiler#insert-timer-checks */,0,C_SCHEME_FALSE);
t5=t2;
f_2201(t5,t4);}
else{
t4=t2;
f_2201(t4,C_SCHEME_UNDEFINED);}}

/* k3289 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in ... */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:482: display-real-name-table */
t2=*((C_word*)lf[212]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2507(2,t2,C_SCHEME_UNDEFINED);}}

/* k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1620,2,t0,t1);}
t2=C_mutate2((C_word*)lf[2]+1 /* (set! user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:39: make-parameter */
t4=*((C_word*)lf[408]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=C_mutate2((C_word*)lf[3]+1 /* (set! user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:40: make-parameter */
t4=*((C_word*)lf[408]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k4646 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:176: append-map */
t2=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1714(C_word t0,C_word t1){
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
C_word ab[94],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1714,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
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
t21=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1732,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t23=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1808,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1854,tmp=(C_word)a,a+=2,tmp));
t26=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1944,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1979,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t29=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t30=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=t18,a[13]=t16,a[14]=t20,a[15]=t6,a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=t8,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],a[24]=t14,a[25]=t10,a[26]=((C_word*)t0)[22],a[27]=((C_word*)t0)[23],a[28]=((C_word*)t0)[24],a[29]=((C_word*)t0)[25],a[30]=((C_word*)t0)[26],a[31]=t2,a[32]=t12,a[33]=((C_word*)t0)[3],a[34]=((C_word*)t0)[27],a[35]=((C_word*)t0)[28],a[36]=((C_word*)t0)[29],a[37]=((C_word*)t0)[5],tmp=(C_word)a,a+=38,tmp);
if(C_truep(((C_word*)t0)[30])){
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4662,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4666,a[2]=t31,tmp=(C_word)a,a+=3,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4670,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:168: option-arg */
f_1633(t33,((C_word*)t0)[30]);}
else{
t31=t30;
f_2095(t31,C_SCHEME_UNDEFINED);}}

/* k4576 in map-loop308 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in ... */
static void C_ccall f_4578(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4578,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4549(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4549(t6,((C_word*)t0)[5],t5);}}

/* k3021 in for-each-loop1050 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in ... */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3013(t3,((C_word*)t0)[4],t2);}

/* compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1630r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1630r(t0,t1,t2,t3);}}

static void C_ccall f_1630r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1633,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1664,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:53: initialize-compiler */
t6=*((C_word*)lf[407]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* option-arg in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1633(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1633,NULL,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_car(t4);
/* batch-driver.scm:48: quit */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[7],t5);}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
/* batch-driver.scm:51: quit */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[8],t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

/* k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1628,2,t0,t1);}
t2=C_mutate2((C_word*)lf[4]+1 /* (set! user-post-analysis-pass ...) */,t1);
t3=C_mutate2((C_word*)lf[5]+1 /* (set! compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1630,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k4586 in k2106 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:183: exit */
t2=*((C_word*)lf[122]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* for-each-loop1050 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in ... */
static void C_fcall f_3013(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3013,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3023,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2924,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:546: load-type-database */
t8=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t6,C_SCHEME_FALSE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4298 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:279: append-map */
t2=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4604 in a4592 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4606,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4611,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4611(t5,((C_word*)t0)[4],t1);}

/* k1749 in k1746 in k1734 in print-header in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:110: ##sys#write-char-0 */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[3]);}

/* k1755 in k1752 in k1749 in k1746 in k1734 in print-header in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 in ... */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k1752 in k1749 in k1746 in k1734 in print-header in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:110: ##sys#write-char-0 */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* print-node in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1759(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1759,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:114: print-header */
f_1732(t5,t2,t3);}

/* k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in ... */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:633: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2588(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7]);}

/* k2700 in k2697 in k2694 in k2691 in k2688 in k2639 in k2636 in a2633 in k2615 in k2612 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in ... */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2702,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:632: end-time */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1989(t4,t3,lf[100]);}

/* f5604 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in ... */
static void C_ccall f5604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k2998 in for-each-loop1071 in k2937 in k2931 in k2917 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in ... */
static void C_ccall f_3000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2990(t3,((C_word*)t0)[4],t2);}

/* k1777 in k1764 in print-node in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:117: pretty-print */
t2=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4314 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4316,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[55]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4324(t7,t3,t1);}

/* f5610 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in ... */
static void C_ccall f5610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k1746 in k1734 in print-header in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1748,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:110: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* map-loop364 in k4314 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_fcall f_4324(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4324,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4353,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:273: g370 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4320 in k4314 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:273: append */
t2=*((C_word*)lf[224]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,*((C_word*)lf[64]+1),((C_word*)t0)[3]);}

/* k1792 in k1786 in print-db in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:121: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4]);}

/* k1795 in k1792 in k1786 in print-db in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:121: ##sys#write-char-0 */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[4]);}

/* k3315 in k3312 in for-each-loop898 in k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in ... */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:479: ##sys#print */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[216],C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4369 in k4366 in k4363 in k4360 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:269: symbol-escape */
t2=*((C_word*)lf[330]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3312 in for-each-loop898 in k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in ... */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* batch-driver.scm:479: ##sys#print */
t4=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4660 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[203]+1 /* (set! ##compiler#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_2095(t3,t2);}

/* k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in ... */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3197,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_record4(&a,4,lf[89],lf[90],lf[91],t2);
t4=t3;
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t4,a[18]=((C_word*)t0)[17],a[19]=t6,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:512: print-node */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1759(t8,t7,lf[193],lf[194],t4);}

/* k4377 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:263: symbol-escape */
t2=*((C_word*)lf[330]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1764 in print-node in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1766,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* batch-driver.scm:116: dump-nodes */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:117: build-expression-tree */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in ... */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2777,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=t3;
t5=C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5452,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[119],t5);}

/* k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in ... */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:673: open-output-file */
t3=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t3=t2;
f_2777(2,t3,*((C_word*)lf[29]+1));}}

/* k4668 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:168: stringify */
t2=*((C_word*)lf[395]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop898 in k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in ... */
static void C_fcall f_3340(C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3340,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3350,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=*((C_word*)lf[29]+1);
t8=*((C_word*)lf[29]+1);
t9=C_i_check_port_2(*((C_word*)lf[29]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[30]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3314,a[2]=t5,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:479: ##sys#print */
t11=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[217],C_SCHEME_FALSE,*((C_word*)lf[29]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3187 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in ... */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:516: concatenate */
t2=*((C_word*)lf[189]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in ... */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:671: begin-time */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1979(t3,t2);}

/* k4664 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_4666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:168: string->c-identifier */
t2=*((C_word*)lf[394]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4385 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in ... */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:260: parenthesis-synonyms */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4124 in for-each-loop419 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in ... */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[314],C_SCHEME_TRUE);}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[314],t3);}}

/* k3799 in map-loop660 in doloop655 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3801,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3772(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3772(t6,((C_word*)t0)[5],t5);}}

/* a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in ... */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2767,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2771,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:670: end-time */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1989(t7,t6,lf[121]);}

/* map-loop78 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_4684(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4684,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:70: g84 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4351 in map-loop364 in k4314 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4353,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4324(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4324(t6,((C_word*)t0)[5],t5);}}

/* a2760 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in ... */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
/* batch-driver.scm:669: prepare-for-code-generation */
t2=*((C_word*)lf[109]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}

/* print-db in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1781,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1788,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:120: print-header */
f_1732(t6,t2,t3);}

/* k1786 in print-db in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[29]+1);
t3=*((C_word*)lf[29]+1);
t4=C_i_check_port_2(*((C_word*)lf[29]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[30]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:121: ##sys#print */
t6=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[40],C_SCHEME_FALSE,*((C_word*)lf[29]+1));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in ... */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5440,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t3,*((C_word*)lf[110]+1),lf[111],C_SCHEME_END_OF_LIST);}

/* map-loop280 in k4604 in a4592 in k2099 in k2096 in k2093 in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 in ... */
static void C_fcall f_4611(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4611,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4640,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
/* batch-driver.scm:178: string->symbol */
t6=*((C_word*)lf[297]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3321 in k3318 in k3315 in k3312 in for-each-loop898 in k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in ... */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:479: ##sys#write-char-0 */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k4363 in k4360 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:267: keyword-style */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[332]);}

/* k3318 in k3315 in k3312 in for-each-loop898 in k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in ... */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* batch-driver.scm:479: ##sys#print */
t4=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k4360 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:266: case-sensitive */
t3=*((C_word*)lf[333]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in ... */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:681: compiler-cleanup-hook */
t3=*((C_word*)lf[112]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4366 in k4363 in k4360 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:268: parentheses-synonyms */
t3=*((C_word*)lf[331]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* for-each-loop468 in k4147 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in ... */
static void C_fcall f_4193(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4193,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4203,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4168,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,t6,lf[315],C_SCHEME_TRUE);}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t6,lf[315],t9);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in ... */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[113],*((C_word*)lf[28]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:680: ##sys#stop-timer */
t4=*((C_word*)lf[115]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:681: compiler-cleanup-hook */
t4=*((C_word*)lf[112]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in ... */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:678: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1989(t3,t2,lf[116]);}

/* k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in ... */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:677: close-output-port */
t3=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_2786(2,t3,C_SCHEME_UNDEFINED);}}

/* k3148 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in ... */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:517: concatenate */
t2=*((C_word*)lf[189]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop980 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in ... */
static void C_fcall f_3152(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3152,NULL,3,t0,t1,t2);}
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

/* k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in ... */
static void C_ccall f_2780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:675: generate-code */
t3=*((C_word*)lf[118]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_2734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:657: perform-closure-conversion */
t3=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}

/* k4166 in for-each-loop468 in k4147 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in ... */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[314],C_SCHEME_TRUE);}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],((C_word*)t0)[3],lf[314],t3);}}

/* k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2738,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:658: end-time */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1989(t4,t3,lf[129]);}

/* k3141 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in ... */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:519: pp */
t2=*((C_word*)lf[186]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_2553(2,t2,C_SCHEME_UNDEFINED);}}

/* k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:655: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1979(t3,t2);}

/* a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in ... */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3306,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:477: print */
t3=*((C_word*)lf[218]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[219]);}

/* k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in ... */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3306,2,t0,t1);}
t2=*((C_word*)lf[215]+1);
t3=C_i_check_list_2(*((C_word*)lf[215]+1),lf[41]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3340(t7,((C_word*)t0)[2],*((C_word*)lf[215]+1));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_driver_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("driver_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3130)){
C_save(t1);
C_rereclaim2(3130*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,409);
lf[0]=C_h_intern(&lf[0],17,"user-options-pass");
lf[1]=C_h_intern(&lf[1],14,"user-read-pass");
lf[2]=C_h_intern(&lf[2],22,"user-preprocessor-pass");
lf[3]=C_h_intern(&lf[3],9,"user-pass");
lf[4]=C_h_intern(&lf[4],23,"user-post-analysis-pass");
lf[5]=C_h_intern(&lf[5],19,"compile-source-file");
lf[6]=C_h_intern(&lf[6],13,"\010compilerquit");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~A\047 option");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid argument to `~A\047 option");
lf[9]=C_h_intern(&lf[9],26,"\010compilerexplicit-use-flag");
lf[10]=C_h_intern(&lf[10],12,"explicit-use");
lf[11]=C_h_intern(&lf[11],12,"\004coredeclare");
lf[12]=C_h_intern(&lf[12],7,"verbose");
lf[13]=C_h_intern(&lf[13],11,"output-file");
lf[14]=C_h_intern(&lf[14],23,"\010compilerchop-separator");
lf[15]=C_h_intern(&lf[15],36,"\010compilerdefault-optimization-passes");
lf[16]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\003sysimplicit-exit-handler\376\377\016\376\377\016\376\377\016");
lf[17]=C_h_intern(&lf[17],7,"profile");
lf[18]=C_h_intern(&lf[18],12,"profile-name");
lf[19]=C_h_intern(&lf[19],9,"heap-size");
lf[20]=C_h_intern(&lf[20],13,"keyword-style");
lf[21]=C_h_intern(&lf[21],10,"clustering");
lf[22]=C_h_intern(&lf[22],4,"unit");
lf[23]=C_h_intern(&lf[23],12,"analyze-only");
lf[24]=C_h_intern(&lf[24],7,"dynamic");
lf[25]=C_h_intern(&lf[25],4,"lfa2");
lf[26]=C_h_intern(&lf[26],6,"module");
lf[27]=C_h_intern(&lf[27],7,"nursery");
lf[28]=C_h_intern(&lf[28],26,"\010compilerdebugging-chicken");
lf[29]=C_h_intern(&lf[29],19,"\003sysstandard-output");
lf[30]=C_h_intern(&lf[30],6,"printf");
lf[31]=C_h_intern(&lf[31],16,"\003syswrite-char-0");
lf[32]=C_h_intern(&lf[32],9,"\003sysprint");
lf[33]=C_h_intern(&lf[33],18,"\010compilerdebugging");
lf[34]=C_h_intern(&lf[34],1,"p");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004pass");
lf[36]=C_h_intern(&lf[36],19,"\010compilerdump-nodes");
lf[37]=C_h_intern(&lf[37],12,"pretty-print");
lf[38]=C_h_intern(&lf[38],30,"\010compilerbuild-expression-tree");
lf[39]=C_h_intern(&lf[39],34,"\010compilerdisplay-analysis-database");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\013(iteration ");
lf[41]=C_h_intern(&lf[41],8,"for-each");
lf[42]=C_h_intern(&lf[42],7,"newline");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid numeric argument ~S");
lf[44]=C_h_intern(&lf[44],9,"substring");
lf[45]=C_h_intern(&lf[45],20,"current-milliseconds");
lf[46]=C_h_intern(&lf[46],5,"round");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003: \011");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\030milliseconds needed for ");
lf[49]=C_h_intern(&lf[49],12,"\010compilerget");
lf[50]=C_h_intern(&lf[50],13,"\010compilerput!");
lf[51]=C_h_intern(&lf[51],27,"\010compileranalyze-expression");
lf[52]=C_h_intern(&lf[52],30,"\010compilerenable-specialization");
lf[53]=C_h_intern(&lf[53],10,"specialize");
lf[54]=C_h_intern(&lf[54],1,"D");
lf[55]=C_h_intern(&lf[55],3,"map");
lf[56]=C_h_intern(&lf[56],25,"\010compilerimport-libraries");
lf[57]=C_h_intern(&lf[57],22,"no-module-registration");
lf[58]=C_h_intern(&lf[58],35,"\010compilerenable-module-registration");
lf[59]=C_h_intern(&lf[59],16,"emit-inline-file");
lf[60]=C_h_intern(&lf[60],14,"emit-type-file");
lf[61]=C_h_intern(&lf[61],12,"inline-limit");
lf[62]=C_h_intern(&lf[62],21,"\010compilerverbose-mode");
lf[63]=C_h_intern(&lf[63],31,"\003sysread-error-with-line-number");
lf[64]=C_h_intern(&lf[64],21,"\003sysinclude-pathnames");
lf[65]=C_h_intern(&lf[65],17,"register-feature!");
lf[66]=C_h_intern(&lf[66],19,"unregister-feature!");
lf[67]=C_h_intern(&lf[67],19,"\000compiler-extension");
lf[68]=C_h_intern(&lf[68],12,"\003sysfeatures");
lf[69]=C_h_intern(&lf[69],10,"\000compiling");
lf[70]=C_h_intern(&lf[70],25,"\010compilertarget-heap-size");
lf[71]=C_h_intern(&lf[71],26,"\010compilertarget-stack-size");
lf[72]=C_h_intern(&lf[72],8,"no-trace");
lf[73]=C_h_intern(&lf[73],24,"\010compileremit-trace-info");
lf[74]=C_h_intern(&lf[74],40,"\010compilerdisable-stack-overflow-checking");
lf[75]=C_h_intern(&lf[75],29,"disable-stack-overflow-checks");
lf[76]=C_h_intern(&lf[76],23,"\010compilerbootstrap-mode");
lf[77]=C_h_intern(&lf[77],7,"version");
lf[78]=C_h_intern(&lf[78],22,"\010compilerprint-version");
lf[79]=C_h_intern(&lf[79],4,"help");
lf[80]=C_h_intern(&lf[80],20,"\010compilerprint-usage");
lf[81]=C_h_intern(&lf[81],7,"release");
lf[82]=C_h_intern(&lf[82],7,"display");
lf[83]=C_h_intern(&lf[83],15,"chicken-version");
lf[84]=C_h_intern(&lf[84],24,"\010compilersource-filename");
lf[85]=C_h_intern(&lf[85],24,"\003sysline-number-database");
lf[86]=C_h_intern(&lf[86],32,"\010compilercanonicalize-expression");
lf[87]=C_h_intern(&lf[87],28,"\010compilerprofile-lambda-list");
lf[88]=C_h_intern(&lf[88],31,"\010compilerline-number-database-2");
lf[89]=C_h_intern(&lf[89],4,"node");
lf[90]=C_h_intern(&lf[90],6,"lambda");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\016\376\377\016");
lf[92]=C_h_intern(&lf[92],23,"\010compilerconstant-table");
lf[93]=C_h_intern(&lf[93],21,"\010compilerinline-table");
lf[94]=C_h_intern(&lf[94],23,"\010compilerfirst-analysis");
lf[95]=C_h_intern(&lf[95],36,"\010compilerdetermine-loop-and-dispatch");
lf[96]=C_h_intern(&lf[96],41,"\010compilerperform-high-level-optimizations");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\022clustering enabled");
lf[98]=C_h_intern(&lf[98],37,"\010compilerinline-substitutions-enabled");
lf[99]=C_h_intern(&lf[99],22,"optimize-leaf-routines");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\031leaf routine optimization");
lf[101]=C_h_intern(&lf[101],34,"\010compilertransform-direct-lambdas!");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[103]=C_h_intern(&lf[103],4,"leaf");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\022rewritings enabled");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\023optimized-iteration");
lf[106]=C_h_intern(&lf[106],1,"5");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\014optimization");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\021optimization pass");
lf[109]=C_h_intern(&lf[109],36,"\010compilerprepare-for-code-generation");
lf[110]=C_h_intern(&lf[110],7,"sprintf");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\025compilation finished.");
lf[112]=C_h_intern(&lf[112],30,"\010compilercompiler-cleanup-hook");
lf[113]=C_h_intern(&lf[113],1,"t");
lf[114]=C_h_intern(&lf[114],17,"\003sysdisplay-times");
lf[115]=C_h_intern(&lf[115],14,"\003sysstop-timer");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\017code generation");
lf[117]=C_h_intern(&lf[117],17,"close-output-port");
lf[118]=C_h_intern(&lf[118],22,"\010compilergenerate-code");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\023generating `~A\047 ...");
lf[120]=C_h_intern(&lf[120],16,"open-output-file");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\013preparation");
lf[122]=C_h_intern(&lf[122],4,"exit");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\021closure-converted");
lf[124]=C_h_intern(&lf[124],1,"9");
lf[125]=C_h_intern(&lf[125],20,"\003syswarnings-enabled");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000#(don\047t worry - still compiling...)\012");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\016final-analysis");
lf[128]=C_h_intern(&lf[128],1,"8");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\022closure conversion");
lf[130]=C_h_intern(&lf[130],35,"\010compilerperform-closure-conversion");
lf[131]=C_h_intern(&lf[131],28,"\010compilerinsert-timer-checks");
lf[132]=C_h_intern(&lf[132],32,"\010compileremit-global-inline-file");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000&generating global inline file `~a\047 ...");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\011optimized");
lf[135]=C_h_intern(&lf[135],1,"7");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\027secondary flow analysis");
lf[137]=C_h_intern(&lf[137],40,"\010compilerperform-secondary-flow-analysis");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\012doing lfa2");
lf[139]=C_h_intern(&lf[139],1,"s");
lf[140]=C_h_intern(&lf[140],33,"\010compilerprint-program-statistics");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[142]=C_h_intern(&lf[142],1,"4");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[144]=C_h_intern(&lf[144],23,"\010compileremit-type-file");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\035generating type file `~a\047 ...");
lf[146]=C_h_intern(&lf[146],1,"v");
lf[147]=C_h_intern(&lf[147],25,"\010compilerdump-global-refs");
lf[148]=C_h_intern(&lf[148],1,"d");
lf[149]=C_h_intern(&lf[149],29,"\010compilerdump-defined-globals");
lf[150]=C_h_intern(&lf[150],1,"u");
lf[151]=C_h_intern(&lf[151],31,"\010compilerdump-undefined-globals");
lf[152]=C_h_intern(&lf[152],3,"opt");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\003cps");
lf[154]=C_h_intern(&lf[154],1,"3");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\016cps conversion");
lf[156]=C_h_intern(&lf[156],31,"\010compilerperform-cps-conversion");
lf[157]=C_h_intern(&lf[157],6,"unsafe");
lf[158]=C_h_intern(&lf[158],34,"\010compilerscan-toplevel-assignments");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\016specialization");
lf[160]=C_h_intern(&lf[160],1,"P");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\010scrutiny");
lf[162]=C_h_intern(&lf[162],19,"\010compilerscrutinize");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\023performing scrutiny");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\027pre-analysis (scrutiny)");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[166]=C_h_intern(&lf[166],1,"0");
lf[167]=C_h_intern(&lf[167],8,"scrutiny");
lf[168]=C_h_intern(&lf[168],27,"\010compilerload-type-database");
lf[169]=C_h_intern(&lf[169],13,"make-pathname");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\005types");
lf[171]=C_h_intern(&lf[171],14,"symbol->string");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\034type-database `~a\047 not found");
lf[173]=C_h_intern(&lf[173],5,"types");
lf[174]=C_h_intern(&lf[174],17,"ignore-repository");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\052default type-database `types.db\047 not found");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\010types.db");
lf[177]=C_h_intern(&lf[177],23,"\010compilerinline-locally");
lf[178]=C_h_intern(&lf[178],25,"\010compilerload-inline-file");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[180]=C_h_intern(&lf[180],19,"consult-inline-file");
lf[181]=C_h_intern(&lf[181],28,"\010compilerenable-inline-files");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[183]=C_h_intern(&lf[183],12,"file-exists\077");
lf[184]=C_h_intern(&lf[184],28,"\003sysresolve-include-filename");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[186]=C_h_intern(&lf[186],2,"pp");
lf[187]=C_h_intern(&lf[187],1,"M");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\017; requirements:");
lf[189]=C_h_intern(&lf[189],11,"concatenate");
lf[190]=C_h_intern(&lf[190],12,"vector->list");
lf[191]=C_h_intern(&lf[191],26,"\010compilerfile-requirements");
lf[192]=C_h_intern(&lf[192],37,"\010compilerinitialize-analysis-database");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\021initial node tree");
lf[194]=C_h_intern(&lf[194],1,"T");
lf[195]=C_h_intern(&lf[195],25,"\010compilerbuild-node-graph");
lf[196]=C_h_intern(&lf[196],32,"\010compilercanonicalize-begin-body");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\011user pass");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\014User pass...");
lf[199]=C_h_intern(&lf[199],12,"check-syntax");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\015canonicalized");
lf[201]=C_h_intern(&lf[201],1,"2");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\020canonicalization");
lf[203]=C_h_intern(&lf[203],18,"\010compilerunit-name");
lf[204]=C_h_intern(&lf[204],10,"\003sysnotice");
lf[205]=C_h_intern(&lf[205],17,"get-output-string");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\032\047 compiled in dynamic mode");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\016library unit `");
lf[208]=C_h_intern(&lf[208],18,"open-output-string");
lf[209]=C_h_intern(&lf[209],37,"\010compilerdisplay-line-number-database");
lf[210]=C_h_intern(&lf[210],1,"n");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\025line number database:");
lf[212]=C_h_intern(&lf[212],32,"\010compilerdisplay-real-name-table");
lf[213]=C_h_intern(&lf[213],1,"N");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\020real name table:");
lf[215]=C_h_intern(&lf[215],35,"\010compilercompiler-syntax-statistics");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\002\011\011");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[218]=C_h_intern(&lf[218],5,"print");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\030applied compiler syntax:");
lf[220]=C_h_intern(&lf[220],30,"\010compilerwith-debugging-output");
lf[221]=C_h_intern(&lf[221],1,"S");
lf[222]=C_h_intern(&lf[222],28,"\010compilerimmutable-constants");
lf[223]=C_h_intern(&lf[223],19,"\010compilerused-units");
lf[224]=C_h_intern(&lf[224],6,"append");
lf[225]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[226]=C_h_intern(&lf[226],5,"quote");
lf[227]=C_h_intern(&lf[227],28,"\003sysset-profile-info-vector!");
lf[228]=C_h_intern(&lf[228],33,"\010compilerprofile-info-vector-name");
lf[229]=C_h_intern(&lf[229],21,"\010compileremit-profile");
lf[230]=C_h_intern(&lf[230],25,"\003sysregister-profile-info");
lf[231]=C_h_intern(&lf[231],4,"set!");
lf[232]=C_h_intern(&lf[232],13,"\004corecallunit");
lf[233]=C_h_intern(&lf[233],6,"gensym");
lf[234]=C_h_intern(&lf[234],6,"import");
lf[235]=C_h_intern(&lf[235],6,"scheme");
lf[236]=C_h_intern(&lf[236],7,"chicken");
lf[237]=C_h_intern(&lf[237],4,"main");
lf[238]=C_h_intern(&lf[238],11,"\004coremodule");
lf[239]=C_h_intern(&lf[239],28,"\003sysexplicit-library-modules");
lf[240]=C_h_intern(&lf[240],4,"uses");
lf[241]=C_h_intern(&lf[241],7,"declare");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\006source");
lf[243]=C_h_intern(&lf[243],1,"1");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\032User preprocessing pass...");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\021User read pass...");
lf[246]=C_h_intern(&lf[246],21,"\010compilerstring->expr");
lf[247]=C_h_intern(&lf[247],7,"reverse");
lf[248]=C_h_intern(&lf[248],27,"\003syscurrent-source-filename");
lf[249]=C_h_intern(&lf[249],33,"\010compilerclose-checked-input-file");
lf[250]=C_h_intern(&lf[250],25,"\010compilerread/source-info");
lf[251]=C_h_intern(&lf[251],16,"\003sysdynamic-wind");
lf[252]=C_h_intern(&lf[252],34,"\010compilercheck-and-open-input-file");
lf[253]=C_h_intern(&lf[253],8,"epilogue");
lf[254]=C_h_intern(&lf[254],8,"prologue");
lf[255]=C_h_intern(&lf[255],8,"postlude");
lf[256]=C_h_intern(&lf[256],7,"prelude");
lf[257]=C_h_intern(&lf[257],11,"make-vector");
lf[258]=C_h_intern(&lf[258],34,"\010compilerline-number-database-size");
lf[259]=C_h_intern(&lf[259],1,"r");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\021target stack size");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\020target heap size");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\021debugging options");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\007options");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\022compiling `~a\047 ...");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\0001\012Run `csi\047 to start the interactive interpreter.\012");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000.or try `csc\047 for a more convenient interface.\012");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000C\012Enter `chicken -help\047 for information on how to use the compiler,\012");
lf[268]=C_h_intern(&lf[268],5,"-help");
lf[269]=C_h_intern(&lf[269],1,"h");
lf[270]=C_h_intern(&lf[270],2,"-h");
lf[271]=C_h_intern(&lf[271],33,"\010compilerload-identifier-database");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[273]=C_h_intern(&lf[273],18,"accumulate-profile");
lf[274]=C_h_intern(&lf[274],28,"\010compilerprofiled-procedures");
lf[275]=C_h_intern(&lf[275],3,"all");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\015accumulative ");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\032generating ~aprofiled code");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[279]=C_h_intern(&lf[279],39,"\010compilerdefault-profiling-declarations");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000Eyou need to specify -profile-name if using accumulated profiling runs");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\011calltrace");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\022debugging info: ~A");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[285]=C_h_intern(&lf[285],21,"no-usual-integrations");
lf[286]=C_h_intern(&lf[286],17,"standard-bindings");
lf[287]=C_h_intern(&lf[287],34,"\010compilerdefault-standard-bindings");
lf[288]=C_h_intern(&lf[288],17,"extended-bindings");
lf[289]=C_h_intern(&lf[289],34,"\010compilerdefault-extended-bindings");
lf[290]=C_h_intern(&lf[290],1,"m");
lf[291]=C_h_intern(&lf[291],14,"set-gc-report!");
lf[292]=C_h_intern(&lf[292],8,"feature\077");
lf[293]=C_h_intern(&lf[293],18,"\000chicken-bootstrap");
lf[294]=C_h_intern(&lf[294],14,"compile-syntax");
lf[295]=C_h_intern(&lf[295],25,"\003sysenable-runtime-macros");
lf[296]=C_h_intern(&lf[296],22,"\004corerequire-extension");
lf[297]=C_h_intern(&lf[297],14,"string->symbol");
lf[298]=C_h_intern(&lf[298],17,"require-extension");
lf[299]=C_h_intern(&lf[299],28,"\010compilerpostponed-initforms");
lf[300]=C_h_intern(&lf[300],6,"delete");
lf[301]=C_h_intern(&lf[301],3,"eq\077");
lf[302]=C_h_intern(&lf[302],4,"load");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\036Loading compiler extensions...");
lf[304]=C_h_intern(&lf[304],6,"extend");
lf[305]=C_h_intern(&lf[305],12,"string-split");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[307]=C_h_intern(&lf[307],10,"append-map");
lf[308]=C_h_intern(&lf[308],10,"no-feature");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[310]=C_h_intern(&lf[310],7,"feature");
lf[311]=C_h_intern(&lf[311],12,"load-verbose");
lf[312]=C_h_intern(&lf[312],38,"no-procedure-checks-for-usual-bindings");
lf[313]=C_h_intern(&lf[313],8,"\003sysput!");
lf[314]=C_h_intern(&lf[314],21,"\010compileralways-bound");
lf[315]=C_h_intern(&lf[315],34,"\010compileralways-bound-to-procedure");
lf[316]=C_h_intern(&lf[316],41,"no-procedure-checks-for-toplevel-bindings");
lf[317]=C_h_intern(&lf[317],35,"\010compilerno-global-procedure-checks");
lf[318]=C_h_intern(&lf[318],19,"no-procedure-checks");
lf[319]=C_h_intern(&lf[319],28,"\010compilerno-procedure-checks");
lf[320]=C_h_intern(&lf[320],15,"no-bound-checks");
lf[321]=C_h_intern(&lf[321],24,"\010compilerno-bound-checks");
lf[322]=C_h_intern(&lf[322],14,"no-argc-checks");
lf[323]=C_h_intern(&lf[323],23,"\010compilerno-argc-checks");
lf[324]=C_h_intern(&lf[324],20,"keep-shadowed-macros");
lf[325]=C_h_intern(&lf[325],33,"\010compilerundefine-shadowed-macros");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000(source- and output-filename are the same");
lf[328]=C_h_intern(&lf[328],12,"include-path");
lf[329]=C_h_intern(&lf[329],11,"r5rs-syntax");
lf[330]=C_h_intern(&lf[330],13,"symbol-escape");
lf[331]=C_h_intern(&lf[331],20,"parentheses-synonyms");
lf[332]=C_h_intern(&lf[332],5,"\000none");
lf[333]=C_h_intern(&lf[333],14,"case-sensitive");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000.Disabled the CHICKEN extensions to R5RS syntax");
lf[335]=C_h_intern(&lf[335],16,"no-symbol-escape");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000$Disabled support for escaped symbols");
lf[337]=C_h_intern(&lf[337],23,"no-parenthesis-synonyms");
lf[338]=C_h_intern(&lf[338],20,"parenthesis-synonyms");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000)Disabled support for parenthesis synonyms");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[341]=C_h_intern(&lf[341],7,"\000prefix");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[344]=C_h_intern(&lf[344],7,"\000suffix");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000+invalid argument to `-keyword-style\047 option");
lf[346]=C_h_intern(&lf[346],16,"case-insensitive");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000,Identifiers and symbols are case insensitive");
lf[348]=C_h_intern(&lf[348],24,"\010compilerinline-max-size");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047");
lf[350]=C_h_intern(&lf[350],26,"\010compilerlocal-definitions");
lf[351]=C_h_intern(&lf[351],6,"inline");
lf[352]=C_h_intern(&lf[352],30,"emit-external-prototypes-first");
lf[353]=C_h_intern(&lf[353],30,"\010compilerexternal-protos-first");
lf[354]=C_h_intern(&lf[354],5,"block");
lf[355]=C_h_intern(&lf[355],26,"\010compilerblock-compilation");
lf[356]=C_h_intern(&lf[356],17,"fixnum-arithmetic");
lf[357]=C_h_intern(&lf[357],11,"number-type");
lf[358]=C_h_intern(&lf[358],6,"fixnum");
lf[359]=C_h_intern(&lf[359],18,"disable-interrupts");
lf[360]=C_h_intern(&lf[360],10,"setup-mode");
lf[361]=C_h_intern(&lf[361],14,"\003syssetup-mode");
lf[362]=C_h_intern(&lf[362],11,"no-warnings");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\025Warnings are disabled");
lf[364]=C_h_intern(&lf[364],12,"strict-types");
lf[365]=C_h_intern(&lf[365],30,"\010compilerstrict-variable-types");
lf[366]=C_h_intern(&lf[366],19,"\003sysnotices-enabled");
lf[367]=C_h_intern(&lf[367],13,"inline-global");
lf[368]=C_h_intern(&lf[368],5,"local");
lf[369]=C_h_intern(&lf[369],18,"no-compiler-syntax");
lf[370]=C_h_intern(&lf[370],32,"\010compilercompiler-syntax-enabled");
lf[371]=C_h_intern(&lf[371],14,"no-lambda-info");
lf[372]=C_h_intern(&lf[372],26,"\010compileremit-closure-info");
lf[373]=C_h_intern(&lf[373],3,"raw");
lf[374]=C_h_intern(&lf[374],8,"unboxing");
lf[375]=C_h_intern(&lf[375],7,"warning");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000#obsolete compiler option: -unboxing");
lf[377]=C_h_intern(&lf[377],11,"lambda-lift");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000&obsolete compiler option: -lambda-lift");
lf[379]=C_h_intern(&lf[379],12,"emit-exports");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\047obsolete compiler option: -emit-exports");
lf[381]=C_h_intern(&lf[381],1,"b");
lf[382]=C_h_intern(&lf[382],15,"\003sysstart-timer");
lf[383]=C_h_intern(&lf[383],25,"emit-all-import-libraries");
lf[384]=C_h_intern(&lf[384],29,"\010compilerall-import-libraries");
lf[385]=C_h_intern(&lf[385],17,"\003sysstring-append");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\013.import.scm");
lf[387]=C_h_intern(&lf[387],19,"emit-import-library");
lf[388]=C_h_intern(&lf[388],28,"\010compilerprint-debug-options");
lf[389]=C_h_intern(&lf[389],16,"\003sysstring->list");
lf[390]=C_h_intern(&lf[390],5,"debug");
lf[391]=C_h_intern(&lf[391],18,"\003sysdload-disabled");
lf[392]=C_h_intern(&lf[392],15,"repository-path");
lf[393]=C_h_intern(&lf[393],30,"\010compilerstandalone-executable");
lf[394]=C_h_intern(&lf[394],29,"\010compilerstring->c-identifier");
lf[395]=C_h_intern(&lf[395],18,"\010compilerstringify");
lf[396]=C_h_intern(&lf[396],10,"stack-size");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[399]=C_h_intern(&lf[399],24,"get-environment-variable");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[401]=C_h_intern(&lf[401],9,"to-stdout");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[403]=C_h_intern(&lf[403],13,"pathname-file");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\003out");
lf[405]=C_h_intern(&lf[405],29,"\010compilerdefault-declarations");
lf[406]=C_h_intern(&lf[406],30,"\010compilerunits-used-by-default");
lf[407]=C_h_intern(&lf[407],28,"\010compilerinitialize-compiler");
lf[408]=C_h_intern(&lf[408],14,"make-parameter");
C_register_lf2(lf,409,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1602,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:648: print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1759(t3,t2,lf[134],lf[135],((C_word*)((C_word*)t0)[2])[1]);}

/* k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[15])[1])?*((C_word*)lf[131]+1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[15])[1];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2840,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=t5;
t7=C_a_i_list(&a,1,t4);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5458,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t8,*((C_word*)lf[110]+1),lf[133],t7);}
else{
t4=t2;
f_2731(2,t4,C_SCHEME_UNDEFINED);}}

/* k4391 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in ... */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_string_equal_p(lf[340],t1))){
/* batch-driver.scm:254: keyword-style */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[341]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[342],t1))){
/* batch-driver.scm:255: keyword-style */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[332]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[343],t1))){
/* batch-driver.scm:256: keyword-style */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[344]);}
else{
/* batch-driver.scm:257: quit */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[345]);}}}}

/* k4147 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in ... */
static void C_ccall f_4149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4149,2,t0,t1);}
t2=*((C_word*)lf[289]+1);
t3=C_i_check_list_2(*((C_word*)lf[289]+1),lf[41]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4193,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4193(t7,((C_word*)t0)[2],*((C_word*)lf[289]+1));}

/* k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in ... */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:667: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[9],t2,t3);}

/* k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in ... */
static void C_ccall f_2753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:665: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1979(t3,t2);}

/* k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in ... */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* batch-driver.scm:664: exit */
t3=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(0));}
else{
t3=t2;
f_2753(2,t3,C_SCHEME_UNDEFINED);}}

/* k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in ... */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:663: print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1759(t3,t2,lf[123],lf[124],((C_word*)((C_word*)t0)[2])[1]);}

/* k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(*((C_word*)lf[125]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[12],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:101: current-milliseconds */
t4=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2747(2,t3,C_SCHEME_UNDEFINED);}}

/* k3397 in k3393 in k3381 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in ... */
static void C_fcall f_3399(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3399,NULL,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[87]+1);
t8=C_i_check_list_2(*((C_word*)lf[87]+1),lf[55]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3440,a[2]=t6,a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3440(t13,t9,*((C_word*)lf[87]+1));}

/* k3393 in k3381 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in ... */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[46],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[229]+1))){
t4=C_a_i_list(&a,2,lf[226],((C_word*)t0)[7]);
t5=*((C_word*)lf[203]+1);
t6=(C_truep(*((C_word*)lf[203]+1))?C_a_i_list(&a,2,lf[226],C_SCHEME_FALSE):(C_truep(((C_word*)t0)[8])?C_a_i_list(&a,2,lf[226],((C_word*)t0)[8]):C_a_i_list(&a,2,lf[226],C_SCHEME_TRUE)));
t7=C_a_i_list(&a,3,lf[230],t4,t6);
t8=C_a_i_list(&a,3,lf[231],*((C_word*)lf[228]+1),t7);
t9=t3;
f_3399(t9,C_a_i_list(&a,1,t8));}
else{
t4=t3;
f_3399(t4,C_SCHEME_END_OF_LIST);}}

/* k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:659: print-db */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1781(t3,t2,lf[127],lf[128],((C_word*)t0)[3],((C_word*)t0)[14]);}

/* print-header in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_fcall f_1732(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1732,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1736,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:107: debugging */
t5=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[34],lf[35],t2);}

/* k1734 in print-header in k1712 in k1686 in k1681 in k1678 in k1675 in k4762 in k1662 in compile-source-file in k1626 in k1622 in k1618 in k1614 in k1610 in k1606 in k1603 in k1600 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1736,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[28]+1)))){
t2=*((C_word*)lf[29]+1);
t3=*((C_word*)lf[29]+1);
t4=C_i_check_port_2(*((C_word*)lf[29]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[30]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1748,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:110: ##sys#write-char-0 */
t6=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(91),*((C_word*)lf[29]+1));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3348 in for-each-loop898 in k3304 in a3301 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in ... */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3340(t3,((C_word*)t0)[4],t2);}

/* k3381 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in ... */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3383,2,t0,t1);}
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[223]+1);
t8=C_i_check_list_2(*((C_word*)lf[223]+1),lf[55]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3504,a[2]=t6,a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3504(t13,t9,*((C_word*)lf[223]+1));}

/* k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in ... */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2583,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2588,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp));
t5=((C_word*)t3)[1];
f_2588(t5,((C_word*)t0)[16],C_fix(1),((C_word*)t0)[17],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in ... */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:577: print-node */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1759(t3,t2,lf[153],lf[154],((C_word*)t0)[17]);}

/* loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in ... */
static void C_fcall f_2588(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2588,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2592,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=t1,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[13],a[20]=((C_word*)t0)[14],a[21]=((C_word*)t0)[15],a[22]=((C_word*)t0)[16],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:585: begin-time */
t9=((C_word*)((C_word*)t0)[5])[1];
f_1979(t9,t8);}

/* k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in ... */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:575: perform-cps-conversion */
t3=*((C_word*)lf[156]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[17]);}

/* k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in ... */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:573: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1979(t3,t2);}

/* k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in ... */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2330,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3969,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t7,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:332: collect-options */
t9=((C_word*)((C_word*)t0)[20])[1];
f_1944(t9,t8,lf[298]);}

/* k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in ... */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[294],t4))){
t5=C_set_block_item(lf[295] /* ##sys#enable-runtime-macros */,0,C_SCHEME_TRUE);
t6=t3;
f_2337(t6,t5);}
else{
t5=t3;
f_2337(t5,C_SCHEME_UNDEFINED);}}

/* k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in ... */
static void C_fcall f_2337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2337,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[31])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[29],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:338: option-arg */
f_1633(t3,((C_word*)t0)[31]);}
else{
t3=t2;
f_2341(2,t3,C_SCHEME_FALSE);}}

/* k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in ... */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2577,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t2,tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm:576: end-time */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1989(t4,t3,lf[155]);}

/* k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in ... */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:587: analyze */
t3=((C_word*)((C_word*)t0)[11])[1];
f_2029(t3,t2,lf[152],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]));}

/* k4201 in for-each-loop468 in k4147 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in ... */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4193(t3,((C_word*)t0)[4],t2);}

/* k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in ... */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2356,2,t0,t1);}
t2=C_mutate2((C_word*)lf[76]+1 /* (set! ##compiler#bootstrap-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(C_i_memq(lf[290],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:345: set-gc-report! */
t4=*((C_word*)lf[291]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}
else{
t4=t3;
f_2359(2,t4,C_SCHEME_UNDEFINED);}}

/* k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in ... */
static void C_ccall f_2595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2595,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(*((C_word*)lf[94]+1))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[22],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[150],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:590: dump-undefined-globals */
t5=*((C_word*)lf[151]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t5=t4;
f_2864(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2598(2,t4,C_SCHEME_UNDEFINED);}}

/* k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in ... */
static void C_ccall f_2359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[285],t3))){
t4=C_set_block_item(((C_word*)t0)[18],0,C_SCHEME_FALSE);
t5=t2;
f_2362(t5,t4);}
else{
t4=C_mutate2((C_word*)lf[286]+1 /* (set! standard-bindings ...) */,*((C_word*)lf[287]+1));
t5=C_mutate2((C_word*)lf[288]+1 /* (set! extended-bindings ...) */,*((C_word*)lf[289]+1));
t6=t2;
f_2362(t6,t5);}}

/* k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in ... */
static void C_ccall f_2598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2598,2,t0,t1);}
t2=C_set_block_item(lf[94] /* ##compiler#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:600: end-time */
t4=((C_word*)((C_word*)t0)[10])[1];
f_1989(t4,t3,lf[143]);}

/* k4427 in k4424 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in ... */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:251: case-sensitive */
t2=*((C_word*)lf[333]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4424 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in ... */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:250: register-feature! */
t3=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[346]);}

/* for-each-loop419 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in ... */
static void C_fcall f_4216(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4216,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4226,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4126,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,t6,lf[315],C_SCHEME_TRUE);}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[313]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t6,lf[315],t9);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in ... */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2341,2,t0,t1);}
t2=C_mutate2((C_word*)lf[70]+1 /* (set! ##compiler#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[28])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[29],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:341: option-arg */
f_1633(t4,((C_word*)t0)[28]);}
else{
t4=t3;
f_2345(2,t4,C_SCHEME_FALSE);}}

/* k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in ... */
static void C_ccall f_2345(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2345,2,t0,t1);}
t2=C_mutate2((C_word*)lf[71]+1 /* (set! ##compiler#target-stack-size ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[72],t3);
t5=C_i_not(t4);
t6=C_mutate2((C_word*)lf[73]+1 /* (set! ##compiler#emit-trace-info ...) */,t5);
t7=((C_word*)t0)[2];
t8=C_mutate2((C_word*)lf[74]+1 /* (set! ##compiler#disable-stack-overflow-checking ...) */,C_u_i_memq(lf[75],t7));
t9=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
/* batch-driver.scm:344: feature? */
t10=*((C_word*)lf[292]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[293]);}

/* k4224 in for-each-loop419 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in ... */
static void C_ccall f_4226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4216(t3,((C_word*)t0)[4],t2);}

/* k4447 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in ... */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2223(t3,t2);}

/* k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in ... */
static void C_fcall f_2362(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2362,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(*((C_word*)lf[73]+1))){
t3=t2;
t4=C_a_i_list(&a,1,lf[282]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5552,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[283],t4);}
else{
t3=t2;
t4=C_a_i_list(&a,1,lf[284]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5558,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[283],t4);}}

/* k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in ... */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[27])){
t3=C_i_car(((C_word*)t0)[27]);
t4=C_eqp(lf[273],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[24],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
if(C_truep(((C_word*)t0)[22])){
t7=t6;
f_3887(2,t7,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm:358: quit */
t7=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[281]);}}
else{
t7=t6;
f_3887(2,t7,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2368(2,t3,C_SCHEME_UNDEFINED);}}

/* k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in ... */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:372: load-identifier-database */
t3=*((C_word*)lf[271]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[272]);}

/* k4440 in k4434 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in ... */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2((C_word*)lf[348]+1 /* (set! ##compiler#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_2228(t3,t2);}

/* k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in ... */
static void C_ccall f_2314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:320: delete */
t3=*((C_word*)lf[300]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[67],*((C_word*)lf[68]+1),*((C_word*)lf[301]+1));}

/* k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in ... */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2318,2,t0,t1);}
t2=C_mutate2((C_word*)lf[68]+1 /* (set! ##sys#features ...) */,t1);
t3=C_a_i_cons(&a,2,lf[69],*((C_word*)lf[68]+1));
t4=C_mutate2((C_word*)lf[68]+1 /* (set! ##sys#features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:322: user-post-analysis-pass */
t6=*((C_word*)lf[4]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in ... */
static void C_ccall f_2504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3291,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:481: debugging */
t4=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[213],lf[214]);}

/* k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in ... */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2501,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t3,a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[215]+1)))){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3302,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:474: with-debugging-output */
t6=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[221],t5);}
else{
t5=t4;
f_2504(2,t5,C_SCHEME_UNDEFINED);}}

/* k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in ... */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3285,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:483: debugging */
t4=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[210],lf[211]);}

/* k2306 in for-each-loop569 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in ... */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:318: load */
t2=*((C_word*)lf[302]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in ... */
static void C_fcall f_2218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2218,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[60],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[21],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:242: option-arg */
f_1633(t5,t3);}
else{
t5=t4;
f_2223(t5,C_SCHEME_FALSE);}}

/* k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in ... */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:499: user-pass */
t3=*((C_word*)lf[3]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in ... */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=((C_word*)t0)[19];
if(C_truep(C_u_i_memq(lf[199],t3))){
/* batch-driver.scm:496: exit */
t4=*((C_word*)lf[122]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=t2;
f_2524(2,t4,C_SCHEME_UNDEFINED);}}

/* k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in ... */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3204,a[2]=t2,a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5496,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[198],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_2530(2,t4,C_SCHEME_UNDEFINED);}}

/* k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in ... */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
t2=C_mutate2((C_word*)lf[85]+1 /* (set! ##sys#line-number-database ...) */,*((C_word*)lf[88]+1));
t3=C_set_block_item(lf[88] /* ##compiler#line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:493: end-time */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1989(t5,t4,lf[202]);}

/* k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in ... */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=(C_truep(*((C_word*)lf[203]+1))?((C_word*)t0)[9]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:488: open-output-string */
t5=*((C_word*)lf[208]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2513(2,t4,C_SCHEME_UNDEFINED);}}

/* k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in ... */
static void C_ccall f_2518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:494: print-expr */
t3=((C_word*)((C_word*)t0)[21])[1];
f_1808(t3,t2,lf[200],lf[201],((C_word*)((C_word*)t0)[20])[1]);}

/* k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in ... */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[329],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4362,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5586,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[334],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2243(2,t4,C_SCHEME_UNDEFINED);}}

/* k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in ... */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
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
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=C_mutate2((C_word*)lf[62]+1 /* (set! ##compiler#verbose-mode ...) */,((C_word*)t0)[2]);
t3=C_set_block_item(lf[63] /* ##sys#read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[14]+1);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4316,a[2]=t4,a[3]=((C_word*)t0)[34],a[4]=t8,a[5]=t6,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:273: collect-options */
t11=((C_word*)((C_word*)t0)[23])[1];
f_1944(t11,t10,lf[328]);}

/* k3973 in k3967 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in ... */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:329: append */
t2=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* map-loop588 in k3967 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in ... */
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3977,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3966,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:331: string->symbol */
t7=*((C_word*)lf[297]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in ... */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[35])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4393,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:253: option-arg */
f_1633(t3,((C_word*)t0)[35]);}
else{
t3=t2;
f_2234(2,t3,C_SCHEME_UNDEFINED);}}

/* k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in ... */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[337],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4387,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5598,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[339],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2237(2,t4,C_SCHEME_UNDEFINED);}}

/* k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in ... */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[335],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4379,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5592,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[336],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2240(2,t4,C_SCHEME_UNDEFINED);}}

/* k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in ... */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2249,2,t0,t1);}
t2=C_mutate2((C_word*)lf[64]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[14])){
if(C_truep(((C_word*)t0)[7])){
if(C_truep(C_i_string_equal_p(((C_word*)t0)[14],((C_word*)t0)[7]))){
/* batch-driver.scm:277: quit */
t4=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[327]);}
else{
t4=t3;
f_2252(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2252(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2252(2,t4,C_SCHEME_UNDEFINED);}}

/* k3967 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in ... */
static void C_ccall f_3969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3969,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[55]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3977(t7,t3,t1);}

/* k3964 in map-loop588 in k3967 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in ... */
static void C_ccall f_3966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3966,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[296],t2,C_SCHEME_TRUE));}

/* k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in ... */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2283,2,t0,t1);}
t2=*((C_word*)lf[66]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4058,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4066,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:311: collect-options */
t6=((C_word*)((C_word*)t0)[21])[1];
f_1944(t6,t5,lf[308]);}

/* k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in ... */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4068,a[2]=t4,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4068(t6,t2,t1);}

/* k4290 in map-loop393 in k4256 in a4253 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in ... */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4292,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4263(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4263(t6,((C_word*)t0)[5],t5);}}

/* k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in ... */
static void C_fcall f_2262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2262,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[320],t3))){
t4=C_set_block_item(lf[321] /* ##compiler#no-bound-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2265(t5,t4);}
else{
t4=t2;
f_2265(t4,C_SCHEME_UNDEFINED);}}

/* k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in ... */
static void C_fcall f_2265(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2265,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[318],t3))){
t4=C_set_block_item(lf[319] /* ##compiler#no-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2268(t5,t4);}
else{
t4=t2;
f_2268(t4,C_SCHEME_UNDEFINED);}}

/* for-each-loop1027 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in ... */
static void C_fcall f_3065(C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3065,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3075,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3054,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t7;
t9=C_a_i_list(&a,1,t6);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5476,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t10,*((C_word*)lf[110]+1),lf[179],t9);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in ... */
static void C_fcall f_2271(C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2271,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[312],t3))){
t4=*((C_word*)lf[287]+1);
t5=C_i_check_list_2(*((C_word*)lf[287]+1),lf[41]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4149,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4216,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_4216(t10,t6,*((C_word*)lf[287]+1));}
else{
t4=t2;
f_2274(2,t4,C_SCHEME_UNDEFINED);}}

/* k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in ... */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_i_memq(lf[34],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:303: load-verbose */
t3=*((C_word*)lf[311]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}
else{
t3=t2;
f_2277(2,t3,C_SCHEME_UNDEFINED);}}

/* k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in ... */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2289,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[67],*((C_word*)lf[68]+1));
t3=C_mutate2((C_word*)lf[68]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:315: collect-options */
t5=((C_word*)((C_word*)t0)[21])[1];
f_1944(t5,t4,lf[304]);}

/* k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in ... */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4035,a[2]=t4,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4035(t6,t2,t1);}

/* k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in ... */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4254,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4300,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:281: collect-options */
t5=((C_word*)((C_word*)t0)[22])[1];
f_1944(t5,t4,lf[240]);}

/* k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2256,2,t0,t1);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[2],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[324],t4))){
t5=C_set_block_item(lf[325] /* ##compiler#undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t6=t3;
f_2259(t6,t5);}
else{
t5=t3;
f_2259(t5,C_SCHEME_UNDEFINED);}}

/* k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in ... */
static void C_fcall f_2268(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2268,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[316],t3))){
t4=C_set_block_item(lf[317] /* ##compiler#no-global-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2271(t5,t4);}
else{
t4=t2;
f_2271(t4,C_SCHEME_UNDEFINED);}}

/* k3052 in for-each-loop1027 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:536: load-inline-file */
t2=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3940 in k2339 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in ... */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:341: arg-val */
f_1854(((C_word*)t0)[3],t1);}

/* k3947 in k2335 in k2332 in k2328 in k2324 in k2316 in k2312 in k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in ... */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:338: arg-val */
f_1854(((C_word*)t0)[3],t1);}

/* k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in ... */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2277,2,t0,t1);}
t2=*((C_word*)lf[65]+1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4091,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4099,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:308: collect-options */
t6=((C_word*)((C_word*)t0)[21])[1];
f_1944(t6,t5,lf[310]);}

/* k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in ... */
static void C_fcall f_2204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2204,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[354],t3))){
t4=C_set_block_item(lf[355] /* ##compiler#block-compilation */,0,C_SCHEME_TRUE);
t5=t2;
f_2207(t5,t4);}
else{
t4=t2;
f_2207(t4,C_SCHEME_UNDEFINED);}}

/* k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in ... */
static void C_fcall f_2201(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2201,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[356],t3))){
t4=C_mutate2((C_word*)lf[357]+1 /* (set! number-type ...) */,lf[358]);
t5=t2;
f_2204(t5,t4);}
else{
t4=t2;
f_2204(t4,C_SCHEME_UNDEFINED);}}

/* k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in ... */
static void C_fcall f_2259(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2259,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[322],t3))){
t4=C_set_block_item(lf[323] /* ##compiler#no-argc-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2262(t5,t4);}
else{
t4=t2;
f_2262(t4,C_SCHEME_UNDEFINED);}}

/* f5446 */
static void C_ccall f5446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* f5440 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in ... */
static void C_ccall f5440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k3073 in for-each-loop1027 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3065(t3,((C_word*)t0)[4],t2);}

/* k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in ... */
static void C_fcall f_2207(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2207,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[352],t3))){
t4=C_set_block_item(lf[353] /* ##compiler#external-protos-first */,0,C_SCHEME_TRUE);
t5=t2;
f_2210(t5,t4);}
else{
t4=t2;
f_2210(t4,C_SCHEME_UNDEFINED);}}

/* k4434 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in ... */
static void C_ccall f_4436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4436,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_mutate2((C_word*)lf[348]+1 /* (set! ##compiler#inline-max-size ...) */,t2);
t5=((C_word*)t0)[2];
f_2228(t5,t4);}
else{
/* batch-driver.scm:247: quit */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[349],t1);}}

/* f5458 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in loop in k2581 in k2578 in k2575 in k2572 in k2569 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k2297 in k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in ... */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2299,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[41]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4012(t7,t3,((C_word*)t0)[2]);}

/* k2294 in k2287 in k2284 in k2281 in k2278 in k2275 in k2272 in k2269 in k2266 in k2263 in k2260 in k2257 in k2254 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in ... */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2299,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5568,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[110]+1),lf[303],C_SCHEME_END_OF_LIST);}

/* f5452 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in k2600 in k2596 in k2593 in k2590 in ... */
static void C_ccall f5452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* a4253 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in ... */
static void C_ccall f_4254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4254,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:280: string-split */
t8=*((C_word*)lf[305]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,lf[326]);}

/* k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in ... */
static void C_fcall f_2223(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2223,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[61],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4436,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:245: option-arg */
f_1633(t5,t3);}
else{
t5=t4;
f_2228(t5,C_SCHEME_FALSE);}}

/* map-loop393 in k4256 in a4253 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in ... */
static void C_fcall f_4263(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4263,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:280: g399 */
t5=*((C_word*)lf[297]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3089 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in ... */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3091,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:526: file-exists? */
t4=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k4256 in a4253 in k2250 in k2247 in k2241 in k2238 in k2235 in k2232 in k2229 in k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in ... */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4258,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4263(t5,((C_word*)t0)[4],t1);}

/* k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in ... */
static void C_fcall f_2213(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2213,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[59],t2);
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t3)){
t5=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t6=C_set_block_item(lf[350] /* ##compiler#local-definitions */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4455,a[2]=((C_word*)t0)[19],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:240: option-arg */
f_1633(t7,t3);}
else{
t5=t4;
f_2218(t5,C_SCHEME_FALSE);}}

/* k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in ... */
static void C_fcall f_2210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2210,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[351],t3))){
t4=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t5=t2;
f_2213(t5,t4);}
else{
t4=t2;
f_2213(t4,C_SCHEME_UNDEFINED);}}

/* k2226 in k2221 in k2216 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in ... */
static void C_fcall f_2228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2228,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[346],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5604,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[110]+1),lf[347],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2231(2,t4,C_SCHEME_UNDEFINED);}}

/* k4482 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in k2148 in k2141 in k2138 in k2132 in k2109 in k2106 in k2099 in k2096 in k2093 in ... */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(lf[125] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_2189(t4,t3);}

/* f5514 in k2466 in k2463 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in ... */
static void C_ccall f5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* f5476 in for-each-loop1027 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k3040 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f_3042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_2919(2,t3,t2);}
else{
/* batch-driver.scm:543: quit */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[175]);}}

/* k4453 in k2211 in k2208 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2163 in k2160 in k2157 in k2154 in k2151 in ... */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2218(t3,t2);}

/* f5520 in k2460 in k2457 in k2454 in k2451 in k2448 in k2444 in k2440 in k2437 in k2434 in k2431 in k2427 in k2388 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2343 in k2339 in k2335 in ... */
static void C_ccall f5520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* f5484 in k3098 in k3089 in for-each-loop1006 in k2551 in k2548 in k2545 in k2542 in k2539 in k3195 in k2528 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in ... */
static void C_ccall f5484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

/* k2806 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in a2766 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2732 in k2729 in k2726 in k2723 in k2606 in k2603 in ... */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:680: ##sys#display-times */
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5496 in k2525 in k2522 in k2519 in k2516 in k2511 in k2508 in k2505 in k2502 in k2499 in k2493 in k2490 in k2484 in k2481 in k2478 in k2475 in k2472 in k2469 in k2466 in k2463 in k2460 in k2457 in ... */
static void C_ccall f5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:104: debugging */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[34],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[419] = {
{"f_2846:batch_2ddriver_2escm",(void*)f_2846},
{"f_2849:batch_2ddriver_2escm",(void*)f_2849},
{"f_2840:batch_2ddriver_2escm",(void*)f_2840},
{"f5534:batch_2ddriver_2escm",(void*)f5534},
{"f_2834:batch_2ddriver_2escm",(void*)f_2834},
{"f_3861:batch_2ddriver_2escm",(void*)f_3861},
{"f_2101:batch_2ddriver_2escm",(void*)f_2101},
{"f_2108:batch_2ddriver_2escm",(void*)f_2108},
{"f5546:batch_2ddriver_2escm",(void*)f5546},
{"f5540:batch_2ddriver_2escm",(void*)f5540},
{"f_3869:batch_2ddriver_2escm",(void*)f_3869},
{"f5464:batch_2ddriver_2escm",(void*)f5464},
{"f_2867:batch_2ddriver_2escm",(void*)f_2867},
{"f_2864:batch_2ddriver_2escm",(void*)f_2864},
{"f_2134:batch_2ddriver_2escm",(void*)f_2134},
{"f5592:batch_2ddriver_2escm",(void*)f5592},
{"f5598:batch_2ddriver_2escm",(void*)f5598},
{"f_4099:batch_2ddriver_2escm",(void*)f_4099},
{"f_3887:batch_2ddriver_2escm",(void*)f_3887},
{"f_4006:batch_2ddriver_2escm",(void*)f_4006},
{"f_2125:batch_2ddriver_2escm",(void*)f_2125},
{"f_2129:batch_2ddriver_2escm",(void*)f_2129},
{"f_4091:batch_2ddriver_2escm",(void*)f_4091},
{"f_4012:batch_2ddriver_2escm",(void*)f_4012},
{"f_2876:batch_2ddriver_2escm",(void*)f_2876},
{"f_4022:batch_2ddriver_2escm",(void*)f_4022},
{"f_2143:batch_2ddriver_2escm",(void*)f_2143},
{"f_2140:batch_2ddriver_2escm",(void*)f_2140},
{"f_2870:batch_2ddriver_2escm",(void*)f_2870},
{"f5586:batch_2ddriver_2escm",(void*)f5586},
{"f_4035:batch_2ddriver_2escm",(void*)f_4035},
{"f_2174:batch_2ddriver_2escm",(void*)f_2174},
{"f_2171:batch_2ddriver_2escm",(void*)f_2171},
{"f_2177:batch_2ddriver_2escm",(void*)f_2177},
{"f_4045:batch_2ddriver_2escm",(void*)f_4045},
{"f_3814:batch_2ddriver_2escm",(void*)f_3814},
{"f_4058:batch_2ddriver_2escm",(void*)f_4058},
{"f_3811:batch_2ddriver_2escm",(void*)f_3811},
{"f_2165:batch_2ddriver_2escm",(void*)f_2165},
{"f_2162:batch_2ddriver_2escm",(void*)f_2162},
{"f_2168:batch_2ddriver_2escm",(void*)f_2168},
{"f_4068:batch_2ddriver_2escm",(void*)f_4068},
{"f_2111:batch_2ddriver_2escm",(void*)f_2111},
{"f_4066:batch_2ddriver_2escm",(void*)f_4066},
{"f_4078:batch_2ddriver_2escm",(void*)f_4078},
{"f_3854:batch_2ddriver_2escm",(void*)f_3854},
{"f_2098:batch_2ddriver_2escm",(void*)f_2098},
{"f_2095:batch_2ddriver_2escm",(void*)f_2095},
{"f_2049:batch_2ddriver_2escm",(void*)f_2049},
{"f_2852:batch_2ddriver_2escm",(void*)f_2852},
{"f_3735:batch_2ddriver_2escm",(void*)f_3735},
{"f_3737:batch_2ddriver_2escm",(void*)f_3737},
{"f_2043:batch_2ddriver_2escm",(void*)f_2043},
{"f_3724:batch_2ddriver_2escm",(void*)f_3724},
{"f_3728:batch_2ddriver_2escm",(void*)f_3728},
{"f_3826:batch_2ddriver_2escm",(void*)f_3826},
{"f_3821:batch_2ddriver_2escm",(void*)f_3821},
{"f_3893:batch_2ddriver_2escm",(void*)f_3893},
{"f_1808:batch_2ddriver_2escm",(void*)f_1808},
{"f5558:batch_2ddriver_2escm",(void*)f5558},
{"f5552:batch_2ddriver_2escm",(void*)f5552},
{"f_1803:batch_2ddriver_2escm",(void*)f_1803},
{"f_1800:batch_2ddriver_2escm",(void*)f_1800},
{"f_2029:batch_2ddriver_2escm",(void*)f_2029},
{"f5568:batch_2ddriver_2escm",(void*)f5568},
{"f_3832:batch_2ddriver_2escm",(void*)f_3832},
{"f_3836:batch_2ddriver_2escm",(void*)f_3836},
{"f_2027:batch_2ddriver_2escm",(void*)f_2027},
{"f_2019:batch_2ddriver_2escm",(void*)f_2019},
{"f_3690:batch_2ddriver_2escm",(void*)f_3690},
{"f_3697:batch_2ddriver_2escm",(void*)f_3697},
{"f_2038:batch_2ddriver_2escm",(void*)f_2038},
{"f_2031:batch_2ddriver_2escm",(void*)f_2031},
{"f_2035:batch_2ddriver_2escm",(void*)f_2035},
{"f_1815:batch_2ddriver_2escm",(void*)f_1815},
{"f_2541:batch_2ddriver_2escm",(void*)f_2541},
{"f_2547:batch_2ddriver_2escm",(void*)f_2547},
{"f_2544:batch_2ddriver_2escm",(void*)f_2544},
{"f_2059:batch_2ddriver_2escm",(void*)f_2059},
{"f_2530:batch_2ddriver_2escm",(void*)f_2530},
{"f_2617:batch_2ddriver_2escm",(void*)f_2617},
{"f_2054:batch_2ddriver_2escm",(void*)f_2054},
{"f_2614:batch_2ddriver_2escm",(void*)f_2614},
{"f_2008:batch_2ddriver_2escm",(void*)f_2008},
{"f_2562:batch_2ddriver_2escm",(void*)f_2562},
{"f_2565:batch_2ddriver_2escm",(void*)f_2565},
{"f_1831:batch_2ddriver_2escm",(void*)f_1831},
{"f_4764:batch_2ddriver_2escm",(void*)f_4764},
{"f_3717:batch_2ddriver_2escm",(void*)f_3717},
{"f_2002:batch_2ddriver_2escm",(void*)f_2002},
{"f_2608:batch_2ddriver_2escm",(void*)f_2608},
{"f_2605:batch_2ddriver_2escm",(void*)f_2605},
{"f_2005:batch_2ddriver_2escm",(void*)f_2005},
{"f_2602:batch_2ddriver_2escm",(void*)f_2602},
{"f_2550:batch_2ddriver_2escm",(void*)f_2550},
{"f_2553:batch_2ddriver_2escm",(void*)f_2553},
{"f_2556:batch_2ddriver_2escm",(void*)f_2556},
{"f_2559:batch_2ddriver_2escm",(void*)f_2559},
{"f_3706:batch_2ddriver_2escm",(void*)f_3706},
{"f_3701:batch_2ddriver_2escm",(void*)f_3701},
{"f_3772:batch_2ddriver_2escm",(void*)f_3772},
{"f_1854:batch_2ddriver_2escm",(void*)f_1854},
{"f_3201:batch_2ddriver_2escm",(void*)f_3201},
{"f_3204:batch_2ddriver_2escm",(void*)f_3204},
{"f_3766:batch_2ddriver_2escm",(void*)f_3766},
{"f_3219:batch_2ddriver_2escm",(void*)f_3219},
{"f_2326:batch_2ddriver_2escm",(void*)f_2326},
{"f_1820:batch_2ddriver_2escm",(void*)f_1820},
{"f_4713:batch_2ddriver_2escm",(void*)f_4713},
{"f_3207:batch_2ddriver_2escm",(void*)f_3207},
{"f_2660:batch_2ddriver_2escm",(void*)f_2660},
{"f_3637:batch_2ddriver_2escm",(void*)f_3637},
{"f_2676:batch_2ddriver_2escm",(void*)f_2676},
{"f_2690:batch_2ddriver_2escm",(void*)f_2690},
{"f_2371:batch_2ddriver_2escm",(void*)f_2371},
{"f_2379:batch_2ddriver_2escm",(void*)f_2379},
{"f5055:batch_2ddriver_2escm",(void*)f5055},
{"f_2699:batch_2ddriver_2escm",(void*)f_2699},
{"f_4753:batch_2ddriver_2escm",(void*)f_4753},
{"f_2696:batch_2ddriver_2escm",(void*)f_2696},
{"f_2693:batch_2ddriver_2escm",(void*)f_2693},
{"f_2390:batch_2ddriver_2escm",(void*)f_2390},
{"f_3603:batch_2ddriver_2escm",(void*)f_3603},
{"f_2622:batch_2ddriver_2escm",(void*)f_2622},
{"f_2634:batch_2ddriver_2escm",(void*)f_2634},
{"f_2638:batch_2ddriver_2escm",(void*)f_2638},
{"f_3214:batch_2ddriver_2escm",(void*)f_3214},
{"f_2641:batch_2ddriver_2escm",(void*)f_2641},
{"f_4721:batch_2ddriver_2escm",(void*)f_4721},
{"f_4725:batch_2ddriver_2escm",(void*)f_4725},
{"f_4729:batch_2ddriver_2escm",(void*)f_4729},
{"f_1903:batch_2ddriver_2escm",(void*)f_1903},
{"f_2442:batch_2ddriver_2escm",(void*)f_2442},
{"f_2446:batch_2ddriver_2escm",(void*)f_2446},
{"f_2439:batch_2ddriver_2escm",(void*)f_2439},
{"f_1841:batch_2ddriver_2escm",(void*)f_1841},
{"f_2433:batch_2ddriver_2escm",(void*)f_2433},
{"f_2436:batch_2ddriver_2escm",(void*)f_2436},
{"f_1999:batch_2ddriver_2escm",(void*)f_1999},
{"f_2468:batch_2ddriver_2escm",(void*)f_2468},
{"f_2919:batch_2ddriver_2escm",(void*)f_2919},
{"f_3661:batch_2ddriver_2escm",(void*)f_3661},
{"f_1923:batch_2ddriver_2escm",(void*)f_1923},
{"f_2462:batch_2ddriver_2escm",(void*)f_2462},
{"f_2465:batch_2ddriver_2escm",(void*)f_2465},
{"f_2459:batch_2ddriver_2escm",(void*)f_2459},
{"f_2984:batch_2ddriver_2escm",(void*)f_2984},
{"f_3652:batch_2ddriver_2escm",(void*)f_3652},
{"f_2981:batch_2ddriver_2escm",(void*)f_2981},
{"f_3659:batch_2ddriver_2escm",(void*)f_3659},
{"f_2450:batch_2ddriver_2escm",(void*)f_2450},
{"f_2453:batch_2ddriver_2escm",(void*)f_2453},
{"f_2456:batch_2ddriver_2escm",(void*)f_2456},
{"f_2939:batch_2ddriver_2escm",(void*)f_2939},
{"f_2933:batch_2ddriver_2escm",(void*)f_2933},
{"f_1602:batch_2ddriver_2escm",(void*)f_1602},
{"f_1944:batch_2ddriver_2escm",(void*)f_1944},
{"f_2924:batch_2ddriver_2escm",(void*)f_2924},
{"f_1612:batch_2ddriver_2escm",(void*)f_1612},
{"f_2486:batch_2ddriver_2escm",(void*)f_2486},
{"f_1608:batch_2ddriver_2escm",(void*)f_1608},
{"f_1605:batch_2ddriver_2escm",(void*)f_1605},
{"f_3129:batch_2ddriver_2escm",(void*)f_3129},
{"f_2955:batch_2ddriver_2escm",(void*)f_2955},
{"f_2958:batch_2ddriver_2escm",(void*)f_2958},
{"f_2483:batch_2ddriver_2escm",(void*)f_2483},
{"f_2480:batch_2ddriver_2escm",(void*)f_2480},
{"f_2952:batch_2ddriver_2escm",(void*)f_2952},
{"f_3114:batch_2ddriver_2escm",(void*)f_3114},
{"f_3110:batch_2ddriver_2escm",(void*)f_3110},
{"f_1966:batch_2ddriver_2escm",(void*)f_1966},
{"f_2477:batch_2ddriver_2escm",(void*)f_2477},
{"f_1616:batch_2ddriver_2escm",(void*)f_1616},
{"f_3119:batch_2ddriver_2escm",(void*)f_3119},
{"f_2474:batch_2ddriver_2escm",(void*)f_2474},
{"f_2471:batch_2ddriver_2escm",(void*)f_2471},
{"f_3103:batch_2ddriver_2escm",(void*)f_3103},
{"f_3100:batch_2ddriver_2escm",(void*)f_3100},
{"f_1970:batch_2ddriver_2escm",(void*)f_1970},
{"f_1979:batch_2ddriver_2escm",(void*)f_1979},
{"f_2978:batch_2ddriver_2escm",(void*)f_2978},
{"f_2975:batch_2ddriver_2escm",(void*)f_2975},
{"f_2972:batch_2ddriver_2escm",(void*)f_2972},
{"f_2495:batch_2ddriver_2escm",(void*)f_2495},
{"f_3539:batch_2ddriver_2escm",(void*)f_3539},
{"f_1987:batch_2ddriver_2escm",(void*)f_1987},
{"f_1989:batch_2ddriver_2escm",(void*)f_1989},
{"f_2969:batch_2ddriver_2escm",(void*)f_2969},
{"f_2966:batch_2ddriver_2escm",(void*)f_2966},
{"f_2963:batch_2ddriver_2escm",(void*)f_2963},
{"f_3425:batch_2ddriver_2escm",(void*)f_3425},
{"f_2492:batch_2ddriver_2escm",(void*)f_2492},
{"f_2990:batch_2ddriver_2escm",(void*)f_2990},
{"f_1664:batch_2ddriver_2escm",(void*)f_1664},
{"f_3440:batch_2ddriver_2escm",(void*)f_3440},
{"f_3504:batch_2ddriver_2escm",(void*)f_3504},
{"f_4549:batch_2ddriver_2escm",(void*)f_4549},
{"f_1683:batch_2ddriver_2escm",(void*)f_1683},
{"f_1680:batch_2ddriver_2escm",(void*)f_1680},
{"f_1677:batch_2ddriver_2escm",(void*)f_1677},
{"f_1950:batch_2ddriver_2escm",(void*)f_1950},
{"f_2408:batch_2ddriver_2escm",(void*)f_2408},
{"f_1688:batch_2ddriver_2escm",(void*)f_1688},
{"f_1958:batch_2ddriver_2escm",(void*)f_1958},
{"f_2180:batch_2ddriver_2escm",(void*)f_2180},
{"f_2183:batch_2ddriver_2escm",(void*)f_2183},
{"f_2401:batch_2ddriver_2escm",(void*)f_2401},
{"f_2189:batch_2ddriver_2escm",(void*)f_2189},
{"f_2186:batch_2ddriver_2escm",(void*)f_2186},
{"f_3282:batch_2ddriver_2escm",(void*)f_3282},
{"f_3285:batch_2ddriver_2escm",(void*)f_3285},
{"f_2948:batch_2ddriver_2escm",(void*)f_2948},
{"f_2429:batch_2ddriver_2escm",(void*)f_2429},
{"f_2423:batch_2ddriver_2escm",(void*)f_2423},
{"f_2420:batch_2ddriver_2escm",(void*)f_2420},
{"f_2417:batch_2ddriver_2escm",(void*)f_2417},
{"f_2156:batch_2ddriver_2escm",(void*)f_2156},
{"f_2153:batch_2ddriver_2escm",(void*)f_2153},
{"f_2150:batch_2ddriver_2escm",(void*)f_2150},
{"f_2159:batch_2ddriver_2escm",(void*)f_2159},
{"f_3248:batch_2ddriver_2escm",(void*)f_3248},
{"f_3273:batch_2ddriver_2escm",(void*)f_3273},
{"f_3276:batch_2ddriver_2escm",(void*)f_3276},
{"f_3279:batch_2ddriver_2escm",(void*)f_3279},
{"f_4593:batch_2ddriver_2escm",(void*)f_4593},
{"f_3267:batch_2ddriver_2escm",(void*)f_3267},
{"f_3574:batch_2ddriver_2escm",(void*)f_3574},
{"f_4640:batch_2ddriver_2escm",(void*)f_4640},
{"f_2195:batch_2ddriver_2escm",(void*)f_2195},
{"f_2192:batch_2ddriver_2escm",(void*)f_2192},
{"f_2198:batch_2ddriver_2escm",(void*)f_2198},
{"f_3291:batch_2ddriver_2escm",(void*)f_3291},
{"f_1620:batch_2ddriver_2escm",(void*)f_1620},
{"f_1624:batch_2ddriver_2escm",(void*)f_1624},
{"f_4648:batch_2ddriver_2escm",(void*)f_4648},
{"f_1714:batch_2ddriver_2escm",(void*)f_1714},
{"f_4578:batch_2ddriver_2escm",(void*)f_4578},
{"f_3023:batch_2ddriver_2escm",(void*)f_3023},
{"f_1630:batch_2ddriver_2escm",(void*)f_1630},
{"f_1633:batch_2ddriver_2escm",(void*)f_1633},
{"f_1628:batch_2ddriver_2escm",(void*)f_1628},
{"f_4588:batch_2ddriver_2escm",(void*)f_4588},
{"f_3013:batch_2ddriver_2escm",(void*)f_3013},
{"f_4300:batch_2ddriver_2escm",(void*)f_4300},
{"f_4606:batch_2ddriver_2escm",(void*)f_4606},
{"f_1751:batch_2ddriver_2escm",(void*)f_1751},
{"f_1757:batch_2ddriver_2escm",(void*)f_1757},
{"f_1754:batch_2ddriver_2escm",(void*)f_1754},
{"f_1759:batch_2ddriver_2escm",(void*)f_1759},
{"f_2705:batch_2ddriver_2escm",(void*)f_2705},
{"f_2702:batch_2ddriver_2escm",(void*)f_2702},
{"f5604:batch_2ddriver_2escm",(void*)f5604},
{"f_3000:batch_2ddriver_2escm",(void*)f_3000},
{"f_1779:batch_2ddriver_2escm",(void*)f_1779},
{"f_4316:batch_2ddriver_2escm",(void*)f_4316},
{"f5610:batch_2ddriver_2escm",(void*)f5610},
{"f_1748:batch_2ddriver_2escm",(void*)f_1748},
{"f_4324:batch_2ddriver_2escm",(void*)f_4324},
{"f_4322:batch_2ddriver_2escm",(void*)f_4322},
{"f_1794:batch_2ddriver_2escm",(void*)f_1794},
{"f_1797:batch_2ddriver_2escm",(void*)f_1797},
{"f_3317:batch_2ddriver_2escm",(void*)f_3317},
{"f_4371:batch_2ddriver_2escm",(void*)f_4371},
{"f_3314:batch_2ddriver_2escm",(void*)f_3314},
{"f_4662:batch_2ddriver_2escm",(void*)f_4662},
{"f_3197:batch_2ddriver_2escm",(void*)f_3197},
{"f_4379:batch_2ddriver_2escm",(void*)f_4379},
{"f_1766:batch_2ddriver_2escm",(void*)f_1766},
{"f_2777:batch_2ddriver_2escm",(void*)f_2777},
{"f_2774:batch_2ddriver_2escm",(void*)f_2774},
{"f_4670:batch_2ddriver_2escm",(void*)f_4670},
{"f_3340:batch_2ddriver_2escm",(void*)f_3340},
{"f_3189:batch_2ddriver_2escm",(void*)f_3189},
{"f_2771:batch_2ddriver_2escm",(void*)f_2771},
{"f_4666:batch_2ddriver_2escm",(void*)f_4666},
{"f_4387:batch_2ddriver_2escm",(void*)f_4387},
{"f_4126:batch_2ddriver_2escm",(void*)f_4126},
{"f_3801:batch_2ddriver_2escm",(void*)f_3801},
{"f_2767:batch_2ddriver_2escm",(void*)f_2767},
{"f_4684:batch_2ddriver_2escm",(void*)f_4684},
{"f_4353:batch_2ddriver_2escm",(void*)f_4353},
{"f_2761:batch_2ddriver_2escm",(void*)f_2761},
{"f_1781:batch_2ddriver_2escm",(void*)f_1781},
{"f_1788:batch_2ddriver_2escm",(void*)f_1788},
{"f_2795:batch_2ddriver_2escm",(void*)f_2795},
{"f_4611:batch_2ddriver_2escm",(void*)f_4611},
{"f_3323:batch_2ddriver_2escm",(void*)f_3323},
{"f_4365:batch_2ddriver_2escm",(void*)f_4365},
{"f_3320:batch_2ddriver_2escm",(void*)f_3320},
{"f_4362:batch_2ddriver_2escm",(void*)f_4362},
{"f_2792:batch_2ddriver_2escm",(void*)f_2792},
{"f_4368:batch_2ddriver_2escm",(void*)f_4368},
{"f_4193:batch_2ddriver_2escm",(void*)f_4193},
{"f_2789:batch_2ddriver_2escm",(void*)f_2789},
{"f_2786:batch_2ddriver_2escm",(void*)f_2786},
{"f_2783:batch_2ddriver_2escm",(void*)f_2783},
{"f_3150:batch_2ddriver_2escm",(void*)f_3150},
{"f_3152:batch_2ddriver_2escm",(void*)f_3152},
{"f_2780:batch_2ddriver_2escm",(void*)f_2780},
{"f_2734:batch_2ddriver_2escm",(void*)f_2734},
{"f_4168:batch_2ddriver_2escm",(void*)f_4168},
{"f_2738:batch_2ddriver_2escm",(void*)f_2738},
{"f_3143:batch_2ddriver_2escm",(void*)f_3143},
{"f_2731:batch_2ddriver_2escm",(void*)f_2731},
{"f_3302:batch_2ddriver_2escm",(void*)f_3302},
{"f_3306:batch_2ddriver_2escm",(void*)f_3306},
{"toplevel:batch_2ddriver_2escm",(void*)C_driver_toplevel},
{"f_2725:batch_2ddriver_2escm",(void*)f_2725},
{"f_2728:batch_2ddriver_2escm",(void*)f_2728},
{"f_4393:batch_2ddriver_2escm",(void*)f_4393},
{"f_4149:batch_2ddriver_2escm",(void*)f_4149},
{"f_2756:batch_2ddriver_2escm",(void*)f_2756},
{"f_2753:batch_2ddriver_2escm",(void*)f_2753},
{"f_2750:batch_2ddriver_2escm",(void*)f_2750},
{"f_2747:batch_2ddriver_2escm",(void*)f_2747},
{"f_2744:batch_2ddriver_2escm",(void*)f_2744},
{"f_3399:batch_2ddriver_2escm",(void*)f_3399},
{"f_3395:batch_2ddriver_2escm",(void*)f_3395},
{"f_2741:batch_2ddriver_2escm",(void*)f_2741},
{"f_1732:batch_2ddriver_2escm",(void*)f_1732},
{"f_1736:batch_2ddriver_2escm",(void*)f_1736},
{"f_3350:batch_2ddriver_2escm",(void*)f_3350},
{"f_3383:batch_2ddriver_2escm",(void*)f_3383},
{"f_2583:batch_2ddriver_2escm",(void*)f_2583},
{"f_2580:batch_2ddriver_2escm",(void*)f_2580},
{"f_2588:batch_2ddriver_2escm",(void*)f_2588},
{"f_2574:batch_2ddriver_2escm",(void*)f_2574},
{"f_2571:batch_2ddriver_2escm",(void*)f_2571},
{"f_2330:batch_2ddriver_2escm",(void*)f_2330},
{"f_2334:batch_2ddriver_2escm",(void*)f_2334},
{"f_2337:batch_2ddriver_2escm",(void*)f_2337},
{"f_2577:batch_2ddriver_2escm",(void*)f_2577},
{"f_2592:batch_2ddriver_2escm",(void*)f_2592},
{"f_4203:batch_2ddriver_2escm",(void*)f_4203},
{"f_2356:batch_2ddriver_2escm",(void*)f_2356},
{"f_2595:batch_2ddriver_2escm",(void*)f_2595},
{"f_2359:batch_2ddriver_2escm",(void*)f_2359},
{"f_2598:batch_2ddriver_2escm",(void*)f_2598},
{"f_4429:batch_2ddriver_2escm",(void*)f_4429},
{"f_4426:batch_2ddriver_2escm",(void*)f_4426},
{"f_4216:batch_2ddriver_2escm",(void*)f_4216},
{"f_2341:batch_2ddriver_2escm",(void*)f_2341},
{"f_2345:batch_2ddriver_2escm",(void*)f_2345},
{"f_4226:batch_2ddriver_2escm",(void*)f_4226},
{"f_4449:batch_2ddriver_2escm",(void*)f_4449},
{"f_2362:batch_2ddriver_2escm",(void*)f_2362},
{"f_2365:batch_2ddriver_2escm",(void*)f_2365},
{"f_2368:batch_2ddriver_2escm",(void*)f_2368},
{"f_4442:batch_2ddriver_2escm",(void*)f_4442},
{"f_2314:batch_2ddriver_2escm",(void*)f_2314},
{"f_2318:batch_2ddriver_2escm",(void*)f_2318},
{"f_2504:batch_2ddriver_2escm",(void*)f_2504},
{"f_2501:batch_2ddriver_2escm",(void*)f_2501},
{"f_2507:batch_2ddriver_2escm",(void*)f_2507},
{"f_2308:batch_2ddriver_2escm",(void*)f_2308},
{"f_2218:batch_2ddriver_2escm",(void*)f_2218},
{"f_2524:batch_2ddriver_2escm",(void*)f_2524},
{"f_2521:batch_2ddriver_2escm",(void*)f_2521},
{"f_2527:batch_2ddriver_2escm",(void*)f_2527},
{"f_2513:batch_2ddriver_2escm",(void*)f_2513},
{"f_2510:batch_2ddriver_2escm",(void*)f_2510},
{"f_2518:batch_2ddriver_2escm",(void*)f_2518},
{"f_2240:batch_2ddriver_2escm",(void*)f_2240},
{"f_2243:batch_2ddriver_2escm",(void*)f_2243},
{"f_3975:batch_2ddriver_2escm",(void*)f_3975},
{"f_3977:batch_2ddriver_2escm",(void*)f_3977},
{"f_2231:batch_2ddriver_2escm",(void*)f_2231},
{"f_2234:batch_2ddriver_2escm",(void*)f_2234},
{"f_2237:batch_2ddriver_2escm",(void*)f_2237},
{"f_2249:batch_2ddriver_2escm",(void*)f_2249},
{"f_3969:batch_2ddriver_2escm",(void*)f_3969},
{"f_3966:batch_2ddriver_2escm",(void*)f_3966},
{"f_2283:batch_2ddriver_2escm",(void*)f_2283},
{"f_2280:batch_2ddriver_2escm",(void*)f_2280},
{"f_4292:batch_2ddriver_2escm",(void*)f_4292},
{"f_2262:batch_2ddriver_2escm",(void*)f_2262},
{"f_2265:batch_2ddriver_2escm",(void*)f_2265},
{"f_3065:batch_2ddriver_2escm",(void*)f_3065},
{"f_2271:batch_2ddriver_2escm",(void*)f_2271},
{"f_2274:batch_2ddriver_2escm",(void*)f_2274},
{"f_2289:batch_2ddriver_2escm",(void*)f_2289},
{"f_2286:batch_2ddriver_2escm",(void*)f_2286},
{"f_2252:batch_2ddriver_2escm",(void*)f_2252},
{"f_2256:batch_2ddriver_2escm",(void*)f_2256},
{"f_2268:batch_2ddriver_2escm",(void*)f_2268},
{"f_3054:batch_2ddriver_2escm",(void*)f_3054},
{"f_3942:batch_2ddriver_2escm",(void*)f_3942},
{"f_3949:batch_2ddriver_2escm",(void*)f_3949},
{"f_2277:batch_2ddriver_2escm",(void*)f_2277},
{"f_2204:batch_2ddriver_2escm",(void*)f_2204},
{"f_2201:batch_2ddriver_2escm",(void*)f_2201},
{"f_2259:batch_2ddriver_2escm",(void*)f_2259},
{"f5446:batch_2ddriver_2escm",(void*)f5446},
{"f5440:batch_2ddriver_2escm",(void*)f5440},
{"f_3075:batch_2ddriver_2escm",(void*)f_3075},
{"f_2207:batch_2ddriver_2escm",(void*)f_2207},
{"f_4436:batch_2ddriver_2escm",(void*)f_4436},
{"f5458:batch_2ddriver_2escm",(void*)f5458},
{"f_2299:batch_2ddriver_2escm",(void*)f_2299},
{"f_2296:batch_2ddriver_2escm",(void*)f_2296},
{"f5452:batch_2ddriver_2escm",(void*)f5452},
{"f_4254:batch_2ddriver_2escm",(void*)f_4254},
{"f_2223:batch_2ddriver_2escm",(void*)f_2223},
{"f_4263:batch_2ddriver_2escm",(void*)f_4263},
{"f_3091:batch_2ddriver_2escm",(void*)f_3091},
{"f_4258:batch_2ddriver_2escm",(void*)f_4258},
{"f_2213:batch_2ddriver_2escm",(void*)f_2213},
{"f_2210:batch_2ddriver_2escm",(void*)f_2210},
{"f_2228:batch_2ddriver_2escm",(void*)f_2228},
{"f_4484:batch_2ddriver_2escm",(void*)f_4484},
{"f5514:batch_2ddriver_2escm",(void*)f5514},
{"f5476:batch_2ddriver_2escm",(void*)f5476},
{"f_3042:batch_2ddriver_2escm",(void*)f_3042},
{"f_4455:batch_2ddriver_2escm",(void*)f_4455},
{"f5520:batch_2ddriver_2escm",(void*)f5520},
{"f5484:batch_2ddriver_2escm",(void*)f5484},
{"f_2808:batch_2ddriver_2escm",(void*)f_2808},
{"f5496:batch_2ddriver_2escm",(void*)f5496},
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
S|  sprintf		1
S|  for-each		11
S|  printf		4
S|  map		15
o|eliminated procedure checks: 112 
o|specializations:
o|  1 (current-output-port)
o|  2 (string=? string string)
o|  1 (string-append string string)
o|  5 (cdr pair)
o|  4 (eqv? (not float) *)
o|  1 (< fixnum fixnum)
o|  5 (##sys#check-output-port * * *)
o|  8 (##sys#check-list (or pair list) *)
o|  65 (memq * list)
o|  2 (car pair)
o|Removed `not' forms: 5 
o|inlining procedure: k1635 
o|inlining procedure: k1635 
o|substituted constant variable: a1666 
o|substituted constant variable: a1671 
o|substituted constant variable: a1673 
o|substituted constant variable: a1684 
o|substituted constant variable: a1689 
o|substituted constant variable: a1694 
o|substituted constant variable: a1696 
o|substituted constant variable: a1698 
o|substituted constant variable: a1700 
o|substituted constant variable: a1702 
o|substituted constant variable: a1704 
o|substituted constant variable: a1706 
o|substituted constant variable: a1708 
o|substituted constant variable: a1710 
o|merged explicitly consed rest parameter: args127 
o|propagated global variable: out131135 ##sys#standard-output 
o|substituted constant variable: a1744 
o|substituted constant variable: a1745 
o|inlining procedure: k1737 
o|propagated global variable: out131135 ##sys#standard-output 
o|inlining procedure: k1737 
o|inlining procedure: k1761 
o|inlining procedure: k1761 
o|propagated global variable: out149153 ##sys#standard-output 
o|substituted constant variable: a1790 
o|substituted constant variable: a1791 
o|inlining procedure: k1783 
o|propagated global variable: out149153 ##sys#standard-output 
o|inlining procedure: k1783 
o|inlining procedure: k1810 
o|inlining procedure: k1833 
o|contracted procedure: "(batch-driver.scm:126) g165172" 
o|inlining procedure: k1833 
o|inlining procedure: k1810 
o|inlining procedure: k1865 
o|inlining procedure: k1865 
o|inlining procedure: k1880 
o|folded constant expression: (* (quote 1024) (quote 1024)) 
o|inlining procedure: k1880 
o|substituted constant variable: a1931 
o|substituted constant variable: a1933 
o|substituted constant variable: a1938 
o|substituted constant variable: a1940 
o|substituted constant variable: a1942 
o|inlining procedure: k1955 
o|inlining procedure: k1955 
o|inlining procedure: k1981 
o|inlining procedure: "(batch-driver.scm:149) cputime115" 
o|inlining procedure: k1981 
o|propagated global variable: out213217 ##sys#standard-output 
o|substituted constant variable: a1995 
o|substituted constant variable: a1996 
o|inlining procedure: k1991 
o|inlining procedure: "(batch-driver.scm:155) cputime115" 
o|propagated global variable: out213217 ##sys#standard-output 
o|inlining procedure: k1991 
o|merged explicitly consed rest parameter: args225 
o|inlining procedure: k2036 
o|propagated global variable: g249250 ##compiler#get 
o|propagated global variable: g263264 ##compiler#put! 
o|inlining procedure: k2036 
o|inlining procedure: k2064 
o|inlining procedure: k2064 
o|substituted constant variable: a2103 
o|substituted constant variable: a2214 
o|substituted constant variable: a2219 
o|substituted constant variable: a2224 
o|substituted constant variable: a2351 
o|substituted constant variable: a2375 
o|inlining procedure: k2372 
o|inlining procedure: k2372 
o|substituted constant variable: a2386 
o|substituted constant variable: a2397 
o|inlining procedure: k2394 
o|inlining procedure: k2394 
o|contracted procedure: k2412 
o|inlining procedure: k2609 
o|inlining procedure: k2624 
o|inlining procedure: k2624 
o|inlining procedure: k2642 
o|inlining procedure: k2642 
o|contracted procedure: k2671 
o|propagated global variable: r2672 ##compiler#inline-substitutions-enabled 
o|inlining procedure: k2668 
o|consed rest parameter at call site: "(batch-driver.scm:627) analyze125" 3 
o|inlining procedure: k2668 
o|contracted procedure: k2720 
o|inlining procedure: k2609 
o|consed rest parameter at call site: "(batch-driver.scm:682) dribble116" 2 
o|consed rest parameter at call site: "(batch-driver.scm:674) dribble116" 2 
o|inlining procedure: "(batch-driver.scm:661) cputime115" 
o|consed rest parameter at call site: "(batch-driver.scm:653) dribble116" 2 
o|inlining procedure: k2871 
o|consed rest parameter at call site: "(batch-driver.scm:597) dribble116" 2 
o|inlining procedure: k2871 
o|consed rest parameter at call site: "(batch-driver.scm:587) analyze125" 3 
o|contracted procedure: "(batch-driver.scm:571) g11031104" 
o|inlining procedure: k2982 
o|inlining procedure: k2982 
o|consed rest parameter at call site: "(batch-driver.scm:555) analyze125" 3 
o|inlining procedure: k2992 
o|contracted procedure: "(batch-driver.scm:549) g10721079" 
o|inlining procedure: k2992 
o|inlining procedure: k3015 
o|contracted procedure: "(batch-driver.scm:544) g10511058" 
o|inlining procedure: k2925 
o|inlining procedure: k2925 
o|inlining procedure: k3015 
o|substituted constant variable: a3035 
o|inlining procedure: k3037 
o|inlining procedure: k3037 
o|consed rest parameter at call site: "(batch-driver.scm:535) dribble116" 2 
o|inlining procedure: k3067 
o|inlining procedure: k3067 
o|inlining procedure: k3092 
o|consed rest parameter at call site: "(batch-driver.scm:527) dribble116" 2 
o|inlining procedure: k3092 
o|inlining procedure: k3121 
o|inlining procedure: k3121 
o|inlining procedure: k3154 
o|inlining procedure: k3154 
o|contracted procedure: "(batch-driver.scm:507) g971972" 
o|inlining procedure: k3221 
o|inlining procedure: k3221 
o|consed rest parameter at call site: "(batch-driver.scm:501) dribble116" 2 
o|substituted constant variable: a3253 
o|substituted constant variable: a3269 
o|substituted constant variable: a3270 
o|inlining procedure: k3342 
o|contracted procedure: "(batch-driver.scm:478) g899906" 
o|propagated global variable: out909913 ##sys#standard-output 
o|substituted constant variable: a3310 
o|substituted constant variable: a3311 
o|propagated global variable: out909913 ##sys#standard-output 
o|inlining procedure: k3342 
o|propagated global variable: g905907 ##compiler#compiler-syntax-statistics 
o|contracted procedure: k3433 
o|propagated global variable: r3434 ##compiler#unit-name 
o|inlining procedure: k3430 
o|inlining procedure: k3430 
o|inlining procedure: k3442 
o|contracted procedure: "(batch-driver.scm:461) g873882" 
o|inlining procedure: k3442 
o|propagated global variable: g879883 ##compiler#profile-lambda-list 
o|contracted procedure: k3497 
o|propagated global variable: r3498 ##compiler#unit-name 
o|inlining procedure: k3494 
o|inlining procedure: k3494 
o|inlining procedure: k3506 
o|contracted procedure: "(batch-driver.scm:453) g836845" 
o|inlining procedure: k3506 
o|propagated global variable: g842846 ##compiler#used-units 
o|inlining procedure: k3541 
o|contracted procedure: "(batch-driver.scm:452) g806815" 
o|inlining procedure: k3541 
o|propagated global variable: g812816 ##compiler#immutable-constants 
o|inlining procedure: k3576 
o|inlining procedure: k3576 
o|inlining procedure: k3663 
o|inlining procedure: k3663 
o|consed rest parameter at call site: "(batch-driver.scm:432) dribble116" 2 
o|consed rest parameter at call site: "(batch-driver.scm:409) dribble116" 2 
o|inlining procedure: k3708 
o|inlining procedure: k3739 
o|inlining procedure: k3739 
o|inlining procedure: k3774 
o|inlining procedure: k3774 
o|inlining procedure: k3708 
o|inlining procedure: k3837 
o|inlining procedure: k3837 
o|inlining procedure: "(batch-driver.scm:396) cputime115" 
o|consed rest parameter at call site: "(batch-driver.scm:390) dribble116" 2 
o|substituted constant variable: a3870 
o|inlining procedure: k3872 
o|substituted constant variable: a3875 
o|inlining procedure: k3872 
o|substituted constant variable: a3880 
o|consed rest parameter at call site: "(batch-driver.scm:369) dribble116" 2 
o|inlining procedure: k3898 
o|consed rest parameter at call site: "(batch-driver.scm:369) dribble116" 2 
o|inlining procedure: k3898 
o|consed rest parameter at call site: "(batch-driver.scm:369) dribble116" 2 
o|inlining procedure: k3902 
o|inlining procedure: k3902 
o|consed rest parameter at call site: "(batch-driver.scm:351) dribble116" 2 
o|inlining procedure: k3919 
o|consed rest parameter at call site: "(batch-driver.scm:351) dribble116" 2 
o|inlining procedure: k3919 
o|consed rest parameter at call site: "(batch-driver.scm:351) dribble116" 2 
o|substituted constant variable: a3922 
o|substituted constant variable: a3934 
o|substituted constant variable: a3950 
o|inlining procedure: k3979 
o|contracted procedure: "(batch-driver.scm:331) g594603" 
o|inlining procedure: k3979 
o|inlining procedure: k4014 
o|contracted procedure: "(batch-driver.scm:317) g570577" 
o|inlining procedure: k4014 
o|consed rest parameter at call site: "(batch-driver.scm:316) dribble116" 2 
o|inlining procedure: k4037 
o|inlining procedure: k4037 
o|propagated global variable: g559560 string-split 
o|inlining procedure: k4070 
o|inlining procedure: k4070 
o|propagated global variable: g534535 string-split 
o|substituted constant variable: a4106 
o|inlining procedure: k4195 
o|contracted procedure: "(batch-driver.scm:298) g469476" 
o|contracted procedure: "(batch-driver.scm:301) g494495" 
o|contracted procedure: "(batch-driver.scm:300) g479480" 
o|inlining procedure: k4195 
o|propagated global variable: g475477 ##compiler#default-extended-bindings 
o|inlining procedure: k4218 
o|contracted procedure: "(batch-driver.scm:293) g420427" 
o|contracted procedure: "(batch-driver.scm:296) g445446" 
o|contracted procedure: "(batch-driver.scm:295) g430431" 
o|inlining procedure: k4218 
o|propagated global variable: g426428 ##compiler#default-standard-bindings 
o|substituted constant variable: a4238 
o|substituted constant variable: a4241 
o|substituted constant variable: a4244 
o|substituted constant variable: a4247 
o|substituted constant variable: a4250 
o|inlining procedure: k4265 
o|inlining procedure: k4265 
o|inlining procedure: k4307 
o|inlining procedure: k4307 
o|inlining procedure: k4326 
o|inlining procedure: k4326 
o|substituted constant variable: a4358 
o|consed rest parameter at call site: "(batch-driver.scm:265) dribble116" 2 
o|substituted constant variable: a4375 
o|consed rest parameter at call site: "(batch-driver.scm:262) dribble116" 2 
o|substituted constant variable: a4383 
o|consed rest parameter at call site: "(batch-driver.scm:259) dribble116" 2 
o|inlining procedure: k4394 
o|inlining procedure: k4394 
o|substituted constant variable: a4406 
o|substituted constant variable: a4414 
o|inlining procedure: k4411 
o|inlining procedure: k4411 
o|substituted constant variable: a4422 
o|consed rest parameter at call site: "(batch-driver.scm:249) dribble116" 2 
o|inlining procedure: k4440 
o|inlining procedure: k4440 
o|substituted constant variable: a4456 
o|substituted constant variable: a4459 
o|substituted constant variable: a4462 
o|substituted constant variable: a4465 
o|substituted constant variable: a4468 
o|substituted constant variable: a4471 
o|substituted constant variable: a4474 
o|substituted constant variable: a4477 
o|substituted constant variable: a4480 
o|consed rest parameter at call site: "(batch-driver.scm:223) dribble116" 2 
o|substituted constant variable: a4487 
o|substituted constant variable: a4492 
o|substituted constant variable: a4496 
o|substituted constant variable: a4499 
o|substituted constant variable: a4502 
o|substituted constant variable: a4505 
o|substituted constant variable: a4510 
o|substituted constant variable: a4515 
o|substituted constant variable: a4520 
o|substituted constant variable: a4537 
o|substituted constant variable: a4543 
o|inlining procedure: k4539 
o|inlining procedure: k4539 
o|inlining procedure: k4551 
o|contracted procedure: "(batch-driver.scm:186) g314323" 
o|substituted constant variable: a2131 
o|inlining procedure: k4551 
o|inlining procedure: k4613 
o|contracted procedure: "(batch-driver.scm:177) g286295" 
o|inlining procedure: k4613 
o|substituted constant variable: a4649 
o|propagated global variable: tmp273275 ##compiler#unit-name 
o|inlining procedure: k4655 
o|propagated global variable: tmp273275 ##compiler#unit-name 
o|inlining procedure: k4655 
o|substituted constant variable: a4671 
o|substituted constant variable: a4676 
o|inlining procedure: k4678 
o|inlining procedure: k4678 
o|substituted constant variable: a4681 
o|inlining procedure: k4686 
o|inlining procedure: k4686 
o|inlining procedure: k4722 
o|inlining procedure: k4722 
o|inlining procedure: k4730 
o|inlining procedure: k4730 
o|substituted constant variable: a4745 
o|inlining procedure: k4742 
o|inlining procedure: k4742 
o|inlining procedure: k4751 
o|inlining procedure: k4751 
o|inlining procedure: k4766 
o|inlining procedure: k4766 
o|replaced variables: 400 
o|removed binding forms: 388 
o|Removed `not' forms: 2 
o|removed side-effect free assignment to unused variable: cputime115 
o|propagated global variable: out131135 ##sys#standard-output 
o|substituted constant variable: r17384778 
o|substituted constant variable: r17384779 
o|propagated global variable: out149153 ##sys#standard-output 
o|contracted procedure: k1897 
o|substituted constant variable: r19564793 
o|propagated global variable: out213217 ##sys#standard-output 
o|substituted constant variable: r30934847 
o|substituted constant variable: c973 
o|substituted constant variable: p974 
o|propagated global variable: out909913 ##sys#standard-output 
o|substituted constant variable: r34314856 
o|contracted procedure: k3430 
o|substituted constant variable: r34954860 
o|substituted constant variable: r34954860 
o|inlining procedure: k3494 
o|inlining procedure: k3494 
o|substituted constant variable: r38994886 
o|substituted constant variable: r38994886 
o|substituted constant variable: r38994888 
o|substituted constant variable: r38994888 
o|substituted constant variable: r39034890 
o|substituted constant variable: r39034890 
o|substituted constant variable: r39034892 
o|substituted constant variable: r39034892 
o|substituted constant variable: r39204894 
o|substituted constant variable: r39204894 
o|substituted constant variable: r39204896 
o|substituted constant variable: r39204896 
o|substituted constant variable: tmp500503 
o|substituted constant variable: mark502 
o|substituted constant variable: tmp485488 
o|substituted constant variable: mark487 
o|substituted constant variable: tmp451454 
o|substituted constant variable: mark453 
o|substituted constant variable: tmp436439 
o|substituted constant variable: mark438 
o|substituted constant variable: r43084913 
o|contracted procedure: k4539 
o|substituted constant variable: r45404926 
o|propagated global variable: r46564932 ##compiler#unit-name 
o|substituted constant variable: r47234942 
o|substituted constant variable: r47234942 
o|substituted constant variable: r47434946 
o|substituted constant variable: r47524950 
o|substituted constant variable: r47524950 
o|substituted constant variable: r47674952 
o|substituted constant variable: r47674952 
o|converted assignments to bindings: (option-arg30) 
o|simplifications: ((let . 1)) 
o|replaced variables: 16 
o|removed binding forms: 512 
o|removed conditional forms: 2 
o|substituted constant variable: r1898 
o|inlining procedure: k2790 
o|inlining procedure: k2818 
o|inlining procedure: k3427 
o|inlining procedure: k3427 
o|inlining procedure: k3427 
o|substituted constant variable: r34954994 
o|inlining procedure: k3905 
o|inlining procedure: k4171 
o|inlining procedure: k4154 
o|inlining procedure: k4129 
o|inlining procedure: k4112 
o|inlining procedure: k4301 
o|inlining procedure: k4301 
o|replaced variables: 14 
o|removed binding forms: 61 
o|Removed `not' forms: 1 
o|substituted constant variable: r28195057 
o|substituted constant variable: r34285074 
o|substituted constant variable: r34285075 
o|contracted procedure: k3905 
o|substituted constant variable: r39065095 
o|substituted constant variable: r41725104 
o|substituted constant variable: r41555105 
o|substituted constant variable: r41305108 
o|substituted constant variable: r41135109 
o|substituted constant variable: r43025114 
o|substituted constant variable: r43025115 
o|replaced variables: 4 
o|removed binding forms: 19 
o|removed conditional forms: 4 
o|replaced variables: 4 
o|removed binding forms: 14 
o|removed binding forms: 2 
o|simplifications: ((if . 9) (##core#call . 242)) 
o|  call simplifications:
o|    string->list
o|    string
o|    string=?	2
o|    not	2
o|    eof-object?
o|    ##sys#cons	7
o|    length
o|    ##sys#list	20
o|    list	2
o|    ##sys#make-structure
o|    ##sys#setslot	15
o|    first
o|    >
o|    ##sys#call-with-values	2
o|    add1	5
o|    car	10
o|    inexact->exact
o|    cddr
o|    cons	21
o|    string-length
o|    -	3
o|    fx<
o|    string-ref
o|    eq?	5
o|    *	2
o|    string->number	5
o|    ##sys#check-list	18
o|    pair?	27
o|    ##sys#slot	53
o|    memq	13
o|    apply
o|    cdr	3
o|    null?	10
o|    cadr	2
o|    symbol?	2
o|contracted procedure: k1659 
o|contracted procedure: k1638 
o|contracted procedure: k1646 
o|contracted procedure: k1652 
o|contracted procedure: k4758 
o|contracted procedure: k1668 
o|contracted procedure: k1691 
o|contracted procedure: k1740 
o|contracted procedure: k1824 
o|contracted procedure: k1836 
o|contracted procedure: k1846 
o|contracted procedure: k1850 
o|contracted procedure: k1856 
o|contracted procedure: k1859 
o|contracted procedure: k1871 
o|inlining procedure: k1862 
o|contracted procedure: k1877 
o|contracted procedure: k1883 
o|contracted procedure: k1886 
o|contracted procedure: k1893 
o|inlining procedure: k1862 
o|contracted procedure: k1907 
o|contracted procedure: k1910 
o|contracted procedure: k1917 
o|inlining procedure: k1862 
o|inlining procedure: k1862 
o|contracted procedure: k1952 
o|contracted procedure: k1972 
o|contracted procedure: k2013 
o|contracted procedure: k2021 
o|contracted procedure: k2067 
o|contracted procedure: k2073 
o|contracted procedure: k2080 
o|contracted procedure: k2086 
o|contracted procedure: k2113 
o|contracted procedure: k2135 
o|contracted procedure: k2145 
o|contracted procedure: k2291 
o|contracted procedure: k2309 
o|contracted procedure: k2320 
o|contracted procedure: k2347 
o|contracted procedure: k2487 
o|contracted procedure: k2496 
o|contracted procedure: k3191 
o|contracted procedure: k2536 
o|contracted procedure: k2649 
o|contracted procedure: k2655 
o|contracted procedure: k2665 
o|contracted procedure: k2710 
o|contracted procedure: k2717 
o|contracted procedure: k2682 
o|inlining procedure: "(batch-driver.scm:682) dribble116" 
o|contracted procedure: k2799 
o|inlining procedure: "(batch-driver.scm:682) dribble116" 
o|inlining procedure: "(batch-driver.scm:674) dribble116" 
o|contracted procedure: k2828 
o|contracted procedure: k2818 
o|contracted procedure: k2835 
o|inlining procedure: "(batch-driver.scm:653) dribble116" 
o|contracted procedure: k2856 
o|inlining procedure: "(batch-driver.scm:597) dribble116" 
o|contracted procedure: k2880 
o|contracted procedure: k2886 
o|contracted procedure: k2892 
o|contracted procedure: k2911 
o|contracted procedure: k2902 
o|contracted procedure: k2914 
o|contracted procedure: k2934 
o|contracted procedure: k2995 
o|contracted procedure: k3005 
o|contracted procedure: k3009 
o|contracted procedure: k3018 
o|contracted procedure: k3028 
o|contracted procedure: k3032 
o|contracted procedure: k3046 
o|inlining procedure: "(batch-driver.scm:535) dribble116" 
o|contracted procedure: k3058 
o|contracted procedure: k3070 
o|contracted procedure: k3080 
o|contracted procedure: k3084 
o|inlining procedure: "(batch-driver.scm:527) dribble116" 
o|contracted procedure: k3124 
o|contracted procedure: k3134 
o|contracted procedure: k3138 
o|contracted procedure: k3157 
o|contracted procedure: k3183 
o|contracted procedure: k3179 
o|contracted procedure: k3160 
o|contracted procedure: k3171 
o|contracted procedure: k3209 
o|contracted procedure: k3224 
o|contracted procedure: k3227 
o|contracted procedure: k3238 
o|contracted procedure: k3250 
o|inlining procedure: "(batch-driver.scm:501) dribble116" 
o|contracted procedure: k3258 
o|contracted procedure: k3295 
o|contracted procedure: k3333 
o|contracted procedure: k3345 
o|contracted procedure: k3355 
o|contracted procedure: k3359 
o|contracted procedure: k3330 
o|propagated global variable: g905907 ##compiler#compiler-syntax-statistics 
o|contracted procedure: k3378 
o|contracted procedure: k3390 
o|contracted procedure: k3420 
o|contracted procedure: k3445 
o|contracted procedure: k3448 
o|contracted procedure: k3459 
o|contracted procedure: k3471 
o|contracted procedure: k3417 
o|contracted procedure: k3407 
o|contracted procedure: k3411 
o|propagated global variable: g879883 ##compiler#profile-lambda-list 
o|contracted procedure: k3486 
o|contracted procedure: k3490 
o|contracted procedure: k3482 
o|contracted procedure: k3478 
o|contracted procedure: k3509 
o|contracted procedure: k3535 
o|contracted procedure: k3531 
o|contracted procedure: k3512 
o|contracted procedure: k3523 
o|propagated global variable: g842846 ##compiler#used-units 
o|contracted procedure: k3544 
o|contracted procedure: k3547 
o|contracted procedure: k3558 
o|contracted procedure: k3570 
o|contracted procedure: k3369 
o|contracted procedure: k3373 
o|propagated global variable: g812816 ##compiler#immutable-constants 
o|contracted procedure: k3579 
o|contracted procedure: k3582 
o|contracted procedure: k3593 
o|contracted procedure: k3605 
o|contracted procedure: k3628 
o|contracted procedure: k3624 
o|contracted procedure: k3620 
o|contracted procedure: k3616 
o|contracted procedure: k3612 
o|contracted procedure: k3631 
o|contracted procedure: k3647 
o|contracted procedure: k3643 
o|contracted procedure: k3639 
o|contracted procedure: k3654 
o|contracted procedure: k3666 
o|contracted procedure: k3669 
o|contracted procedure: k3680 
o|contracted procedure: k3692 
o|inlining procedure: "(batch-driver.scm:432) dribble116" 
o|inlining procedure: "(batch-driver.scm:409) dribble116" 
o|contracted procedure: k3711 
o|contracted procedure: k3719 
o|contracted procedure: k3730 
o|contracted procedure: k3742 
o|contracted procedure: k3745 
o|contracted procedure: k3756 
o|contracted procedure: k3768 
o|contracted procedure: k3777 
o|contracted procedure: k3780 
o|contracted procedure: k3791 
o|contracted procedure: k3803 
o|contracted procedure: k3806 
o|contracted procedure: k3840 
o|contracted procedure: k3847 
o|contracted procedure: k3863 
o|inlining procedure: "(batch-driver.scm:390) dribble116" 
o|contracted procedure: k3915 
o|contracted procedure: k3882 
o|inlining procedure: "(batch-driver.scm:369) dribble116" 
o|inlining procedure: "(batch-driver.scm:369) dribble116" 
o|inlining procedure: "(batch-driver.scm:351) dribble116" 
o|inlining procedure: "(batch-driver.scm:351) dribble116" 
o|contracted procedure: k3927 
o|contracted procedure: k3970 
o|contracted procedure: k3982 
o|contracted procedure: k3985 
o|contracted procedure: k3996 
o|contracted procedure: k4008 
o|contracted procedure: k3960 
o|contracted procedure: k4017 
o|contracted procedure: k4027 
o|contracted procedure: k4031 
o|inlining procedure: "(batch-driver.scm:316) dribble116" 
o|contracted procedure: k4040 
o|contracted procedure: k4050 
o|contracted procedure: k4054 
o|contracted procedure: k4073 
o|contracted procedure: k4083 
o|contracted procedure: k4087 
o|contracted procedure: k4100 
o|contracted procedure: k4144 
o|contracted procedure: k4186 
o|contracted procedure: k4198 
o|contracted procedure: k4208 
o|contracted procedure: k4212 
o|contracted procedure: k4177 
o|contracted procedure: k4171 
o|contracted procedure: k4160 
o|contracted procedure: k4154 
o|propagated global variable: g475477 ##compiler#default-extended-bindings 
o|contracted procedure: k4221 
o|contracted procedure: k4231 
o|contracted procedure: k4235 
o|contracted procedure: k4135 
o|contracted procedure: k4129 
o|contracted procedure: k4118 
o|contracted procedure: k4112 
o|propagated global variable: g426428 ##compiler#default-standard-bindings 
o|contracted procedure: k4268 
o|contracted procedure: k4271 
o|contracted procedure: k4282 
o|contracted procedure: k4294 
o|contracted procedure: k4301 
o|contracted procedure: k4317 
o|contracted procedure: k4329 
o|contracted procedure: k4332 
o|contracted procedure: k4343 
o|contracted procedure: k4355 
o|inlining procedure: "(batch-driver.scm:265) dribble116" 
o|inlining procedure: "(batch-driver.scm:262) dribble116" 
o|inlining procedure: "(batch-driver.scm:259) dribble116" 
o|contracted procedure: k4397 
o|inlining procedure: "(batch-driver.scm:249) dribble116" 
o|contracted procedure: k4437 
o|inlining procedure: "(batch-driver.scm:223) dribble116" 
o|contracted procedure: k4525 
o|contracted procedure: k4529 
o|contracted procedure: k4554 
o|contracted procedure: k4557 
o|contracted procedure: k4568 
o|contracted procedure: k4580 
o|contracted procedure: k4583 
o|contracted procedure: k4616 
o|contracted procedure: k4619 
o|contracted procedure: k4630 
o|contracted procedure: k4642 
o|contracted procedure: k4601 
o|contracted procedure: k4689 
o|contracted procedure: k4692 
o|contracted procedure: k4703 
o|contracted procedure: k4715 
o|contracted procedure: k4733 
o|contracted procedure: k4773 
o|contracted procedure: k4766 
o|simplifications: ((let . 55)) 
o|removed binding forms: 214 
o|removed side-effect free assignment to unused variable: dribble116 
o|substituted constant variable: fstr1265437 
o|substituted constant variable: args1275438 
o|substituted constant variable: fstr1265443 
o|substituted constant variable: args1275444 
o|substituted constant variable: fstr1265449 
o|substituted constant variable: fstr1265455 
o|substituted constant variable: fstr1265461 
o|contracted procedure: "(batch-driver.scm:533) g10281035" 
o|substituted constant variable: fstr1265473 
o|contracted procedure: "(batch-driver.scm:521) g10071014" 
o|substituted constant variable: fstr1265481 
o|inlining procedure: k3163 
o|inlining procedure: k3163 
o|inlining procedure: k3230 
o|inlining procedure: k3230 
o|substituted constant variable: fstr1265493 
o|substituted constant variable: args1275494 
o|inlining procedure: k3451 
o|inlining procedure: k3451 
o|inlining procedure: k3515 
o|inlining procedure: k3515 
o|inlining procedure: k3550 
o|inlining procedure: k3550 
o|inlining procedure: k3585 
o|inlining procedure: k3585 
o|inlining procedure: k3672 
o|inlining procedure: k3672 
o|substituted constant variable: fstr1265511 
o|substituted constant variable: args1275512 
o|substituted constant variable: fstr1265517 
o|substituted constant variable: args1275518 
o|inlining procedure: k3748 
o|inlining procedure: k3748 
o|inlining procedure: k3783 
o|inlining procedure: k3783 
o|substituted constant variable: fstr1265531 
o|substituted constant variable: fstr1265537 
o|substituted constant variable: fstr1265543 
o|substituted constant variable: fstr1265549 
o|substituted constant variable: fstr1265555 
o|inlining procedure: k3988 
o|inlining procedure: k3988 
o|substituted constant variable: fstr1265565 
o|substituted constant variable: args1275566 
o|inlining procedure: k4274 
o|inlining procedure: k4274 
o|inlining procedure: k4335 
o|inlining procedure: k4335 
o|substituted constant variable: fstr1265583 
o|substituted constant variable: args1275584 
o|substituted constant variable: fstr1265589 
o|substituted constant variable: args1275590 
o|substituted constant variable: fstr1265595 
o|substituted constant variable: args1275596 
o|substituted constant variable: fstr1265601 
o|substituted constant variable: args1275602 
o|substituted constant variable: fstr1265607 
o|substituted constant variable: args1275608 
o|inlining procedure: k4560 
o|inlining procedure: k4560 
o|inlining procedure: k4622 
o|inlining procedure: k4622 
o|inlining procedure: k4695 
o|inlining procedure: k4695 
o|replaced variables: 80 
o|removed binding forms: 3 
o|replaced variables: 1 
o|removed binding forms: 106 
o|contracted procedure: k3467 
o|contracted procedure: k3566 
o|replaced variables: 60 
o|removed binding forms: 3 
o|removed binding forms: 15 
o|customizable procedures: (g7273 map-loop7898 k1686 k1712 k2093 k2096 map-loop280298 map-loop308326 k2141 k2148 k2154 k2166 k2169 k2172 k2175 k2178 k2181 k2184 k2187 k2190 k2193 k2196 k2199 k2202 k2205 k2208 k2211 k2216 k2221 k2226 map-loop364381 map-loop393410 k2257 k2260 k2263 k2266 k2269 for-each-loop419461 for-each-loop468510 for-each-loop518536 for-each-loop543561 for-each-loop569580 map-loop588609 k2335 arg-val121 k2360 k2388 loop720 doloop655656 map-loop660677 map-loop686703 map-loop735752 k2469 k2478 k2484 map-loop767788 map-loop800821 map-loop830851 k3397 map-loop867888 for-each-loop898919 print-expr120 map-loop942959 map-loop980997 for-each-loop10061019 for-each-loop10271039 collect-options122 for-each-loop10501064 for-each-loop10711082 k2563 print-db119 print-node118 analyze125 begin-time123 end-time124 loop1107 def-no230268 def-contf231266 body228236 g208209 option-arg30 loop200 for-each-loop164176 print-header117) 
o|calls to known targets: 289 
o|identified direct recursive calls: f_3152 2 
o|identified direct recursive calls: f_3440 2 
o|identified direct recursive calls: f_3504 2 
o|identified direct recursive calls: f_3539 2 
o|fast box initializations: 39 
o|dropping unused closure argument: f_1854 
o|dropping unused closure argument: f_1633 
o|dropping unused closure argument: f_1732 
*/
/* end of file */
