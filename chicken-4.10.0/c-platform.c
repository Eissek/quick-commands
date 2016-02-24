/* Generated from c-platform.scm by the CHICKEN compiler
   http://www.call-cc.org
   2015-08-04 21:02
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: c-platform.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file c-platform.c
   unit: platform
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[935];
static double C_possibly_force_alignment;


C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_fcall f_1776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1767)
static void C_fcall f_1767(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5040)
static void C_ccall f_5040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5081)
static void C_fcall f_5081(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5565)
static void C_ccall f_5565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5574)
static void C_fcall f_5574(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static void C_fcall f_2013(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void C_fcall f_5670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_fcall f_2062(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_fcall f_4357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3221)
static void C_ccall f_3221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_fcall f_4576(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_fcall f_2232(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3937)
static void C_ccall f_3937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_fcall f_4526(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4828)
static void C_fcall f_4828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4822)
static void C_fcall f_4822(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5636)
static void C_ccall f_5636(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_fcall f_4862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4859)
static void C_fcall f_4859(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static C_word C_fcall f_4733(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5218)
static void C_fcall f_5218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_fcall f_1666(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2187)
static void C_fcall f_2187(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3128)
static void C_ccall f_3128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_ccall f_3188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3290)
static void C_ccall f_3290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(C_platform_toplevel)
C_externexport void C_ccall C_platform_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_fcall f_1779(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;

C_noret_decl(trf_1776)
static void C_fcall trf_1776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1776(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1776(t0,t1);}

C_noret_decl(trf_1767)
static void C_fcall trf_1767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1767(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1767(t0,t1);}

C_noret_decl(trf_5081)
static void C_fcall trf_5081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5081(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5081(t0,t1);}

C_noret_decl(trf_5574)
static void C_fcall trf_5574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5574(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5574(t0,t1);}

C_noret_decl(trf_2013)
static void C_fcall trf_2013(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2013(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2013(t0,t1,t2);}

C_noret_decl(trf_5670)
static void C_fcall trf_5670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5670(t0,t1,t2);}

C_noret_decl(trf_2062)
static void C_fcall trf_2062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2062(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2062(t0,t1);}

C_noret_decl(trf_4357)
static void C_fcall trf_4357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4357(t0,t1);}

C_noret_decl(trf_4576)
static void C_fcall trf_4576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4576(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4576(t0,t1);}

C_noret_decl(trf_2232)
static void C_fcall trf_2232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2232(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2232(t0,t1);}

C_noret_decl(trf_4526)
static void C_fcall trf_4526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4526(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4526(t0,t1);}

C_noret_decl(trf_4828)
static void C_fcall trf_4828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4828(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4828(t0,t1);}

C_noret_decl(trf_4822)
static void C_fcall trf_4822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4822(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4822(t0,t1);}

C_noret_decl(trf_4862)
static void C_fcall trf_4862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4862(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4862(t0,t1);}

C_noret_decl(trf_4859)
static void C_fcall trf_4859(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4859(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4859(t0,t1);}

C_noret_decl(trf_5218)
static void C_fcall trf_5218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5218(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5218(t0,t1);}

C_noret_decl(trf_1666)
static void C_fcall trf_1666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1666(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1666(t0,t1,t2,t3);}

C_noret_decl(trf_2187)
static void C_fcall trf_2187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2187(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2187(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1779)
static void C_fcall trf_1779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1779(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1779(t0,t1);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

/* k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in ... */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2356,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:506: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[51],C_fix(8),t2);}

/* rvalues in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in ... */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2356,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t4,t5);
t10=t1;
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_record4(&a,4,lf[37],lf[39],t8,t9));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:491: rewrite-c..r */
f_2187(t2,lf[895],lf[896],lf[897],C_fix(0));}

/* k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in ... */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:499: rewrite-c..r */
f_2187(t2,lf[873],lf[874],lf[875],C_fix(3));}

/* k1774 in k1765 in eqv?-id in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_1776(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1776,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_1779(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_eqp(lf[43],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[5],C_fix(2));
t6=C_i_car(t5);
t7=C_i_flonump(t6);
t8=t2;
f_1779(t8,C_i_not(t7));}
else{
t5=t2;
f_1779(t5,C_SCHEME_FALSE);}}}

/* k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in ... */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:564: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[835],C_fix(2),C_fix(1),lf[836],C_SCHEME_FALSE);}

/* k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:494: rewrite-c..r */
f_2187(t2,lf[852],lf[887],lf[888],C_fix(2));}

/* k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:493: rewrite-c..r */
f_2187(t2,lf[889],lf[890],lf[891],C_fix(1));}

/* k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in ... */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:563: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[837],C_fix(2),C_fix(1),lf[838],C_SCHEME_FALSE);}

/* k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in ... */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:562: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[839],C_fix(2),C_fix(1),lf[840],C_SCHEME_FALSE);}

/* k1765 in eqv?-id in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_1767(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1767,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1776,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(1));
t4=C_eqp(lf[43],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[6],C_fix(2));
t6=C_i_car(t5);
t7=C_i_flonump(t6);
t8=t2;
f_1776(t8,C_i_not(t7));}
else{
t5=t2;
f_1776(t5,C_SCHEME_FALSE);}}}

/* k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:492: rewrite-c..r */
f_2187(t2,lf[892],lf[893],lf[894],C_fix(0));}

/* k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in ... */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:567: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[829],C_fix(2),C_fix(1),lf[830],C_SCHEME_FALSE);}

/* k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in ... */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:566: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[831],C_fix(2),C_fix(1),lf[832],C_SCHEME_FALSE);}

/* k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in ... */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3617,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:973: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[234],C_fix(17),C_fix(1),lf[235]);}

/* k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in ... */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:565: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[833],C_fix(2),C_fix(1),lf[834],C_SCHEME_FALSE);}

/* k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in ... */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:972: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[236],C_fix(17),C_fix(1),lf[237]);}

/* k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in ... */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:971: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[238],C_fix(17),C_fix(1),lf[239]);}

/* k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in ... */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:557: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[848],C_fix(2),C_fix(1),lf[849],C_SCHEME_FALSE);}

/* k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in ... */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:556: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[850],C_fix(2),C_fix(1),lf[851],C_SCHEME_FALSE);}

/* k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in ... */
static void C_ccall f_3608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:970: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[240],C_fix(17),C_fix(1),lf[241]);}

/* k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in ... */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:969: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[242],C_fix(17),C_fix(1),lf[243]);}

/* k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in ... */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:968: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[244],C_fix(17),C_fix(2),lf[245]);}

/* k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in ... */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:555: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[852],C_fix(2),C_fix(1),lf[853],C_SCHEME_FALSE);}

/* k1736 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[37],lf[40],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[6],t4));}

/* k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in ... */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:561: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[841],C_fix(2),C_fix(1),lf[842],C_SCHEME_FALSE);}

/* k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in ... */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:559: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[808],C_fix(2),C_fix(1),lf[845],C_SCHEME_FALSE);}

/* k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in ... */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:560: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[843],C_fix(2),C_fix(1),lf[844],C_SCHEME_FALSE);}

/* k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in ... */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:558: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[846],C_fix(2),C_fix(1),lf[847],C_SCHEME_FALSE);}

/* k5034 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:381: rewrite */
t2=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[906],C_fix(8),t1);}

/* a5041 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5042,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_eqp(lf[34],*((C_word*)lf[35]+1));
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=t9;
t11=C_i_cadr(t5);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5081,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t13=C_slot(t11,C_fix(1));
t14=C_eqp(lf[43],t13);
if(C_truep(t14)){
t15=C_slot(t11,C_fix(2));
t16=C_i_car(t15);
t17=t12;
f_5081(t17,C_eqp(C_fix(2),t16));}
else{
t15=t12;
f_5081(t15,C_SCHEME_FALSE);}}
else{
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5151,a[2]=t1,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_a_i_record4(&a,4,lf[37],lf[49],lf[916],C_SCHEME_END_OF_LIST);
/* c-platform.scm:360: cons* */
t13=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t11,t12,t4,t5);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k5038 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:380: rewrite */
t2=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[910],C_fix(8),t1);}

/* eqv?-id in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1751,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1767,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t11,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t13=C_slot(t9,C_fix(1));
t14=C_eqp(lf[44],t13);
if(C_truep(t14)){
t15=C_slot(t11,C_fix(1));
t16=C_eqp(lf[44],t15);
if(C_truep(t16)){
t17=C_slot(t9,C_fix(2));
t18=C_slot(t11,C_fix(2));
if(C_truep(C_i_equalp(t17,t18))){
t19=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1906,a[2]=t4,a[3]=t12,a[4]=t20,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:393: qnode */
t22=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,C_SCHEME_TRUE);}
else{
t19=t12;
f_1767(t19,C_SCHEME_FALSE);}}
else{
t17=t12;
f_1767(t17,C_SCHEME_FALSE);}}
else{
t15=t12;
f_1767(t15,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1751,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:401: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[797],C_fix(8),t2);}

/* k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in ... */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:571: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[821],C_fix(2),C_fix(1),lf[822],C_SCHEME_FALSE);}

/* k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in ... */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:570: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[823],C_fix(2),C_fix(1),lf[824],C_SCHEME_FALSE);}

/* k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in ... */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:569: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[825],C_fix(2),C_fix(1),lf[826],C_SCHEME_FALSE);}

/* k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5036,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:381: op1 */
f_1666(t3,lf[907],lf[908],lf[909]);}

/* k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in ... */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:568: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[827],C_fix(2),C_fix(1),lf[828],C_SCHEME_FALSE);}

/* k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in ... */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:740: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[511],C_fix(2),C_fix(1),lf[526],C_SCHEME_TRUE);}

/* k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1627,2,t0,t1);}
t2=C_mutate2((C_word*)lf[33]+1 /* (set! ##compiler#foldable-bindings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5670,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5670(t7,t3,lf[932]);}

/* k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in ... */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:741: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[509],C_fix(2),C_fix(1),lf[525],C_SCHEME_TRUE);}

/* k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in ... */
static void C_ccall f_3167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:742: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[507],C_fix(2),C_fix(1),lf[524],C_SCHEME_TRUE);}

/* rewrite-make-vector in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in ... */
static void C_ccall f_3772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3772,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
if(C_truep(C_i_pairp(t5))){
t7=t5;
t8=C_u_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[43],t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3792,a[2]=t8,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1041: gensym */
t12=*((C_word*)lf[67]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in ... */
static void C_ccall f_3770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3772,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1059: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[129],C_fix(8),t2);}

/* k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in ... */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:550: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[814],C_fix(2),C_fix(1),lf[860],C_SCHEME_FALSE);}

/* k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in ... */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:551: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[812],C_fix(2),C_fix(1),lf[859],C_SCHEME_FALSE);}

/* k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in ... */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:539: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[865],C_fix(8),((C_word*)t0)[3]);}

/* k5079 in a5041 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_5081(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5081,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5099,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:356: qnode */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(1));}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[37],lf[38],lf[915],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t4));}}

/* k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in ... */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:547: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[863],C_fix(13),C_fix(1),lf[864],C_SCHEME_TRUE);}

/* k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in ... */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:736: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[529],C_fix(2),C_fix(1),lf[530],C_SCHEME_TRUE);}

/* k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in ... */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:548: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[861],C_fix(13),C_fix(2),lf[862],C_SCHEME_TRUE);}

/* k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in ... */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:738: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[515],C_fix(2),C_fix(1),lf[528],C_SCHEME_TRUE);}

/* k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in ... */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:739: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[513],C_fix(2),C_fix(1),lf[527],C_SCHEME_TRUE);}

/* k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in ... */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:553: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[856],C_fix(2),C_fix(1),lf[857],C_SCHEME_FALSE);}

/* k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in ... */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:554: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[854],C_fix(2),C_fix(1),lf[855],C_SCHEME_FALSE);}

/* k1599 in k1596 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4197 in k4139 in a4130 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in ... */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4199,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[37],lf[40],lf[81],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[5],t5);
t7=((C_word*)t0)[6];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[37],lf[65],((C_word*)t0)[7],t6));}

/* k1602 in k1599 in k1596 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1604,2,t0,t1);}
t2=C_set_block_item(lf[0] /* ##compiler#default-optimization-passes */,0,C_fix(3));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##compiler#default-declarations ...) */,lf[2]);
t4=C_mutate2((C_word*)lf[3]+1 /* (set! ##compiler#default-debugging-declarations ...) */,lf[4]);
t5=C_mutate2((C_word*)lf[5]+1 /* (set! ##compiler#default-profiling-declarations ...) */,lf[6]);
t6=C_mutate2((C_word*)lf[7]+1 /* (set! ##compiler#units-used-by-default ...) */,lf[8]);
t7=C_set_block_item(lf[9] /* ##compiler#words-per-flonum */,0,C_fix(4));
t8=C_set_block_item(lf[10] /* ##compiler#parameter-limit */,0,C_fix(1024));
t9=C_set_block_item(lf[11] /* small-parameter-limit */,0,C_fix(128));
t10=C_mutate2((C_word*)lf[12]+1 /* (set! ##compiler#unlikely-variables ...) */,lf[13]);
t11=C_mutate2((C_word*)lf[14]+1 /* (set! ##compiler#eq-inline-operator ...) */,lf[15]);
t12=C_mutate2((C_word*)lf[16]+1 /* (set! ##compiler#membership-test-operators ...) */,lf[17]);
t13=C_set_block_item(lf[18] /* ##compiler#membership-unfold-limit */,0,C_fix(20));
t14=C_mutate2((C_word*)lf[19]+1 /* (set! ##compiler#target-include-file ...) */,lf[20]);
t15=C_mutate2((C_word*)lf[21]+1 /* (set! ##compiler#valid-compiler-options ...) */,lf[22]);
t16=C_mutate2((C_word*)lf[23]+1 /* (set! ##compiler#valid-compiler-options-with-argument ...) */,lf[24]);
t17=C_mutate2((C_word*)lf[25]+1 /* (set! ##compiler#default-standard-bindings ...) */,lf[26]);
t18=C_mutate2((C_word*)lf[27]+1 /* (set! ##compiler#default-extended-bindings ...) */,lf[28]);
t19=C_mutate2((C_word*)lf[29]+1 /* (set! ##compiler#internal-bindings ...) */,lf[30]);
t20=C_mutate2((C_word*)lf[31]+1 /* (set! ##compiler#non-foldable-bindings ...) */,lf[32]);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:226: lset-union */
t23=*((C_word*)lf[934]+1);
((C_proc5)(void*)(*((C_word*)t23+1)))(5,t23,t22,*((C_word*)lf[801]+1),*((C_word*)lf[25]+1),*((C_word*)lf[27]+1));}

/* k2640 in k2637 in k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in ... */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:552: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[810],C_fix(2),C_fix(1),lf[858],C_SCHEME_FALSE);}

/* k5588 in k5572 in a5566 in k5487 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5590,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[38],lf[926],t2));}

/* a5566 in k5487 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)tr4,(void*)f_5567,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5574,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t3;
t6=C_slot(t5,C_fix(1));
t7=C_eqp(lf[43],t6);
if(C_truep(t7)){
t8=t3;
t9=C_slot(t8,C_fix(2));
t10=C_i_car(t9);
t11=t4;
f_5574(t11,C_eqp(C_fix(2),t10));}
else{
t8=t4;
f_5574(t8,C_SCHEME_FALSE);}}

/* k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in ... */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:545: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[865],C_fix(13),C_fix(2),lf[867],C_SCHEME_FALSE);}

/* k2625 in k2622 in k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in ... */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:546: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[865],C_fix(13),C_fix(2),lf[866],C_SCHEME_TRUE);}

/* k4781 in a4729 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in ... */
static void C_ccall f_4783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4783,2,t0,t1);}
/* c-platform.scm:868: build */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_4733(C_a_i(&a,28),((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k5563 in k5487 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5565,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k2619 in k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in ... */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:544: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[868],C_fix(13),C_fix(2),lf[869],C_SCHEME_TRUE);}

/* k2616 in k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in ... */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:543: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[868],C_fix(13),C_fix(2),lf[870],C_SCHEME_FALSE);}

/* k2613 in k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in ... */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:542: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[52],C_fix(13),C_SCHEME_FALSE,lf[871],C_SCHEME_TRUE);}

/* k2610 in k2607 in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in ... */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:541: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[51],C_fix(13),C_SCHEME_FALSE,lf[872],C_SCHEME_TRUE);}

/* k3790 in rewrite-make-vector in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in ... */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3792,2,t0,t1);}
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=C_i_car(t3);
t5=t4;
if(C_truep(C_fixnump(t5))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3807,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1044: <= */
C_less_or_equal_p(5,0,t6,C_fix(0),t5,C_fix(32));}
else{
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k4989 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4991,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_4822(t3,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in ... */
static void C_ccall f_3725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1015: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[159],C_fix(2),C_fix(1),lf[160],C_SCHEME_FALSE);}

/* k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in ... */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3731,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1016: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[157],C_fix(2),C_fix(1),lf[158],C_SCHEME_FALSE);}

/* k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in ... */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1014: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[161],C_fix(2),C_fix(1),lf[162],C_SCHEME_FALSE);}

/* k5572 in a5566 in k5487 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_5574(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5574,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:270: qnode */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(1));}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[38],lf[927],t2));}}

/* k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in ... */
static void C_ccall f_4081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1132: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[115],C_fix(3),lf[100],C_fix(0));}

/* k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in ... */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1134: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[112],C_fix(3),lf[113],C_fix(0));}

/* k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in ... */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1133: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[114],C_fix(3),lf[103],C_fix(0));}

/* k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in ... */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1008: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[171],C_fix(2),C_fix(3),lf[172],C_SCHEME_FALSE);}

/* k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in ... */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1007: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[173],C_fix(2),C_fix(3),lf[174],C_SCHEME_FALSE);}

/* k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in ... */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1006: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[175],C_fix(2),C_fix(3),lf[176],C_SCHEME_FALSE);}

/* k4008 in k4012 in a3953 in k3935 in rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in ... */
static void C_ccall f_4010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4010,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1081: get */
t3=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],lf[77]);}}

/* k5513 in k5487 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5515,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k4012 in a3953 in k3935 in rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in ... */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1080: get */
t3=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],lf[78]);}}

/* k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in ... */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:978: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[223],C_fix(17),C_fix(1),lf[224]);}

/* k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in ... */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:979: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[221],C_fix(17),C_fix(1),lf[222]);}

/* k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in ... */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:980: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[219],C_fix(17),C_fix(1),lf[220]);}

/* map-loop435 in k2057 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_2013(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2013,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-platform.scm:444: g441 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in ... */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3770,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1031: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[130],C_fix(7),C_fix(1),lf[131],C_fix(1),C_SCHEME_FALSE);}

/* k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in ... */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1029: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[134],C_fix(7),C_fix(1),lf[135],C_fix(1),C_SCHEME_FALSE);}

/* k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in ... */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:974: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[231],C_fix(17),C_fix(1),lf[232],lf[233]);}

/* k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in ... */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:975: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[229],C_fix(17),C_fix(1),lf[230]);}

/* k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in ... */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1030: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[132],C_fix(7),C_fix(1),lf[133],C_fix(1),C_SCHEME_FALSE);}

/* k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in ... */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1086: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[123],C_fix(8),((C_word*)t0)[3]);}

/* k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in ... */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:976: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[227],C_fix(17),C_fix(1),lf[228]);}

/* k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in ... */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:977: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[225],C_fix(17),C_fix(2),lf[226]);}

/* k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in ... */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4411,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1115: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[122],C_fix(8),t3);}

/* k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in ... */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1020: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[151],C_fix(17),C_fix(1),lf[152]);}

/* k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in ... */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1017: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[155],C_fix(2),C_fix(1),lf[156],C_SCHEME_FALSE);}

/* k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in ... */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1129: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[120],C_fix(3),lf[119],C_fix(0));}

/* k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in ... */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3737,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1018: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[153],C_fix(2),C_fix(1),lf[154],C_SCHEME_FALSE);}

/* k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in ... */
static void C_ccall f_3653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:985: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[209],C_fix(17),C_fix(1),lf[210]);}

/* k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in ... */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3653,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:984: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[211],C_fix(17),C_fix(1),lf[212]);}

/* k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in ... */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:986: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[207],C_fix(17),C_fix(1),lf[208]);}

/* k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in ... */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1130: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[118],C_fix(3),lf[119],C_SCHEME_FALSE);}

/* k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in ... */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1131: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[116],C_fix(3),lf[117],C_fix(0));}

/* k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in ... */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:987: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[205],C_fix(17),C_fix(2),lf[206]);}

/* k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in ... */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1025: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[142],C_fix(7),C_fix(1),lf[143],C_fix(1),C_SCHEME_FALSE);}

/* k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1024: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[144],C_fix(7),C_fix(1),lf[145],C_fix(1),C_SCHEME_FALSE);}

/* k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in ... */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1021: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[149],C_fix(17),C_fix(1),lf[150]);}

/* k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in ... */
static void C_ccall f_3641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:981: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[217],C_fix(17),C_fix(1),lf[218]);}

/* k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in ... */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1022: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[146],C_fix(17),C_fix(1),lf[147],lf[148]);}

/* k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in ... */
static void C_ccall f_3647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:983: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[213],C_fix(17),C_fix(1),lf[214]);}

/* k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in ... */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:982: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[215],C_fix(17),C_fix(2),lf[216]);}

/* for-each-loop44 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_5670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5670,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5680,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,C_SCHEME_TRUE);
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[930]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,t4,lf[931],C_SCHEME_TRUE);}
else{
t6=C_i_car(t5);
/* tweaks.scm:54: ##sys#put! */
t7=*((C_word*)lf[930]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,lf[931],t6);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in ... */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1013: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[163],C_fix(2),C_fix(1),lf[164],C_SCHEME_FALSE);}

/* k2060 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_2062(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2062,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2081,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_record4(&a,4,lf[37],lf[49],lf[50],C_SCHEME_END_OF_LIST);
/* c-platform.scm:457: cons* */
t6=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in ... */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1012: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[165],C_fix(2),C_fix(1),lf[166],C_SCHEME_FALSE);}

/* k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in ... */
static void C_ccall f_3713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1011: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[167],C_fix(2),C_fix(1),lf[168],C_SCHEME_FALSE);}

/* k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in ... */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3713,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1009: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[169],C_fix(2),C_fix(3),lf[170],C_SCHEME_FALSE);}

/* k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in ... */
static void C_ccall f_4099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1164: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[101],C_fix(23),C_fix(1),lf[102],lf[103]);}

/* k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in ... */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1163: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[104],C_fix(23),C_fix(0),lf[105],lf[100]);}

/* k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_4093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4274,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1151: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[108],C_fix(8),t3);}

/* k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in ... */
static void C_ccall f_4090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4093,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4324,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1136: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[111],C_fix(8),t3);}

/* k2057 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2059,2,t0,t1);}
t2=C_i_cdr(t1);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[41]+1);
t9=C_slot(((C_word*)t0)[2],C_fix(2));
t10=C_i_car(t9);
t11=C_i_check_list_2(t10,lf[46]);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2011,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2013,a[2]=t7,a[3]=t14,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_2013(t16,t12,t10);}

/* k5678 in for-each-loop44 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5670(t3,((C_word*)t0)[4],t2);}

/* k5693 in k1602 in k1599 in k1596 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:224: lset-difference */
t2=*((C_word*)lf[933]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[801]+1),t1,*((C_word*)lf[31]+1));}

/* k2040 in map-loop435 in k2057 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2042,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2013(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2013(t6,((C_word*)t0)[5],t5);}}

/* k4000 in k4004 in k4008 in k4012 in a3953 in k3935 in rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in ... */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4002,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t2));}

/* k4004 in k4008 in k4012 in a3953 in k3935 in rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in ... */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1084: qnode */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_FALSE);}}

/* k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in ... */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:660: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[661],C_fix(2),C_fix(2),lf[662],C_SCHEME_FALSE);}

/* k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in ... */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:661: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[659],C_fix(2),C_fix(2),lf[660],C_SCHEME_FALSE);}

/* k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in ... */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:659: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[663],C_fix(2),C_fix(2),lf[664],C_SCHEME_TRUE);}

/* k2079 in k2060 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2081,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[3],t1));}

/* k2009 in k2057 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:444: append */
t2=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in ... */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2906,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:644: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[693],C_fix(2),C_fix(2),lf[694],C_SCHEME_TRUE);}

/* k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in ... */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:643: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[695],C_fix(2),C_fix(2),lf[696],C_SCHEME_TRUE);}

/* k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in ... */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:642: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[697],C_fix(2),C_fix(1),lf[698],C_SCHEME_TRUE);}

/* k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in ... */
static void C_ccall f_3758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1028: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[136],C_fix(7),C_fix(1),lf[137],C_fix(1),C_SCHEME_FALSE);}

/* k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in k3687 in ... */
static void C_ccall f_3752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1026: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[140],C_fix(7),C_fix(1),lf[141],C_fix(1),C_SCHEME_FALSE);}

/* k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in k3705 in k3702 in k3699 in k3696 in k3693 in k3690 in ... */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1027: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[138],C_fix(7),C_fix(1),lf[139],C_fix(1),C_SCHEME_FALSE);}

/* k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in ... */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:645: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[691],C_fix(2),C_fix(2),lf[692],C_SCHEME_TRUE);}

/* k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in ... */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:653: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[675],C_fix(2),C_fix(2),lf[676],C_SCHEME_FALSE);}

/* k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in ... */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:654: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[673],C_fix(2),C_fix(2),lf[674],C_SCHEME_FALSE);}

/* k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in ... */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:655: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[671],C_fix(2),C_fix(2),lf[672],C_SCHEME_FALSE);}

/* k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in ... */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:652: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[677],C_fix(2),C_fix(2),lf[678],C_SCHEME_TRUE);}

/* k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in ... */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:663: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[655],C_fix(2),C_fix(1),lf[656],C_SCHEME_TRUE);}

/* k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in ... */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:607: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[760],C_fix(2),C_fix(1),lf[761],C_SCHEME_TRUE);}

/* k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in ... */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:665: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[651],C_fix(2),C_fix(1),lf[652],C_SCHEME_TRUE);}

/* k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in ... */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:664: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[653],C_fix(2),C_fix(1),lf[654],C_SCHEME_TRUE);}

/* k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in ... */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:606: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[762],C_fix(2),C_fix(1),lf[763],C_SCHEME_TRUE);}

/* k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in ... */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:662: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[657],C_fix(2),C_fix(1),lf[658],C_SCHEME_TRUE);}

/* k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in ... */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:608: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[758],C_fix(2),C_fix(1),lf[759],C_SCHEME_TRUE);}

/* k4355 in a4323 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in ... */
static void C_fcall f_4357(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4357,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-platform.scm:1146: qnode */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}
else{
t2=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t3=C_a_i_record4(&a,4,lf[37],lf[38],lf[109],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[6],t4));}}

/* k4352 in a4323 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in ... */
static void C_ccall f_4354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4354,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in ... */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:766: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[442],C_fix(9),lf[485],lf[486],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in ... */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:648: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[685],C_fix(2),C_fix(2),lf[686],C_SCHEME_TRUE);}

/* k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in ... */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:765: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[444],C_fix(9),lf[487],lf[488],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in ... */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:647: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[687],C_fix(2),C_fix(2),lf[688],C_SCHEME_TRUE);}

/* k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in ... */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:764: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[446],C_fix(9),lf[489],lf[490],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in ... */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:646: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[689],C_fix(2),C_fix(2),lf[690],C_SCHEME_TRUE);}

/* k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in ... */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3242,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:767: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[440],C_fix(9),lf[483],lf[484],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* a4323 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_4324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4324,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4354,a[2]=t4,a[3]=t1,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4357,a[2]=t12,a[3]=t9,a[4]=t4,a[5]=t1,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t14=C_slot(t9,C_fix(1));
t15=C_eqp(lf[44],t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4382,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t17=C_slot(t9,C_fix(2));
t18=C_i_car(t17);
/* c-platform.scm:1145: get */
t19=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t16,t2,t18,lf[110]);}
else{
t16=t13;
f_4357(t16,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in ... */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:756: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[503],C_fix(2),C_fix(2),lf[504],C_SCHEME_TRUE);}

/* k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in ... */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:755: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[505],C_fix(2),C_fix(2),lf[506],C_SCHEME_TRUE);}

/* k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in ... */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:651: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[679],C_fix(2),C_fix(2),lf[680],C_SCHEME_TRUE);}

/* k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in ... */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:650: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[681],C_fix(2),C_fix(2),lf[682],C_SCHEME_TRUE);}

/* k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in ... */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:753: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[509],C_fix(2),C_fix(2),lf[510],C_SCHEME_TRUE);}

/* k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in ... */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:649: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[683],C_fix(2),C_fix(2),lf[684],C_SCHEME_TRUE);}

/* k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in ... */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:754: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[507],C_fix(2),C_fix(2),lf[508],C_SCHEME_TRUE);}

/* k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in ... */
static void C_ccall f_3272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3275,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:780: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[466],C_fix(11),C_fix(3),lf[302],C_SCHEME_FALSE);}

/* k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in ... */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:781: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[466],C_fix(2),C_fix(3),lf[467],C_SCHEME_TRUE);}

/* k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in ... */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:783: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[462],C_fix(12),lf[465],C_SCHEME_TRUE,C_fix(2));}

/* k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in ... */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:761: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[493],C_fix(2),C_fix(2),lf[494],C_SCHEME_TRUE);}

/* k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in ... */
static void C_ccall f_3221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:760: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[495],C_fix(2),C_fix(3),lf[496],C_SCHEME_TRUE);}

/* k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in ... */
static void C_ccall f_3227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3227,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:763: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[448],C_fix(9),lf[491],lf[492],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in ... */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3918,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[44],t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3937,a[2]=t9,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=C_slot(t9,C_fix(2));
t14=C_i_car(t13);
/* c-platform.scm:1071: get */
t15=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t12,t2,t14,lf[73]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in ... */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3918,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4065,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1085: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[62],C_fix(8),t2);}

/* k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in ... */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1063: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[124],C_fix(20),C_fix(2),lf[125],C_fix(10),C_SCHEME_FALSE);}

/* k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in ... */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1062: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[126],C_fix(7),C_fix(1),lf[127],C_fix(10),C_SCHEME_FALSE);}

/* k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in ... */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:825: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[406],C_fix(14),lf[34],C_fix(2),lf[407],lf[408]);}

/* k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in ... */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:827: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[403],C_fix(17),C_fix(1),lf[404],lf[405]);}

/* k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in ... */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:824: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[400],C_fix(14),lf[34],C_fix(1),lf[409],lf[410]);}

/* k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in ... */
static void C_ccall f_3215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:758: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[499],C_fix(2),C_fix(2),lf[500],C_SCHEME_TRUE);}

/* k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in ... */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:757: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[501],C_fix(2),C_fix(2),lf[502],C_SCHEME_TRUE);}

/* k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in ... */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:828: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[400],C_fix(17),C_fix(1),lf[401],lf[402]);}

/* k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in ... */
static void C_ccall f_3218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3218,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:759: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[497],C_fix(2),C_fix(2),lf[498],C_SCHEME_TRUE);}

/* k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in ... */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:805: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[444],C_fix(13),C_SCHEME_FALSE,lf[445],C_SCHEME_TRUE);}

/* k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in ... */
static void C_ccall f_3245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:770: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[480],C_fix(11),C_fix(2),lf[481],C_SCHEME_TRUE);}

/* k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in ... */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:806: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[442],C_fix(13),C_SCHEME_FALSE,lf[443],C_SCHEME_TRUE);}

/* k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in ... */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:769: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[482],C_fix(11),C_fix(1),lf[122],C_SCHEME_TRUE);}

/* k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in ... */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:807: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[440],C_fix(13),C_SCHEME_FALSE,lf[441],C_SCHEME_TRUE);}

/* k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in k3183 in ... */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:771: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[46],C_fix(11),C_fix(2),lf[479],C_SCHEME_TRUE);}

/* k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in ... */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:818: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[419],C_fix(13),C_fix(0),lf[420],C_SCHEME_TRUE);}

/* k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in ... */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:817: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[421],C_fix(13),C_fix(1),lf[422],C_SCHEME_TRUE);}

/* k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in ... */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:819: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[417],C_fix(13),C_fix(1),lf[418],C_SCHEME_TRUE);}

/* k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in k3711 in k3708 in ... */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1060: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[128],C_fix(8),((C_word*)t0)[3]);}

/* k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in ... */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:831: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[396],C_fix(2),C_fix(1),lf[397],C_SCHEME_TRUE);}

/* k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in ... */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:830: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[398],C_fix(2),C_fix(1),lf[399],C_SCHEME_TRUE);}

/* k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in ... */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:656: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[669],C_fix(2),C_fix(2),lf[670],C_SCHEME_FALSE);}

/* k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in ... */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:600: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[774],C_fix(2),C_fix(1),lf[775],C_SCHEME_TRUE);}

/* k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in ... */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:657: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[667],C_fix(2),C_fix(2),lf[668],C_SCHEME_FALSE);}

/* k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in ... */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:833: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[394],C_fix(15),lf[392],lf[34],lf[395],C_SCHEME_FALSE);}

/* k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in ... */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:599: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[776],C_fix(2),C_fix(1),lf[777],C_SCHEME_TRUE);}

/* k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in k2904 in k2901 in k2898 in k2895 in k2892 in k2889 in k2886 in k2883 in ... */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:658: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[665],C_fix(2),C_fix(2),lf[666],C_SCHEME_TRUE);}

/* k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in ... */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:601: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[772],C_fix(2),C_fix(1),lf[773],C_SCHEME_TRUE);}

/* a3953 in k3935 in rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in ... */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3954,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nequalp(t3,C_fix(2)))){
t5=(C_truep(t4)?t4:C_i_cadr(((C_word*)t0)[2]));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4014,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1079: get */
t8=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,((C_word*)t0)[5],t6,lf[79]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in ... */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:604: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[766],C_fix(2),C_fix(1),lf[767],C_SCHEME_TRUE);}

/* k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in ... */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:603: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[768],C_fix(2),C_fix(1),lf[769],C_SCHEME_TRUE);}

/* k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in ... */
static void C_ccall f_2780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:602: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[770],C_fix(2),C_fix(1),lf[771],C_SCHEME_TRUE);}

/* k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in ... */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:605: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[764],C_fix(2),C_fix(1),lf[765],C_SCHEME_TRUE);}

/* k4574 in a4495 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in ... */
static void C_fcall f_4576(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4576,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_negativep(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4600,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4604,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:950: - */
C_minus(3,0,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,t3,((C_word*)t0)[5]);
t5=((C_word*)t0)[4];
f_4526(t5,C_a_i_record4(&a,4,lf[37],lf[38],lf[268],t4));}}
else{
t2=((C_word*)t0)[4];
f_4526(t2,C_SCHEME_FALSE);}}

/* k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in ... */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:821: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[413],C_fix(13),C_fix(1),lf[414],C_SCHEME_TRUE);}

/* k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in ... */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:820: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[415],C_fix(13),C_fix(1),lf[416],C_SCHEME_TRUE);}

/* k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in ... */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:823: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[403],C_fix(14),lf[34],C_fix(1),lf[411],lf[412]);}

/* k2230 in a2204 in a2192 in rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_2232(C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2232,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(*((C_word*)lf[36]+1))?lf[57]:lf[58]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:485: qnode */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t2=(C_truep(*((C_word*)lf[36]+1))?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,((C_word*)t0)[7]);
t4=((C_word*)t0)[8];
t5=C_a_i_record4(&a,4,lf[37],lf[38],t3,t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t6));}
else{
if(C_truep(((C_word*)t0)[9])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[9]);
t4=((C_word*)t0)[8];
t5=C_a_i_record4(&a,4,lf[37],lf[38],t3,t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t6));}
else{
/* c-platform.scm:488: return */
t3=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[11],C_SCHEME_FALSE);}}}}

/* k3935 in rewrite-call/cc in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in ... */
static void C_ccall f_3937(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3937,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(t1,C_fix(1));
t3=C_eqp(lf[64],t2);
if(C_truep(t3)){
t4=C_slot(t1,C_fix(2));
t5=C_i_caddr(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3954,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1074: decompose-lambda-list */
t8=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[5],t6,t7);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in ... */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:716: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[557],C_fix(5),lf[560],C_fix(0),lf[34]);}

/* k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in ... */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:714: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[561],C_fix(16),C_fix(2),lf[562],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in ... */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3092,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:713: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[563],C_fix(16),C_fix(1),lf[564],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k4524 in a4495 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in ... */
static void C_fcall f_4526(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4526,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t3));}
else{
t2=C_eqp(*((C_word*)lf[35]+1),lf[34]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
t4=C_a_i_record4(&a,4,lf[37],lf[38],lf[265],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t5));}
else{
t3=C_a_i_list2(&a,2,lf[266],*((C_word*)lf[9]+1));
t4=((C_word*)t0)[5];
t5=C_a_i_record4(&a,4,lf[37],lf[40],t3,t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[2],t5);
t7=((C_word*)t0)[3];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t6));}}}

/* k2227 in a2204 in a2192 in rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in ... */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:794: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[433],C_fix(16),C_fix(2),lf[457],C_SCHEME_TRUE,C_fix(4));}

/* k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in ... */
static void C_ccall f_3308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:795: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[455],C_fix(16),C_fix(1),lf[456],C_SCHEME_TRUE,C_fix(4));}

/* k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in ... */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:793: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[430],C_fix(16),C_fix(2),lf[458],C_SCHEME_TRUE,C_fix(4));}

/* k2250 in k2230 in a2204 in a2192 in rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 in ... */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[37],lf[38],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[6],t4));}

/* k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in ... */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:799: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[444],C_fix(17),C_fix(2),lf[452]);}

/* k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in ... */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:797: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[448],C_fix(17),C_fix(2),lf[454]);}

/* k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in ... */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:798: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[446],C_fix(17),C_fix(2),lf[453]);}

/* k2296 in a2204 in a2192 in rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2232(t2,C_eqp(lf[59],t1));}

/* k1995 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:442: cons* */
t2=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in ... */
static void C_ccall f_3476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:878: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[343],C_fix(16),C_SCHEME_FALSE,lf[344],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in ... */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3476,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:877: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[345],C_fix(16),C_SCHEME_FALSE,lf[346],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in ... */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:876: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[59],C_fix(16),C_SCHEME_FALSE,lf[347],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in ... */
static void C_ccall f_3479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:879: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[341],C_fix(16),C_SCHEME_FALSE,lf[342],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k4826 in k4820 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_4828(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4828,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];
t4=C_a_i_record4(&a,4,lf[37],lf[38],lf[903],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[37],lf[39],t2,t5));}}

/* k4820 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_4822(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4822,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[6],C_fix(1));
t5=C_eqp(lf[43],t4);
if(C_truep(t5)){
t6=C_slot(((C_word*)t0)[6],C_fix(2));
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4932,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:419: immediate? */
t10=*((C_word*)lf[301]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}
else{
t6=t3;
f_4859(t6,C_SCHEME_FALSE);}}}

/* a5635 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5636(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_5636,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[43],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(C_fix(1),t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in ... */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:874: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[351],C_fix(16),C_SCHEME_FALSE,lf[352],C_SCHEME_TRUE,lf[353],C_SCHEME_TRUE);}

/* k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in ... */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:873: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[354],C_fix(16),C_fix(2),lf[355],C_SCHEME_TRUE,C_fix(3));}

/* k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1958,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:459: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[902],C_fix(8),t2);}

/* k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in ... */
static void C_ccall f_3467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3470,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:875: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[348],C_fix(16),C_SCHEME_FALSE,lf[349],C_SCHEME_TRUE,lf[350]);}

/* rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1958,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1968,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:437: last */
t7=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in ... */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:885: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[331],C_fix(2),C_fix(1),lf[332],C_SCHEME_FALSE);}

/* k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in ... */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:884: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[333],C_fix(2),C_fix(1),lf[334],C_SCHEME_FALSE);}

/* k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in ... */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:886: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[329],C_fix(2),C_fix(1),lf[330],C_SCHEME_FALSE);}

/* a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4806,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4822,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t11,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t13=C_slot(t9,C_fix(1));
t14=C_eqp(lf[44],t13);
if(C_truep(t14)){
t15=C_slot(t11,C_fix(1));
t16=C_eqp(lf[44],t15);
if(C_truep(t16)){
t17=C_slot(t9,C_fix(2));
t18=C_slot(t11,C_fix(2));
if(C_truep(C_i_equalp(t17,t18))){
t19=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4991,a[2]=t4,a[3]=t12,a[4]=t20,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:416: qnode */
t22=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,C_SCHEME_TRUE);}
else{
t19=t12;
f_4822(t19,C_SCHEME_FALSE);}}
else{
t17=t12;
f_4822(t17,C_SCHEME_FALSE);}}
else{
t15=t12;
f_4822(t15,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in ... */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3488,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:881: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[337],C_fix(16),C_fix(1),lf[338],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in ... */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:880: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[339],C_fix(16),C_fix(1),lf[340],C_SCHEME_FALSE,C_fix(2));}

/* k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in ... */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:882: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[335],C_fix(16),C_fix(2),lf[336],C_SCHEME_FALSE,C_fix(2));}

/* a2204 in a2192 in rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2205,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2232,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[6],a[10]=t2,a[11]=t7,tmp=(C_word)a,a+=12,tmp);
t9=C_slot(t4,C_fix(1));
t10=C_eqp(lf[44],t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2298,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t12=C_slot(t4,C_fix(2));
t13=C_i_car(t12);
/* c-platform.scm:479: get */
t14=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t11,((C_word*)t0)[7],t13,lf[61]);}
else{
t11=t8;
f_2232(t11,C_SCHEME_FALSE);}}

/* k1989 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1991,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[3],t1));}

/* k2532 in k2536 in k2457 in k2454 in k2451 in k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in ... */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2534,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2);
t4=C_a_i_list1(&a,1,t3);
t5=C_a_i_record4(&a,4,lf[37],lf[64],((C_word*)t0)[5],t4);
t6=t5;
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=t6,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:537: varnode */
t10=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[9]);}

/* k2536 in k2457 in k2454 in k2451 in k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in ... */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=t3;
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-platform.scm:534: varnode */
t8=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[2]);}

/* k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in ... */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:845: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[373],C_fix(16),C_fix(2),lf[374],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in ... */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:847: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[369],C_fix(16),C_fix(1),lf[370],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in ... */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:846: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[371],C_fix(16),C_fix(1),lf[372],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1968,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_slot(t2,C_fix(1));
t6=C_eqp(lf[43],t5);
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1991,a[2]=((C_word*)t0)[3],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1997,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2059,a[2]=t2,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:444: butlast */
t14=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,((C_word*)t0)[2]);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t4,C_fix(1));
t9=C_eqp(lf[44],t8);
if(C_truep(t9)){
t10=C_i_length(((C_word*)t0)[2]);
t11=C_eqp(C_fix(2),t10);
if(C_truep(t11)){
t12=C_slot(t4,C_fix(2));
t13=C_i_car(t12);
if(C_truep((C_truep(C_eqp(t13,lf[51]))?C_SCHEME_TRUE:(C_truep(C_eqp(t13,lf[52]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:51: ##sys#get */
t15=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,t13,lf[55]);}
else{
t14=t7;
f_2062(t14,C_SCHEME_FALSE);}}
else{
t12=t7;
f_2062(t12,C_SCHEME_FALSE);}}
else{
t10=t7;
f_2062(t10,C_SCHEME_FALSE);}}}

/* k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in ... */
static void C_ccall f_3260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:775: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[474],C_fix(11),C_fix(3),lf[475],C_SCHEME_FALSE);}

/* k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in ... */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:776: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[472],C_fix(11),C_fix(2),lf[473],C_SCHEME_FALSE);}

/* k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in ... */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:777: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[470],C_fix(11),C_fix(1),lf[471],C_SCHEME_TRUE);}

/* k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in ... */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3272,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:778: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[468],C_fix(11),C_fix(1),lf[469],C_SCHEME_TRUE);}

/* k4860 in k4857 in k4820 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_4862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4862,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[37],lf[38],lf[904],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
f_4828(t6,C_a_i_record4(&a,4,lf[37],lf[39],t2,t5));}
else{
t2=((C_word*)t0)[4];
f_4828(t2,C_SCHEME_FALSE);}}

/* k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in ... */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:962: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[257],C_fix(17),C_fix(2),lf[258]);}

/* k4930 in k4820 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_4859(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_4859(t2,C_i_symbolp(((C_word*)t0)[3]));}}

/* k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in ... */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:961: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[259],C_fix(17),C_fix(2),lf[260]);}

/* k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in ... */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:842: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[379],C_fix(16),C_fix(1),lf[380],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in ... */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:843: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[377],C_fix(16),C_fix(2),lf[378],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in ... */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:963: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[255],C_fix(17),C_fix(2),lf[256]);}

/* k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in ... */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:844: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[375],C_fix(16),C_fix(1),lf[376],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k5149 in a5041 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5151,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[3],t1));}

/* k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in k3186 in ... */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:772: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[478],C_fix(11),C_fix(3),lf[302],C_SCHEME_TRUE);}

/* k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in k3189 in ... */
static void C_ccall f_3254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:773: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[477],C_fix(11),C_fix(3),lf[302],C_SCHEME_FALSE);}

/* k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in k3213 in k3210 in k3207 in k3204 in k3201 in k3198 in k3195 in k3192 in ... */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:774: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[476],C_fix(11),C_SCHEME_FALSE,lf[343],C_SCHEME_FALSE);}

/* k4857 in k4820 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_4859(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4859,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_4862(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_eqp(lf[43],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[5],C_fix(2));
t6=C_i_car(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4899,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:422: immediate? */
t9=*((C_word*)lf[301]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t7);}
else{
t5=t2;
f_4862(t5,C_SCHEME_FALSE);}}}

/* k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in ... */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:959: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[263],C_fix(17),C_fix(2),lf[264]);}

/* k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in ... */
static void C_ccall f_3572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4496,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:931: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[270],C_fix(8),t3);}

/* k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in ... */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:960: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[261],C_fix(17),C_fix(3),lf[262]);}

/* k1904 in eqv?-id in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1906,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_1767(t3,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_save_and_reclaim((void*)tr6,(void*)f_5167,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
if(C_truep(C_fixnum_greater_or_equal_p(t6,C_fix(2)))){
t7=C_i_car(t5);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5287,a[2]=t8,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5289,tmp=(C_word)a,a+=2,tmp);
t11=t5;
t12=C_u_i_cdr(t11);
/* c-platform.scm:322: remove */
t13=*((C_word*)lf[921]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t9,t10,t12);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in k3216 in ... */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3284,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:784: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[461],C_fix(12),lf[464],C_SCHEME_TRUE,C_fix(2));}

/* k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in ... */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:787: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[462],C_fix(18),C_fix(0));}

/* k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in k3222 in k3219 in ... */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:785: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[463],C_fix(12),C_SCHEME_FALSE,C_SCHEME_TRUE,C_fix(1));}

/* k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in ... */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:927: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[277],C_fix(17),C_fix(2),lf[278],lf[279]);}

/* k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in ... */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:928: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[274],C_fix(17),C_fix(2),lf[275],lf[276]);}

/* k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in ... */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:926: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[280],C_fix(17),C_fix(2),lf[281],lf[282]);}

/* k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in ... */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3572,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:929: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[271],C_fix(17),C_fix(2),lf[272],lf[273]);}

/* k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4806,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:404: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[905],C_fix(8),t3);}

/* k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:402: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[795],C_fix(8),((C_word*)t0)[3]);}

/* k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in ... */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:923: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[289],C_fix(17),C_fix(2),lf[290]);}

/* k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in ... */
static void C_ccall f_3557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:925: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[283],C_fix(17),C_fix(2),lf[284],lf[285]);}

/* k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in ... */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:924: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[286],C_fix(17),C_fix(1),lf[287],lf[288]);}

/* k2503 in k2532 in k2536 in k2457 in k2454 in k2451 in k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in ... */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2505,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[65],((C_word*)t0)[6],t4));}

/* a5329 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5330,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_eqp(*((C_word*)lf[35]+1),lf[34]):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
if(C_truep(*((C_word*)lf[36]+1))){
t10=t5;
t11=C_a_i_record4(&a,4,lf[37],lf[38],lf[922],t10);
t12=C_a_i_list2(&a,2,t4,t11);
t13=t1;
t14=t13;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_record4(&a,4,lf[37],lf[39],t9,t12));}
else{
t10=t5;
t11=C_a_i_record4(&a,4,lf[37],lf[38],lf[923],t10);
t12=C_a_i_list2(&a,2,t4,t11);
t13=t1;
t14=t13;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_record4(&a,4,lf[37],lf[39],t9,t12));}}
else{
t9=t5;
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5437,a[2]=t10,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5439,tmp=(C_word)a,a+=2,tmp);
t13=t5;
t14=C_u_i_cdr(t13);
/* c-platform.scm:295: remove */
t15=*((C_word*)lf[921]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t11,t12,t14);}}}

/* k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in ... */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3422,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:841: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[381],C_fix(16),C_fix(1),lf[382],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in ... */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:840: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[383],C_fix(16),C_fix(1),lf[384],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in ... */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:839: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[385],C_fix(16),C_fix(1),lf[386],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in ... */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3413,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:838: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[387],C_fix(16),C_fix(1),lf[388],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in ... */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:837: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[389],C_fix(16),C_fix(1),lf[390],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in ... */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:834: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[393],C_fix(15),lf[392],lf[34],lf[362],C_SCHEME_FALSE);}

/* k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3372 in k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in ... */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:835: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[391],C_fix(15),lf[392],lf[34],lf[365],C_SCHEME_FALSE);}

/* a4729 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in ... */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4730,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4733,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_i_length(t5);
switch(t7){
case C_fix(1):
t8=C_i_car(t5);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4783,a[2]=t1,a[3]=t6,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:868: qnode */
t11=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_fix(10));
case C_fix(2):
t8=C_i_car(t5);
t9=C_i_cadr(t5);
/* c-platform.scm:869: build */
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,f_4733(C_a_i(&a,28),t6,t8,t9));
default:
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k1596 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in ... */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:966: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[249],C_fix(17),C_fix(3),lf[250]);}

/* k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in ... */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:965: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[251],C_fix(17),C_fix(3),lf[252]);}

/* k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in ... */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:964: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[253],C_fix(17),C_fix(3),lf[254]);}

/* k3597 in k3594 in k3591 in k3588 in k3585 in k3582 in k3579 in k3576 in k3573 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in ... */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:967: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[246],C_fix(17),C_fix(2),lf[247],lf[248]);}

/* k5207 in k5285 in a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5209,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in ... */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:670: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[641],C_fix(2),C_fix(2),lf[642],C_SCHEME_TRUE);}

/* k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in ... */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:669: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[643],C_fix(2),C_fix(2),lf[644],C_SCHEME_TRUE);}

/* k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in ... */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:671: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[639],C_fix(2),C_fix(2),lf[640],C_SCHEME_TRUE);}

/* build in a4729 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in ... */
static C_word C_fcall f_4733(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_a_i_list2(&a,2,t1,t2);
t5=C_a_i_record4(&a,4,lf[37],lf[40],lf[358],t4);
t6=C_a_i_list2(&a,2,((C_word*)t0)[2],t5);
return(C_a_i_record4(&a,4,lf[37],lf[39],t3,t6));}

/* k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in ... */
static void C_ccall f_3509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:890: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[321],C_fix(2),C_fix(2),lf[322],C_SCHEME_FALSE);}

/* a5210 in k5285 in a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)tr4,(void*)f_5211,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5218,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t3;
t6=C_slot(t5,C_fix(1));
t7=C_eqp(lf[43],t6);
if(C_truep(t7)){
t8=t3;
t9=C_slot(t8,C_fix(2));
t10=C_i_car(t9);
t11=t4;
f_5218(t11,C_eqp(C_fix(2),t10));}
else{
t8=t4;
f_5218(t8,C_SCHEME_FALSE);}}

/* k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in ... */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:889: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[323],C_fix(2),C_fix(2),lf[324],C_SCHEME_FALSE);}

/* k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in ... */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:888: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[325],C_fix(2),C_fix(2),lf[326],C_SCHEME_FALSE);}

/* k5216 in a5210 in k5285 in a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_5218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5218,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:336: qnode */
t3=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(1));}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[38],lf[919],t2));}}

/* k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in ... */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:887: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[327],C_fix(2),C_fix(1),lf[328],C_SCHEME_FALSE);}

/* k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in ... */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:809: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[438],C_fix(13),C_SCHEME_FALSE,lf[439],C_SCHEME_TRUE);}

/* k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in ... */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:810: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[436],C_fix(13),C_SCHEME_FALSE,lf[437],C_SCHEME_TRUE);}

/* k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in ... */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:811: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[433],C_fix(13),lf[434],lf[435],C_SCHEME_TRUE);}

/* k4693 in a4652 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in ... */
static void C_ccall f_4695(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4695,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[37],lf[38],lf[299],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t4));}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[37],lf[38],lf[300],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t4));}}

/* k5232 in k5216 in a5210 in k5285 in a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[38],lf[918],t2));}

/* k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5485,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:245: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[438],C_fix(8),t3);}

/* k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5330,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:275: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[430],C_fix(8),t3);}

/* k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5167,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:313: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[433],C_fix(8),t3);}

/* k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in ... */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:801: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[440],C_fix(17),C_fix(2),lf[450]);}

/* k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in ... */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:800: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[442],C_fix(17),C_fix(2),lf[451]);}

/* k4380 in a4323 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in ... */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4357(t2,C_i_not(t1));}

/* k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in ... */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:803: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[448],C_fix(13),C_SCHEME_FALSE,lf[449],C_SCHEME_TRUE);}

/* k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in ... */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:804: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[446],C_fix(13),C_SCHEME_FALSE,lf[447],C_SCHEME_TRUE);}

/* k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in k3285 in ... */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:812: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[430],C_fix(13),lf[431],lf[432],C_SCHEME_TRUE);}

/* k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in k3288 in ... */
static void C_ccall f_3353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:814: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[427],C_fix(13),lf[428],lf[429],C_SCHEME_TRUE);}

/* k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in k3291 in ... */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:815: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[425],C_fix(13),C_fix(1),lf[426],C_SCHEME_TRUE);}

/* k3357 in k3354 in k3351 in k3348 in k3345 in k3342 in k3339 in k3336 in k3333 in k3330 in k3327 in k3324 in k3321 in k3318 in k3315 in k3312 in k3309 in k3306 in k3303 in k3300 in k3297 in k3294 in ... */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:816: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[423],C_fix(13),C_fix(4),lf[424],C_SCHEME_TRUE);}

/* k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in ... */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:675: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[631],C_fix(14),lf[34],C_fix(2),lf[633],lf[634]);}

/* k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in ... */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:673: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[635],C_fix(2),C_fix(1),lf[636],C_SCHEME_FALSE);}

/* k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in ... */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:672: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[637],C_fix(2),C_fix(2),lf[638],C_SCHEME_FALSE);}

/* k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in ... */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:676: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[631],C_fix(2),C_fix(2),lf[632],C_SCHEME_TRUE);}

/* k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5042,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:340: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[917],C_fix(8),t3);}

/* op1 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_1666(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1666,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1668,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp));}

/* k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1666,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5040,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:380: op1 */
f_1666(t4,lf[911],lf[912],lf[913]);}

/* f_1668 in op1 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1668,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=C_eqp(lf[34],*((C_word*)lf[35]+1));
if(C_truep(t10)){
if(C_truep(*((C_word*)lf[36]+1))){
t11=((C_word*)t0)[2];
t12=C_a_i_list1(&a,1,t11);
t13=t5;
t14=C_a_i_record4(&a,4,lf[37],lf[38],t12,t13);
t15=C_a_i_list2(&a,2,t4,t14);
t16=t1;
t17=t16;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_a_i_record4(&a,4,lf[37],lf[39],t9,t15));}
else{
t11=((C_word*)t0)[3];
t12=C_a_i_list1(&a,1,t11);
t13=t5;
t14=C_a_i_record4(&a,4,lf[37],lf[38],t12,t13);
t15=C_a_i_list2(&a,2,t4,t14);
t16=t1;
t17=t16;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_a_i_record4(&a,4,lf[37],lf[39],t9,t15));}}
else{
t11=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(4));
t12=t11;
t13=C_i_car(t5);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1738,a[2]=t14,a[3]=t12,a[4]=t4,a[5]=t1,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:379: qnode */
t16=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_fix(1));}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in ... */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:667: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[647],C_fix(2),C_fix(1),lf[648],C_SCHEME_TRUE);}

/* k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in k2910 in k2907 in ... */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:666: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[649],C_fix(2),C_fix(1),lf[650],C_SCHEME_TRUE);}

/* k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 in k2922 in k2919 in k2916 in k2913 in ... */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:668: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[645],C_fix(2),C_fix(1),lf[646],C_SCHEME_TRUE);}

/* k4897 in k4857 in k4820 in a4805 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_4899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4862(t2,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[3])));}

/* k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in ... */
static void C_ccall f_3518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:893: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[315],C_fix(2),C_fix(2),lf[316],C_SCHEME_FALSE);}

/* k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in ... */
static void C_ccall f_3515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:892: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[317],C_fix(2),C_fix(2),lf[318],C_SCHEME_FALSE);}

/* k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3447 in ... */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:891: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[319],C_fix(2),C_fix(2),lf[320],C_SCHEME_FALSE);}

/* k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_1649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:243: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[436],C_fix(19),C_fix(0),lf[928],lf[929],C_SCHEME_FALSE);}

/* k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:615: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[744],C_fix(2),C_fix(1),lf[745],C_SCHEME_FALSE);}

/* k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:614: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[746],C_fix(2),C_fix(1),lf[747],C_SCHEME_FALSE);}

/* k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void C_ccall f_2813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:613: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[748],C_fix(2),C_fix(1),lf[749],C_SCHEME_TRUE);}

/* k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void C_ccall f_2810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:612: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[750],C_fix(2),C_fix(1),lf[751],C_SCHEME_TRUE);}

/* k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in ... */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:852: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[360],C_fix(16),C_fix(1),lf[361],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in ... */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4730,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:854: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[359],C_fix(8),t3);}

/* k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:623: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[730],C_fix(2),C_fix(1),lf[732],C_SCHEME_TRUE);}

/* k3456 in k3453 in k3450 in k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in ... */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:872: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[356],C_fix(16),C_fix(2),lf[357],C_SCHEME_TRUE,C_fix(3));}

/* k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in ... */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:625: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[728],C_fix(2),C_fix(1),lf[729],C_SCHEME_TRUE);}

/* k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in ... */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:624: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[730],C_fix(2),C_fix(1),lf[731],C_SCHEME_FALSE);}

/* k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:622: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[730],C_fix(2),C_fix(1),lf[733],C_SCHEME_FALSE);}

/* k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in ... */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3443,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:848: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[367],C_fix(16),C_fix(1),lf[368],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in k3378 in ... */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:849: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[365],C_fix(16),C_fix(1),lf[366],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:620: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[734],C_fix(2),C_fix(1),lf[736],C_SCHEME_TRUE);}

/* k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in k3381 in ... */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:850: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[360],C_fix(16),C_fix(1),lf[364],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3447 in k3444 in k3441 in k3438 in k3435 in k3432 in k3429 in k3426 in k3423 in k3420 in k3417 in k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3396 in k3393 in k3390 in k3387 in k3384 in ... */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:851: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[362],C_fix(16),C_fix(1),lf[363],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:621: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[734],C_fix(2),C_fix(1),lf[735],C_SCHEME_FALSE);}

/* a4652 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in ... */
static void C_ccall f_4653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4653,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=t8;
t10=C_i_caddr(t5);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4695,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t12=C_slot(t10,C_fix(1));
t13=C_eqp(lf[43],t12);
if(C_truep(t13)){
t14=C_slot(t10,C_fix(2));
t15=C_i_car(t14);
/* c-platform.scm:915: immediate? */
t16=*((C_word*)lf[301]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t11,t15);}
else{
t14=t5;
t15=C_a_i_record4(&a,4,lf[37],lf[38],lf[300],t14);
t16=C_a_i_list2(&a,2,t4,t15);
t17=t1;
t18=t17;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_a_i_record4(&a,4,lf[37],lf[39],t9,t16));}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:619: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[734],C_fix(2),C_fix(1),lf[737],C_SCHEME_FALSE);}

/* k3858 in k3805 in k3790 in rewrite-make-vector in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in ... */
static void C_ccall f_3860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3860,2,t0,t1);}
t2=C_a_i_record4(&a,4,lf[37],lf[40],((C_word*)t0)[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[37],lf[65],((C_word*)t0)[7],t5));}

/* a3861 in k3805 in k3790 in rewrite-make-vector in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in ... */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3862,3,t0,t1,t2);}
/* c-platform.scm:1058: varnode */
t3=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in ... */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:630: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[718],C_fix(2),C_fix(3),lf[720],C_SCHEME_FALSE);}

/* k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in ... */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:631: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[718],C_fix(2),C_fix(3),lf[719],C_SCHEME_TRUE);}

/* k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in ... */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:629: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[721],C_fix(2),C_fix(2),lf[722],C_SCHEME_TRUE);}

/* k4626 in a4495 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in ... */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4576(t2,C_i_not(t1));}

/* k3805 in k3790 in rewrite-make-vector in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in k3723 in k3720 in k3717 in k3714 in ... */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3807,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_cadr(((C_word*)t0)[2]):C_a_i_record4(&a,4,lf[37],lf[74],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));
t6=t5;
t7=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t8=t7;
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=t9;
t11=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t12=C_a_i_list2(&a,2,lf[75],t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3860,a[2]=t13,a[3]=((C_word*)t0)[5],a[4]=t10,a[5]=t6,a[6]=((C_word*)t0)[6],a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1058: list-tabulate */
t16=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t14,((C_word*)t0)[4],t15);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4602 in k4574 in a4495 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in ... */
static void C_ccall f_4604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:950: qnode */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4598 in k4574 in a4495 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in ... */
static void C_ccall f_4600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4600,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_4526(t3,C_a_i_record4(&a,4,lf[37],lf[38],lf[267],t2));}

/* k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:611: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[752],C_fix(2),C_fix(1),lf[753],C_SCHEME_TRUE);}

/* k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void C_ccall f_2804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2804,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:610: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[754],C_fix(2),C_fix(1),lf[755],C_SCHEME_TRUE);}

/* k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:609: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[756],C_fix(2),C_fix(1),lf[757],C_SCHEME_TRUE);}

/* k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in ... */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:617: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[740],C_fix(2),C_fix(1),lf[741],C_SCHEME_TRUE);}

/* k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in ... */
static void C_ccall f_2828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:618: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[738],C_fix(2),C_fix(1),lf[739],C_SCHEME_TRUE);}

/* k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:616: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[742],C_fix(2),C_fix(1),lf[743],C_SCHEME_TRUE);}

/* k5097 in k5079 in a5041 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[37],lf[38],lf[914],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[5],t4));}

/* a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5485,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5489,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5636,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:254: remove */
t8=*((C_word*)lf[921]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t5);}

/* k5487 in a5484 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5489,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:259: qnode */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(0));}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_u_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[37],lf[39],t3,t5));}
else{
t3=C_eqp(*((C_word*)lf[35]+1),lf[34]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5567,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:267: fold-inner */
t8=*((C_word*)lf[920]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t1);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}}

/* k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in ... */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:586: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[799],C_fix(1),C_fix(2),lf[800]);}

/* k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in ... */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:585: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[801],C_fix(1),C_fix(2),lf[802]);}

/* k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in ... */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:587: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[797],C_fix(1),C_fix(2),lf[798]);}

/* k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in ... */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:920: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[296],C_fix(17),C_fix(2),lf[297],lf[298]);}

/* k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in ... */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:921: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[293],C_fix(17),C_fix(2),lf[294],lf[295]);}

/* k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in k2787 in ... */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:626: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[726],C_fix(2),C_fix(1),lf[727],C_SCHEME_TRUE);}

/* k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in ... */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:922: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[291],C_fix(17),C_fix(2),lf[292]);}

/* k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in k2790 in ... */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:627: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[724],C_fix(2),C_fix(1),lf[725],C_SCHEME_TRUE);}

/* k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in k2802 in k2799 in k2796 in k2793 in ... */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:628: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[721],C_fix(2),C_fix(2),lf[723],C_SCHEME_FALSE);}

/* k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in ... */
static void C_ccall f_2726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:582: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[803],C_fix(7),C_fix(1),lf[805],C_fix(1),C_SCHEME_FALSE);}

/* k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in ... */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:580: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[806],C_fix(2),C_fix(1),lf[807],C_SCHEME_TRUE);}

/* k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in ... */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:579: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[808],C_fix(2),C_fix(1),lf[809],C_SCHEME_TRUE);}

/* k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in ... */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:898: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[307],C_fix(16),C_fix(1),lf[308],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in ... */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3536,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:899: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[305],C_fix(16),C_fix(1),lf[306],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k4465 in k4439 in a4410 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in ... */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4467,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in ... */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:900: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[303],C_fix(16),C_fix(1),lf[304],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in ... */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4653,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:902: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[302],C_fix(8),t3);}

/* k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in ... */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:583: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[803],C_fix(2),C_fix(1),lf[804],C_SCHEME_TRUE);}

/* k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in ... */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:578: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[810],C_fix(2),C_fix(1),lf[811],C_SCHEME_TRUE);}

/* k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in ... */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:576: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[814],C_fix(2),C_fix(1),lf[815],C_SCHEME_TRUE);}

/* k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in ... */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:577: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[812],C_fix(2),C_fix(1),lf[813],C_SCHEME_TRUE);}

/* k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in k3456 in ... */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:894: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[313],C_fix(2),C_fix(2),lf[314],C_SCHEME_FALSE);}

/* k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in k3459 in ... */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:895: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[311],C_fix(2),C_fix(2),lf[312],C_SCHEME_FALSE);}

/* k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3504 in k3501 in k3498 in k3495 in k3492 in k3489 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in k3465 in k3462 in ... */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:897: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[309],C_fix(16),C_fix(1),lf[310],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in ... */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:574: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[806],C_fix(2),C_fix(1),lf[816],C_SCHEME_FALSE);}

/* k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in ... */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:573: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[817],C_fix(2),C_fix(1),lf[818],C_SCHEME_FALSE);}

/* k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in k2673 in k2670 in k2667 in k2664 in k2661 in k2658 in k2655 in k2652 in k2649 in k2646 in k2643 in k2640 in k2637 in ... */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:572: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[819],C_fix(2),C_fix(1),lf[820],C_SCHEME_FALSE);}

/* k5285 in a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5287(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5287,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_eqp(*((C_word*)lf[35]+1),lf[34]);
if(C_truep(t3)){
t4=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(2)))){
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5211,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:333: fold-inner */
t9=*((C_word*)lf[920]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t2);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a5288 in a5166 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5289(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_5289,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[43],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_eqp(C_fix(1),t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k4139 in a4130 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in ... */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4141,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=C_i_car(((C_word*)t0)[2]);
t5=t4;
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=t6;
t8=C_i_cadr(((C_word*)t0)[2]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4199,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:1205: varnode */
t11=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t1);}

/* a4495 in k3570 in k3567 in k3564 in k3561 in k3558 in k3555 in k3552 in k3549 in k3546 in k3543 in k3540 in k3537 in k3534 in k3531 in k3528 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in ... */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4496,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_cadr(t5);
t9=t8;
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4526,a[2]=t4,a[3]=t1,a[4]=t11,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t13=C_slot(t9,C_fix(1));
t14=C_eqp(lf[43],t13);
if(C_truep(t14)){
t15=C_eqp(*((C_word*)lf[35]+1),lf[34]);
if(C_truep(t15)){
t16=C_slot(t9,C_fix(2));
t17=C_i_car(t16);
t18=t17;
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4576,a[2]=t18,a[3]=t5,a[4]=t12,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t18))){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4628,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:946: big-fixnum? */
t21=*((C_word*)lf[269]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t20,t18);}
else{
t20=t19;
f_4576(t20,C_SCHEME_FALSE);}}
else{
t19=t12;
f_4526(t19,C_SCHEME_FALSE);}}
else{
t16=t12;
f_4526(t16,C_SCHEME_FALSE);}}
else{
t15=t12;
f_4526(t15,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:596: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[782],C_fix(2),C_fix(1),lf[783],C_SCHEME_TRUE);}

/* k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in ... */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:597: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[780],C_fix(2),C_fix(1),lf[781],C_SCHEME_TRUE);}

/* k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in ... */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:598: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[778],C_fix(2),C_fix(1),lf[779],C_SCHEME_TRUE);}

/* a5408 in k5435 in a5329 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5409,4,t0,t1,t2,t3);}
t4=(C_truep(*((C_word*)lf[36]+1))?lf[924]:lf[925]);
t5=C_a_i_list2(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record4(&a,4,lf[37],lf[38],t4,t5));}

/* k5405 in k5435 in a5329 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5407,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_record4(&a,4,lf[37],lf[39],((C_word*)t0)[4],t2));}

/* rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_2187(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2187,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2193,a[2]=t5,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:464: rewrite */
t7=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,C_fix(8),t6);}

/* k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in ... */
static void C_ccall f_2753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:593: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[788],C_fix(2),C_fix(1),lf[789],C_SCHEME_TRUE);}

/* k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2187,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:490: rewrite-c..r */
f_2187(t3,lf[898],lf[899],lf[900],C_fix(0));}

/* k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:594: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[786],C_fix(2),C_fix(1),lf[787],C_SCHEME_TRUE);}

/* k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:595: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[784],C_fix(2),C_fix(1),lf[785],C_SCHEME_TRUE);}

/* k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in ... */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:592: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[790],C_fix(2),C_fix(1),lf[791],C_SCHEME_TRUE);}

/* k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:460: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[901],C_fix(8),((C_word*)t0)[3]);}

/* k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in ... */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1172: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[86],C_fix(7),C_fix(2),lf[87],C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in ... */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in ... */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4131,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1190: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[82],C_fix(8),t3);}

/* k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in ... */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4206,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1174: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[85],C_fix(8),t3);}

/* k2116 in k1966 in rewrite-apply in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2118,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_a_i_record4(&a,4,lf[37],lf[49],lf[53],C_SCHEME_END_OF_LIST);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list3(&a,3,t3,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
f_2062(t6,C_a_i_record4(&a,4,lf[37],lf[39],t2,t5));}
else{
t2=((C_word*)t0)[4];
f_2062(t2,C_SCHEME_FALSE);}}

/* k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in ... */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:590: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[792],C_fix(2),C_fix(2),lf[794],C_SCHEME_FALSE);}

/* k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in ... */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:591: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[792],C_fix(2),C_fix(2),lf[793],C_SCHEME_TRUE);}

/* k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in k2688 in k2685 in k2682 in k2679 in k2676 in ... */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:588: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[795],C_fix(1),C_fix(2),lf[796]);}

/* a4130 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in ... */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4131,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4141,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1194: gensym */
t9=*((C_word*)lf[67]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in ... */
static void C_ccall f_4102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1165: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[98],C_fix(23),C_fix(1),lf[99],lf[100]);}

/* k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in ... */
static void C_ccall f_4105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1166: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[96],C_fix(23),C_fix(2),lf[97],C_fix(0),C_fix(0),C_SCHEME_FALSE);}

/* k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in ... */
static void C_ccall f_4108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1167: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[94],C_fix(23),C_fix(2),lf[95],C_fix(0),C_fix(0),C_SCHEME_FALSE);}

/* k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in ... */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:640: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[701],C_fix(2),C_fix(2),lf[702],C_SCHEME_TRUE);}

/* k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in ... */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:639: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[703],C_fix(2),C_fix(2),lf[704],C_SCHEME_TRUE);}

/* k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in ... */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1168: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[92],C_fix(23),C_fix(2),lf[93],C_fix(0));}

/* k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in ... */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1171: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[88],C_fix(7),C_fix(2),lf[89],C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in ... */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1169: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[90],C_fix(23),C_fix(2),lf[91],C_fix(0));}

/* k2895 in k2892 in k2889 in k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in ... */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:641: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[699],C_fix(2),C_fix(1),lf[700],C_SCHEME_TRUE);}

/* k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in ... */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:634: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[713],C_fix(2),C_fix(2),lf[714],C_SCHEME_TRUE);}

/* k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in ... */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:633: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[715],C_fix(2),C_fix(2),lf[716],C_SCHEME_TRUE);}

/* k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in k2811 in k2808 in k2805 in ... */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:632: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[715],C_fix(2),C_fix(2),lf[717],C_SCHEME_FALSE);}

/* k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in ... */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:699: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[588],C_fix(16),C_fix(2),lf[589],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* a2192 in rewrite-c..r in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2193,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2205,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:471: call-with-current-continuation */
t9=*((C_word*)lf[62]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in ... */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:698: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[590],C_fix(16),C_fix(2),lf[591],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in ... */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:700: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[586],C_fix(16),C_fix(2),lf[587],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in ... */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:701: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[584],C_fix(16),C_fix(2),lf[585],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k4439 in a4410 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in ... */
static void C_ccall f_4441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4441,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],lf[121]);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(t2);
/* c-platform.scm:1127: varnode */
t7=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4410 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in k3747 in k3744 in k3741 in k3738 in k3735 in k3732 in k3729 in k3726 in ... */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4411,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[44],t9);
if(C_truep(t10)){
t11=C_slot(t8,C_fix(2));
t12=C_i_car(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4441,a[2]=t13,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:51: ##sys#get */
t15=*((C_word*)lf[54]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,t13,lf[55]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in ... */
static void C_ccall f_3146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:734: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[533],C_fix(2),C_fix(1),lf[534],C_SCHEME_TRUE);}

/* k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in ... */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:733: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[535],C_fix(2),C_fix(1),lf[536],C_SCHEME_TRUE);}

/* k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in ... */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:694: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[595],C_fix(21),C_fix(0),lf[596],lf[597],lf[598],*((C_word*)lf[9]+1));}

/* k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in ... */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:731: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[537],C_fix(6),lf[538],lf[539],C_SCHEME_TRUE);}

/* k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in ... */
static void C_ccall f_3041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:693: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[599],C_fix(21),C_fix(-1),lf[600],lf[601],lf[602],*((C_word*)lf[9]+1));}

/* k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in ... */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:735: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[531],C_fix(2),C_fix(1),lf[532],C_SCHEME_TRUE);}

/* k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in ... */
static void C_ccall f_3047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:696: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[592],C_fix(22),C_fix(1),lf[593],C_SCHEME_TRUE,*((C_word*)lf[9]+1),lf[594]);}

/* k3195 in k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in ... */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:752: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[511],C_fix(2),C_fix(2),lf[512],C_SCHEME_TRUE);}

/* k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in ... */
static void C_ccall f_3191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:750: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[515],C_fix(2),C_fix(2),lf[516],C_SCHEME_TRUE);}

/* k3192 in k3189 in k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in ... */
static void C_ccall f_3194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:751: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[513],C_fix(2),C_fix(2),lf[514],C_SCHEME_TRUE);}

/* k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in ... */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:729: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[531],C_fix(6),lf[543],lf[544],C_SCHEME_FALSE);}

/* k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in ... */
static void C_ccall f_3131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:728: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[535],C_fix(6),lf[545],lf[546],C_SCHEME_FALSE);}

/* k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in ... */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:706: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[576],C_fix(16),C_fix(1),lf[577],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in ... */
static void C_ccall f_3074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:707: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[574],C_fix(16),C_fix(1),lf[575],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in ... */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:708: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[572],C_fix(16),C_fix(1),lf[573],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in ... */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:730: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[540],C_fix(6),lf[541],lf[542],C_SCHEME_TRUE);}

/* k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_3125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:725: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[547],C_fix(2),C_fix(1),lf[549],C_SCHEME_TRUE);}

/* k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in ... */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:702: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[582],C_fix(16),C_fix(2),lf[583],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3122,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:724: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[547],C_fix(5),lf[550],C_fix(0),lf[392]);}

/* k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in ... */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:703: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[580],C_fix(16),C_fix(1),lf[581],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in ... */
static void C_ccall f_3128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:726: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[547],C_fix(2),C_fix(1),lf[548],C_SCHEME_FALSE);}

/* k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in ... */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:705: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[578],C_fix(16),C_fix(1),lf[579],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in ... */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:721: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[552],C_fix(2),C_fix(1),lf[554],C_SCHEME_TRUE);}

/* k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in ... */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:722: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[552],C_fix(2),C_fix(1),lf[553],C_SCHEME_FALSE);}

/* k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in ... */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:720: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[552],C_fix(5),lf[555],C_fix(0),lf[392]);}

/* k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in ... */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:681: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[619],C_fix(2),C_fix(2),lf[620],C_SCHEME_TRUE);}

/* k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in ... */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:680: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[621],C_fix(17),C_fix(2),lf[622],lf[623]);}

/* k3117 in k3114 in k3111 in k3108 in k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:723: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[547],C_fix(5),lf[551],C_fix(0),lf[34]);}

/* k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in ... */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:682: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[617],C_fix(2),C_fix(2),lf[618],C_SCHEME_TRUE);}

/* k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in ... */
static void C_ccall f_3182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:747: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[497],C_fix(2),C_fix(1),lf[519],C_SCHEME_TRUE);}

/* k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in ... */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:748: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[495],C_fix(2),C_fix(2),lf[518],C_SCHEME_TRUE);}

/* k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in ... */
static void C_ccall f_3008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:679: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[624],C_fix(17),C_fix(2),lf[625],lf[626]);}

/* k3186 in k3183 in k3180 in k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in ... */
static void C_ccall f_3188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3191,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:749: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[493],C_fix(2),C_fix(1),lf[517],C_SCHEME_TRUE);}

/* k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in k2937 in ... */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:677: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[627],C_fix(14),lf[34],C_fix(2),lf[629],lf[630]);}

/* k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in ... */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:678: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[627],C_fix(2),C_fix(2),lf[628],C_SCHEME_TRUE);}

/* k2451 in k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in ... */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2453,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2456,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:525: gensym */
t4=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[72]);}

/* k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in ... */
static void C_ccall f_3674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3674,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:994: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[195],C_fix(2),C_fix(2),lf[196],C_SCHEME_FALSE);}

/* k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in ... */
static void C_ccall f_3173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:744: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[503],C_fix(2),C_fix(1),lf[522],C_SCHEME_TRUE);}

/* k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in ... */
static void C_ccall f_3671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3674,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:993: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[197],C_fix(2),C_fix(2),lf[198],C_SCHEME_FALSE);}

/* k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in k3108 in k3105 in ... */
static void C_ccall f_3170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:743: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[505],C_fix(2),C_fix(1),lf[523],C_SCHEME_TRUE);}

/* k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in k3111 in ... */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:745: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[501],C_fix(2),C_fix(1),lf[521],C_SCHEME_TRUE);}

/* k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in ... */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:996: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[193],C_fix(16),C_fix(2),lf[194],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in ... */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:690: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[607],C_fix(16),C_fix(1),lf[608],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in ... */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:689: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[607],C_fix(14),lf[34],C_fix(1),lf[609],lf[610]);}

/* k3177 in k3174 in k3171 in k3168 in k3165 in k3162 in k3159 in k3156 in k3153 in k3150 in k3147 in k3144 in k3141 in k3138 in k3135 in k3132 in k3129 in k3126 in k3123 in k3120 in k3117 in k3114 in ... */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3182,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:746: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[499],C_fix(2),C_fix(1),lf[520],C_SCHEME_TRUE);}

/* k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in ... */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:692: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[603],C_fix(21),C_fix(0),lf[604],lf[605],lf[606],*((C_word*)lf[9]+1));}

/* k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in ... */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:991: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[201],C_fix(2),C_fix(2),lf[202],C_SCHEME_FALSE);}

/* k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in k3600 in k3597 in ... */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:989: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[203],C_fix(2),C_fix(1),lf[204],C_SCHEME_FALSE);}

/* k2454 in k2451 in k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in ... */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2456,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_slot(((C_word*)t0)[7],C_fix(2));
/* c-platform.scm:526: debugging */
t5=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[70],lf[71],t4);}

/* k2457 in k2454 in k2451 in k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in ... */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* c-platform.scm:531: gensym */
t5=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[68]);}

/* k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in ... */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:686: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[614],C_fix(17),C_fix(2),lf[615],lf[616]);}

/* k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in ... */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:685: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[611],C_fix(4),lf[302],C_fix(1));}

/* k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in k3612 in k3609 in k3606 in k3603 in ... */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:992: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[199],C_fix(2),C_fix(2),lf[200],C_SCHEME_FALSE);}

/* k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in k2961 in k2958 in k2955 in ... */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:684: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[614],C_fix(4),lf[302],C_fix(0));}

/* k3027 in k3024 in k3021 in k3018 in k3015 in k3012 in k3009 in k3006 in k3003 in k3000 in k2997 in k2994 in k2991 in k2988 in k2985 in k2982 in k2979 in k2976 in k2973 in k2970 in k2967 in k2964 in ... */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:687: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[611],C_fix(17),C_fix(2),lf[612],lf[613]);}

/* k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in ... */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1004: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[179],C_fix(2),C_fix(3),lf[180],C_SCHEME_FALSE);}

/* k2424 in rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in ... */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2426,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[64],t3);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(2));
t6=C_i_caddr(t5);
if(C_truep(C_i_listp(t6))){
t7=C_i_length(t6);
t8=C_eqp(C_fix(2),t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:524: gensym */
t10=*((C_word*)lf[67]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in ... */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1003: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[181],C_fix(2),C_fix(3),lf[182],C_SCHEME_FALSE);}

/* k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in ... */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:637: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[707],C_fix(2),C_fix(2),lf[708],C_SCHEME_TRUE);}

/* k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in ... */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:636: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[709],C_fix(2),C_fix(2),lf[710],C_SCHEME_TRUE);}

/* k3696 in k3693 in k3690 in k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in ... */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1005: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[177],C_fix(2),C_fix(3),lf[178],C_SCHEME_FALSE);}

/* k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in k2817 in k2814 in ... */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:635: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[711],C_fix(2),C_fix(2),lf[712],C_SCHEME_TRUE);}

/* k5435 in a5329 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_eqp(*((C_word*)lf[35]+1),lf[34]);
if(C_truep(t3)){
t4=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(2)))){
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5409,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:306: fold-inner */
t9=*((C_word*)lf[920]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t2);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a5438 in a5329 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_5439,3,t0,t1,t2);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[43],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_i_zerop(t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in ... */
static void C_ccall f_3686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1000: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[185],C_fix(22),C_fix(2),lf[186],C_SCHEME_FALSE,*((C_word*)lf[9]+1),lf[187]);}

/* k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in ... */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:999: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[188],C_fix(22),C_fix(2),lf[189],C_SCHEME_FALSE,*((C_word*)lf[9]+1),lf[190]);}

/* k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in k3621 in k3618 in k3615 in ... */
static void C_ccall f_3680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:997: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[191],C_fix(16),C_fix(2),lf[192],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3687 in k3684 in k3681 in k3678 in k3675 in k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in k3648 in k3645 in k3642 in k3639 in k3636 in k3633 in k3630 in k3627 in k3624 in ... */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1002: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[183],C_fix(2),C_fix(3),lf[184],C_SCHEME_FALSE);}

/* k2886 in k2883 in k2880 in k2877 in k2874 in k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2853 in k2850 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in ... */
static void C_ccall f_2888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:638: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[705],C_fix(2),C_fix(2),lf[706],C_SCHEME_TRUE);}

/* k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in k3225 in ... */
static void C_ccall f_3290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:788: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[461],C_fix(18),C_fix(1));}

/* a4205 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in ... */
static void C_ccall f_4206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4206,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(3),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_i_car(t5);
t10=C_i_cadr(t5);
t11=C_a_i_list2(&a,2,t9,t10);
t12=C_a_i_record4(&a,4,lf[37],lf[40],lf[83],t11);
t13=C_i_caddr(t5);
t14=C_a_i_list2(&a,2,t12,t13);
t15=C_a_i_record4(&a,4,lf[37],lf[40],lf[84],t14);
t16=C_a_i_list2(&a,2,t4,t15);
t17=t1;
t18=t17;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_a_i_record4(&a,4,lf[37],lf[39],t8,t16));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_platform_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_platform_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("platform_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(14491)){
C_save(t1);
C_rereclaim2(14491*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,935);
lf[0]=C_h_intern(&lf[0],36,"\010compilerdefault-optimization-passes");
lf[1]=C_h_intern(&lf[1],29,"\010compilerdefault-declarations");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014always-bound\376\003\000\000\002\376\001\000\000\022\003sysstandard-input\376\003\000\000\002\376\001\000\000\023\003sysstandard-ou"
"tput\376\003\000\000\002\376\001\000\000\022\003sysstandard-error\376\003\000\000\002\376\001\000\000\023\003sysundefined-value\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022b"
"ound-to-procedure\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\011\003sysprint\376\003\000\000\002"
"\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\020\003sysdynamic-wind\376\003\000\000\002\376\001\000\000\024\003syscall"
"-with-values\376\003\000\000\002\376\001\000\000\017\003sysstart-timer\376\003\000\000\002\376\001\000\000\016\003sysstop-timer\376\003\000\000\002\376\001\000\000\007\003sysgcd\376\003"
"\000\000\002\376\001\000\000\007\003syslcm\376\003\000\000\002\376\001\000\000\020\003sysmake-promise\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\010\003syss"
"lot\376\003\000\000\002\376\001\000\000\023\003sysallocate-vector\376\003\000\000\002\376\001\000\000\020\003syslist->vector\376\003\000\000\002\376\001\000\000\015\003sysblock-re"
"f\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\012\003sysappen"
"d\376\003\000\000\002\376\001\000\000\012\003sysvector\376\003\000\000\002\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fi"
"xnum-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-flonum-argument\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\001\000\000\021\003"
"syspeek-c-string\376\003\000\000\002\376\001\000\000\031\003syspeek-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003syspeek-and-free-c"
"-string\376\003\000\000\002\376\001\000\000\042\003syspeek-and-free-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-a"
"rgument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000\000\034\003sysforeign-pointer-argume"
"nt\376\003\000\000\002\376\001\000\000\034\003sysforeign-integer-argument\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continua"
"tion\376\377\016\376\377\016");
lf[3]=C_h_intern(&lf[3],39,"\010compilerdefault-debugging-declarations");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010debu"
"gger\376\377\016\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\024\003syspus"
"h-debug-frame\376\003\000\000\002\376\001\000\000\023\003syspop-debug-frame\376\003\000\000\002\376\001\000\000\025\003syscheck-debug-entry\376\003\000\000\002\376\001"
"\000\000\032\003syscheck-debug-assignment\376\003\000\000\002\376\001\000\000\032\003sysregister-debug-lambdas\376\003\000\000\002\376\001\000\000\034\003sysr"
"egister-debug-variables\376\003\000\000\002\376\001\000\000\016\003sysdebug-call\376\377\016\376\377\016\376\377\016\376\377\016");
lf[5]=C_h_intern(&lf[5],39,"\010compilerdefault-profiling-declarations");
lf[6]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010profiler\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\021\003sysprofile-entry\376\003\000\000\002\376\001\000\000\020\003sysprofile-exit\376\377\016\376\377\016\376"
"\377\016");
lf[7]=C_h_intern(&lf[7],30,"\010compilerunits-used-by-default");
lf[8]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007library\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\016chicken-syntax\376\377\016");
lf[9]=C_h_intern(&lf[9],25,"\010compilerwords-per-flonum");
lf[10]=C_h_intern(&lf[10],24,"\010compilerparameter-limit");
lf[11]=C_h_intern(&lf[11],21,"small-parameter-limit");
lf[12]=C_h_intern(&lf[12],27,"\010compilerunlikely-variables");
lf[13]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007unquote\376\003\000\000\002\376\001\000\000\020unquote-splicing\376\377\016");
lf[14]=C_h_intern(&lf[14],27,"\010compilereq-inline-operator");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[16]=C_h_intern(&lf[16],34,"\010compilermembership-test-operators");
lf[17]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_u_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\012C_i_member\376B\000\000\012C_i_equalp\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memv\376B\000\000\010C_i_eqvp\376\377\016");
lf[18]=C_h_intern(&lf[18],32,"\010compilermembership-unfold-limit");
lf[19]=C_h_intern(&lf[19],28,"\010compilertarget-include-file");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\011chicken.h");
lf[21]=C_h_intern(&lf[21],31,"\010compilervalid-compiler-options");
lf[22]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005-help\376\003\000\000\002\376\001\000\000\001h\376\003\000\000\002\376\001\000\000\004help\376\003\000\000\002\376\001\000\000\007version\376\003\000\000\002\376\001\000\000\007verbose\376\003\000\000\002\376"
"\001\000\000\014explicit-use\376\003\000\000\002\376\001\000\000\010no-trace\376\003\000\000\002\376\001\000\000\013no-warnings\376\003\000\000\002\376\001\000\000\006unsafe\376\003\000\000\002\376\001\000\000"
"\005block\376\003\000\000\002\376\001\000\000\014check-syntax\376\003\000\000\002\376\001\000\000\011to-stdout\376\003\000\000\002\376\001\000\000\025no-usual-integrations\376\003"
"\000\000\002\376\001\000\000\020case-insensitive\376\003\000\000\002\376\001\000\000\016no-lambda-info\376\003\000\000\002\376\001\000\000\007profile\376\003\000\000\002\376\001\000\000\006inlin"
"e\376\003\000\000\002\376\001\000\000\024keep-shadowed-macros\376\003\000\000\002\376\001\000\000\021ignore-repository\376\003\000\000\002\376\001\000\000\021fixnum-arith"
"metic\376\003\000\000\002\376\001\000\000\022disable-interrupts\376\003\000\000\002\376\001\000\000\026optimize-leaf-routines\376\003\000\000\002\376\001\000\000\016compi"
"le-syntax\376\003\000\000\002\376\001\000\000\014tag-pointers\376\003\000\000\002\376\001\000\000\022accumulate-profile\376\003\000\000\002\376\001\000\000\035disable-sta"
"ck-overflow-checks\376\003\000\000\002\376\001\000\000\003raw\376\003\000\000\002\376\001\000\000\012specialize\376\003\000\000\002\376\001\000\000\036emit-external-proto"
"types-first\376\003\000\000\002\376\001\000\000\007release\376\003\000\000\002\376\001\000\000\005local\376\003\000\000\002\376\001\000\000\015inline-global\376\003\000\000\002\376\001\000\000\014anal"
"yze-only\376\003\000\000\002\376\001\000\000\007dynamic\376\003\000\000\002\376\001\000\000\012scrutinize\376\003\000\000\002\376\001\000\000\016no-argc-checks\376\003\000\000\002\376\001\000\000\023n"
"o-procedure-checks\376\003\000\000\002\376\001\000\000)no-procedure-checks-for-toplevel-bindings\376\003\000\000\002\376\001\000\000\006m"
"odule\376\003\000\000\002\376\001\000\000\017no-bound-checks\376\003\000\000\002\376\001\000\000&no-procedure-checks-for-usual-bindings\376\003"
"\000\000\002\376\001\000\000\022no-compiler-syntax\376\003\000\000\002\376\001\000\000\027no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\020no-symbol-e"
"scape\376\003\000\000\002\376\001\000\000\013r5rs-syntax\376\003\000\000\002\376\001\000\000\031emit-all-import-libraries\376\003\000\000\002\376\001\000\000\014strict-ty"
"pes\376\003\000\000\002\376\001\000\000\012clustering\376\003\000\000\002\376\001\000\000\004lfa2\376\003\000\000\002\376\001\000\000\012setup-mode\376\003\000\000\002\376\001\000\000\026no-module-reg"
"istration\376\377\016");
lf[23]=C_h_intern(&lf[23],45,"\010compilervalid-compiler-options-with-argument");
lf[24]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005debug\376\003\000\000\002\376\001\000\000\013output-file\376\003\000\000\002\376\001\000\000\014include-path\376\003\000\000\002\376\001\000\000\011heap-size\376\003\000"
"\000\002\376\001\000\000\012stack-size\376\003\000\000\002\376\001\000\000\004unit\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\015keyword-style\376\003\000\000\002\376\001\000\000\021re"
"quire-extension\376\003\000\000\002\376\001\000\000\014inline-limit\376\003\000\000\002\376\001\000\000\014profile-name\376\003\000\000\002\376\001\000\000\024parenthesis"
"-synonyms\376\003\000\000\002\376\001\000\000\007prelude\376\003\000\000\002\376\001\000\000\010postlude\376\003\000\000\002\376\001\000\000\010prologue\376\003\000\000\002\376\001\000\000\010epilogue"
"\376\003\000\000\002\376\001\000\000\007nursery\376\003\000\000\002\376\001\000\000\006extend\376\003\000\000\002\376\001\000\000\007feature\376\003\000\000\002\376\001\000\000\012no-feature\376\003\000\000\002\376\001\000\000\005"
"types\376\003\000\000\002\376\001\000\000\023emit-import-library\376\003\000\000\002\376\001\000\000\020emit-inline-file\376\003\000\000\002\376\001\000\000\020static-ext"
"ension\376\003\000\000\002\376\001\000\000\023consult-inline-file\376\003\000\000\002\376\001\000\000\016emit-type-file\376\003\000\000\002\376\001\000\000\012ffi-define\376"
"\003\000\000\002\376\001\000\000\020ffi-include-path\376\377\016");
lf[25]=C_h_intern(&lf[25],34,"\010compilerdefault-standard-bindings");
lf[26]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-with-current-contin"
"uation\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003"
"\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr"
"\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002"
"\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaar\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000"
"\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadadr\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000"
"\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdadar\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000"
"\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cddddr\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376"
"\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000"
"\000\005zero\077\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001+\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001"
"\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\022cu"
"rrent-input-port\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007di"
"splay\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\003map\376\003\000\000"
"\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integer->char\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003"
"\000\000\002\376\001\000\000\015vector-length\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string"
"-set!\376\003\000\000\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003"
"\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002\376\001\000\000\003lcm\376\003\000\000\002\376"
"\001\000\000\007reverse\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010c"
"omplex\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001"
"\000\000\005even\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\010inexact\077"
"\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376"
"\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000\005round\376\003\000\000\002\376\001\000\000\016exact-"
">inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000"
"\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asin\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001"
"\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376"
"\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000"
"\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespace\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020cha"
"r-lower-case\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downc"
"ase\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376\003\000\000\002\376"
"\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376\003\000\000\002\376"
"\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\015string-appe"
"nd\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\014vector-"
">list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000"
"\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000\000\002\376\001\000\000\013make-string"
"\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000"
"\000\024call-with-input-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376"
"\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\006ve"
"ctor\376\003\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004as"
"sq\376\003\000\000\002\376\001\000\000\004assv\376\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\003ab"
"s\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\014string-"
">list\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\377\016");
lf[27]=C_h_intern(&lf[27],34,"\010compilerdefault-extended-bindings");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\013bitwise-and\376\003\000\000\002\376\001\000\000\012alist-cons\376\003\000\000\002\376\001\000\000\005xcons\376\003\000\000\002\376\001\000\000\013bitwise-ior\376\003\000"
"\000\002\376\001\000\000\013bitwise-xor\376\003\000\000\002\376\001\000\000\013bitwise-not\376\003\000\000\002\376\001\000\000\004add1\376\003\000\000\002\376\001\000\000\004sub1\376\003\000\000\002\376\001\000\000\003fx+"
"\376\003\000\000\002\376\001\000\000\003fx-\376\003\000\000\002\376\001\000\000\003fx\052\376\003\000\000\002\376\001\000\000\003fx/\376\003\000\000\002\376\001\000\000\004fx+\077\376\003\000\000\002\376\001\000\000\004fx-\077\376\003\000\000\002\376\001\000\000\004fx\052"
"\077\376\003\000\000\002\376\001\000\000\004fx/\077\376\003\000\000\002\376\001\000\000\005fxmod\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\004fp/\077\376\003\000\000\002\376\001\000\000\003fx=\376\003\000\000\002\376\001\000\000\003fx"
">\376\003\000\000\002\376\001\000\000\003fx<\376\003\000\000\002\376\001\000\000\004fx>=\376\003\000\000\002\376\001\000\000\004fx<=\376\003\000\000\002\376\001\000\000\007fixnum\077\376\003\000\000\002\376\001\000\000\005fxneg\376\003\000\000\002\376"
"\001\000\000\005fxmax\376\003\000\000\002\376\001\000\000\005fxmin\376\003\000\000\002\376\001\000\000\010identity\376\003\000\000\002\376\001\000\000\003fp+\376\003\000\000\002\376\001\000\000\003fp-\376\003\000\000\002\376\001\000\000\003fp"
"\052\376\003\000\000\002\376\001\000\000\003fp/\376\003\000\000\002\376\001\000\000\005fpmin\376\003\000\000\002\376\001\000\000\005fpmax\376\003\000\000\002\376\001\000\000\005fpneg\376\003\000\000\002\376\001\000\000\003fp>\376\003\000\000\002\376\001\000"
"\000\003fp<\376\003\000\000\002\376\001\000\000\003fp=\376\003\000\000\002\376\001\000\000\004fp>=\376\003\000\000\002\376\001\000\000\004fp<=\376\003\000\000\002\376\001\000\000\005fxand\376\003\000\000\002\376\001\000\000\005fxnot\376\003\000\000"
"\002\376\001\000\000\005fxior\376\003\000\000\002\376\001\000\000\005fxxor\376\003\000\000\002\376\001\000\000\005fxshr\376\003\000\000\002\376\001\000\000\005fxshl\376\003\000\000\002\376\001\000\000\010bit-set\077\376\003\000\000\002\376"
"\001\000\000\006fxodd\077\376\003\000\000\002\376\001\000\000\007fxeven\077\376\003\000\000\002\376\001\000\000\007fpfloor\376\003\000\000\002\376\001\000\000\011fpceiling\376\003\000\000\002\376\001\000\000\012fptrunc"
"ate\376\003\000\000\002\376\001\000\000\007fpround\376\003\000\000\002\376\001\000\000\005fpsin\376\003\000\000\002\376\001\000\000\005fpcos\376\003\000\000\002\376\001\000\000\005fptan\376\003\000\000\002\376\001\000\000\006fpasi"
"n\376\003\000\000\002\376\001\000\000\006fpacos\376\003\000\000\002\376\001\000\000\006fpatan\376\003\000\000\002\376\001\000\000\007fpatan2\376\003\000\000\002\376\001\000\000\005fpexp\376\003\000\000\002\376\001\000\000\006fpexp"
"t\376\003\000\000\002\376\001\000\000\005fplog\376\003\000\000\002\376\001\000\000\006fpsqrt\376\003\000\000\002\376\001\000\000\005fpabs\376\003\000\000\002\376\001\000\000\012fpinteger\077\376\003\000\000\002\376\001\000\000\020ari"
"thmetic-shift\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\014flush-output\376\003\000\000\002\376\001\000\000\017thread-specific\376\003\000\000\002\376"
"\001\000\000\024thread-specific-set!\376\003\000\000\002\376\001\000\000\011not-pair\077\376\003\000\000\002\376\001\000\000\005atom\077\376\003\000\000\002\376\001\000\000\012null-list\077\376\003"
"\000\000\002\376\001\000\000\005print\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\014proper-list\077\376\003\000\000\002\376\001\000\000\007call"
"/cc\376\003\000\000\002\376\001\000\000\011blob-size\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8vector->blob/sh"
"ared\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026s16vector->blob/shared\376\003\000\000\002\376\001\000\000\026u3"
"2vector->blob/shared\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->blob/sh"
"ared\376\003\000\000\002\376\001\000\000\026f64vector->blob/shared\376\003\000\000\002\376\001\000\000\025blob->u8vector/shared\376\003\000\000\002\376\001\000\000\025blo"
"b->s8vector/shared\376\003\000\000\002\376\001\000\000\026blob->u16vector/shared\376\003\000\000\002\376\001\000\000\026blob->s16vector/shar"
"ed\376\003\000\000\002\376\001\000\000\026blob->u32vector/shared\376\003\000\000\002\376\001\000\000\026blob->s32vector/shared\376\003\000\000\002\376\001\000\000\026blob"
"->f32vector/shared\376\003\000\000\002\376\001\000\000\026blob->f64vector/shared\376\003\000\000\002\376\001\000\000\011block-ref\376\003\000\000\002\376\001\000\000\012b"
"lock-set!\376\003\000\000\002\376\001\000\000\017number-of-slots\376\003\000\000\002\376\001\000\000\017substring-index\376\003\000\000\002\376\001\000\000\022substring-i"
"ndex-ci\376\003\000\000\002\376\001\000\000\016hash-table-ref\376\003\000\000\002\376\001\000\000\004any\077\376\003\000\000\002\376\001\000\000\013read-string\376\003\000\000\002\376\001\000\000\013subs"
"tring=\077\376\003\000\000\002\376\001\000\000\016substring-ci=\077\376\003\000\000\002\376\001\000\000\005first\376\003\000\000\002\376\001\000\000\006second\376\003\000\000\002\376\001\000\000\005third\376\003\000"
"\000\002\376\001\000\000\006fourth\376\003\000\000\002\376\001\000\000\024make-record-instance\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001"
"\000\000\017u8vector-length\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\020s"
"16vector-length\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002\376\001\000\000\020f32"
"vector-length\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\006setter\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000"
"\000\002\376\001\000\000\014s8vector-ref\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\015u32ve"
"ctor-ref\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\003\000"
"\000\002\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\016f64vector-set!\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\015s8"
"vector-set!\376\003\000\000\002\376\001\000\000\016u16vector-set!\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\016u32vector-s"
"et!\376\003\000\000\002\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\001\000\000\014locative-ref\376\003\000\000\002\376\001\000\000\015locative-set!\376\003\000\000\002\376\001\000"
"\000\020locative->object\376\003\000\000\002\376\001\000\000\011locative\077\376\003\000\000\002\376\001\000\000\017pointer->object\376\003\000\000\002\376\001\000\000\007flonum\077\376"
"\003\000\000\002\376\001\000\000\007finite\077\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\020pointer->address\376\003\000\000\002\376\001\000\000\010po"
"inter+\376\003\000\000\002\376\001\000\000\011pointer=\077\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000\000\016pointer-s8-ref\376\003\000\000\002\376\001"
"\000\000\017pointer-u16-ref\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\003\000\000\002\376\001\000\000\017po"
"inter-s32-ref\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\003\000\000\002\376\001\000\000\017pointer"
"-u8-set!\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\020pointer-u16-set!\376\003\000\000\002\376\001\000\000\020pointer-s16"
"-set!\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\003\000\000\002\376\001\000\000\020pointer-s32-set!\376\003\000\000\002\376\001\000\000\020pointer-f32-s"
"et!\376\003\000\000\002\376\001\000\000\020pointer-f64-set!\376\003\000\000\002\376\001\000\000\022current-error-port\376\003\000\000\002\376\001\000\000\016current-threa"
"d\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\013get"
"-keyword\376\377\016");
lf[29]=C_h_intern(&lf[29],26,"\010compilerinternal-bindings");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\016\003sysbloc"
"k-set!\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003s"
"ysbyte\376\003\000\000\002\376\001\000\000\013\003syssetbyte\376\003\000\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure"
"\077\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\023\003syscheck-structure\376\003\000\000\002\376\001\000\000\017\003syscheck-exact\376"
"\003\000\000\002\376\001\000\000\020\003syscheck-number\376\003\000\000\002\376\001\000\000\016\003syscheck-list\376\003\000\000\002\376\001\000\000\016\003syscheck-pair\376\003\000\000\002\376\001"
"\000\000\020\003syscheck-string\376\003\000\000\002\376\001\000\000\020\003syscheck-symbol\376\003\000\000\002\376\001\000\000\021\003syscheck-boolean\376\003\000\000\002\376\001\000"
"\000\022\003syscheck-locative\376\003\000\000\002\376\001\000\000\016\003syscheck-port\376\003\000\000\002\376\001\000\000\024\003syscheck-input-port\376\003\000\000\002\376"
"\001\000\000\025\003syscheck-output-port\376\003\000\000\002\376\001\000\000\023\003syscheck-open-port\376\003\000\000\002\376\001\000\000\016\003syscheck-char\376\003"
"\000\000\002\376\001\000\000\020\003syscheck-vector\376\003\000\000\002\376\001\000\000\025\003syscheck-byte-vector\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001"
"\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\024\003syscall-with-values\376\003\000\000\002\376\001\000\000\020\003sysfits-in-int\077\376\003\000\000\002\376\001\000\000\031\003sy"
"sfits-in-unsigned-int\077\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003\000\000\002\376\001\000\000\011\003sysfudge\376\003"
"\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\021\003sysdirect-return\376\003\000\000\002\376\001\000\000\022\003syscontext-switch\376\003\000"
"\000\002\376\001\000\000\022\003sysmake-structure\376\003\000\000\002\376\001\000\000\011\003sysapply\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\026"
"\003syscontinuation-graft\376\003\000\000\002\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000"
"\000\012\003syssetter\376\003\000\000\002\376\001\000\000\007\003syscar\376\003\000\000\002\376\001\000\000\007\003syscdr\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000\002\376\001\000\000\007\003syse"
"q\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000\017\003sysget-ke"
"yword\376\003\000\000\002\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fixnum-argument\376\003\000"
"\000\002\376\001\000\000\033\003sysforeign-flonum-argument\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-argument\376\003\000\000\002\376\001\000\000#"
"\003sysforeign-struct-wrapper-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000"
"\000\034\003sysforeign-pointer-argument\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\034\003sysforeign-integer-ar"
"gument\376\003\000\000\002\376\001\000\000%\003sysforeign-unsigned-integer-argument\376\003\000\000\002\376\001\000\000\017\003syspeek-fixnum\376\003"
"\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001\000\000\020\003syspoke-integer\376\003\000\000\002\376\001\000\000\016\003syspermanent\077\376\003\000\000\002\376\001\000\000\012"
"\003sysvalues\376\003\000\000\002\376\001\000\000\017\003syspoke-double\376\003\000\000\002\376\001\000\000\021\003sysintern-symbol\376\003\000\000\002\376\001\000\000\017\003sysmake"
"-symbol\376\003\000\000\002\376\001\000\000\021\003sysnull-pointer\077\376\003\000\000\002\376\001\000\000\015\003syspeek-byte\376\003\000\000\002\376\001\000\000\020\003sysfile-exis"
"ts\077\376\377\016");
lf[31]=C_h_intern(&lf[31],30,"\010compilernon-foldable-bindings");
lf[32]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\013make-vecto"
"r\376\003\000\000\002\376\001\000\000\013make-string\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\022current-"
"input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\012write-char\376\003"
"\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-wit"
"h-current-continuation\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\012write-char\376\003"
"\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\013char"
"-ready\077\376\003\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000"
"\013string-set!\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000"
"\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376"
"\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\024call-with-input-port\376\003\000\000\002\376\001\000\000\025call-with-output-po"
"rt\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslo"
"t\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\011\003sysfudge\376\003\000\000\002\376\001\000\000\014flush-"
"output\376\003\000\000\002\376\001\000\000\005print\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8ve"
"ctor->blob/shared\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026s16vector->blob/share"
"d\376\003\000\000\002\376\001\000\000\026u32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f64ve"
"ctor->blob/shared\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000\000\013read-string\376\003\000\000\002\376\001\000\000\014"
"read-string!\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\020pointer->address\376\003\000\000\002"
"\376\001\000\000\022\003sysmake-structure\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000\000\011\003sysap"
"ply\376\003\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000\000\002\376\001\000\000\013\003sys"
"setbyte\376\003\000\000\002\376\001\000\000\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\013get-keyword\376\003\000\000\002\376\001\000\000\017u8vector-length\376\003"
"\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\020s16vector-length\376\003\000\000\002"
"\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001"
"\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\006sette"
"r\376\003\000\000\002\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\016f64vector-set!\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000\000\002\376\001\000\000"
"\014s8vector-ref\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\015u32vector-r"
"ef\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\001\000\000"
"\016u16vector-set!\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\016u32vector-set!\376\003\000\000\002\376\001\000\000\016s32vect"
"or-set!\376\003\000\000\002\376\001\000\000\021\003sysintern-symbol\376\003\000\000\002\376\001\000\000\017\003sysmake-symbol\376\003\000\000\002\376\001\000\000\024make-record"
"-instance\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376\003\000\000\002\376\001\000\000\022current-error-port\376\003\000\000"
"\002\376\001\000\000\016current-thread\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\001\000\000\016p"
"ointer-s8-ref\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\003\000\000\002\376\001\000\000\020pointer"
"-u16-set!\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\001\000\000\017pointer-u3"
"2-ref\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\003\000\000\002\376\001\000\000\020pointer-s32-se"
"t!\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\003"
"\000\000\002\376\001\000\000\020pointer-f64-set!\376\377\016");
lf[33]=C_h_intern(&lf[33],26,"\010compilerfoldable-bindings");
lf[34]=C_h_intern(&lf[34],6,"fixnum");
lf[35]=C_h_intern(&lf[35],11,"number-type");
lf[36]=C_h_intern(&lf[36],6,"unsafe");
lf[37]=C_h_intern(&lf[37],4,"node");
lf[38]=C_h_intern(&lf[38],11,"\004coreinline");
lf[39]=C_h_intern(&lf[39],9,"\004corecall");
lf[40]=C_h_intern(&lf[40],20,"\004coreinline_allocate");
lf[41]=C_h_intern(&lf[41],14,"\010compilerqnode");
lf[42]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016");
lf[43]=C_h_intern(&lf[43],5,"quote");
lf[44]=C_h_intern(&lf[44],13,"\004corevariable");
lf[45]=C_h_intern(&lf[45],5,"cons\052");
lf[46]=C_h_intern(&lf[46],3,"map");
lf[47]=C_h_intern(&lf[47],6,"append");
lf[48]=C_h_intern(&lf[48],7,"butlast");
lf[49]=C_h_intern(&lf[49],9,"\004coreproc");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\007C_apply\376\003\000\000\002\376\377\006\001\376\377\016");
lf[51]=C_h_intern(&lf[51],6,"values");
lf[52]=C_h_intern(&lf[52],10,"\003sysvalues");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_apply_values\376\003\000\000\002\376\377\006\001\376\377\016");
lf[54]=C_h_intern(&lf[54],7,"\003sysget");
lf[55]=C_h_intern(&lf[55],18,"\010compilerintrinsic");
lf[56]=C_h_intern(&lf[56],4,"last");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\006C_slot\376\377\016");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_i_vector_ref\376\377\016");
lf[59]=C_h_intern(&lf[59],6,"vector");
lf[60]=C_h_intern(&lf[60],12,"\010compilerget");
lf[61]=C_h_intern(&lf[61],14,"rest-parameter");
lf[62]=C_h_intern(&lf[62],30,"call-with-current-continuation");
lf[63]=C_h_intern(&lf[63],16,"\010compilerrewrite");
lf[64]=C_h_intern(&lf[64],11,"\004corelambda");
lf[65]=C_h_intern(&lf[65],3,"let");
lf[66]=C_h_intern(&lf[66],16,"\010compilervarnode");
lf[67]=C_h_intern(&lf[67],6,"gensym");
lf[68]=C_h_intern(&lf[68],2,"f_");
lf[69]=C_h_intern(&lf[69],18,"\010compilerdebugging");
lf[70]=C_h_intern(&lf[70],1,"o");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000)removing single-valued `call-with-values\047");
lf[72]=C_h_intern(&lf[72],1,"r");
lf[73]=C_h_intern(&lf[73],5,"value");
lf[74]=C_h_intern(&lf[74],14,"\004coreundefined");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[76]=C_h_intern(&lf[76],13,"list-tabulate");
lf[77]=C_h_intern(&lf[77],16,"inline-transient");
lf[78]=C_h_intern(&lf[78],8,"assigned");
lf[79]=C_h_intern(&lf[79],10,"references");
lf[80]=C_h_intern(&lf[80],30,"\010compilerdecompose-lambda-list");
lf[81]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[82]=C_h_intern(&lf[82],5,"xcons");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[84]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[85]=C_h_intern(&lf[85],10,"alist-cons");
lf[86]=C_h_intern(&lf[86],15,"\003sysget-keyword");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_get_keyword");
lf[88]=C_h_intern(&lf[88],11,"get-keyword");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_get_keyword");
lf[90]=C_h_intern(&lf[90],18,"substring-index-ci");
lf[91]=C_h_intern(&lf[91],22,"\003syssubstring-index-ci");
lf[92]=C_h_intern(&lf[92],15,"substring-index");
lf[93]=C_h_intern(&lf[93],19,"\003syssubstring-index");
lf[94]=C_h_intern(&lf[94],14,"substring-ci=\077");
lf[95]=C_h_intern(&lf[95],18,"\003syssubstring-ci=\077");
lf[96]=C_h_intern(&lf[96],11,"substring=\077");
lf[97]=C_h_intern(&lf[97],15,"\003syssubstring=\077");
lf[98]=C_h_intern(&lf[98],11,"read-string");
lf[99]=C_h_intern(&lf[99],20,"\003sysread-string/port");
lf[100]=C_h_intern(&lf[100],18,"\003sysstandard-input");
lf[101]=C_h_intern(&lf[101],10,"write-char");
lf[102]=C_h_intern(&lf[102],19,"\003syswrite-char/port");
lf[103]=C_h_intern(&lf[103],19,"\003sysstandard-output");
lf[104]=C_h_intern(&lf[104],9,"read-char");
lf[105]=C_h_intern(&lf[105],18,"\003sysread-char/port");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_bit_setp");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_bit_setp");
lf[108]=C_h_intern(&lf[108],8,"bit-set\077");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\006C_anyp\376\377\016");
lf[110]=C_h_intern(&lf[110],6,"global");
lf[111]=C_h_intern(&lf[111],4,"any\077");
lf[112]=C_h_intern(&lf[112],18,"current-error-port");
lf[113]=C_h_intern(&lf[113],18,"\003sysstandard-error");
lf[114]=C_h_intern(&lf[114],19,"current-output-port");
lf[115]=C_h_intern(&lf[115],18,"current-input-port");
lf[116]=C_h_intern(&lf[116],14,"current-thread");
lf[117]=C_h_intern(&lf[117],18,"\003syscurrent-thread");
lf[118]=C_h_intern(&lf[118],8,"\003sysvoid");
lf[119]=C_h_intern(&lf[119],19,"\003sysundefined-value");
lf[120]=C_h_intern(&lf[120],4,"void");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003car\376\001\000\000\010set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003cdr\376\001\000\000\010set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016has"
"h-table-ref\376\001\000\000\017hash-table-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011block-ref\376\001\000\000\012block-set!\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\014locative-ref\376\001\000\000\015locative-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\001\000\000\015u8vector-set!"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\001\000\000\016u1"
"6vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u32vec"
"tor-ref\376\001\000\000\016u32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\015f32vector-ref\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\001\000\000\016f64vect"
"or-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-s"
"8-ref\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\001\000\000\020pointer-u16-set!\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\001\000"
"\000\020pointer-u32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\001\000\000\020pointer-s32-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\017pointer-f32-ref\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\001\000\000\020point"
"er-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012string-ref\376\001\000\000\013string-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012vector-ref\376\001\000"
"\000\013vector-set!\376\377\016");
lf[122]=C_h_intern(&lf[122],10,"\003syssetter");
lf[123]=C_h_intern(&lf[123],7,"call/cc");
lf[124]=C_h_intern(&lf[124],20,"thread-specific-set!");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_setslot");
lf[126]=C_h_intern(&lf[126],15,"thread-specific");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[128]=C_h_intern(&lf[128],15,"\003sysmake-vector");
lf[129]=C_h_intern(&lf[129],11,"make-vector");
lf[130]=C_h_intern(&lf[130],22,"f64vector->blob/shared");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[132]=C_h_intern(&lf[132],22,"f32vector->blob/shared");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[134]=C_h_intern(&lf[134],22,"s32vector->blob/shared");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[136]=C_h_intern(&lf[136],22,"u32vector->blob/shared");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[138]=C_h_intern(&lf[138],22,"s16vector->blob/shared");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[140]=C_h_intern(&lf[140],22,"u16vector->blob/shared");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[142]=C_h_intern(&lf[142],21,"s8vector->blob/shared");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[144]=C_h_intern(&lf[144],21,"u8vector->blob/shared");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[146]=C_h_intern(&lf[146],10,"null-list\077");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_null_list_p");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[149]=C_h_intern(&lf[149],5,"atom\077");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_not_pair_p");
lf[151]=C_h_intern(&lf[151],9,"not-pair\077");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_not_pair_p");
lf[153]=C_h_intern(&lf[153],16,"f64vector-length");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_64vector_length");
lf[155]=C_h_intern(&lf[155],16,"f32vector-length");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[157]=C_h_intern(&lf[157],16,"s32vector-length");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[159]=C_h_intern(&lf[159],16,"u32vector-length");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[161]=C_h_intern(&lf[161],16,"s16vector-length");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_16vector_length");
lf[163]=C_h_intern(&lf[163],16,"u16vector-length");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_16vector_length");
lf[165]=C_h_intern(&lf[165],15,"s8vector-length");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_8vector_length");
lf[167]=C_h_intern(&lf[167],15,"u8vector-length");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_8vector_length");
lf[169]=C_h_intern(&lf[169],14,"f64vector-set!");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_f64vector_set");
lf[171]=C_h_intern(&lf[171],14,"f32vector-set!");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_f32vector_set");
lf[173]=C_h_intern(&lf[173],14,"s32vector-set!");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s32vector_set");
lf[175]=C_h_intern(&lf[175],14,"u32vector-set!");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u32vector_set");
lf[177]=C_h_intern(&lf[177],14,"s16vector-set!");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s16vector_set");
lf[179]=C_h_intern(&lf[179],14,"u16vector-set!");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u16vector_set");
lf[181]=C_h_intern(&lf[181],13,"s8vector-set!");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_s8vector_set");
lf[183]=C_h_intern(&lf[183],13,"u8vector-set!");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_u8vector_set");
lf[185]=C_h_intern(&lf[185],13,"s32vector-ref");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_s32vector_ref");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s32vector_ref");
lf[188]=C_h_intern(&lf[188],13,"u32vector-ref");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_u32vector_ref");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u32vector_ref");
lf[191]=C_h_intern(&lf[191],13,"f64vector-ref");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_f64vector_ref");
lf[193]=C_h_intern(&lf[193],13,"f32vector-ref");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_f32vector_ref");
lf[195]=C_h_intern(&lf[195],13,"s16vector-ref");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s16vector_ref");
lf[197]=C_h_intern(&lf[197],13,"u16vector-ref");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u16vector_ref");
lf[199]=C_h_intern(&lf[199],12,"s8vector-ref");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_s8vector_ref");
lf[201]=C_h_intern(&lf[201],12,"u8vector-ref");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_u8vector_ref");
lf[203]=C_h_intern(&lf[203],9,"blob-size");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[205]=C_h_intern(&lf[205],17,"\003sysdirect-return");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\017C_direct_return");
lf[207]=C_h_intern(&lf[207],37,"\003sysforeign-unsigned-integer-argument");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000&C_i_foreign_unsigned_integer_argumentp");
lf[209]=C_h_intern(&lf[209],28,"\003sysforeign-integer-argument");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\035C_i_foreign_integer_argumentp");
lf[211]=C_h_intern(&lf[211],28,"\003sysforeign-pointer-argument");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\035C_i_foreign_pointer_argumentp");
lf[213]=C_h_intern(&lf[213],27,"\003sysforeign-string-argument");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_string_argumentp");
lf[215]=C_h_intern(&lf[215],35,"\003sysforeign-struct-wrapper-argument");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000$C_i_foreign_struct_wrapper_argumentp");
lf[217]=C_h_intern(&lf[217],26,"\003sysforeign-block-argument");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\033C_i_foreign_block_argumentp");
lf[219]=C_h_intern(&lf[219],27,"\003sysforeign-flonum-argument");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_flonum_argumentp");
lf[221]=C_h_intern(&lf[221],25,"\003sysforeign-char-argument");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\032C_i_foreign_char_argumentp");
lf[223]=C_h_intern(&lf[223],27,"\003sysforeign-fixnum-argument");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_fixnum_argumentp");
lf[225]=C_h_intern(&lf[225],13,"locative-set!");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_locative_set");
lf[227]=C_h_intern(&lf[227],16,"locative->object");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\026C_i_locative_to_object");
lf[229]=C_h_intern(&lf[229],14,"\003sysimmediate\077");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\006C_immp");
lf[231]=C_h_intern(&lf[231],17,"\003sysnull-pointer\077");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[234]=C_h_intern(&lf[234],14,"\003syspermanent\077");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\014C_permanentp");
lf[236]=C_h_intern(&lf[236],27,"\003sysflonum-in-fixnum-range\077");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\032C_flonum_in_fixnum_range_p");
lf[238]=C_h_intern(&lf[238],25,"\003sysfits-in-unsigned-int\077");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fits_in_unsigned_int_p");
lf[240]=C_h_intern(&lf[240],16,"\003sysfits-in-int\077");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fits_in_int_p");
lf[242]=C_h_intern(&lf[242],9,"\003sysfudge");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\007C_fudge");
lf[244]=C_h_intern(&lf[244],11,"string-ci=\077");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_string_ci_equal_p");
lf[246]=C_h_intern(&lf[246],8,"string=\077");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_string_equal_p");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_string_equal_p");
lf[249]=C_h_intern(&lf[249],15,"\003syspoke-double");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\015C_poke_double");
lf[251]=C_h_intern(&lf[251],16,"\003syspoke-integer");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\016C_poke_integer");
lf[253]=C_h_intern(&lf[253],12,"\003syssetislot");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_set_i_slot");
lf[255]=C_h_intern(&lf[255],15,"pointer->object");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\023C_pointer_to_object");
lf[257]=C_h_intern(&lf[257],13,"\003syspeek-byte");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\013C_peek_byte");
lf[259]=C_h_intern(&lf[259],15,"\003syspeek-fixnum");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\015C_peek_fixnum");
lf[261]=C_h_intern(&lf[261],11,"\003syssetbyte");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\011C_setbyte");
lf[263]=C_h_intern(&lf[263],8,"\003sysbyte");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\011C_subbyte");
lf[265]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\033C_i_fixnum_arithmetic_shift\376\377\016");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\026C_a_i_arithmetic_shift");
lf[267]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[268]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016");
lf[269]=C_h_intern(&lf[269],20,"\010compilerbig-fixnum\077");
lf[270]=C_h_intern(&lf[270],16,"arithmetic-shift");
lf[271]=C_h_intern(&lf[271],5,"fxmod");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_modulo");
lf[274]=C_h_intern(&lf[274],3,"fx/");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_divide");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_divide");
lf[277]=C_h_intern(&lf[277],5,"fxior");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\013C_fixnum_or");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_fixnum_or");
lf[280]=C_h_intern(&lf[280],5,"fxand");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_and");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_fixnum_and");
lf[283]=C_h_intern(&lf[283],5,"fxxor");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[286]=C_h_intern(&lf[286],5,"fxneg");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_negate");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_negate");
lf[289]=C_h_intern(&lf[289],5,"fxshr");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\024C_fixnum_shift_right");
lf[291]=C_h_intern(&lf[291],5,"fxshl");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fixnum_shift_left");
lf[293]=C_h_intern(&lf[293],3,"fx-");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fixnum_difference");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_fixnum_difference");
lf[296]=C_h_intern(&lf[296],3,"fx+");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fixnum_plus");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_fixnum_plus");
lf[299]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_i_set_i_slot\376\377\016");
lf[300]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\013C_i_setslot\376\377\016");
lf[301]=C_h_intern(&lf[301],19,"\010compilerimmediate\077");
lf[302]=C_h_intern(&lf[302],11,"\003syssetslot");
lf[303]=C_h_intern(&lf[303],15,"pointer-f64-ref");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_f64_ref");
lf[305]=C_h_intern(&lf[305],15,"pointer-f32-ref");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_f32_ref");
lf[307]=C_h_intern(&lf[307],15,"pointer-s32-ref");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_s32_ref");
lf[309]=C_h_intern(&lf[309],15,"pointer-u32-ref");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_u32_ref");
lf[311]=C_h_intern(&lf[311],16,"pointer-f64-set!");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_f64_set");
lf[313]=C_h_intern(&lf[313],16,"pointer-f32-set!");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_f32_set");
lf[315]=C_h_intern(&lf[315],16,"pointer-s32-set!");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s32_set");
lf[317]=C_h_intern(&lf[317],16,"pointer-u32-set!");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u32_set");
lf[319]=C_h_intern(&lf[319],16,"pointer-s16-set!");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s16_set");
lf[321]=C_h_intern(&lf[321],16,"pointer-u16-set!");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u16_set");
lf[323]=C_h_intern(&lf[323],15,"pointer-s8-set!");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_s8_set");
lf[325]=C_h_intern(&lf[325],15,"pointer-u8-set!");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_u8_set");
lf[327]=C_h_intern(&lf[327],15,"pointer-s16-ref");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s16_ref");
lf[329]=C_h_intern(&lf[329],15,"pointer-u16-ref");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u16_ref");
lf[331]=C_h_intern(&lf[331],14,"pointer-s8-ref");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_s8_ref");
lf[333]=C_h_intern(&lf[333],14,"pointer-u8-ref");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_u8_ref");
lf[335]=C_h_intern(&lf[335],8,"pointer+");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_u_i_pointer_inc");
lf[337]=C_h_intern(&lf[337],16,"pointer->address");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\030C_a_i_pointer_to_address");
lf[339]=C_h_intern(&lf[339],16,"address->pointer");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\030C_a_i_address_to_pointer");
lf[341]=C_h_intern(&lf[341],6,"string");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_string");
lf[343]=C_h_intern(&lf[343],18,"\003sysmake-structure");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_record");
lf[345]=C_h_intern(&lf[345],10,"\003sysvector");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[348]=C_h_intern(&lf[348],8,"\003syslist");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[350]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[351]=C_h_intern(&lf[351],4,"list");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[353]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[354]=C_h_intern(&lf[354],8,"\003syscons");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_cons");
lf[356]=C_h_intern(&lf[356],4,"cons");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_cons");
lf[358]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\026C_a_i_string_to_number\376\003\000\000\002\376\377\001\000\000\000\004\376\377\016");
lf[359]=C_h_intern(&lf[359],14,"string->number");
lf[360]=C_h_intern(&lf[360],7,"fpround");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_floor");
lf[362]=C_h_intern(&lf[362],9,"fpceiling");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\024C_a_i_flonum_ceiling");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_round");
lf[365]=C_h_intern(&lf[365],10,"fptruncate");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_i_flonum_truncate");
lf[367]=C_h_intern(&lf[367],5,"fpabs");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_abs");
lf[369]=C_h_intern(&lf[369],6,"fpsqrt");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_sqrt");
lf[371]=C_h_intern(&lf[371],5,"fplog");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_log");
lf[373]=C_h_intern(&lf[373],6,"fpexpt");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_expt");
lf[375]=C_h_intern(&lf[375],5,"fpexp");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_exp");
lf[377]=C_h_intern(&lf[377],7,"fpatan2");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_atan2");
lf[379]=C_h_intern(&lf[379],6,"fpatan");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_atan");
lf[381]=C_h_intern(&lf[381],6,"fpacos");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_acos");
lf[383]=C_h_intern(&lf[383],6,"fpasin");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_asin");
lf[385]=C_h_intern(&lf[385],5,"fptan");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_tan");
lf[387]=C_h_intern(&lf[387],5,"fpcos");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_cos");
lf[389]=C_h_intern(&lf[389],5,"fpsin");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_sin");
lf[391]=C_h_intern(&lf[391],8,"truncate");
lf[392]=C_h_intern(&lf[392],6,"flonum");
lf[393]=C_h_intern(&lf[393],7,"ceiling");
lf[394]=C_h_intern(&lf[394],5,"floor");
lf[395]=C_h_intern(&lf[395],7,"fpfloor");
lf[396]=C_h_intern(&lf[396],7,"fxeven\077");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[398]=C_h_intern(&lf[398],6,"fxodd\077");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[400]=C_h_intern(&lf[400],4,"odd\077");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_oddp");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_oddp");
lf[403]=C_h_intern(&lf[403],5,"even\077");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_evenp");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_evenp");
lf[406]=C_h_intern(&lf[406],9,"remainder");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[413]=C_h_intern(&lf[413],15,"\003sysmake-symbol");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\015C_make_symbol");
lf[415]=C_h_intern(&lf[415],17,"\003sysintern-symbol");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\022C_string_to_symbol");
lf[417]=C_h_intern(&lf[417],18,"\003syscontext-switch");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\020C_context_switch");
lf[419]=C_h_intern(&lf[419],14,"return-to-host");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\020C_return_to_host");
lf[421]=C_h_intern(&lf[421],23,"\003sysensure-heap-reserve");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ensure_heap_reserve");
lf[423]=C_h_intern(&lf[423],19,"\003sysallocate-vector");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\021C_allocate_vector");
lf[425]=C_h_intern(&lf[425],34,"\003syscall-with-current-continuation");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\011C_call_cc");
lf[427]=C_h_intern(&lf[427],14,"number->string");
lf[428]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\377\001\000\000\000\002");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\022C_number_to_string");
lf[430]=C_h_intern(&lf[430],1,"-");
lf[431]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\007C_minus");
lf[433]=C_h_intern(&lf[433],1,"/");
lf[434]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\010C_divide");
lf[436]=C_h_intern(&lf[436],1,"+");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\006C_plus");
lf[438]=C_h_intern(&lf[438],1,"\052");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\007C_times");
lf[440]=C_h_intern(&lf[440],2,"<=");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\021C_less_or_equal_p");
lf[442]=C_h_intern(&lf[442],2,">=");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\024C_greater_or_equal_p");
lf[444]=C_h_intern(&lf[444],1,"<");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\007C_lessp");
lf[446]=C_h_intern(&lf[446],1,">");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\012C_greaterp");
lf[448]=C_h_intern(&lf[448],1,"=");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\011C_nequalp");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_less_or_equalp");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_greater_or_equalp");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_lessp");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_greaterp");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_nequalp");
lf[455]=C_h_intern(&lf[455],14,"exact->inexact");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\026C_a_i_exact_to_inexact");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_divide");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_minus");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_plus");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_times");
lf[461]=C_h_intern(&lf[461],3,"lcm");
lf[462]=C_h_intern(&lf[462],3,"gcd");
lf[463]=C_h_intern(&lf[463],8,"identity");
lf[464]=C_h_intern(&lf[464],7,"\003syslcm");
lf[465]=C_h_intern(&lf[465],7,"\003sysgcd");
lf[466]=C_h_intern(&lf[466],11,"vector-set!");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_vector_set");
lf[468]=C_h_intern(&lf[468],12,"list->string");
lf[469]=C_h_intern(&lf[469],16,"\003syslist->string");
lf[470]=C_h_intern(&lf[470],12,"string->list");
lf[471]=C_h_intern(&lf[471],16,"\003sysstring->list");
lf[472]=C_h_intern(&lf[472],13,"string-append");
lf[473]=C_h_intern(&lf[473],17,"\003sysstring-append");
lf[474]=C_h_intern(&lf[474],9,"substring");
lf[475]=C_h_intern(&lf[475],13,"\003syssubstring");
lf[476]=C_h_intern(&lf[476],20,"make-record-instance");
lf[477]=C_h_intern(&lf[477],14,"\003sysblock-set!");
lf[478]=C_h_intern(&lf[478],10,"block-set!");
lf[479]=C_h_intern(&lf[479],7,"\003sysmap");
lf[480]=C_h_intern(&lf[480],8,"for-each");
lf[481]=C_h_intern(&lf[481],12,"\003sysfor-each");
lf[482]=C_h_intern(&lf[482],6,"setter");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fixnum_less_or_equal_p");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\030C_flonum_less_or_equal_p");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000\033C_fixnum_greater_or_equal_p");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000\033C_flonum_greater_or_equal_p");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_equalp");
lf[493]=C_h_intern(&lf[493],14,"\003syscheck-char");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_char_2");
lf[495]=C_h_intern(&lf[495],19,"\003syscheck-structure");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_check_structure_2");
lf[497]=C_h_intern(&lf[497],16,"\003syscheck-vector");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_vector_2");
lf[499]=C_h_intern(&lf[499],21,"\003syscheck-byte-vector");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\026C_i_check_bytevector_2");
lf[501]=C_h_intern(&lf[501],16,"\003syscheck-string");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_string_2");
lf[503]=C_h_intern(&lf[503],16,"\003syscheck-symbol");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_symbol_2");
lf[505]=C_h_intern(&lf[505],18,"\003syscheck-locative");
lf[506]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_check_locative_2");
lf[507]=C_h_intern(&lf[507],17,"\003syscheck-boolean");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\023C_i_check_boolean_2");
lf[509]=C_h_intern(&lf[509],14,"\003syscheck-pair");
lf[510]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_pair_2");
lf[511]=C_h_intern(&lf[511],14,"\003syscheck-list");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_list_2");
lf[513]=C_h_intern(&lf[513],16,"\003syscheck-number");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_number_2");
lf[515]=C_h_intern(&lf[515],15,"\003syscheck-exact");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_check_exact_2");
lf[517]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_char");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\023C_i_check_structure");
lf[519]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_vector");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_check_bytevector");
lf[521]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_string");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_symbol");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_locative");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_check_boolean");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_pair");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_list");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_number");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_check_exact");
lf[529]=C_h_intern(&lf[529],14,"inexact->exact");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_inexact_to_exact");
lf[531]=C_h_intern(&lf[531],13,"string-length");
lf[532]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_string_length");
lf[533]=C_h_intern(&lf[533],17,"\003sysvector-length");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_vector_length");
lf[535]=C_h_intern(&lf[535],13,"vector-length");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_vector_length");
lf[537]=C_h_intern(&lf[537],13,"integer->char");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\020C_make_character");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000\007C_unfix");
lf[540]=C_h_intern(&lf[540],13,"char->integer");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\020C_character_code");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\015C_header_size");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[546]=C_decode_literal(C_heaptop,"\376B\000\000\015C_header_size");
lf[547]=C_h_intern(&lf[547],9,"negative\077");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_i_negativep");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_negativep");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[552]=C_h_intern(&lf[552],9,"positive\077");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_i_positivep");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_positivep");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[557]=C_h_intern(&lf[557],5,"zero\077");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_zerop");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_zerop");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[561]=C_h_intern(&lf[561],4,"atan");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_atan2");
lf[563]=C_h_intern(&lf[563],4,"sqrt");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_sqrt");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_atan");
lf[566]=C_h_intern(&lf[566],4,"acos");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_acos");
lf[568]=C_h_intern(&lf[568],4,"asin");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_asin");
lf[570]=C_h_intern(&lf[570],3,"log");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_log");
lf[572]=C_h_intern(&lf[572],3,"tan");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_tan");
lf[574]=C_h_intern(&lf[574],3,"cos");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_cos");
lf[576]=C_h_intern(&lf[576],3,"sin");
lf[577]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_sin");
lf[578]=C_h_intern(&lf[578],3,"exp");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_exp");
lf[580]=C_h_intern(&lf[580],5,"fpneg");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_i_flonum_negate");
lf[582]=C_h_intern(&lf[582],4,"fp/\077");
lf[583]=C_decode_literal(C_heaptop,"\376B\000\000\035C_a_i_flonum_quotient_checked");
lf[584]=C_h_intern(&lf[584],3,"fp/");
lf[585]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_i_flonum_quotient");
lf[586]=C_h_intern(&lf[586],3,"fp\052");
lf[587]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_times");
lf[588]=C_h_intern(&lf[588],3,"fp-");
lf[589]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_i_flonum_difference");
lf[590]=C_h_intern(&lf[590],3,"fp+");
lf[591]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_plus");
lf[592]=C_h_intern(&lf[592],11,"bitwise-not");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_not");
lf[594]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_not");
lf[595]=C_h_intern(&lf[595],11,"bitwise-ior");
lf[596]=C_decode_literal(C_heaptop,"\376B\000\000\013C_fixnum_or");
lf[597]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_fixnum_or");
lf[598]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_ior");
lf[599]=C_h_intern(&lf[599],11,"bitwise-and");
lf[600]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_and");
lf[601]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_fixnum_and");
lf[602]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_and");
lf[603]=C_h_intern(&lf[603],11,"bitwise-xor");
lf[604]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[605]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[606]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_xor");
lf[607]=C_h_intern(&lf[607],3,"abs");
lf[608]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_abs");
lf[609]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_abs");
lf[610]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_abs");
lf[611]=C_h_intern(&lf[611],8,"set-cdr!");
lf[612]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_set_cdr");
lf[613]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_i_set_cdr");
lf[614]=C_h_intern(&lf[614],8,"set-car!");
lf[615]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_set_car");
lf[616]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_i_set_car");
lf[617]=C_h_intern(&lf[617],6,"member");
lf[618]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_member");
lf[619]=C_h_intern(&lf[619],5,"assoc");
lf[620]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_assoc");
lf[621]=C_h_intern(&lf[621],4,"memq");
lf[622]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memq");
lf[623]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_memq");
lf[624]=C_h_intern(&lf[624],4,"assq");
lf[625]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assq");
lf[626]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_assq");
lf[627]=C_h_intern(&lf[627],4,"memv");
lf[628]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memv");
lf[629]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memq");
lf[630]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_memq");
lf[631]=C_h_intern(&lf[631],4,"assv");
lf[632]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assv");
lf[633]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assq");
lf[634]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_assq");
lf[635]=C_h_intern(&lf[635],15,"number-of-slots");
lf[636]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[637]=C_h_intern(&lf[637],9,"block-ref");
lf[638]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[639]=C_h_intern(&lf[639],15,"\003sysbytevector\077");
lf[640]=C_decode_literal(C_heaptop,"\376B\000\000\015C_bytevectorp");
lf[641]=C_h_intern(&lf[641],14,"\003sysstructure\077");
lf[642]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_structurep");
lf[643]=C_h_intern(&lf[643],9,"list-tail");
lf[644]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_list_tail");
lf[645]=C_h_intern(&lf[645],13,"char-downcase");
lf[646]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_downcase");
lf[647]=C_h_intern(&lf[647],11,"char-upcase");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_i_char_upcase");
lf[649]=C_h_intern(&lf[649],16,"char-lower-case\077");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_lower_casep");
lf[651]=C_h_intern(&lf[651],16,"char-upper-case\077");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_upper_casep");
lf[653]=C_h_intern(&lf[653],16,"char-whitespace\077");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_whitespacep");
lf[655]=C_h_intern(&lf[655],16,"char-alphabetic\077");
lf[656]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_alphabeticp");
lf[657]=C_h_intern(&lf[657],13,"char-numeric\077");
lf[658]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_numericp");
lf[659]=C_h_intern(&lf[659],5,"fpmin");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_flonum_min");
lf[661]=C_h_intern(&lf[661],5,"fpmax");
lf[662]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_flonum_max");
lf[663]=C_h_intern(&lf[663],5,"fxmin");
lf[664]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnum_min");
lf[665]=C_h_intern(&lf[665],5,"fxmax");
lf[666]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnum_max");
lf[667]=C_h_intern(&lf[667],4,"fp<=");
lf[668]=C_decode_literal(C_heaptop,"\376B\000\000\030C_flonum_less_or_equal_p");
lf[669]=C_h_intern(&lf[669],4,"fp>=");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\033C_flonum_greater_or_equal_p");
lf[671]=C_h_intern(&lf[671],3,"fp<");
lf[672]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[673]=C_h_intern(&lf[673],3,"fp>");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[675]=C_h_intern(&lf[675],3,"fp=");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\017C_flonum_equalp");
lf[677]=C_h_intern(&lf[677],4,"fx<=");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fixnum_less_or_equal_p");
lf[679]=C_h_intern(&lf[679],4,"fx>=");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\033C_fixnum_greater_or_equal_p");
lf[681]=C_h_intern(&lf[681],3,"fx<");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[683]=C_h_intern(&lf[683],3,"fx>");
lf[684]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[685]=C_h_intern(&lf[685],3,"fx=");
lf[686]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[687]=C_h_intern(&lf[687],4,"fx/\077");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_o_fixnum_quotient");
lf[689]=C_h_intern(&lf[689],4,"fx\052\077");
lf[690]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_o_fixnum_times");
lf[691]=C_h_intern(&lf[691],4,"fx-\077");
lf[692]=C_decode_literal(C_heaptop,"\376B\000\000\027C_i_o_fixnum_difference");
lf[693]=C_h_intern(&lf[693],4,"fx+\077");
lf[694]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_o_fixnum_plus");
lf[695]=C_h_intern(&lf[695],3,"fx\052");
lf[696]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_times");
lf[697]=C_h_intern(&lf[697],5,"fxnot");
lf[698]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_not");
lf[699]=C_h_intern(&lf[699],8,"\003syssize");
lf[700]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[701]=C_h_intern(&lf[701],13,"\003sysblock-ref");
lf[702]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_block_ref");
lf[703]=C_h_intern(&lf[703],8,"\003sysslot");
lf[704]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[705]=C_h_intern(&lf[705],7,"char<=\077");
lf[706]=C_decode_literal(C_heaptop,"\376B\000\000\030C_i_char_less_or_equal_p");
lf[707]=C_h_intern(&lf[707],7,"char>=\077");
lf[708]=C_decode_literal(C_heaptop,"\376B\000\000\033C_i_char_greater_or_equal_p");
lf[709]=C_h_intern(&lf[709],6,"char<\077");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_char_lessp");
lf[711]=C_h_intern(&lf[711],6,"char>\077");
lf[712]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_char_greaterp");
lf[713]=C_h_intern(&lf[713],6,"char=\077");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_char_equalp");
lf[715]=C_h_intern(&lf[715],10,"vector-ref");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_vector_ref");
lf[717]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[718]=C_h_intern(&lf[718],11,"string-set!");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_string_set");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\014C_setsubchar");
lf[721]=C_h_intern(&lf[721],10,"string-ref");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_string_ref");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\011C_subchar");
lf[724]=C_h_intern(&lf[724],11,"eof-object\077");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\006C_eofp");
lf[726]=C_h_intern(&lf[726],12,"proper-list\077");
lf[727]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_listp");
lf[728]=C_h_intern(&lf[728],5,"list\077");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_listp");
lf[730]=C_h_intern(&lf[730],8,"inexact\077");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_inexactp");
lf[732]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_inexactp");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\012C_nfixnump");
lf[734]=C_h_intern(&lf[734],6,"exact\077");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_exactp");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_exactp");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\011C_fixnump");
lf[738]=C_h_intern(&lf[738],22,"\003sysgeneric-structure\077");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\014C_structurep");
lf[740]=C_h_intern(&lf[740],8,"pointer\077");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_safe_pointerp");
lf[742]=C_h_intern(&lf[742],12,"\003syspointer\077");
lf[743]=C_decode_literal(C_heaptop,"\376B\000\000\015C_anypointerp");
lf[744]=C_h_intern(&lf[744],10,"fpinteger\077");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\020C_u_i_fpintegerp");
lf[746]=C_h_intern(&lf[746],7,"finite\077");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_finitep");
lf[748]=C_h_intern(&lf[748],7,"fixnum\077");
lf[749]=C_decode_literal(C_heaptop,"\376B\000\000\011C_fixnump");
lf[750]=C_h_intern(&lf[750],7,"flonum\077");
lf[751]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_flonump");
lf[752]=C_h_intern(&lf[752],8,"integer\077");
lf[753]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_integerp");
lf[754]=C_h_intern(&lf[754],5,"real\077");
lf[755]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[756]=C_h_intern(&lf[756],9,"rational\077");
lf[757]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_rationalp");
lf[758]=C_h_intern(&lf[758],8,"complex\077");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[760]=C_h_intern(&lf[760],7,"number\077");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[762]=C_h_intern(&lf[762],8,"boolean\077");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\012C_booleanp");
lf[764]=C_h_intern(&lf[764],5,"port\077");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_portp");
lf[766]=C_h_intern(&lf[766],10,"procedure\077");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_closurep");
lf[768]=C_h_intern(&lf[768],9,"\003syspair\077");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_pairp");
lf[770]=C_h_intern(&lf[770],5,"pair\077");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_pairp");
lf[772]=C_h_intern(&lf[772],11,"\003sysvector\077");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_vectorp");
lf[774]=C_h_intern(&lf[774],7,"vector\077");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_vectorp");
lf[776]=C_h_intern(&lf[776],7,"symbol\077");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_symbolp");
lf[778]=C_h_intern(&lf[778],9,"locative\077");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_locativep");
lf[780]=C_h_intern(&lf[780],7,"string\077");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_stringp");
lf[782]=C_h_intern(&lf[782],5,"char\077");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\007C_charp");
lf[784]=C_h_intern(&lf[784],3,"not");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_not");
lf[786]=C_h_intern(&lf[786],6,"length");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_length");
lf[788]=C_h_intern(&lf[788],9,"\003sysnull\077");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[790]=C_h_intern(&lf[790],5,"null\077");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[792]=C_h_intern(&lf[792],8,"list-ref");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_list_ref");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_list_ref");
lf[795]=C_h_intern(&lf[795],8,"\003syseqv\077");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_eqvp");
lf[797]=C_h_intern(&lf[797],4,"eqv\077");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_eqvp");
lf[799]=C_h_intern(&lf[799],7,"\003syseq\077");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[801]=C_h_intern(&lf[801],3,"eq\077");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[803]=C_h_intern(&lf[803],3,"cdr");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_cdr");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[806]=C_h_intern(&lf[806],6,"cddddr");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cddddr");
lf[808]=C_h_intern(&lf[808],5,"cdddr");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_cdddr");
lf[810]=C_h_intern(&lf[810],4,"cddr");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cddr");
lf[812]=C_h_intern(&lf[812],4,"cdar");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cdar");
lf[814]=C_h_intern(&lf[814],4,"caar");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_caar");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddddr");
lf[817]=C_h_intern(&lf[817],6,"cdddar");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdddar");
lf[819]=C_h_intern(&lf[819],6,"cddadr");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddadr");
lf[821]=C_h_intern(&lf[821],6,"cddaar");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddaar");
lf[823]=C_h_intern(&lf[823],6,"cdaddr");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaddr");
lf[825]=C_h_intern(&lf[825],6,"cdadar");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdadar");
lf[827]=C_h_intern(&lf[827],6,"cdaadr");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaadr");
lf[829]=C_h_intern(&lf[829],6,"cdaaar");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaaar");
lf[831]=C_h_intern(&lf[831],6,"cadddr");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[833]=C_h_intern(&lf[833],6,"caddar");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caddar");
lf[835]=C_h_intern(&lf[835],6,"cadadr");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadadr");
lf[837]=C_h_intern(&lf[837],6,"cadaar");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadaar");
lf[839]=C_h_intern(&lf[839],6,"caaddr");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caaddr");
lf[841]=C_h_intern(&lf[841],6,"caadar");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caadar");
lf[843]=C_h_intern(&lf[843],6,"caaaar");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caaaar");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdddr");
lf[846]=C_h_intern(&lf[846],5,"cddar");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cddar");
lf[848]=C_h_intern(&lf[848],5,"cdadr");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdadr");
lf[850]=C_h_intern(&lf[850],5,"cdaar");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdaar");
lf[852]=C_h_intern(&lf[852],5,"caddr");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[854]=C_h_intern(&lf[854],5,"cadar");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cadar");
lf[856]=C_h_intern(&lf[856],5,"caaar");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caaar");
lf[858]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cddr");
lf[859]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cdar");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_caar");
lf[861]=C_h_intern(&lf[861],22,"\003syscontinuation-graft");
lf[862]=C_decode_literal(C_heaptop,"\376B\000\000\024C_continuation_graft");
lf[863]=C_h_intern(&lf[863],12,"locative-ref");
lf[864]=C_decode_literal(C_heaptop,"\376B\000\000\016C_locative_ref");
lf[865]=C_h_intern(&lf[865],20,"\003syscall-with-values");
lf[866]=C_decode_literal(C_heaptop,"\376B\000\000\022C_call_with_values");
lf[867]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_call_with_values");
lf[868]=C_h_intern(&lf[868],16,"call-with-values");
lf[869]=C_decode_literal(C_heaptop,"\376B\000\000\022C_call_with_values");
lf[870]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_call_with_values");
lf[871]=C_decode_literal(C_heaptop,"\376B\000\000\010C_values");
lf[872]=C_decode_literal(C_heaptop,"\376B\000\000\010C_values");
lf[873]=C_h_intern(&lf[873],6,"fourth");
lf[874]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cadddr");
lf[875]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[876]=C_h_intern(&lf[876],5,"third");
lf[877]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_caddr");
lf[878]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[879]=C_h_intern(&lf[879],6,"second");
lf[880]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cadr");
lf[881]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cadr");
lf[882]=C_h_intern(&lf[882],5,"first");
lf[883]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[884]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[885]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cadddr");
lf[886]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[887]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_caddr");
lf[888]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[889]=C_h_intern(&lf[889],4,"cadr");
lf[890]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cadr");
lf[891]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cadr");
lf[892]=C_h_intern(&lf[892],7,"\003syscdr");
lf[893]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_cdr");
lf[894]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_cdr");
lf[895]=C_h_intern(&lf[895],7,"\003syscar");
lf[896]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[897]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[898]=C_h_intern(&lf[898],3,"car");
lf[899]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[900]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[901]=C_h_intern(&lf[901],9,"\003sysapply");
lf[902]=C_h_intern(&lf[902],5,"apply");
lf[903]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_i_equalp\376\377\016");
lf[904]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016");
lf[905]=C_h_intern(&lf[905],6,"equal\077");
lf[906]=C_h_intern(&lf[906],4,"sub1");
lf[907]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_decrease");
lf[908]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_fixnum_decrease");
lf[909]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_minus");
lf[910]=C_h_intern(&lf[910],4,"add1");
lf[911]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_increase");
lf[912]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_fixnum_increase");
lf[913]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_plus");
lf[914]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[915]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016");
lf[916]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_quotient\376\003\000\000\002\376\377\006\001\376\377\016");
lf[917]=C_h_intern(&lf[917],8,"quotient");
lf[918]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[919]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016");
lf[920]=C_h_intern(&lf[920],19,"\010compilerfold-inner");
lf[921]=C_h_intern(&lf[921],6,"remove");
lf[922]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021C_u_fixnum_negate\376\377\016");
lf[923]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_negate\376\377\016");
lf[924]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\025C_u_fixnum_difference\376\377\016");
lf[925]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_difference\376\377\016");
lf[926]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016");
lf[927]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_fixnum_times\376\377\016");
lf[928]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fixnum_plus");
lf[929]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_fixnum_plus");
lf[930]=C_h_intern(&lf[930],8,"\003sysput!");
lf[931]=C_h_intern(&lf[931],13,"\010compilerpure");
lf[932]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000"
"\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure\077\376\003\000\000\002\376\001\000\000\020\003sysfits-in-int\077\376\003\000"
"\000\002\376\001\000\000\031\003sysfits-in-unsigned-int\077\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003\000\000\002\376\001\000\000\011\003"
"sysfudge\376\003\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000"
"\002\376\001\000\000\007\003syseq\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000"
"\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\016\003syspermanent\077\376\377\016");
lf[933]=C_h_intern(&lf[933],15,"lset-difference");
lf[934]=C_h_intern(&lf[934],10,"lset-union");
C_register_lf2(lf,935,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1598,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3297 in k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in ... */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:792: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[436],C_fix(16),C_fix(2),lf[459],C_SCHEME_TRUE,C_fix(4));}

/* k3294 in k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in ... */
static void C_ccall f_3296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:791: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[438],C_fix(16),C_fix(2),lf[460],C_SCHEME_TRUE,C_fix(4));}

/* k3291 in k3288 in k3285 in k3282 in k3279 in k3276 in k3273 in k3270 in k3267 in k3264 in k3261 in k3258 in k3255 in k3252 in k3249 in k3246 in k3243 in k3240 in k3237 in k3234 in k3231 in k3228 in ... */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:789: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[351],C_fix(18),C_SCHEME_END_OF_LIST);}

/* k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in ... */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:507: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[52],C_fix(8),((C_word*)t0)[3]);}

/* k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in ... */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:497: rewrite-c..r */
f_2187(t2,lf[879],lf[880],lf[881],C_fix(1));}

/* k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in ... */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:498: rewrite-c..r */
f_2187(t2,lf[876],lf[877],lf[878],C_fix(2));}

/* k3105 in k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in ... */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:719: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[552],C_fix(5),lf[556],C_fix(0),lf[34]);}

/* k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in k3015 in ... */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:709: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[570],C_fix(16),C_fix(1),lf[571],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 in ... */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:495: rewrite-c..r */
f_2187(t2,lf[831],lf[885],lf[886],C_fix(3));}

/* k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in ... */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:496: rewrite-c..r */
f_2187(t2,lf[882],lf[883],lf[884],C_fix(0));}

/* k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3018 in ... */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:710: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[568],C_fix(16),C_fix(1),lf[569],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in ... */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:717: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[557],C_fix(2),C_fix(1),lf[559],C_SCHEME_TRUE);}

/* k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in k1656 in ... */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2392,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:538: rewrite */
t4=*((C_word*)lf[63]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[868],C_fix(8),t2);}

/* k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in ... */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:711: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[566],C_fix(16),C_fix(1),lf[567],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k1777 in k1774 in k1765 in eqv?-id in k1747 in k1744 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in k1625 in k1602 in k1599 in k1596 */
static void C_fcall f_1779(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1779,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[37],lf[38],lf[42],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_record4(&a,4,lf[37],lf[39],t2,t5));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* rewrite-c-w-v in k2388 in k2385 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2183 in k2180 in k1954 in k1951 in k1948 in k1747 in k1744 in k1662 in k1659 in ... */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2392,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=t8;
t10=C_i_cadr(t5);
t11=t10;
t12=C_slot(t9,C_fix(1));
t13=C_eqp(lf[44],t12);
if(C_truep(t13)){
t14=C_slot(t11,C_fix(1));
t15=C_eqp(lf[44],t14);
if(C_truep(t15)){
t16=C_slot(t11,C_fix(2));
t17=C_i_car(t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2426,a[2]=t11,a[3]=t4,a[4]=t9,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:519: get */
t19=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t19+1)))(5,t19,t18,t2,t17,lf[73]);}
else{
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3102 in k3099 in k3096 in k3093 in k3090 in k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in ... */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:718: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[557],C_fix(2),C_fix(1),lf[558],C_SCHEME_FALSE);}

/* k3087 in k3084 in k3081 in k3078 in k3075 in k3072 in k3069 in k3066 in k3063 in k3060 in k3057 in k3054 in k3051 in k3048 in k3045 in k3042 in k3039 in k3036 in k3033 in k3030 in k3027 in k3024 in ... */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:712: rewrite */
t3=*((C_word*)lf[63]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[561],C_fix(16),C_fix(1),lf[565],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* a4273 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4066 in k4063 in k3914 in k3911 in k3908 in k3905 in k3768 in k3765 in k3762 in k3759 in k3756 in k3753 in k3750 in ... */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4274,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_eqp(*((C_word*)lf[35]+1),lf[34]);
t10=(C_truep(t9)?C_a_i_list1(&a,1,lf[106]):C_a_i_list1(&a,1,lf[107]));
t11=t5;
t12=C_a_i_record4(&a,4,lf[37],lf[38],t10,t11);
t13=C_a_i_list2(&a,2,t4,t12);
t14=t1;
t15=t14;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_a_i_record4(&a,4,lf[37],lf[39],t8,t13));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[552] = {
{"f_2355:c_2dplatform_2escm",(void*)f_2355},
{"f_2356:c_2dplatform_2escm",(void*)f_2356},
{"f_2328:c_2dplatform_2escm",(void*)f_2328},
{"f_2352:c_2dplatform_2escm",(void*)f_2352},
{"f_1776:c_2dplatform_2escm",(void*)f_1776},
{"f_2678:c_2dplatform_2escm",(void*)f_2678},
{"f_2337:c_2dplatform_2escm",(void*)f_2337},
{"f_2334:c_2dplatform_2escm",(void*)f_2334},
{"f_2675:c_2dplatform_2escm",(void*)f_2675},
{"f_2672:c_2dplatform_2escm",(void*)f_2672},
{"f_1767:c_2dplatform_2escm",(void*)f_1767},
{"f_2331:c_2dplatform_2escm",(void*)f_2331},
{"f_2687:c_2dplatform_2escm",(void*)f_2687},
{"f_2684:c_2dplatform_2escm",(void*)f_2684},
{"f_3617:c_2dplatform_2escm",(void*)f_3617},
{"f_2681:c_2dplatform_2escm",(void*)f_2681},
{"f_3614:c_2dplatform_2escm",(void*)f_3614},
{"f_3611:c_2dplatform_2escm",(void*)f_3611},
{"f_2657:c_2dplatform_2escm",(void*)f_2657},
{"f_2654:c_2dplatform_2escm",(void*)f_2654},
{"f_3608:c_2dplatform_2escm",(void*)f_3608},
{"f_3605:c_2dplatform_2escm",(void*)f_3605},
{"f_3602:c_2dplatform_2escm",(void*)f_3602},
{"f_2651:c_2dplatform_2escm",(void*)f_2651},
{"f_1738:c_2dplatform_2escm",(void*)f_1738},
{"f_2669:c_2dplatform_2escm",(void*)f_2669},
{"f_2663:c_2dplatform_2escm",(void*)f_2663},
{"f_2666:c_2dplatform_2escm",(void*)f_2666},
{"f_2660:c_2dplatform_2escm",(void*)f_2660},
{"f_5036:c_2dplatform_2escm",(void*)f_5036},
{"f_5042:c_2dplatform_2escm",(void*)f_5042},
{"f_5040:c_2dplatform_2escm",(void*)f_5040},
{"f_1751:c_2dplatform_2escm",(void*)f_1751},
{"f_1749:c_2dplatform_2escm",(void*)f_1749},
{"f_2699:c_2dplatform_2escm",(void*)f_2699},
{"f_2696:c_2dplatform_2escm",(void*)f_2696},
{"f_2693:c_2dplatform_2escm",(void*)f_2693},
{"f_1746:c_2dplatform_2escm",(void*)f_1746},
{"f_2690:c_2dplatform_2escm",(void*)f_2690},
{"f_3161:c_2dplatform_2escm",(void*)f_3161},
{"f_1627:c_2dplatform_2escm",(void*)f_1627},
{"f_3164:c_2dplatform_2escm",(void*)f_3164},
{"f_3167:c_2dplatform_2escm",(void*)f_3167},
{"f_3772:c_2dplatform_2escm",(void*)f_3772},
{"f_3770:c_2dplatform_2escm",(void*)f_3770},
{"f_2636:c_2dplatform_2escm",(void*)f_2636},
{"f_2639:c_2dplatform_2escm",(void*)f_2639},
{"f_2609:c_2dplatform_2escm",(void*)f_2609},
{"f_5081:c_2dplatform_2escm",(void*)f_5081},
{"f_2630:c_2dplatform_2escm",(void*)f_2630},
{"f_3152:c_2dplatform_2escm",(void*)f_3152},
{"f_2633:c_2dplatform_2escm",(void*)f_2633},
{"f_3155:c_2dplatform_2escm",(void*)f_3155},
{"f_3158:c_2dplatform_2escm",(void*)f_3158},
{"f_2645:c_2dplatform_2escm",(void*)f_2645},
{"f_2648:c_2dplatform_2escm",(void*)f_2648},
{"f_1601:c_2dplatform_2escm",(void*)f_1601},
{"f_4199:c_2dplatform_2escm",(void*)f_4199},
{"f_1604:c_2dplatform_2escm",(void*)f_1604},
{"f_2642:c_2dplatform_2escm",(void*)f_2642},
{"f_5590:c_2dplatform_2escm",(void*)f_5590},
{"f_5567:c_2dplatform_2escm",(void*)f_5567},
{"f_2624:c_2dplatform_2escm",(void*)f_2624},
{"f_2627:c_2dplatform_2escm",(void*)f_2627},
{"f_4783:c_2dplatform_2escm",(void*)f_4783},
{"f_5565:c_2dplatform_2escm",(void*)f_5565},
{"f_2621:c_2dplatform_2escm",(void*)f_2621},
{"f_2618:c_2dplatform_2escm",(void*)f_2618},
{"f_2615:c_2dplatform_2escm",(void*)f_2615},
{"f_2612:c_2dplatform_2escm",(void*)f_2612},
{"f_3792:c_2dplatform_2escm",(void*)f_3792},
{"f_4991:c_2dplatform_2escm",(void*)f_4991},
{"f_3725:c_2dplatform_2escm",(void*)f_3725},
{"f_3728:c_2dplatform_2escm",(void*)f_3728},
{"f_3722:c_2dplatform_2escm",(void*)f_3722},
{"f_5574:c_2dplatform_2escm",(void*)f_5574},
{"f_4081:c_2dplatform_2escm",(void*)f_4081},
{"f_4087:c_2dplatform_2escm",(void*)f_4087},
{"f_4084:c_2dplatform_2escm",(void*)f_4084},
{"f_3707:c_2dplatform_2escm",(void*)f_3707},
{"f_3704:c_2dplatform_2escm",(void*)f_3704},
{"f_3701:c_2dplatform_2escm",(void*)f_3701},
{"f_4010:c_2dplatform_2escm",(void*)f_4010},
{"f_5515:c_2dplatform_2escm",(void*)f_5515},
{"f_4014:c_2dplatform_2escm",(void*)f_4014},
{"f_3632:c_2dplatform_2escm",(void*)f_3632},
{"f_3635:c_2dplatform_2escm",(void*)f_3635},
{"f_3638:c_2dplatform_2escm",(void*)f_3638},
{"f_2013:c_2dplatform_2escm",(void*)f_2013},
{"f_3767:c_2dplatform_2escm",(void*)f_3767},
{"f_3761:c_2dplatform_2escm",(void*)f_3761},
{"f_3620:c_2dplatform_2escm",(void*)f_3620},
{"f_3623:c_2dplatform_2escm",(void*)f_3623},
{"f_3764:c_2dplatform_2escm",(void*)f_3764},
{"f_4065:c_2dplatform_2escm",(void*)f_4065},
{"f_3626:c_2dplatform_2escm",(void*)f_3626},
{"f_3629:c_2dplatform_2escm",(void*)f_3629},
{"f_4068:c_2dplatform_2escm",(void*)f_4068},
{"f_3737:c_2dplatform_2escm",(void*)f_3737},
{"f_3731:c_2dplatform_2escm",(void*)f_3731},
{"f_4072:c_2dplatform_2escm",(void*)f_4072},
{"f_3734:c_2dplatform_2escm",(void*)f_3734},
{"f_3653:c_2dplatform_2escm",(void*)f_3653},
{"f_3650:c_2dplatform_2escm",(void*)f_3650},
{"f_3656:c_2dplatform_2escm",(void*)f_3656},
{"f_4075:c_2dplatform_2escm",(void*)f_4075},
{"f_4078:c_2dplatform_2escm",(void*)f_4078},
{"f_3659:c_2dplatform_2escm",(void*)f_3659},
{"f_3749:c_2dplatform_2escm",(void*)f_3749},
{"f_3746:c_2dplatform_2escm",(void*)f_3746},
{"f_3740:c_2dplatform_2escm",(void*)f_3740},
{"f_3641:c_2dplatform_2escm",(void*)f_3641},
{"f_3743:c_2dplatform_2escm",(void*)f_3743},
{"f_3647:c_2dplatform_2escm",(void*)f_3647},
{"f_3644:c_2dplatform_2escm",(void*)f_3644},
{"f_5670:c_2dplatform_2escm",(void*)f_5670},
{"f_3719:c_2dplatform_2escm",(void*)f_3719},
{"f_2062:c_2dplatform_2escm",(void*)f_2062},
{"f_3716:c_2dplatform_2escm",(void*)f_3716},
{"f_3713:c_2dplatform_2escm",(void*)f_3713},
{"f_3710:c_2dplatform_2escm",(void*)f_3710},
{"f_4099:c_2dplatform_2escm",(void*)f_4099},
{"f_4096:c_2dplatform_2escm",(void*)f_4096},
{"f_4093:c_2dplatform_2escm",(void*)f_4093},
{"f_4090:c_2dplatform_2escm",(void*)f_4090},
{"f_2059:c_2dplatform_2escm",(void*)f_2059},
{"f_5680:c_2dplatform_2escm",(void*)f_5680},
{"f_5695:c_2dplatform_2escm",(void*)f_5695},
{"f_2042:c_2dplatform_2escm",(void*)f_2042},
{"f_4002:c_2dplatform_2escm",(void*)f_4002},
{"f_4006:c_2dplatform_2escm",(void*)f_4006},
{"f_2954:c_2dplatform_2escm",(void*)f_2954},
{"f_2957:c_2dplatform_2escm",(void*)f_2957},
{"f_2951:c_2dplatform_2escm",(void*)f_2951},
{"f_2081:c_2dplatform_2escm",(void*)f_2081},
{"f_2011:c_2dplatform_2escm",(void*)f_2011},
{"f_2906:c_2dplatform_2escm",(void*)f_2906},
{"f_2903:c_2dplatform_2escm",(void*)f_2903},
{"f_2900:c_2dplatform_2escm",(void*)f_2900},
{"f_3758:c_2dplatform_2escm",(void*)f_3758},
{"f_3752:c_2dplatform_2escm",(void*)f_3752},
{"f_3755:c_2dplatform_2escm",(void*)f_3755},
{"f_2909:c_2dplatform_2escm",(void*)f_2909},
{"f_2933:c_2dplatform_2escm",(void*)f_2933},
{"f_2936:c_2dplatform_2escm",(void*)f_2936},
{"f_2939:c_2dplatform_2escm",(void*)f_2939},
{"f_2930:c_2dplatform_2escm",(void*)f_2930},
{"f_2963:c_2dplatform_2escm",(void*)f_2963},
{"f_2795:c_2dplatform_2escm",(void*)f_2795},
{"f_2969:c_2dplatform_2escm",(void*)f_2969},
{"f_2966:c_2dplatform_2escm",(void*)f_2966},
{"f_2792:c_2dplatform_2escm",(void*)f_2792},
{"f_2960:c_2dplatform_2escm",(void*)f_2960},
{"f_2798:c_2dplatform_2escm",(void*)f_2798},
{"f_4357:c_2dplatform_2escm",(void*)f_4357},
{"f_4354:c_2dplatform_2escm",(void*)f_4354},
{"f_3236:c_2dplatform_2escm",(void*)f_3236},
{"f_2918:c_2dplatform_2escm",(void*)f_2918},
{"f_3233:c_2dplatform_2escm",(void*)f_3233},
{"f_2915:c_2dplatform_2escm",(void*)f_2915},
{"f_3230:c_2dplatform_2escm",(void*)f_3230},
{"f_2912:c_2dplatform_2escm",(void*)f_2912},
{"f_3239:c_2dplatform_2escm",(void*)f_3239},
{"f_4324:c_2dplatform_2escm",(void*)f_4324},
{"f_3209:c_2dplatform_2escm",(void*)f_3209},
{"f_3206:c_2dplatform_2escm",(void*)f_3206},
{"f_2927:c_2dplatform_2escm",(void*)f_2927},
{"f_2924:c_2dplatform_2escm",(void*)f_2924},
{"f_3200:c_2dplatform_2escm",(void*)f_3200},
{"f_2921:c_2dplatform_2escm",(void*)f_2921},
{"f_3203:c_2dplatform_2escm",(void*)f_3203},
{"f_3272:c_2dplatform_2escm",(void*)f_3272},
{"f_3275:c_2dplatform_2escm",(void*)f_3275},
{"f_3278:c_2dplatform_2escm",(void*)f_3278},
{"f_3224:c_2dplatform_2escm",(void*)f_3224},
{"f_3221:c_2dplatform_2escm",(void*)f_3221},
{"f_3227:c_2dplatform_2escm",(void*)f_3227},
{"f_3918:c_2dplatform_2escm",(void*)f_3918},
{"f_3916:c_2dplatform_2escm",(void*)f_3916},
{"f_3913:c_2dplatform_2escm",(void*)f_3913},
{"f_3910:c_2dplatform_2escm",(void*)f_3910},
{"f_3383:c_2dplatform_2escm",(void*)f_3383},
{"f_3386:c_2dplatform_2escm",(void*)f_3386},
{"f_3380:c_2dplatform_2escm",(void*)f_3380},
{"f_3215:c_2dplatform_2escm",(void*)f_3215},
{"f_3212:c_2dplatform_2escm",(void*)f_3212},
{"f_3389:c_2dplatform_2escm",(void*)f_3389},
{"f_3218:c_2dplatform_2escm",(void*)f_3218},
{"f_3332:c_2dplatform_2escm",(void*)f_3332},
{"f_3245:c_2dplatform_2escm",(void*)f_3245},
{"f_3335:c_2dplatform_2escm",(void*)f_3335},
{"f_3242:c_2dplatform_2escm",(void*)f_3242},
{"f_3338:c_2dplatform_2escm",(void*)f_3338},
{"f_3248:c_2dplatform_2escm",(void*)f_3248},
{"f_3365:c_2dplatform_2escm",(void*)f_3365},
{"f_3362:c_2dplatform_2escm",(void*)f_3362},
{"f_3368:c_2dplatform_2escm",(void*)f_3368},
{"f_3907:c_2dplatform_2escm",(void*)f_3907},
{"f_3395:c_2dplatform_2escm",(void*)f_3395},
{"f_3392:c_2dplatform_2escm",(void*)f_3392},
{"f_2942:c_2dplatform_2escm",(void*)f_2942},
{"f_2774:c_2dplatform_2escm",(void*)f_2774},
{"f_2945:c_2dplatform_2escm",(void*)f_2945},
{"f_3398:c_2dplatform_2escm",(void*)f_3398},
{"f_2771:c_2dplatform_2escm",(void*)f_2771},
{"f_2948:c_2dplatform_2escm",(void*)f_2948},
{"f_2777:c_2dplatform_2escm",(void*)f_2777},
{"f_3954:c_2dplatform_2escm",(void*)f_3954},
{"f_2786:c_2dplatform_2escm",(void*)f_2786},
{"f_2783:c_2dplatform_2escm",(void*)f_2783},
{"f_2780:c_2dplatform_2escm",(void*)f_2780},
{"f_2789:c_2dplatform_2escm",(void*)f_2789},
{"f_4576:c_2dplatform_2escm",(void*)f_4576},
{"f_3374:c_2dplatform_2escm",(void*)f_3374},
{"f_3371:c_2dplatform_2escm",(void*)f_3371},
{"f_3377:c_2dplatform_2escm",(void*)f_3377},
{"f_2232:c_2dplatform_2escm",(void*)f_2232},
{"f_3937:c_2dplatform_2escm",(void*)f_3937},
{"f_3098:c_2dplatform_2escm",(void*)f_3098},
{"f_3095:c_2dplatform_2escm",(void*)f_3095},
{"f_3092:c_2dplatform_2escm",(void*)f_3092},
{"f_4526:c_2dplatform_2escm",(void*)f_4526},
{"f_2229:c_2dplatform_2escm",(void*)f_2229},
{"f_3305:c_2dplatform_2escm",(void*)f_3305},
{"f_3308:c_2dplatform_2escm",(void*)f_3308},
{"f_3302:c_2dplatform_2escm",(void*)f_3302},
{"f_2252:c_2dplatform_2escm",(void*)f_2252},
{"f_3317:c_2dplatform_2escm",(void*)f_3317},
{"f_3311:c_2dplatform_2escm",(void*)f_3311},
{"f_3314:c_2dplatform_2escm",(void*)f_3314},
{"f_2298:c_2dplatform_2escm",(void*)f_2298},
{"f_1997:c_2dplatform_2escm",(void*)f_1997},
{"f_3476:c_2dplatform_2escm",(void*)f_3476},
{"f_3473:c_2dplatform_2escm",(void*)f_3473},
{"f_3470:c_2dplatform_2escm",(void*)f_3470},
{"f_3479:c_2dplatform_2escm",(void*)f_3479},
{"f_4828:c_2dplatform_2escm",(void*)f_4828},
{"f_4822:c_2dplatform_2escm",(void*)f_4822},
{"f_5636:c_2dplatform_2escm",(void*)f_5636},
{"f_3464:c_2dplatform_2escm",(void*)f_3464},
{"f_3461:c_2dplatform_2escm",(void*)f_3461},
{"f_1956:c_2dplatform_2escm",(void*)f_1956},
{"f_3467:c_2dplatform_2escm",(void*)f_3467},
{"f_1958:c_2dplatform_2escm",(void*)f_1958},
{"f_3494:c_2dplatform_2escm",(void*)f_3494},
{"f_3491:c_2dplatform_2escm",(void*)f_3491},
{"f_3497:c_2dplatform_2escm",(void*)f_3497},
{"f_4806:c_2dplatform_2escm",(void*)f_4806},
{"f_3485:c_2dplatform_2escm",(void*)f_3485},
{"f_3482:c_2dplatform_2escm",(void*)f_3482},
{"f_3488:c_2dplatform_2escm",(void*)f_3488},
{"f_2205:c_2dplatform_2escm",(void*)f_2205},
{"f_1991:c_2dplatform_2escm",(void*)f_1991},
{"f_2534:c_2dplatform_2escm",(void*)f_2534},
{"f_2538:c_2dplatform_2escm",(void*)f_2538},
{"f_3431:c_2dplatform_2escm",(void*)f_3431},
{"f_3437:c_2dplatform_2escm",(void*)f_3437},
{"f_3434:c_2dplatform_2escm",(void*)f_3434},
{"f_1968:c_2dplatform_2escm",(void*)f_1968},
{"f_3260:c_2dplatform_2escm",(void*)f_3260},
{"f_3263:c_2dplatform_2escm",(void*)f_3263},
{"f_3266:c_2dplatform_2escm",(void*)f_3266},
{"f_3269:c_2dplatform_2escm",(void*)f_3269},
{"f_4862:c_2dplatform_2escm",(void*)f_4862},
{"f_3584:c_2dplatform_2escm",(void*)f_3584},
{"f_4932:c_2dplatform_2escm",(void*)f_4932},
{"f_3581:c_2dplatform_2escm",(void*)f_3581},
{"f_3422:c_2dplatform_2escm",(void*)f_3422},
{"f_3425:c_2dplatform_2escm",(void*)f_3425},
{"f_3587:c_2dplatform_2escm",(void*)f_3587},
{"f_3428:c_2dplatform_2escm",(void*)f_3428},
{"f_5151:c_2dplatform_2escm",(void*)f_5151},
{"f_3251:c_2dplatform_2escm",(void*)f_3251},
{"f_3254:c_2dplatform_2escm",(void*)f_3254},
{"f_3257:c_2dplatform_2escm",(void*)f_3257},
{"f_4859:c_2dplatform_2escm",(void*)f_4859},
{"f_3575:c_2dplatform_2escm",(void*)f_3575},
{"f_3572:c_2dplatform_2escm",(void*)f_3572},
{"f_3578:c_2dplatform_2escm",(void*)f_3578},
{"f_1906:c_2dplatform_2escm",(void*)f_1906},
{"f_5167:c_2dplatform_2escm",(void*)f_5167},
{"f_3281:c_2dplatform_2escm",(void*)f_3281},
{"f_3287:c_2dplatform_2escm",(void*)f_3287},
{"f_3284:c_2dplatform_2escm",(void*)f_3284},
{"f_3563:c_2dplatform_2escm",(void*)f_3563},
{"f_3566:c_2dplatform_2escm",(void*)f_3566},
{"f_3560:c_2dplatform_2escm",(void*)f_3560},
{"f_3569:c_2dplatform_2escm",(void*)f_3569},
{"f_1953:c_2dplatform_2escm",(void*)f_1953},
{"f_1950:c_2dplatform_2escm",(void*)f_1950},
{"f_3551:c_2dplatform_2escm",(void*)f_3551},
{"f_3557:c_2dplatform_2escm",(void*)f_3557},
{"f_3554:c_2dplatform_2escm",(void*)f_3554},
{"f_2505:c_2dplatform_2escm",(void*)f_2505},
{"f_5330:c_2dplatform_2escm",(void*)f_5330},
{"f_3419:c_2dplatform_2escm",(void*)f_3419},
{"f_3416:c_2dplatform_2escm",(void*)f_3416},
{"f_3413:c_2dplatform_2escm",(void*)f_3413},
{"f_3410:c_2dplatform_2escm",(void*)f_3410},
{"f_3407:c_2dplatform_2escm",(void*)f_3407},
{"f_3401:c_2dplatform_2escm",(void*)f_3401},
{"f_3404:c_2dplatform_2escm",(void*)f_3404},
{"f_4730:c_2dplatform_2escm",(void*)f_4730},
{"f_1598:c_2dplatform_2escm",(void*)f_1598},
{"f_3596:c_2dplatform_2escm",(void*)f_3596},
{"f_3593:c_2dplatform_2escm",(void*)f_3593},
{"f_3590:c_2dplatform_2escm",(void*)f_3590},
{"f_3599:c_2dplatform_2escm",(void*)f_3599},
{"f_5209:c_2dplatform_2escm",(void*)f_5209},
{"f_2984:c_2dplatform_2escm",(void*)f_2984},
{"f_2981:c_2dplatform_2escm",(void*)f_2981},
{"f_2987:c_2dplatform_2escm",(void*)f_2987},
{"f_4733:c_2dplatform_2escm",(void*)f_4733},
{"f_3509:c_2dplatform_2escm",(void*)f_3509},
{"f_5211:c_2dplatform_2escm",(void*)f_5211},
{"f_3506:c_2dplatform_2escm",(void*)f_3506},
{"f_3503:c_2dplatform_2escm",(void*)f_3503},
{"f_5218:c_2dplatform_2escm",(void*)f_5218},
{"f_3500:c_2dplatform_2escm",(void*)f_3500},
{"f_3341:c_2dplatform_2escm",(void*)f_3341},
{"f_3344:c_2dplatform_2escm",(void*)f_3344},
{"f_3347:c_2dplatform_2escm",(void*)f_3347},
{"f_4695:c_2dplatform_2escm",(void*)f_4695},
{"f_5234:c_2dplatform_2escm",(void*)f_5234},
{"f_1652:c_2dplatform_2escm",(void*)f_1652},
{"f_1655:c_2dplatform_2escm",(void*)f_1655},
{"f_1658:c_2dplatform_2escm",(void*)f_1658},
{"f_3323:c_2dplatform_2escm",(void*)f_3323},
{"f_3320:c_2dplatform_2escm",(void*)f_3320},
{"f_4382:c_2dplatform_2escm",(void*)f_4382},
{"f_3326:c_2dplatform_2escm",(void*)f_3326},
{"f_3329:c_2dplatform_2escm",(void*)f_3329},
{"f_3350:c_2dplatform_2escm",(void*)f_3350},
{"f_3353:c_2dplatform_2escm",(void*)f_3353},
{"f_3356:c_2dplatform_2escm",(void*)f_3356},
{"f_3359:c_2dplatform_2escm",(void*)f_3359},
{"f_2996:c_2dplatform_2escm",(void*)f_2996},
{"f_2993:c_2dplatform_2escm",(void*)f_2993},
{"f_2990:c_2dplatform_2escm",(void*)f_2990},
{"f_2999:c_2dplatform_2escm",(void*)f_2999},
{"f_1661:c_2dplatform_2escm",(void*)f_1661},
{"f_1666:c_2dplatform_2escm",(void*)f_1666},
{"f_1664:c_2dplatform_2escm",(void*)f_1664},
{"f_1668:c_2dplatform_2escm",(void*)f_1668},
{"f_2975:c_2dplatform_2escm",(void*)f_2975},
{"f_2972:c_2dplatform_2escm",(void*)f_2972},
{"f_2978:c_2dplatform_2escm",(void*)f_2978},
{"f_4899:c_2dplatform_2escm",(void*)f_4899},
{"f_3518:c_2dplatform_2escm",(void*)f_3518},
{"f_3515:c_2dplatform_2escm",(void*)f_3515},
{"f_3512:c_2dplatform_2escm",(void*)f_3512},
{"f_1649:c_2dplatform_2escm",(void*)f_1649},
{"f_2819:c_2dplatform_2escm",(void*)f_2819},
{"f_2816:c_2dplatform_2escm",(void*)f_2816},
{"f_2813:c_2dplatform_2escm",(void*)f_2813},
{"f_2810:c_2dplatform_2escm",(void*)f_2810},
{"f_3452:c_2dplatform_2escm",(void*)f_3452},
{"f_3455:c_2dplatform_2escm",(void*)f_3455},
{"f_2843:c_2dplatform_2escm",(void*)f_2843},
{"f_3458:c_2dplatform_2escm",(void*)f_3458},
{"f_2849:c_2dplatform_2escm",(void*)f_2849},
{"f_2846:c_2dplatform_2escm",(void*)f_2846},
{"f_2840:c_2dplatform_2escm",(void*)f_2840},
{"f_3440:c_2dplatform_2escm",(void*)f_3440},
{"f_3443:c_2dplatform_2escm",(void*)f_3443},
{"f_2834:c_2dplatform_2escm",(void*)f_2834},
{"f_3446:c_2dplatform_2escm",(void*)f_3446},
{"f_3449:c_2dplatform_2escm",(void*)f_3449},
{"f_2837:c_2dplatform_2escm",(void*)f_2837},
{"f_4653:c_2dplatform_2escm",(void*)f_4653},
{"f_2831:c_2dplatform_2escm",(void*)f_2831},
{"f_3860:c_2dplatform_2escm",(void*)f_3860},
{"f_3862:c_2dplatform_2escm",(void*)f_3862},
{"f_2864:c_2dplatform_2escm",(void*)f_2864},
{"f_2867:c_2dplatform_2escm",(void*)f_2867},
{"f_2861:c_2dplatform_2escm",(void*)f_2861},
{"f_4628:c_2dplatform_2escm",(void*)f_4628},
{"f_3807:c_2dplatform_2escm",(void*)f_3807},
{"f_4604:c_2dplatform_2escm",(void*)f_4604},
{"f_4600:c_2dplatform_2escm",(void*)f_4600},
{"f_2807:c_2dplatform_2escm",(void*)f_2807},
{"f_2804:c_2dplatform_2escm",(void*)f_2804},
{"f_2801:c_2dplatform_2escm",(void*)f_2801},
{"f_2825:c_2dplatform_2escm",(void*)f_2825},
{"f_2828:c_2dplatform_2escm",(void*)f_2828},
{"f_2822:c_2dplatform_2escm",(void*)f_2822},
{"f_5099:c_2dplatform_2escm",(void*)f_5099},
{"f_5485:c_2dplatform_2escm",(void*)f_5485},
{"f_5489:c_2dplatform_2escm",(void*)f_5489},
{"f_2735:c_2dplatform_2escm",(void*)f_2735},
{"f_2732:c_2dplatform_2escm",(void*)f_2732},
{"f_2738:c_2dplatform_2escm",(void*)f_2738},
{"f_3542:c_2dplatform_2escm",(void*)f_3542},
{"f_3545:c_2dplatform_2escm",(void*)f_3545},
{"f_2852:c_2dplatform_2escm",(void*)f_2852},
{"f_3548:c_2dplatform_2escm",(void*)f_3548},
{"f_2855:c_2dplatform_2escm",(void*)f_2855},
{"f_2858:c_2dplatform_2escm",(void*)f_2858},
{"f_2726:c_2dplatform_2escm",(void*)f_2726},
{"f_2723:c_2dplatform_2escm",(void*)f_2723},
{"f_2720:c_2dplatform_2escm",(void*)f_2720},
{"f_3530:c_2dplatform_2escm",(void*)f_3530},
{"f_3533:c_2dplatform_2escm",(void*)f_3533},
{"f_4467:c_2dplatform_2escm",(void*)f_4467},
{"f_3536:c_2dplatform_2escm",(void*)f_3536},
{"f_3539:c_2dplatform_2escm",(void*)f_3539},
{"f_2729:c_2dplatform_2escm",(void*)f_2729},
{"f_2717:c_2dplatform_2escm",(void*)f_2717},
{"f_2711:c_2dplatform_2escm",(void*)f_2711},
{"f_2714:c_2dplatform_2escm",(void*)f_2714},
{"f_3521:c_2dplatform_2escm",(void*)f_3521},
{"f_3524:c_2dplatform_2escm",(void*)f_3524},
{"f_3527:c_2dplatform_2escm",(void*)f_3527},
{"f_2708:c_2dplatform_2escm",(void*)f_2708},
{"f_2705:c_2dplatform_2escm",(void*)f_2705},
{"f_2702:c_2dplatform_2escm",(void*)f_2702},
{"f_5287:c_2dplatform_2escm",(void*)f_5287},
{"f_5289:c_2dplatform_2escm",(void*)f_5289},
{"f_4141:c_2dplatform_2escm",(void*)f_4141},
{"f_4496:c_2dplatform_2escm",(void*)f_4496},
{"f_2762:c_2dplatform_2escm",(void*)f_2762},
{"f_2765:c_2dplatform_2escm",(void*)f_2765},
{"f_2768:c_2dplatform_2escm",(void*)f_2768},
{"f_5409:c_2dplatform_2escm",(void*)f_5409},
{"f_5407:c_2dplatform_2escm",(void*)f_5407},
{"f_2187:c_2dplatform_2escm",(void*)f_2187},
{"f_2753:c_2dplatform_2escm",(void*)f_2753},
{"f_2185:c_2dplatform_2escm",(void*)f_2185},
{"f_2756:c_2dplatform_2escm",(void*)f_2756},
{"f_2759:c_2dplatform_2escm",(void*)f_2759},
{"f_2750:c_2dplatform_2escm",(void*)f_2750},
{"f_2182:c_2dplatform_2escm",(void*)f_2182},
{"f_4120:c_2dplatform_2escm",(void*)f_4120},
{"f_4129:c_2dplatform_2escm",(void*)f_4129},
{"f_4126:c_2dplatform_2escm",(void*)f_4126},
{"f_4123:c_2dplatform_2escm",(void*)f_4123},
{"f_2118:c_2dplatform_2escm",(void*)f_2118},
{"f_2744:c_2dplatform_2escm",(void*)f_2744},
{"f_2747:c_2dplatform_2escm",(void*)f_2747},
{"f_2741:c_2dplatform_2escm",(void*)f_2741},
{"f_4131:c_2dplatform_2escm",(void*)f_4131},
{"f_4102:c_2dplatform_2escm",(void*)f_4102},
{"f_4105:c_2dplatform_2escm",(void*)f_4105},
{"f_4108:c_2dplatform_2escm",(void*)f_4108},
{"f_2894:c_2dplatform_2escm",(void*)f_2894},
{"f_2891:c_2dplatform_2escm",(void*)f_2891},
{"f_4111:c_2dplatform_2escm",(void*)f_4111},
{"f_4117:c_2dplatform_2escm",(void*)f_4117},
{"f_4114:c_2dplatform_2escm",(void*)f_4114},
{"f_2897:c_2dplatform_2escm",(void*)f_2897},
{"f_2876:c_2dplatform_2escm",(void*)f_2876},
{"f_2873:c_2dplatform_2escm",(void*)f_2873},
{"f_2870:c_2dplatform_2escm",(void*)f_2870},
{"f_3053:c_2dplatform_2escm",(void*)f_3053},
{"f_2193:c_2dplatform_2escm",(void*)f_2193},
{"f_3050:c_2dplatform_2escm",(void*)f_3050},
{"f_3056:c_2dplatform_2escm",(void*)f_3056},
{"f_3059:c_2dplatform_2escm",(void*)f_3059},
{"f_4441:c_2dplatform_2escm",(void*)f_4441},
{"f_4411:c_2dplatform_2escm",(void*)f_4411},
{"f_3146:c_2dplatform_2escm",(void*)f_3146},
{"f_3143:c_2dplatform_2escm",(void*)f_3143},
{"f_3044:c_2dplatform_2escm",(void*)f_3044},
{"f_3140:c_2dplatform_2escm",(void*)f_3140},
{"f_3041:c_2dplatform_2escm",(void*)f_3041},
{"f_3149:c_2dplatform_2escm",(void*)f_3149},
{"f_3047:c_2dplatform_2escm",(void*)f_3047},
{"f_3197:c_2dplatform_2escm",(void*)f_3197},
{"f_3191:c_2dplatform_2escm",(void*)f_3191},
{"f_3194:c_2dplatform_2escm",(void*)f_3194},
{"f_3134:c_2dplatform_2escm",(void*)f_3134},
{"f_3131:c_2dplatform_2escm",(void*)f_3131},
{"f_3071:c_2dplatform_2escm",(void*)f_3071},
{"f_3074:c_2dplatform_2escm",(void*)f_3074},
{"f_3077:c_2dplatform_2escm",(void*)f_3077},
{"f_3137:c_2dplatform_2escm",(void*)f_3137},
{"f_3125:c_2dplatform_2escm",(void*)f_3125},
{"f_3062:c_2dplatform_2escm",(void*)f_3062},
{"f_3122:c_2dplatform_2escm",(void*)f_3122},
{"f_3065:c_2dplatform_2escm",(void*)f_3065},
{"f_3128:c_2dplatform_2escm",(void*)f_3128},
{"f_3068:c_2dplatform_2escm",(void*)f_3068},
{"f_3113:c_2dplatform_2escm",(void*)f_3113},
{"f_3116:c_2dplatform_2escm",(void*)f_3116},
{"f_3110:c_2dplatform_2escm",(void*)f_3110},
{"f_3014:c_2dplatform_2escm",(void*)f_3014},
{"f_3011:c_2dplatform_2escm",(void*)f_3011},
{"f_3119:c_2dplatform_2escm",(void*)f_3119},
{"f_3017:c_2dplatform_2escm",(void*)f_3017},
{"f_3182:c_2dplatform_2escm",(void*)f_3182},
{"f_3185:c_2dplatform_2escm",(void*)f_3185},
{"f_3008:c_2dplatform_2escm",(void*)f_3008},
{"f_3188:c_2dplatform_2escm",(void*)f_3188},
{"f_3002:c_2dplatform_2escm",(void*)f_3002},
{"f_3005:c_2dplatform_2escm",(void*)f_3005},
{"f_2453:c_2dplatform_2escm",(void*)f_2453},
{"f_3674:c_2dplatform_2escm",(void*)f_3674},
{"f_3173:c_2dplatform_2escm",(void*)f_3173},
{"f_3671:c_2dplatform_2escm",(void*)f_3671},
{"f_3170:c_2dplatform_2escm",(void*)f_3170},
{"f_3176:c_2dplatform_2escm",(void*)f_3176},
{"f_3677:c_2dplatform_2escm",(void*)f_3677},
{"f_3035:c_2dplatform_2escm",(void*)f_3035},
{"f_3032:c_2dplatform_2escm",(void*)f_3032},
{"f_3179:c_2dplatform_2escm",(void*)f_3179},
{"f_3038:c_2dplatform_2escm",(void*)f_3038},
{"f_3665:c_2dplatform_2escm",(void*)f_3665},
{"f_3662:c_2dplatform_2escm",(void*)f_3662},
{"f_2456:c_2dplatform_2escm",(void*)f_2456},
{"f_2459:c_2dplatform_2escm",(void*)f_2459},
{"f_3026:c_2dplatform_2escm",(void*)f_3026},
{"f_3023:c_2dplatform_2escm",(void*)f_3023},
{"f_3668:c_2dplatform_2escm",(void*)f_3668},
{"f_3020:c_2dplatform_2escm",(void*)f_3020},
{"f_3029:c_2dplatform_2escm",(void*)f_3029},
{"f_3695:c_2dplatform_2escm",(void*)f_3695},
{"f_2426:c_2dplatform_2escm",(void*)f_2426},
{"f_3692:c_2dplatform_2escm",(void*)f_3692},
{"f_2885:c_2dplatform_2escm",(void*)f_2885},
{"f_2882:c_2dplatform_2escm",(void*)f_2882},
{"f_3698:c_2dplatform_2escm",(void*)f_3698},
{"f_2879:c_2dplatform_2escm",(void*)f_2879},
{"f_5437:c_2dplatform_2escm",(void*)f_5437},
{"f_5439:c_2dplatform_2escm",(void*)f_5439},
{"f_3686:c_2dplatform_2escm",(void*)f_3686},
{"f_3683:c_2dplatform_2escm",(void*)f_3683},
{"f_3680:c_2dplatform_2escm",(void*)f_3680},
{"f_3689:c_2dplatform_2escm",(void*)f_3689},
{"f_2888:c_2dplatform_2escm",(void*)f_2888},
{"f_3290:c_2dplatform_2escm",(void*)f_3290},
{"f_4206:c_2dplatform_2escm",(void*)f_4206},
{"toplevel:c_2dplatform_2escm",(void*)C_platform_toplevel},
{"f_3299:c_2dplatform_2escm",(void*)f_3299},
{"f_3296:c_2dplatform_2escm",(void*)f_3296},
{"f_3293:c_2dplatform_2escm",(void*)f_3293},
{"f_2387:c_2dplatform_2escm",(void*)f_2387},
{"f_2346:c_2dplatform_2escm",(void*)f_2346},
{"f_2349:c_2dplatform_2escm",(void*)f_2349},
{"f_3107:c_2dplatform_2escm",(void*)f_3107},
{"f_3080:c_2dplatform_2escm",(void*)f_3080},
{"f_2340:c_2dplatform_2escm",(void*)f_2340},
{"f_2343:c_2dplatform_2escm",(void*)f_2343},
{"f_3083:c_2dplatform_2escm",(void*)f_3083},
{"f_3101:c_2dplatform_2escm",(void*)f_3101},
{"f_2390:c_2dplatform_2escm",(void*)f_2390},
{"f_3086:c_2dplatform_2escm",(void*)f_3086},
{"f_1779:c_2dplatform_2escm",(void*)f_1779},
{"f_2392:c_2dplatform_2escm",(void*)f_2392},
{"f_3104:c_2dplatform_2escm",(void*)f_3104},
{"f_3089:c_2dplatform_2escm",(void*)f_3089},
{"f_4274:c_2dplatform_2escm",(void*)f_4274},
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
S|  map		1
S|  for-each		1
o|eliminated procedure checks: 59 
o|specializations:
o|  2 (eqv? (not float) *)
o|  1 (memq * list)
o|  17 (= fixnum fixnum)
o|  3 (>= fixnum fixnum)
o|  3 (cdr pair)
o|  2 (car pair)
o|  6 (first pair)
o|  1 (##sys#check-list (or pair list) *)
o|safe globals: (##compiler#non-foldable-bindings ##compiler#internal-bindings ##compiler#default-extended-bindings ##compiler#default-standard-bindings ##compiler#valid-compiler-options-with-argument ##compiler#valid-compiler-options ##compiler#target-include-file ##compiler#membership-unfold-limit ##compiler#membership-test-operators ##compiler#eq-inline-operator ##compiler#unlikely-variables small-parameter-limit ##compiler#parameter-limit ##compiler#words-per-flonum ##compiler#units-used-by-default ##compiler#default-profiling-declarations ##compiler#default-debugging-declarations ##compiler#default-declarations ##compiler#default-optimization-passes) 
o|Removed `not' forms: 3 
o|inlining procedure: k1670 
o|contracted procedure: "(c-platform.scm:371) g260261" 
o|inlining procedure: k1693 
o|contracted procedure: "(c-platform.scm:376) g265266" 
o|inlining procedure: k1712 
o|inlining procedure: k1712 
o|inlining procedure: k1693 
o|contracted procedure: "(c-platform.scm:377) g270271" 
o|inlining procedure: k1670 
o|substituted constant variable: a1743 
o|inlining procedure: k1753 
o|inlining procedure: k1771 
o|contracted procedure: "(c-platform.scm:398) g326327" 
o|contracted procedure: "(c-platform.scm:400) g331332" 
o|inlining procedure: k1771 
o|inlining procedure: k1805 
o|contracted procedure: "(c-platform.scm:397) g323324" 
o|inlining procedure: k1805 
o|contracted procedure: "(c-platform.scm:396) g320321" 
o|contracted procedure: "(c-platform.scm:395) g316317" 
o|contracted procedure: "(c-platform.scm:394) g313314" 
o|inlining procedure: k1875 
o|contracted procedure: "(c-platform.scm:393) g303304" 
o|contracted procedure: "(c-platform.scm:392) g300301" 
o|contracted procedure: "(c-platform.scm:392) g297298" 
o|inlining procedure: k1875 
o|contracted procedure: "(c-platform.scm:391) g293294" 
o|contracted procedure: "(c-platform.scm:390) g289290" 
o|inlining procedure: k1753 
o|substituted constant variable: a1947 
o|inlining procedure: k1960 
o|contracted procedure: "(c-platform.scm:440) g428429" 
o|inlining procedure: k2015 
o|inlining procedure: k2015 
o|contracted procedure: "(c-platform.scm:444) g452453" 
o|inlining procedure: k2063 
o|inlining procedure: k2063 
o|contracted procedure: "(c-platform.scm:455) g489490" 
o|contracted procedure: "(c-platform.scm:457) g494495" 
o|inlining procedure: k2094 
o|substituted constant variable: a2107 
o|inlining procedure: k2108 
o|contracted procedure: "(c-platform.scm:450) g479480" 
o|contracted procedure: "(c-platform.scm:452) g484485" 
o|inlining procedure: k2108 
o|contracted procedure: "(c-platform.scm:449) g476477" 
o|contracted procedure: "(c-platform.scm:447) g471472" 
o|inlining procedure: k2094 
o|substituted constant variable: a2157 
o|contracted procedure: "(c-platform.scm:445) g466467" 
o|contracted procedure: "(c-platform.scm:439) g425426" 
o|inlining procedure: k1960 
o|inlining procedure: k2195 
o|contracted procedure: "(c-platform.scm:474) g513514" 
o|inlining procedure: k2227 
o|contracted procedure: "(c-platform.scm:480) g529530" 
o|inlining procedure: k2227 
o|contracted procedure: "(c-platform.scm:486) g535536" 
o|inlining procedure: k2271 
o|contracted procedure: "(c-platform.scm:487) g540541" 
o|inlining procedure: k2271 
o|contracted procedure: "(c-platform.scm:479) g526527" 
o|contracted procedure: "(c-platform.scm:478) g523524" 
o|inlining procedure: k2195 
o|substituted constant variable: a2325 
o|inlining procedure: k2358 
o|contracted procedure: "(c-platform.scm:505) g561562" 
o|inlining procedure: k2358 
o|substituted constant variable: a2384 
o|inlining procedure: k2394 
o|inlining procedure: k2412 
o|inlining procedure: k2427 
o|inlining procedure: k2439 
o|contracted procedure: "(c-platform.scm:527) g603604" 
o|contracted procedure: "(c-platform.scm:535) g618619" 
o|contracted procedure: "(c-platform.scm:529) g608609" 
o|contracted procedure: "(c-platform.scm:532) g613614" 
o|contracted procedure: "(c-platform.scm:526) g600601" 
o|substituted constant variable: a2552 
o|inlining procedure: k2439 
o|contracted procedure: "(c-platform.scm:521) g593594" 
o|contracted procedure: "(c-platform.scm:520) g589590" 
o|inlining procedure: k2427 
o|contracted procedure: "(c-platform.scm:518) g584585" 
o|inlining procedure: k2412 
o|contracted procedure: "(c-platform.scm:517) g580581" 
o|contracted procedure: "(c-platform.scm:516) g576577" 
o|inlining procedure: k2394 
o|substituted constant variable: a2602 
o|inlining procedure: k3777 
o|inlining procedure: k3796 
o|contracted procedure: "(c-platform.scm:1048) g740741" 
o|contracted procedure: "(c-platform.scm:1052) g745746" 
o|contracted procedure: "(c-platform.scm:1055) g750751" 
o|contracted procedure: "(c-platform.scm:1047) g735736" 
o|inlining procedure: k3796 
o|contracted procedure: "(c-platform.scm:1042) g729730" 
o|contracted procedure: "(c-platform.scm:1040) g724725" 
o|inlining procedure: k3777 
o|inlining procedure: k3920 
o|inlining procedure: k3938 
o|inlining procedure: k3956 
o|contracted procedure: k3968 
o|contracted procedure: k3974 
o|inlining procedure: k3971 
o|inlining procedure: k3971 
o|contracted procedure: k3980 
o|contracted procedure: "(c-platform.scm:1082) g791792" 
o|inlining procedure: k3956 
o|contracted procedure: "(c-platform.scm:1073) g777778" 
o|contracted procedure: "(c-platform.scm:1072) g773774" 
o|inlining procedure: k3938 
o|contracted procedure: "(c-platform.scm:1071) g770771" 
o|contracted procedure: "(c-platform.scm:1070) g766767" 
o|inlining procedure: k3920 
o|substituted constant variable: a4058 
o|inlining procedure: k4133 
o|contracted procedure: "(c-platform.scm:1195) g887888" 
o|contracted procedure: "(c-platform.scm:1199) g892893" 
o|contracted procedure: "(c-platform.scm:1202) g897898" 
o|inlining procedure: k4133 
o|substituted constant variable: a4200 
o|inlining procedure: k4208 
o|contracted procedure: "(c-platform.scm:1178) g866867" 
o|contracted procedure: "(c-platform.scm:1181) g871872" 
o|contracted procedure: "(c-platform.scm:1184) g876877" 
o|inlining procedure: k4208 
o|substituted constant variable: a4268 
o|inlining procedure: k4276 
o|contracted procedure: "(c-platform.scm:1155) g851852" 
o|contracted procedure: "(c-platform.scm:1158) g856857" 
o|inlining procedure: k4312 
o|inlining procedure: k4312 
o|inlining procedure: k4276 
o|substituted constant variable: a4318 
o|inlining procedure: k4326 
o|contracted procedure: "(c-platform.scm:1141) g829830" 
o|inlining procedure: k4352 
o|inlining procedure: k4352 
o|contracted procedure: "(c-platform.scm:1147) g841842" 
o|contracted procedure: "(c-platform.scm:1145) g838839" 
o|contracted procedure: "(c-platform.scm:1144) g835836" 
o|inlining procedure: k4326 
o|substituted constant variable: a4405 
o|inlining procedure: k4413 
o|inlining procedure: k4431 
o|contracted procedure: "(c-platform.scm:1125) g818819" 
o|substituted constant variable: setter-map 
o|inlining procedure: k4431 
o|contracted procedure: "(c-platform.scm:1123) g814815" 
o|contracted procedure: "(c-platform.scm:1122) g810811" 
o|contracted procedure: "(c-platform.scm:1121) g806807" 
o|inlining procedure: k4413 
o|substituted constant variable: a4490 
o|inlining procedure: k4498 
o|contracted procedure: "(c-platform.scm:940) g679680" 
o|inlining procedure: k4527 
o|inlining procedure: k4527 
o|contracted procedure: "(c-platform.scm:955) g705706" 
o|contracted procedure: "(c-platform.scm:956) g710711" 
o|inlining procedure: k4559 
o|inlining procedure: k4571 
o|contracted procedure: "(c-platform.scm:948) g695696" 
o|contracted procedure: "(c-platform.scm:951) g700701" 
o|inlining procedure: k4571 
o|contracted procedure: "(c-platform.scm:945) g691692" 
o|inlining procedure: k4559 
o|contracted procedure: "(c-platform.scm:943) g687688" 
o|inlining procedure: k4498 
o|substituted constant variable: a4647 
o|inlining procedure: k4655 
o|contracted procedure: "(c-platform.scm:908) g655656" 
o|contracted procedure: "(c-platform.scm:911) g660661" 
o|inlining procedure: k4693 
o|contracted procedure: "(c-platform.scm:915) g670671" 
o|inlining procedure: k4693 
o|contracted procedure: "(c-platform.scm:914) g667668" 
o|inlining procedure: k4655 
o|substituted constant variable: a4728 
o|contracted procedure: "(c-platform.scm:860) g638639" 
o|contracted procedure: "(c-platform.scm:863) g643644" 
o|inlining procedure: k4767 
o|inlining procedure: k4767 
o|substituted constant variable: a4802 
o|substituted constant variable: a4804 
o|inlining procedure: k4808 
o|inlining procedure: k4829 
o|inlining procedure: k4829 
o|contracted procedure: "(c-platform.scm:426) g407408" 
o|contracted procedure: "(c-platform.scm:428) g412413" 
o|contracted procedure: "(c-platform.scm:423) g397398" 
o|contracted procedure: "(c-platform.scm:425) g402403" 
o|inlining procedure: k4888 
o|contracted procedure: "(c-platform.scm:421) g391392" 
o|inlining procedure: k4888 
o|contracted procedure: "(c-platform.scm:420) g387388" 
o|inlining procedure: k4933 
o|inlining procedure: k4933 
o|contracted procedure: "(c-platform.scm:418) g380381" 
o|contracted procedure: "(c-platform.scm:417) g376377" 
o|inlining procedure: k4960 
o|contracted procedure: "(c-platform.scm:416) g363364" 
o|contracted procedure: "(c-platform.scm:415) g360361" 
o|contracted procedure: "(c-platform.scm:415) g357358" 
o|inlining procedure: k4960 
o|contracted procedure: "(c-platform.scm:414) g353354" 
o|contracted procedure: "(c-platform.scm:413) g349350" 
o|inlining procedure: k4808 
o|substituted constant variable: a5032 
o|inlining procedure: k5044 
o|contracted procedure: "(c-platform.scm:348) g218219" 
o|inlining procedure: k5076 
o|contracted procedure: "(c-platform.scm:354) g231232" 
o|inlining procedure: k5076 
o|contracted procedure: "(c-platform.scm:357) g236237" 
o|contracted procedure: "(c-platform.scm:353) g228229" 
o|contracted procedure: "(c-platform.scm:352) g225226" 
o|contracted procedure: "(c-platform.scm:358) g241242" 
o|contracted procedure: "(c-platform.scm:360) g246247" 
o|inlining procedure: k5044 
o|substituted constant variable: a5165 
o|inlining procedure: k5169 
o|inlining procedure: k5184 
o|contracted procedure: "(c-platform.scm:329) g189190" 
o|inlining procedure: k5213 
o|contracted procedure: "(c-platform.scm:336) g203204" 
o|inlining procedure: k5213 
o|contracted procedure: "(c-platform.scm:337) g208209" 
o|contracted procedure: "(c-platform.scm:335) g200201" 
o|contracted procedure: "(c-platform.scm:335) g197198" 
o|inlining procedure: k5184 
o|substituted constant variable: a5279 
o|inlining procedure: k5291 
o|contracted procedure: "(c-platform.scm:325) g184185" 
o|inlining procedure: k5291 
o|contracted procedure: "(c-platform.scm:324) g181182" 
o|inlining procedure: k5169 
o|substituted constant variable: a5328 
o|inlining procedure: k5332 
o|inlining procedure: k5332 
o|contracted procedure: "(c-platform.scm:286) g140141" 
o|contracted procedure: "(c-platform.scm:289) g145146" 
o|inlining procedure: k5376 
o|contracted procedure: "(c-platform.scm:302) g161162" 
o|contracted procedure: "(c-platform.scm:308) g168169" 
o|substituted constant variable: a5431 
o|inlining procedure: k5376 
o|inlining procedure: k5441 
o|contracted procedure: "(c-platform.scm:298) g156157" 
o|inlining procedure: k5441 
o|contracted procedure: "(c-platform.scm:297) g153154" 
o|inlining procedure: k5490 
o|contracted procedure: "(c-platform.scm:259) g9798" 
o|inlining procedure: k5490 
o|contracted procedure: "(c-platform.scm:261) g102103" 
o|inlining procedure: k5540 
o|contracted procedure: "(c-platform.scm:263) g107108" 
o|inlining procedure: k5569 
o|contracted procedure: "(c-platform.scm:270) g121122" 
o|inlining procedure: k5569 
o|contracted procedure: "(c-platform.scm:271) g126127" 
o|contracted procedure: "(c-platform.scm:269) g118119" 
o|contracted procedure: "(c-platform.scm:269) g115116" 
o|inlining procedure: k5540 
o|inlining procedure: k5638 
o|contracted procedure: "(c-platform.scm:257) g9091" 
o|inlining procedure: k5638 
o|contracted procedure: "(c-platform.scm:256) g8788" 
o|inlining procedure: k5672 
o|contracted procedure: "(c-platform.scm:229) g4552" 
o|contracted procedure: "(c-platform.scm:230) g6061" 
o|inlining procedure: k5672 
o|simplifications: ((if . 1)) 
o|replaced variables: 533 
o|removed binding forms: 609 
o|substituted constant variable: c262 
o|substituted constant variable: c267 
o|substituted constant variable: c272 
o|substituted constant variable: r16715705 
o|substituted constant variable: c328 
o|substituted constant variable: c333 
o|substituted constant variable: p334 
o|substituted constant variable: r17725708 
o|substituted constant variable: r18065710 
o|substituted constant variable: c305 
o|substituted constant variable: r18765712 
o|substituted constant variable: r17545713 
o|substituted constant variable: c430 
o|substituted constant variable: c491 
o|substituted constant variable: c496 
o|substituted constant variable: p497 
o|substituted constant variable: s498 
o|substituted constant variable: c481 
o|substituted constant variable: c486 
o|substituted constant variable: p487 
o|substituted constant variable: s488 
o|substituted constant variable: r21095721 
o|substituted constant variable: r20955723 
o|substituted constant variable: r19615724 
o|substituted constant variable: c515 
o|substituted constant variable: c531 
o|substituted constant variable: c537 
o|substituted constant variable: c542 
o|substituted constant variable: r21965732 
o|substituted constant variable: c563 
o|substituted constant variable: r23595734 
o|substituted constant variable: c605 
o|substituted constant variable: c620 
o|substituted constant variable: c610 
o|substituted constant variable: c615 
o|substituted constant variable: r24405739 
o|substituted constant variable: r24285740 
o|substituted constant variable: r24135741 
o|substituted constant variable: r23955742 
o|substituted constant variable: c742 
o|substituted constant variable: c747 
o|substituted constant variable: c752 
o|substituted constant variable: c737 
o|substituted constant variable: p738 
o|substituted constant variable: s739 
o|substituted constant variable: r37975745 
o|substituted constant variable: r37785746 
o|substituted constant variable: r39725750 
o|substituted constant variable: c793 
o|substituted constant variable: r39575752 
o|substituted constant variable: r39395753 
o|substituted constant variable: r39215754 
o|removed side-effect free assignment to unused variable: setter-map 
o|substituted constant variable: c889 
o|substituted constant variable: c894 
o|substituted constant variable: c899 
o|substituted constant variable: p900 
o|substituted constant variable: r41345756 
o|substituted constant variable: c868 
o|substituted constant variable: c873 
o|substituted constant variable: p874 
o|substituted constant variable: c878 
o|substituted constant variable: p879 
o|substituted constant variable: r42095758 
o|substituted constant variable: c853 
o|substituted constant variable: c858 
o|substituted constant variable: r43135760 
o|substituted constant variable: r43135760 
o|substituted constant variable: r43135762 
o|substituted constant variable: r43135762 
o|substituted constant variable: r42775764 
o|substituted constant variable: c831 
o|substituted constant variable: c843 
o|substituted constant variable: p844 
o|substituted constant variable: r43275770 
o|substituted constant variable: c820 
o|substituted constant variable: r44325773 
o|substituted constant variable: r44145774 
o|converted assignments to bindings: (rewrite-call/cc758) 
o|converted assignments to bindings: (rewrite-make-vector715) 
o|substituted constant variable: c681 
o|substituted constant variable: c707 
o|substituted constant variable: p708 
o|substituted constant variable: c712 
o|substituted constant variable: c697 
o|substituted constant variable: p698 
o|substituted constant variable: c702 
o|substituted constant variable: p703 
o|substituted constant variable: r45725782 
o|substituted constant variable: r45605783 
o|substituted constant variable: r44995784 
o|substituted constant variable: c657 
o|substituted constant variable: c662 
o|substituted constant variable: r46945787 
o|substituted constant variable: r46565788 
o|substituted constant variable: c640 
o|substituted constant variable: c645 
o|substituted constant variable: p646 
o|converted assignments to bindings: (build635) 
o|converted assignments to bindings: (rewrite-c-w-v567) 
o|converted assignments to bindings: (rewrite-c..r501) 
o|converted assignments to bindings: (rewrite-apply417) 
o|substituted constant variable: c409 
o|substituted constant variable: c414 
o|substituted constant variable: p415 
o|substituted constant variable: c399 
o|substituted constant variable: c404 
o|substituted constant variable: p405 
o|substituted constant variable: r48895795 
o|substituted constant variable: c365 
o|substituted constant variable: r49615799 
o|substituted constant variable: r48095800 
o|converted assignments to bindings: (eqv?-id277) 
o|converted assignments to bindings: (op1251) 
o|substituted constant variable: c220 
o|substituted constant variable: c233 
o|substituted constant variable: p234 
o|substituted constant variable: c238 
o|substituted constant variable: p239 
o|substituted constant variable: c243 
o|substituted constant variable: c248 
o|substituted constant variable: p249 
o|substituted constant variable: s250 
o|substituted constant variable: r50455806 
o|substituted constant variable: c191 
o|substituted constant variable: c205 
o|substituted constant variable: p206 
o|substituted constant variable: c210 
o|substituted constant variable: p211 
o|substituted constant variable: r51855811 
o|substituted constant variable: r52925813 
o|substituted constant variable: r51705814 
o|substituted constant variable: r53335815 
o|substituted constant variable: c142 
o|substituted constant variable: c147 
o|substituted constant variable: c163 
o|substituted constant variable: c170 
o|substituted constant variable: r53775818 
o|substituted constant variable: r54425820 
o|substituted constant variable: c99 
o|substituted constant variable: c104 
o|substituted constant variable: c109 
o|substituted constant variable: c123 
o|substituted constant variable: p124 
o|substituted constant variable: c128 
o|substituted constant variable: p129 
o|substituted constant variable: r55415826 
o|substituted constant variable: r56395828 
o|substituted constant variable: mark68 
o|substituted constant variable: g5153 
o|simplifications: ((let . 8)) 
o|replaced variables: 87 
o|removed binding forms: 536 
o|removed conditional forms: 1 
o|inlining procedure: k4690 
o|inlining procedure: k4690 
o|inlining procedure: k4690 
o|inlining procedure: k5370 
o|inlining procedure: k5370 
o|inlining procedure: k1632 
o|replaced variables: 155 
o|removed binding forms: 229 
o|substituted constant variable: r46915845 
o|substituted constant variable: r46915845 
o|substituted constant variable: r46915850 
o|substituted constant variable: r46915850 
o|substituted constant variable: r46915855 
o|substituted constant variable: r46915855 
o|substituted constant variable: r53715860 
o|substituted constant variable: r53715860 
o|substituted constant variable: r53715865 
o|substituted constant variable: r53715865 
o|substituted constant variable: r16335870 
o|replaced variables: 5 
o|removed binding forms: 158 
o|removed binding forms: 16 
o|simplifications: ((if . 8) (##core#call . 395)) 
o|  call simplifications:
o|    null?	5
o|    zero?
o|    fx>=	3
o|    symbol?	2
o|    negative?
o|    -
o|    assq
o|    =
o|    fixnum?	2
o|    <=
o|    add1
o|    third	4
o|    proper-list?
o|    cadr	2
o|    cdr	4
o|    ##sys#check-list
o|    pair?	5
o|    cons	4
o|    ##sys#setslot
o|    second	9
o|    equal?	2
o|    ##sys#slot	58
o|    first	24
o|    flonum?	2
o|    not	4
o|    length	22
o|    eq?	61
o|    car	10
o|    list	92
o|    ##sys#make-structure	70
o|contracted procedure: k1740 
o|contracted procedure: k1673 
o|contracted procedure: k1685 
o|contracted procedure: k1689 
o|contracted procedure: k1696 
o|inlining procedure: k1708 
o|inlining procedure: k1708 
o|contracted procedure: k1724 
o|contracted procedure: k1732 
o|contracted procedure: k1728 
o|contracted procedure: k1944 
o|contracted procedure: k1756 
o|contracted procedure: k1759 
o|contracted procedure: k1762 
o|contracted procedure: k1789 
o|contracted procedure: k1802 
o|contracted procedure: k1793 
o|contracted procedure: k1837 
o|contracted procedure: k1808 
o|contracted procedure: k1828 
o|contracted procedure: k1819 
o|contracted procedure: k1815 
o|contracted procedure: k1869 
o|contracted procedure: k1840 
o|contracted procedure: k1860 
o|contracted procedure: k1851 
o|contracted procedure: k1847 
o|contracted procedure: k1940 
o|contracted procedure: k1872 
o|contracted procedure: k1931 
o|contracted procedure: k1878 
o|contracted procedure: k1913 
o|contracted procedure: k1922 
o|contracted procedure: k1884 
o|contracted procedure: k1896 
o|contracted procedure: k1900 
o|contracted procedure: k1963 
o|contracted procedure: k2177 
o|contracted procedure: k1973 
o|contracted procedure: k1985 
o|contracted procedure: k1999 
o|contracted procedure: k2053 
o|contracted procedure: k2003 
o|contracted procedure: k2006 
o|contracted procedure: k2018 
o|contracted procedure: k2021 
o|contracted procedure: k2032 
o|contracted procedure: k2044 
o|contracted procedure: k2075 
o|contracted procedure: k2088 
o|contracted procedure: k2168 
o|contracted procedure: k2091 
o|contracted procedure: k2159 
o|contracted procedure: k2097 
o|contracted procedure: k2154 
o|contracted procedure: k2100 
o|contracted procedure: k2128 
o|contracted procedure: k2141 
o|contracted procedure: k2145 
o|contracted procedure: k2132 
o|contracted procedure: k2322 
o|contracted procedure: k2198 
o|contracted procedure: k2207 
o|contracted procedure: k2219 
o|contracted procedure: k2223 
o|contracted procedure: k2242 
o|contracted procedure: k2246 
o|contracted procedure: k2256 
o|contracted procedure: k2268 
o|contracted procedure: k2283 
o|contracted procedure: k2318 
o|contracted procedure: k2289 
o|contracted procedure: k2309 
o|contracted procedure: k2300 
o|contracted procedure: k2381 
o|contracted procedure: k2361 
o|contracted procedure: k2373 
o|contracted procedure: k2377 
o|contracted procedure: k2604 
o|contracted procedure: k2397 
o|contracted procedure: k2400 
o|contracted procedure: k2403 
o|contracted procedure: k2599 
o|contracted procedure: k2409 
o|contracted procedure: k2590 
o|contracted procedure: k2415 
o|contracted procedure: k2581 
o|contracted procedure: k2418 
o|contracted procedure: k2572 
o|contracted procedure: k2433 
o|contracted procedure: k2563 
o|contracted procedure: k2436 
o|contracted procedure: k2442 
o|contracted procedure: k2554 
o|contracted procedure: k2448 
o|contracted procedure: k2469 
o|contracted procedure: k2540 
o|contracted procedure: k2507 
o|contracted procedure: k2524 
o|contracted procedure: k2528 
o|contracted procedure: k2520 
o|contracted procedure: k2511 
o|contracted procedure: k2482 
o|contracted procedure: k2495 
o|contracted procedure: k2499 
o|contracted procedure: k2491 
o|contracted procedure: k2473 
o|contracted procedure: k2549 
o|contracted procedure: k3774 
o|contracted procedure: k3780 
o|contracted procedure: k3902 
o|contracted procedure: k3787 
o|contracted procedure: k3893 
o|contracted procedure: k3793 
o|contracted procedure: k3799 
o|contracted procedure: k3871 
o|contracted procedure: k3808 
o|contracted procedure: k3820 
o|contracted procedure: k3837 
o|contracted procedure: k3868 
o|contracted procedure: k3854 
o|contracted procedure: k3850 
o|contracted procedure: k3841 
o|contracted procedure: k3833 
o|contracted procedure: k3824 
o|contracted procedure: k4060 
o|contracted procedure: k3923 
o|contracted procedure: k3926 
o|contracted procedure: k4055 
o|contracted procedure: k3932 
o|contracted procedure: k4033 
o|contracted procedure: k3944 
o|contracted procedure: k4024 
o|contracted procedure: k3947 
o|contracted procedure: k3959 
o|contracted procedure: k3962 
o|contracted procedure: k3992 
o|contracted procedure: k3996 
o|contracted procedure: k4046 
o|contracted procedure: k4037 
o|contracted procedure: k4202 
o|contracted procedure: k4136 
o|contracted procedure: k4151 
o|contracted procedure: k4159 
o|contracted procedure: k4172 
o|contracted procedure: k4193 
o|contracted procedure: k4189 
o|contracted procedure: k4185 
o|contracted procedure: k4176 
o|contracted procedure: k4168 
o|contracted procedure: k4155 
o|contracted procedure: k4270 
o|contracted procedure: k4211 
o|contracted procedure: k4223 
o|contracted procedure: k4261 
o|contracted procedure: k4265 
o|contracted procedure: k4257 
o|contracted procedure: k4249 
o|contracted procedure: k4253 
o|contracted procedure: k4240 
o|contracted procedure: k4236 
o|contracted procedure: k4227 
o|contracted procedure: k4320 
o|contracted procedure: k4279 
o|contracted procedure: k4291 
o|contracted procedure: k4315 
o|contracted procedure: k4308 
o|contracted procedure: k4304 
o|contracted procedure: k4295 
o|contracted procedure: k4407 
o|contracted procedure: k4329 
o|contracted procedure: k4332 
o|contracted procedure: k4344 
o|contracted procedure: k4348 
o|contracted procedure: k4370 
o|contracted procedure: k4402 
o|contracted procedure: k4373 
o|contracted procedure: k4393 
o|contracted procedure: k4384 
o|contracted procedure: k4492 
o|contracted procedure: k4416 
o|contracted procedure: k4419 
o|contracted procedure: k4487 
o|contracted procedure: k4425 
o|contracted procedure: k4478 
o|contracted procedure: k4428 
o|contracted procedure: k4442 
o|contracted procedure: k4457 
o|contracted procedure: k4461 
o|contracted procedure: k4469 
o|contracted procedure: k4649 
o|contracted procedure: k4501 
o|contracted procedure: k4504 
o|contracted procedure: k4516 
o|inlining procedure: k4520 
o|inlining procedure: k4520 
o|contracted procedure: k4533 
o|contracted procedure: k4553 
o|contracted procedure: k4644 
o|contracted procedure: k4556 
o|contracted procedure: k4562 
o|contracted procedure: k4635 
o|contracted procedure: k4565 
o|contracted procedure: k4580 
o|contracted procedure: k4592 
o|contracted procedure: k4614 
o|contracted procedure: k4619 
o|contracted procedure: k4725 
o|contracted procedure: k4658 
o|contracted procedure: k4670 
o|contracted procedure: k4674 
o|contracted procedure: k4687 
o|contracted procedure: k4721 
o|contracted procedure: k4696 
o|contracted procedure: k4712 
o|contracted procedure: k4703 
o|contracted procedure: k4744 
o|contracted procedure: k4761 
o|contracted procedure: k4757 
o|contracted procedure: k4748 
o|contracted procedure: k4764 
o|contracted procedure: k4770 
o|contracted procedure: k4777 
o|contracted procedure: k4787 
o|contracted procedure: k4794 
o|contracted procedure: k4798 
o|contracted procedure: k5029 
o|contracted procedure: k4811 
o|contracted procedure: k4814 
o|contracted procedure: k4817 
o|contracted procedure: k4841 
o|contracted procedure: k4854 
o|contracted procedure: k4845 
o|contracted procedure: k4872 
o|contracted procedure: k4885 
o|contracted procedure: k4876 
o|contracted procedure: k4921 
o|contracted procedure: k4891 
o|contracted procedure: k4912 
o|contracted procedure: k4894 
o|contracted procedure: k4954 
o|contracted procedure: k4924 
o|contracted procedure: k4945 
o|contracted procedure: k4927 
o|contracted procedure: k5025 
o|contracted procedure: k4957 
o|contracted procedure: k5016 
o|contracted procedure: k4963 
o|contracted procedure: k4998 
o|contracted procedure: k5007 
o|contracted procedure: k4969 
o|contracted procedure: k4981 
o|contracted procedure: k4985 
o|contracted procedure: k5162 
o|contracted procedure: k5047 
o|contracted procedure: k5053 
o|contracted procedure: k5065 
o|contracted procedure: k5069 
o|contracted procedure: k5072 
o|contracted procedure: k5091 
o|contracted procedure: k5133 
o|contracted procedure: k5108 
o|contracted procedure: k5124 
o|contracted procedure: k5115 
o|contracted procedure: k5145 
o|contracted procedure: k5158 
o|contracted procedure: k5325 
o|contracted procedure: k5172 
o|contracted procedure: k5281 
o|contracted procedure: k5175 
o|contracted procedure: k5181 
o|contracted procedure: k5276 
o|contracted procedure: k5187 
o|contracted procedure: k5199 
o|contracted procedure: k5203 
o|contracted procedure: k5228 
o|contracted procedure: k5244 
o|contracted procedure: k5272 
o|contracted procedure: k5247 
o|contracted procedure: k5263 
o|contracted procedure: k5254 
o|contracted procedure: k5319 
o|contracted procedure: k5294 
o|contracted procedure: k5310 
o|contracted procedure: k5301 
o|contracted procedure: k5335 
o|contracted procedure: k5481 
o|contracted procedure: k5474 
o|contracted procedure: k5341 
o|contracted procedure: k5353 
o|contracted procedure: k5357 
o|contracted procedure: k5373 
o|contracted procedure: k5379 
o|contracted procedure: k5428 
o|contracted procedure: k5385 
o|contracted procedure: k5397 
o|contracted procedure: k5401 
o|contracted procedure: k5420 
o|contracted procedure: k5424 
o|contracted procedure: k5469 
o|contracted procedure: k5444 
o|contracted procedure: k5460 
o|contracted procedure: k5451 
o|contracted procedure: k5493 
o|contracted procedure: k5505 
o|contracted procedure: k5509 
o|contracted procedure: k5632 
o|contracted procedure: k5519 
o|contracted procedure: k5531 
o|contracted procedure: k5535 
o|contracted procedure: k5543 
o|contracted procedure: k5555 
o|contracted procedure: k5559 
o|contracted procedure: k5584 
o|contracted procedure: k5600 
o|contracted procedure: k5628 
o|contracted procedure: k5603 
o|contracted procedure: k5619 
o|contracted procedure: k5610 
o|contracted procedure: k5666 
o|contracted procedure: k5641 
o|contracted procedure: k5657 
o|contracted procedure: k5648 
o|contracted procedure: k5675 
o|contracted procedure: k5685 
o|contracted procedure: k5689 
o|contracted procedure: k1638 
o|contracted procedure: k1632 
o|simplifications: ((let . 19)) 
o|removed binding forms: 324 
o|inlining procedure: k1693 
o|inlining procedure: k1693 
o|inlining procedure: k1693 
o|inlining procedure: k2024 
o|inlining procedure: k2024 
o|inlining procedure: k2227 
o|inlining procedure: k2227 
o|inlining procedure: k2227 
o|inlining procedure: k4352 
o|inlining procedure: k4527 
o|inlining procedure: k4527 
o|inlining procedure: k4683 
o|inlining procedure: k4683 
o|inlining procedure: k4683 
o|inlining procedure: k5076 
o|inlining procedure: k5076 
o|inlining procedure: k5366 
o|inlining procedure: k5366 
o|replaced variables: 56 
o|removed binding forms: 2 
o|removed binding forms: 44 
o|replaced variables: 6 
o|removed binding forms: 2 
o|direct leaf routine/allocation: build635 28 
o|customizable procedures: (for-each-loop4475 k5572 k5216 k5079 op1251 k4820 k4857 k4860 k4826 rewrite-c..r501 k4574 k4524 k4355 k2230 k2060 map-loop435455 k1765 k1774 k1777) 
o|calls to known targets: 61 
o|fast box initializations: 2 
o|dropping unused closure argument: f_1666 
o|dropping unused closure argument: f_2187 
*/
/* end of file */
